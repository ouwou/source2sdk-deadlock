#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "Vector m_vOrigin"
	// MNetworkVarNames "Vector m_vStart"
	// MNetworkVarNames "Vector m_vNormal"
	// MNetworkVarNames "QAngle m_vAngles"
	// MNetworkVarNames "CEntityHandle m_hEntity"
	// MNetworkVarNames "CEntityHandle m_hOtherEntity"
	// MNetworkVarNames "float32 m_flScale"
	// MNetworkVarNames "float32 m_flMagnitude"
	// MNetworkVarNames "float32 m_flRadius"
	// MNetworkVarNames "CUtlStringToken m_nSurfaceProp"
	// MNetworkVarNames "HParticleSystemDefinition m_nEffectIndex"
	// MNetworkVarNames "uint32 m_nDamageType"
	// MNetworkVarNames "uint8 m_nPenetrate"
	// MNetworkVarNames "uint16 m_nMaterial"
	// MNetworkVarNames "uint16 m_nHitBox"
	// MNetworkVarNames "uint8 m_nColor"
	// MNetworkVarNames "uint8 m_fFlags"
	// MNetworkVarNames "AttachmentHandle_t m_nAttachmentIndex"
	// MNetworkVarNames "CUtlStringToken m_nAttachmentName"
	// MNetworkVarNames "uint16 m_iEffectName"
	// MNetworkVarNames "uint8 m_nExplosionType"
	class CEffectData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord_integral"
		Vector m_vOrigin; // 0x8		
		// MNetworkEnable
		// MNetworkEncoder "coord_integral"
		Vector m_vStart; // 0x14		
		// MNetworkEnable
		// MNetworkEncoder "normal"
		Vector m_vNormal; // 0x20		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		QAngle m_vAngles; // 0x2c		
		// MNetworkEnable
		CEntityHandle m_hEntity; // 0x38		
		// MNetworkEnable
		CEntityHandle m_hOtherEntity; // 0x3c		
		// MNetworkEnable
		float m_flScale; // 0x40		
		// MNetworkEnable
		// MNetworkBitCount "12"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1023.000000"
		// MNetworkEncodeFlags "1"
		float m_flMagnitude; // 0x44		
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1023.000000"
		// MNetworkEncodeFlags "1"
		float m_flRadius; // 0x48		
		// MNetworkEnable
		CUtlStringToken m_nSurfaceProp; // 0x4c		
		// MNetworkEnable
		CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nEffectIndex; // 0x50		
		// MNetworkEnable
		uint32_t m_nDamageType; // 0x58		
		// MNetworkEnable
		uint8_t m_nPenetrate; // 0x5c		
	private:
		[[maybe_unused]] uint8_t __pad005d[0x1]; // 0x5d
	public:
		// MNetworkEnable
		uint16_t m_nMaterial; // 0x5e		
		// MNetworkEnable
		uint16_t m_nHitBox; // 0x60		
		// MNetworkEnable
		uint8_t m_nColor; // 0x62		
		// MNetworkEnable
		uint8_t m_fFlags; // 0x63		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_nAttachmentIndex; // 0x64		
	private:
		[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
	public:
		// MNetworkEnable
		CUtlStringToken m_nAttachmentName; // 0x68		
		// MNetworkEnable
		uint16_t m_iEffectName; // 0x6c		
		// MNetworkEnable
		uint8_t m_nExplosionType; // 0x6e		
	};
};
