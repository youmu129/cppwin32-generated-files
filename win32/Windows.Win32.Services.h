// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Services_H
#define WIN32_Windows_Win32_Services_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Services.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Services
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL ChangeServiceConfigA(Windows::Win32::Security::SC_HANDLE__* hService, uint32_t dwServiceType, uint32_t dwStartType, uint32_t dwErrorControl, int8_t* lpBinaryPathName, int8_t* lpLoadOrderGroup, uint32_t* lpdwTagId, int8_t* lpDependencies, int8_t* lpServiceStartName, int8_t* lpPassword, int8_t* lpDisplayName)
    {
        auto win32_impl_result = WIN32_IMPL_ChangeServiceConfigA(hService, dwServiceType, dwStartType, dwErrorControl, lpBinaryPathName, lpLoadOrderGroup, lpdwTagId, lpDependencies, lpServiceStartName, lpPassword, lpDisplayName);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL ChangeServiceConfigW(Windows::Win32::Security::SC_HANDLE__* hService, uint32_t dwServiceType, uint32_t dwStartType, uint32_t dwErrorControl, uint16_t* lpBinaryPathName, uint16_t* lpLoadOrderGroup, uint32_t* lpdwTagId, uint16_t* lpDependencies, uint16_t* lpServiceStartName, uint16_t* lpPassword, uint16_t* lpDisplayName)
    {
        auto win32_impl_result = WIN32_IMPL_ChangeServiceConfigW(hService, dwServiceType, dwStartType, dwErrorControl, lpBinaryPathName, lpLoadOrderGroup, lpdwTagId, lpDependencies, lpServiceStartName, lpPassword, lpDisplayName);
        return win32_impl_result;
    }
    inline Windows::Win32::Security::SC_HANDLE__* CreateServiceA(Windows::Win32::Security::SC_HANDLE__* hSCManager, int8_t* lpServiceName, int8_t* lpDisplayName, uint32_t dwDesiredAccess, uint32_t dwServiceType, uint32_t dwStartType, uint32_t dwErrorControl, int8_t* lpBinaryPathName, int8_t* lpLoadOrderGroup, uint32_t* lpdwTagId, int8_t* lpDependencies, int8_t* lpServiceStartName, int8_t* lpPassword)
    {
        auto win32_impl_result = WIN32_IMPL_CreateServiceA(hSCManager, lpServiceName, lpDisplayName, dwDesiredAccess, dwServiceType, dwStartType, dwErrorControl, lpBinaryPathName, lpLoadOrderGroup, lpdwTagId, lpDependencies, lpServiceStartName, lpPassword);
        return win32_impl_result;
    }
    inline Windows::Win32::Security::SC_HANDLE__* CreateServiceW(Windows::Win32::Security::SC_HANDLE__* hSCManager, uint16_t* lpServiceName, uint16_t* lpDisplayName, uint32_t dwDesiredAccess, uint32_t dwServiceType, uint32_t dwStartType, uint32_t dwErrorControl, uint16_t* lpBinaryPathName, uint16_t* lpLoadOrderGroup, uint32_t* lpdwTagId, uint16_t* lpDependencies, uint16_t* lpServiceStartName, uint16_t* lpPassword)
    {
        auto win32_impl_result = WIN32_IMPL_CreateServiceW(hSCManager, lpServiceName, lpDisplayName, dwDesiredAccess, dwServiceType, dwStartType, dwErrorControl, lpBinaryPathName, lpLoadOrderGroup, lpdwTagId, lpDependencies, lpServiceStartName, lpPassword);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif