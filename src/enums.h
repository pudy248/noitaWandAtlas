#pragma once
#define _data

enum ActionType
{
	PROJECTILE = 0,
	STATIC_PROJECTILE = 1,
	MODIFIER = 2,
	DRAW_MANY = 3,
	MATERIAL = 4,
	OTHER = 5,
	UTILITY = 6,
	PASSIVE = 7
};
enum Spell : short
{
	SPELL_NONE,
	SPELL_BOMB,
	SPELL_LIGHT_BULLET,
	SPELL_LIGHT_BULLET_TRIGGER,
	SPELL_LIGHT_BULLET_TRIGGER_2,
	SPELL_LIGHT_BULLET_TIMER,
	SPELL_BULLET,
	SPELL_BULLET_TRIGGER,
	SPELL_BULLET_TIMER,
	SPELL_HEAVY_BULLET,
	SPELL_HEAVY_BULLET_TRIGGER,
	SPELL_HEAVY_BULLET_TIMER,
	SPELL_AIR_BULLET,
	SPELL_SLOW_BULLET,
	SPELL_SLOW_BULLET_TRIGGER,
	SPELL_SLOW_BULLET_TIMER,
	SPELL_HOOK,
	SPELL_BLACK_HOLE,
	SPELL_BLACK_HOLE_DEATH_TRIGGER,
	SPELL_WHITE_HOLE,
	SPELL_BLACK_HOLE_BIG,
	SPELL_WHITE_HOLE_BIG,
	SPELL_BLACK_HOLE_GIGA,
	SPELL_WHITE_HOLE_GIGA,
	SPELL_TENTACLE_PORTAL,
	SPELL_SPITTER,
	SPELL_SPITTER_TIMER,
	SPELL_SPITTER_TIER_2,
	SPELL_SPITTER_TIER_2_TIMER,
	SPELL_SPITTER_TIER_3,
	SPELL_SPITTER_TIER_3_TIMER,
	SPELL_BUBBLESHOT,
	SPELL_BUBBLESHOT_TRIGGER,
	SPELL_DISC_BULLET,
	SPELL_DISC_BULLET_BIG,
	SPELL_DISC_BULLET_BIGGER,
	SPELL_BOUNCY_ORB,
	SPELL_BOUNCY_ORB_TIMER,
	SPELL_RUBBER_BALL,
	SPELL_ARROW,
	SPELL_POLLEN,
	SPELL_LANCE,
	SPELL_LANCE_HOLY,
	SPELL_ROCKET,
	SPELL_ROCKET_TIER_2,
	SPELL_ROCKET_TIER_3,
	SPELL_GRENADE,
	SPELL_GRENADE_TRIGGER,
	SPELL_GRENADE_TIER_2,
	SPELL_GRENADE_TIER_3,
	SPELL_GRENADE_ANTI,
	SPELL_GRENADE_LARGE,
	SPELL_MINE,
	SPELL_MINE_DEATH_TRIGGER,
	SPELL_PIPE_BOMB,
	SPELL_PIPE_BOMB_DEATH_TRIGGER,
	SPELL_FISH,
	SPELL_EXPLODING_DEER,
	SPELL_EXPLODING_DUCKS,
	SPELL_WORM_SHOT,
	SPELL_BOMB_DETONATOR,
	SPELL_LASER,
	SPELL_MEGALASER,
	SPELL_LIGHTNING,
	SPELL_BALL_LIGHTNING,
	SPELL_LASER_EMITTER,
	SPELL_LASER_EMITTER_FOUR,
	SPELL_LASER_EMITTER_CUTTER,
	SPELL_DIGGER,
	SPELL_POWERDIGGER,
	SPELL_CHAINSAW,
	SPELL_LUMINOUS_DRILL,
	SPELL_LASER_LUMINOUS_DRILL,
	SPELL_TENTACLE,
	SPELL_TENTACLE_TIMER,
	SPELL_HEAL_BULLET,
	SPELL_ANTIHEAL,
	SPELL_SPIRAL_SHOT,
	SPELL_MAGIC_SHIELD,
	SPELL_BIG_MAGIC_SHIELD,
	SPELL_CHAIN_BOLT,
	SPELL_FIREBALL,
	SPELL_METEOR,
	SPELL_FLAMETHROWER,
	SPELL_ICEBALL,
	SPELL_SLIMEBALL,
	SPELL_DARKFLAME,
	SPELL_MISSILE,
	SPELL_FUNKY_SPELL,
	SPELL_PEBBLE,
	SPELL_DYNAMITE,
	SPELL_GLITTER_BOMB,
	SPELL_BUCKSHOT,
	SPELL_FREEZING_GAZE,
	SPELL_GLOWING_BOLT,
	SPELL_SPORE_POD,
	SPELL_GLUE_SHOT,
	SPELL_BOMB_HOLY,
	SPELL_BOMB_HOLY_GIGA,
	SPELL_PROPANE_TANK,
	SPELL_BOMB_CART,
	SPELL_CURSED_ORB,
	SPELL_EXPANDING_ORB,
	SPELL_CRUMBLING_EARTH,
	SPELL_SUMMON_ROCK,
	SPELL_SUMMON_EGG,
	SPELL_SUMMON_HOLLOW_EGG,
	SPELL_TNTBOX,
	SPELL_TNTBOX_BIG,
	SPELL_SWARM_FLY,
	SPELL_SWARM_FIREBUG,
	SPELL_SWARM_WASP,
	SPELL_FRIEND_FLY,
	SPELL_ACIDSHOT,
	SPELL_THUNDERBALL,
	SPELL_FIREBOMB,
	SPELL_SOILBALL,
	SPELL_DEATH_CROSS,
	SPELL_DEATH_CROSS_BIG,
	SPELL_INFESTATION,
	SPELL_WALL_HORIZONTAL,
	SPELL_WALL_VERTICAL,
	SPELL_WALL_SQUARE,
	SPELL_TEMPORARY_WALL,
	SPELL_TEMPORARY_PLATFORM,
	SPELL_PURPLE_EXPLOSION_FIELD,
	SPELL_DELAYED_SPELL,
	SPELL_LONG_DISTANCE_CAST,
	SPELL_TELEPORT_CAST,
	SPELL_SUPER_TELEPORT_CAST,
	SPELL_CASTER_CAST,
	SPELL_MIST_RADIOACTIVE,
	SPELL_MIST_ALCOHOL,
	SPELL_MIST_SLIME,
	SPELL_MIST_BLOOD,
	SPELL_CIRCLE_FIRE,
	SPELL_CIRCLE_ACID,
	SPELL_CIRCLE_OIL,
	SPELL_CIRCLE_WATER,
	SPELL_MATERIAL_WATER,
	SPELL_MATERIAL_OIL,
	SPELL_MATERIAL_BLOOD,
	SPELL_MATERIAL_ACID,
	SPELL_MATERIAL_CEMENT,
	SPELL_TELEPORT_PROJECTILE,
	SPELL_TELEPORT_PROJECTILE_SHORT,
	SPELL_TELEPORT_PROJECTILE_STATIC,
	SPELL_SWAPPER_PROJECTILE,
	SPELL_TELEPORT_PROJECTILE_CLOSER,
	SPELL_NUKE,
	SPELL_NUKE_GIGA,
	SPELL_FIREWORK,
	SPELL_SUMMON_WANDGHOST,
	SPELL_TOUCH_GOLD,
	SPELL_TOUCH_WATER,
	SPELL_TOUCH_OIL,
	SPELL_TOUCH_ALCOHOL,
	SPELL_TOUCH_PISS,
	SPELL_TOUCH_GRASS,
	SPELL_TOUCH_BLOOD,
	SPELL_TOUCH_SMOKE,
	SPELL_DESTRUCTION,
	SPELL_MASS_POLYMORPH,
	SPELL_BURST_2,
	SPELL_BURST_3,
	SPELL_BURST_4,
	SPELL_BURST_8,
	SPELL_BURST_X,
	SPELL_SCATTER_2,
	SPELL_SCATTER_3,
	SPELL_SCATTER_4,
	SPELL_I_SHAPE,
	SPELL_Y_SHAPE,
	SPELL_T_SHAPE,
	SPELL_W_SHAPE,
	SPELL_CIRCLE_SHAPE,
	SPELL_PENTAGRAM_SHAPE,
	SPELL_I_SHOT,
	SPELL_Y_SHOT,
	SPELL_T_SHOT,
	SPELL_W_SHOT,
	SPELL_QUAD_SHOT,
	SPELL_PENTA_SHOT,
	SPELL_HEXA_SHOT,
	SPELL_SPREAD_REDUCE,
	SPELL_HEAVY_SPREAD,
	SPELL_RECHARGE,
	SPELL_LIFETIME,
	SPELL_LIFETIME_DOWN,
	SPELL_NOLLA,
	SPELL_SLOW_BUT_STEADY,
	SPELL_EXPLOSION_REMOVE,
	SPELL_EXPLOSION_TINY,
	SPELL_LASER_EMITTER_WIDER,
	SPELL_MANA_REDUCE,
	SPELL_BLOOD_MAGIC,
	SPELL_MONEY_MAGIC,
	SPELL_BLOOD_TO_POWER,
	SPELL_DUPLICATE,
	SPELL_QUANTUM_SPLIT,
	SPELL_GRAVITY,
	SPELL_GRAVITY_ANTI,
	SPELL_SINEWAVE,
	SPELL_CHAOTIC_ARC,
	SPELL_PINGPONG_PATH,
	SPELL_AVOIDING_ARC,
	SPELL_FLOATING_ARC,
	SPELL_FLY_DOWNWARDS,
	SPELL_FLY_UPWARDS,
	SPELL_HORIZONTAL_ARC,
	SPELL_LINE_ARC,
	SPELL_ORBIT_SHOT,
	SPELL_SPIRALING_SHOT,
	SPELL_PHASING_ARC,
	SPELL_TRUE_ORBIT,
	SPELL_BOUNCE,
	SPELL_REMOVE_BOUNCE,
	SPELL_HOMING,
	SPELL_ANTI_HOMING,
	SPELL_HOMING_WAND,
	SPELL_HOMING_SHORT,
	SPELL_HOMING_ROTATE,
	SPELL_HOMING_SHOOTER,
	SPELL_AUTOAIM,
	SPELL_HOMING_ACCELERATING,
	SPELL_HOMING_CURSOR,
	SPELL_HOMING_AREA,
	SPELL_PIERCING_SHOT,
	SPELL_CLIPPING_SHOT,
	SPELL_DAMAGE,
	SPELL_DAMAGE_RANDOM,
	SPELL_BLOODLUST,
	SPELL_DAMAGE_FOREVER,
	SPELL_CRITICAL_HIT,
	SPELL_AREA_DAMAGE,
	SPELL_SPELLS_TO_POWER,
	SPELL_ESSENCE_TO_POWER,
	SPELL_ZERO_DAMAGE,
	SPELL_HEAVY_SHOT,
	SPELL_LIGHT_SHOT,
	SPELL_KNOCKBACK,
	SPELL_RECOIL,
	SPELL_RECOIL_DAMPER,
	SPELL_SPEED,
	SPELL_ACCELERATING_SHOT,
	SPELL_DECELERATING_SHOT,
	SPELL_EXPLOSIVE_PROJECTILE,
	SPELL_CLUSTERMOD,
	SPELL_WATER_TO_POISON,
	SPELL_BLOOD_TO_ACID,
	SPELL_LAVA_TO_BLOOD,
	SPELL_LIQUID_TO_EXPLOSION,
	SPELL_TOXIC_TO_ACID,
	SPELL_STATIC_TO_SAND,
	SPELL_TRANSMUTATION,
	SPELL_RANDOM_EXPLOSION,
	SPELL_NECROMANCY,
	SPELL_LIGHT,
	SPELL_EXPLOSION,
	SPELL_EXPLOSION_LIGHT,
	SPELL_FIRE_BLAST,
	SPELL_POISON_BLAST,
	SPELL_ALCOHOL_BLAST,
	SPELL_THUNDER_BLAST,
	SPELL_BERSERK_FIELD,
	SPELL_POLYMORPH_FIELD,
	SPELL_CHAOS_POLYMORPH_FIELD,
	SPELL_ELECTROCUTION_FIELD,
	SPELL_FREEZE_FIELD,
	SPELL_REGENERATION_FIELD,
	SPELL_TELEPORTATION_FIELD,
	SPELL_LEVITATION_FIELD,
	SPELL_SHIELD_FIELD,
	SPELL_PROJECTILE_TRANSMUTATION_FIELD,
	SPELL_PROJECTILE_THUNDER_FIELD,
	SPELL_PROJECTILE_GRAVITY_FIELD,
	SPELL_VACUUM_POWDER,
	SPELL_VACUUM_LIQUID,
	SPELL_VACUUM_ENTITIES,
	SPELL_SEA_LAVA,
	SPELL_SEA_ALCOHOL,
	SPELL_SEA_OIL,
	SPELL_SEA_WATER,
	SPELL_SEA_SWAMP,
	SPELL_SEA_ACID,
	SPELL_SEA_ACID_GAS,
	SPELL_SEA_MIMIC,
	SPELL_CLOUD_WATER,
	SPELL_CLOUD_OIL,
	SPELL_CLOUD_BLOOD,
	SPELL_CLOUD_ACID,
	SPELL_CLOUD_THUNDER,
	SPELL_ELECTRIC_CHARGE,
	SPELL_MATTER_EATER,
	SPELL_FREEZE,
	SPELL_HITFX_BURNING_CRITICAL_HIT,
	SPELL_HITFX_CRITICAL_WATER,
	SPELL_HITFX_CRITICAL_OIL,
	SPELL_HITFX_CRITICAL_BLOOD,
	SPELL_HITFX_TOXIC_CHARM,
	SPELL_HITFX_EXPLOSION_SLIME,
	SPELL_HITFX_EXPLOSION_SLIME_GIGA,
	SPELL_HITFX_EXPLOSION_ALCOHOL,
	SPELL_HITFX_EXPLOSION_ALCOHOL_GIGA,
	SPELL_HITFX_PETRIFY,
	SPELL_ROCKET_DOWNWARDS,
	SPELL_ROCKET_OCTAGON,
	SPELL_FIZZLE,
	SPELL_BOUNCE_EXPLOSION,
	SPELL_BOUNCE_SPARK,
	SPELL_BOUNCE_LASER,
	SPELL_BOUNCE_LASER_EMITTER,
	SPELL_BOUNCE_LARPA,
	SPELL_BOUNCE_SMALL_EXPLOSION,
	SPELL_BOUNCE_LIGHTNING,
	SPELL_BOUNCE_HOLE,
	SPELL_FIREBALL_RAY,
	SPELL_LIGHTNING_RAY,
	SPELL_TENTACLE_RAY,
	SPELL_LASER_EMITTER_RAY,
	SPELL_FIREBALL_RAY_LINE,
	SPELL_FIREBALL_RAY_ENEMY,
	SPELL_LIGHTNING_RAY_ENEMY,
	SPELL_TENTACLE_RAY_ENEMY,
	SPELL_GRAVITY_FIELD_ENEMY,
	SPELL_CURSE,
	SPELL_CURSE_WITHER_PROJECTILE,
	SPELL_CURSE_WITHER_EXPLOSION,
	SPELL_CURSE_WITHER_MELEE,
	SPELL_CURSE_WITHER_ELECTRICITY,
	SPELL_ORBIT_DISCS,
	SPELL_ORBIT_FIREBALLS,
	SPELL_ORBIT_NUKES,
	SPELL_ORBIT_LASERS,
	SPELL_ORBIT_LARPA,
	SPELL_CHAIN_SHOT,
	SPELL_ARC_ELECTRIC,
	SPELL_ARC_FIRE,
	SPELL_ARC_GUNPOWDER,
	SPELL_ARC_POISON,
	SPELL_CRUMBLING_EARTH_PROJECTILE,
	SPELL_X_RAY,
	SPELL_UNSTABLE_GUNPOWDER,
	SPELL_ACID_TRAIL,
	SPELL_POISON_TRAIL,
	SPELL_OIL_TRAIL,
	SPELL_WATER_TRAIL,
	SPELL_GUNPOWDER_TRAIL,
	SPELL_FIRE_TRAIL,
	SPELL_BURN_TRAIL,
	SPELL_TORCH,
	SPELL_TORCH_ELECTRIC,
	SPELL_ENERGY_SHIELD,
	SPELL_ENERGY_SHIELD_SECTOR,
	SPELL_ENERGY_SHIELD_SHOT,
	SPELL_TINY_GHOST,
	SPELL_OCARINA_A,
	SPELL_OCARINA_B,
	SPELL_OCARINA_C,
	SPELL_OCARINA_D,
	SPELL_OCARINA_E,
	SPELL_OCARINA_F,
	SPELL_OCARINA_GSHARP,
	SPELL_OCARINA_A2,
	SPELL_KANTELE_A,
	SPELL_KANTELE_D,
	SPELL_KANTELE_DIS,
	SPELL_KANTELE_E,
	SPELL_KANTELE_G,
	SPELL_RANDOM_SPELL,
	SPELL_RANDOM_PROJECTILE,
	SPELL_RANDOM_MODIFIER,
	SPELL_RANDOM_STATIC_PROJECTILE,
	SPELL_DRAW_RANDOM,
	SPELL_DRAW_RANDOM_X3,
	SPELL_DRAW_3_RANDOM,
	SPELL_ALL_NUKES,
	SPELL_ALL_DISCS,
	SPELL_ALL_ROCKETS,
	SPELL_ALL_DEATHCROSSES,
	SPELL_ALL_BLACKHOLES,
	SPELL_ALL_ACID,
	SPELL_ALL_SPELLS,
	SPELL_SUMMON_PORTAL,
	SPELL_ADD_TRIGGER,
	SPELL_ADD_TIMER,
	SPELL_ADD_DEATH_TRIGGER,
	SPELL_LARPA_CHAOS,
	SPELL_LARPA_DOWNWARDS,
	SPELL_LARPA_UPWARDS,
	SPELL_LARPA_CHAOS_2,
	SPELL_LARPA_DEATH,
	SPELL_ALPHA,
	SPELL_GAMMA,
	SPELL_TAU,
	SPELL_OMEGA,
	SPELL_MU,
	SPELL_PHI,
	SPELL_SIGMA,
	SPELL_ZETA,
	SPELL_DIVIDE_2,
	SPELL_DIVIDE_3,
	SPELL_DIVIDE_4,
	SPELL_DIVIDE_10,
	SPELL_METEOR_RAIN,
	SPELL_WORM_RAIN,
	SPELL_RESET,
	SPELL_IF_ENEMY,
	SPELL_IF_PROJECTILE,
	SPELL_IF_HP,
	SPELL_IF_HALF,
	SPELL_IF_END,
	SPELL_IF_ELSE,
	SPELL_COLOUR_RED,
	SPELL_COLOUR_ORANGE,
	SPELL_COLOUR_GREEN,
	SPELL_COLOUR_YELLOW,
	SPELL_COLOUR_PURPLE,
	SPELL_COLOUR_BLUE,
	SPELL_COLOUR_RAINBOW,
	SPELL_COLOUR_INVIS,
	SPELL_RAINBOW_TRAIL,
	SPELL_CESSATION,
};
enum WandStat
{
	RELOAD,
	CAST_DELAY,
	SPREAD,
	SPEED_MULT,
	CAPACITY,
	MULTICAST,
	SHUFFLE
};

enum Material : short
{
	MATERIAL_NONE,

	//SOLIDS
	WATERROCK,
	ICE_GLASS,
	ICE_GLASS_B2,
	GLASS_BRITTLE,
	WOOD_PLAYER_B2,
	WOOD,
	WAX_B2,
	FUSE,
	WOOD_LOOSE,
	ROCK_LOOSE,
	ICE_CEILING,
	BRICK,
	CONCRETE_COLLAPSED,
	TNT,
	TNT_STATIC,
	METEORITE,
	SULPHUR_BOX2D,
	METEORITE_TEST,
	METEORITE_GREEN,
	STEEL,
	STEEL_RUST,
	METAL_RUST_RUST,
	METAL_RUST_BARREL_RUST,
	PLASTIC,
	ALUMINIUM,
	ROCK_STATIC_BOX2D,
	ROCK_BOX2D,
	CRYSTAL,
	MAGIC_CRYSTAL,
	CRYSTAL_MAGIC,
	ALUMINIUM_OXIDE,
	MEAT,
	MEAT_SLIME,
	PHYSICS_THROW_MATERIAL_PART2,
	ICE_MELTING_PERF_KILLER,
	ICE_B2,
	GLASS_LIQUIDCAVE,
	GLASS,
	NEON_TUBE_PURPLE,
	SNOW_B2,
	NEON_TUBE_BLOOD_RED,
	NEON_TUBE_CYAN,
	MEAT_BURNED,
	MEAT_DONE,
	MEAT_HOT,
	MEAT_WARM,
	MEAT_FRUIT,
	CRYSTAL_SOLID,
	CRYSTAL_PURPLE,
	GOLD_B2,
	MAGIC_CRYSTAL_GREEN,
	BONE_BOX2D,
	METAL_RUST_BARREL,
	METAL_RUST,
	METAL_WIRE_NOHIT,
	METAL_CHAIN_NOHIT,
	METAL_NOHIT,
	GLASS_BOX2D,
	POTION_GLASS_BOX2D,
	GEM_BOX2D,
	ITEM_BOX2D_GLASS,
	ITEM_BOX2D,
	ROCK_BOX2D_NOHIT_HARD,
	ROCK_BOX2D_NOHIT_HEAVY,
	ROCK_BOX2D_NOHIT,
	POOP_BOX2D_HARD,
	ROCK_BOX2D_HARD,
	TEMPLEBRICK_BOX2D_EDGETILES,
	METAL_HARD,
	METAL,
	METAL_PROP_LOOSE,
	METAL_PROP_LOW_RESTITUTION,
	METAL_PROP,
	ALUMINIUM_ROBOT,
	PLASTIC_PROP,
	METEORITE_CRACKABLE,
	WOOD_PROP_DURABLE,
	CLOTH_BOX2D,
	WOOD_PROP_NOPLAYERHIT,
	WOOD_PROP,
	FUNGUS_LOOSE_TRIPPY,
	FUNGUS_LOOSE_GREEN,
	FUNGUS_LOOSE,
	GRASS_LOOSE,
	CACTUS,
	WOOD_WALL,
	WOOD_TRAILER,
	TEMPLEBRICK_BOX2D,
	FUSE_HOLY,
	FUSE_TNT,
	FUSE_BRIGHT,
	WOOD_PLAYER_B2_VERTICAL,
	MEAT_CONFUSION,
	MEAT_POLYMORPH_PROTECTION,
	MEAT_POLYMORPH,
	MEAT_FAST,
	MEAT_TELEPORT,
	MEAT_SLIME_CURSED,
	MEAT_CURSED,
	MEAT_TRIPPY,
	MEAT_HELPLESS,
	MEAT_WORM,
	MEAT_SLIME_ORANGE,
	MEAT_SLIME_GREEN,
	ICE_SLIME_GLASS,
	ICE_BLOOD_GLASS,
	ICE_POISON_GLASS,
	ICE_RADIOACTIVE_GLASS,
	ICE_COLD_GLASS,
	ICE_ACID_GLASS,
	TUBE_PHYSICS,
	ROCK_ERODING,
	MEAT_PUMPKIN,
	MEAT_FROG,
	MEAT_CURSED_DRY,
	NEST_BOX2D,
	NEST_FIREBUG_BOX2D,
	COCOON_BOX2D,
	ITEM_BOX2D_MEAT,
	GEM_BOX2D_YELLOW_SUN,
	GEM_BOX2D_RED_FLOAT,
	GEM_BOX2D_YELLOW_SUN_GRAVITY,
	GEM_BOX2D_DARKSUN,
	GEM_BOX2D_PINK,
	GEM_BOX2D_RED,
	GEM_BOX2D_TURQUOISE,
	GEM_BOX2D_OPAL,
	GEM_BOX2D_WHITE,
	GEM_BOX2D_GREEN,
	GEM_BOX2D_ORANGE,
	GOLD_BOX2D,
	BLOODGOLD_BOX2D,

	//SANDS
	SAND_STATIC,
	NEST_STATIC,
	BLUEFUNGI_STATIC,
	ROCK_STATIC,
	LAVAROCK_STATIC,
	STATIC_MAGIC_MATERIAL,
	METEORITE_STATIC,
	TEMPLEROCK_STATIC,
	STEEL_STATIC,
	ROCK_STATIC_GLOW,
	SNOW_STATIC,
	ICE_STATIC,
	ICE_ACID_STATIC,
	ICE_COLD_STATIC,
	ICE_RADIOACTIVE_STATIC,
	ICE_POISON_STATIC,
	ICE_METEOR_STATIC,
	TUBEMATERIAL,
	GLASS_STATIC,
	SNOWROCK_STATIC,
	CONCRETE_STATIC,
	WOOD_STATIC,
	CHEESE_STATIC,
	MUD,
	CONCRETE_SAND,
	SAND,
	BONE,
	SOIL,
	SANDSTONE,
	FUNGISOIL,
	HONEY,
	GLUE,
	EXPLOSION_DIRT,
	VINE,
	ROOT,
	SNOW,
	SNOW_STICKY,
	ROTTEN_MEAT,
	MEAT_SLIME_SAND,
	ROTTEN_MEAT_RADIOACTIVE,
	ICE,
	SAND_HERB,
	WAX,
	GOLD,
	SILVER,
	COPPER,
	BRASS,
	DIAMOND,
	COAL,
	SULPHUR,
	SALT,
	SODIUM_UNSTABLE,
	GUNPOWDER,
	GUNPOWDER_EXPLOSIVE,
	GUNPOWDER_TNT,
	GUNPOWDER_UNSTABLE,
	GUNPOWDER_UNSTABLE_BIG,
	MONSTER_POWDER_TEST,
	RAT_POWDER,
	FUNGUS_POWDER,
	ORB_POWDER,
	GUNPOWDER_UNSTABLE_BOSS_LIMBS,
	PLASTIC_RED,
	GRASS,
	GRASS_HOLY,
	GRASS_DARKER,
	GRASS_ICE,
	GRASS_DRY,
	FUNGI,
	SPORE,
	MOSS,
	PLANT_MATERIAL,
	PLANT_MATERIAL_RED,
	PLANT_MATERIAL_DARK,
	CEILING_PLANT_MATERIAL,
	MUSHROOM_SEED,
	PLANT_SEED,
	MUSHROOM,
	MUSHROOM_GIANT_RED,
	MUSHROOM_GIANT_BLUE,
	GLOWSHROOM,
	BUSH_SEED,
	WOOD_PLAYER,
	TRAILER_TEXT,
	POO,
	MAMMI,
	GLASS_BROKEN,
	BLOOD_THICK,
	SAND_STATIC_RAINFOREST,
	SAND_STATIC_RAINFOREST_DARK,
	BONE_STATIC,
	RUST_STATIC,
	SAND_STATIC_BRIGHT,
	MEAT_STATIC,
	MOSS_RUST,
	FUNGI_CREEPING_SECRET,
	FUNGI_CREEPING,
	GRASS_DARK,
	SAND_STATIC_RED,
	FUNGI_GREEN,
	SHOCK_POWDER,
	FUNGUS_POWDER_BAD,
	BURNING_POWDER,
	PURIFYING_POWDER,
	SODIUM,
	METAL_SAND,
	STEEL_SAND,
	GOLD_RADIOACTIVE,
	ROCK_STATIC_INTRO,
	ROCK_STATIC_TRIP_SECRET,
	ENDSLIME_BLOOD,
	ENDSLIME,
	ROCK_STATIC_TRIP_SECRET2,
	SANDSTONE_SURFACE,
	SOIL_DARK,
	SOIL_DEAD,
	SOIL_LUSH_DARK,
	SOIL_LUSH,
	SAND_PETRIFY,
	LAVASAND,
	SAND_SURFACE,
	SAND_BLUE,
	PLASMA_FADING_PINK,
	PLASMA_FADING_GREEN,
	CORRUPTION_STATIC,
	WOOD_STATIC_GAS,
	WOOD_STATIC_VERTICAL,
	GOLD_STATIC_DARK,
	GOLD_STATIC_RADIOACTIVE,
	GOLD_STATIC,
	CREEPY_LIQUID_EMITTER,
	WOOD_BURNS_FOREVER,
	ROOT_GROWTH,
	WOOD_STATIC_WET,
	ICE_SLIME_STATIC,
	ICE_BLOOD_STATIC,
	ROCK_STATIC_INTRO_BREAKABLE,
	STEEL_STATIC_UNMELTABLE,
	STEEL_STATIC_STRONG,
	STEELPIPE_STATIC,
	STEELSMOKE_STATIC,
	STEELMOSS_SLANTED,
	STEELFROST_STATIC,
	ROCK_STATIC_CURSED,
	ROCK_STATIC_PURPLE,
	STEELMOSS_STATIC,
	ROCK_HARD,
	TEMPLEBRICK_MOSS_STATIC,
	TEMPLEBRICK_RED,
	GLOWSTONE_POTION,
	GLOWSTONE_ALTAR_HDR,
	GLOWSTONE_ALTAR,
	GLOWSTONE,
	TEMPLEBRICK_STATIC_RUINED,
	TEMPLEBRICK_DIAMOND_STATIC,
	TEMPLEBRICK_GOLDEN_STATIC,
	WIZARDSTONE,
	TEMPLEBRICKDARK_STATIC,
	ROCK_STATIC_FUNGAL,
	WOOD_TREE,
	ROCK_STATIC_NOEDGE,
	ROCK_HARD_BORDER,
	TEMPLEROCK_SOFT,
	TEMPLEBRICK_NOEDGE_STATIC,
	TEMPLEBRICK_STATIC_SOFT,
	TEMPLEBRICK_STATIC_BROKEN,
	TEMPLEBRICK_STATIC,
	ROCK_STATIC_WET,
	ROCK_MAGIC_GATE,
	ROCK_STATIC_POISON,
	ROCK_STATIC_CURSED_GREEN,
	ROCK_STATIC_RADIOACTIVE,
	ROCK_STATIC_GREY,
	COAL_STATIC,
	ROCK_VAULT,
	ROCK_MAGIC_BOTTOM,
	TEMPLEBRICK_THICK_STATIC,
	TEMPLEBRICK_THICK_STATIC_NOEDGE,
	TEMPLESLAB_STATIC,
	TEMPLESLAB_CRUMBLING_STATIC,
	THE_END,
	STEEL_RUSTED_NO_HOLES,
	STEEL_GREY_STATIC,
	FUNGI_YELLOW,
	SKULLROCK,

	//LIQUIDS
	WATER_STATIC,
	ENDSLIME_STATIC,
	SLIME_STATIC,
	SPORE_POD_STALK,
	WATER,
	WATER_TEMP,
	WATER_ICE,
	WATER_SWAMP,
	OIL,
	ALCOHOL,
	BEER,
	MILK,
	MOLUT,
	SIMA,
	JUHANNUSSIMA,
	MAGIC_LIQUID,
	MATERIAL_CONFUSION,
	MATERIAL_DARKNESS,
	MATERIAL_RAINBOW,
	MAGIC_LIQUID_WEAKNESS,
	MAGIC_LIQUID_MOVEMENT_FASTER,
	MAGIC_LIQUID_FASTER_LEVITATION,
	MAGIC_LIQUID_FASTER_LEVITATION_AND_MOVEMENT,
	MAGIC_LIQUID_WORM_ATTRACTOR,
	MAGIC_LIQUID_PROTECTION_ALL,
	MAGIC_LIQUID_MANA_REGENERATION,
	MAGIC_LIQUID_UNSTABLE_TELEPORTATION,
	MAGIC_LIQUID_TELEPORTATION,
	MAGIC_LIQUID_HP_REGENERATION,
	MAGIC_LIQUID_HP_REGENERATION_UNSTABLE,
	MAGIC_LIQUID_POLYMORPH,
	MAGIC_LIQUID_RANDOM_POLYMORPH,
	MAGIC_LIQUID_UNSTABLE_POLYMORPH,
	MAGIC_LIQUID_BERSERK,
	MAGIC_LIQUID_CHARM,
	MAGIC_LIQUID_INVISIBILITY,
	CLOUD_RADIOACTIVE,
	CLOUD_BLOOD,
	CLOUD_SLIME,
	SWAMP,
	BLOOD,
	BLOOD_FADING,
	BLOOD_FUNGI,
	BLOOD_WORM,
	PORRIDGE,
	BLOOD_COLD,
	RADIOACTIVE_LIQUID,
	RADIOACTIVE_LIQUID_FADING,
	PLASMA_FADING,
	GOLD_MOLTEN,
	WAX_MOLTEN,
	SILVER_MOLTEN,
	COPPER_MOLTEN,
	BRASS_MOLTEN,
	GLASS_MOLTEN,
	GLASS_BROKEN_MOLTEN,
	STEEL_MOLTEN,
	CREEPY_LIQUID,
	CEMENT,
	SLIME,
	SLUSH,
	VOMIT,
	PLASTIC_RED_MOLTEN,
	ACID,
	LAVA,
	URINE,
	ROCKET_PARTICLES,
	PEAT,
	PLASTIC_PROP_MOLTEN,
	PLASTIC_MOLTEN,
	SLIME_YELLOW,
	SLIME_GREEN,
	ALUMINIUM_OXIDE_MOLTEN,
	STEEL_RUST_MOLTEN,
	METAL_PROP_MOLTEN,
	ALUMINIUM_ROBOT_MOLTEN,
	ALUMINIUM_MOLTEN,
	METAL_NOHIT_MOLTEN,
	METAL_RUST_MOLTEN,
	METAL_MOLTEN,
	METAL_SAND_MOLTEN,
	STEELSMOKE_STATIC_MOLTEN,
	STEELMOSS_STATIC_MOLTEN,
	STEELMOSS_SLANTED_MOLTEN,
	STEEL_STATIC_MOLTEN,
	PLASMA_FADING_BRIGHT,
	RADIOACTIVE_LIQUID_YELLOW,
	CURSED_LIQUID,
	POISON,
	BLOOD_FADING_SLOW,
	PUS,
	MIDAS,
	MIDAS_PRECURSOR,
	LIQUID_FIRE_WEAK,
	LIQUID_FIRE,
	JUST_DEATH,
	MIMIC_LIQUID,
	VOID_LIQUID,
	WATER_SALT,
	WATER_FADING,
	PEA_SOUP,

