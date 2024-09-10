#pragma once
#include "source2sdk/client/CitadelCameraDistanceOperationDef_t.hpp"
#include "source2sdk/client/CitadelCameraFOVOperationDef_t.hpp"
#include "source2sdk/client/CitadelCameraHorizOffsetOperationDef_t.hpp"
#include "source2sdk/client/CitadelCameraTargetPosOperationDef_t.hpp"
#include "source2sdk/client/CitadelCameraVertOffsetOperationDef_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x80
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelCameraOperationsSequence_t
    {
    public:
        // metadata: MPropertySuppressField
        CUtlStringToken m_strToken; // 0x0        
        // metadata: MPropertySuppressField
        bool m_bIsEmpty; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        // m_vecDistanceOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelCameraDistanceOperationDef_t> m_vecDistanceOperations;
        char m_vecDistanceOperations[0x18]; // 0x8        
        // m_vecFOVOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelCameraFOVOperationDef_t> m_vecFOVOperations;
        char m_vecFOVOperations[0x18]; // 0x20        
        // m_vecTargetPosOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelCameraTargetPosOperationDef_t> m_vecTargetPosOperations;
        char m_vecTargetPosOperations[0x18]; // 0x38        
        // m_vecVertOffsetOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelCameraVertOffsetOperationDef_t> m_vecVertOffsetOperations;
        char m_vecVertOffsetOperations[0x18]; // 0x50        
        // m_vecHorizOffsetOperations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CitadelCameraHorizOffsetOperationDef_t> m_vecHorizOffsetOperations;
        char m_vecHorizOffsetOperations[0x18]; // 0x68        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_strToken) == 0x0);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_bIsEmpty) == 0x4);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_vecDistanceOperations) == 0x8);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_vecFOVOperations) == 0x20);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_vecTargetPosOperations) == 0x38);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_vecVertOffsetOperations) == 0x50);
    static_assert(offsetof(CitadelCameraOperationsSequence_t, m_vecHorizOffsetOperations) == 0x68);
    
    static_assert(sizeof(CitadelCameraOperationsSequence_t) == 0x80);
};
