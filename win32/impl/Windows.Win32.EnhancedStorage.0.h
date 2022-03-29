// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_EnhancedStorage_0_H
#define WIN32_Windows_Win32_EnhancedStorage_0_H
WIN32_EXPORT namespace win32::Windows::Win32::EnhancedStorage
{
#pragma region enums
    enum class ACT_AUTHORIZATION_STATE_VALUE : int32_t
    {
        ACT_UNAUTHORIZED = 0,
        ACT_AUTHORIZED = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ACT_AUTHORIZATION_STATE;
    struct ENHANCED_STORAGE_PASSWORD_SILO_INFORMATION;
    struct SILO_INFO;
    struct EnhancedStorageACT;
    struct EnhancedStorageSilo;
    struct EnhancedStorageSiloAction;
    struct EnumEnhancedStorageACT;
    struct IEnhancedStorageACT;
    struct IEnhancedStorageACT2;
    struct IEnhancedStorageACT3;
    struct IEnhancedStorageSilo;
    struct IEnhancedStorageSiloAction;
    struct IEnumEnhancedStorageACT;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::EnhancedStorageACT>{ 0xAF076A15,0x2ECE,0x4AD4,{ 0xBB,0x21,0x29,0xF0,0x40,0xE1,0x76,0xD8 } }; // AF076A15-2ECE-4AD4-BB21-29F040E176D8
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::EnhancedStorageSilo>{ 0xCB25220C,0x76C7,0x4FEE,{ 0x84,0x2B,0xF3,0x38,0x3C,0xD0,0x22,0xBC } }; // CB25220C-76C7-4FEE-842B-F3383CD022BC
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::EnhancedStorageSiloAction>{ 0x886D29DD,0xB506,0x466B,{ 0x9F,0xBF,0xB4,0x4F,0xF3,0x83,0xFB,0x3F } }; // 886D29DD-B506-466B-9FBF-B44FF383FB3F
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::EnumEnhancedStorageACT>{ 0xFE841493,0x835C,0x4FA3,{ 0xB6,0xCC,0xB4,0xB2,0xD4,0x71,0x98,0x48 } }; // FE841493-835C-4FA3-B6CC-B4B2D4719848
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnhancedStorageACT>{ 0x6E7781F4,0xE0F2,0x4239,{ 0xB9,0x76,0xA0,0x1A,0xBA,0xB5,0x29,0x30 } }; // 6E7781F4-E0F2-4239-B976-A01ABAB52930
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnhancedStorageACT2>{ 0x4DA57D2E,0x8EB3,0x41F6,{ 0xA0,0x7E,0x98,0xB5,0x2B,0x88,0x24,0x2B } }; // 4DA57D2E-8EB3-41F6-A07E-98B52B88242B
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnhancedStorageACT3>{ 0x022150A1,0x113D,0x11DF,{ 0xBB,0x61,0x00,0x1A,0xA0,0x1B,0xBC,0x58 } }; // 022150A1-113D-11DF-BB61-001AA01BBC58
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnhancedStorageSilo>{ 0x5AEF78C6,0x2242,0x4703,{ 0xBF,0x49,0x44,0xB2,0x93,0x57,0xA3,0x59 } }; // 5AEF78C6-2242-4703-BF49-44B29357A359
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnhancedStorageSiloAction>{ 0xB6F7F311,0x206F,0x4FF8,{ 0x9C,0x4B,0x27,0xEF,0xEE,0x77,0xA8,0x6F } }; // B6F7F311-206F-4FF8-9C4B-27EFEE77A86F
    template <> inline constexpr guid guid_v<Windows::Win32::EnhancedStorage::IEnumEnhancedStorageACT>{ 0x09B224BD,0x1335,0x4631,{ 0xA7,0xFF,0xCF,0xD3,0xA9,0x26,0x46,0xD7 } }; // 09B224BD-1335-4631-A7FF-CFD3A92646D7
#pragma endregion guids

}
#endif