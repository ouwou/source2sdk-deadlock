#pragma once
#include "source2sdk/client/CPlayer_CameraServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_PostProcessingVolume;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x238
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayer_CameraServices : public client::CPlayer_CameraServices
    {
    public:
        // m_hPrevPostProcessingVolume has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PostProcessingVolume> m_hPrevPostProcessingVolume;
        char m_hPrevPostProcessingVolume[0x4]; // 0x230        
        [[maybe_unused]] std::uint8_t pad_0x234[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayer_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayer_CameraServices) == 0x238);
};
