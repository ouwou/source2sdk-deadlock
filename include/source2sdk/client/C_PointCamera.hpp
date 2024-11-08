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
    // Size: 0x5c8
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
        float m_FOV; // 0x568        
        // metadata: MNetworkEnable
        float m_Resolution; // 0x56c        
        // metadata: MNetworkEnable
        bool m_bFogEnable; // 0x570        
        // metadata: MNetworkEnable
        Color m_FogColor; // 0x571        
        [[maybe_unused]] std::uint8_t pad_0x575[0x3]; // 0x575
        // metadata: MNetworkEnable
        float m_flFogStart; // 0x578        
        // metadata: MNetworkEnable
        float m_flFogEnd; // 0x57c        
        // metadata: MNetworkEnable
        float m_flFogMaxDensity; // 0x580        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x584        
        // metadata: MNetworkEnable
        bool m_bUseScreenAspectRatio; // 0x585        
        [[maybe_unused]] std::uint8_t pad_0x586[0x2]; // 0x586
        // metadata: MNetworkEnable
        float m_flAspectRatio; // 0x588        
        // metadata: MNetworkEnable
        bool m_bNoSky; // 0x58c        
        [[maybe_unused]] std::uint8_t pad_0x58d[0x3]; // 0x58d
        // metadata: MNetworkEnable
        float m_fBrightness; // 0x590        
        // metadata: MNetworkEnable
        float m_flZFar; // 0x594        
        // metadata: MNetworkEnable
        float m_flZNear; // 0x598        
        // metadata: MNetworkEnable
        bool m_bCanHLTVUse; // 0x59c        
        // metadata: MNetworkEnable
        bool m_bAlignWithParent; // 0x59d        
        // metadata: MNetworkEnable
        bool m_bDofEnabled; // 0x59e        
        [[maybe_unused]] std::uint8_t pad_0x59f[0x1]; // 0x59f
        // metadata: MNetworkEnable
        float m_flDofNearBlurry; // 0x5a0        
        // metadata: MNetworkEnable
        float m_flDofNearCrisp; // 0x5a4        
        // metadata: MNetworkEnable
        float m_flDofFarCrisp; // 0x5a8        
        // metadata: MNetworkEnable
        float m_flDofFarBlurry; // 0x5ac        
        // metadata: MNetworkEnable
        float m_flDofTiltToGround; // 0x5b0        
        float m_TargetFOV; // 0x5b4        
        float m_DegreesPerSecond; // 0x5b8        
        bool m_bIsOn; // 0x5bc        
        [[maybe_unused]] std::uint8_t pad_0x5bd[0x3]; // 0x5bd
        client::C_PointCamera* m_pNext; // 0x5c0        
        
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
    static_assert(sizeof(C_PointCamera) == 0x5c8);
};
