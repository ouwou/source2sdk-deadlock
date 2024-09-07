#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimGraphSettingsManager.hpp"
#include "animgraphlib/CAnimNodePath.hpp"
#include "animgraphlib/CAnimParameterManagerUpdater.hpp"
#include "animgraphlib/CAnimScriptManager.hpp"
#include "animgraphlib/CAnimTagManagerUpdater.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CStaticPoseCacheBuilder.hpp"
#include "modellib/CAnimSkeleton.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x100
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimUpdateSharedData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimUpdateNodeBase>> m_nodes; // 0x10		
		CUtlHashtable<animgraphlib::CAnimNodePath,int32_t> m_nodeIndexMap; // 0x28		
		CUtlVector<CSmartPtr<animgraphlib::CAnimComponentUpdater>> m_components; // 0x48		
		CSmartPtr<animgraphlib::CAnimParameterManagerUpdater> m_pParamListUpdater; // 0x60		
		CSmartPtr<animgraphlib::CAnimTagManagerUpdater> m_pTagManagerUpdater; // 0x68		
		CSmartPtr<animgraphlib::CAnimScriptManager> m_scriptManager; // 0x70		
		animgraphlib::CAnimGraphSettingsManager m_settings; // 0x78		
		CSmartPtr<animgraphlib::CStaticPoseCacheBuilder> m_pStaticPoseCache; // 0xa8		
		CSmartPtr<modellib::CAnimSkeleton> m_pSkeleton; // 0xb0		
		animgraphlib::CAnimNodePath m_rootNodePath; // 0xb8		
	};
};
