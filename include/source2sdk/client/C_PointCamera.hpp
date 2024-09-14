#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "float m_FOV"
    // static metadata: MNetworkVarNames "float m_Resolution"
    // static metadata: MNetworkVarNames "bool m_bFogEnable"
    // static metadata: MNetworkVarNames "Color m_FogColor"
    // static metadata: MNetworkVarNames "float m_flFogStart"
    // static metadata: MNetworkVarNames "float m_flFogEnd"
    // static metadata: MNetworkVarNames "float m_flFogMaxDensity"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bUseScreenAspectRatio"
    // static metadata: MNetworkVarNames "float m_flAspectRatio"
    // static metadata: MNetworkVarNames "bool m_bNoSky"
    // static metadata: MNetworkVarNames "float m_fBrightness"
    // static metadata: MNetworkVarNames "float m_flZFar"
    // static metadata: MNetworkVarNames "float m_flZNear"
    // static metadata: MNetworkVarNames "bool m_bCanHLTVUse"
    // static metadata: MNetworkVarNames "bool m_bAlignWithParent"
    // static metadata: MNetworkVarNames "bool m_bDofEnabled"
    // static metadata: MNetworkVarNames "float m_flDofNearBlurry"
    // static metadata: MNetworkVarNames "float m_flDofNearCrisp"
    // static metadata: MNetworkVarNames "float m_flDofFarCrisp"
    // static metadata: MNetworkVarNames "float m_flDofFarBlurry"
    // static metadata: MNetworkVarNames "float m_flDofTiltToGround"
    #pragma pack(push, 1)
    class C_PointCamera : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_FOV; // 0x558        
        // metadata: MNetworkEnable
        float m_Resolution; // 0x55c        
        // metadata: MNetworkEnable
        bool m_bFogEnable; // 0x560        
        // metadata: MNetworkEnable
        Color m_FogColor; // 0x561        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        // metadata: MNetworkEnable
        float m_flFogStart; // 0x568        
        // metadata: MNetworkEnable
        float m_flFogEnd; // 0x56c        
        // metadata: MNetworkEnable
        float m_flFogMaxDensity; // 0x570        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x574        
        // metadata: MNetworkEnable
        bool m_bUseScreenAspectRatio; // 0x575        
        [[maybe_unused]] std::uint8_t pad_0x576[0x2]; // 0x576
        // metadata: MNetworkEnable
        float m_flAspectRatio; // 0x578        
        // metadata: MNetworkEnable
        bool m_bNoSky; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        // metadata: MNetworkEnable
        float m_fBrightness; // 0x580        
        // metadata: MNetworkEnable
        float m_flZFar; // 0x584        
        // metadata: MNetworkEnable
        float m_flZNear; // 0x588        
        // metadata: MNetworkEnable
        bool m_bCanHLTVUse; // 0x58c        
        // metadata: MNetworkEnable
        bool m_bAlignWithParent; // 0x58d        
        // metadata: MNetworkEnable
        bool m_bDofEnabled; // 0x58e        
        [[maybe_unused]] std::uint8_t pad_0x58f[0x1]; // 0x58f
        // metadata: MNetworkEnable
        float m_flDofNearBlurry; // 0x590        
        // metadata: MNetworkEnable
        float m_flDofNearCrisp; // 0x594        
        // metadata: MNetworkEnable
        float m_flDofFarCrisp; // 0x598        
        // metadata: MNetworkEnable
        float m_flDofFarBlurry; // 0x59c        
        // metadata: MNetworkEnable
        float m_flDofTiltToGround; // 0x5a0        
        float m_TargetFOV; // 0x5a4        
        float m_DegreesPerSecond; // 0x5a8        
        bool m_bIsOn; // 0x5ac        
        [[maybe_unused]] std::uint8_t pad_0x5ad[0x3]; // 0x5ad
        client::C_PointCamera* m_pNext; // 0x5b0        
        
        // Datamap fields:
        // CUtlSymbolLarge InputChangeFOV; // 0x0
        // void InputSetOnAndTurnOthersOff; // 0x0
        // void InputSetOn; // 0x0
        // void InputSetOff; // 0x0
        // void InputForceActive; // 0x0
        // void InputForceInactive; // 0x0
        // void InputEnableDOF; // 0x0
        // void InputDisableDOF; // 0x0
        // float InputSetDOFNearBlurry; // 0x0
        // float InputSetDOFNearCrisp; // 0x0
        // float InputSetDOFFarCrisp; // 0x0
        // float InputSetDOFFarBlurry; // 0x0
        // float InputSetDOFTiltToGround; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCamera because it is not a standard-layout class
    static_assert(sizeof(C_PointCamera) == 0x5b8);
};
