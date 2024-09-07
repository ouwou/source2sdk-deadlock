#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: particles.dll
// Classes count: 1 (Allocated) | 447 (Unallocated)
// Enums count: 0 (Allocated) | 77 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleSetMethod_t : std::uint32_t
{
	// MPropertyFriendlyName "Set Value"
	PARTICLE_SET_REPLACE_VALUE = 0x0,
	// MPropertyFriendlyName "Scale Initial Value"
	PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
	// MPropertyFriendlyName "Add to Initial Value"
	PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
	// MPropertyFriendlyName "Ramp Current Value at Input Rate Per Second"
	PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
	// MPropertyFriendlyName "Scale Current Value Raw"
	PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
	// MPropertyFriendlyName "Add to Current Value Raw"
	PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class Detail2Combo_t : std::uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	DETAIL_2_COMBO_UNINITIALIZED = 0xffffffff,
	// MPropertyFriendlyName "Off"
	DETAIL_2_COMBO_OFF = 0x0,
	// MPropertyFriendlyName "Add"
	DETAIL_2_COMBO_ADD = 0x1,
	// MPropertyFriendlyName "Add + Self Illum"
	DETAIL_2_COMBO_ADD_SELF_ILLUM = 0x2,
	// MPropertyFriendlyName "Mod2X"
	DETAIL_2_COMBO_MOD2X = 0x3,
	// MPropertyFriendlyName "Multiply"
	DETAIL_2_COMBO_MUL = 0x4,
	// MPropertyFriendlyName "Crossfade"
	DETAIL_2_COMBO_CROSSFADE = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class MissingParentInheritBehavior_t : std::uint32_t
{
	// MPropertyFriendlyName "Do Nothing"
	MISSING_PARENT_DO_NOTHING = 0xffffffff,
	// MPropertyFriendlyName "Kill Particle"
	MISSING_PARENT_KILL = 0x0,
	// MPropertyFriendlyName "Use Next Parent Particle"
	MISSING_PARENT_FIND_NEW = 0x1,
	// MPropertyFriendlyName "Use New Particle at Same Index if Possible"
	MISSING_PARENT_SAME_INDEX = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleFloatBiasType_t : std::uint32_t
{
	PF_BIAS_TYPE_INVALID = 0xffffffff,
	PF_BIAS_TYPE_STANDARD = 0x0,
	PF_BIAS_TYPE_GAIN = 0x1,
	PF_BIAS_TYPE_EXPONENTIAL = 0x2,
	PF_BIAS_TYPE_COUNT = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleTraceMissBehavior_t : std::uint32_t
{
	// MPropertyFriendlyName "Do Nothing"
	PARTICLE_TRACE_MISS_BEHAVIOR_NONE = 0x0,
	// MPropertyFriendlyName "Kill Particle"
	PARTICLE_TRACE_MISS_BEHAVIOR_KILL = 0x1,
	// MPropertyFriendlyName "Place Particle at Trace End"
	PARTICLE_TRACE_MISS_BEHAVIOR_TRACE_END = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class PFuncVisualizationType_t : std::uint32_t
{
	// MPropertyFriendlyName "Visualization Sphere Wireframe"
	PFUNC_VISUALIZATION_SPHERE_WIREFRAME = 0x0,
	// MPropertyFriendlyName "Visualization Sphere Solid"
	PFUNC_VISUALIZATION_SPHERE_SOLID = 0x1,
	// MPropertyFriendlyName "Visualization Box"
	PFUNC_VISUALIZATION_BOX = 0x2,
	// MPropertyFriendlyName "Visualization Ring"
	PFUNC_VISUALIZATION_RING = 0x3,
	// MPropertyFriendlyName "Visualization Plane"
	PFUNC_VISUALIZATION_PLANE = 0x4,
	// MPropertyFriendlyName "Visualization Line"
	PFUNC_VISUALIZATION_LINE = 0x5,
	// MPropertyFriendlyName "Visualization Cylinder"
	PFUNC_VISUALIZATION_CYLINDER = 0x6,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleVRHandChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Left Hand"
	PARTICLE_VRHAND_LEFT = 0x0,
	// MPropertyFriendlyName "Right Hand"
	PARTICLE_VRHAND_RIGHT = 0x1,
	// MPropertyFriendlyName "Specified Via Control Point"
	PARTICLE_VRHAND_CP = 0x2,
	// MPropertyFriendlyName "Detect from CP's Object"
	PARTICLE_VRHAND_CP_OBJECT = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleReplicationMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Off"
	PARTICLE_REPLICATIONMODE_NONE = 0x0,
	// MPropertyFriendlyName "Replicate for each parent particle"
	PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PetGroundType_t : std::uint32_t
{
	PET_GROUND_NONE = 0x0,
	PET_GROUND_GRID = 0x1,
	PET_GROUND_PLANE = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class InheritableBoolType_t : std::uint32_t
{
	// MPropertyFriendlyName "Inherit from Parent"
	INHERITABLE_BOOL_INHERIT = 0x0,
	// MPropertyFriendlyName "False"
	INHERITABLE_BOOL_FALSE = 0x1,
	// MPropertyFriendlyName "True"
	INHERITABLE_BOOL_TRUE = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 24
// Alignment: 4
// Size: 0x4
enum class ParticleFloatType_t : std::uint32_t
{
	PF_TYPE_INVALID = 0xffffffff,
	PF_TYPE_LITERAL = 0x0,
	PF_TYPE_NAMED_VALUE = 0x1,
	PF_TYPE_RANDOM_UNIFORM = 0x2,
	PF_TYPE_RANDOM_BIASED = 0x3,
	PF_TYPE_COLLECTION_AGE = 0x4,
	PF_TYPE_ENDCAP_AGE = 0x5,
	PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
	PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
	PF_TYPE_CONTROL_POINT_SPEED = 0x8,
	PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
	PF_TYPE_CONCURRENT_DEF_COUNT = 0xa,
	PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xb,
	PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xc,
	PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0xd,
	PF_TYPE_PARTICLE_NOISE = 0xe,
	PF_TYPE_PARTICLE_AGE = 0xf,
	PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x10,
	PF_TYPE_PARTICLE_FLOAT = 0x11,
	PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x12,
	PF_TYPE_PARTICLE_SPEED = 0x13,
	PF_TYPE_PARTICLE_NUMBER = 0x14,
	PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x15,
	PF_TYPE_COUNT = 0x16,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticlePostProcessPriorityGroup_t : std::uint32_t
{
	// MPropertyFriendlyName "Level Volume"
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_VOLUME = 0x0,
	// MPropertyFriendlyName "Level Override"
	PARTICLE_POST_PROCESS_PRIORITY_LEVEL_OVERRIDE = 0x1,
	// MPropertyFriendlyName "Gameplay Effect"
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_EFFECT = 0x2,
	// MPropertyFriendlyName "Gameplay State Low"
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_LOW = 0x3,
	// MPropertyFriendlyName "Gameplay State High"
	PARTICLE_POST_PROCESS_PRIORITY_GAMEPLAY_STATE_HIGH = 0x4,
	// MPropertyFriendlyName "Global UI"
	PARTICLE_POST_PROCESS_PRIORITY_GLOBAL_UI = 0x5,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class PFNoiseTurbulence_t : std::uint32_t
{
	PF_NOISE_TURB_NONE = 0x0,
	PF_NOISE_TURB_HIGHLIGHT = 0x1,
	PF_NOISE_TURB_FEEDBACK = 0x2,
	PF_NOISE_TURB_LOOPY = 0x3,
	PF_NOISE_TURB_CONTRAST = 0x4,
	PF_NOISE_TURB_ALTERNATE = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleColorBlendMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Replace"
	PARTICLEBLEND_DEFAULT = 0x0,
	// MPropertyFriendlyName "Overlay"
	PARTICLEBLEND_OVERLAY = 0x1,
	// MPropertyFriendlyName "Darken"
	PARTICLEBLEND_DARKEN = 0x2,
	// MPropertyFriendlyName "Lighten"
	PARTICLEBLEND_LIGHTEN = 0x3,
	// MPropertyFriendlyName "Multiply"
	PARTICLEBLEND_MULTIPLY = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class ParticleColorBlendType_t : std::uint32_t
{
	// MPropertyFriendlyName "Multiply"
	PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
	// MPropertyFriendlyName "Multiply x2"
	PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
	// MPropertyFriendlyName "Divide"
	PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
	// MPropertyFriendlyName "Add"
	PARTICLE_COLOR_BLEND_ADD = 0x3,
	// MPropertyFriendlyName "Subtract"
	PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
	// MPropertyFriendlyName "Mod2X"
	PARTICLE_COLOR_BLEND_MOD2X = 0x5,
	// MPropertyFriendlyName "Screen"
	PARTICLE_COLOR_BLEND_SCREEN = 0x6,
	// MPropertyFriendlyName "Lighten"
	PARTICLE_COLOR_BLEND_MAX = 0x7,
	// MPropertyFriendlyName "Darken"
	PARTICLE_COLOR_BLEND_MIN = 0x8,
	// MPropertyFriendlyName "Replace"
	PARTICLE_COLOR_BLEND_REPLACE = 0x9,
	// MPropertyFriendlyName "Average"
	PARTICLE_COLOR_BLEND_AVERAGE = 0xa,
	// MPropertyFriendlyName "Negate"
	PARTICLE_COLOR_BLEND_NEGATE = 0xb,
	// MPropertyFriendlyName "Luminance"
	PARTICLE_COLOR_BLEND_LUMINANCE = 0xc,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class DetailCombo_t : std::uint32_t
{
	// MPropertyFriendlyName "Off"
	DETAIL_COMBO_OFF = 0x0,
	// MPropertyFriendlyName "Add"
	DETAIL_COMBO_ADD = 0x1,
	// MPropertyFriendlyName "Add + Self Illum"
	DETAIL_COMBO_ADD_SELF_ILLUM = 0x2,
	// MPropertyFriendlyName "Mod2X"
	DETAIL_COMBO_MOD2X = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class ScalarExpressionType_t : std::uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	SCALAR_EXPRESSION_UNINITIALIZED = 0xffffffff,
	// MPropertyFriendlyName "Add"
	SCALAR_EXPRESSION_ADD = 0x0,
	// MPropertyFriendlyName "Subtract"
	SCALAR_EXPRESSION_SUBTRACT = 0x1,
	// MPropertyFriendlyName "Multiply"
	SCALAR_EXPRESSION_MUL = 0x2,
	// MPropertyFriendlyName "Divide"
	SCALAR_EXPRESSION_DIVIDE = 0x3,
	// MPropertyFriendlyName "Input 1"
	SCALAR_EXPRESSION_INPUT_1 = 0x4,
	// MPropertyFriendlyName "Min"
	SCALAR_EXPRESSION_MIN = 0x5,
	// MPropertyFriendlyName "Max"
	SCALAR_EXPRESSION_MAX = 0x6,
	// MPropertyFriendlyName "Mod"
	SCALAR_EXPRESSION_MOD = 0x7,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 14
// Alignment: 4
// Size: 0x4
enum class SpriteCardPerParticleScale_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	SPRITECARD_TEXTURE_PP_SCALE_NONE = 0x0,
	// MPropertyFriendlyName "Animation Time"
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_AGE = 0x1,
	// MPropertyFriendlyName "Animation Frame"
	SPRITECARD_TEXTURE_PP_SCALE_ANIMATION_FRAME = 0x2,
	// MPropertyFriendlyName "Shader Extra Data 1"
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA1 = 0x3,
	// MPropertyFriendlyName "Shader Extra Data 2"
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_EXTRA_DATA2 = 0x4,
	// MPropertyFriendlyName "Alpha"
	SPRITECARD_TEXTURE_PP_SCALE_PARTICLE_ALPHA = 0x5,
	// MPropertyFriendlyName "Radius"
	SPRITECARD_TEXTURE_PP_SCALE_SHADER_RADIUS = 0x6,
	// MPropertyFriendlyName "Roll"
	SPRITECARD_TEXTURE_PP_SCALE_ROLL = 0x7,
	// MPropertyFriendlyName "Yaw"
	SPRITECARD_TEXTURE_PP_SCALE_YAW = 0x8,
	// MPropertyFriendlyName "Pitch"
	SPRITECARD_TEXTURE_PP_SCALE_PITCH = 0x9,
	// MPropertyFriendlyName "Random 0 - 1 Value"
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM = 0xa,
	// MPropertyFriendlyName "Random -1 - 1 Value"
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM = 0xb,
	// MPropertyFriendlyName "Random 0 - 1 x Time"
	SPRITECARD_TEXTURE_PP_SCALE_RANDOM_TIME = 0xc,
	// MPropertyFriendlyName "Random -1 - 1 x Time"
	SPRITECARD_TEXTURE_PP_SCALE_NEG_RANDOM_TIME = 0xd,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class BlurFilterType_t : std::uint32_t
{
	// MPropertyFriendlyName "Gaussian"
	BLURFILTER_GAUSSIAN = 0x0,
	// MPropertyFriendlyName "Box"
	BLURFILTER_BOX = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class StandardLightingAttenuationStyle_t : std::uint32_t
{
	// MPropertyFriendlyName "Quadratic/Linear Bias"
	LIGHT_STYLE_OLD = 0x0,
	// MPropertyFriendlyName "Fifty Percent/Zero Percent Distance"
	LIGHT_STYLE_NEW = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleParentSetMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Set Self and Children"
	PARTICLE_SET_PARENT_NO = 0x0,
	// MPropertyFriendlyName "Set Immediate Parent, Self, and Children"
	PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
	// MPropertyFriendlyName "Set Root of Particle System Downward"
	PARTICLE_SET_PARENT_ROOT = 0x1,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleModelType_t : std::uint32_t
{
	PM_TYPE_INVALID = 0x0,
	PM_TYPE_NAMED_VALUE_MODEL = 0x1,
	PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
	PM_TYPE_CONTROL_POINT = 0x3,
	PM_TYPE_COUNT = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleLightingQuality_t : std::uint32_t
{
	// MPropertyFriendlyName "Per-Particle Lighting"
	PARTICLE_LIGHTING_PER_PARTICLE = 0x0,
	// MPropertyFriendlyName "Per-Vertex Lighting"
	PARTICLE_LIGHTING_PER_VERTEX = 0x1,
	// MPropertyFriendlyName "Per-Pixel Lighting"
	PARTICLE_LIGHTING_PER_PIXEL = 0xffffffff,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleFloatRoundType_t : std::uint32_t
{
	PF_ROUND_TYPE_INVALID = 0xffffffff,
	PF_ROUND_TYPE_NEAREST = 0x0,
	PF_ROUND_TYPE_FLOOR = 0x1,
	PF_ROUND_TYPE_CEIL = 0x2,
	PF_ROUND_TYPE_COUNT = 0x3,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PFNoiseType_t : std::uint32_t
{
	PF_NOISE_TYPE_PERLIN = 0x0,
	PF_NOISE_TYPE_SIMPLEX = 0x1,
	PF_NOISE_TYPE_WORLEY = 0x2,
	PF_NOISE_TYPE_CURL = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 11
// Alignment: 4
// Size: 0x4
enum class EventTypeSelection_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	PARTICLE_EVENT_TYPE_MASK_NONE = 0x0,
	// MPropertyFriendlyName "Spawned"
	PARTICLE_EVENT_TYPE_MASK_SPAWNED = 0x1,
	// MPropertyFriendlyName "Killed"
	PARTICLE_EVENT_TYPE_MASK_KILLED = 0x2,
	// MPropertyFriendlyName "Collision"
	PARTICLE_EVENT_TYPE_MASK_COLLISION = 0x4,
	// MPropertyFriendlyName "First Collision"
	PARTICLE_EVENT_TYPE_MASK_FIRST_COLLISION = 0x8,
	// MPropertyFriendlyName "Stopped on Collision"
	PARTICLE_EVENT_TYPE_MASK_COLLISION_STOPPED = 0x10,
	// MPropertyFriendlyName "Killed on Collision"
	PARTICLE_EVENT_TYPE_MASK_KILLED_ON_COLLISION = 0x20,
	// MPropertyFriendlyName "User Event 1"
	PARTICLE_EVENT_TYPE_MASK_USER_1 = 0x40,
	// MPropertyFriendlyName "User Event 2"
	PARTICLE_EVENT_TYPE_MASK_USER_2 = 0x80,
	// MPropertyFriendlyName "User Event 3"
	PARTICLE_EVENT_TYPE_MASK_USER_3 = 0x100,
	// MPropertyFriendlyName "User Event 4"
	PARTICLE_EVENT_TYPE_MASK_USER_4 = 0x200,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleMassMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Radius cubed"
	PARTICLE_MASSMODE_RADIUS_CUBED = 0x0,
	// MPropertyFriendlyName "Radius squared"
	PARTICLE_MASSMODE_RADIUS_SQUARED = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleDirectionNoiseType_t : std::uint32_t
{
	// MPropertyFriendlyName "Perlin"
	PARTICLE_DIR_NOISE_PERLIN = 0x0,
	// MPropertyFriendlyName "Curl"
	PARTICLE_DIR_NOISE_CURL = 0x1,
	// MPropertyFriendlyName "Worley"
	PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleHitboxBiasType_t : std::uint32_t
{
	// MPropertyFriendlyName "Bias relative to Entity"
	PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
	// MPropertyFriendlyName "Bias relative to Hitbox"
	PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleControlPointAxis_t : std::uint32_t
{
	// MPropertyFriendlyName "X Axis"
	PARTICLE_CP_AXIS_X = 0x0,
	// MPropertyFriendlyName "Y Axis"
	PARTICLE_CP_AXIS_Y = 0x1,
	// MPropertyFriendlyName "Z Axis"
	PARTICLE_CP_AXIS_Z = 0x2,
	// MPropertyFriendlyName "Negative X Axis"
	PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
	// MPropertyFriendlyName "Negative Y Axis"
	PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
	// MPropertyFriendlyName "Negative Z Axis"
	PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 12
// Alignment: 4
// Size: 0x4
enum class ParticlePinDistance_t : std::uint32_t
{
	// MPropertyFriendlyName "Don't Break"
	PARTICLE_PIN_DISTANCE_NONE = 0xffffffff,
	// MPropertyFriendlyName "Distance to Neighboring Particle"
	PARTICLE_PIN_DISTANCE_NEIGHBOR = 0x0,
	// MPropertyFriendlyName "Distance to Farthest Particle"
	PARTICLE_PIN_DISTANCE_FARTHEST = 0x1,
	// MPropertyFriendlyName "Distance to First Particle"
	PARTICLE_PIN_DISTANCE_FIRST = 0x2,
	// MPropertyFriendlyName "Distance to Last Particle"
	PARTICLE_PIN_DISTANCE_LAST = 0x3,
	// MPropertyFriendlyName "Distance to Particle System Center"
	PARTICLE_PIN_DISTANCE_CENTER = 0x5,
	// MPropertyFriendlyName "Distance to Control Point"
	PARTICLE_PIN_DISTANCE_CP = 0x6,
	// MPropertyFriendlyName "Distance to Either of Two Control Points"
	PARTICLE_PIN_DISTANCE_CP_PAIR_EITHER = 0x7,
	// MPropertyFriendlyName "Distance to Both of Two Control Points"
	PARTICLE_PIN_DISTANCE_CP_PAIR_BOTH = 0x8,
	// MPropertyFriendlyName "Particle Speed"
	PARTICLE_PIN_SPEED = 0x9,
	// MPropertyFriendlyName "Collection Age"
	PARTICLE_PIN_COLLECTION_AGE = 0xa,
	// MPropertyFriendlyName "Break Value of >= 1"
	PARTICLE_PIN_FLOAT_VALUE = 0xb,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class VectorFloatExpressionType_t : std::uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	VECTOR_FLOAT_EXPRESSION_UNINITIALIZED = 0xffffffff,
	// MPropertyFriendlyName "Dot Product"
	VECTOR_FLOAT_EXPRESSION_DOTPRODUCT = 0x0,
	// MPropertyFriendlyName "Distance Between"
	VECTOR_FLOAT_EXPRESSION_DISTANCE = 0x1,
	// MPropertyFriendlyName "Distance Between Squared"
	VECTOR_FLOAT_EXPRESSION_DISTANCESQR = 0x2,
	// MPropertyFriendlyName "Input 1 Length"
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTH = 0x3,
	// MPropertyFriendlyName "Input 1 Length Squared"
	VECTOR_FLOAT_EXPRESSION_INPUT1_LENGTHSQR = 0x4,
	// MPropertyFriendlyName "Input 1 Noise"
	VECTOR_FLOAT_EXPRESSION_INPUT1_NOISE = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleFogType_t : std::uint32_t
{
	// MPropertyFriendlyName "Use Game Default"
	PARTICLE_FOG_GAME_DEFAULT = 0x0,
	// MPropertyFriendlyName "Enabled"
	PARTICLE_FOG_ENABLED = 0x1,
	// MPropertyFriendlyName "Disabled"
	PARTICLE_FOG_DISABLED = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class VectorExpressionType_t : std::uint32_t
{
	// MPropertyFriendlyName "Uninitialized"
	VECTOR_EXPRESSION_UNINITIALIZED = 0xffffffff,
	// MPropertyFriendlyName "Add"
	VECTOR_EXPRESSION_ADD = 0x0,
	// MPropertyFriendlyName "Subtract"
	VECTOR_EXPRESSION_SUBTRACT = 0x1,
	// MPropertyFriendlyName "Multiply"
	VECTOR_EXPRESSION_MUL = 0x2,
	// MPropertyFriendlyName "Divide"
	VECTOR_EXPRESSION_DIVIDE = 0x3,
	// MPropertyFriendlyName "Input 1"
	VECTOR_EXPRESSION_INPUT_1 = 0x4,
	// MPropertyFriendlyName "Min"
	VECTOR_EXPRESSION_MIN = 0x5,
	// MPropertyFriendlyName "Max"
	VECTOR_EXPRESSION_MAX = 0x6,
	// MPropertyFriendlyName "Cross Product"
	VECTOR_EXPRESSION_CROSSPRODUCT = 0x7,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleRotationLockType_t : std::uint32_t
{
	// MPropertyFriendlyName "Don't Set"
	PARTICLE_ROTATION_LOCK_NONE = 0x0,
	// MPropertyFriendlyName "Set Rotations"
	PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
	// MPropertyFriendlyName "Set Normal"
	PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class HitboxLerpType_t : std::uint32_t
{
	// MPropertyFriendlyName "Lerp from Start/End Time"
	HITBOX_LERP_LIFETIME = 0x0,
	// MPropertyFriendlyName "Constant"
	HITBOX_LERP_CONSTANT = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimationType_t : std::uint32_t
{
	// MPropertyFriendlyName "Fixed Rate"
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	// MPropertyFriendlyName "Fit Lifetime"
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	// MPropertyFriendlyName "Set Frames Manually"
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleAttrBoxFlags_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	PARTICLE_ATTR_BOX_FLAGS_NONE = 0x0,
	// MPropertyFriendlyName "Water"
	PARTICLE_ATTR_BOX_FLAGS_WATER = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleTopology_t : std::uint32_t
{
	// MPropertyFriendlyName "Points"
	PARTICLE_TOPOLOGY_POINTS = 0x0,
	// MPropertyFriendlyName "Line segments"
	PARTICLE_TOPOLOGY_LINES = 0x1,
	// MPropertyFriendlyName "Triangles"
	PARTICLE_TOPOLOGY_TRIS = 0x2,
	// MPropertyFriendlyName "Quadrilaterals"
	PARTICLE_TOPOLOGY_QUADS = 0x3,
	// MPropertyFriendlyName "Cubes"
	PARTICLE_TOPOLOGY_CUBES = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleLightBehaviorChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Follow Direction"
	PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
	// MPropertyFriendlyName "Rope"
	PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
	// MPropertyFriendlyName "Trails"
	PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ModelHitboxType_t : std::uint32_t
{
	MODEL_HITBOX_TYPE_STANDARD = 0x0,
	MODEL_HITBOX_TYPE_RAW_BONES = 0x1,
	MODEL_HITBOX_TYPE_RENDERBOUNDS = 0x2,
	MODEL_HITBOX_TYPE_SNAPSHOT = 0x3,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class ParticleFloatMapType_t : std::uint32_t
{
	PF_MAP_TYPE_INVALID = 0xffffffff,
	PF_MAP_TYPE_DIRECT = 0x0,
	PF_MAP_TYPE_MULT = 0x1,
	PF_MAP_TYPE_REMAP = 0x2,
	PF_MAP_TYPE_REMAP_BIASED = 0x3,
	PF_MAP_TYPE_CURVE = 0x4,
	PF_MAP_TYPE_NOTCHED = 0x5,
	PF_MAP_TYPE_ROUND = 0x6,
	PF_MAP_TYPE_COUNT = 0x7,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleTraceSet_t : std::uint32_t
{
	// MPropertyFriendlyName "Everything"
	PARTICLE_TRACE_SET_ALL = 0x0,
	// MPropertyFriendlyName "Static World Only"
	PARTICLE_TRACE_SET_STATIC = 0x1,
	// MPropertyFriendlyName "Static World and Kinematic/Keyframed Only"
	PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
	// MPropertyFriendlyName "Dynamic Entities Only"
	PARTICLE_TRACE_SET_DYNAMIC = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ParticleTextureLayerBlendType_t : std::uint32_t
{
	// MPropertyFriendlyName "Multiply"
	SPRITECARD_TEXTURE_BLEND_MULTIPLY = 0x0,
	// MPropertyFriendlyName "Mod2X"
	SPRITECARD_TEXTURE_BLEND_MOD2X = 0x1,
	// MPropertyFriendlyName "Replace"
	SPRITECARD_TEXTURE_BLEND_REPLACE = 0x2,
	// MPropertyFriendlyName "Add"
	SPRITECARD_TEXTURE_BLEND_ADD = 0x3,
	// MPropertyFriendlyName "Subtract"
	SPRITECARD_TEXTURE_BLEND_SUBTRACT = 0x4,
	// MPropertyFriendlyName "Average"
	SPRITECARD_TEXTURE_BLEND_AVERAGE = 0x5,
	// MPropertyFriendlyName "Luminance"
	SPRITECARD_TEXTURE_BLEND_LUMINANCE = 0x6,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleSelection_t : std::uint32_t
{
	// MPropertyFriendlyName "First/Oldest Particle"
	PARTICLE_SELECTION_FIRST = 0x0,
	// MPropertyFriendlyName "Last/Newest Particle"
	PARTICLE_SELECTION_LAST = 0x1,
	// MPropertyFriendlyName "Specified Particle Number"
	PARTICLE_SELECTION_NUMBER = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleFloatInputMode_t : std::uint32_t
{
	PF_INPUT_MODE_INVALID = 0xffffffff,
	PF_INPUT_MODE_CLAMPED = 0x0,
	PF_INPUT_MODE_LOOPED = 0x1,
	PF_INPUT_MODE_COUNT = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SnapshotIndexType_t : std::uint32_t
{
	// MPropertyFriendlyName "Increment Index"
	SNAPSHOT_INDEX_INCREMENT = 0x0,
	// MPropertyFriendlyName "Direct Set of Index"
	SNAPSHOT_INDEX_DIRECT = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class ParticleOutputBlendMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Alpha Blend"
	PARTICLE_OUTPUT_BLEND_MODE_ALPHA = 0x0,
	// MPropertyFriendlyName "Additive"
	PARTICLE_OUTPUT_BLEND_MODE_ADD = 0x1,
	// MPropertyFriendlyName "Blend Add (Pre-Mult Alpha)"
	PARTICLE_OUTPUT_BLEND_MODE_BLEND_ADD = 0x2,
	// MPropertyFriendlyName "Half Blend Add"
	PARTICLE_OUTPUT_BLEND_MODE_HALF_BLEND_ADD = 0x3,
	// MPropertyFriendlyName "Negative Half Blend Add"
	PARTICLE_OUTPUT_BLEND_MODE_NEG_HALF_BLEND_ADD = 0x4,
	// MPropertyFriendlyName "Mod2X"
	PARTICLE_OUTPUT_BLEND_MODE_MOD2X = 0x5,
	// MPropertyFriendlyName "Lighten"
	PARTICLE_OUTPUT_BLEND_MODE_LIGHTEN = 0x6,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleLightnintBranchBehavior_t : std::uint32_t
{
	// MPropertyFriendlyName "Branch Towards Current Direction"
	PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
	// MPropertyFriendlyName "Branch Towards Endpoint"
	PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class MaterialProxyType_t : std::uint32_t
{
	// MPropertyFriendlyName "Status Effect"
	MATERIAL_PROXY_STATUS_EFFECT = 0x0,
	// MPropertyFriendlyName "Tint Only"
	MATERIAL_PROXY_TINT = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleDepthFeatheringMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Off"
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	// MPropertyFriendlyName "On (If Possible)"
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	// MPropertyFriendlyName "On (Required)"
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleFloatRandomMode_t : std::uint32_t
{
	PF_RANDOM_MODE_INVALID = 0xffffffff,
	PF_RANDOM_MODE_CONSTANT = 0x0,
	PF_RANDOM_MODE_VARYING = 0x1,
	PF_RANDOM_MODE_COUNT = 0x2,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PFNoiseModifier_t : std::uint32_t
{
	PF_NOISE_MODIFIER_NONE = 0x0,
	PF_NOISE_MODIFIER_LINES = 0x1,
	PF_NOISE_MODIFIER_CLUMPS = 0x2,
	PF_NOISE_MODIFIER_RINGS = 0x3,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 19
// Alignment: 4
// Size: 0x4
enum class ParticleVecType_t : std::uint32_t
{
	PVEC_TYPE_INVALID = 0xffffffff,
	PVEC_TYPE_LITERAL = 0x0,
	PVEC_TYPE_LITERAL_COLOR = 0x1,
	PVEC_TYPE_NAMED_VALUE = 0x2,
	PVEC_TYPE_PARTICLE_VECTOR = 0x3,
	PVEC_TYPE_PARTICLE_VELOCITY = 0x4,
	PVEC_TYPE_CP_VALUE = 0x5,
	PVEC_TYPE_CP_RELATIVE_POSITION = 0x6,
	PVEC_TYPE_CP_RELATIVE_DIR = 0x7,
	PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0x8,
	PVEC_TYPE_FLOAT_COMPONENTS = 0x9,
	PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xa,
	PVEC_TYPE_FLOAT_INTERP_OPEN = 0xb,
	PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xc,
	PVEC_TYPE_RANDOM_UNIFORM = 0xd,
	PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0xe,
	PVEC_TYPE_CP_DELTA = 0xf,
	PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x10,
	PVEC_TYPE_COUNT = 0x11,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleLightUnitChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Candelas"
	PARTICLE_LIGHT_UNIT_CANDELAS = 0x0,
	// MPropertyFriendlyName "Lumens"
	PARTICLE_LIGHT_UNIT_LUMENS = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleFalloffFunction_t : std::uint32_t
{
	// MPropertyFriendlyName "Constant - No Falloff"
	PARTICLE_FALLOFF_CONSTANT = 0x0,
	// MPropertyFriendlyName "Linear Falloff"
	PARTICLE_FALLOFF_LINEAR = 0x1,
	// MPropertyFriendlyName "Exponential Falloff"
	PARTICLE_FALLOFF_EXPONENTIAL = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleSequenceCropOverride_t : std::uint32_t
{
	// MPropertyFriendlyName "Use Default Cropping Behavior"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_DEFAULT = 0xffffffff,
	// MPropertyFriendlyName "Force Cropping Off"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_OFF = 0x0,
	// MPropertyFriendlyName "Force Cropping On"
	PARTICLE_SEQUENCE_CROP_OVERRIDE_FORCE_ON = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleDetailLevel_t : std::uint32_t
{
	// MPropertyFriendlyName "Low"
	PARTICLEDETAIL_LOW = 0x0,
	// MPropertyFriendlyName "Medium"
	PARTICLEDETAIL_MEDIUM = 0x1,
	// MPropertyFriendlyName "High"
	PARTICLEDETAIL_HIGH = 0x2,
	// MPropertyFriendlyName "Ultra"
	PARTICLEDETAIL_ULTRA = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class BBoxVolumeType_t : std::uint32_t
{
	// MPropertyFriendlyName "Bounding Box Volume"
	BBOX_VOLUME = 0x0,
	// MPropertyFriendlyName "Bounding Box Dimensions"
	BBOX_DIMENSIONS = 0x1,
	// MPropertyFriendlyName "Bounding Box Mins/Maxs"
	BBOX_MINS_MAXS = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class SpriteCardTextureType_t : std::uint32_t
{
	// MPropertyFriendlyName "Diffuse Texture"
	SPRITECARD_TEXTURE_DIFFUSE = 0x0,
	// MPropertyFriendlyName "Diffuse Infinite Zoom"
	SPRITECARD_TEXTURE_ZOOM = 0x1,
	// MPropertyFriendlyName "1D Luminance to Color Lookup"
	SPRITECARD_TEXTURE_1D_COLOR_LOOKUP = 0x2,
	// MPropertyFriendlyName "UV Distortion"
	SPRITECARD_TEXTURE_UVDISTORTION = 0x3,
	// MPropertyFriendlyName "UV Distortion Infinite Zoom"
	SPRITECARD_TEXTURE_UVDISTORTION_ZOOM = 0x4,
	// MPropertyFriendlyName "Normal Map"
	SPRITECARD_TEXTURE_NORMALMAP = 0x5,
	// MPropertyFriendlyName "Animation Smoothing Motion Vector"
	SPRITECARD_TEXTURE_ANIMMOTIONVEC = 0x6,
	// MPropertyFriendlyName "Spherical Harmonics A"
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A = 0x7,
	// MPropertyFriendlyName "Spherical Harmonics B"
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B = 0x8,
	// MPropertyFriendlyName "Spherical Harmonics C"
	SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C = 0x9,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleAlphaReferenceType_t : std::uint32_t
{
	// MPropertyFriendlyName "Texel Alpha & Particle Alpha & Alpha Reference"
	PARTICLE_ALPHA_REFERENCE_ALPHA_ALPHA = 0x0,
	// MPropertyFriendlyName "Particle Alpha & Alpha Reference"
	PARTICLE_ALPHA_REFERENCE_OPAQUE_ALPHA = 0x1,
	// MPropertyFriendlyName "Texel Alpha & Alpha Reference"
	PARTICLE_ALPHA_REFERENCE_ALPHA_OPAQUE = 0x2,
	// MPropertyFriendlyName "Alpha Reference"
	PARTICLE_ALPHA_REFERENCE_OPAQUE_OPAQUE = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 15
// Alignment: 4
// Size: 0x4
enum class SpriteCardTextureChannel_t : std::uint32_t
{
	// MPropertyFriendlyName "RGB"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB = 0x0,
	// MPropertyFriendlyName "RGBA"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA = 0x1,
	// MPropertyFriendlyName "Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_A = 0x2,
	// MPropertyFriendlyName "RGB with Alpha Passthrough"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A = 0x3,
	// MPropertyFriendlyName "RGB with Alpha Mask"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_ALPHAMASK = 0x4,
	// MPropertyFriendlyName "RGB with RGB as Alpha Mask"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_RGBMASK = 0x5,
	// MPropertyFriendlyName "RGBA with RGB as Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGBA_RGBALPHA = 0x6,
	// MPropertyFriendlyName "Alpha with RGB as Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_A_RGBALPHA = 0x7,
	// MPropertyFriendlyName "RGB with RGB as Alpha Passthrough"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RGB_A_RGBALPHA = 0x8,
	// MPropertyFriendlyName "Red Channel"
	SPRITECARD_TEXTURE_CHANNEL_MIX_R = 0x9,
	// MPropertyFriendlyName "Green Channel"
	SPRITECARD_TEXTURE_CHANNEL_MIX_G = 0xa,
	// MPropertyFriendlyName "Blue Channel"
	SPRITECARD_TEXTURE_CHANNEL_MIX_B = 0xb,
	// MPropertyFriendlyName "Red with Red as Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_RALPHA = 0xc,
	// MPropertyFriendlyName "Green with Green as Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_GALPHA = 0xd,
	// MPropertyFriendlyName "Blue with Blue as Alpha"
	SPRITECARD_TEXTURE_CHANNEL_MIX_BALPHA = 0xe,
};

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleTransformType_t : std::uint32_t
{
	PT_TYPE_INVALID = 0x0,
	PT_TYPE_NAMED_VALUE = 0x1,
	PT_TYPE_CONTROL_POINT = 0x2,
	PT_TYPE_CONTROL_POINT_RANGE = 0x3,
	PT_TYPE_COUNT = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class RenderModelSubModelFieldType_t : std::uint32_t
{
	// MPropertyFriendlyName "BodyGroup SubModel"
	SUBMODEL_AS_BODYGROUP_SUBMODEL = 0x0,
	// MPropertyFriendlyName "MeshGroup Index"
	SUBMODEL_AS_MESHGROUP_INDEX = 0x1,
	// MPropertyFriendlyName "MeshGroup Mask"
	SUBMODEL_AS_MESHGROUP_MASK = 0x2,
	// MPropertyFriendlyName "Model Default MeshGroup Mask"
	SUBMODEL_IGNORED_USE_MODEL_DEFAULT_MESHGROUP_MASK = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleHitboxDataSelection_t : std::uint32_t
{
	// MPropertyFriendlyName "Average Hitbox Speed"
	PARTICLE_HITBOX_AVERAGE_SPEED = 0x0,
	// MPropertyFriendlyName "Hitbox Count"
	PARTICLE_HITBOX_COUNT = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleOrientationChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Screen Align"
	PARTICLE_ORIENTATION_SCREEN_ALIGNED = 0x0,
	// MPropertyFriendlyName "Screen-Z Align"
	PARTICLE_ORIENTATION_SCREEN_Z_ALIGNED = 0x1,
	// MPropertyFriendlyName "World-Z Align"
	PARTICLE_ORIENTATION_WORLD_Z_ALIGNED = 0x2,
	// MPropertyFriendlyName "Particle Normal Align"
	PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL = 0x3,
	// MPropertyFriendlyName "Screen & Particle Normal Align"
	PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL = 0x4,
	// MPropertyFriendlyName "Full 3-Axis Rotation"
	PARTICLE_ORIENTATION_FULL_3AXIS_ROTATION = 0x5,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleCollisionMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Per-Particle Trace"
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	// MPropertyFriendlyName "Trace Caching"
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	// MPropertyFriendlyName "Per-Frame Planeset"
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	// MPropertyFriendlyName "Initial Trace Down"
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	// MPropertyFriendlyName "Collision Disabled"
	COLLISION_MODE_DISABLED = 0xffffffff,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleSortingChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Distance - Nearest"
	PARTICLE_SORTING_NEAREST = 0x0,
	// MPropertyFriendlyName "Age - Oldest"
	PARTICLE_SORTING_CREATION_TIME = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleEndcapMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Always Enabled"
	PARTICLE_ENDCAP_ALWAYS_ON = 0xffffffff,
	// MPropertyFriendlyName "Disabled During Endcap"
	PARTICLE_ENDCAP_ENDCAP_OFF = 0x0,
	// MPropertyFriendlyName "Only Enabled During Endcap"
	PARTICLE_ENDCAP_ENDCAP_ON = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ClosestPointTestType_t : std::uint32_t
{
	// MPropertyFriendlyName "Box"
	PARTICLE_CLOSEST_TYPE_BOX = 0x0,
	// MPropertyFriendlyName "Capsule"
	PARTICLE_CLOSEST_TYPE_CAPSULE = 0x1,
	// MPropertyFriendlyName "Hybrid Box/Capsule"
	PARTICLE_CLOSEST_TYPE_HYBRID = 0x2,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleImpulseType_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	IMPULSE_TYPE_NONE = 0x0,
	// MPropertyFriendlyName "Generic"
	IMPULSE_TYPE_GENERIC = 0x1,
	// MPropertyFriendlyName "Rope"
	IMPULSE_TYPE_ROPE = 0x2,
	// MPropertyFriendlyName "Explosion"
	IMPULSE_TYPE_EXPLOSION = 0x4,
	// MPropertyFriendlyName "Underwater Explosion"
	IMPULSE_TYPE_EXPLOSION_UNDERWATER = 0x8,
	// MPropertyFriendlyName "Particle System"
	IMPULSE_TYPE_PARTICLE_SYSTEM = 0x10,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SpriteCardShaderType_t : std::uint32_t
{
	// MPropertyFriendlyName "Default"
	SPRITECARD_SHADER_BASE = 0x0,
	// MPropertyFriendlyName "Custom"
	SPRITECARD_SHADER_CUSTOM = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleOmni2LightTypeChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Point"
	PARTICLE_OMNI2_LIGHT_TYPE_POINT = 0x0,
	// MPropertyFriendlyName "Sphere"
	PARTICLE_OMNI2_LIGHT_TYPE_SPHERE = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleLightFogLightingMode_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_NONE = 0x0,
	// MPropertyFriendlyName "Dynamic Fog with Shadows"
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC = 0x2,
	// MPropertyFriendlyName "Dynamic Fog No Shadows"
	PARTICLE_LIGHT_FOG_LIGHTING_MODE_DYNAMIC_NOSHADOWS = 0x4,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleLightTypeChoiceList_t : std::uint32_t
{
	// MPropertyFriendlyName "Omni Light"
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	// MPropertyFriendlyName "Spot Light"
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	// MPropertyFriendlyName "FX Light"
	PARTICLE_LIGHT_TYPE_FX = 0x2,
	// MPropertyFriendlyName "Capsule Light"
	PARTICLE_LIGHT_TYPE_CAPSULE = 0x3,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleOrientationSetMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Set From Velocity"
	PARTICLE_ORIENTATION_SET_FROM_VELOCITY = 0x0,
	// MPropertyFriendlyName "Set From Rotations"
	PARTICLE_ORIENTATION_SET_FROM_ROTATIONS = 0x1,
};

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class TextureRepetitionMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Per-Particle"
	TEXTURE_REPETITION_PARTICLE = 0x0,
	// MPropertyFriendlyName "Entire Path"
	TEXTURE_REPETITION_PATH = 0x1,
};

struct CPerParticleVecInput;
struct ParticleAttributeIndex_t;
struct CParticleCollectionVecInput;
struct CParticleTransformInput;
struct CPerParticleFloatInput;
struct CParticleCollectionRendererFloatInput;
struct CParticleCollectionFloatInput;
struct CRandomNumberGeneratorParameters;
struct CParticleCollectionRendererVecInput;
struct CPathParameters;
struct CParticleMassCalculationParameters;
struct CParticleRemapFloatInput;
struct CParticleModelInput;
struct CParticleFloatInput;
struct CNewParticleEffect;
struct IParticleCollection;
struct PARTICLE_EHANDLE__;
struct CParticleProperty;
struct ParticleNamedValueConfiguration_t;
struct CParticleVisibilityInputs;
struct ControlPointReference_t;
struct CParticleVariableRef;
struct TextureControls_t;
struct ParticlePreviewState_t;
struct CReplicationParameters;

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
// MPulseDomainOptInFeatureTag
// MPulseDomainOptInFeatureTag
class CParticleCollectionBindingInstance : public CBasePulseGraphInstance
{
public:
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x28
class CParticleProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ParticleAttributeIndex_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("particles.dll")->FindDeclaredClass("ParticleAttributeIndex_t")->GetStaticFields()[0]->m_pInstance);};
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CParticleInput
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x48
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CParticleVisibilityInputs
{
public:
	// MPropertyFriendlyName "camera depth bias"
	float m_flCameraBias; // 0x0	
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPin; // 0x4	
	// MPropertyFriendlyName "input proxy radius"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flProxyRadius; // 0x8	
	// MPropertyFriendlyName "input proxy pixel visibility minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMin; // 0xc	
	// MPropertyFriendlyName "input proxy pixel visibility maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputMax; // 0x10	
	// MPropertyFriendlyName "input proxy pixel visibility fade out time"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flInputPixelVisFade; // 0x14	
	// MPropertyFriendlyName "input proxy unsupported hardware fallback value"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flNoPixelVisibilityFallback; // 0x18	
	// MPropertyFriendlyName "input distance minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMin; // 0x1c	
	// MPropertyFriendlyName "input distance maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDistanceInputMax; // 0x20	
	// MPropertyFriendlyName "input dot minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMin; // 0x24	
	// MPropertyFriendlyName "input dot maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flDotInputMax; // 0x28	
	// MPropertyFriendlyName "input dot use CP angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCPAngles; // 0x2c	
	// MPropertyFriendlyName "input dot use Camera angles"
	// MPropertySuppressExpr "m_nCPin == -1"
	bool m_bDotCameraAngles; // 0x2d	
private:
	[[maybe_unused]] uint8_t __pad002e[0x2]; // 0x2e
public:
	// MPropertyFriendlyName "output alpha scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMin; // 0x30	
	// MPropertyFriendlyName "output alpha scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flAlphaScaleMax; // 0x34	
	// MPropertyFriendlyName "output radius scale minimum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMin; // 0x38	
	// MPropertyFriendlyName "output radius scale maximum"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleMax; // 0x3c	
	// MPropertyFriendlyName "output radius FOV scale base"
	// MPropertySuppressExpr "m_nCPin == -1"
	float m_flRadiusScaleFOVBase; // 0x40	
	// MPropertyFriendlyName "vr camera right eye"
	// MParticleAdvancedField
	bool m_bRightEye; // 0x44	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MClassIsParticleFloat
// MParticleCustomFieldDefaultValue
class CParticleFloatInput : public CParticleInput
{
public:
	ParticleFloatType_t m_nType; // 0x10	
	ParticleFloatMapType_t m_nMapType; // 0x14	
	float m_flLiteralValue; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CParticleNamedValueRef m_NamedValue; // 0x20	
	int32_t m_nControlPoint; // 0x60	
	ParticleAttributeIndex_t m_nScalarAttribute; // 0x64	
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x68	
	int32_t m_nVectorComponent; // 0x6c	
	float m_flRandomMin; // 0x70	
	float m_flRandomMax; // 0x74	
	bool m_bHasRandomSignFlip; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0079[0x3]; // 0x79
public:
	int32_t m_nRandomSeed; // 0x7c	
	ParticleFloatRandomMode_t m_nRandomMode; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	float m_flLOD0; // 0x88	
	float m_flLOD1; // 0x8c	
	float m_flLOD2; // 0x90	
	float m_flLOD3; // 0x94	
	ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x98	
	float m_flNoiseOutputMin; // 0x9c	
	float m_flNoiseOutputMax; // 0xa0	
	float m_flNoiseScale; // 0xa4	
	Vector m_vecNoiseOffsetRate; // 0xa8	
	float m_flNoiseOffset; // 0xb4	
	int32_t m_nNoiseOctaves; // 0xb8	
	PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xbc	
	PFNoiseType_t m_nNoiseType; // 0xc0	
	PFNoiseModifier_t m_nNoiseModifier; // 0xc4	
	float m_flNoiseTurbulenceScale; // 0xc8	
	float m_flNoiseTurbulenceMix; // 0xcc	
	float m_flNoiseImgPreviewScale; // 0xd0	
	bool m_bNoiseImgPreviewLive; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0xb]; // 0xd5
public:
	float m_flNoCameraFallback; // 0xe0	
	bool m_bUseBoundsCenter; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00e5[0x3]; // 0xe5
public:
	ParticleFloatInputMode_t m_nInputMode; // 0xe8	
	float m_flMultFactor; // 0xec	
	float m_flInput0; // 0xf0	
	float m_flInput1; // 0xf4	
	float m_flOutput0; // 0xf8	
	float m_flOutput1; // 0xfc	
	float m_flNotchedRangeMin; // 0x100	
	float m_flNotchedRangeMax; // 0x104	
	float m_flNotchedOutputOutside; // 0x108	
	float m_flNotchedOutputInside; // 0x10c	
	ParticleFloatRoundType_t m_nRoundType; // 0x110	
	ParticleFloatBiasType_t m_nBiasType; // 0x114	
	float m_flBiasParameter; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CPiecewiseCurve m_Curve; // 0x120	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "CollectionFloatInput()"
class CParticleCollectionFloatInput : public CParticleFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CollisionGroupContext_t
{
public:
	int32_t m_nCollisionGroupNumber; // 0x0	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "TransformInput()"
// MClassIsParticleTransform
// MParticleCustomFieldDefaultValue
class CParticleTransformInput : public CParticleInput
{
public:
	ParticleTransformType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	bool m_bFollowNamedValue; // 0x58	
	bool m_bSupportsDisabled; // 0x59	
	bool m_bUseOrientation; // 0x5a	
private:
	[[maybe_unused]] uint8_t __pad005b[0x1]; // 0x5b
public:
	int32_t m_nControlPoint; // 0x5c	
	int32_t m_nControlPointRangeMax; // 0x60	
	float m_flEndCPGrowthTime; // 0x64	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertyFriendlyName "operator strength"
	// MPropertySortPriority "-100"
	CParticleCollectionFloatInput m_flOpStrength; // 0x8	
	// MPropertyFriendlyName "operator end cap state"
	// MPropertySortPriority "-100"
	ParticleEndcapMode_t m_nOpEndCapState; // 0x168	
	// MPropertyStartGroup "Operator Fade"
	// MPropertyFriendlyName "operator start fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeInTime; // 0x16c	
	// MPropertyFriendlyName "operator end fadein"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeInTime; // 0x170	
	// MPropertyFriendlyName "operator start fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpStartFadeOutTime; // 0x174	
	// MPropertyFriendlyName "operator end fadeout"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpEndFadeOutTime; // 0x178	
	// MPropertyFriendlyName "operator fade oscillate"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpFadeOscillatePeriod; // 0x17c	
	// MPropertyFriendlyName "normalize fade times to endcap"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	bool m_bNormalizeToStopTime; // 0x180	
private:
	[[maybe_unused]] uint8_t __pad0181[0x3]; // 0x181
public:
	// MPropertyStartGroup "Operator Fade Time Offset"
	// MPropertyFriendlyName "operator fade time offset min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMin; // 0x184	
	// MPropertyFriendlyName "operator fade time offset max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeOffsetMax; // 0x188	
	// MPropertyFriendlyName "operator fade time offset seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeOffsetSeed; // 0x18c	
	// MPropertyStartGroup "Operator Fade Timescale Modifiers"
	// MPropertyFriendlyName "operator fade time scale seed"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	int32_t m_nOpTimeScaleSeed; // 0x190	
	// MPropertyFriendlyName "operator fade time scale min"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMin; // 0x194	
	// MPropertyFriendlyName "operator fade time scale max"
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	float m_flOpTimeScaleMax; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0x2]; // 0x19c
public:
	// MPropertyStartGroup
	// MPropertySuppressField
	bool m_bDisableOperator; // 0x19e	
private:
	[[maybe_unused]] uint8_t __pad019f[0x1]; // 0x19f
public:
	// MPropertyFriendlyName "operator help and notes"
	// MParticleHelpField
	// MParticleAdvancedField
	// MPropertySortPriority "-100"
	CUtlString m_Notes; // 0x1a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionOperator : public CParticleFunction
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeOutSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade out time"
	float m_flFadeOutTime; // 0x1c0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionPreEmission : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Run Only Once"
	bool m_bRunOnce; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionInitializer : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Associated emitter Index"
	int32_t m_nAssociatedEmitterIndex; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x1c0	
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x208	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x209	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x340
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderSound : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x210	
	// MPropertyFriendlyName "decibel level scale"
	float m_flSndLvlScale; // 0x214	
	// MPropertyFriendlyName "pitch scale"
	float m_flPitchScale; // 0x218	
	// MPropertyFriendlyName "volume scale"
	float m_flVolumeScale; // 0x21c	
	// MPropertyFriendlyName "decibel level field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSndLvlField; // 0x220	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x224	
	// MPropertyFriendlyName "pitch field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPitchField; // 0x228	
	// MPropertyFriendlyName "volume field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVolumeField; // 0x22c	
	// MPropertyFriendlyName "sound channel"
	// MPropertyAttributeChoiceName "sound_channel"
	int32_t m_nChannel; // 0x230	
	// MPropertyFriendlyName "sound control point number"
	int32_t m_nCPReference; // 0x234	
	// MPropertyFriendlyName "sound"
	// MPropertyAttributeEditor "SoundPicker()"
	char m_pszSoundName[256]; // 0x238	
	// MPropertyFriendlyName "suppress stop event"
	bool m_bSuppressStopSoundEvent; // 0x338	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointsToParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1cc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "orientation style"
	ParticleOrientationSetMode_t m_nOrientationMode; // 0x1d4	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFDistanceToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x328	
	// MPropertyFriendlyName "Value for dist<min"
	Vector m_vValueBelowMin; // 0x488	
	// MPropertyFriendlyName "Value for dist=min"
	Vector m_vValueAtMin; // 0x494	
	// MPropertyFriendlyName "Value for dist=max"
	Vector m_vValueAtMax; // 0x4a0	
	// MPropertyFriendlyName "Value for dist>max"
	Vector m_vValueAboveMax; // 0x4ac	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1cc	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "PerParticleFloatInput()"
class CPerParticleFloatInput : public CParticleFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct ParticlePreviewBodyGroup_t
{
public:
	CUtlString m_bodyGroupName; // 0x0	
	int32_t m_nValue; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x1c4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1cc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_StatusEffect : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "D_DETAIL_2"
	Detail2Combo_t m_nDetail2Combo; // 0x1c8	
	// MPropertyFriendlyName "$DETAIL2ROTATION"
	float m_flDetail2Rotation; // 0x1cc	
	// MPropertyFriendlyName "$DETAIL2SCALE"
	float m_flDetail2Scale; // 0x1d0	
	// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
	float m_flDetail2BlendFactor; // 0x1d4	
	// MPropertyFriendlyName "$COLORWARPINTENSITY"
	float m_flColorWarpIntensity; // 0x1d8	
	// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
	float m_flDiffuseWarpBlendToFull; // 0x1dc	
	// MPropertyFriendlyName "$ENVMAPINTENSITY"
	float m_flEnvMapIntensity; // 0x1e0	
	// MPropertyFriendlyName "$AMBIENTSCALE"
	float m_flAmbientScale; // 0x1e4	
	// MPropertyFriendlyName "$SPECULARCOLOR"
	Color m_specularColor; // 0x1e8	
	// MPropertyFriendlyName "$SPECULARSCALE"
	float m_flSpecularScale; // 0x1ec	
	// MPropertyFriendlyName "$SPECULAREXPONENT"
	float m_flSpecularExponent; // 0x1f0	
	// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
	float m_flSpecularExponentBlendToFull; // 0x1f4	
	// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
	float m_flSpecularBlendToFull; // 0x1f8	
	// MPropertyFriendlyName "$RIMLIGHTCOLOR"
	Color m_rimLightColor; // 0x1fc	
	// MPropertyFriendlyName "$RIMLIGHTSCALE"
	float m_flRimLightScale; // 0x200	
	// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
	float m_flReflectionsTintByBaseBlendToNone; // 0x204	
	// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
	float m_flMetalnessBlendToFull; // 0x208	
	// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
	float m_flSelfIllumBlendToFull; // 0x20c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x270
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RtEnvCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1c8	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1d4	
	// MPropertyFriendlyName "use velocity for test direction"
	bool m_bUseVelocity; // 0x1e0	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1e1	
	// MPropertyFriendlyName "velocity test adjust lifespan"
	bool m_bLifeAdjust; // 0x1e2	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1e3	
private:
	[[maybe_unused]] uint8_t __pad0263[0x1]; // 0x263
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x264	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x268	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionConstraint : public CParticleFunction
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CRandomNumberGeneratorParameters
{
public:
	// MPropertyFriendlyName "Distribute evenly"
	bool m_bDistributeEvenly; // 0x0	
	// MPropertyFriendlyName "Seed (negative values=randomize)"
	// MPropertySuppressExpr "!m_bDistributeEvenly"
	int32_t m_nSeed; // 0x4	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
// MClassIsParticleVec
// MParticleCustomFieldDefaultValue
class CParticleVecInput : public CParticleInput
{
public:
	ParticleVecType_t m_nType; // 0x10	
	Vector m_vLiteralValue; // 0x14	
	Color m_LiteralColor; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CParticleNamedValueRef m_NamedValue; // 0x28	
	bool m_bFollowNamedValue; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c	
	Vector m_vVectorAttributeScale; // 0x70	
	int32_t m_nControlPoint; // 0x7c	
	int32_t m_nDeltaControlPoint; // 0x80	
	Vector m_vCPValueScale; // 0x84	
	Vector m_vCPRelativePosition; // 0x90	
	Vector m_vCPRelativeDir; // 0x9c	
	CParticleFloatInput m_FloatComponentX; // 0xa8	
	CParticleFloatInput m_FloatComponentY; // 0x208	
	CParticleFloatInput m_FloatComponentZ; // 0x368	
	CParticleFloatInput m_FloatInterp; // 0x4c8	
	float m_flInterpInput0; // 0x628	
	float m_flInterpInput1; // 0x62c	
	Vector m_vInterpOutput0; // 0x630	
	Vector m_vInterpOutput1; // 0x63c	
	CColorGradient m_Gradient; // 0x648	
	Vector m_vRandomMin; // 0x660	
	Vector m_vRandomMax; // 0x66c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct ParticleChildrenInfo_t
{
public:
	// MPropertySuppressField
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_ChildRef; // 0x0	
	// MPropertyFriendlyName "delay"
	float m_flDelay; // 0x8	
	// MPropertyFriendlyName "end cap effect"
	bool m_bEndCap; // 0xc	
	// MPropertySuppressField
	bool m_bDisableChild; // 0xd	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	// MPropertyFriendlyName "disable at detail levels below"
	ParticleDetailLevel_t m_nDetailLevel; // 0x10	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapScalarOnceTimed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c1[0x3]; // 0x1c1
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_INIT_RandomNamedModelElement : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c8	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1d0	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1e8	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1e9	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x1ea	
private:
	[[maybe_unused]] uint8_t __pad01eb[0x1]; // 0x1eb
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PlaneCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point for point on plane"
	int32_t m_nPlaneControlPoint; // 0x1c0	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneDirection; // 0x1c4	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "cull plane offset"
	float m_flPlaneOffset; // 0x1d4	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "PerParticleVecInput()"
class CPerParticleVecInput : public CParticleVecInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ModelDampenMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1c4	
	// MPropertyFriendlyName "dampen outside instead of inside"
	bool m_bOutside; // 0x1c5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c7	
private:
	[[maybe_unused]] uint8_t __pad0247[0x1]; // 0x247
public:
	// MPropertyFriendlyName "test position offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecPosOffset; // 0x248	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	float m_fDrag; // 0x8c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionForce : public CParticleFunction
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TeleportBeam : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Position Control Point"
	int32_t m_nCPPosition; // 0x1c0	
	// MPropertyFriendlyName "Velocity Control Point"
	int32_t m_nCPVelocity; // 0x1c4	
	// MPropertyFriendlyName "Misc Control Point"
	int32_t m_nCPMisc; // 0x1c8	
	// MPropertyFriendlyName "Color Control Point"
	int32_t m_nCPColor; // 0x1cc	
	// MPropertyFriendlyName "Invalid Color Control Point"
	int32_t m_nCPInvalidColor; // 0x1d0	
	// MPropertyFriendlyName "Extra Arc Data Point"
	int32_t m_nCPExtraArcData; // 0x1d4	
	// MPropertyFriendlyName "Gravity"
	Vector m_vGravity; // 0x1d8	
	// MPropertyFriendlyName "Arc Duration Maximum"
	float m_flArcMaxDuration; // 0x1e4	
	// MPropertyFriendlyName "Segment Break"
	float m_flSegmentBreak; // 0x1e8	
	// MPropertyFriendlyName "Arc Speed"
	float m_flArcSpeed; // 0x1ec	
	// MPropertyFriendlyName "Alpha"
	float m_flAlpha; // 0x1f0	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "CollectionVecInput()"
class CParticleCollectionVecInput : public CParticleVecInput
{
public:
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "CollectionRendererFloatInput()"
class CParticleCollectionRendererFloatInput : public CParticleCollectionFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CSpinUpdateBase : public CParticleFunctionOperator
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OrientTo2dDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1c0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1c4	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1c8	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1cc	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1d0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1d4	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	CParticleCollectionFloatInput m_flInputMax; // 0x338	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1d0	
	// MPropertyFriendlyName "input scale control point"
	int32_t m_nScaleControlPoint; // 0x1d4	
	// MPropertyFriendlyName "input scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e4	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e8	
	// MPropertyFriendlyName "invert input from total particle count"
	bool m_bInvert; // 0x1e9	
	// MPropertyFriendlyName "wrap input"
	bool m_bWrap; // 0x1ea	
private:
	[[maybe_unused]] uint8_t __pad01eb[0x1]; // 0x1eb
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1ec	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "CollectionRendererVecInput()"
class CParticleCollectionRendererVecInput : public CParticleCollectionVecInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x260
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointPositionToTimeOfDayValue : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "time-of-day parameter"
	char m_pszTimeOfDayParameter[128]; // 0x1cc	
	// MPropertyFriendlyName "default value"
	Vector m_vecDefaultValue; // 0x24c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1c0	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1c4	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1c8	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x1d0	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomModelSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "activity"
	// MPropertySuppressExpr "mod != dota"
	char m_ActivityName[256]; // 0x1c8	
	// MPropertyFriendlyName "sequence"
	// MPropertySuppressExpr "mod == dota"
	char m_SequenceName[256]; // 0x2c8	
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x3c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapGravityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "position input"
	CPerParticleVecInput m_vInput1; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x838	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x83c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x840	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x330	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x331	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x332	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x333	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe58
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapAverageHitboxSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "Output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "hitbox data"
	ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1d4	
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_flInputMax; // 0x338	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x498	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5f8	
	// MPropertyFriendlyName "intersection height CP"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	int32_t m_nHeightControlPointNumber; // 0x758	
private:
	[[maybe_unused]] uint8_t __pad075c[0x4]; // 0x75c
public:
	// MPropertyFriendlyName "comparison velocity"
	// MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x760	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0xdd8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomAlpha : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "alpha min"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMin; // 0x1cc	
	// MPropertyFriendlyName "alpha max"
	// MPropertyAttributeRange "0 255"
	int32_t m_nAlphaMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x8]; // 0x1d4
public:
	// MPropertyFriendlyName "alpha random exponent"
	float m_flAlphaRandExponent; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_NormalizeVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeInSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "proportional fade in time"
	float m_flFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "alpha field"
	// MPropertyAttributeChoiceName "particlefield_alpha"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RepeatedTriggerChildGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "Within-Cluster Refire Time"
	CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1d0	
	// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
	CParticleCollectionFloatInput m_flClusterSize; // 0x330	
	// MPropertyFriendlyName "Cluster Cooldown Time"
	CParticleCollectionFloatInput m_flClusterCooldown; // 0x490	
	// MPropertyFriendlyName "limit active children to parent particle count"
	bool m_bLimitChildCount; // 0x5f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTonemapController : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "tonemap level scale"
	float m_flTonemapLevel; // 0x210	
	// MPropertyFriendlyName "tonemap weight scale"
	float m_flTonemapWeight; // 0x214	
	// MPropertyFriendlyName "tonemap level"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapLevelField; // 0x218	
	// MPropertyFriendlyName "tonemap weight"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nTonemapWeightField; // 0x21c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapVelocityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa38
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1cc	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d0	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x848	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x8c8	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x8c9	
private:
	[[maybe_unused]] uint8_t __pad08ca[0x2]; // 0x8ca
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x8cc	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x8d0	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0xa30	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x230	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x390	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4f0	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x650	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x7b0	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x910	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0xa70	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xbd0	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xd30	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xd31	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomTrailLength : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "length min"
	float m_flMinLength; // 0x1c8	
	// MPropertyFriendlyName "length max"
	float m_flMaxLength; // 0x1cc	
	// MPropertyFriendlyName "length random exponent"
	float m_flLengthRandExponent; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "use old code"
	bool m_bOldCode; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1c8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x230	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x298	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x3f8	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x558	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x6b8	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x818	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x81c	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x820	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x8a0	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x8a4	
private:
	[[maybe_unused]] uint8_t __pad08a5[0x3]; // 0x8a5
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x8a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x320
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DecayOffscreen : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Offscreen Time Before Decay"
	CParticleCollectionFloatInput m_flOffscreenTime; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x40
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPathParameters
{
public:
	// MPropertyFriendlyName "start control point number"
	int32_t m_nStartControlPointNumber; // 0x0	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nEndControlPointNumber; // 0x4	
	// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
	int32_t m_nBulgeControl; // 0x8	
	// MPropertyFriendlyName "random bulge"
	float m_flBulge; // 0xc	
	// MPropertyFriendlyName "mid point position"
	float m_flMidPoint; // 0x10	
	// MPropertyFriendlyName "Offset from curve start point for path start"
	// MVectorIsCoordinate
	Vector m_vStartPointOffset; // 0x14	
	// MPropertyFriendlyName "Offset from curve midpoint for curve center"
	// MVectorIsCoordinate
	Vector m_vMidPointOffset; // 0x20	
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x2c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_EndCapTimedDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "decay time"
	float m_flDecayTime; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point 0"
	int32_t m_nCP0; // 0x1c0	
	// MPropertyFriendlyName "control point 1"
	int32_t m_nCP1; // 0x1c4	
	// MPropertyFriendlyName "min distance value"
	float m_flMinInputValue; // 0x1c8	
	// MPropertyFriendlyName "max distance value"
	float m_flMaxInputValue; // 0x1cc	
	// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
	bool m_bInfiniteLine; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionEmitter : public CParticleFunction
{
public:
	// MPropertyFriendlyName "Emitter Index"
	int32_t m_nEmitterIndex; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x1cc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1dc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1e0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SequenceLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "frames per second"
	float m_flFramerate; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_MoveBetweenPoints : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "minimum speed"
	CPerParticleFloatInput m_flSpeedMin; // 0x1c8	
	// MPropertyFriendlyName "maximum speed"
	CPerParticleFloatInput m_flSpeedMax; // 0x328	
	// MPropertyFriendlyName "end spread"
	CPerParticleFloatInput m_flEndSpread; // 0x488	
	// MPropertyFriendlyName "start offset"
	CPerParticleFloatInput m_flStartOffset; // 0x5e8	
	// MPropertyFriendlyName "end offset"
	CPerParticleFloatInput m_flEndOffset; // 0x748	
	// MPropertyFriendlyName "end control point"
	int32_t m_nEndControlPointNumber; // 0x8a8	
	// MPropertyFriendlyName "bias lifetime by trail length"
	bool m_bTrailBias; // 0x8ac	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1dc	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1e0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1e4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e8	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1ec	
private:
	[[maybe_unused]] uint8_t __pad01ed[0x3]; // 0x1ed
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetUserEvent : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input value"
	CPerParticleFloatInput m_flInput; // 0x1c0	
	// MPropertyFriendlyName "rising edge value"
	CPerParticleFloatInput m_flRisingEdge; // 0x320	
	// MPropertyFriendlyName "rising edge event type"
	EventTypeSelection_t m_nRisingEventType; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0484[0x4]; // 0x484
public:
	// MPropertyFriendlyName "falling edge value"
	CPerParticleFloatInput m_flFallingEdge; // 0x488	
	// MPropertyFriendlyName "falling edge event type"
	EventTypeSelection_t m_nFallingEventType; // 0x5e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_QuantizeFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x320	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainHiddenInTool
class CParticleBindingRealPulse : public CParticleCollectionBindingInstance
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x428
// 
// MGetKV3ClassDefaults
class CParticleMassCalculationParameters
{
public:
	// MPropertyFriendlyName "Radius calculation mode"
	ParticleMassMode_t m_nMassMode; // 0x0	
	// MPropertyFriendlyName "Radius input"
	CPerParticleFloatInput m_flRadius; // 0x8	
	// MPropertyFriendlyName "Nominal radius value"
	CPerParticleFloatInput m_flNominalRadius; // 0x168	
	// MPropertyFriendlyName "Scale to apply to result"
	CPerParticleFloatInput m_flScale; // 0x2c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomNamedModelSequence : public C_INIT_RandomNamedModelElement
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x250
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromParentKilled : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "field to init"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1c8	
	// MPropertyFriendlyName "event type"
	EventTypeSelection_t m_nEventType; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Callback : public CParticleFunctionRenderer
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSpeedtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
	// MPropertyFriendlyName "use delta of velocity instead of constant speed"
	bool m_bUseDeltaV; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_GlobalLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x1c4	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x1c5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1dc	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetPerChildControlPointFromAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nParticleIncrement; // 0x1cc	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x1d0	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1d8	
	// MPropertyFriendlyName "control point field for scalars"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c8	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x1cc	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1d0	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x1d4	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SDFForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	float m_flForceScale; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BoxConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min coords"
	CParticleCollectionVecInput m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max coords"
	CParticleCollectionVecInput m_vecMax; // 0x838	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0xeb0	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xeb4	
	// MPropertyFriendlyName "Take radius into account"
	bool m_bAccountForRadius; // 0xeb5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreatePhyllotaxis : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "scale size multiplier from CP"
	int32_t m_nScaleCP; // 0x1cc	
	// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1d0	
	// MPropertyFriendlyName "center core radius"
	float m_fRadCentCore; // 0x1d4	
	// MPropertyFriendlyName "radius multiplier"
	float m_fRadPerPoint; // 0x1d8	
	// MPropertyFriendlyName "radius max (-1 procedural growth)"
	float m_fRadPerPointTo; // 0x1dc	
	// MPropertyFriendlyName "golden angle (is 137.508)"
	float m_fpointAngle; // 0x1e0	
	// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
	float m_fsizeOverall; // 0x1e4	
	// MPropertyFriendlyName "radius bias"
	float m_fRadBias; // 0x1e8	
	// MPropertyFriendlyName "radius min "
	float m_fMinRad; // 0x1ec	
	// MPropertyFriendlyName "distribution bias"
	float m_fDistBias; // 0x1f0	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x1f4	
	// MPropertyFriendlyName "use continuous emission"
	bool m_bUseWithContEmit; // 0x1f5	
	// MPropertyFriendlyName "scale radius from initial value"
	bool m_bUseOrigRadius; // 0x1f6	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x518
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_AttractToControlPoint : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "component scale"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "amount of force (or Max Force)"
	CPerParticleFloatInput m_fForceAmount; // 0x1e0	
	// MPropertyFriendlyName "falloff power"
	float m_fFalloffPower; // 0x340	
private:
	[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0x348	
	// MPropertyFriendlyName "Min Pullforce"
	CPerParticleFloatInput m_fForceAmountMin; // 0x3b0	
	// MPropertyFriendlyName "Apply Min Pullforce"
	bool m_bApplyMinForce; // 0x510	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomLifeTime : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "lifetime min"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMin; // 0x1c8	
	// MPropertyFriendlyName "lifetime max"
	// MPropertyAttributeRange "0 20"
	float m_fLifetimeMax; // 0x1cc	
	// MPropertyFriendlyName "lifetime random exponent"
	float m_fLifetimeRandExponent; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1f8	
	// MPropertyFriendlyName "output min name"
	CUtlString m_outputMinName; // 0x200	
	// MPropertyFriendlyName "output max name"
	CUtlString m_outputMaxName; // 0x208	
	bool m_bModelFromRenderer; // 0x210	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1d0	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x330	
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad049c[0x1]; // 0x49c
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x49d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomRadius : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius min"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMin; // 0x1c8	
	// MPropertyFriendlyName "radius max"
	// MPropertyAttributeRange "biased 0 500"
	float m_flRadiusMax; // 0x1cc	
	// MPropertyFriendlyName "radius random exponent"
	// MPropertyAttributeRange "-2 2"
	float m_flRadiusRandExponent; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Orient2DRelToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1c0	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x1c4	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9c0
// 
// MGetKV3ClassDefaults
struct TextureControls_t
{
public:
	// MPropertyFriendlyName "horizontal texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0	
	// MPropertyFriendlyName "vertical texture scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x160	
	// MPropertyFriendlyName "horizontal texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2c0	
	// MPropertyFriendlyName "vertical texture offset"
	CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x420	
	// MPropertyFriendlyName "texture rotation / animation rate scale"
	CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x580	
	// MPropertyFriendlyName "Infinite Zoom Scale"
	CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6e0	
	// MPropertyFriendlyName "Distortion Amount"
	CParticleCollectionRendererFloatInput m_flDistortion; // 0x840	
	// MPropertyFriendlyName "Randomize Initial Offset"
	bool m_bRandomizeOffsets; // 0x9a0	
	// MPropertyFriendlyName "Clamp UVs"
	bool m_bClampUVs; // 0x9a1	
private:
	[[maybe_unused]] uint8_t __pad09a2[0x2]; // 0x9a2
public:
	// MPropertyFriendlyName "per-particle scalar for blend"
	SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x9a4	
	// MPropertyFriendlyName "per-particle scalar for scale"
	SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x9a8	
	// MPropertyFriendlyName "per-particle scalar for horizontal offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x9ac	
	// MPropertyFriendlyName "per-particle scalar for vertical offset"
	SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x9b0	
	// MPropertyFriendlyName "per-particle scalar for rotation"
	SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x9b4	
	// MPropertyFriendlyName "per-particle scalar for zoom"
	SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x9b8	
	// MPropertyFriendlyName "per-particle scalar for distortion"
	SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x9bc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct ControlPointReference_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_controlPointNameString; // 0x0	
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffsetFromControlPoint; // 0x4	
	// MPropertyFriendlyName "Use local space offset"
	bool m_bOffsetInLocalSpace; // 0x10	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1cc	
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vInput2; // 0x848	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xec0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1100
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LightningSnapshotGenerator : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nCPSnapshot; // 0x1c8	
	// MPropertyFriendlyName "start control point number"
	int32_t m_nCPStartPnt; // 0x1cc	
	// MPropertyFriendlyName "end control point number"
	int32_t m_nCPEndPnt; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "Recursion Depth"
	CParticleCollectionFloatInput m_flSegments; // 0x1d8	
	// MPropertyFriendlyName "Offset"
	CParticleCollectionFloatInput m_flOffset; // 0x338	
	// MPropertyFriendlyName "Offset Decay"
	CParticleCollectionFloatInput m_flOffsetDecay; // 0x498	
	// MPropertyFriendlyName "Recalculation Rate"
	CParticleCollectionFloatInput m_flRecalcRate; // 0x5f8	
	// MPropertyFriendlyName "UV Scale"
	CParticleCollectionFloatInput m_flUVScale; // 0x758	
	// MPropertyFriendlyName "UV Offset"
	CParticleCollectionFloatInput m_flUVOffset; // 0x8b8	
	// MPropertyFriendlyName "Branch Split Rate"
	CParticleCollectionFloatInput m_flSplitRate; // 0xa18	
	// MPropertyFriendlyName "Branch Twist"
	CParticleCollectionFloatInput m_flBranchTwist; // 0xb78	
	// MPropertyFriendlyName "Branch Behavior"
	ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cdc[0x4]; // 0xcdc
public:
	// MPropertyFriendlyName "Start Radius"
	CParticleCollectionFloatInput m_flRadiusStart; // 0xce0	
	// MPropertyFriendlyName "End Radius"
	CParticleCollectionFloatInput m_flRadiusEnd; // 0xe40	
	// MPropertyFriendlyName "Dedicated Particle Pool Count"
	CParticleCollectionFloatInput m_flDedicatedPool; // 0xfa0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelElementOnceTimed : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1c8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1e0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1f8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x210	
	// MPropertyFriendlyName "remap time proportional"
	bool m_bProportional; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
	// MPropertyFriendlyName "remap time"
	float m_flRemapTime; // 0x21c	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "ModelInput()"
// MClassIsParticleModel
// MParticleCustomFieldDefaultValue
class CParticleModelInput : public CParticleInput
{
public:
	ParticleModelType_t m_nType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	CParticleNamedValueRef m_NamedValue; // 0x18	
	int32_t m_nControlPoint; // 0x58	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapSpeedToScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "control point number (ignored if per particle)"
	int32_t m_nControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1d0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1d4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1dc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e8	
	// MPropertyFriendlyName "per particle"
	bool m_bPerParticle; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapQAnglesToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xed8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionWarp : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMin; // 0x1c8	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecWarpMax; // 0x840	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0xeb8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xebc	
	// MPropertyFriendlyName "radius scale component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nRadiusComponent; // 0xec0	
	// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
	float m_flWarpTime; // 0xec4	
	// MPropertyFriendlyName "warp transition start time"
	float m_flWarpStartTime; // 0xec8	
	// MPropertyFriendlyName "previous position sacale"
	float m_flPrevPosScale; // 0xecc	
	// MPropertyFriendlyName "reverse warp (0/1)"
	bool m_bInvertWarp; // 0xed0	
	// MPropertyFriendlyName "use particle count instead of time"
	bool m_bUseCount; // 0xed1	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x488
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SDFConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min dist to sdf"
	CParticleCollectionFloatInput m_flMinDist; // 0x1c0	
	// MPropertyFriendlyName "max dist to sdf"
	CParticleCollectionFloatInput m_flMaxDist; // 0x320	
	// MPropertyFriendlyName "Max # of iterations"
	int32_t m_nMaxIterations; // 0x480	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "RemapFloatInput()"
class CParticleRemapFloatInput : public CParticleFloatInput
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TwistAroundAxis : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_fForceAmount; // 0x1d0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_TwistAxis; // 0x1d4	
	// MPropertyFriendlyName "object local space axis 0/1"
	bool m_bLocalSpace; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomVectorComponent : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1cc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0	
	// MPropertyFriendlyName "component 0/1/2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MParticleMaxVersion "8"
// MParticleReplacementOp "C_OP_InheritFromParentParticlesV2"
// MGetKV3ClassDefaults
class C_OP_InheritFromParentParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0xf30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetVectorAttributeToVectorExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x848	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xec0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xec4	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xec8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x258
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x234	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x238	
	// MPropertyFriendlyName "output minimum"
	Vector m_vecOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	Vector m_vecOutputMax; // 0x248	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x254	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DirectionBetweenVecsToVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1c8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x840	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementLoopInsideSphere : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance maximum"
	CParticleCollectionFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x328	
	// MPropertyFriendlyName "distance squared output attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDistSqrAttr; // 0x9a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x7]; // 0x211
public:
	// MPropertyStartGroup "Model"
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x218	
	// MPropertyFriendlyName "input model override"
	CParticleModelInput m_modelInput; // 0x220	
	// MPropertyStartGroup "Rendering"
	// MPropertyFriendlyName "size cull scale"
	CParticleCollectionFloatInput m_fSizeCullScale; // 0x280	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x3e0	
	// MPropertyFriendlyName "disable motion blur"
	bool m_bDisableMotionBlur; // 0x3e1	
	// MPropertyFriendlyName "accept decals"
	bool m_bAcceptsDecals; // 0x3e2	
private:
	[[maybe_unused]] uint8_t __pad03e3[0x1]; // 0x3e3
public:
	// MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nAngularVelocityField; // 0x3e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInputValue; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x328	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x32c	
	// MPropertyFriendlyName "interval to snap to"
	CParticleCollectionFloatInput m_flQuantizeValue; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "play when emission ends"
	bool m_bFireOnEmissionEnd; // 0x1c8	
	// MPropertyFriendlyName "wait for children to finish"
	bool m_bIncludeChildren; // 0x1c9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFloatCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x220
// Has VTable
// 
// MParticleMaxVersion "7"
// MParticleReplacementOp "C_INIT_CreateSequentialPathV2"
// MGetKV3ClassDefaults
class C_INIT_CreateSequentialPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c8	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1cc	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1d0	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1d1	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x1d2	
private:
	[[maybe_unused]] uint8_t __pad01d3[0xd]; // 0x1d3
public:
	CPathParameters m_PathParams; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateFromPlaneCache : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "local offset min"
	// MVectorIsCoordinate
	Vector m_vecOffsetMin; // 0x1c8	
	// MPropertyFriendlyName "local offset max"
	// MVectorIsCoordinate
	Vector m_vecOffsetMax; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x1]; // 0x1e0
public:
	// MPropertyFriendlyName "set normal"
	bool m_bUseNormal; // 0x1e1	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ControlPointToRadialScreenSpace : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source Control Point in World"
	int32_t m_nCPIn; // 0x1c8	
	// MPropertyFriendlyName "Source Control Point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1cc	
	// MPropertyFriendlyName "Set control point number"
	int32_t m_nCPOut; // 0x1d8	
	// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPOutField; // 0x1dc	
	// MPropertyFriendlyName "Ss Pos and Dot OUT CP"
	int32_t m_nCPSSPosOut; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SpinUpdate : public CSpinUpdateBase
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_NormalOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	Vector m_OffsetMin; // 0x1c8	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	Vector m_OffsetMax; // 0x1d4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1e0	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1e4	
	// MPropertyFriendlyName "normalize output 0/1"
	bool m_bNormalize; // 0x1e5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDistanceToLineSegmentToVector : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "output value at min distance"
	Vector m_vMinOutputValue; // 0x1dc	
	// MPropertyFriendlyName "output value at max distance"
	Vector m_vMaxOutputValue; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderAsModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	CUtlVector< ModelReference_t > m_ModelList; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0228[0x4]; // 0x228
public:
	// MPropertyFriendlyName "scale factor for radius"
	float m_flModelScale; // 0x22c	
	// MPropertyFriendlyName "scale model to match particle size"
	bool m_bFitToModelSize; // 0x230	
	// MPropertyFriendlyName "non-uniform scaling"
	bool m_bNonUniformScaling; // 0x231	
private:
	[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
public:
	// MPropertyFriendlyName "X axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x234	
	// MPropertyFriendlyName "Y axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x238	
	// MPropertyFriendlyName "Z axis scaling scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x23c	
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x240	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1cc	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1cd	
private:
	[[maybe_unused]] uint8_t __pad01ce[0x2]; // 0x1ce
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1dc	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1e0	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1e4	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x1c0	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x1cc	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
struct ParticleNamedValueConfiguration_t
{
public:
	CUtlString m_ConfigName; // 0x0	
	KeyValues3 m_ConfigValue; // 0x8	
	ParticleAttachment_t m_iAttachType; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlString m_BoundEntityPath; // 0x20	
	CUtlString m_strEntityScope; // 0x28	
	CUtlString m_strAttachmentName; // 0x30	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xdb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CPerParticleFloatInput m_flRestLength; // 0x1c0	
	// MPropertyFriendlyName "minimum segment length %"
	CPerParticleFloatInput m_flMinDistance; // 0x320	
	// MPropertyFriendlyName "maximum segment length %"
	CPerParticleFloatInput m_flMaxDistance; // 0x480	
	// MPropertyFriendlyName "resting spacing"
	CPerParticleFloatInput m_flRestingLength; // 0x5e0	
	// MPropertyFriendlyName "anchor vector"
	CPerParticleVecInput m_vecAnchorVector; // 0x740	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328	
	// MPropertyFriendlyName "emission scale from parent particle events"
	float m_flInitFromKilledParentParticles; // 0x488	
	// MPropertyFriendlyName "emission parent particle event type"
	// MPropertySuppressExpr "m_flInitFromKilledParentParticles == 0"
	EventTypeSelection_t m_nEventType; // 0x48c	
	// MPropertyFriendlyName "emission scale from parent particle count"
	CParticleCollectionFloatInput m_flParentParticleScale; // 0x490	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x5f0	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainLineLength : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum length"
	float m_flMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum length"
	float m_flMaxDistance; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x280
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_LifespanFromVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "bias distance"
	// MVectorIsCoordinate
	Vector m_vecComponentScale; // 0x1c8	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1d4	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1d8	
	// MPropertyFriendlyName "trace recycle tolerance"
	float m_flTraceTolerance; // 0x1dc	
	// MPropertyFriendlyName "maximum points to cache"
	int32_t m_nMaxPlanes; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x1e8	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x268	
private:
	[[maybe_unused]] uint8_t __pad026c[0xc]; // 0x26c
public:
	// MPropertyFriendlyName "collide with water"
	bool m_bIncludeWater; // 0x278	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x27e8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CBaseRendererSource2 : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x370	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionRendererFloatInput m_flRollScale; // 0x4d0	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0634[0x4]; // 0x634
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionRendererVecInput m_vecColorScale; // 0x638	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xcb0	
	// MPropertyStartGroup "+Material"
	// MPropertyFriendlyName "Shader"
	// MPropertySortPriority "600"
	SpriteCardShaderType_t m_nShaderType; // 0xcb4	
	// MPropertyFriendlyName "Custom Shader"
	// MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
	// MPropertySortPriority "600"
	CUtlString m_strShaderOverride; // 0xcb8	
	// MPropertyFriendlyName "X offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xcc0	
	// MPropertyFriendlyName "Y offset of center point"
	// MPropertySortPriority "600"
	CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xe20	
	// MPropertyFriendlyName "Bump Strength"
	// MPropertySortPriority "600"
	float m_flBumpStrength; // 0xf80	
	// MPropertyFriendlyName "Sheet Crop Behavior"
	// MPropertySortPriority "600"
	ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xf84	
	// MPropertyFriendlyName "Textures"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< TextureGroup_t > m_vecTexturesInput; // 0xf88	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation rate"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "500"
	float m_flAnimationRate; // 0xfa0	
	// MPropertyFriendlyName "animation type"
	// MPropertySortPriority "500"
	AnimationType_t m_nAnimationType; // 0xfa4	
	// MPropertyFriendlyName "set animation value in FPS"
	// MPropertySortPriority "500"
	bool m_bAnimateInFPS; // 0xfa8	
private:
	[[maybe_unused]] uint8_t __pad0fa9[0x7]; // 0xfa9
public:
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "self illum amount"
	// MPropertyAttributeRange "0 2"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xfb0	
	// MPropertyFriendlyName "diffuse lighting amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x1110	
	// MPropertyFriendlyName "diffuse max contribution clamp"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1270	
	// MPropertyFriendlyName "diffuse lighting origin Control Point"
	// MPropertySortPriority "400"
	int32_t m_nLightingControlPoint; // 0x13d0	
	// MPropertyFriendlyName "self illum per-particle"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "m_nOrientationType == PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL || m_nOrientationType == PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x13d4	
	// MPropertyStartGroup "+Color and alpha adjustments"
	// MPropertyFriendlyName "output blend mode"
	// MPropertySortPriority "300"
	ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x13d8	
	// MPropertyFriendlyName "Gamma-correct vertex colors"
	// MPropertySortPriority "300"
	bool m_bGammaCorrectVertexColors; // 0x13dc	
	// MPropertyFriendlyName "Saturate color pre alphablend"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod!=dota"
	bool m_bSaturateColorPreAlphaBlend; // 0x13dd	
private:
	[[maybe_unused]] uint8_t __pad13de[0x2]; // 0x13de
public:
	// MPropertyFriendlyName "add self amount over alphablend"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x13e0	
	// MPropertyFriendlyName "desaturation amount"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flDesaturation; // 0x1540	
	// MPropertyFriendlyName "overbright factor"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x16a0	
	// MPropertyFriendlyName "HSV Shift Control Point"
	// MPropertySortPriority "300"
	int32_t m_nHSVShiftControlPoint; // 0x1800	
	// MPropertyFriendlyName "Apply fog to particle"
	// MPropertySortPriority "300"
	ParticleFogType_t m_nFogType; // 0x1804	
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1808	
	// MPropertyFriendlyName "Apply fog of war to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByFOW; // 0x1968	
	// MPropertyFriendlyName "Apply global light to color"
	// MPropertySortPriority "300"
	// MPropertySuppressExpr "mod != dota"
	bool m_bTintByGlobalLight; // 0x1969	
private:
	[[maybe_unused]] uint8_t __pad196a[0x2]; // 0x196a
public:
	// MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
	// MPropertyFriendlyName "alpha reference"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x196c	
	// MPropertyFriendlyName "alpha reference window size"
	// MPropertySortPriority "300"
	SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x1970	
	// MPropertyFriendlyName "alpha reference type"
	// MPropertySortPriority "300"
	ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x1974	
	// MPropertyFriendlyName "alpha reference softness"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x1978	
	// MPropertyFriendlyName "source alpha value to map to alpha of zero"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1ad8	
	// MPropertyFriendlyName "source alpha value to map to alpha of 1"
	// MPropertyAttributeRange "0 1"
	// MPropertySortPriority "300"
	CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1c38	
	// MPropertyStartGroup "Refraction"
	// MPropertyFriendlyName "refract background"
	// MPropertySortPriority "200"
	bool m_bRefract; // 0x1d98	
	// MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	bool m_bRefractSolid; // 0x1d99	
private:
	[[maybe_unused]] uint8_t __pad1d9a[0x6]; // 0x1d9a
public:
	// MPropertyFriendlyName "refract amount"
	// MPropertyAttributeRange "-2 2"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1da0	
	// MPropertyFriendlyName "refract blur radius"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	int32_t m_nRefractBlurRadius; // 0x1f00	
	// MPropertyFriendlyName "refract blur type"
	// MPropertySortPriority "200"
	// MPropertySuppressExpr "!m_bRefract"
	BlurFilterType_t m_nRefractBlurType; // 0x1f04	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x1f08	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x1f09	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x1f0a	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x1f0b	
	// MPropertyStartGroup "Stencil"
	// MPropertyFriendlyName "stencil test ID"
	// MPropertySortPriority "0"
	char m_stencilTestID[128]; // 0x1f0c	
	// MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
	// MPropertySortPriority "0"
	bool m_bStencilTestExclude; // 0x1f8c	
	// MPropertyFriendlyName "stencil write ID"
	// MPropertySortPriority "0"
	char m_stencilWriteID[128]; // 0x1f8d	
	// MPropertyFriendlyName "write stencil on z-buffer test success"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthPass; // 0x200d	
	// MPropertyFriendlyName "write stencil on z-buffer test failure"
	// MPropertySortPriority "0"
	bool m_bWriteStencilOnDepthFail; // 0x200e	
	// MPropertyStartGroup "Depth buffer control and effects"
	// MPropertyFriendlyName "reverse z-buffer test"
	// MPropertySortPriority "900"
	bool m_bReverseZBuffering; // 0x200f	
	// MPropertyFriendlyName "disable z-buffer test"
	// MPropertySortPriority "900"
	bool m_bDisableZBuffering; // 0x2010	
private:
	[[maybe_unused]] uint8_t __pad2011[0x3]; // 0x2011
public:
	// MPropertyFriendlyName "Depth feathering mode"
	// MPropertySortPriority "900"
	ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x2014	
	// MPropertyFriendlyName "particle feathering closest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x2018	
	// MPropertyFriendlyName "particle feathering farthest distance to surface"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x2178	
	// MPropertyFriendlyName "particle feathering filter"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x22d8	
	// MPropertyFriendlyName "depth comparison bias"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2438	
	// MPropertyFriendlyName "Sort Method"
	// MPropertySortPriority "900"
	ParticleSortingChoiceList_t m_nSortMethod; // 0x2598	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "blend sequence animation frames"
	// MPropertySortPriority "500"
	bool m_bBlendFramesSeq0; // 0x259c	
	// MPropertyFriendlyName "use max-luminance blending for sequence"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bBlendFramesSeq0"
	bool m_bMaxLuminanceBlendingSequence0; // 0x259d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity"
	CParticleCollectionVecInput m_velocityInput; // 0x1c8	
	// MPropertyFriendlyName "local space"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x840	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x8a8	
	// MPropertyFriendlyName "direction only"
	bool m_bDirectionOnly; // 0x8ac	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointOrientation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set orientation in world space"
	bool m_bUseWorldLocation; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x1]; // 0x1c9
public:
	// MPropertyFriendlyName "randomize"
	bool m_bRandomize; // 0x1ca	
	// MPropertyFriendlyName "only set orientation once"
	bool m_bSetOnce; // 0x1cb	
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP; // 0x1cc	
	// MPropertyFriendlyName "control point to offset orientation from"
	int32_t m_nHeadLocation; // 0x1d0	
	// MPropertyFriendlyName "pitch yaw roll"
	QAngle m_vecRotation; // 0x1d4	
	// MPropertyFriendlyName "pitch yaw roll max"
	QAngle m_vecRotationB; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
public:
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementSkinnedPositionFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1cc	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d0	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "Snapshot Read Type"
	SnapshotIndexType_t m_nIndexType; // 0x1d4	
	// MPropertyFriendlyName "Snapshot Index"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
	CPerParticleFloatInput m_flReadIndex; // 0x1d8	
	// MPropertyFriendlyName "particle increment amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_flIncrement; // 0x338	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x498	
	// MPropertyFriendlyName "Snapshot start point"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5f8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x758	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "oscillation rate max"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_RateMax; // 0x1cc	
	// MPropertyFriendlyName "oscillation frequency min"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMin; // 0x1d8	
	// MPropertyFriendlyName "oscillation frequency max"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_FrequencyMax; // 0x1e4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1f4	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1f5	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1f6	
private:
	[[maybe_unused]] uint8_t __pad01f7[0x1]; // 0x1f7
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1f8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1fc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x200	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x204	
	// MPropertyFriendlyName "oscillation multiplier"
	CPerParticleFloatInput m_flOscMult; // 0x208	
	// MPropertyFriendlyName "oscillation start phase"
	CPerParticleFloatInput m_flOscAdd; // 0x368	
	// MPropertyFriendlyName "rate scale"
	CPerParticleFloatInput m_flRateScale; // 0x4c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa38
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PositionLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "start fadeout min"
	float m_flStartTime_min; // 0x228	
	// MPropertyFriendlyName "start fadeout max"
	float m_flStartTime_max; // 0x22c	
	// MPropertyFriendlyName "start fadeout exponent"
	float m_flStartTime_exp; // 0x230	
	// MPropertyFriendlyName "end fadeout min"
	float m_flEndTime_min; // 0x234	
	// MPropertyFriendlyName "end fadeout max"
	float m_flEndTime_max; // 0x238	
	// MPropertyFriendlyName "end fadeout exponent"
	float m_flEndTime_exp; // 0x23c	
	// MPropertyFriendlyName "distance fade range"
	float m_flRange; // 0x240	
private:
	[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
public:
	// MPropertyFriendlyName "distance fade bias"
	CParticleCollectionFloatInput m_flRangeBias; // 0x248	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x3a8	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x3ac	
	// MPropertyFriendlyName "lock rotation"
	bool m_bLockRot; // 0x3b0	
private:
	[[maybe_unused]] uint8_t __pad03b1[0x7]; // 0x3b1
public:
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x3b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xa30	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa34	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x380
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderVRHapticEvent : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "haptic hand"
	ParticleVRHandChoiceList_t m_nHand; // 0x210	
	// MPropertyFriendlyName "hand control point number"
	int32_t m_nOutputHandCP; // 0x214	
	// MPropertyFriendlyName "cp field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	// MPropertyFriendlyName "amplitude"
	CPerParticleFloatInput m_flAmplitude; // 0x220	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x1c8	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x1cc	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x1d8	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x338	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x33c	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x340	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x34c	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3cc	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x3d0	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x3d1	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3d2	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InterpolateRadius : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c0	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c4	
	// MPropertyFriendlyName "radius start scale"
	float m_flStartScale; // 0x1c8	
	// MPropertyFriendlyName "radius end scale"
	float m_flEndScale; // 0x1cc	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "scale bias"
	float m_flBias; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x19d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x1c8	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x1d4	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x1e0	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x858	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x9b8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0x1030	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x16a8	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1808	
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleInputOptional
	CParticleTransformInput m_TransformInput; // 0x1968	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x19d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ReinitializeScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "maximum"
	float m_flOutputMax; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x1d0	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x1d4	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x1d8	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x1dc	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x1e0	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x1ec	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x1f8	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x204	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelMeshGroupOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToPlayer : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1cc	
	// MPropertyFriendlyName "use eye orientation"
	bool m_bOrientToEyes; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x320
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_EndCapTimedFreeze : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "freeze time"
	CParticleCollectionFloatInput m_flFreezeTime; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x650
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer
{
public:
	// MPropertySortPriority "-1"
	// MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
	bool m_bUsePerParticleRadius; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "(optional) vertex buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nVertexCountKb; // 0x214	
	// MPropertyFriendlyName "(optional) index buffer size (k)"
	// MPropertyAttributeRange "0 2048"
	uint32_t m_nIndexCountKb; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
public:
	CParticleCollectionRendererFloatInput m_fGridSize; // 0x220	
	CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x380	
	// MPropertyAttributeRange ".1 .95"
	CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4e0	
	// MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
	int32_t m_nScaleCP; // 0x640	
private:
	[[maybe_unused]] uint8_t __pad0644[0x4]; // 0x644
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x648	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetRandomControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1c8	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1cc	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
	CParticleCollectionFloatInput m_flReRandomRate; // 0x1d8	
	// MPropertyFriendlyName "control point min"
	Vector m_vecCPMinPos; // 0x338	
	// MPropertyFriendlyName "control point max"
	Vector m_vecCPMaxPos; // 0x344	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x350	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformVisibilityToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "CP visibility minimum"
	float m_flInputMin; // 0x234	
	// MPropertyFriendlyName "CP visibility maximum"
	float m_flInputMax; // 0x238	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x23c	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x240	
	// MPropertyFriendlyName "visibility radius"
	float m_flRadius; // 0x244	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapControlPointDirectionToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c4	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Decay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Reduce rope popping on decay"
	bool m_bRopeDecay; // 0x1c0	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1c1	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DragRelativeToPlane : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "dampening"
	CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0	
	// MPropertyFriendlyName "falloff"
	CParticleCollectionFloatInput m_flFalloff; // 0x320	
	// MPropertyFriendlyName "dampen on only one side of plane"
	bool m_bDirectional; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0481[0x7]; // 0x481
public:
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecPlaneNormal; // 0x488	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xb00	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x60
// 
// MGetKV3ClassDefaults
struct ParticleNamedValueSource_t
{
public:
	CUtlString m_Name; // 0x0	
	bool m_IsPublic; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0009[0x3]; // 0x9
public:
	// MPropertySuppressField
	PulseValueType_t m_ValueType; // 0xc	
	// MPropertySuppressField
	// -> m_ConfigName - 0x10
	// -> m_ConfigValue - 0x18
	// -> m_iAttachType - 0x28
	// -> m_BoundEntityPath - 0x30
	// -> m_strEntityScope - 0x38
	// -> m_strAttachmentName - 0x40
	ParticleNamedValueConfiguration_t m_DefaultConfig; // 0x10	
	// MPropertySuppressField
	CUtlVector< ParticleNamedValueConfiguration_t > m_NamedConfigs; // 0x48	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CGeneralRandomRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "rotation initial"
	float m_flDegrees; // 0x1cc	
	// MPropertyFriendlyName "rotation offset from initial min"
	float m_flDegreesMin; // 0x1d0	
	// MPropertyFriendlyName "rotation offset from initial max"
	float m_flDegreesMax; // 0x1d4	
	// MPropertyFriendlyName "rotation offset exponent"
	float m_flRotationRandExponent; // 0x1d8	
	// MPropertyFriendlyName "randomly flip direction"
	bool m_bRandomlyFlipDirection; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SnapshotRigidSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1c0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetSingleControlPointPosition : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1cc	
	// MPropertyFriendlyName "control point location"
	CParticleCollectionVecInput m_vecCP1Pos; // 0x1d0	
	// MPropertyFriendlyName "transform to offset positions from"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x848	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "include particle radius"
	bool m_bIncludeRadii; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPtoScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1dc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1e0	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x1e4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x210	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x214	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x218	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x21c	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x220	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x898	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x89c	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x8a0	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x8a4	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x8a8	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x8ac	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x8b0	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x8b4	
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8b8	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x8c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class IParticleSystemDefinition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelElementEndCap : public CParticleFunctionOperator
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c0	
	// MPropertyFriendlyName "input names"
	CUtlVector< CUtlString > m_inNames; // 0x1c8	
	// MPropertyFriendlyName "output names"
	CUtlVector< CUtlString > m_outNames; // 0x1e0	
	// MPropertyFriendlyName "fallback names when the input doesn't match"
	CUtlVector< CUtlString > m_fallbackNames; // 0x1f8	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x214	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x218	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransformsVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1e8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x250	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2bc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2bd	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderScreenVelocityRotate : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "rotate rate(dps)"
	float m_flRotateRateDegrees; // 0x210	
	// MPropertyFriendlyName "forward angle"
	float m_flForwardDegrees; // 0x214	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_UpdateLightSource : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color tint"
	Color m_vColorTint; // 0x1c0	
	// MPropertyFriendlyName "amount to multiply light brightness by"
	float m_flBrightnessScale; // 0x1c4	
	// MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
	float m_flRadiusScale; // 0x1c8	
	// MPropertyFriendlyName "minimum radius for created lights"
	float m_flMinimumLightingRadius; // 0x1cc	
	// MPropertyFriendlyName "maximum radius for created lights"
	float m_flMaximumLightingRadius; // 0x1d0	
	// MPropertyFriendlyName "amount of damping of changes"
	float m_flPositionDampingConstant; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x840	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xeb8	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xec0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ChooseRandomChildrenInGroup : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "Number of Children to Use"
	CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x6d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ControlpointLight : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "initial color bias"
	float m_flScale; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x48c]; // 0x1c4
public:
	// MPropertyFriendlyName "light 1 control point"
	int32_t m_nControlPoint1; // 0x650	
	// MPropertyFriendlyName "light 2 control point"
	int32_t m_nControlPoint2; // 0x654	
	// MPropertyFriendlyName "light 3 control point"
	int32_t m_nControlPoint3; // 0x658	
	// MPropertyFriendlyName "light 4 control point"
	int32_t m_nControlPoint4; // 0x65c	
	// MPropertyFriendlyName "light 1 control point offset"
	Vector m_vecCPOffset1; // 0x660	
	// MPropertyFriendlyName "light 2 control point offset"
	Vector m_vecCPOffset2; // 0x66c	
	// MPropertyFriendlyName "light 3 control point offset"
	Vector m_vecCPOffset3; // 0x678	
	// MPropertyFriendlyName "light 4 control point offset"
	Vector m_vecCPOffset4; // 0x684	
	// MPropertyFriendlyName "light 1 50% distance"
	float m_LightFiftyDist1; // 0x690	
	// MPropertyFriendlyName "light 1 0% distance"
	float m_LightZeroDist1; // 0x694	
	// MPropertyFriendlyName "light 2 50% distance"
	float m_LightFiftyDist2; // 0x698	
	// MPropertyFriendlyName "light 2 0% distance"
	float m_LightZeroDist2; // 0x69c	
	// MPropertyFriendlyName "light 3 50% distance"
	float m_LightFiftyDist3; // 0x6a0	
	// MPropertyFriendlyName "light 3 0% distance"
	float m_LightZeroDist3; // 0x6a4	
	// MPropertyFriendlyName "light 4 50% distance"
	float m_LightFiftyDist4; // 0x6a8	
	// MPropertyFriendlyName "light 4 0% distance"
	float m_LightZeroDist4; // 0x6ac	
	// MPropertyFriendlyName "light 1 color"
	Color m_LightColor1; // 0x6b0	
	// MPropertyFriendlyName "light 2 color"
	Color m_LightColor2; // 0x6b4	
	// MPropertyFriendlyName "light 3 color"
	Color m_LightColor3; // 0x6b8	
	// MPropertyFriendlyName "light 4 color"
	Color m_LightColor4; // 0x6bc	
	// MPropertyFriendlyName "light 1 type 0=point 1=spot"
	bool m_bLightType1; // 0x6c0	
	// MPropertyFriendlyName "light 2 type 0=point 1=spot"
	bool m_bLightType2; // 0x6c1	
	// MPropertyFriendlyName "light 3 type 0=point 1=spot"
	bool m_bLightType3; // 0x6c2	
	// MPropertyFriendlyName "light 4 type 0=point 1=spot"
	bool m_bLightType4; // 0x6c3	
	// MPropertyFriendlyName "light 1 dynamic light"
	bool m_bLightDynamic1; // 0x6c4	
	// MPropertyFriendlyName "light 2 dynamic light"
	bool m_bLightDynamic2; // 0x6c5	
	// MPropertyFriendlyName "light 3 dynamic light"
	bool m_bLightDynamic3; // 0x6c6	
	// MPropertyFriendlyName "light 4 dynamic light"
	bool m_bLightDynamic4; // 0x6c7	
	// MPropertyFriendlyName "compute normals from control points"
	bool m_bUseNormal; // 0x6c8	
	// MPropertyFriendlyName "half-lambert normals"
	bool m_bUseHLambert; // 0x6c9	
private:
	[[maybe_unused]] uint8_t __pad06ca[0x4]; // 0x6ca
public:
	// MPropertyFriendlyName "clamp minimum light value to initial color"
	bool m_bClampLowerRange; // 0x6ce	
	// MPropertyFriendlyName "clamp maximum light value to initial color"
	bool m_bClampUpperRange; // 0x6cf	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "extra velocity field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c4	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1d0	
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x330	
	// MPropertyFriendlyName "Boundary Dampening"
	float m_flBoundaryDampening; // 0x9a8	
	// MPropertyFriendlyName "Set Velocity"
	bool m_bSetVelocity; // 0x9ac	
	// MPropertyFriendlyName "Lock to Surface"
	bool m_bLockToSurface; // 0x9ad	
private:
	[[maybe_unused]] uint8_t __pad09ae[0x2]; // 0x9ae
public:
	// MPropertyFriendlyName "Vector Field Grid Spacing Override"
	float m_flGridSpacing; // 0x9b0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "cylinder inner radius"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "cylinder outer radius"
	CPerParticleFloatInput m_flInputMax; // 0x328	
	// MPropertyFriendlyName "cylinder inner output"
	CPerParticleFloatInput m_flOutputMin; // 0x488	
	// MPropertyFriendlyName "cylinder outer output"
	CPerParticleFloatInput m_flOutputMax; // 0x5e8	
	// MPropertyFriendlyName "cylindrical top transform"
	CParticleTransformInput m_TransformStart; // 0x748	
	// MPropertyFriendlyName "cylindrical bottom transform"
	CParticleTransformInput m_TransformEnd; // 0x7b0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x818	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x81c	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x81d	
	// MPropertyFriendlyName "apply radius to ends (capsule)"
	bool m_bCapsule; // 0x81e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x530
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c8	
	// MPropertyFriendlyName "max trace length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x328	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x488	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0xc]; // 0x50c
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x518	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x51c	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x51d	
	// MPropertyFriendlyName "set Previous XYZ only"
	bool m_bSetPXYZOnly; // 0x51e	
	// MPropertyFriendlyName "Trace along particle normal"
	bool m_bTraceAlongNormal; // 0x51f	
	// MPropertyFriendlyName "Offset only if trace hit"
	bool m_bOffsetonColOnly; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x3]; // 0x521
public:
	// MPropertyFriendlyName "offset final position by this fraction of the particle radius"
	float m_flOffsetByRadiusFactor; // 0x524	
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x528	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x52c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1cc	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1d0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x380
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderPostProcessing : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Post Processing Strength"
	CPerParticleFloatInput m_flPostProcessStrength; // 0x210	
	// MPropertyFriendlyName "Post Processing File"
	// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostTexture; // 0x370	
	// MPropertyFriendlyName "Post Processing Priority Group"
	ParticlePostProcessPriorityGroup_t m_nPriority; // 0x378	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x1c4	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x1d0	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x1d4	
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x1d8	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1dc	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x25c	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x25d	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x25e	
private:
	[[maybe_unused]] uint8_t __pad025f[0x1]; // 0x25f
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x260	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x264	
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x268	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x26c	
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x270	
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x274	
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x278	
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x3d8	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x538	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x698	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x7f8	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x7f9	
private:
	[[maybe_unused]] uint8_t __pad07fa[0x2]; // 0x7fa
public:
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x7fc	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x804	
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x808	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x968	
	// MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x96c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapExternalWindToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample wind"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1cc	
	// MPropertyFriendlyName "wind scale"
	CParticleCollectionVecInput m_vecScale; // 0x1d0	
	// MPropertyFriendlyName "set magnitude instead of vector"
	bool m_bSetMagnitude; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
public:
	// MPropertyFriendlyName "magnitude output component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "!m_bSetMagnitude"
	int32_t m_nOutVectorField; // 0x84c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionRendererFloatInput m_cubeWidth; // 0x210	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x370	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionRendererFloatInput m_renderRadius; // 0x4d0	
	// MPropertyFriendlyName "(optional) vertex buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nVertexCountKb; // 0x630	
	// MPropertyFriendlyName "(optional) index buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nIndexCountKb; // 0x634	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x640	
private:
	[[maybe_unused]] uint8_t __pad0658[0x18]; // 0x658
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x670	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "oscillation rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "oscillation frequency min"
	float m_FrequencyMin; // 0x1c8	
	// MPropertyFriendlyName "oscillation frequency max"
	float m_FrequencyMax; // 0x1cc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1d4	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x1d5	
private:
	[[maybe_unused]] uint8_t __pad01d6[0x2]; // 0x1d6
public:
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1d8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1dc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1e0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1e4	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1e8	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeOut : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade out time min"
	float m_flFadeOutTimeMin; // 0x1c0	
	// MPropertyFriendlyName "fade out time max"
	float m_flFadeOutTimeMax; // 0x1c4	
	// MPropertyFriendlyName "fade out time exponent"
	float m_flFadeOutTimeExp; // 0x1c8	
	// MPropertyFriendlyName "fade bias"
	float m_flFadeBias; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x30]; // 0x1d0
public:
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x200	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInAndOut; // 0x201	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMin; // 0x1c8	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequenceMax; // 0x1cc	
	// MPropertyFriendlyName "shuffle"
	bool m_bShuffle; // 0x1d0	
	// MPropertyFriendlyName "linear"
	bool m_bLinear; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x6]; // 0x1d2
public:
	// MPropertyFriendlyName "weighted list"
	CUtlVector< SequenceWeightedList_t > m_WeightedList; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x1f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "cull distance"
	CParticleCollectionFloatInput m_flDistance; // 0x1d0	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x480
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "parent particle radius scale"
	CPerParticleFloatInput m_flParentRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x320	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1cc	
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x1d0	
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0xf30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVectorAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x840	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0xeb8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0xebc	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0xec0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_AddVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "component scale factor"
	Vector m_vecScale; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d4	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1d8	
	// MPropertyFriendlyName "random offset min"
	Vector m_vOffsetMin; // 0x1dc	
	// MPropertyFriendlyName "random offset max"
	Vector m_vOffsetMax; // 0x1e8	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapInitialVisibilityScalar : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x228	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x22c	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x230	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderStatusEffect : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x210	
	// MPropertyFriendlyName "detail 2 texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail2; // 0x218	
	// MPropertyFriendlyName "diffuse warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDiffuseWarp; // 0x220	
	// MPropertyFriendlyName "fresnel color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelColorWarp; // 0x228	
	// MPropertyFriendlyName "fresnel warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureFresnelWarp; // 0x230	
	// MPropertyFriendlyName "specular warp texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSpecularWarp; // 0x238	
	// MPropertyFriendlyName "environment map texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureEnvMap; // 0x240	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RandomForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min force"
	// MVectorIsCoordinate
	Vector m_MinForce; // 0x1d0	
	// MPropertyFriendlyName "max force"
	// MVectorIsCoordinate
	Vector m_MaxForce; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	int32_t m_nInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	int32_t m_nInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "count back from last particle"
	bool m_bBackwards; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
struct ParticlePreviewState_t
{
public:
	CUtlString m_previewModel; // 0x0	
	uint32_t m_nModSpecificData; // 0x8	
	PetGroundType_t m_groundType; // 0xc	
	CUtlString m_sequenceName; // 0x10	
	int32_t m_nFireParticleOnSequenceFrame; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	CUtlString m_hitboxSetName; // 0x20	
	CUtlString m_materialGroupName; // 0x28	
	CUtlVector< ParticlePreviewBodyGroup_t > m_vecBodyGroups; // 0x30	
	float m_flPlaybackSpeed; // 0x48	
	float m_flParticleSimulationRate; // 0x4c	
	bool m_bShouldDrawHitboxes; // 0x50	
	bool m_bShouldDrawAttachments; // 0x51	
	bool m_bShouldDrawAttachmentNames; // 0x52	
	bool m_bShouldDrawControlPointAxes; // 0x53	
	bool m_bAnimationNonLooping; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	Vector m_vecPreviewGravity; // 0x58	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LocalAccelerationForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x1d0	
	// MPropertyFriendlyName "scale control point"
	int32_t m_nScaleCP; // 0x1d4	
	// MPropertyFriendlyName "local space acceleration"
	CParticleCollectionVecInput m_vecAccel; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ModelCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1c4	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1c5	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c6	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c7	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFloat : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x320	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x324	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMax; // 0x1f0	
private:
	[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x200	
	// MPropertyFriendlyName "local space transform"
	// MParticleInputOptional
	CParticleTransformInput m_LocalSpaceTransform; // 0x268	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x2d0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x2d4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2d8	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x2dc	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x2dd	
private:
	[[maybe_unused]] uint8_t __pad02de[0x2]; // 0x2de
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x2e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SDFLighting : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Lighting dir"
	Vector m_vLightingDir; // 0x1c0	
	// MPropertyFriendlyName "shadow color"
	Vector m_vTint_0; // 0x1cc	
	// MPropertyFriendlyName "lit color"
	Vector m_vTint_1; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDistanceToLineSegmentToScalar : public C_OP_RemapDistanceToLineSegmentBase
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "output value at min distance"
	float m_flMinOutputValue; // 0x1dc	
	// MPropertyFriendlyName "output value at max distance"
	float m_flMaxOutputValue; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldToScalarExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionFloatInput m_flInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionFloatInput m_flInput2; // 0x330	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x490	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x5f0	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x5f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapVectortoCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "particle number to read"
	int32_t m_nParticleNumber; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFromCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1cc	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d0	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1d4	
	// MPropertyFriendlyName "Snapshot start point"
	CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x1d8	
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x338	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x498	
	// MPropertyFriendlyName "Sub-Sample Between Input Points"
	bool m_bSubSample; // 0x5f8	
	// MPropertyFriendlyName "Position also sets Previous Position"
	bool m_bPrev; // 0x5f9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x280
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceBetweenCPsToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1c8	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1cc	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1d0	
	// MPropertyFriendlyName "output control point field"
	int32_t m_nOutputCPField; // 0x1d4	
	// MPropertyFriendlyName "only set distance once"
	bool m_bSetOnce; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MPropertyFriendlyName "distance minimum"
	float m_flInputMin; // 0x1dc	
	// MPropertyFriendlyName "distance maximum"
	float m_flInputMax; // 0x1e0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e8	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x1ec	
	// MPropertyFriendlyName "LOS Failure Scale"
	float m_flLOSScale; // 0x1f0	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x1f4	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x1f5	
private:
	[[maybe_unused]] uint8_t __pad0275[0x3]; // 0x275
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x278	
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x27c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToHand : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "hand"
	int32_t m_nHand; // 0x1cc	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1d0	
	// MPropertyFriendlyName "use hand orientation"
	bool m_bOrientToHand; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x1c4	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x1c8	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x1cc	
	CPathParameters m_PathParameters; // 0x1d0	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x210	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x214	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x218	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c0	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1c4	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x1d0	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFDistanceToScalarAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x328	
	// MPropertyFriendlyName "Value for dist<min"
	CParticleCollectionFloatInput m_flValueBelowMin; // 0x488	
	// MPropertyFriendlyName "Value for dist=min"
	CParticleCollectionFloatInput m_flValueAtMin; // 0x5e8	
	// MPropertyFriendlyName "Value for dist=max"
	CParticleCollectionFloatInput m_flValueAtMax; // 0x748	
	// MPropertyFriendlyName "Value for dist>max"
	CParticleCollectionFloatInput m_flValueAboveMax; // 0x8a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	CPathParameters m_PathParams; // 0x1d0	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x214	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x220	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointsToModelParticles : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1c0	
	// MPropertyFriendlyName "attachment to follow"
	char m_AttachmentName[128]; // 0x240	
	// MPropertyFriendlyName "First control point to set"
	int32_t m_nFirstControlPoint; // 0x2c0	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x2c4	
	// MPropertyFriendlyName "first particle to copy"
	int32_t m_nFirstSourcePoint; // 0x2c8	
	// MPropertyFriendlyName "use skinning instead of hitboxes"
	bool m_bSkin; // 0x2cc	
	// MPropertyFriendlyName "follow attachment"
	bool m_bAttachment; // 0x2cd	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ColorInterpolateRandom : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade min"
	Color m_ColorFadeMin; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x18]; // 0x1c4
public:
	// MPropertyFriendlyName "color fade max"
	Color m_ColorFadeMax; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0xc]; // 0x1e0
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1ec	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1f0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1f4	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class C_INIT_RemapNamedModelElementToScalar : public CParticleFunctionInitializer
{
public:
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x1c8	
	// MPropertyFriendlyName "names"
	CUtlVector< CUtlString > m_names; // 0x1d0	
	// MPropertyFriendlyName "remap values for names"
	CUtlVector< float32 > m_values; // 0x1e8	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x200	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x204	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
	// MPropertyFriendlyName "model from renderer"
	bool m_bModelFromRenderer; // 0x20c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderPoints : public CParticleFunctionRenderer
{
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x210	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x320
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DecayClampCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Maximum Count"
	CParticleCollectionFloatInput m_nCount; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMax; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_ColorLitPerParticle : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c8[0x18]; // 0x1c8
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x1e0	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x1e4	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1e8	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1ec	
	// MPropertyFriendlyName "light bias"
	float m_flTintPerc; // 0x1f0	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x1f4	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x1f8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x218	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x21c	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x224	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x228	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x22c	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x230	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetAttributeToScalarExpression : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x330	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x490	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x5f0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5f4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa10
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnGrid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "X Dimension Count"
	CParticleCollectionFloatInput m_nXCount; // 0x1c8	
	// MPropertyFriendlyName "Y Dimension Count"
	CParticleCollectionFloatInput m_nYCount; // 0x328	
	// MPropertyFriendlyName "Z Dimension Count"
	CParticleCollectionFloatInput m_nZCount; // 0x488	
	// MPropertyFriendlyName "X Dimension Spacing"
	CParticleCollectionFloatInput m_nXSpacing; // 0x5e8	
	// MPropertyFriendlyName "Y Dimension Spacing"
	CParticleCollectionFloatInput m_nYSpacing; // 0x748	
	// MPropertyFriendlyName "Z Dimension Spacing"
	CParticleCollectionFloatInput m_nZSpacing; // 0x8a8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xa08	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xa0c	
	// MPropertyFriendlyName "center around control point"
	bool m_bCenter; // 0xa0d	
	// MPropertyFriendlyName "hollow"
	bool m_bHollow; // 0xa0e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x1cc	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_VelocityMatchingForce : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "direction matching strength"
	float m_flDirScale; // 0x1c0	
	// MPropertyFriendlyName "speed matching strength"
	float m_flSpdScale; // 0x1c4	
	// MPropertyFriendlyName "neighbor distance"
	float m_flNeighborDistance; // 0x1c8	
	// MPropertyFriendlyName "facing strength falloff"
	float m_flFacingStrength; // 0x1cc	
	// MPropertyFriendlyName "use AABB"
	// MPropertySuppressExpr "m_flNeighborDistance > 0"
	bool m_bUseAABB; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "control point to broadcast speed and direction to"
	int32_t m_nCPBroadcast; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomAlphaWindowThreshold : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	float m_flMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	float m_flMax; // 0x1cc	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1370
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnModelAtHeight : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1c8	
	// MPropertyFriendlyName "force creation height to desired height"
	bool m_bForceZ; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "height override control point number"
	int32_t m_nHeightCP; // 0x1d0	
	// MPropertyFriendlyName "desired height is relative to water"
	bool m_bUseWaterHeight; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "relative desired height"
	CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d8	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x338	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0x9b0	
	// MPropertyFriendlyName "bias type"
	ParticleHitboxBiasType_t m_nBiasType; // 0x1028	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0x102c	
	// MPropertyFriendlyName "bias prefers moving hitboxes"
	bool m_bPreferMovingBoxes; // 0x102d	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x102e	
private:
	[[maybe_unused]] uint8_t __pad10ae[0x2]; // 0x10ae
public:
	// MPropertyFriendlyName "hitbox velocity inherited scale"
	CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x10b0	
	// MPropertyFriendlyName "max hitbox velocity"
	CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x1210	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
// MPropertyCustomEditor "ParticleVariableRef()"
class CParticleVariableRef
{
public:
	CKV3MemberNameWithStorage m_variableName; // 0x0	
	PulseValueType_t m_variableType; // 0x38	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RestartAfterDuration : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum restart time"
	float m_flDurationMin; // 0x1c0	
	// MPropertyFriendlyName "maximum restart time"
	float m_flDurationMax; // 0x1c4	
	// MPropertyFriendlyName "control point to scale duration"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "control point field X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1cc	
	// MPropertyFriendlyName "child group ID"
	int32_t m_nChildGroupID; // 0x1d0	
	// MPropertyFriendlyName "only restart children"
	bool m_bOnlyChildren; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderClothForce : public CParticleFunctionRenderer
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapVisibilityScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "visibility minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "visibility maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4e0
// Has VTable
// 
// MParticleMinVersion "8"
// MGetKV3ClassDefaults
class C_INIT_CreateSequentialPathV2 : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_fMaxDistance; // 0x1c8	
	// MPropertyFriendlyName "particles to map from start to end"
	CParticleCollectionFloatInput m_flNumToAssign; // 0x328	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x488	
	// MPropertyFriendlyName "use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x489	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x48a	
private:
	[[maybe_unused]] uint8_t __pad048b[0x5]; // 0x48b
public:
	CPathParameters m_PathParams; // 0x490	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x680
// 
// MGetKV3ClassDefaults
struct VecInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionVecInput m_vecInput; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x250
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapInitialDirectionToTransformToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x234	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x238	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x23c	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x248	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MParticleMinVersion "8"
// MGetKV3ClassDefaults
class C_OP_LockToSavedSequentialPathV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c0	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c4	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	CPathParameters m_PathParams; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_NormalLock : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapTransformOrientationToRotations : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x230	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x23c	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x23d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Cull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "cull percentage"
	float m_flCullPerc; // 0x1c0	
	// MPropertyFriendlyName "cull start time"
	float m_flCullStart; // 0x1c4	
	// MPropertyFriendlyName "cull end time"
	float m_flCullEnd; // 0x1c8	
	// MPropertyFriendlyName "cull time exponent"
	float m_flCullExp; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomYawFlip : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "flip percentage"
	float m_flPercent; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct SequenceWeightedList_t
{
public:
	// MPropertyFriendlyName "sequence"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nSequence; // 0x0	
	// MPropertyFriendlyName "weight"
	float m_flRelativeWeight; // 0x4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ReadFromNeighboringParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "maximum distance"
	CPerParticleFloatInput m_DistanceCheck; // 0x1d0	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderText : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "outline color"
	Color m_OutlineColor; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "default text"
	CUtlString m_DefaultText; // 0x218	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpToInitialPosition : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c8	
	// MPropertyFriendlyName "position cache attribute"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nCacheField; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	// MPropertyFriendlyName "scale"
	CParticleCollectionFloatInput m_flScale; // 0x330	
	// MPropertyFriendlyName "component scale"
	CParticleCollectionVecInput m_vecScale; // 0x490	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomRotation : public CGeneralRandomRotation
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpEndCapVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x1c4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_VelocityDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPOrientationToPointAtCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "CP to point towards"
	int32_t m_nInputCP; // 0x1c8	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x1cc	
	// MPropertyFriendlyName "Interpolation"
	CParticleCollectionFloatInput m_flInterpolation; // 0x1d0	
	// MPropertyFriendlyName "2D Orient"
	bool m_b2DOrientation; // 0x330	
	// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
	bool m_bAvoidSingularity; // 0x331	
	// MPropertyFriendlyName "Point Away"
	bool m_bPointAway; // 0x332	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockToPointList : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1c8	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1e0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementPlaceOnGround : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "offset"
	CPerParticleFloatInput m_flOffset; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x320	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x324	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x328	
	// MPropertyFriendlyName "interpolation rate"
	float m_flLerpRate; // 0x32c	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x330	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3b0	
	// MPropertyFriendlyName "reference CP 1"
	int32_t m_nRefCP1; // 0x3b4	
	// MPropertyFriendlyName "reference CP 2"
	int32_t m_nRefCP2; // 0x3b8	
	// MPropertyFriendlyName "interploation distance tolerance cp"
	int32_t m_nLerpCP; // 0x3bc	
private:
	[[maybe_unused]] uint8_t __pad03c0[0x8]; // 0x3c0
public:
	// MPropertyFriendlyName "No Collision Behavior"
	ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x3c8	
	// MPropertyFriendlyName "include default contents trace hulls"
	bool m_bIncludeShotHull; // 0x3cc	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3cd	
private:
	[[maybe_unused]] uint8_t __pad03ce[0x2]; // 0x3ce
public:
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x3d0	
	// MPropertyFriendlyName "treat offset as scalar of particle radius"
	bool m_bScaleOffset; // 0x3d1	
private:
	[[maybe_unused]] uint8_t __pad03d2[0x2]; // 0x3d2
public:
	// MPropertyFriendlyName "preserve initial Z-offset relative to cp"
	int32_t m_nPreserveOffsetCP; // 0x3d4	
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	int32_t m_nIgnoreCP; // 0x3d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPOrientationToDirection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputControlPoint; // 0x1c0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input vector 1"
	CPerParticleVecInput m_InputVec1; // 0x1c0	
	// MPropertyFriendlyName "input vector 2"
	CPerParticleVecInput m_InputVec2; // 0x838	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0xeb0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0xeb4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformOrientationToRotations : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "offset pitch/yaw/roll"
	Vector m_vecRotation; // 0x228	
	// MPropertyFriendlyName "Use Quaternians Internally"
	bool m_bUseQuat; // 0x234	
	// MPropertyFriendlyName "Write normal instead of rotation"
	bool m_bWriteNormal; // 0x235	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomRotationSpeed : public CGeneralRandomRotation
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MParticleMinVersion "9"
// MGetKV3ClassDefaults
class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c0	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "behavior if parent particle dies"
	MissingParentInheritBehavior_t m_nMissingParentBehavior; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomSecondSequence : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "sequence min"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMin; // 0x1c8	
	// MPropertyFriendlyName "sequence max"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nSequenceMax; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x4b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x320	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x324	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x14
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PointDefinition_t
{
public:
	// MPropertyFriendlyName "Control point"
	int32_t m_nControlPoint; // 0x0	
	// MPropertyFriendlyName "Use local coordinates for offset"
	bool m_bLocalCoords; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyFriendlyName "Offset from control point"
	Vector m_vOffset; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointPositionToRandomActiveCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "min active CP"
	int32_t m_nHeadLocationMin; // 0x1cc	
	// MPropertyFriendlyName "max active CP"
	int32_t m_nHeadLocationMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "reset rate"
	CParticleCollectionFloatInput m_flResetRate; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Diffusion : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
	int32_t m_nVoxelGridResolution; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1c8	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1cc	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x1d0	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x1d4	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1d8	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1dc	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapVectorComponentToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Input Vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "Output Scalar"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Vector Component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomYaw : public CGeneralRandomRotation
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1440
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceBetweenVecs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "first vector"
	CPerParticleVecInput m_vecPoint1; // 0x1c8	
	// MPropertyFriendlyName "second vector"
	CPerParticleVecInput m_vecPoint2; // 0x840	
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0xeb8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x1018	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1178	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x12d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1438	
	// MPropertyFriendlyName "divide by deltatime (for comparing motion since last simulation)"
	bool m_bDeltaTime; // 0x143c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DampenToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "falloff range"
	float m_flRange; // 0x1c4	
	// MPropertyFriendlyName "dampen scale"
	float m_flScale; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CalculateVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start value"
	Vector m_vStartValue; // 0x1c0	
	// MPropertyFriendlyName "input field 1"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput1; // 0x1cc	
	// MPropertyFriendlyName "input scale 1"
	float m_flInputScale1; // 0x1d0	
	// MPropertyFriendlyName "input field 2"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput2; // 0x1d4	
	// MPropertyFriendlyName "input scale 2"
	float m_flInputScale2; // 0x1d8	
	// MPropertyFriendlyName "control point input 1"
	// -> m_controlPointNameString - 0x1dc
	// -> m_vOffsetFromControlPoint - 0x1e0
	// -> m_bOffsetInLocalSpace - 0x1ec
	ControlPointReference_t m_nControlPointInput1; // 0x1dc	
	// MPropertyFriendlyName "control point scale 1"
	float m_flControlPointScale1; // 0x1f0	
	// MPropertyFriendlyName "control point input 2"
	// -> m_controlPointNameString - 0x1f4
	// -> m_vOffsetFromControlPoint - 0x1f8
	// -> m_bOffsetInLocalSpace - 0x204
	ControlPointReference_t m_nControlPointInput2; // 0x1f4	
	// MPropertyFriendlyName "control point scale 2"
	float m_flControlPointScale2; // 0x208	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x20c	
	// MPropertyFriendlyName "final per component scale"
	Vector m_vFinalOutputScale; // 0x210	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformToVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockToBone : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x220	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x288	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x28c	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x290	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x294	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x298	
	// MPropertyFriendlyName "rigid lock"
	bool m_bRigid; // 0x318	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x319	
private:
	[[maybe_unused]] uint8_t __pad031a[0x2]; // 0x31a
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x31c	
	// MPropertyFriendlyName "output field prev"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x320	
	// MPropertyStartGroup "Set Rotations to Bones"
	// MPropertyFriendlyName "lock rotations to bone orientation"
	ParticleRotationLockType_t m_nRotationSetType; // 0x324	
	// MPropertyFriendlyName "rigid set rotation from bones"
	bool m_bRigidRotationLock; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x7]; // 0x329
public:
	// MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
	CPerParticleVecInput m_vecRotation; // 0x330	
	// MPropertyFriendlyName "rigid rotation interpolation"
	CPerParticleFloatInput m_flRotLerp; // 0x9a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelBodyPartOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementMaintainOffset : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1c0	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nCP; // 0x1cc	
	// MPropertyFriendlyName "scale by radius"
	bool m_bRadiusScale; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x838	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x83c	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x840	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x9a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flVelocityScale; // 0x1c8	
	// MPropertyFriendlyName "particle increment amount"
	float m_flIncrement; // 0x1cc	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1d4	
	// MPropertyFriendlyName "sub frame interpolation"
	bool m_bSubFrame; // 0x1d8	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CNewParticleEffect : public IParticleEffect
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
public:
	CNewParticleEffect* m_pNext; // 0x10	
	CNewParticleEffect* m_pPrev; // 0x18	
	IParticleCollection* m_pParticles; // 0x20	
	char* m_pDebugName; // 0x28	
	struct 
	{
		uint8_t m_bDontRemove: 1; 		
		uint8_t m_bRemove: 1; 		
		uint8_t m_bNeedsBBoxUpdate: 1; 		
		uint8_t m_bIsFirstFrame: 1; 		
		uint8_t m_bAutoUpdateBBox: 1; 		
		uint8_t m_bAllocated: 1; 		
		uint8_t m_bSimulate: 1; 		
		uint8_t m_bShouldPerformCullCheck: 1; 		
		uint8_t m_bForceNoDraw: 1; 		
		uint8_t m_bShouldSave: 1; 		
		uint8_t m_bDisableAggregation: 1; 		
		uint8_t m_bShouldSimulateDuringGamePaused: 1; 		
		uint8_t m_bShouldCheckFoW: 1; 		
		uint256_t __pad0: 179;
	}; // 192 bits
	Vector m_vSortOrigin; // 0x40	
	float m_flScale; // 0x4c	
	PARTICLE_EHANDLE__* m_hOwner; // 0x50	
	CParticleProperty* m_pOwningParticleProperty; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0060[0x10]; // 0x60
public:
	float m_flFreezeTransitionStart; // 0x70	
	float m_flFreezeTransitionDuration; // 0x74	
	float m_flFreezeTransitionOverride; // 0x78	
	bool m_bFreezeTransitionActive; // 0x7c	
	bool m_bFreezeTargetState; // 0x7d	
	bool m_bCanFreeze; // 0x7e	
private:
	[[maybe_unused]] uint8_t __pad007f[0x1]; // 0x7f
public:
	Vector m_LastMin; // 0x80	
	Vector m_LastMax; // 0x8c	
	CSplitScreenSlot m_nSplitScreenUser; // 0x98	
	Vector m_vecAggregationCenter; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x18]; // 0xa8
public:
	int32_t m_RefCount; // 0xc0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomNamedModelBodyPart : public C_INIT_RandomNamedModelElement
{
public:
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
class PARTICLE_EHANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x13b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x218	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x890	
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x894	
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x898	
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x9f8	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xb58	
	// MPropertyFriendlyName "Fog"
	bool m_bFog; // 0xb59	
private:
	[[maybe_unused]] uint8_t __pad0b5a[0x6]; // 0xb5a
public:
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySuppressExpr "!m_bFog"
	CPerParticleFloatInput m_flFogScale; // 0xb60	
	// MPropertyFriendlyName "Light Radius"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xcc0	
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xe20	
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xf80	
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0x10e0	
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0x1240	
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x13a0	
	// MPropertyFriendlyName "Cookie is Spherically Mapped"
	bool m_bSphericalCookie; // 0x13a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConnectParentParticleToNearest : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c0	
	// MPropertyFriendlyName "Second Control point to set"
	int32_t m_nSecondControlPoint; // 0x1c4	
	// MPropertyFriendlyName "Take radius into account for distance"
	bool m_bUseRadius; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	// MPropertyFriendlyName "Radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "Parent radius scale for distance calc"
	// MPropertySuppressExpr "!m_bUseRadius"
	CParticleCollectionFloatInput m_flParentRadiusScale; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToNamedModelBodyPartScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x360
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitSkinnedPositionFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "random order"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	bool m_bRandom; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "random seed"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nRandomSeed; // 0x1d4	
	// MPropertyFriendlyName "prepare for rigid lock"
	bool m_bRigid; // 0x1d8	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1d9	
	// MPropertyFriendlyName "normal velocity ignore delta time"
	bool m_bIgnoreDt; // 0x1da	
private:
	[[maybe_unused]] uint8_t __pad01db[0x1]; // 0x1db
public:
	// MPropertyFriendlyName "normal velocity min"
	float m_flMinNormalVelocity; // 0x1dc	
	// MPropertyFriendlyName "normal velocity max"
	float m_flMaxNormalVelocity; // 0x1e0	
	// MPropertyFriendlyName "Snapshot Read Type"
	SnapshotIndexType_t m_nIndexType; // 0x1e4	
	// MPropertyFriendlyName "Snapshot Index"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
	CPerParticleFloatInput m_flReadIndex; // 0x1e8	
	// MPropertyFriendlyName "particle increment amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	float m_flIncrement; // 0x348	
	// MPropertyFriendlyName "Full Loop Increment Amount"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nFullLoopIncrement; // 0x34c	
	// MPropertyFriendlyName "Snapshot start point"
	// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
	int32_t m_nSnapShotStartPoint; // 0x350	
	// MPropertyFriendlyName "inherited bone velocity"
	float m_flBoneVelocity; // 0x354	
	// MPropertyFriendlyName "max inherited bone velocity"
	float m_flBoneVelocityMax; // 0x358	
	// MPropertyFriendlyName "Set Color"
	bool m_bCopyColor; // 0x35c	
	// MPropertyFriendlyName "Set Alpha"
	bool m_bCopyAlpha; // 0x35d	
	// MPropertyFriendlyName "Set Radius"
	bool m_bSetRadius; // 0x35e	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LagCompensation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "desired velocity CP"
	int32_t m_nDesiredVelocityCP; // 0x1c0	
	// MPropertyFriendlyName "latency CP"
	int32_t m_nLatencyCP; // 0x1c4	
	// MPropertyFriendlyName "latency CP field"
	int32_t m_nLatencyCPField; // 0x1c8	
	// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
	int32_t m_nDesiredVelocityCPField; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x480
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x320	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1c8	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1cc	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeAndKillForTracers : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1c4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1c8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1cc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x1d0	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ColorAdjustHSL : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "hue adjust"
	CPerParticleFloatInput m_flHueAdjust; // 0x1c0	
	// MPropertyFriendlyName "saturation adjust"
	CPerParticleFloatInput m_flSaturationAdjust; // 0x320	
	// MPropertyFriendlyName "lightness adjust"
	CPerParticleFloatInput m_flLightnessAdjust; // 0x480	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_BasicMovement : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "gravity"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_Gravity; // 0x1c0	
	// MPropertyFriendlyName "drag"
	// MPropertyAttributeRange "-1 1"
	CParticleCollectionFloatInput m_fDrag; // 0x838	
	// MPropertyFriendlyName "Mass controls"
	// -> m_nMassMode - 0x998
	// -> m_flRadius - 0x9a0
	// -> m_flNominalRadius - 0xb00
	// -> m_flScale - 0xc60
	CParticleMassCalculationParameters m_massControls; // 0x998	
	// MPropertyFriendlyName "max constraint passes"
	int32_t m_nMaxConstraintPasses; // 0xdc0	
	// MPropertyFriendlyName "use new code"
	bool m_bUseNewCode; // 0xdc4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SequenceFromModel : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_AlphaDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum alpha"
	float m_flMinAlpha; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDensityGradientToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x850
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitVec : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x840	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x844	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x848	
	// MPropertyFriendlyName "set previous position"
	// MPropertySuppressExpr "m_nOutputField != PARTICLE_ATTRIBUTE_XYZ"
	bool m_bWritePreviousPosition; // 0x849	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetHitboxToModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x1cc	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1d4	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d8	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	Vector m_vecDirectionBias; // 0x850	
	// MPropertyFriendlyName "maintain existing hitbox"
	bool m_bMaintainHitbox; // 0x85c	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x85d	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x85e	
private:
	[[maybe_unused]] uint8_t __pad08de[0x2]; // 0x8de
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x8e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1c8	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x6]; // 0x1ca
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1d0	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "value to lerp to"
	CPerParticleFloatInput m_flOutput; // 0x1c8	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x328	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x32c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x280
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1c8	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x248	
	// MPropertyFriendlyName "minimum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMin; // 0x24c	
	// MPropertyFriendlyName "maximum velocity"
	// MVectorIsCoordinate
	Vector m_vecOutputMax; // 0x258	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x264	
	// MPropertyFriendlyName "per particle world collision tests"
	bool m_bPerParticle; // 0x268	
	// MPropertyFriendlyName "offset instead of accelerate"
	bool m_bTranslate; // 0x269	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0x26a	
private:
	[[maybe_unused]] uint8_t __pad026b[0x1]; // 0x26b
public:
	// MPropertyFriendlyName "trace length"
	float m_flTraceLength; // 0x26c	
	// MPropertyFriendlyName "use radius for per particle trace length"
	bool m_bPerParticleTR; // 0x270	
	// MPropertyFriendlyName "inherit from parent"
	bool m_bInherit; // 0x271	
private:
	[[maybe_unused]] uint8_t __pad0272[0x2]; // 0x272
public:
	// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
	int32_t m_nChildCP; // 0x274	
	// MPropertyFriendlyName "child group ID to affect"
	int32_t m_nChildGroupID; // 0x278	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x488
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ClampScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToHMD : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1cc	
	// MPropertyFriendlyName "use hmd orientation"
	bool m_bOrientToHMD; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DifferencePreviousParticle : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "difference minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "difference maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
	// MPropertyFriendlyName "only active within specified difference"
	bool m_bActiveRange; // 0x1dc	
	// MPropertyFriendlyName "also set ouput to previous particle"
	bool m_bSetPreviousParticle; // 0x1dd	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1028
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldFromVectorExpression : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "input 1"
	CParticleCollectionVecInput m_vecInput1; // 0x1d0	
	// MPropertyFriendlyName "input 2"
	CParticleCollectionVecInput m_vecInput2; // 0x848	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xec0	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputCP; // 0x1020	
	// MPropertyFriendlyName "output component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1024	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransforms : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1d8	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x240	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2a8	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2ac	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2ad	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x1d0	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelSequenceEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2c70
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderRopes : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x27e8	
private:
	[[maybe_unused]] uint8_t __pad27e9[0x3]; // 0x27e9
public:
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMinSize; // 0x27ec	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flMaxSize; // 0x27f0	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flStartFadeSize; // 0x27f4	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
	float m_flEndFadeSize; // 0x27f8	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x27fc	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2800	
	// MPropertyStartGroup "Rope Tesselation"
	// MPropertyFriendlyName "amount to taper the width of the trail end by"
	float m_flRadiusTaper; // 0x2804	
	// MPropertyFriendlyName "minium number of quads per render segment"
	// MPropertySortPriority "850"
	int32_t m_nMinTesselation; // 0x2808	
	// MPropertyFriendlyName "maximum number of quads per render segment"
	int32_t m_nMaxTesselation; // 0x280c	
	// MPropertyFriendlyName "tesselation resolution scale factor"
	float m_flTessScale; // 0x2810	
private:
	[[maybe_unused]] uint8_t __pad2814[0x4]; // 0x2814
public:
	// MPropertyStartGroup "+Rope Global UV Controls"
	// MPropertyFriendlyName "global texture V World Size"
	// MPropertySortPriority "800"
	CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2818	
	// MPropertyFriendlyName "global texture V Scroll Rate"
	CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2978	
	// MPropertyFriendlyName "global texture V Offset"
	CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2ad8	
	// MPropertyFriendlyName "global texture V Params CP"
	int32_t m_nTextureVParamsCP; // 0x2c38	
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	bool m_bClampV; // 0x2c3c	
private:
	[[maybe_unused]] uint8_t __pad2c3d[0x3]; // 0x2c3d
public:
	// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
	// MPropertyFriendlyName "scale CP start"
	int32_t m_nScaleCP1; // 0x2c40	
	// MPropertyFriendlyName "scale CP end"
	int32_t m_nScaleCP2; // 0x2c44	
	// MPropertyFriendlyName "scale V world size by CP distance"
	float m_flScaleVSizeByControlPointDistance; // 0x2c48	
	// MPropertyFriendlyName "scale V scroll rate by CP distance"
	float m_flScaleVScrollByControlPointDistance; // 0x2c4c	
	// MPropertyFriendlyName "scale V offset by CP distance"
	float m_flScaleVOffsetByControlPointDistance; // 0x2c50	
private:
	[[maybe_unused]] uint8_t __pad2c54[0x1]; // 0x2c54
public:
	// MPropertyStartGroup "Rope Global UV Controls"
	// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
	bool m_bUseScalarForTextureCoordinate; // 0x2c55	
private:
	[[maybe_unused]] uint8_t __pad2c56[0x2]; // 0x2c56
public:
	// MPropertyFriendlyName "scalar to use for texture coordinate"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2c58	
	// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
	// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
	float m_flScalarAttributeTextureCoordScale; // 0x2c5c	
	// MPropertyStartGroup "Rope Order Controls"
	// MPropertyFriendlyName "reverse point order"
	// MPropertySortPriority "800"
	bool m_bReverseOrder; // 0x2c60	
	// MPropertyFriendlyName "Closed loop"
	bool m_bClosedLoop; // 0x2c61	
private:
	[[maybe_unused]] uint8_t __pad2c62[0x2]; // 0x2c62
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation_type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c64	
	// MPropertyFriendlyName "attribute to use for normal"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2c68	
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "draw as opaque"
	bool m_bDrawAsOpaque; // 0x2c6c	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "generate normals for cylinder"
	bool m_bGenerateNormals; // 0x2c6d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromCPSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "field to read"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToRead; // 0x1cc	
	// MPropertyFriendlyName "field to write"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1d0	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1d4	
	// MPropertyFriendlyName "random order"
	bool m_bRandom; // 0x1d8	
	// MPropertyFriendlyName "reverse order"
	bool m_bReverse; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x6]; // 0x1da
public:
	// MPropertyFriendlyName "Snapshot increment amount"
	CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1e0	
	// MPropertyFriendlyName "Manual Snapshot Index"
	CPerParticleFloatInput m_nManualSnapshotIndex; // 0x340	
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x4a0	
	// MPropertyFriendlyName "local space angles"
	bool m_bLocalSpaceAngles; // 0x4a4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1488
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x210	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x370	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4d0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b4c[0x4]; // 0xb4c
public:
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb50	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xb58	
private:
	[[maybe_unused]] uint8_t __pad0b5c[0x4]; // 0xb5c
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xb60	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xcc0	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xe20	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xf80	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x10e0	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x1240	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x13a0	
private:
	[[maybe_unused]] uint8_t __pad13a1[0x3]; // 0x13a1
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x13a4	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x13a8	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x13ac	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x13b0	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x13b4	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x13b8	
private:
	[[maybe_unused]] uint8_t __pad13bc[0x4]; // 0x13bc
public:
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleInputOptional
	CParticleTransformInput m_LightingTransform; // 0x13c0	
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x1428	
private:
	[[maybe_unused]] uint8_t __pad1440[0x18]; // 0x1440
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x1458	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InheritVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "velocity scale"
	float m_flVelocityScale; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x348
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToWaterSurface : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1c8	
	// MPropertyFriendlyName "CP to set to surface"
	int32_t m_nDestCP; // 0x1cc	
	// MPropertyFriendlyName "CP to set to surface current flow velocity"
	// MPropertySuppressExpr "mod != hlx"
	int32_t m_nFlowCP; // 0x1d0	
	// MPropertyFriendlyName "CP to set component of if water"
	int32_t m_nActiveCP; // 0x1d4	
	// MPropertyFriendlyName "CP component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nActiveCPField; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "retest rate"
	CParticleCollectionFloatInput m_flRetestRate; // 0x1e0	
	// MPropertyFriendlyName "adaptive retest on moving surface"
	bool m_bAdaptiveThreshold; // 0x340	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xf30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1c8	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x840	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xeb8	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xf20	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xf24	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input"
	CParticleTransformInput m_transformInput; // 0x1c8	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x230	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ShapeMatchingConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "shape restoration time"
	float m_flShapeRestorationTime; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetChildControlPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "first control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of control points to set"
	int32_t m_nNumControlPoints; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x1d0	
	// MPropertyFriendlyName "start as last particle"
	bool m_bReverse; // 0x330	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x331	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1448
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x328	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x488	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5e8	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x748	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xdc0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1438	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x143c	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x1440	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDirectionToCPToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "scale factor"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1cc	
	// MPropertyFriendlyName "offset axis"
	// MVectorIsCoordinate
	Vector m_vecOffsetAxis; // 0x1d0	
	// MPropertyFriendlyName "normalize"
	bool m_bNormalize; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
public:
	// MPropertyFriendlyName "strength field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldStrength; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DriveCPFromGlobalSoundFloat : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutputControlPoint; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1dc	
	// MPropertyFriendlyName "sound stack name"
	CUtlString m_StackName; // 0x1e0	
	// MPropertyFriendlyName "sound operator name"
	CUtlString m_OperatorName; // 0x1e8	
	// MPropertyFriendlyName "sound field name"
	CUtlString m_FieldName; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x268
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RtEnvCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "test direction"
	// MVectorIsCoordinate
	Vector m_vecTestDir; // 0x1c0	
	// MPropertyFriendlyName "cull normal"
	// MVectorIsCoordinate
	Vector m_vecTestNormal; // 0x1cc	
	// MPropertyFriendlyName "cull on miss"
	bool m_bCullOnMiss; // 0x1d8	
	// MPropertyFriendlyName "stick instead of cull"
	bool m_bStickInsteadOfCull; // 0x1d9	
	// MPropertyFriendlyName "ray trace environment name"
	char m_RtEnvName[128]; // 0x1da	
private:
	[[maybe_unused]] uint8_t __pad025a[0x2]; // 0x25a
public:
	// MPropertyFriendlyName "ray trace environment cp"
	int32_t m_nRTEnvCP; // 0x25c	
	// MPropertyFriendlyName "rt env control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent; // 0x260	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1098
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PinParticleToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "offset"
	CParticleCollectionVecInput m_vecOffset; // 0x1c8	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
public:
	// MPropertyFriendlyName "particle to use"
	ParticleSelection_t m_nParticleSelection; // 0x844	
	// MPropertyFriendlyName "particle number/offset"
	CParticleCollectionFloatInput m_nParticleNumber; // 0x848	
	// MPropertyFriendlyName "pin break type"
	ParticlePinDistance_t m_nPinBreakType; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	// MPropertyFriendlyName "break length %"
	CParticleCollectionFloatInput m_flBreakDistance; // 0x9b0	
	// MPropertyFriendlyName "break speed"
	CParticleCollectionFloatInput m_flBreakSpeed; // 0xb10	
	// MPropertyFriendlyName "break age"
	CParticleCollectionFloatInput m_flAge; // 0xc70	
	// MPropertyFriendlyName "break comparison control point 1"
	int32_t m_nBreakControlPointNumber; // 0xdd0	
	// MPropertyFriendlyName "break comparison control point 2"
	int32_t m_nBreakControlPointNumber2; // 0xdd4	
	// MPropertyFriendlyName "break value"
	CParticleCollectionFloatInput m_flBreakValue; // 0xdd8	
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0xf38	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPtoVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "local space CP"
	int32_t m_nLocalSpaceCP; // 0x1c8	
	// MPropertyFriendlyName "input minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vOutputMax; // 0x1f0	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1fc	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x200	
	// MPropertyFriendlyName "interpolation scale"
	float m_flInterpRate; // 0x204	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x208	
	// MPropertyFriendlyName "offset position"
	bool m_bOffset; // 0x20c	
	// MPropertyFriendlyName "accelerate position"
	bool m_bAccelerate; // 0x20d	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x1c8	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x328	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x488	
private:
	[[maybe_unused]] uint8_t __pad048c[0x4]; // 0x48c
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x490	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DensityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x1d4	
	// MPropertyFriendlyName "Target density"
	float m_flTargetDensity; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent1; // 0x1c8	
	// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nComponent2; // 0x1cc	
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1d0	
	// MPropertyFriendlyName "particle density"
	CPerParticleFloatInput m_flParticleDensity; // 0x238	
	// MPropertyFriendlyName "point offset"
	CPerParticleFloatInput m_flOffset; // 0x398	
	// MPropertyFriendlyName "radius 1"
	CPerParticleFloatInput m_flRadius1; // 0x4f8	
	// MPropertyFriendlyName "radius 2"
	CPerParticleFloatInput m_flRadius2; // 0x658	
	// MPropertyFriendlyName "use particle count instead of creation time"
	bool m_bUseCount; // 0x7b8	
	// MPropertyFriendlyName "local space"
	bool m_bUseLocalCoords; // 0x7b9	
	// MPropertyFriendlyName "offset from existing position"
	bool m_bOffsetExistingPos; // 0x7ba	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1c4	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1c8	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointPositions : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "set positions in world space"
	bool m_bUseWorldLocation; // 0x1c8	
	// MPropertyFriendlyName "inherit CP orientation"
	bool m_bOrient; // 0x1c9	
	// MPropertyFriendlyName "only set position once"
	bool m_bSetOnce; // 0x1ca	
private:
	[[maybe_unused]] uint8_t __pad01cb[0x1]; // 0x1cb
public:
	// MPropertyFriendlyName "first control point number"
	int32_t m_nCP1; // 0x1cc	
	// MPropertyFriendlyName "second control point number"
	int32_t m_nCP2; // 0x1d0	
	// MPropertyFriendlyName "third control point number"
	int32_t m_nCP3; // 0x1d4	
	// MPropertyFriendlyName "fourth control point number"
	int32_t m_nCP4; // 0x1d8	
	// MPropertyFriendlyName "first control point location"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1dc	
	// MPropertyFriendlyName "second control point location"
	// MVectorIsCoordinate
	Vector m_vecCP2Pos; // 0x1e8	
	// MPropertyFriendlyName "third control point location"
	// MVectorIsCoordinate
	Vector m_vecCP3Pos; // 0x1f4	
	// MPropertyFriendlyName "fourth control point location"
	// MVectorIsCoordinate
	Vector m_vecCP4Pos; // 0x200	
	// MPropertyFriendlyName "control point to offset positions from"
	int32_t m_nHeadLocation; // 0x20c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1020
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFloatAttributeToVectorExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	VectorFloatExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleVecInput m_vInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleVecInput m_vInput2; // 0x840	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0xeb8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x1018	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x101c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementRotateParticleAroundAxis : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1c0	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x838	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x998	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xa00	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_IntraParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min attraction distance"
	float m_flAttractionMinDistance; // 0x1d0	
	// MPropertyFriendlyName "max attraction distance"
	float m_flAttractionMaxDistance; // 0x1d4	
	// MPropertyFriendlyName "max attraction force"
	float m_flAttractionMaxStrength; // 0x1d8	
	// MPropertyFriendlyName "min repulsion distance"
	float m_flRepulsionMinDistance; // 0x1dc	
	// MPropertyFriendlyName "max repulsion distance"
	float m_flRepulsionMaxDistance; // 0x1e0	
	// MPropertyFriendlyName "max repulsion force"
	float m_flRepulsionMaxStrength; // 0x1e4	
	// MPropertyFriendlyName "use aabbtree"
	bool m_bUseAABB; // 0x1e8	
	// MPropertyFriendlyName "thread pairwise collision"
	bool m_bThreadIt; // 0x1e9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleFloatInput m_InputValue; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x32c	
	// MPropertyFriendlyName "per-particle strength"
	CPerParticleFloatInput m_InputStrength; // 0x330	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x12e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateOnModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input model"
	CParticleModelInput m_modelInput; // 0x1c8	
	// MPropertyFriendlyName "input transform for transforming local space bias vector"
	// MParticleInputOptional
	CParticleTransformInput m_transformInput; // 0x228	
	// MPropertyFriendlyName "force to be inside model"
	int32_t m_nForceInModel; // 0x290	
	// MPropertyFriendlyName "bias box distribution by volume"
	bool m_bScaleToVolume; // 0x294	
	// MPropertyFriendlyName "even distribution within boxes"
	bool m_bEvenDistribution; // 0x295	
private:
	[[maybe_unused]] uint8_t __pad0296[0x2]; // 0x296
public:
	// MPropertyFriendlyName "desired hitbox"
	CParticleCollectionFloatInput m_nDesiredHitbox; // 0x298	
	// MPropertyFriendlyName "Control Point Providing Hitbox index"
	int32_t m_nHitboxValueFromControlPointIndex; // 0x3f8	
private:
	[[maybe_unused]] uint8_t __pad03fc[0x4]; // 0x3fc
public:
	// MPropertyFriendlyName "hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x400	
	// MPropertyFriendlyName "inherited velocity scale"
	float m_flBoneVelocity; // 0xa78	
	// MPropertyFriendlyName "maximum inherited velocity"
	float m_flMaxBoneVelocity; // 0xa7c	
	// MPropertyFriendlyName "direction bias"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecDirectionBias; // 0xa80	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x10f8	
	// MPropertyFriendlyName "bias in local space"
	bool m_bLocalCoords; // 0x1178	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1179	
	// MPropertyFriendlyName "Use renderable meshes instead of hitboxes"
	bool m_bUseMesh; // 0x117a	
private:
	[[maybe_unused]] uint8_t __pad117b[0x5]; // 0x117b
public:
	// MPropertyFriendlyName "hitbox shell thickness"
	CParticleCollectionFloatInput m_flShellSize; // 0x1180	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InheritFromPeerSystem : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "read field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "written field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c4	
	// MPropertyFriendlyName "particle neighbor increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x330	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x9a8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomNamedModelMeshGroup : public C_INIT_RandomNamedModelElement
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x210	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x211	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x212	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x213	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x214	
private:
	[[maybe_unused]] uint8_t __pad0215[0x3]; // 0x215
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x218	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x21c	
	// MPropertyFriendlyName "materials"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // 0x220	
	// MPropertyFriendlyName "material selection"
	CPerParticleFloatInput m_flMaterialSelection; // 0x238	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x398	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x39c	
private:
	[[maybe_unused]] uint8_t __pad039d[0x3]; // 0x39d
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x3a0	
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x3b8	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x518	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x678	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x7e0	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xe58	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaxVelocity : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum velocity"
	float m_flMaxVelocity; // 0x1c0	
	// MPropertyFriendlyName "minimum velocity"
	float m_flMinVelocity; // 0x1c4	
	// MPropertyFriendlyName "override max velocity from this CP"
	int32_t m_nOverrideCP; // 0x1c8	
	// MPropertyFriendlyName "override CP field"
	int32_t m_nOverrideCPField; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityFromNormal : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "random speed min"
	float m_fSpeedMin; // 0x1c8	
	// MPropertyFriendlyName "random speed max"
	float m_fSpeedMax; // 0x1cc	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x330	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x490	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x494	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x498	
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x499	
private:
	[[maybe_unused]] uint8_t __pad049a[0x6]; // 0x49a
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x4a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionOffsetToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "creation control point number"
	int32_t m_nControlPointNumberStart; // 0x1c8	
	// MPropertyFriendlyName "offset control point number"
	int32_t m_nControlPointNumberEnd; // 0x1cc	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapInitialTransformDirectionToRotation : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x230	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x234	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x238	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeAndKill : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "start fade in time"
	float m_flStartFadeInTime; // 0x1c0	
	// MPropertyFriendlyName "end fade in time"
	float m_flEndFadeInTime; // 0x1c4	
	// MPropertyFriendlyName "start fade out time"
	float m_flStartFadeOutTime; // 0x1c8	
	// MPropertyFriendlyName "end fade out time"
	float m_flEndFadeOutTime; // 0x1cc	
	// MPropertyFriendlyName "start alpha"
	float m_flStartAlpha; // 0x1d0	
	// MPropertyFriendlyName "end alpha"
	float m_flEndAlpha; // 0x1d4	
	// MPropertyFriendlyName "force preserving particle order"
	bool m_bForcePreserveParticleOrder; // 0x1d8	
};

// Registered binary: particles.dll (project 'particleslib')
// Alignment: 8
// Size: 0x4
// Has Trivial Constructor
// Has Trivial Destructor
class PARTICLE_WORLD_HANDLE__
{
public:
	int32_t unused; // 0x0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ColorInterpolate : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "color fade"
	Color m_ColorFade; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0xc]; // 0x1c4
public:
	// MPropertyFriendlyName "fade start time"
	float m_flFadeStartTime; // 0x1d0	
	// MPropertyFriendlyName "fade end time"
	float m_flFadeEndTime; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8	
	// MPropertyFriendlyName "ease in and out"
	bool m_bEaseInOut; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarSpline : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1cc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1d4	
	// MPropertyFriendlyName "bias"
	float m_flBias; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x24]; // 0x1dc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
	// MPropertyFriendlyName "ease out"
	bool m_bEaseOut; // 0x205	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelSequenceOnceTimed : public C_OP_RemapNamedModelElementOnceTimed
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFromObjectScale : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c8	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nCPOutput; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaintainSequentialPath : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
	// MPropertyFriendlyName "particles to map from start to end"
	float m_flNumToAssign; // 0x1c4	
	// MPropertyFriendlyName "cohesion strength"
	float m_flCohesionStrength; // 0x1c8	
	// MPropertyFriendlyName "control point movement tolerance"
	float m_flTolerance; // 0x1cc	
	// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
	bool m_bLoop; // 0x1d0	
	// MPropertyFriendlyName "use existing particle count"
	bool m_bUseParticleCount; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0xe]; // 0x1d2
public:
	CPathParameters m_PathParams; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelBodyPartEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_StopAfterCPDuration : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "duration at which to stop"
	CParticleCollectionFloatInput m_flDuration; // 0x1c8	
	// MPropertyFriendlyName "destroy all particles immediately"
	bool m_bDestroyImmediately; // 0x328	
	// MPropertyFriendlyName "play end cap effect"
	bool m_bPlayEndCap; // 0x329	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Spin : public CGeneralSpin
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MParticleMaxVersion "7"
// MParticleReplacementOp "C_OP_LockToSavedSequentialPathV2"
// MGetKV3ClassDefaults
class C_OP_LockToSavedSequentialPath : public CParticleFunctionOperator
{
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "start fade time"
	float m_flFadeStart; // 0x1c4	
	// MPropertyFriendlyName "end fade time"
	float m_flFadeEnd; // 0x1c8	
	// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
	bool m_bCPPairs; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	CPathParameters m_PathParams; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapNamedModelSequenceToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ClampVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	CPerParticleVecInput m_vecOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	CPerParticleVecInput m_vecOutputMax; // 0x840	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderStatusEffectCitadel : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "color warp texture (3d)"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureColorWarp; // 0x210	
	// MPropertyFriendlyName "normal texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureNormal; // 0x218	
	// MPropertyFriendlyName "metalness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureMetalness; // 0x220	
	// MPropertyFriendlyName "roughness texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureRoughness; // 0x228	
	// MPropertyFriendlyName "self illum texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureSelfIllum; // 0x230	
	// MPropertyFriendlyName "detail texture"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureDetail; // 0x238	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapCPtoScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nCPInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "input field 0-2 X/Y/Z"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1e4	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1e8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1ec	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x3f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CParticleSystemDefinition : public IParticleSystemDefinition
{
public:
	// MPropertyFriendlyName "version"
	// MPropertySuppressField
	int32_t m_nBehaviorVersion; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MPropertySuppressField
	CUtlVector< CParticleFunctionPreEmission* > m_PreEmissionOperators; // 0x10	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionEmitter* > m_Emitters; // 0x28	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionInitializer* > m_Initializers; // 0x40	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionOperator* > m_Operators; // 0x58	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionForce* > m_ForceGenerators; // 0x70	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionConstraint* > m_Constraints; // 0x88	
	// MPropertySuppressField
	CUtlVector< CParticleFunctionRenderer* > m_Renderers; // 0xa0	
	// MPropertySuppressField
	CUtlVector< ParticleChildrenInfo_t > m_Children; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00d0[0xa8]; // 0xd0
public:
	// MPropertySuppressField
	int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178	
private:
	[[maybe_unused]] uint8_t __pad017c[0x94]; // 0x17c
public:
	// MPropertyStartGroup "+Collection Options"
	// MPropertyFriendlyName "initial particles"
	int32_t m_nInitialParticles; // 0x210	
	// MPropertyFriendlyName "max particles"
	int32_t m_nMaxParticles; // 0x214	
	// MPropertyFriendlyName "group id"
	int32_t m_nGroupID; // 0x218	
	// MPropertyStartGroup "Bounding Box"
	// MPropertyFriendlyName "bounding box bloat min"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMin; // 0x21c	
	// MPropertyFriendlyName "bounding box bloat max"
	// MVectorIsCoordinate
	Vector m_BoundingBoxMax; // 0x228	
	// MPropertyFriendlyName "bounding box depth sort bias"
	float m_flDepthSortBias; // 0x234	
	// MPropertyFriendlyName "sort override position CP"
	int32_t m_nSortOverridePositionCP; // 0x238	
	// MPropertyFriendlyName "infinite bounds - don't cull"
	bool m_bInfiniteBounds; // 0x23c	
	// MPropertyStartGroup "Named Values"
	// MPropertyFriendlyName "Enable Named Values (EXPERIMENTAL)"
	bool m_bEnableNamedValues; // 0x23d	
private:
	[[maybe_unused]] uint8_t __pad023e[0x2]; // 0x23e
public:
	// MPropertyFriendlyName "Domain Class"
	// MPropertyAttributeChoiceName "particlefield_domain"
	// MPropertyAutoRebuildOnChange
	// MPropertySuppressExpr "!m_bEnableNamedValues"
	CUtlString m_NamedValueDomain; // 0x240	
	// MPropertySuppressField
	CUtlVector< ParticleNamedValueSource_t* > m_NamedValueLocals; // 0x248	
	// MPropertyStartGroup "+Base Properties"
	// MPropertyFriendlyName "color"
	// MPropertyColorPlusAlpha
	Color m_ConstantColor; // 0x260	
	// MPropertyFriendlyName "normal"
	// MVectorIsCoordinate
	Vector m_ConstantNormal; // 0x264	
	// MPropertyFriendlyName "radius"
	// MPropertyAttributeRange "biased 0 500"
	float m_flConstantRadius; // 0x270	
	// MPropertyFriendlyName "rotation"
	float m_flConstantRotation; // 0x274	
	// MPropertyFriendlyName "rotation speed"
	float m_flConstantRotationSpeed; // 0x278	
	// MPropertyFriendlyName "lifetime"
	float m_flConstantLifespan; // 0x27c	
	// MPropertyFriendlyName "sequence number"
	// MPropertyAttributeEditor "SequencePicker( 1 )"
	int32_t m_nConstantSequenceNumber; // 0x280	
	// MPropertyFriendlyName "sequence number 1"
	// MPropertyAttributeEditor "SequencePicker( 2 )"
	int32_t m_nConstantSequenceNumber1; // 0x284	
	// MPropertyStartGroup "Snapshot Options"
	int32_t m_nSnapshotControlPoint; // 0x288	
private:
	[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshot; // 0x290	
	// MPropertyStartGroup "Replacement Options"
	// MPropertyFriendlyName "cull replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_pszCullReplacementName; // 0x298	
	// MPropertyFriendlyName "cull radius"
	float m_flCullRadius; // 0x2a0	
	// MPropertyFriendlyName "cull cost"
	float m_flCullFillCost; // 0x2a4	
	// MPropertyFriendlyName "cull control point"
	int32_t m_nCullControlPoint; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
public:
	// MPropertyFriendlyName "fallback replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hFallback; // 0x2b0	
	// MPropertyFriendlyName "fallback max count"
	int32_t m_nFallbackMaxCount; // 0x2b8	
private:
	[[maybe_unused]] uint8_t __pad02bc[0x4]; // 0x2bc
public:
	// MPropertyFriendlyName "low violence definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hLowViolenceDef; // 0x2c0	
	// MPropertyFriendlyName "reference replacement definition"
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hReferenceReplacement; // 0x2c8	
	// MPropertyStartGroup "Simulation Options"
	// MPropertyFriendlyName "pre-simulation time"
	float m_flPreSimulationTime; // 0x2d0	
	// MPropertyFriendlyName "freeze simulation after time"
	float m_flStopSimulationAfterTime; // 0x2d4	
	// MPropertyFriendlyName "maximum time step"
	float m_flMaximumTimeStep; // 0x2d8	
	// MPropertyFriendlyName "maximum sim tick rate"
	float m_flMaximumSimTime; // 0x2dc	
	// MPropertyFriendlyName "minimum sim tick rate"
	float m_flMinimumSimTime; // 0x2e0	
	// MPropertyFriendlyName "minimum simulation time step"
	float m_flMinimumTimeStep; // 0x2e4	
	// MPropertyFriendlyName "minimum required rendered frames"
	int32_t m_nMinimumFrames; // 0x2e8	
	// MPropertyStartGroup "Performance Options"
	// MPropertyFriendlyName "minimum CPU level"
	int32_t m_nMinCPULevel; // 0x2ec	
	// MPropertyFriendlyName "minimum GPU level"
	int32_t m_nMinGPULevel; // 0x2f0	
	// MPropertyFriendlyName "time to sleep when not drawn"
	float m_flNoDrawTimeToGoToSleep; // 0x2f4	
	// MPropertyFriendlyName "maximum draw distance"
	float m_flMaxDrawDistance; // 0x2f8	
	// MPropertyFriendlyName "start fade distance"
	float m_flStartFadeDistance; // 0x2fc	
	// MPropertyFriendlyName "maximum creation distance"
	float m_flMaxCreationDistance; // 0x300	
	// MPropertyFriendlyName "minimum free particles to aggregate"
	int32_t m_nAggregationMinAvailableParticles; // 0x304	
	// MPropertyFriendlyName "aggregation radius"
	float m_flAggregateRadius; // 0x308	
	// MPropertyFriendlyName "batch particle systems"
	bool m_bShouldBatch; // 0x30c	
	// MPropertyFriendlyName "Hitboxes fall back to render bounds"
	bool m_bShouldHitboxesFallbackToRenderBounds; // 0x30d	
	// MPropertyFriendlyName "Hitboxes fall back to snapshot"
	bool m_bShouldHitboxesFallbackToSnapshot; // 0x30e	
	// MPropertyFriendlyName "Hitboxes fall back to collision hulls"
	bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x30f	
	// MPropertyStartGroup "Rendering Options"
	// MPropertyFriendlyName "view model effect"
	// MPropertySuppressExpr "m_bScreenSpaceEffect"
	InheritableBoolType_t m_nViewModelEffect; // 0x310	
	// MPropertyFriendlyName "screen space effect"
	// MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
	bool m_bScreenSpaceEffect; // 0x314	
private:
	[[maybe_unused]] uint8_t __pad0315[0x3]; // 0x315
public:
	// MPropertyFriendlyName "target layer ID for rendering"
	CUtlSymbolLarge m_pszTargetLayerID; // 0x318	
	// MPropertyFriendlyName "control point to disable rendering if it is the camera"
	int32_t m_nSkipRenderControlPoint; // 0x320	
	// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
	int32_t m_nAllowRenderControlPoint; // 0x324	
	// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
	// MParticleAdvancedField
	bool m_bShouldSort; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad0329[0x47]; // 0x329
public:
	// MPropertySuppressField
	CUtlVector< ParticleControlPointConfiguration_t > m_controlPointConfigurations; // 0x370	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2ac0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CBaseTrailRenderer : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x27e8	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x27ec	
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "minimum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMinSize; // 0x27f0	
	// MPropertyFriendlyName "maximum visual screen-size"
	// MPropertySortPriority "900"
	float m_flMaxSize; // 0x27f4	
	// MPropertyFriendlyName "start fade screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x27f8	
	// MPropertyFriendlyName "end fade and cull screen-size"
	// MPropertySortPriority "900"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2958	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
	// MPropertySortPriority "800"
	bool m_bClampV; // 0x2ab8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_WindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	Vector m_vForce; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa60
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVariable : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Variable"
	// -> m_variableName - 0x1c8
	// -> m_variableType - 0x200
	CParticleVariableRef m_variableReference; // 0x1c8	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	CParticleTransformInput m_transformInput; // 0x208	
	// MPropertyFriendlyName "Position Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	Vector m_positionOffset; // 0x270	
	// MPropertyFriendlyName "Rotation Offset"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
	QAngle m_rotationOffset; // 0x27c	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
	CParticleCollectionVecInput m_vecInput; // 0x288	
	// MPropertyFriendlyName "Value"
	// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
	CParticleCollectionFloatInput m_floatInput; // 0x900	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x13f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderStandardLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "light type"
	ParticleLightTypeChoiceList_t m_nLightType; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "color blend"
	CParticleCollectionVecInput m_vecColorScale; // 0x218	
	// MPropertyFriendlyName "color blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0x890	
private:
	[[maybe_unused]] uint8_t __pad0894[0x4]; // 0x894
public:
	// MPropertyFriendlyName "intensity"
	CParticleCollectionFloatInput m_flIntensity; // 0x898	
	// MPropertyFriendlyName "cast shadows"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bCastShadows; // 0x9f8	
private:
	[[maybe_unused]] uint8_t __pad09f9[0x7]; // 0x9f9
public:
	// MPropertyFriendlyName "inner cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flTheta; // 0xa00	
	// MPropertyFriendlyName "outer cone angle"
	// MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
	CParticleCollectionFloatInput m_flPhi; // 0xb60	
	// MPropertyFriendlyName "light radius multiplier"
	CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xcc0	
	// MPropertyFriendlyName "attenuation type"
	StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xe20	
private:
	[[maybe_unused]] uint8_t __pad0e24[0x4]; // 0xe24
public:
	// MPropertyFriendlyName "falloff linearity"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
	CParticleCollectionFloatInput m_flFalloffLinearity; // 0xe28	
	// MPropertyFriendlyName "falloff fifty percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xf88	
	// MPropertyFriendlyName "falloff zero percent"
	// MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
	CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x10e8	
	// MPropertyFriendlyName "render diffuse"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderDiffuse; // 0x1248	
	// MPropertyFriendlyName "render specular"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	bool m_bRenderSpecular; // 0x1249	
private:
	[[maybe_unused]] uint8_t __pad124a[0x6]; // 0x124a
public:
	// MPropertyFriendlyName "light cookie string"
	CUtlString m_lightCookie; // 0x1250	
	// MPropertyFriendlyName "light priority"
	int32_t m_nPriority; // 0x1258	
	// MPropertyFriendlyName "fog lighting mode"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x125c	
	// MPropertyFriendlyName "fog contribution"
	// MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
	CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1260	
	// MPropertyFriendlyName "capsule behavior"
	ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x13c0	
	// MPropertyStartGroup "Capsule Light Controls"
	// MPropertyFriendlyName "capsule length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	float m_flCapsuleLength; // 0x13c4	
	// MPropertyFriendlyName "reverse point order"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bReverseOrder; // 0x13c8	
	// MPropertyFriendlyName "Closed loop"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
	bool m_bClosedLoop; // 0x13c9	
private:
	[[maybe_unused]] uint8_t __pad13ca[0x2]; // 0x13ca
public:
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x13cc	
	// MPropertyFriendlyName "max length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMaxLength; // 0x13d0	
	// MPropertyFriendlyName "min length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flMinLength; // 0x13d4	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	bool m_bIgnoreDT; // 0x13d8	
private:
	[[maybe_unused]] uint8_t __pad13d9[0x3]; // 0x13d9
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flConstrainRadiusToLengthRatio; // 0x13dc	
	// MPropertyFriendlyName "amount to scale trail length by"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthScale; // 0x13e0	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	// MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
	float m_flLengthFadeInTime; // 0x13e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceToTransform : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x328	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x488	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5e8	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformStart; // 0x748	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x7b0	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x7b1	
private:
	[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x834	
	// MPropertyFriendlyName "maximum trace length"
	float m_flMaxTraceLength; // 0x838	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x83c	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x840	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x844	
	// MPropertyFriendlyName "output is additive"
	bool m_bAdditive; // 0x845	
private:
	[[maybe_unused]] uint8_t __pad0846[0x2]; // 0x846
public:
	// MPropertyFriendlyName "component scale"
	CPerParticleVecInput m_vecComponentScale; // 0x848	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapControlPointOrientationToRotation : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c0	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "offset rotation"
	float m_flOffsetRot; // 0x1c8	
	// MPropertyFriendlyName "control point axis"
	// MPropertyAttributeChoiceName "vector_component"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	int32_t m_nComponent; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToCenter : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point number to set"
	int32_t m_nCP1; // 0x1c8	
	// MPropertyFriendlyName "center offset"
	// MVectorIsCoordinate
	Vector m_vecCP1Pos; // 0x1cc	
	// MPropertyFriendlyName "use average particle position"
	// MVectorIsCoordinate
	bool m_bUseAvgParticlePos; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
public:
	// MPropertyFriendlyName "set parent"
	ParticleParentSetMode_t m_nSetParent; // 0x1dc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapAverageScalarValuetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutVectorField; // 0x1cc	
	// MPropertyFriendlyName "scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "input volume minimum"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input volume maximum"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "first input control point"
	int32_t m_nInputCP1; // 0x1c0	
	// MPropertyFriendlyName "second input control point"
	int32_t m_nInputCP2; // 0x1c4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
	// MPropertyFriendlyName "input minimum (-1 to 1)"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input maximum (-1 to 1)"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
	// MPropertyFriendlyName "use particle velocity for first input"
	bool m_bUseParticleVelocity; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
	// MPropertyFriendlyName "only active within specified input range"
	bool m_bActiveRange; // 0x1e4	
	// MPropertyFriendlyName "use particle normal for first input"
	bool m_bUseParticleNormal; // 0x1e5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapCPtoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "input control point number"
	int32_t m_nInputControlPoint; // 0x1c8	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputControlPoint; // 0x1cc	
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nInputField; // 0x1d0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nOutputField; // 0x1d4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1dc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1e0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e4	
	// MPropertyFriendlyName "use the derivative"
	bool m_bDerivative; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "interpolation"
	float m_flInterpRate; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointRotation : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "rotation axis"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecRotAxis; // 0x1c8	
	// MPropertyFriendlyName "rotation rate"
	CParticleCollectionFloatInput m_flRotRate; // 0x840	
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x9a0	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalCP; // 0x9a4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e78
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CurlNoiseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise type"
	ParticleDirectionNoiseType_t m_nNoiseType; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "noise frequency"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseFreq; // 0x1d8	
	// MPropertyFriendlyName "noise amplitude"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecNoiseScale; // 0x850	
	// MPropertyFriendlyName "offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffset; // 0xec8	
	// MPropertyFriendlyName "offset rate"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetRate; // 0x1540	
	// MPropertyFriendlyName "worley seed"
	CPerParticleFloatInput m_flWorleySeed; // 0x1bb8	
	// MPropertyFriendlyName "worley jitter"
	CPerParticleFloatInput m_flWorleyJitter; // 0x1d18	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_Orient2DRelToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1c8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetSimulationRate : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "simulation timescale"
	CParticleCollectionFloatInput m_flSimulationScale; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_FadeIn : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "fade in time min"
	float m_flFadeInTimeMin; // 0x1c0	
	// MPropertyFriendlyName "fade in time max"
	float m_flFadeInTimeMax; // 0x1c4	
	// MPropertyFriendlyName "fade in time exponent"
	float m_flFadeInTimeExp; // 0x1c8	
	// MPropertyFriendlyName "proportional 0/1"
	bool m_bProportional; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderScreenShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "duration scale"
	float m_flDurationScale; // 0x210	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x214	
	// MPropertyFriendlyName "frequence scale"
	float m_flFrequencyScale; // 0x218	
	// MPropertyFriendlyName "amplitude scale"
	float m_flAmplitudeScale; // 0x21c	
	// MPropertyFriendlyName "radius field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusField; // 0x220	
	// MPropertyFriendlyName "duration field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDurationField; // 0x224	
	// MPropertyFriendlyName "frequency field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFrequencyField; // 0x228	
	// MPropertyFriendlyName "amplitude field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nAmplitudeField; // 0x22c	
	// MPropertyFriendlyName "control point of shake recipient (-1 = global)"
	int32_t m_nFilterCP; // 0x230	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapBoundingVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	float m_flInputMin; // 0x1cc	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	float m_flInputMax; // 0x1d0	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d4	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "Target color control point number"
	int32_t m_nColorCP; // 0x1c8	
	// MPropertyFriendlyName "Color Gem Enable control point number"
	int32_t m_nColorGemEnableCP; // 0x1cc	
	// MPropertyFriendlyName "output control point number"
	int32_t m_nOutputCP; // 0x1d0	
	// MPropertyFriendlyName "Default HSV Color"
	Color m_DefaultHSVColor; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_GlobalScale : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale amount"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "scale radius"
	bool m_bScaleRadius; // 0x1d4	
	// MPropertyFriendlyName "scale position"
	bool m_bScalePosition; // 0x1d5	
	// MPropertyFriendlyName "scale velocity"
	bool m_bScaleVelocity; // 0x1d6	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RadiusFromCPObject : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x258
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialVelocityFromHitbox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity minimum"
	float m_flVelocityMin; // 0x1c8	
	// MPropertyFriendlyName "velocity maximum"
	float m_flVelocityMax; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1d4	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x254	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutput; // 0x1c4	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1d0	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1d4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointFieldToWater : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "source CP"
	int32_t m_nSourceCP; // 0x1c8	
	// MPropertyFriendlyName "dest CP"
	int32_t m_nDestCP; // 0x1cc	
	// MPropertyFriendlyName "dest control point component"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb58
// 
// MGetKV3ClassDefaults
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyFriendlyName "Author Texture As Gradient"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	bool m_bReplaceTextureWithGradient; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
public:
	// MPropertyFriendlyName "Texture"
	// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8	
	// MPropertyFriendlyName "Gradient"
	// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
	CColorGradient m_Gradient; // 0x10	
	// MPropertyFriendlyName "Texture Type"
	SpriteCardTextureType_t m_nTextureType; // 0x28	
	// MPropertyFriendlyName "Channel Mix"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c	
	// MPropertyFriendlyName "Mix Blend Mode"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Blend Amount"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E )"
	TextureControls_t m_TextureControls; // 0x198	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TimeVaryingForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "time to start transition"
	float m_flStartLerpTime; // 0x1d0	
	// MPropertyFriendlyName "starting force"
	// MVectorIsCoordinate
	Vector m_StartingForce; // 0x1d4	
	// MPropertyFriendlyName "time to end transition"
	float m_flEndLerpTime; // 0x1e0	
	// MPropertyFriendlyName "ending force"
	// MVectorIsCoordinate
	Vector m_EndingForce; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x270
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetCPOrientationToGroundNormal : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "interpolation rate"
	float m_flInterpRate; // 0x1c0	
	// MPropertyFriendlyName "max trace length"
	float m_flMaxTraceLength; // 0x1c4	
	// MPropertyFriendlyName "CP movement tolerance"
	float m_flTolerance; // 0x1c8	
	// MPropertyFriendlyName "trace offset"
	float m_flTraceOffset; // 0x1cc	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1d0	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x250	
	// MPropertyFriendlyName "CP to trace from"
	int32_t m_nInputCP; // 0x254	
	// MPropertyFriendlyName "CP to set"
	int32_t m_nOutputCP; // 0x258	
private:
	[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
public:
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x268	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1c0	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1c8	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1cc	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x1d0	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1b40
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateWithinSphereTransform : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "distance min"
	CPerParticleFloatInput m_fRadiusMin; // 0x1c8	
	// MPropertyFriendlyName "distance max"
	CPerParticleFloatInput m_fRadiusMax; // 0x328	
	// MPropertyFriendlyName "distance bias"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecDistanceBias; // 0x488	
	// MPropertyFriendlyName "distance bias absolute value"
	// MVectorIsCoordinate
	Vector m_vecDistanceBiasAbs; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	// MPropertyFriendlyName "input position transform"
	CParticleTransformInput m_TransformInput; // 0xb10	
	// MPropertyFriendlyName "speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0xb78	
	// MPropertyFriendlyName "speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0xcd8	
	// MPropertyFriendlyName "speed random exponent"
	float m_fSpeedRandExp; // 0xe38	
	// MPropertyFriendlyName "bias in local system"
	bool m_bLocalCoords; // 0xe3c	
private:
	[[maybe_unused]] uint8_t __pad0e3d[0x3]; // 0xe3d
public:
	// MPropertyFriendlyName "randomly distribution growth time"
	float m_flEndCPGrowthTime; // 0xe40	
private:
	[[maybe_unused]] uint8_t __pad0e44[0x4]; // 0xe44
public:
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xe48	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x14c0	
	// MPropertyFriendlyName "Output vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b38	
	// MPropertyFriendlyName "Velocity vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldVelocity; // 0x1b3c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RadiusDecay : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "minimum radius"
	float m_flMinRadius; // 0x1c0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapNamedModelBodyPartToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapScalarToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d4	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1d8	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1e4	
	// MPropertyFriendlyName "emitter lifetime start time (seconds)"
	float m_flStartTime; // 0x1f0	
	// MPropertyFriendlyName "emitter lifetime end time (seconds)"
	float m_flEndTime; // 0x1f4	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1f8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1fc	
	// MPropertyFriendlyName "use local system"
	bool m_bLocalCoords; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0201[0x3]; // 0x201
public:
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x204	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialSequenceFromModel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "current anim time output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1d0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1e0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_NoiseEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	float m_flEmissionDuration; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x1cc	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion "1"
	float m_flEmissionScale; // 0x1d0	
	// MPropertyFriendlyName "emission count scale control point"
	int32_t m_nScaleControlPoint; // 0x1d4	
	// MPropertyFriendlyName "emission count scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleControlPointField; // 0x1d8	
	// MPropertyFriendlyName "world noise scale control point"
	int32_t m_nWorldNoisePoint; // 0x1dc	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1e0	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1e4	
	// MPropertyFriendlyName "emission minimum"
	float m_flOutputMin; // 0x1e8	
	// MPropertyFriendlyName "emission maximum"
	float m_flOutputMax; // 0x1ec	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1f0	
	// MPropertyFriendlyName "world spatial noise coordinate scale"
	float m_flWorldNoiseScale; // 0x1f4	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1f8	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x204	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_StatusEffectCitadel : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "$SFXColorWarpAmount"
	float m_flSFXColorWarpAmount; // 0x1c8	
	// MPropertyFriendlyName "$SFXNormalAmount"
	float m_flSFXNormalAmount; // 0x1cc	
	// MPropertyFriendlyName "$SFXMetalnessAmount"
	float m_flSFXMetalnessAmount; // 0x1d0	
	// MPropertyFriendlyName "$SFXRoughnessAmount"
	float m_flSFXRoughnessAmount; // 0x1d4	
	// MPropertyFriendlyName "$SFXSelfIllumAmount"
	float m_flSFXSelfIllumAmount; // 0x1d8	
	// MPropertyFriendlyName "$SFXTextureScale"
	float m_flSFXSScale; // 0x1dc	
	// MPropertyFriendlyName "$SFXTextureScrollX"
	float m_flSFXSScrollX; // 0x1e0	
	// MPropertyFriendlyName "$SFXTextureScrollY"
	float m_flSFXSScrollY; // 0x1e4	
	// MPropertyFriendlyName "$SFXTextureScrollZ"
	float m_flSFXSScrollZ; // 0x1e8	
	// MPropertyFriendlyName "$SFXTextureOffsetX"
	float m_flSFXSOffsetX; // 0x1ec	
	// MPropertyFriendlyName "$SFXTextureOffsetY"
	float m_flSFXSOffsetY; // 0x1f0	
	// MPropertyFriendlyName "$SFXTextureOffsetZ"
	float m_flSFXSOffsetZ; // 0x1f4	
	// MPropertyFriendlyName "D_DETAIL"
	DetailCombo_t m_nDetailCombo; // 0x1f8	
	// MPropertyFriendlyName "$SFXDetailAmount"
	float m_flSFXSDetailAmount; // 0x1fc	
	// MPropertyFriendlyName "$SFXDetailTextureScale"
	float m_flSFXSDetailScale; // 0x200	
	// MPropertyFriendlyName "$SFXDetailTextureScrollX"
	float m_flSFXSDetailScrollX; // 0x204	
	// MPropertyFriendlyName "$SFXDetailTextureScrollY"
	float m_flSFXSDetailScrollY; // 0x208	
	// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
	float m_flSFXSDetailScrollZ; // 0x20c	
	// MPropertyFriendlyName "$SFXUseModelUVs"
	float m_flSFXSUseModelUVs; // 0x210	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SelectivelyEnableChildren : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	CParticleCollectionFloatInput m_nChildGroupID; // 0x1c8	
	// MPropertyFriendlyName "first child to enable"
	CParticleCollectionFloatInput m_nFirstChild; // 0x328	
	// MPropertyFriendlyName "# of children to enable"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x488	
	// MPropertyFriendlyName "play endcap when children are removed"
	bool m_bPlayEndcapOnStop; // 0x5e8	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	bool m_bDestroyImmediately; // 0x5e9	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct ModelReference_t
{
public:
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_model; // 0x0	
	// MPropertyFriendlyName "Relative probability"
	float m_flRelativeProbabilityOfSpawn; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PlanarConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "plane point"
	// MVectorIsCoordinate
	Vector m_PointOnPlane; // 0x1c0	
	// MPropertyFriendlyName "plane normal"
	Vector m_PlaneNormal; // 0x1cc	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1d8	
	// MPropertyFriendlyName "global origin"
	bool m_bGlobalOrigin; // 0x1dc	
	// MPropertyFriendlyName "global normal"
	bool m_bGlobalNormal; // 0x1dd	
private:
	[[maybe_unused]] uint8_t __pad01de[0x2]; // 0x1de
public:
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1e0	
	// MPropertyFriendlyName "falloff distance from control point"
	CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x340	
	// MPropertyFriendlyName "use old code"
	bool m_bUseOldCode; // 0x4a0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x1c8	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x1cc	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion "2"
	int32_t m_nMaxCP; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LockPoints : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "min column/particle index to affect"
	int32_t m_nMinCol; // 0x1c0	
	// MPropertyFriendlyName "max column/particle index to affect"
	int32_t m_nMaxCol; // 0x1c4	
	// MPropertyFriendlyName "min row/particle index to affect"
	int32_t m_nMinRow; // 0x1c8	
	// MPropertyFriendlyName "max row/particle index to affect"
	int32_t m_nMaxRow; // 0x1cc	
	// MPropertyFriendlyName "control point to lock to"
	int32_t m_nControlPoint; // 0x1d0	
	// MPropertyFriendlyName "amount of current position to preserve"
	float m_flBlendValue; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
	int32_t m_nOverrideCP; // 0x1cc	
	// MPropertyFriendlyName "density"
	int32_t m_nDensity; // 0x1d0	
	// MPropertyFriendlyName "initial radius"
	float m_flInitialRadius; // 0x1d4	
	// MPropertyFriendlyName "min initial speed"
	float m_flInitialSpeedMin; // 0x1d8	
	// MPropertyFriendlyName "max initial speed"
	float m_flInitialSpeedMax; // 0x1dc	
	// MPropertyFriendlyName "use particle count as density scale"
	bool m_bUseParticleCount; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CPVelocityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPointNumber; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
public:
	// MPropertyFriendlyName "velocity scale"
	CPerParticleFloatInput m_flScale; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapNamedModelMeshGroupEndCap : public C_OP_RemapNamedModelElementEndCap
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x480
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MoveToHitbox : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "model input"
	CParticleModelInput m_modelInput; // 0x1c0	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_transformInput; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0288[0x4]; // 0x288
public:
	// MPropertyFriendlyName "lifetime lerp start"
	float m_flLifeTimeLerpStart; // 0x28c	
	// MPropertyFriendlyName "lifetime lerp end"
	float m_flLifeTimeLerpEnd; // 0x290	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x294	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x298	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x318	
private:
	[[maybe_unused]] uint8_t __pad0319[0x3]; // 0x319
public:
	// MPropertyFriendlyName "lerp type"
	HitboxLerpType_t m_nLerpType; // 0x31c	
	// MPropertyFriendlyName "Constant Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x320	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1190
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1d0	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x330	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x490	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xb08	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0x1180	
private:
	[[maybe_unused]] uint8_t __pad1181[0x3]; // 0x1181
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1184	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PointList : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "point list"
	CUtlVector< PointDefinition_t > m_pointList; // 0x1d0	
	// MPropertyFriendlyName "space points along path"
	bool m_bPlaceAlongPath; // 0x1e8	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bClosedLoop; // 0x1e9	
private:
	[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
public:
	// MPropertyFriendlyName "Numer of points along path"
	int32_t m_nNumPointsAlongPath; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c0	
	// MPropertyFriendlyName "input attribute from"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInputFrom; // 0x320	
	// MPropertyFriendlyName "input attribute to"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldInput; // 0x324	
	// MPropertyFriendlyName "output attribute"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomColor : public CParticleFunctionInitializer
{
private:
	[[maybe_unused]] uint8_t __pad01c8[0x1c]; // 0x1c8
public:
	// MPropertyFriendlyName "color1"
	Color m_ColorMin; // 0x1e4	
	// MPropertyFriendlyName "color2"
	Color m_ColorMax; // 0x1e8	
	// MPropertyFriendlyName "tint clamp min"
	Color m_TintMin; // 0x1ec	
	// MPropertyFriendlyName "tint clamp max"
	Color m_TintMax; // 0x1f0	
	// MPropertyFriendlyName "tint perc"
	float m_flTintPerc; // 0x1f4	
	// MPropertyFriendlyName "tint update movement threshold"
	float m_flUpdateThreshold; // 0x1f8	
	// MPropertyFriendlyName "tint control point"
	int32_t m_nTintCP; // 0x1fc	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x200	
	// MPropertyFriendlyName "tint blend mode"
	ParticleColorBlendMode_t m_nTintBlendMode; // 0x204	
	// MPropertyFriendlyName "light amplification amount"
	float m_flLightAmplification; // 0x208	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetGravityToCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to sample gravity"
	int32_t m_nCPInput; // 0x1c8	
	// MPropertyFriendlyName "output control point"
	int32_t m_nCPOutput; // 0x1cc	
	// MPropertyFriendlyName "gravity scale"
	CParticleCollectionFloatInput m_flScale; // 0x1d0	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x330	
	// MPropertyFriendlyName "set gravity orientation to Z Down (instead of X)"
	// MPropertySuppressExpr "!m_bSetOrientation"
	bool m_bSetZDown; // 0x331	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToNamedModelSequenceScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InheritFromParentParticles : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1c8	
	// MPropertyFriendlyName "inherited field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc	
	// MPropertyFriendlyName "particle increment amount"
	int32_t m_nIncrement; // 0x1d0	
	// MPropertyFriendlyName "random parent particle distribution"
	bool m_bRandomDistribution; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
public:
	// MPropertyFriendlyName "random seed"
	int32_t m_nRandomSeed; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarLinearSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "start time"
	float m_flStartTime; // 0x1c4	
	// MPropertyFriendlyName "end time"
	float m_flEndTime; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_ChaoticAttractor : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "pickover A parameter"
	float m_flAParm; // 0x1c8	
	// MPropertyFriendlyName "pickover B parameter"
	float m_flBParm; // 0x1cc	
	// MPropertyFriendlyName "pickover C parameter"
	float m_flCParm; // 0x1d0	
	// MPropertyFriendlyName "pickover D parameter"
	float m_flDParm; // 0x1d4	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0x1d8	
	// MPropertyFriendlyName "speed min"
	float m_flSpeedMin; // 0x1dc	
	// MPropertyFriendlyName "speed max"
	float m_flSpeedMax; // 0x1e0	
	// MPropertyFriendlyName "relative control point number"
	int32_t m_nBaseCP; // 0x1e4	
	// MPropertyFriendlyName "uniform speed"
	bool m_bUniformSpeed; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementRigidAttachToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "scale control point number"
	int32_t m_nScaleControlPoint; // 0x1c4	
	// MPropertyFriendlyName "scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nScaleCPField; // 0x1c8	
	// MPropertyFriendlyName "cache attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1cc	
	// MPropertyFriendlyName "attribute to write to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0	
	// MPropertyFriendlyName "local space"
	bool m_bOffsetLocal; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderFlattenGrass : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "flattening strength"
	float m_flFlattenStrength; // 0x210	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nStrengthFieldOverride; // 0x214	
	// MPropertyFriendlyName "radius scale"
	float m_flRadiusScale; // 0x218	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderLightBeam : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x210	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x888	
private:
	[[maybe_unused]] uint8_t __pad088c[0x4]; // 0x88c
public:
	// MPropertyFriendlyName "Lumens Per Meter"
	CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x890	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f1[0x7]; // 0x9f1
public:
	// MPropertyFriendlyName "Skirt"
	CParticleCollectionFloatInput m_flSkirt; // 0x9f8	
	// MPropertyFriendlyName "Range"
	CParticleCollectionFloatInput m_flRange; // 0xb58	
	// MPropertyFriendlyName "Thickness"
	CParticleCollectionFloatInput m_flThickness; // 0xcb8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_EnableChildrenFromParentParticleCount : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c8	
	// MPropertyFriendlyName "first child to enable"
	int32_t m_nFirstChild; // 0x1cc	
	// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
	CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1d0	
	// MPropertyFriendlyName "remove children when particle count lowers"
	bool m_bDisableChildren; // 0x330	
	// MPropertyFriendlyName "play endcap when children are removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bPlayEndcapOnStop; // 0x331	
	// MPropertyFriendlyName "destroy particles immediately when child is removed"
	// MPropertySuppressExpr "!m_bDisableChildren"
	bool m_bDestroyImmediately; // 0x332	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceToCPInit : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "distance minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1d0	
	// MPropertyFriendlyName "distance maximum"
	CPerParticleFloatInput m_flInputMax; // 0x330	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x490	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5f0	
	// MPropertyFriendlyName "control point"
	int32_t m_nStartCP; // 0x750	
	// MPropertyFriendlyName "ensure line of sight"
	bool m_bLOS; // 0x754	
	// MPropertyFriendlyName "LOS collision group"
	char m_CollisionGroupName[128]; // 0x755	
private:
	[[maybe_unused]] uint8_t __pad07d5[0x3]; // 0x7d5
public:
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	// MPropertyFriendlyName "Maximum Trace Length"
	CPerParticleFloatInput m_flMaxTraceLength; // 0x7e0	
	// MPropertyFriendlyName "LOS Failure Scalar"
	float m_flLOSScale; // 0x940	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x944	
	// MPropertyFriendlyName "only active within specified distance"
	bool m_bActiveRange; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
public:
	// MPropertyFriendlyName "distance component scale"
	Vector m_vecDistanceScale; // 0x94c	
	// MPropertyFriendlyName "remap bias"
	float m_flRemapBias; // 0x958	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1118
// 
// MGetKV3ClassDefaults
class CReplicationParameters
{
public:
	// MPropertyFriendlyName "Replication mode"
	ParticleReplicationMode_t m_nReplicationMode; // 0x0	
	// MPropertyFriendlyName "Scale child particle radius based on parent radius"
	bool m_bScaleChildParticleRadii; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
public:
	// MPropertyFriendlyName "Minimum random scale for radius"
	CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8	
	// MPropertyFriendlyName "Maximum random scale for radius"
	CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x168	
	// MPropertyFriendlyName "min random displacement for child particles"
	CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2c8	
	// MPropertyFriendlyName "max random displacement for child particles"
	CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x940	
	// MPropertyFriendlyName "Modelling scale"
	CParticleCollectionFloatInput m_flModellingScale; // 0xfb8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_EndCapDecay : public CParticleFunctionOperator
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x1d0	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x1d4	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x1e0	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x1e4	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x1f0	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1fc	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x200	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapDensityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1c0	
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "Density value to map to min value"
	float m_flDensityMin; // 0x1c8	
	// MPropertyFriendlyName "Density value to map to max value"
	float m_flDensityMax; // 0x1cc	
	// MPropertyFriendlyName "Output minimum"
	Vector m_vecOutputMin; // 0x1d0	
	// MPropertyFriendlyName "Output maximum"
	Vector m_vecOutputMax; // 0x1dc	
	// MPropertyFriendlyName "Use parent density instead of ours"
	bool m_bUseParentDensity; // 0x1e8	
private:
	[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
public:
	// MPropertyFriendlyName "Resolution to use for creating a voxel grid"
	int32_t m_nVoxelGridResolution; // 0x1ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
struct ParticleControlPointConfiguration_t
{
public:
	CUtlString m_name; // 0x0	
	CUtlVector< ParticleControlPointDriver_t > m_drivers; // 0x8	
	ParticlePreviewState_t m_previewState; // 0x20	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetRigidAttachment : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "attribute to read from"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1cc	
	// MPropertyFriendlyName "attribute to cache to"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0	
	// MPropertyFriendlyName "local space"
	bool m_bLocalSpace; // 0x1d4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// 
// MGetKV3ClassDefaults
struct MaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "particle field"
	// MPropertyAttributeChoiceName "particlefield"
	ParticleAttributeIndex_t m_nVariableField; // 0x8	
	// MPropertyFriendlyName "scale"
	float m_flScale; // 0xc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x498
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistance : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	CParticleCollectionFloatInput m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	CParticleCollectionFloatInput m_fMaxDistance; // 0x320	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x480	
	// MPropertyFriendlyName "offset of center"
	// MVectorIsCoordinate
	Vector m_CenterOffset; // 0x484	
	// MPropertyFriendlyName "global center point"
	bool m_bGlobalCenter; // 0x490	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSpeed : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1d4	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x1d8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x29b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderModels : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Only Render in effects bloom pass"
	// MPropertySortPriority "1100"
	bool m_bOnlyRenderInEffectsBloomPass; // 0x210	
	// MPropertyFriendlyName "Only Render in effects water pass"
	// MPropertySortPriority "1050"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffectsWaterPass; // 0x211	
	// MPropertyFriendlyName "Use Mixed Resolution Rendering"
	// MPropertySortPriority "1200"
	bool m_bUseMixedResolutionRendering; // 0x212	
	// MPropertyFriendlyName "Only Render in effects game overlay pass"
	// MPropertySortPriority "1210"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bOnlyRenderInEffecsGameOverlay; // 0x213	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "models"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "775"
	CUtlVector< ModelReference_t > m_ModelList; // 0x218	
	// MPropertyFriendlyName "bodygroup field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nBodyGroupField; // 0x230	
	// MPropertyFriendlyName "submodel field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nSubModelField; // 0x234	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "ignore normal"
	// MPropertySortPriority "750"
	bool m_bIgnoreNormal; // 0x238	
	// MPropertyFriendlyName "orient model z to normal"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_bIgnoreNormal"
	bool m_bOrientZ; // 0x239	
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x23a	
private:
	[[maybe_unused]] uint8_t __pad023b[0x5]; // 0x23b
public:
	// MPropertyFriendlyName "model local offset"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalOffset; // 0x240	
	// MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
	// MPropertySortPriority "750"
	CPerParticleVecInput m_vecLocalRotation; // 0x8b8	
	// MPropertyStartGroup "Model Scale"
	// MPropertyFriendlyName "ignore radius"
	// MPropertySortPriority "700"
	bool m_bIgnoreRadius; // 0xf30	
private:
	[[maybe_unused]] uint8_t __pad0f31[0x3]; // 0xf31
public:
	// MPropertyFriendlyName "model scale CP"
	// MPropertySortPriority "700"
	int32_t m_nModelScaleCP; // 0xf34	
	// MPropertyFriendlyName "model component scale"
	// MPropertySortPriority "700"
	CPerParticleVecInput m_vecComponentScale; // 0xf38	
	// MPropertyFriendlyName "apply scales in local model space"
	// MPropertySortPriority "700"
	bool m_bLocalScale; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15b1[0x3]; // 0x15b1
public:
	// MPropertyFriendlyName "model size cull bloat"
	// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
	int32_t m_nSizeCullBloat; // 0x15b4	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animated"
	// MPropertySortPriority "500"
	bool m_bAnimated; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15b9[0x7]; // 0x15b9
public:
	// MPropertyFriendlyName "animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	CPerParticleFloatInput m_flAnimationRate; // 0x15c0	
	// MPropertyFriendlyName "scale animation rate"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bScaleAnimationRate; // 0x1720	
	// MPropertyFriendlyName "force looping animations"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bForceLoopingAnimation; // 0x1721	
	// MPropertyFriendlyName "reset animation frame on stop"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bResetAnimOnStop; // 0x1722	
	// MPropertyFriendlyName "set animation frame manually"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!m_bAnimated"
	bool m_bManualAnimFrame; // 0x1723	
	// MPropertyFriendlyName "animation rate scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bScaleAnimationRate)"
	ParticleAttributeIndex_t m_nAnimationScaleField; // 0x1724	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "animation sequence field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	ParticleAttributeIndex_t m_nAnimationField; // 0x1728	
	// MPropertyFriendlyName "manual animation frame field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "500"
	// MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
	ParticleAttributeIndex_t m_nManualFrameField; // 0x172c	
	// MPropertyFriendlyName "activity override"
	// MPropertySuppressExpr "mod != dota"
	// MPropertySortPriority "500"
	char m_ActivityName[256]; // 0x1730	
	// MPropertyFriendlyName "sequence override"
	// MPropertySuppressExpr "mod == dota"
	// MPropertySortPriority "500"
	char m_SequenceName[256]; // 0x1830	
	// MPropertyFriendlyName "Enable Cloth Simulation"
	bool m_bEnableClothSimulation; // 0x1930	
	// MPropertyFriendlyName "With Cloth Effect"
	// MPropertySortPriority "500"
	char m_ClothEffectName[64]; // 0x1931	
private:
	[[maybe_unused]] uint8_t __pad1971[0x7]; // 0x1971
public:
	// MPropertyStartGroup "Material"
	// MPropertyFriendlyName "material override"
	// MPropertySortPriority "600"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x1978	
	// MPropertyFriendlyName "override translucent materials"
	// MPropertySortPriority "600"
	bool m_bOverrideTranslucentMaterials; // 0x1980	
private:
	[[maybe_unused]] uint8_t __pad1981[0x7]; // 0x1981
public:
	// MPropertyFriendlyName "skin number"
	// MPropertySortPriority "600"
	CPerParticleFloatInput m_nSkin; // 0x1988	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x1ae8	
	// MPropertyStartGroup "Model Overrides"
	// MPropertyFriendlyName "model list selection override"
	CPerParticleFloatInput m_flManualModelSelection; // 0x1b00	
	// MPropertyFriendlyName "input model"
	// MParticleInputOptional
	CParticleModelInput m_modelInput; // 0x1c60	
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x1cc0	
	// MPropertyFriendlyName "model override economy loadout slot type"
	char m_EconSlotName[256]; // 0x1cc4	
	// MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
	bool m_bOriginalModel; // 0x1dc4	
	// MPropertyFriendlyName "suppress tinting of the model"
	bool m_bSuppressTint; // 0x1dc5	
private:
	[[maybe_unused]] uint8_t __pad1dc6[0x2]; // 0x1dc6
public:
	// MPropertyFriendlyName "SubModel Field Type"
	RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x1dc8	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x1dcc	
	// MPropertyFriendlyName "disable depth prepass"
	bool m_bDisableDepthPrepass; // 0x1dcd	
	// MPropertyFriendlyName "accept decals"
	bool m_bAcceptsDecals; // 0x1dce	
	// MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
	bool m_bForceDrawInterlevedWithSiblings; // 0x1dcf	
	// MPropertyFriendlyName "do not draw in particle pass"
	bool m_bDoNotDrawInParticlePass; // 0x1dd0	
	// MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
	bool m_bAllowApproximateTransforms; // 0x1dd1	
	// MPropertyFriendlyName "render attribute"
	char m_szRenderAttribute[260]; // 0x1dd2	
private:
	[[maybe_unused]] uint8_t __pad1ed6[0x2]; // 0x1ed6
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x1ed8	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x2038	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x2198	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x22f8	
private:
	[[maybe_unused]] uint8_t __pad22fc[0x4]; // 0x22fc
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x2300	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x2978	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_flRadius; // 0x210	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_flMagnitude; // 0x370	
	// MPropertyFriendlyName "filter explosion to single simulation id"
	int32_t m_nSimIdFilter; // 0x4d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x488	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion "1"
	float m_flEmissionScale; // 0x5e8	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x5ec	
	// MPropertyFriendlyName "emit particles for parent particle events"
	bool m_bInitFromKilledParentParticles; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
public:
	// MPropertyFriendlyName "emission parent particle event type"
	// MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
	EventTypeSelection_t m_nEventType; // 0x5f4	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5f8	
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5fc	
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x600	
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x601	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapNamedModelMeshGroupToScalar : public C_INIT_RemapNamedModelElementToScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointOrientationToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input for velocity"
	int32_t m_nCPInput; // 0x1c8	
	// MPropertyFriendlyName "control point output for orientation"
	int32_t m_nCPOutput; // 0x1cc	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x748
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "slack"
	CParticleCollectionFloatInput m_flRestLength; // 0x1c0	
	// MPropertyFriendlyName "minimum segment length %"
	CParticleCollectionFloatInput m_flMinDistance; // 0x320	
	// MPropertyFriendlyName "maximum segment length %"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x480	
	// MPropertyFriendlyName "scale factor for spring correction"
	float m_flAdjustmentScale; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
public:
	// MPropertyFriendlyName "manual resting spacing"
	CParticleCollectionFloatInput m_flInitialRestingLength; // 0x5e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x350
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionWarpScalar : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "warp min"
	// MVectorIsCoordinate
	Vector m_vecWarpMin; // 0x1c8	
	// MPropertyFriendlyName "warp max"
	// MVectorIsCoordinate
	Vector m_vecWarpMax; // 0x1d4	
	// MPropertyFriendlyName "warp amount"
	CPerParticleFloatInput m_InputValue; // 0x1e0	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x340	
	// MPropertyFriendlyName "warp scale control point number"
	int32_t m_nScaleControlPointNumber; // 0x344	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x348	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ForceControlPointStub : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_ControlPoint; // 0x1c8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1c4	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1d0	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1dc	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1e0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
class IParticleCollection
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x750
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x328	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x488	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5e8	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x748	
private:
	[[maybe_unused]] uint8_t __pad0749[0x3]; // 0x749
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x74c	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_QuantizeFloat : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "interval to snap to"
	CPerParticleFloatInput m_InputValue; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x328	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output BBox Type"
	BBoxVolumeType_t m_nBBoxType; // 0x1c8	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1cc	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1d0	
	// MPropertyFriendlyName "output max control point"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
	int32_t m_nOutControlPointMaxNumber; // 0x1d4	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	int32_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMin; // 0x1dc	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMax; // 0x1e0	
	// MPropertyFriendlyName "output minimum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMin; // 0x1e4	
	// MPropertyFriendlyName "output maximum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMax; // 0x1e8	
	// MPropertyFriendlyName "check full bbox only"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	bool m_bBBoxOnly; // 0x1ec	
	// MPropertyFriendlyName "cube root of volume"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	bool m_bCubeRoot; // 0x1ed	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetToCP : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "offset"
	Vector m_vecOffset; // 0x1c4	
	// MPropertyFriendlyName "offset in local space"
	bool m_bOffsetLocal; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct ParticleControlPointDriver_t
{
public:
	int32_t m_iControlPoint; // 0x0	
	ParticleAttachment_t m_iAttachType; // 0x4	
	CUtlString m_attachmentName; // 0x8	
	Vector m_vecOffset; // 0x10	
	QAngle m_angOffset; // 0x1c	
	CUtlString m_entityName; // 0x28	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ParentVortices : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "amount of force"
	float m_flForceScale; // 0x1d0	
	// MPropertyFriendlyName "twist axis"
	// MVectorIsCoordinate
	Vector m_vecTwistAxis; // 0x1d4	
	// MPropertyFriendlyName "flip twist axis with yaw"
	bool m_bFlipBasedOnYaw; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToCPVelocity : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point input"
	int32_t m_nCPInput; // 0x1c8	
	// MPropertyFriendlyName "control point number to set velocity"
	int32_t m_nCPOutputVel; // 0x1cc	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
public:
	// MPropertyFriendlyName "control point number to set magnitude"
	int32_t m_nCPOutputMag; // 0x1d4	
	// MPropertyFriendlyName "control point field for magnitude"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPField; // 0x1d8	
private:
	[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
public:
	// MPropertyFriendlyName "comparison velocity"
	CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ClientPhysics : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "client physics type"
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
	CUtlString m_strPhysicsType; // 0x210	
	// MPropertyFriendlyName "start all physics asleep"
	bool m_bStartAsleep; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x7]; // 0x219
public:
	// MPropertyFriendlyName "Player Wake Radius"
	CParticleCollectionFloatInput m_flPlayerWakeRadius; // 0x220	
	// MPropertyFriendlyName "Vehicle Wake Radius"
	CParticleCollectionFloatInput m_flVehicleWakeRadius; // 0x380	
	// MPropertyFriendlyName "use high quality simulation"
	bool m_bUseHighQualitySimulation; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	// MPropertyFriendlyName "max particle count"
	int32_t m_nMaxParticleCount; // 0x4e4	
	// MPropertyFriendlyName "prevent spawning in exclusion volumes"
	// MPropertySuppressExpr "m_bKillParticles == true"
	bool m_bRespectExclusionVolumes; // 0x4e8	
	// MPropertyFriendlyName "kill physics particles"
	bool m_bKillParticles; // 0x4e9	
	// MPropertyFriendlyName "delete physics sim when stopped"
	// MPropertySuppressExpr "m_bKillParticles == false"
	bool m_bDeleteSim; // 0x4ea	
private:
	[[maybe_unused]] uint8_t __pad04eb[0x1]; // 0x4eb
public:
	// MPropertyFriendlyName "control point (for finding nearest sim)"
	// MPropertySuppressExpr "m_bKillParticles == true"
	int32_t m_nControlPoint; // 0x4ec	
	// MPropertyFriendlyName "tint blend (color vs prop group gradient)"
	ParticleColorBlendType_t m_nColorBlendType; // 0x4f0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SpinYaw : public CGeneralSpin
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PointDefinitionWithTimeValues_t : public PointDefinition_t
{
public:
	// MPropertyFriendlyName "Duration value for path point"
	float m_flTimeDuration; // 0x14	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8
// 
// MGetKV3ClassDefaults
struct RenderProjectedMaterial_t
{
public:
	// MPropertyFriendlyName "Material"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e80
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ExternalWindForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "sample position"
	CPerParticleVecInput m_vecSamplePosition; // 0x1d0	
	// MPropertyFriendlyName "force scale"
	CPerParticleVecInput m_vecScale; // 0x848	
	// MPropertyFriendlyName "sample wind"
	bool m_bSampleWind; // 0xec0	
	// MPropertyFriendlyName "sample water current"
	bool m_bSampleWater; // 0xec1	
	// MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
	// MPropertySuppressExpr "!m_bSampleWater"
	bool m_bDampenNearWaterPlane; // 0xec2	
	// MPropertyFriendlyName "sample local gravity"
	bool m_bSampleGravity; // 0xec3	
private:
	[[maybe_unused]] uint8_t __pad0ec4[0x4]; // 0xec4
public:
	// MPropertyFriendlyName "gravity force"
	// MPropertySuppressExpr "m_bSampleGravity"
	CPerParticleVecInput m_vecGravityForce; // 0xec8	
	// MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	bool m_bUseBasicMovementGravity; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1541[0x7]; // 0x1541
public:
	// MPropertyFriendlyName "local gravity scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalGravityScale; // 0x1548	
	// MPropertyFriendlyName "local gravity buoyancy scale"
	// MPropertySuppressExpr "!m_bSampleGravity"
	CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x16a8	
	// MPropertyFriendlyName "buoyancy force"
	// MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
	CPerParticleVecInput m_vecBuoyancyForce; // 0x1808	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x250
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_ModelCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "use only bounding box"
	bool m_bBoundBox; // 0x1cc	
	// MPropertyFriendlyName "cull outside instead of inside"
	bool m_bCullOutside; // 0x1cd	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x1ce	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x1cf	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4458
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x27e8	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2948	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x294c	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x2950	
private:
	[[maybe_unused]] uint8_t __pad2951[0x7]; // 0x2951
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flMinSize; // 0x2958	
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flMaxSize; // 0x2ab8	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x2c18	
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2d78	
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2ed8	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x3038	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x303c	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x3040	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x3041	
private:
	[[maybe_unused]] uint8_t __pad3042[0x2]; // 0x3042
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x3044	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x3048	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x304c	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x304d	
private:
	[[maybe_unused]] uint8_t __pad3051[0x3]; // 0x3051
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x3054	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x3058	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x305c	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x3060	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x3064	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x3068	
private:
	[[maybe_unused]] uint8_t __pad306c[0x4]; // 0x306c
public:
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3070	
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x31d0	
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bParticleShadows; // 0x3330	
private:
	[[maybe_unused]] uint8_t __pad3331[0x3]; // 0x3331
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x3334	
	// MPropertyStartGroup "Replication"
	// MPropertyFriendlyName "Replication settings"
	// -> m_nReplicationMode - 0x3338
	// -> m_bScaleChildParticleRadii - 0x333c
	// -> m_flMinRandomRadiusScale - 0x3340
	// -> m_flMaxRandomRadiusScale - 0x34a0
	// -> m_vMinRandomDisplacement - 0x3600
	// -> m_vMaxRandomDisplacement - 0x3c78
	// -> m_flModellingScale - 0x42f0
	CReplicationParameters m_replicationParameters; // 0x3338	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x2b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PercentageBetweenTransformLerpCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c4	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "strarting transform"
	CParticleTransformInput m_TransformStart; // 0x1d0	
	// MPropertyFriendlyName "end transform"
	CParticleTransformInput m_TransformEnd; // 0x238	
	// MPropertyFriendlyName "output starting control point number"
	int32_t m_nOutputStartCP; // 0x2a0	
	// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
	int32_t m_nOutputStartField; // 0x2a4	
	// MPropertyFriendlyName "output ending control point number"
	int32_t m_nOutputEndCP; // 0x2a8	
	// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
	int32_t m_nOutputEndField; // 0x2ac	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x2b0	
	// MPropertyFriendlyName "only active within input range"
	bool m_bActiveRange; // 0x2b4	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x2b5	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetPerChildControlPoint : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nFirstControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "particle increment amount"
	CParticleCollectionFloatInput m_nParticleIncrement; // 0x1d0	
	// MPropertyFriendlyName "first particle to copy"
	CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x330	
	// MPropertyFriendlyName "set orientation from velocity"
	bool m_bSetOrientation; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad0491[0x3]; // 0x491
public:
	// MPropertyFriendlyName "orientation vector"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOrientationField; // 0x494	
	// MPropertyFriendlyName "set number of children based on particle count"
	bool m_bNumBasedOnParticleCount; // 0x498	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTreeShake : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "peak strength"
	float m_flPeakStrength; // 0x210	
	// MPropertyFriendlyName "peak strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nPeakStrengthFieldOverride; // 0x214	
	// MPropertyFriendlyName "radius"
	float m_flRadius; // 0x218	
	// MPropertyFriendlyName "strength field override"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nRadiusFieldOverride; // 0x21c	
	// MPropertyFriendlyName "shake duration after end"
	float m_flShakeDuration; // 0x220	
	// MPropertyFriendlyName "amount of time taken to smooth between different shake parameters"
	float m_flTransitionTime; // 0x224	
	// MPropertyFriendlyName "Twist amount (-1..1)"
	float m_flTwistAmount; // 0x228	
	// MPropertyFriendlyName "Radial Amount (-1..1)"
	float m_flRadialAmount; // 0x22c	
	// MPropertyFriendlyName "Control Point Orientation Amount (-1..1)"
	float m_flControlPointOrientationAmount; // 0x230	
	// MPropertyFriendlyName "Control Point for Orientation Amount"
	int32_t m_nControlPointForLinearDirection; // 0x234	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_WorldCollideConstraint : public CParticleFunctionConstraint
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetAttributeToScalarExpression : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "expression"
	ScalarExpressionType_t m_nExpression; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "input 1"
	CPerParticleFloatInput m_flInput1; // 0x1c8	
	// MPropertyFriendlyName "input 2"
	CPerParticleFloatInput m_flInput2; // 0x328	
	// MPropertyFriendlyName "output"
	CParticleRemapFloatInput m_flOutputRemap; // 0x488	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x5e8	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x5ec	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CycleScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "destination scalar field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nDestField; // 0x1c0	
	// MPropertyFriendlyName "Value at start of cycle"
	float m_flStartValue; // 0x1c4	
	// MPropertyFriendlyName "Value at end of cycle"
	float m_flEndValue; // 0x1c8	
	// MPropertyFriendlyName "Cycle time"
	float m_flCycleTime; // 0x1cc	
	// MPropertyFriendlyName "Do not repeat cycle"
	bool m_bDoNotRepeatCycle; // 0x1d0	
	// MPropertyFriendlyName "Synchronize particles"
	bool m_bSynchronizeParticles; // 0x1d1	
private:
	[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
public:
	// MPropertyFriendlyName "Scale Start/End Control Point"
	int32_t m_nCPScale; // 0x1d4	
	// MPropertyFriendlyName "start scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMin; // 0x1d8	
	// MPropertyFriendlyName "end scale control point field"
	// MPropertyAttributeChoiceName "vector_component"
	int32_t m_nCPFieldMax; // 0x1dc	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x1e0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb90
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x210	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x214	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x218	
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x230	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x238	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x398	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0xa10	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb70	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x168
// 
// MGetKV3ClassDefaults
struct FloatInputMaterialVariable_t
{
public:
	// MPropertyFriendlyName "material variable"
	CUtlString m_strVariable; // 0x0	
	// MPropertyFriendlyName "input"
	CParticleCollectionFloatInput m_flInput; // 0x8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3d68
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderTrails : public CBaseTrailRenderer
{
public:
	// MPropertyStartGroup "Screenspace Fading and culling"
	// MPropertyFriendlyName "enable fading and clamping"
	// MPropertySortPriority "1000"
	bool m_bEnableFadingAndClamping; // 0x2ac0	
private:
	[[maybe_unused]] uint8_t __pad2ac1[0x3]; // 0x2ac1
public:
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x2ac4	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x2ac8	
	// MPropertyStartGroup "+Trail Length"
	// MPropertyFriendlyName "Anchor point source"
	// MPropertyAttributeChoiceName "particlefield_vector"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nPrevPntSource; // 0x2acc	
	// MPropertyFriendlyName "max length"
	// MPropertySortPriority "800"
	float m_flMaxLength; // 0x2ad0	
	// MPropertyFriendlyName "min length"
	// MPropertySortPriority "800"
	float m_flMinLength; // 0x2ad4	
	// MPropertyFriendlyName "ignore delta time"
	// MPropertySortPriority "800"
	bool m_bIgnoreDT; // 0x2ad8	
private:
	[[maybe_unused]] uint8_t __pad2ad9[0x3]; // 0x2ad9
public:
	// MPropertyFriendlyName "constrain radius to no more than this times the length"
	// MPropertySortPriority "800"
	float m_flConstrainRadiusToLengthRatio; // 0x2adc	
	// MPropertyFriendlyName "amount to scale trail length by"
	float m_flLengthScale; // 0x2ae0	
	// MPropertyFriendlyName "how long before a trail grows to its full length"
	float m_flLengthFadeInTime; // 0x2ae4	
	// MPropertyStartGroup "Trail Head & Tail"
	// MPropertyFriendlyName "head taper scale"
	// MPropertySortPriority "800"
	CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2ae8	
	// MPropertyFriendlyName "head color scale"
	CParticleCollectionVecInput m_vecHeadColorScale; // 0x2c48	
	// MPropertyFriendlyName "head alpha scale"
	CPerParticleFloatInput m_flHeadAlphaScale; // 0x32c0	
	// MPropertyFriendlyName "tail taper scale"
	CPerParticleFloatInput m_flRadiusTaper; // 0x3420	
	// MPropertyFriendlyName "tail color scale"
	CParticleCollectionVecInput m_vecTailColorScale; // 0x3580	
	// MPropertyFriendlyName "tail alpha scale"
	CPerParticleFloatInput m_flTailAlphaScale; // 0x3bf8	
	// MPropertyStartGroup "Trail UV Controls"
	// MPropertyFriendlyName "texture UV horizontal Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "800"
	ParticleAttributeIndex_t m_nHorizCropField; // 0x3d58	
	// MPropertyFriendlyName "texture UV vertical Scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nVertCropField; // 0x3d5c	
	// MPropertyFriendlyName "Trail forward shift (fraction)"
	float m_flForwardShift; // 0x3d60	
	// MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
	bool m_bFlipUVBasedOnPitchYaw; // 0x3d64	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampScalarLinear : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "ramp rate min"
	float m_RateMin; // 0x1c0	
	// MPropertyFriendlyName "ramp rate max"
	float m_RateMax; // 0x1c4	
	// MPropertyFriendlyName "start time min"
	float m_flStartTime_min; // 0x1c8	
	// MPropertyFriendlyName "start time max"
	float m_flStartTime_max; // 0x1cc	
	// MPropertyFriendlyName "end time min"
	float m_flEndTime_min; // 0x1d0	
	// MPropertyFriendlyName "end time max"
	float m_flEndTime_max; // 0x1d4	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x28]; // 0x1d8
public:
	// MPropertyFriendlyName "ramp field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x200	
	// MPropertyFriendlyName "start/end proportional"
	bool m_bProportionalOp; // 0x204	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x348
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RotateVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "rotation axis min"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMin; // 0x1c4	
	// MPropertyFriendlyName "rotation axis max"
	// MVectorIsCoordinate
	Vector m_vecRotAxisMax; // 0x1d0	
	// MPropertyFriendlyName "rotation rate min"
	float m_flRotRateMin; // 0x1dc	
	// MPropertyFriendlyName "rotation rate max"
	float m_flRotRateMax; // 0x1e0	
	// MPropertyFriendlyName "normalize output"
	bool m_bNormalize; // 0x1e4	
private:
	[[maybe_unused]] uint8_t __pad01e5[0x3]; // 0x1e5
public:
	// MPropertyFriendlyName "per particle scale"
	CPerParticleFloatInput m_flScale; // 0x1e8	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x848
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitVecCollection : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionVecInput m_InputValue; // 0x1c8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x840	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x218
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RemapParticleCountToNamedModelMeshGroupScalar : public C_INIT_RemapParticleCountToNamedModelElementScalar
{
public:
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SequenceFromCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "kill unused"
	bool m_bKillUnused; // 0x1c8	
	// MPropertyFriendlyName "offset propotional to radius"
	bool m_bRadiusScale; // 0x1c9	
private:
	[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nCP; // 0x1cc	
	// MPropertyFriendlyName "per particle spatial offset"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1d0	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CPOffsetToPercentageBetweenCPs : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "percentage minimum"
	float m_flInputMin; // 0x1c0	
	// MPropertyFriendlyName "percentage maximum"
	float m_flInputMax; // 0x1c4	
	// MPropertyFriendlyName "percentage bias"
	float m_flInputBias; // 0x1c8	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nStartCP; // 0x1cc	
	// MPropertyFriendlyName "ending control point"
	int32_t m_nEndCP; // 0x1d0	
	// MPropertyFriendlyName "offset control point"
	int32_t m_nOffsetCP; // 0x1d4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOuputCP; // 0x1d8	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInputCP; // 0x1dc	
	// MPropertyFriendlyName "treat distance between points as radius"
	bool m_bRadialCheck; // 0x1e0	
	// MPropertyFriendlyName "treat offset as scale of total distance"
	bool m_bScaleOffset; // 0x1e1	
private:
	[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
public:
	// MPropertyFriendlyName "offset amount"
	// MVectorIsCoordinate
	Vector m_vecOffset; // 0x1e4	
};

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_LerpEndCapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "value to lerp to"
	float m_flOutput; // 0x1c4	
	// MPropertyFriendlyName "lerp time"
	float m_flLerpTime; // 0x1c8	
};

