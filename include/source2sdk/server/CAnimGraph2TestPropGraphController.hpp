#pragma once
#include "source2sdk/client/CAnimGraph2ControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x30
    // Has VTable
    #pragma pack(push, 1)
    class CAnimGraph2TestPropGraphController : public client::CAnimGraph2ControllerBase
    {
    public:
        // m_TROOPER_MovementState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_TROOPER_MovementState;
        char m_TROOPER_MovementState[0x20]; // 0x10        
        
        // Static fields:
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAnimGraph2TestPropGraphController")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAnimGraph2TestPropGraphController because it is not a standard-layout class
    static_assert(sizeof(CAnimGraph2TestPropGraphController) == 0x30);
};
