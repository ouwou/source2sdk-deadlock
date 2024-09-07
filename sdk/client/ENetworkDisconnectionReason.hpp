#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Enumerator count: 119
	// Alignment: 4
	// Size: 0x4
	enum class ENetworkDisconnectionReason : std::uint32_t
	{
		NETWORK_DISCONNECT_INVALID = 0x0,
		NETWORK_DISCONNECT_SHUTDOWN = 0x1,
		NETWORK_DISCONNECT_DISCONNECT_BY_USER = 0x2,
		NETWORK_DISCONNECT_DISCONNECT_BY_SERVER = 0x3,
		NETWORK_DISCONNECT_LOST = 0x4,
		NETWORK_DISCONNECT_OVERFLOW = 0x5,
		NETWORK_DISCONNECT_STEAM_BANNED = 0x6,
		NETWORK_DISCONNECT_STEAM_INUSE = 0x7,
		NETWORK_DISCONNECT_STEAM_TICKET = 0x8,
		NETWORK_DISCONNECT_STEAM_LOGON = 0x9,
		NETWORK_DISCONNECT_STEAM_AUTHCANCELLED = 0xa,
		NETWORK_DISCONNECT_STEAM_AUTHALREADYUSED = 0xb,
		NETWORK_DISCONNECT_STEAM_AUTHINVALID = 0xc,
		NETWORK_DISCONNECT_STEAM_VACBANSTATE = 0xd,
		NETWORK_DISCONNECT_STEAM_LOGGED_IN_ELSEWHERE = 0xe,
		NETWORK_DISCONNECT_STEAM_VAC_CHECK_TIMEDOUT = 0xf,
		NETWORK_DISCONNECT_STEAM_DROPPED = 0x10,
		NETWORK_DISCONNECT_STEAM_OWNERSHIP = 0x11,
		NETWORK_DISCONNECT_SERVERINFO_OVERFLOW = 0x12,
		NETWORK_DISCONNECT_TICKMSG_OVERFLOW = 0x13,
		NETWORK_DISCONNECT_STRINGTABLEMSG_OVERFLOW = 0x14,
		NETWORK_DISCONNECT_DELTAENTMSG_OVERFLOW = 0x15,
		NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW = 0x16,
		NETWORK_DISCONNECT_SOUNDSMSG_OVERFLOW = 0x17,
		NETWORK_DISCONNECT_SNAPSHOTOVERFLOW = 0x18,
		NETWORK_DISCONNECT_SNAPSHOTERROR = 0x19,
		NETWORK_DISCONNECT_RELIABLEOVERFLOW = 0x1a,
		NETWORK_DISCONNECT_BADDELTATICK = 0x1b,
		NETWORK_DISCONNECT_NOMORESPLITS = 0x1c,
		NETWORK_DISCONNECT_TIMEDOUT = 0x1d,
		NETWORK_DISCONNECT_DISCONNECTED = 0x1e,
		NETWORK_DISCONNECT_LEAVINGSPLIT = 0x1f,
		NETWORK_DISCONNECT_DIFFERENTCLASSTABLES = 0x20,
		NETWORK_DISCONNECT_BADRELAYPASSWORD = 0x21,
		NETWORK_DISCONNECT_BADSPECTATORPASSWORD = 0x22,
		NETWORK_DISCONNECT_HLTVRESTRICTED = 0x23,
		NETWORK_DISCONNECT_NOSPECTATORS = 0x24,
		NETWORK_DISCONNECT_HLTVUNAVAILABLE = 0x25,
		NETWORK_DISCONNECT_HLTVSTOP = 0x26,
		NETWORK_DISCONNECT_KICKED = 0x27,
		NETWORK_DISCONNECT_BANADDED = 0x28,
		NETWORK_DISCONNECT_KICKBANADDED = 0x29,
		NETWORK_DISCONNECT_HLTVDIRECT = 0x2a,
		NETWORK_DISCONNECT_PURESERVER_CLIENTEXTRA = 0x2b,
		NETWORK_DISCONNECT_PURESERVER_MISMATCH = 0x2c,
		NETWORK_DISCONNECT_USERCMD = 0x2d,
		NETWORK_DISCONNECT_REJECTED_BY_GAME = 0x2e,
		NETWORK_DISCONNECT_MESSAGE_PARSE_ERROR = 0x2f,
		NETWORK_DISCONNECT_INVALID_MESSAGE_ERROR = 0x30,
		NETWORK_DISCONNECT_BAD_SERVER_PASSWORD = 0x31,
		NETWORK_DISCONNECT_DIRECT_CONNECT_RESERVATION = 0x32,
		NETWORK_DISCONNECT_CONNECTION_FAILURE = 0x33,
		NETWORK_DISCONNECT_NO_PEER_GROUP_HANDLERS = 0x34,
		NETWORK_DISCONNECT_RECONNECTION = 0x35,
		NETWORK_DISCONNECT_LOOPSHUTDOWN = 0x36,
		NETWORK_DISCONNECT_LOOPDEACTIVATE = 0x37,
		NETWORK_DISCONNECT_HOST_ENDGAME = 0x38,
		NETWORK_DISCONNECT_LOOP_LEVELLOAD_ACTIVATE = 0x39,
		NETWORK_DISCONNECT_CREATE_SERVER_FAILED = 0x3a,
		NETWORK_DISCONNECT_EXITING = 0x3b,
		NETWORK_DISCONNECT_REQUEST_HOSTSTATE_IDLE = 0x3c,
		NETWORK_DISCONNECT_REQUEST_HOSTSTATE_HLTVRELAY = 0x3d,
		NETWORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL = 0x3e,
		NETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_MAP = 0x3f,
		NETWORK_DISCONNECT_CLIENT_NO_MAP = 0x40,
		NETWORK_DISCONNECT_CLIENT_DIFFERENT_MAP = 0x41,
		NETWORK_DISCONNECT_SERVER_REQUIRES_STEAM = 0x42,
		NETWORK_DISCONNECT_STEAM_DENY_MISC = 0x43,
		NETWORK_DISCONNECT_STEAM_DENY_BAD_ANTI_CHEAT = 0x44,
		NETWORK_DISCONNECT_SERVER_SHUTDOWN = 0x45,
		NETWORK_DISCONNECT_REPLAY_INCOMPATIBLE = 0x47,
		NETWORK_DISCONNECT_CONNECT_REQUEST_TIMEDOUT = 0x48,
		NETWORK_DISCONNECT_SERVER_INCOMPATIBLE = 0x49,
		NETWORK_DISCONNECT_LOCALPROBLEM_MANYRELAYS = 0x4a,
		NETWORK_DISCONNECT_LOCALPROBLEM_HOSTEDSERVERPRIMARYRELAY = 0x4b,
		NETWORK_DISCONNECT_LOCALPROBLEM_NETWORKCONFIG = 0x4c,
		NETWORK_DISCONNECT_LOCALPROBLEM_OTHER = 0x4d,
		NETWORK_DISCONNECT_REMOTE_TIMEOUT = 0x4f,
		NETWORK_DISCONNECT_REMOTE_TIMEOUT_CONNECTING = 0x50,
		NETWORK_DISCONNECT_REMOTE_OTHER = 0x51,
		NETWORK_DISCONNECT_REMOTE_BADCRYPT = 0x52,
		NETWORK_DISCONNECT_REMOTE_CERTNOTTRUSTED = 0x53,
		NETWORK_DISCONNECT_UNUSUAL = 0x54,
		NETWORK_DISCONNECT_INTERNAL_ERROR = 0x55,
		NETWORK_DISCONNECT_REJECT_BADCHALLENGE = 0x80,
		NETWORK_DISCONNECT_REJECT_NOLOBBY = 0x81,
		NETWORK_DISCONNECT_REJECT_BACKGROUND_MAP = 0x82,
		NETWORK_DISCONNECT_REJECT_SINGLE_PLAYER = 0x83,
		NETWORK_DISCONNECT_REJECT_HIDDEN_GAME = 0x84,
		NETWORK_DISCONNECT_REJECT_LANRESTRICT = 0x85,
		NETWORK_DISCONNECT_REJECT_BADPASSWORD = 0x86,
		NETWORK_DISCONNECT_REJECT_SERVERFULL = 0x87,
		NETWORK_DISCONNECT_REJECT_INVALIDRESERVATION = 0x88,
		NETWORK_DISCONNECT_REJECT_FAILEDCHANNEL = 0x89,
		NETWORK_DISCONNECT_REJECT_CONNECT_FROM_LOBBY = 0x8a,
		NETWORK_DISCONNECT_REJECT_RESERVED_FOR_LOBBY = 0x8b,
		NETWORK_DISCONNECT_REJECT_INVALIDKEYLENGTH = 0x8c,
		NETWORK_DISCONNECT_REJECT_OLDPROTOCOL = 0x8d,
		NETWORK_DISCONNECT_REJECT_NEWPROTOCOL = 0x8e,
		NETWORK_DISCONNECT_REJECT_INVALIDCONNECTION = 0x8f,
		NETWORK_DISCONNECT_REJECT_INVALIDCERTLEN = 0x90,
		NETWORK_DISCONNECT_REJECT_INVALIDSTEAMCERTLEN = 0x91,
		NETWORK_DISCONNECT_REJECT_STEAM = 0x92,
		NETWORK_DISCONNECT_REJECT_SERVERAUTHDISABLED = 0x93,
		NETWORK_DISCONNECT_REJECT_SERVERCDKEYAUTHINVALID = 0x94,
		NETWORK_DISCONNECT_REJECT_BANNED = 0x95,
		NETWORK_DISCONNECT_KICKED_TEAMKILLING = 0x96,
		NETWORK_DISCONNECT_KICKED_TK_START = 0x97,
		NETWORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT = 0x98,
		NETWORK_DISCONNECT_KICKED_CONVICTEDACCOUNT = 0x99,
		NETWORK_DISCONNECT_KICKED_COMPETITIVECOOLDOWN = 0x9a,
		NETWORK_DISCONNECT_KICKED_TEAMHURTING = 0x9b,
		NETWORK_DISCONNECT_KICKED_HOSTAGEKILLING = 0x9c,
		NETWORK_DISCONNECT_KICKED_VOTEDOFF = 0x9d,
		NETWORK_DISCONNECT_KICKED_IDLE = 0x9e,
		NETWORK_DISCONNECT_KICKED_SUICIDE = 0x9f,
		NETWORK_DISCONNECT_KICKED_NOSTEAMLOGIN = 0xa0,
		NETWORK_DISCONNECT_KICKED_NOSTEAMTICKET = 0xa1,
		NETWORK_DISCONNECT_KICKED_INPUTAUTOMATION = 0xa2,
	};
};
