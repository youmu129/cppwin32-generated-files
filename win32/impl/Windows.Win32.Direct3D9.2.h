// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Direct3D9_2_H
#define WIN32_Windows_Win32_Direct3D9_2_H
#include "win32/impl/Windows.Win32.Direct3D9.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_D3DPERF_BeginEvent(uint32_t col, uint16_t* wszName) noexcept;
    int32_t __stdcall WIN32_IMPL_D3DPERF_EndEvent() noexcept;
    void __stdcall WIN32_IMPL_D3DPERF_SetMarker(uint32_t col, uint16_t* wszName) noexcept;
    void __stdcall WIN32_IMPL_D3DPERF_SetRegion(uint32_t col, uint16_t* wszName) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_D3DPERF_QueryRepeatFrame() noexcept;
    void __stdcall WIN32_IMPL_D3DPERF_SetOptions(uint32_t dwOptions) noexcept;
    uint32_t __stdcall WIN32_IMPL_D3DPERF_GetStatus() noexcept;
}
WIN32_IMPL_LINK(D3DPERF_BeginEvent, 8)
WIN32_IMPL_LINK(D3DPERF_EndEvent, 0)
WIN32_IMPL_LINK(D3DPERF_SetMarker, 8)
WIN32_IMPL_LINK(D3DPERF_SetRegion, 8)
WIN32_IMPL_LINK(D3DPERF_QueryRepeatFrame, 0)
WIN32_IMPL_LINK(D3DPERF_SetOptions, 4)
WIN32_IMPL_LINK(D3DPERF_GetStatus, 0)

#pragma endregion abi_methods

#endif