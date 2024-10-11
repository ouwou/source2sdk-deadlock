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
    // Size: 0x500
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawn_GraphController2 : public client::CAnimGraphControllerBase
    {
    public:
        // m_b_Aiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Aiming;
        char m_b_Aiming[0x18]; // 0xc8        
        // m_b_AirDash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_AirDash;
        char m_b_AirDash[0x18]; // 0xe0        
        // m_b_Crouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Crouching;
        char m_b_Crouching[0x18]; // 0xf8        
        // m_b_DashJump has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_DashJump;
        char m_b_DashJump[0x18]; // 0x110        
        // m_b_InAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_InAir;
        char m_b_InAir[0x18]; // 0x128        
        // m_b_KnockedDown has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_KnockedDown;
        char m_b_KnockedDown[0x18]; // 0x140        
        // m_b_ParryActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_ParryActive;
        char m_b_ParryActive[0x18]; // 0x158        
        // m_b_ParrySuccess has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_ParrySuccess;
        char m_b_ParrySuccess[0x18]; // 0x170        
        // m_b_PredictionError has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_PredictionError;
        char m_b_PredictionError[0x18]; // 0x188        
        // m_b_PsychicLiftSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_PsychicLiftSelf;
        char m_b_PsychicLiftSelf[0x18]; // 0x1a0        
        // m_b_QuickReload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_QuickReload;
        char m_b_QuickReload[0x18]; // 0x1b8        
        // m_b_Reloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Reloading;
        char m_b_Reloading[0x18]; // 0x1d0        
        // m_b_SelfCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_SelfCast;
        char m_b_SelfCast[0x18]; // 0x1e8        
        // m_b_Shoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Shoot;
        char m_b_Shoot[0x18]; // 0x200        
        // m_b_ShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_b_ShootAlt;
        char m_b_ShootAlt[0x18]; // 0x218        
        // m_b_Shooting has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Shooting;
        char m_b_Shooting[0x18]; // 0x230        
        // m_b_SleepSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_SleepSelf;
        char m_b_SleepSelf[0x18]; // 0x248        
        // m_b_SlideGetup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_SlideGetup;
        char m_b_SlideGetup[0x18]; // 0x260        
        // m_b_Sliding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_Sliding;
        char m_b_Sliding[0x18]; // 0x278        
        // m_b_StartGroundDash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_StartGroundDash;
        char m_b_StartGroundDash[0x18]; // 0x290        
        // m_b_ZipLining has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<bool> m_b_ZipLining;
        char m_b_ZipLining[0x18]; // 0x2a8        
        // m_b_ReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_b_ReloadingSingleRoundStart;
        char m_b_ReloadingSingleRoundStart[0x18]; // 0x2c0        
        // m_b_ReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamOptionalRef<bool> m_b_ReloadingSingleRound;
        char m_b_ReloadingSingleRound[0x18]; // 0x2d8        
        // m_fl_AirDashHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_AirDashHeading;
        char m_fl_AirDashHeading[0x18]; // 0x2f0        
        // m_fl_Crouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_Crouching;
        char m_fl_Crouching[0x18]; // 0x308        
        // m_fl_ForwardSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_ForwardSpeed;
        char m_fl_ForwardSpeed[0x18]; // 0x320        
        // m_fl_LookHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_LookHeading;
        char m_fl_LookHeading[0x18]; // 0x338        
        // m_fl_LookPitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_LookPitch;
        char m_fl_LookPitch[0x18]; // 0x350        
        // m_fl_MeleeRandom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_MeleeRandom;
        char m_fl_MeleeRandom[0x18]; // 0x368        
        // m_fl_MoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_MoveSpeed;
        char m_fl_MoveSpeed[0x18]; // 0x380        
        // m_fl_ReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_ReloadFraction;
        char m_fl_ReloadFraction[0x18]; // 0x398        
        // m_fl_ReloadTransitionTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_ReloadTransitionTime;
        char m_fl_ReloadTransitionTime[0x18]; // 0x3b0        
        // m_fl_StrafeSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<float> m_fl_StrafeSpeed;
        char m_fl_StrafeSpeed[0x18]; // 0x3c8        
        // m_e_DeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_DeathSequence;
        char m_e_DeathSequence[0x18]; // 0x3e0        
        // m_e_FlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_FlinchType;
        char m_e_FlinchType[0x18]; // 0x3f8        
        // m_e_FullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_FullBodySequence;
        char m_e_FullBodySequence[0x18]; // 0x410        
        // m_e_GenericCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_GenericCast;
        char m_e_GenericCast[0x18]; // 0x428        
        // m_e_GenericThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_GenericThrow;
        char m_e_GenericThrow[0x18]; // 0x440        
        // m_e_LaunchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_LaunchType;
        char m_e_LaunchType[0x18]; // 0x458        
        // m_e_Melee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_Melee;
        char m_e_Melee[0x18]; // 0x470        
        // m_e_MovementType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_MovementType;
        char m_e_MovementType[0x18]; // 0x488        
        // m_e_RopeClimb has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_RopeClimb;
        char m_e_RopeClimb[0x18]; // 0x4a0        
        // m_e_SelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_SelectedAbility;
        char m_e_SelectedAbility[0x18]; // 0x4b8        
        // m_e_ZiplineState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<CGlobalSymbol> m_e_ZiplineState;
        char m_e_ZiplineState[0x18]; // 0x4d0        
        // m_Locomotion_Facing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph2ParamRef<Vector> m_Locomotion_Facing;
        char m_Locomotion_Facing[0x18]; // 0x4e8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController2")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController2 because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn_GraphController2) == 0x500);
};
