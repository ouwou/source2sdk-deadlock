#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 33
    // Alignment: 4
    // Size: 0x4
    enum class EUISound : std::uint32_t
    {
        // MPropertySuppressEnumerator
        EUISound_Invalid = 0xffffffff,
        // MPropertyFriendlyName "Main Menu Hover"
        EMainMenuHover = 0x0,
        // MPropertyFriendlyName "Main Menu Activate"
        EMainMenuActivate = 0x1,
        // MPropertyFriendlyName "Shop Mod Hover"
        EShopModHover = 0x2,
        // MPropertyFriendlyName "Shop Mod Activate"
        EShopModActivate = 0x3,
        // MPropertyFriendlyName "Shop Mod Destroy"
        EShopModDestroy = 0x4,
        // MPropertyFriendlyName "Ability UI Hover"
        EAbilityHover = 0x5,
        // MPropertyFriendlyName "Ability UI Activate"
        EAbilityActivate = 0x6,
        // MPropertyFriendlyName "Ability Upgrade UI Hover"
        EAbilityUpgradeHover = 0x7,
        // MPropertyFriendlyName "Ability Upgrade UI Activate"
        EAbilityUpgradeActivate = 0x8,
        // MPropertyFriendlyName "Social Menu Hover"
        ESocialMenuHover = 0x9,
        // MPropertyFriendlyName "Social Menu Activate"
        ESocialMenuActivate = 0xa,
        // MPropertyFriendlyName "Shop Enter"
        EShopEnter = 0xb,
        // MPropertyFriendlyName "Shop Exit"
        EShopExit = 0xc,
        // MPropertyFriendlyName "Shop Exit Alarm (shop force closed on player)"
        EShopExitAlarm = 0xd,
        // MPropertyFriendlyName "Hovering the hero card on the hero grid page"
        EHeroCardHover = 0xe,
        // MPropertyFriendlyName "Activating the hero card on the hero grid page"
        EHeroCardActivate = 0xf,
        // MPropertyFriendlyName "Clear Roster Button Hover"
        EClearRosterHover = 0x10,
        // MPropertyFriendlyName "Clear Roster Button Activate"
        EClearRosterActivate = 0x11,
        // MPropertyFriendlyName "Sound that plays when buying an active item."
        EPurchaseActiveItem = 0x12,
        // MPropertyFriendlyName "Sound that plays when buying an active item"
        EPurchaseImbuedItem = 0x13,
        // MPropertyFriendlyName "Sound that plays when the play button is clicked"
        EPlayButtonClicked = 0x14,
        // MPropertyFriendlyName "Sound that plays when the Weapon tab is clicked in the shop"
        EShopFilterWeaponClicked = 0x15,
        // MPropertyFriendlyName "Sound that plays when the Vitality tab is clicked in the shop"
        EShopFilterVitalityClicked = 0x16,
        // MPropertyFriendlyName "Sound that plays when the Magic tab is clicked in the shop"
        EShopFilterMagicClicked = 0x17,
        // MPropertyFriendlyName "Sound that plays when the Favorites tab is clicked in the shop"
        EShopFilterFavoritesClicked = 0x18,
        // MPropertyFriendlyName "Sound that plays when you invite a friend to the party"
        EMainMenuPartyInvited = 0x19,
        // MPropertyFriendlyName "Sound that plays when you leave a party"
        EMainMenuPartyLeave = 0x1a,
        // MPropertyFriendlyName "Sound that plays when a person joins the party"
        EMainMenuPartyNewMember = 0x1b,
        // MPropertyFriendlyName "Sound that plays when a party enters the choose hero screen"
        EMainMenuPartyPickHeroesEnter = 0x1c,
        // MPropertyFriendlyName "Sound that plays when a party member clicks the 'Enter Queue' button"
        EMainMenuPartyPickHeroesConfirm = 0x1d,
        // MPropertyFriendlyName "Sound that plays when a party enters the queue"
        EMainMenuPartyPickHeroesExit = 0x1e,
        // MPropertySuppressEnumerator
        EUISoundCount = 0x1f,
    };
};
