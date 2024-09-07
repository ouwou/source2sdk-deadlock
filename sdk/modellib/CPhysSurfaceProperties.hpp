#pragma once
#include "modellib/CPhysSurfacePropertiesAudio.hpp"
#include "modellib/CPhysSurfacePropertiesPhysics.hpp"
#include "modellib/CPhysSurfacePropertiesSoundNames.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xc0
	// 
	// MGetKV3ClassDefaults
	class CPhysSurfaceProperties
	{
	public:
		// MKV3TransferName "surfacePropertyName"
		CUtlString m_name; // 0x0		
		uint32_t m_nameHash; // 0x8		
		uint32_t m_baseNameHash; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
	public:
		// MKV3TransferName "hidden"
		bool m_bHidden; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
	public:
		// MKV3TransferName "description"
		CUtlString m_description; // 0x20		
		// MKV3TransferName "physics"
		modellib::CPhysSurfacePropertiesPhysics m_physics; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
	public:
		// MKV3TransferName "audiosounds"
		modellib::CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x48		
		// MKV3TransferName "audioparams"
		modellib::CPhysSurfacePropertiesAudio m_audioParams; // 0xa0		
	};
};
