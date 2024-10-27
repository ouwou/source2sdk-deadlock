#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CBaseAnimGraphAnimGraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sDestructiblePartDestroyedHitGroup;
        char m_sDestructiblePartDestroyedHitGroup[0x28]; // 0x80        
        // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nDestructiblePartDestroyedPartIndex;
        char m_nDestructiblePartDestroyedPartIndex[0x20]; // 0xa8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CBaseAnimGraphAnimGraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CBaseAnimGraphAnimGraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraphAnimGraphController because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraphAnimGraphController) == 0xc8);
};
