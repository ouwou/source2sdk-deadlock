#pragma once
#include "materialsystem2/PostProcessingBloomParameters_t.hpp"
#include "materialsystem2/PostProcessingLocalContrastParameters_t.hpp"
#include "materialsystem2/PostProcessingTonemapParameters_t.hpp"
#include "materialsystem2/PostProcessingVignetteParameters_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 8
	// Size: 0x118
	// 
	// MGetKV3ClassDefaults
	struct PostProcessingResource_t
	{
	public:
		bool m_bHasTonemapParams; // 0x0		
		materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x4		
		bool m_bHasBloomParams; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
	public:
		materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x44		
		bool m_bHasVignetteParams; // 0xb4		
	private:
		[[maybe_unused]] uint8_t __pad00b5[0x3]; // 0xb5
	public:
		materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8		
		bool m_bHasLocalContrastParams; // 0xdc		
	private:
		[[maybe_unused]] uint8_t __pad00dd[0x3]; // 0xdd
	public:
		materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0		
		int32_t m_nColorCorrectionVolumeDim; // 0xf4		
		CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8		
		bool m_bHasColorCorrection; // 0x110		
	};
};
