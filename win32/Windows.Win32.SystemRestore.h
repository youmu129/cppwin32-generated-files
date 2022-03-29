// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_SystemRestore_H
#define WIN32_Windows_Win32_SystemRestore_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.SystemRestore.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::SystemRestore
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL SRSetRestorePointA(Windows::Win32::SystemRestore::RESTOREPOINTINFOA* pRestorePtSpec, Windows::Win32::SystemRestore::STATEMGRSTATUS* pSMgrStatus)
    {
        auto win32_impl_result = WIN32_IMPL_SRSetRestorePointA(pRestorePtSpec, pSMgrStatus);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL SRSetRestorePointW(Windows::Win32::SystemRestore::RESTOREPOINTINFOW* pRestorePtSpec, Windows::Win32::SystemRestore::STATEMGRSTATUS* pSMgrStatus)
    {
        auto win32_impl_result = WIN32_IMPL_SRSetRestorePointW(pRestorePtSpec, pSMgrStatus);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif