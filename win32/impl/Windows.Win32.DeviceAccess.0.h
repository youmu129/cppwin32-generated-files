// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DeviceAccess_0_H
#define WIN32_Windows_Win32_DeviceAccess_0_H
WIN32_EXPORT namespace win32::Windows::Win32::DeviceAccess
{
#pragma region enums
#pragma endregion enums

#pragma region forward_declarations
    struct ICreateDeviceAccessAsync;
    struct IDeviceIoControl;
    struct IDeviceRequestCompletionCallback;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::DeviceAccess::ICreateDeviceAccessAsync>{ 0x3474628F,0x683D,0x42D2,{ 0xAB,0xCB,0xDB,0x01,0x8C,0x65,0x03,0xBC } }; // 3474628F-683D-42D2-ABCB-DB018C6503BC
    template <> inline constexpr guid guid_v<Windows::Win32::DeviceAccess::IDeviceIoControl>{ 0x9EEFE161,0x23AB,0x4F18,{ 0x9B,0x49,0x99,0x1B,0x58,0x6A,0xE9,0x70 } }; // 9EEFE161-23AB-4F18-9B49-991B586AE970
    template <> inline constexpr guid guid_v<Windows::Win32::DeviceAccess::IDeviceRequestCompletionCallback>{ 0x999BAD24,0x9ACD,0x45BB,{ 0x86,0x69,0x2A,0x2F,0xC0,0x28,0x8B,0x04 } }; // 999BAD24-9ACD-45BB-8669-2A2FC0288B04
#pragma endregion guids

}
#endif