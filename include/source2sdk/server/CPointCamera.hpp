#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x548
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
    class CPointCamera : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_FOV; // 0x4e8        
        // metadata: MNetworkEnable
        float m_Resolution; // 0x4ec        
        // metadata: MNetworkEnable
        bool m_bFogEnable; // 0x4f0        
        // metadata: MNetworkEnable
        Color m_FogColor; // 0x4f1        
        [[maybe_unused]] std::uint8_t pad_0x4f5[0x3]; // 0x4f5
        // metadata: MNetworkEnable
        float m_flFogStart; // 0x4f8        
        // metadata: MNetworkEnable
        float m_flFogEnd; // 0x4fc        
        // metadata: MNetworkEnable
        float m_flFogMaxDensity; // 0x500        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x504        
        // metadata: MNetworkEnable
        bool m_bUseScreenAspectRatio; // 0x505        
        [[maybe_unused]] std::uint8_t pad_0x506[0x2]; // 0x506
        // metadata: MNetworkEnable
        float m_flAspectRatio; // 0x508        
        // metadata: MNetworkEnable
        bool m_bNoSky; // 0x50c        
        [[maybe_unused]] std::uint8_t pad_0x50d[0x3]; // 0x50d
        // metadata: MNetworkEnable
        float m_fBrightness; // 0x510        
        // metadata: MNetworkEnable
        float m_flZFar; // 0x514        
        // metadata: MNetworkEnable
        float m_flZNear; // 0x518        
        // metadata: MNetworkEnable
        bool m_bCanHLTVUse; // 0x51c        
        // metadata: MNetworkEnable
        bool m_bAlignWithParent; // 0x51d        
        // metadata: MNetworkEnable
        bool m_bDofEnabled; // 0x51e        
        [[maybe_unused]] std::uint8_t pad_0x51f[0x1]; // 0x51f
        // metadata: MNetworkEnable
        float m_flDofNearBlurry; // 0x520        
        // metadata: MNetworkEnable
        float m_flDofNearCrisp; // 0x524        
        // metadata: MNetworkEnable
        float m_flDofFarCrisp; // 0x528        
        // metadata: MNetworkEnable
        float m_flDofFarBlurry; // 0x52c        
        // metadata: MNetworkEnable
        float m_flDofTiltToGround; // 0x530        
        float m_TargetFOV; // 0x534        
        float m_DegreesPerSecond; // 0x538        
        bool m_bIsOn; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        server::CPointCamera* m_pNext; // 0x540        
        
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
    
    // Cannot assert offsets of fields in CPointCamera because it is not a standard-layout class
    static_assert(sizeof(CPointCamera) == 0x548);
};
