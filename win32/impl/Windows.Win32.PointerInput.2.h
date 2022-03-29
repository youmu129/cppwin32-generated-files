// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_PointerInput_2_H
#define WIN32_Windows_Win32_PointerInput_2_H
#include "win32/impl/Windows.Win32.PointerInput.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall WIN32_IMPL_GetUnpredictedMessagePos() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerType(uint32_t pointerId, uint32_t* pointerType) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerCursorId(uint32_t pointerId, uint32_t* cursorId) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerInfo(uint32_t pointerId, win32::Windows::Win32::PointerInput::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerInfoHistory(uint32_t pointerId, uint32_t* entriesCount, win32::Windows::Win32::PointerInput::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFrameInfo(uint32_t pointerId, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFrameInfoHistory(uint32_t pointerId, uint32_t* entriesCount, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_INFO* pointerInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerTouchInfo(uint32_t pointerId, win32::Windows::Win32::PointerInput::POINTER_TOUCH_INFO* touchInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerTouchInfoHistory(uint32_t pointerId, uint32_t* entriesCount, win32::Windows::Win32::PointerInput::POINTER_TOUCH_INFO* touchInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFrameTouchInfo(uint32_t pointerId, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_TOUCH_INFO* touchInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFrameTouchInfoHistory(uint32_t pointerId, uint32_t* entriesCount, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_TOUCH_INFO* touchInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerPenInfo(uint32_t pointerId, win32::Windows::Win32::PointerInput::POINTER_PEN_INFO* penInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerPenInfoHistory(uint32_t pointerId, uint32_t* entriesCount, win32::Windows::Win32::PointerInput::POINTER_PEN_INFO* penInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFramePenInfo(uint32_t pointerId, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_PEN_INFO* penInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerFramePenInfoHistory(uint32_t pointerId, uint32_t* entriesCount, uint32_t* pointerCount, win32::Windows::Win32::PointerInput::POINTER_PEN_INFO* penInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SkipPointerFrameMessages(uint32_t pointerId) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_EnableMouseInPointer(win32::Windows::Win32::SystemServices::BOOL fEnable) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_IsMouseInPointerEnabled() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_GetPointerInputTransform(uint32_t pointerId, uint32_t historyCount, win32::Windows::Win32::PointerInput::INPUT_TRANSFORM* inputTransform) noexcept;
}
WIN32_IMPL_LINK(GetUnpredictedMessagePos, 0)
WIN32_IMPL_LINK(GetPointerType, 8)
WIN32_IMPL_LINK(GetPointerCursorId, 8)
WIN32_IMPL_LINK(GetPointerInfo, 8)
WIN32_IMPL_LINK(GetPointerInfoHistory, 12)
WIN32_IMPL_LINK(GetPointerFrameInfo, 12)
WIN32_IMPL_LINK(GetPointerFrameInfoHistory, 16)
WIN32_IMPL_LINK(GetPointerTouchInfo, 8)
WIN32_IMPL_LINK(GetPointerTouchInfoHistory, 12)
WIN32_IMPL_LINK(GetPointerFrameTouchInfo, 12)
WIN32_IMPL_LINK(GetPointerFrameTouchInfoHistory, 16)
WIN32_IMPL_LINK(GetPointerPenInfo, 8)
WIN32_IMPL_LINK(GetPointerPenInfoHistory, 12)
WIN32_IMPL_LINK(GetPointerFramePenInfo, 12)
WIN32_IMPL_LINK(GetPointerFramePenInfoHistory, 16)
WIN32_IMPL_LINK(SkipPointerFrameMessages, 4)
WIN32_IMPL_LINK(EnableMouseInPointer, 4)
WIN32_IMPL_LINK(IsMouseInPointerEnabled, 0)
WIN32_IMPL_LINK(GetPointerInputTransform, 12)

#pragma endregion abi_methods

#endif