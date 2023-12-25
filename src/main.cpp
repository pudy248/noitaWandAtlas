#include <cmath>
#include <vector>
#include <stdint.h>

#include "spawnableStructs.h"
#include "noita_random.h"
#include "wandgen.h"
#include "potions.h"

Material createPotion(double x, double y, int seed, int type)
{
	NollaPRNG rnd = NollaPRNG(seed);
	rnd.SetRandomSeed(x - 4.5, y - 4);
	switch (type)
	{
	case 0:
		if (rnd.Random(0, 100) <= 75)
		{
			if (rnd.Random(0, 100000) <= 50)
				return MAGIC_LIQUID_HP_REGENERATION;
			else if (rnd.Random(200, 100000) <= 250)
				return PURIFYING_POWDER;
			else if (rnd.Random(250, 100000) <= 500)
				return MAGIC_LIQUID_WEAKNESS;
			else
				return potionMaterialsMagic[rnd.Random(0, magicMaterialCount - 1)];
		}
		else
			return potionMaterialsStandard[rnd.Random(0, standardMaterialCount - 1)];

		break;
	case 1:
		return potionMaterialsSecret[rnd.Random(0, secretMaterialCount - 1)];
		break;
	case 2:
		if (rnd.Random(0, 100) <= 50)
			return potionLiquids[rnd.Random(0, liquidMaterialCount - 1)];
		else
			return potionSands[rnd.Random(0, sandMaterialCount - 1)];
		break;
	}
}
int roundRNGPos(int num)
{
	if (-1000000 < num && num < 1000000) return num;
	else if (-10000000 < num && num < 10000000) return roundf(num / 10.0) * 10;
	else if (-100000000 < num && num < 100000000) return roundf(num / 100.0) * 100;
	return num;
}

void* CheckGreatChestLoot(int x, int y, uint32_t worldSeed, bool wand)
{
	if(x == 0 && y == 0) return {};
	NollaPRNG random = NollaPRNG(worldSeed);
	random.SetRandomSeed(roundRNGPos(x), y);

	int count = 1;
	std::vector<Material> mats;

	if (random.Random(0, 100000) >= 100000)
	{
		return nullptr;
	}

	while (count != 0)
	{
		count--;
		int rnd = random.Random(1, 100);

		if (rnd <= 30) {
			if (!wand) {
				rnd = random.Random(0, 100);
				if (rnd <= 30)
				{
					mats.emplace_back(createPotion(x, y, worldSeed, 0));
					mats.emplace_back(createPotion(x, y, worldSeed, 0));
					mats.emplace_back(createPotion(x, y, worldSeed, 1));
				}
				else
				{
					mats.emplace_back(createPotion(x, y, worldSeed, 1));
					mats.emplace_back(createPotion(x, y, worldSeed, 1));
					mats.emplace_back(createPotion(x, y, worldSeed, 2));
				}
			}
			continue;
		}
		else if (rnd <= 33)
		{
			continue;
		}
		else if (rnd <= 38)
		{
			rnd = random.Random(1, 30);
			continue;
		}
		else if (rnd <= 39)
		{
			rnd = random.Random(0, 100);
			if (wand) {
				Wand* w = new Wand;
				if (rnd <= 25) *w = GetWandWithLevel(worldSeed, x, y, 3, false);
				else if (rnd <= 50) *w = GetWandWithLevel(worldSeed, x, y, 3, true);
				else if (rnd <= 75) *w = GetWandWithLevel(worldSeed, x, y, 4, false);
				else if (rnd <= 90) *w = GetWandWithLevel(worldSeed, x, y, 4, true);
				else if (rnd <= 96) *w = GetWandWithLevel(worldSeed, x, y, 5, false);
				else if (rnd <= 98) *w = GetWandWithLevel(worldSeed, x, y, 5, true);
				else if (rnd <= 99) *w = GetWandWithLevel(worldSeed, x, y, 6, false);
				else *w = GetWandWithLevel(worldSeed, x, y, 6, true);
				return (void*)w;
			}
			else continue;
		}
		else if (rnd <= 60)
		{
			rnd = random.Random(0, 100);
			continue;
		}
		else if (rnd <= 99)
			count += 2;
		else
			count += 3;
	}
	if(!wand) {
		return (void*)(new std::vector<Material>(std::move(mats)));
	}
	return nullptr;
}

double search_spiral_result[13] = {};

double x_center = 0.0;
double y_center = 0.0;

double x_off = 0.0;
double y_off = 0.0;

double x_step_mult = 1.0;
double y_step_mult = 1.0;

double x_step = 1.0;
double y_step = 0.0;

uint32_t world_seed = 0;
double stat_threshold = 27;
int stat_or_mat = 0;
bool lt = false;
bool ns = false;
bool noac = false;

uint32_t searched_pixels = 0;
int search_mode = 0;

const double epsilon = 0.1;

