#pragma once
#include "soundsystem_voicecontainers/CVSound.hpp"
#include <cstdint>
namespace source2sdk::soundsystem_voicecontainers
{
	struct CVoiceContainerAnalysisBase;
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xc0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataNodeType "1"
	// MFgdFromSchemaEditablePolymorphicThisClass
	// MVDataFileExtension
	// MPropertyFriendlyName "VSND Container"
	// MPropertyDescription "Voice Container Base"
	class CVoiceContainerBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
	public:
		// MPropertySuppressField
		soundsystem_voicecontainers::CVSound m_vSound; // 0x38		
		// MPropertySuppressExpr "true"
		soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xb8		
		
		// Static fields:
		static bool &Get_bAudioFinishedPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_bAudioStillPlaying(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[1]->m_pInstance);};
	};
};
