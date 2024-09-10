#pragma once
#include "client/C_RagdollProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xbf0
	// Has VTable
	// 
	// MNetworkVarNames "uint32 m_boneIndexAttached"
	// MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
	// MNetworkVarNames "Vector m_attachmentPointBoneSpace"
	// MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
	class C_RagdollPropAttached : public client::C_RagdollProp
	{
	public:
		// MNetworkEnable
		uint32_t m_boneIndexAttached; // 0xbb8		
		// MNetworkEnable
		uint32_t m_ragdollAttachedObjectIndex; // 0xbbc		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_attachmentPointBoneSpace; // 0xbc0		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_attachmentPointRagdollSpace; // 0xbcc		
		Vector m_vecOffset; // 0xbd8		
		float m_parentTime; // 0xbe4		
		bool m_bHasParent; // 0xbe8		
	};
};
