#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Operative_UmbrellaManeuver_Watcher_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AirHangModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AirHangModifier;
        char m_AirHangModifier[0x10]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Operative_UmbrellaManeuver_Watcher_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Operative_UmbrellaManeuver_Watcher_VData) == 0x640);
};
