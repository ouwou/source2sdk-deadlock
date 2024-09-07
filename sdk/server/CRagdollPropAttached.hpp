#pragma once
#include "server/CRagdollProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb58
	// Has VTable
	// 
	// MNetworkVarNames "uint32 m_boneIndexAttached"
	// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
	// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
	// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
	class CRagdollPropAttached : public server::CRagdollProp
	{
	public:
		// MNetworkEnable
		uint32_t m_boneIndexAttached; // 0xb18		
		// MNetworkEnable
		uint32_t m_ragdollAttachedObjectIndex; // 0xb1c		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_attachmentPointBoneSpace; // 0xb20		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_attachmentPointRagdollSpace; // 0xb2c		
		bool m_bShouldDetach; // 0xb38		
	private:
		[[maybe_unused]] uint8_t __pad0b39[0xf]; // 0xb39
	public:
		bool m_bShouldDeleteAttachedActivationRecord; // 0xb48		
	};
};
