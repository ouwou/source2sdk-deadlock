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
    // Size: 0x148
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawn_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_pszSprintState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszSprintState;
        char m_pszSprintState[0x28]; // 0x18        
        // m_pszFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszFullBodySequence;
        char m_pszFullBodySequence[0x28]; // 0x40        
        // m_pszFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszFlinchType;
        char m_pszFlinchType[0x28]; // 0x68        
        // m_pszMaxSpeedState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszMaxSpeedState;
        char m_pszMaxSpeedState[0x28]; // 0x90        
        // m_pszDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDeathSequence;
        char m_pszDeathSequence[0x28]; // 0xb8        
        CAnimGraphTagRef m_sAnimClippedMovement; // 0xe0        
        CAnimGraphTagRef m_sDisableGravity; // 0xf8        
        CAnimGraphTagRef m_sDirectAirControl; // 0x110        
        // m_bHardLanding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHardLanding;
        char m_bHardLanding[0x20]; // 0x128        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn_GraphController) == 0x148);
};
