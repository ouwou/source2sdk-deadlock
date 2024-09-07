#pragma once
#include "animationsystem/ParticleAttachment_t.hpp"
#include "animgraphlib/CAnimTagBase.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Particle Tag"
	class CParticleAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertySuppressField
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hParticleSystem; // 0x58		
		// MPropertyAttributeEditor "AssetBrowse( vpcf )"
		// MPropertyFriendlyName "Particle System"
		CUtlString m_particleSystemName; // 0x60		
		// MPropertyFriendlyName "Configuration"
		CUtlString m_configName; // 0x68		
		// MPropertyFriendlyName "Detach From Owner"
		bool m_bDetachFromOwner; // 0x70		
		// MPropertyFriendlyName "Stop on Tag End"
		// MPropertyGroupName "Ending"
		bool m_bStopWhenTagEnds; // 0x71		
		// MPropertyFriendlyName "Tag End Stop is Instant"
		// MPropertyGroupName "Ending"
		bool m_bTagEndStopIsInstant; // 0x72		
	private:
		[[maybe_unused]] uint8_t __pad0073[0x5]; // 0x73
	public:
		// MPropertyFriendlyName "Attachment"
		// MPropertyGroupName "Attachments"
		// MPropertyAttributeChoiceName "Attachment"
		CUtlString m_attachmentName; // 0x78		
		// MPropertyFriendlyName "Attachment Type"
		// MPropertyGroupName "Attachments"
		animationsystem::ParticleAttachment_t m_attachmentType; // 0x80		
	private:
		[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
	public:
		// MPropertyFriendlyName "Attachment (Control Point 1)"
		// MPropertyGroupName "Attachments"
		// MPropertyAttributeChoiceName "Attachment"
		CUtlString m_attachmentCP1Name; // 0x88		
		// MPropertyFriendlyName "Attachment Type (Control Point 1)"
		// MPropertyGroupName "Attachments"
		animationsystem::ParticleAttachment_t m_attachmentCP1Type; // 0x90		
	};
};
