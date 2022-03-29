// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Magnification_0_H
#define WIN32_Windows_Win32_Magnification_0_H
WIN32_EXPORT namespace win32::Windows::Win32::DisplayDevices
{
    struct RECT;
}
WIN32_EXPORT namespace win32::Windows::Win32::Gdi
{
    struct HRGN;
}
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::WindowsAndMessaging
{
    struct HWND;
}
WIN32_EXPORT namespace win32::Windows::Win32::Magnification
{
#pragma region enums
#pragma endregion enums

#pragma region forward_declarations
    struct MAGCOLOREFFECT;
    struct MAGIMAGEHEADER;
    struct MAGTRANSFORM;
#pragma endregion forward_declarations

#pragma region delegates
    using MagImageScalingCallback = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::WindowsAndMessaging::HWND, void*, Windows::Win32::Magnification::MAGIMAGEHEADER, void*, Windows::Win32::Magnification::MAGIMAGEHEADER, Windows::Win32::DisplayDevices::RECT, Windows::Win32::DisplayDevices::RECT, Windows::Win32::Gdi::HRGN);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif