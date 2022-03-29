// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DirectDraw_H
#define WIN32_Windows_Win32_DirectDraw_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.DirectDraw.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::DirectDraw
{
#pragma region methods
    inline int32_t DirectDrawEnumerateW(Windows::Win32::DirectDraw::LPDDENUMCALLBACKW* lpCallback, void* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawEnumerateW(lpCallback, lpContext);
        return win32_impl_result;
    }
    inline int32_t DirectDrawEnumerateA(Windows::Win32::DirectDraw::LPDDENUMCALLBACKA* lpCallback, void* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawEnumerateA(lpCallback, lpContext);
        return win32_impl_result;
    }
    inline int32_t DirectDrawEnumerateExW(Windows::Win32::DirectDraw::LPDDENUMCALLBACKEXW* lpCallback, void* lpContext, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawEnumerateExW(lpCallback, lpContext, dwFlags);
        return win32_impl_result;
    }
    inline int32_t DirectDrawEnumerateExA(Windows::Win32::DirectDraw::LPDDENUMCALLBACKEXA* lpCallback, void* lpContext, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawEnumerateExA(lpCallback, lpContext, dwFlags);
        return win32_impl_result;
    }
    inline int32_t DirectDrawCreate(::win32::guid* lpGUID, Windows::Win32::DirectDraw::IDirectDraw** lplpDD, Windows::Win32::Com::IUnknown* pUnkOuter)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
        return win32_impl_result;
    }
    inline int32_t DirectDrawCreateEx(::win32::guid* lpGuid, void** lplpDD, ::win32::guid* iid, Windows::Win32::Com::IUnknown* pUnkOuter)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawCreateEx(lpGuid, lplpDD, iid, pUnkOuter);
        return win32_impl_result;
    }
    inline int32_t DirectDrawCreateClipper(uint32_t dwFlags, Windows::Win32::DirectDraw::IDirectDrawClipper** lplpDDClipper, Windows::Win32::Com::IUnknown* pUnkOuter)
    {
        auto win32_impl_result = WIN32_IMPL_DirectDrawCreateClipper(dwFlags, lplpDDClipper, pUnkOuter);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif