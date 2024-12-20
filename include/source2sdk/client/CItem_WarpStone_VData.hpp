#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x17b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItem_WarpStone_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier;
        char m_CasterModifier[0x10]; // 0x15b0        
        // m_CasterDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterDebuffModifier;
        char m_CasterDebuffModifier[0x10]; // 0x15c0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x15d0        
        // metadata: MPropertyGroupName "Visuals"
        // m_CastDelayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle;
        char m_CastDelayParticle[0xe0]; // 0x15e0        
        // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
        char m_TeleportTrailParticle[0xe0]; // 0x16c0        
        // metadata: MPropertyGroupName "Gameplay"
        float m_flGroundProbeSpeed; // 0x17a0        
        float m_flGroundStepDown; // 0x17a4        
        float m_flGroundStepUp; // 0x17a8        
        int32_t m_iMaxGroundIterations; // 0x17ac        
        float m_flVelocityScale; // 0x17b0        
        [[maybe_unused]] std::uint8_t pad_0x17b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem_WarpStone_VData because it is not a standard-layout class
    static_assert(sizeof(CItem_WarpStone_VData) == 0x17b8);
};
