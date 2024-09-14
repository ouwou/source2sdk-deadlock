#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/C_fogplayerparams_t.hpp"
#include "source2sdk/client/audioparams_t.hpp"
#include "source2sdk/client/fogparams_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_ColorCorrection;
};

namespace source2sdk::client
{
    class C_FogController;
};

namespace source2sdk::client
{
    class C_PostProcessingVolume;
};

namespace source2sdk::client
{
    class C_TonemapController2;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x230
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTick_t m_nPunchAngleJoltTick"
    // static metadata: MNetworkVarNames "fogplayerparams_t m_PlayerFog"
    // static metadata: MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
    // static metadata: MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
    // static metadata: MNetworkVarNames "audioparams_t m_audio"
    // static metadata: MNetworkVarNames "CHandle<C_PostProcessingVolume> m_PostProcessingVolumes"
    #pragma pack(push, 1)
    class CPlayer_CameraServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkChangeCallback "OnPunchChanged"
        QAngle m_vecPunchAngle; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x4c[0xc]; // 0x4c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        QAngle m_vecPunchAngleVel; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x64[0xc]; // 0x64
        entity2::GameTick_t m_nPunchAngleJoltTickClientSide; // 0x70        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPunchJoltChanged"
        entity2::GameTick_t m_nPunchAngleJoltTick; // 0x74        
        // metadata: MNetworkEnable
        client::C_fogplayerparams_t m_PlayerFog; // 0x78        
        // metadata: MNetworkEnable
        // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_ColorCorrection> m_hColorCorrectionCtrl;
        char m_hColorCorrectionCtrl[0x4]; // 0xb8        
        // metadata: MNetworkEnable
        // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewEntity;
        char m_hViewEntity[0x4]; // 0xbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_TonemapController2> m_hTonemapController;
        char m_hTonemapController[0x4]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4]; // 0xc4
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        client::audioparams_t m_audio; // 0xc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_PostProcessingVolume>> m_PostProcessingVolumes;
        char m_PostProcessingVolumes[0x18]; // 0x140        
        float m_flOldPlayerZ; // 0x158        
        float m_flOldPlayerViewOffsetZ; // 0x15c        
        client::fogparams_t m_CurrentFog; // 0x160        
        // m_hOldFogController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_FogController> m_hOldFogController;
        char m_hOldFogController[0x4]; // 0x1c8        
        bool m_bOverrideFogColor[5]; // 0x1cc        
        Color m_OverrideFogColor[5]; // 0x1d1        
        bool m_bOverrideFogStartEnd[5]; // 0x1e5        
        [[maybe_unused]] std::uint8_t pad_0x1ea[0x2]; // 0x1ea
        float m_fOverrideFogStart[5]; // 0x1ec        
        float m_fOverrideFogEnd[5]; // 0x200        
        // m_hActivePostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PostProcessingVolume> m_hActivePostProcessingVolume;
        char m_hActivePostProcessingVolume[0x4]; // 0x214        
        QAngle m_angDemoViewAngles; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x224[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_CameraServices) == 0x230);
};
