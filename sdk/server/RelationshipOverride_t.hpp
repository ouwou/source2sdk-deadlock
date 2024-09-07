#pragma once
#include "client/Class_T.hpp"
#include "server/Relationship_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Destructor
	struct RelationshipOverride_t : public server::Relationship_t
	{
	public:
		CHandle<server::CBaseEntity> entity; // 0x8		
		client::Class_T classType; // 0xc		
	};
};