	//GASES
	SMOKE,
	CLOUD,
	CLOUD_LIGHTER,
	SMOKE_EXPLOSION,
	STEAM,
	ACID_GAS,
	ACID_GAS_STATIC,
	SMOKE_STATIC,
	BLOOD_COLD_VAPOUR,
	SAND_HERB_VAPOUR,
	RADIOACTIVE_GAS,
	RADIOACTIVE_GAS_STATIC,
	MAGIC_GAS_HP_REGENERATION,
	MAGIC_GAS_MIDAS,
	MAGIC_GAS_WORM_BLOOD,
	RAINBOW_GAS,
	MAGIC_GAS_POLYMORPH,
	MAGIC_GAS_WEAKNESS,
	MAGIC_GAS_TELEPORT,
	MAGIC_GAS_FUNGUS,
	ALCOHOL_GAS,
	POO_GAS,
	FUNGAL_GAS,
	POISON_GAS,
	STEAM_TRAILER,
	SMOKE_MAGIC,

	//FIRES
	FIRE,
	SPARK,
	SPARK_ELECTRIC,
	FLAME,
	FIRE_BLUE,
	SPARK_GREEN,
	SPARK_GREEN_BRIGHT,
	SPARK_BLUE,
	SPARK_BLUE_DARK,
	SPARK_RED,
	SPARK_RED_BRIGHT,
	SPARK_WHITE,
	SPARK_WHITE_BRIGHT,
	SPARK_YELLOW,
	SPARK_PURPLE,
	SPARK_PURPLE_BRIGHT,
	SPARK_PLAYER,
	SPARK_TEAL,
};