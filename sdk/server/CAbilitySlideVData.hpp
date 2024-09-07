#pragma once
#include "client/CRemapFloat.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1820
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilitySlideVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyDescription "The minimum angle we consider to be a slope.  Less than this we will consider flat ground."
		float m_flMinAngleToConsiderASlope; // 0x14f0		
		// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the steepest slope."
		float m_flSlideMaxSlopeMaxAccSpeed; // 0x14f4		
		// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the shallowest slope."
		float m_flSlideMinSlopeMaxAccSpeed; // 0x14f8		
		// MPropertyDescription "When checking for a drop-slide, how long ago can the activate button have been pressed."
		float m_flButtonPressWindow; // 0x14fc		
		// MPropertyDescription "When fast you can turn while sliding."
		float m_flTurnSpeed; // 0x1500		
		// MPropertyDescription "Amount of acceleration to apply on the shallowest slope"
		float m_flSlideMinSlopeAcceleration; // 0x1504		
		// MPropertyDescription "Amount of acceleration to apply on the steepest slope"
		float m_flSlideMaxSlopeAcceleration; // 0x1508		
		// MPropertyDescription "When pressing forward, how far to the side you need to look to start turning in that direction."
		float m_flTurnMinAngDiff; // 0x150c		
		// MPropertyDescription "When pressing forward, how far to the side you need to look to apply maximum turning."
		float m_flTurnMaxAngDiff; // 0x1510		
		// MPropertyDescription "For how long after landing and starting a slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
		float m_flLandedFlatGroundFrictionGraceTime; // 0x1514		
		// MPropertyDescription "For how long after starting to slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
		float m_flFlatGroundFrictionGraceTime; // 0x1518		
		// MPropertyDescription "The friction the player uses while sliding on flat ground."
		float m_flFrictionFlatGroundGrace; // 0x151c		
		// MPropertyDescription "The friction the player uses while sliding on flat ground."
		float m_flFrictionFlatGround; // 0x1520		
		// MPropertyDescription "The friction the player uses while sliding on our minimum slope."
		float m_flFrictionMinSlope; // 0x1524		
		// MPropertyDescription "The friction the player uses while sliding on our maximum slope."
		float m_flFrictionMaxSlope; // 0x1528		
		// MPropertyDescription "How much friction to apply when trying to slide up our minimum slope."
		float m_flFrictionUphillMinSlope; // 0x152c		
		// MPropertyDescription "How much friction to apply when trying to slide up our maximum slope."
		float m_flFrictionUphillMaxSlope; // 0x1530		
		// MPropertyDescription "When applying the landing speed boost, bias the scale based on slope by this much."
		float m_flLandingSlopeScaleBias; // 0x1534		
		// MPropertyDescription "Minimum speed to trigger a boost when landing and trying to slide."
		float m_flBoostMinTriggerSpeed; // 0x1538		
		// MPropertyDescription "Maximum speed used to determine speed boost when landing and trying to slide."
		float m_flBoostMaxTriggerSpeed; // 0x153c		
		// MPropertyDescription "Minimum speed boost to apply when landing and initiating a slide."
		float m_flBoostMinSpeed; // 0x1540		
		// MPropertyDescription "Maximumm speed boost to apply when landing and initiating a slide."
		float m_flBoostMaxSpeed; // 0x1544		
		// MPropertyDescription "How fast you have to be moving on flat ground to be able to initiate a slide."
		float m_flMinActivationSpeed; // 0x1548		
		// MPropertyDescription "If your slide speed falls below this on flat ground, you will stop sliding."
		float m_flMinSustainSpeed; // 0x154c		
		// MPropertyDescription "The amount of speed boost to apply when running forward and initiating a slide."
		float m_flSprintBoostSpeed; // 0x1550		
		// MPropertyDescription "The time after dashing to start a slide to get the full speed dash slide"
		float m_flDashSlideStartTime; // 0x1554		
		// MPropertyDescription "The speed to start a slide out of a dash."
		float m_flDashSlideSpeed; // 0x1558		
		// MPropertyDescription "The speed to start a slide out of a dash if the timing was incorrect."
		float m_flDashSlideFailSpeed; // 0x155c		
		// MPropertyDescription "Sound for succesfully executing a dash-slide"
		CSoundEventName m_strDashSlideActivate; // 0x1560		
		// MPropertyDescription "How long to apply 'Dash Boost Friction' after starting a slide out of a dash."
		float m_flDashSlideFrictionTime; // 0x1570		
		// MPropertyDescription "The friction to apply after starting a slide out of a dash."
		float m_flDashSlideFriction; // 0x1574		
		// MPropertyDescription "How fast you have to be moving while dashing to initiate a slide.  Mainly to prevent slowed-dash flowing into a weirdly fast slides."
		float m_flDashMinActivationSpeed; // 0x1578		
		// MPropertyDescription "The shallowest slope degree to start applying downhill acceleration."
		float m_flAccMinSlopeDeg; // 0x157c		
		// MPropertyDescription "The angle we consider the most extreme slope for applying downhill acceleration."
		float m_flAccMaxSlopeDeg; // 0x1580		
		// MPropertyDescription "How much of the downhill acceleration to apply at the minimum angle."
		float m_flAccMinSlopeScale; // 0x1584		
		// MPropertyDescription "When sliding, how far forward to look when determining our averaged current slope"
		float m_flSlideProbeForwardOffset; // 0x1588		
		// MPropertyDescription "When running on flat ground and trying to initiate a slide, how far forward to look for a slope that will let's us trigger a slide early."
		float m_flSlideActivationProbeForwardOffset; // 0x158c		
		// MPropertyDescription "Maximum distance between probe samples"
		float m_flMaxDistanceBetweenProbeSamples; // 0x1590		
		// MPropertyDescription "If activating via the lookahead probe's normal, use that normal for this long after activating to help us get over that slope."
		float m_flInitialSlideUseForwardProbeTime; // 0x1594		
		// MPropertyDescription "When trying to determine what slope we're currently only, sample this far around the player"
		float m_flCurrentSlopeSampleDistance; // 0x1598		
		// MPropertyDescription "Ignore slopes whose angle different from our velocity is this many std deviations out when sampling for current slope"
		float m_flSampleVelDiffStdDevScaleCutoff; // 0x159c		
		// MPropertyDescription "If facing further than this angle away from the direction of the slope, dont initiate a slide on it."
		float m_flSlopeFacingAngleToActivate; // 0x15a0		
		// MPropertyDescription "Maximum air-drag to apply when jumping out of a slide."
		float m_flAirDragAfterJump; // 0x15a4		
		// MPropertyDescription "How long to apply air-drag after jumping out of a slide."
		float m_flAirDragAfterJumpTime; // 0x15a8		
		// MPropertyDescription "Air-drag applied when jumping out of a slide linearly ramps from 100% to 0% from 0' to this angle."
		float m_flAirDragMaxAngle; // 0x15ac		
		// MPropertyDescription "How long you have to be walking around, not sliding until we clear the air-drag flag on jumps."
		float m_flAirDragResetTime; // 0x15b0		
		// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
		float m_flLateSlideJumpWindow; // 0x15b4		
		// MPropertyDescription "Speed remap to slide effect intensity"
		client::CRemapFloat m_SlideEffectRemap; // 0x15b8		
		// MPropertyDescription "The curve defining the getup anim's speed penalty duration(x) and severity(y)."
		CPiecewiseCurve m_GetupSpeedCurve; // 0x15c8		
		// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
		float m_flGetupBusyDuration; // 0x1608		
	private:
		[[maybe_unused]] uint8_t __pad160c[0x4]; // 0x160c
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // 0x1610		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // 0x1690		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlideParticle; // 0x1710		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStartSound; // 0x17f0		
		CSoundEventName m_strLoopingSound; // 0x1800		
		CSoundEventName m_strStopSound; // 0x1810		
	};
};
