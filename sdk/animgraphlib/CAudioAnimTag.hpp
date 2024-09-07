#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Audio Tag"
	class CAudioAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Sound Event"
		// MPropertyAttributeEditor "SoundPicker()"
		CUtlString m_clipName; // 0x58		
		// MPropertyFriendlyName "Attachment"
		// MPropertyAttributeChoiceName "Attachment"
		CUtlString m_attachmentName; // 0x60		
		// MPropertyFriendlyName "Volume"
		// MPropertyAttributeRange "0 1"
		float m_flVolume; // 0x68		
		// MPropertyFriendlyName "Stop on Tag End"
		bool m_bStopWhenTagEnds; // 0x6c		
		// MPropertyFriendlyName "Stop When Graph Destroyed"
		bool m_bStopWhenGraphEnds; // 0x6d		
		// MPropertyFriendlyName "Play on Server"
		bool m_bPlayOnServer; // 0x6e		
		// MPropertyFriendlyName "Play on Client"
		bool m_bPlayOnClient; // 0x6f		
	};
};
