#pragma once
#include "client/CAttributeList.hpp"
#include "client/IEconItemInterface.hpp"
#include "client/eEconItemOrigin.hpp"
#include "client/item_definition_index_t.hpp"
#include "client/itemid_t.hpp"
#include "client/style_index_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	// 
	// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
	// MNetworkVarNames "int m_iEntityQuality"
	// MNetworkVarNames "uint32 m_iEntityLevel"
	// MNetworkVarNames "itemid_t m_iItemID"
	// MNetworkVarNames "uint32 m_iAccountID"
	// MNetworkVarNames "uint32 m_iInventoryPosition"
	// MNetworkVarNames "bool m_bInitialized"
	// MNetworkVarNames "style_index_t m_nOverrideStyle"
	// MNetworkVarNames "CAttributeList m_AttributeList"
	class C_EconItemView : public client::IEconItemInterface
	{
	public:
		// MNetworkEnable
		client::item_definition_index_t m_iItemDefinitionIndex; // 0x8		
		// MNetworkEnable
		int32_t m_iEntityQuality; // 0xc		
		// MNetworkEnable
		uint32_t m_iEntityLevel; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		// MNetworkEnable
		client::itemid_t m_iItemID; // 0x18		
		// MNetworkEnable
		uint32_t m_iAccountID; // 0x20		
		// MNetworkEnable
		uint32_t m_iInventoryPosition; // 0x24		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
	public:
		// MNetworkEnable
		bool m_bInitialized; // 0x30		
		// MNetworkEnable
		client::style_index_t m_nOverrideStyle; // 0x31		
		bool m_bIsStoreItem; // 0x32		
		bool m_bIsTradeItem; // 0x33		
		bool m_bHasComputedAttachedParticles; // 0x34		
		bool m_bHasAttachedParticles; // 0x35		
	private:
		[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
	public:
		int32_t m_iEntityQuantity; // 0x38		
		uint8_t m_unClientFlags; // 0x3c		
	private:
		[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
	public:
		client::eEconItemOrigin m_unOverrideOrigin; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x14]; // 0x44
	public:
		// MNetworkEnable
		client::CAttributeList m_AttributeList; // 0x58		
	};
};
