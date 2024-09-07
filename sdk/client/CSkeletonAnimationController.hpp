#pragma once
#include "client/ISkeletonAnimationController.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CSkeletonInstance;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Is Abstract
	class CSkeletonAnimationController : public client::ISkeletonAnimationController
	{
	public:
		// MNetworkDisable
		client::CSkeletonInstance* m_pSkeletonInstance; // 0x8		
	};
};