bool wand_spiral_step(int x, int y) {
	Wand wand;
	if (search_mode == 0) {
		Wand* w = (Wand*)CheckGreatChestLoot(x, y, world_seed, true);
		if (!w) return false;
		wand = *w;
		delete w;
	}
	else if(search_mode == 1) wand = GetWandWithLevel(world_seed, x, y, 3, false);
	else wand = GetWandWithLevel(world_seed, x + 16, y, 11, true);
	bool passed = false;
	switch(stat_or_mat) {
		case 1:
			passed = wand.multicast >= stat_threshold;
			break;
		case 2:
			passed = wand.delay / 60.0 >= stat_threshold;
			break;
		case 3:
			passed = wand.reload / 60.0 >= stat_threshold;
			break;
		case 4:
			passed = wand.mana >= stat_threshold;
			break;
		case 5:
			passed = wand.regen >= stat_threshold;
			break;
		case 6:
			passed = wand.spread >= stat_threshold;
			break;
		case 7:
			passed = wand.speed >= stat_threshold;
			break;
		default:
			passed = wand.capacity >= stat_threshold;
			break;
	}
	if(lt) passed = !passed;
	if(ns && wand.shuffle) passed = false;
	if(noac && wand.alwaysCast > 0) passed = false;
	
	if(passed)
	{
		search_spiral_result[0] = x;
		search_spiral_result[1] = y;
		search_spiral_result[2] = searched_pixels;
		search_spiral_result[3] = wand.capacity;
		search_spiral_result[4] = wand.multicast;
		search_spiral_result[5] = wand.delay;
		search_spiral_result[6] = wand.reload;
		search_spiral_result[7] = wand.mana;
		search_spiral_result[8] = wand.regen;
		search_spiral_result[9] = wand.spread;
		search_spiral_result[10] = wand.speed;
		search_spiral_result[11] = wand.shuffle ? 1 : 0;
		search_spiral_result[12] = wand.alwaysCast;
		return true;
	}
	return false;
}

bool mat_spiral_step(int x, int y) {
	std::vector<Material>* mats = (std::vector<Material>*)CheckGreatChestLoot(x, y, world_seed, false);
	if (!mats) return false;
	bool passed = false;
	for (Material m : *mats) {
		if ((int)m == stat_or_mat) 
		passed = true;
	}
	if (passed) 
	{
		search_spiral_result[0] = x;
		search_spiral_result[1] = y;
		search_spiral_result[2] = searched_pixels;
	}
	delete mats;
	return passed;
}

extern "C"
{
    double* search_spiral_start(uint32_t raw_world_seed, uint32_t newgame, double x, double y, int param_stat_or_mat, double threshold, int flags, int mode)
    {
        world_seed = raw_world_seed + newgame;

        x_off = 0.0;
        y_off = 0.0;

        x_step = 1.0;
        y_step = 0.0;

        //there's a better way to do this with logarithms but this is fast and also easy
        //Chest RNG components are stored with 6 decimal significant digits of precision, so we have to round according to that.
        if (search_mode == 0 && abs(x) >= 1000000)       x_step_mult = 10;
        else if (search_mode == 0 && abs(x) >= 10000000) x_step_mult = 100;
		else                        					 x_step_mult = 1;

        if (search_mode == 0 && abs(y) >= 1000000)       y_step_mult = 10;
        else if (search_mode == 0 && abs(y) >= 10000000) y_step_mult = 100;
        else                       	  					 y_step_mult = 1;

        x_center = x;
        y_center = y;

        search_spiral_result[0] = x;
        search_spiral_result[1] = y;

		stat_threshold = threshold;
		stat_or_mat = param_stat_or_mat;
		search_mode = mode;
		lt = flags & 1;
		ns = flags & 2;
		noac = flags & 4;

		searched_pixels = 0;

        return search_spiral_result;
    }
}

extern "C"
{

int search_spiral_step(uint32_t max_iterations)
{
    //search for a magic pixel in a spiral
    double x_seed = search_spiral_result[0];
    double y_seed = search_spiral_result[1];

    for(int i = 0; i < max_iterations; i++)
    {
		searched_pixels++;
        x_seed = floor(x_center+x_off);
        y_seed = floor(y_center+y_off);
		if(search_mode == 0) {
			x_seed = roundRNGPos(x_seed);
			y_seed = roundRNGPos(y_seed);
		}

		if (search_mode == 3) {
			if (mat_spiral_step(x_seed, y_seed)) return true;
		}
		else {
			if (wand_spiral_step(x_seed, y_seed)) return true;
		}

        x_off += x_step * x_step_mult;
        y_off += y_step * y_step_mult;
        if((fabs(fabs(x_off/x_step_mult)-fabs(y_off/y_step_mult)) < epsilon && x_step <= epsilon)
           || (fabs(x_off/x_step_mult-1+y_off/y_step_mult) < epsilon) && x_step > epsilon)
        { //turn
            double temp = x_step;
            x_step = -y_step;
            y_step = temp;
        }
    }

    search_spiral_result[0] = x_seed;
    search_spiral_result[1] = y_seed;
    search_spiral_result[2] = searched_pixels;
    return false;
}

}