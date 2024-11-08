#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/dynpitchvol_t.hpp"
#include "source2sdk/soundsystem/soundlevel_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x580
    // Has VTable
    #pragma pack(push, 1)
    class CAmbientGeneric : public server::CPointEntity
    {
    public:
        float m_radius; // 0x4e8        
        float m_flMaxRadius; // 0x4ec        
        soundsystem::soundlevel_t m_iSoundLevel; // 0x4f0        
        server::dynpitchvol_t m_dpv; // 0x4f4        
        bool m_fActive; // 0x558        
        bool m_fLooping; // 0x559        
        [[maybe_unused]] std::uint8_t pad_0x55a[0x6]; // 0x55a
        CUtlSymbolLarge m_iszSound; // 0x560        
        CUtlSymbolLarge m_sSourceEntName; // 0x568        
        // m_hSoundSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSoundSource;
        char m_hSoundSource[0x4]; // 0x570        
        CEntityIndex m_nSoundSourceEntIndex; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x578[0x8];
        
        // Datamap fields:
        // void m_nGUID; // 0x578
        // void CAmbientGenericRampThink; // 0x0
        // void InputPlaySound; // 0x0
        // void InputStopSound; // 0x0
        // void InputToggleSound; // 0x0
        // float InputPitch; // 0x0
        // float InputVolume; // 0x0
        // float InputFadeIn; // 0x0
        // float InputFadeOut; // 0x0
        // int32_t fadein; // 0x7fffffff
        // int32_t fadeout; // 0x7fffffff
        // int32_t fadeinsecs; // 0x7fffffff
        // int32_t fadeoutsecs; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAmbientGeneric because it is not a standard-layout class
    static_assert(sizeof(CAmbientGeneric) == 0x580);
};
