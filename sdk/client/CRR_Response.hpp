#pragma once
#include "client/ResponseFollowup.hpp"
#include "client/ResponseParams.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1e8
	class CRR_Response
	{
	public:
		uint8_t m_Type; // 0x0		
		char m_szResponseName[192]; // 0x1		
		char m_szMatchingRule[128]; // 0xc1		
	private:
		[[maybe_unused]] uint8_t __pad0141[0x7]; // 0x141
	public:
		client::ResponseParams m_Params; // 0x148		
		float m_fMatchScore; // 0x168		
	private:
		[[maybe_unused]] uint8_t __pad016c[0x4]; // 0x16c
	public:
		char* m_szSpeakerContext; // 0x170		
		char* m_szWorldContext; // 0x178		
		client::ResponseFollowup m_Followup; // 0x180		
	private:
		[[maybe_unused]] uint8_t __pad01b1[0x1]; // 0x1b1
	public:
		CUtlSymbol m_recipientFilter; // 0x1b2		
	private:
		[[maybe_unused]] uint8_t __pad01b4[0x4]; // 0x1b4
	public:
		CUtlVector<CUtlSymbol> m_pchCriteriaNames; // 0x1b8		
		CUtlVector<char*> m_pchCriteriaValues; // 0x1d0		
	};
};
