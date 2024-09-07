#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1490
	// Has VTable
	// 
	// MNetworkVarNames "uint32 m_PredNetBoolVariables"
	// MNetworkVarNames "byte m_PredNetByteVariables"
	// MNetworkVarNames "uint16 m_PredNetUInt16Variables"
	// MNetworkVarNames "int32 m_PredNetIntVariables"
	// MNetworkVarNames "uint32 m_PredNetUInt32Variables"
	// MNetworkVarNames "uint64 m_PredNetUInt64Variables"
	// MNetworkVarNames "float m_PredNetFloatVariables"
	// MNetworkVarNames "Vector m_PredNetVectorVariables"
	// MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
	// MNetworkVarNames "CGlobalSymbol m_PredNetGlobalSymbolVariables"
	// MNetworkVarNames "uint32 m_OwnerOnlyPredNetBoolVariables"
	// MNetworkVarNames "byte m_OwnerOnlyPredNetByteVariables"
	// MNetworkVarNames "uint16 m_OwnerOnlyPredNetUInt16Variables"
	// MNetworkVarNames "int32 m_OwnerOnlyPredNetIntVariables"
	// MNetworkVarNames "uint32 m_OwnerOnlyPredNetUInt32Variables"
	// MNetworkVarNames "uint64 m_OwnerOnlyPredNetUInt64Variables"
	// MNetworkVarNames "float m_OwnerOnlyPredNetFloatVariables"
	// MNetworkVarNames "Vector m_OwnerOnlyPredNetVectorVariables"
	// MNetworkVarNames "Quaternion m_OwnerOnlyPredNetQuaternionVariables"
	// MNetworkVarNames "CGlobalSymbol m_OwnerOnlyPredNetGlobalSymbolVariables"
	// MNetworkVarNames "int m_nBoolVariablesCount"
	// MNetworkVarNames "int m_nOwnerOnlyBoolVariablesCount"
	// MNetworkVarNames "int m_nRandomSeedOffset"
	// MNetworkVarNames "float m_flLastTeleportTime"
	class CAnimGraphNetworkedVariables
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetBoolVarChanged"
		// MNetworkAlias "m_PredBoolVariables"
		C_NetworkUtlVectorBase<uint32_t> m_PredNetBoolVariables; // 0x8		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetByteVarChanged"
		// MNetworkAlias "m_PredByteVariables"
		C_NetworkUtlVectorBase<uint8_t> m_PredNetByteVariables; // 0x20		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetUInt16VarChanged"
		// MNetworkAlias "m_PredUInt16Variables"
		C_NetworkUtlVectorBase<uint16_t> m_PredNetUInt16Variables; // 0x38		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetIntVarChanged"
		// MNetworkAlias "m_PredIntVariables"
		C_NetworkUtlVectorBase<int32_t> m_PredNetIntVariables; // 0x50		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetUInt32VarChanged"
		// MNetworkAlias "m_PredUInt32Variables"
		C_NetworkUtlVectorBase<uint32_t> m_PredNetUInt32Variables; // 0x68		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetUInt64VarChanged"
		// MNetworkAlias "m_PredUInt64Variables"
		C_NetworkUtlVectorBase<uint64_t> m_PredNetUInt64Variables; // 0x80		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetFloatVarChanged"
		// MNetworkAlias "m_PredFloatVariables"
		C_NetworkUtlVectorBase<float> m_PredNetFloatVariables; // 0x98		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetVectorVarChanged"
		// MNetworkAlias "m_PredVectorVariables"
		C_NetworkUtlVectorBase<Vector> m_PredNetVectorVariables; // 0xb0		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetQuaternionVarChanged"
		// MNetworkAlias "m_PredQuaternionVariables"
		C_NetworkUtlVectorBase<Quaternion> m_PredNetQuaternionVariables; // 0xc8		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
		// MNetworkAlias "m_PredGlobalSymbolVariables"
		C_NetworkUtlVectorBase<CGlobalSymbol> m_PredNetGlobalSymbolVariables; // 0xe0		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOBoolVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
		C_NetworkUtlVectorBase<uint32_t> m_OwnerOnlyPredNetBoolVariables; // 0xf8		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOByteVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
		C_NetworkUtlVectorBase<uint8_t> m_OwnerOnlyPredNetByteVariables; // 0x110		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOUInt16VarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
		C_NetworkUtlVectorBase<uint16_t> m_OwnerOnlyPredNetUInt16Variables; // 0x128		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOIntVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
		C_NetworkUtlVectorBase<int32_t> m_OwnerOnlyPredNetIntVariables; // 0x140		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOUInt32VarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
		C_NetworkUtlVectorBase<uint32_t> m_OwnerOnlyPredNetUInt32Variables; // 0x158		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOUInt64VarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
		C_NetworkUtlVectorBase<uint64_t> m_OwnerOnlyPredNetUInt64Variables; // 0x170		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOFloatVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
		C_NetworkUtlVectorBase<float> m_OwnerOnlyPredNetFloatVariables; // 0x188		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOVectorVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
		C_NetworkUtlVectorBase<Vector> m_OwnerOnlyPredNetVectorVariables; // 0x1a0		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
		C_NetworkUtlVectorBase<Quaternion> m_OwnerOnlyPredNetQuaternionVariables; // 0x1b8		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkSendProxyRecipientsFilter
		// MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
		// MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
		C_NetworkUtlVectorBase<CGlobalSymbol> m_OwnerOnlyPredNetGlobalSymbolVariables; // 0x1d0		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		int32_t m_nBoolVariablesCount; // 0x1e8		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		int32_t m_nOwnerOnlyBoolVariablesCount; // 0x1ec		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		int32_t m_nRandomSeedOffset; // 0x1f0		
		// MNetworkEnable
		// MNetworkUserGroup "animationgraph"
		// MNetworkChangeCallback "OnTeleportTimeChanged"
		float m_flLastTeleportTime; // 0x1f4		
	};
};
