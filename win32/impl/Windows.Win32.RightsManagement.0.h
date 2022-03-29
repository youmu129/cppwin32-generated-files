// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_RightsManagement_0_H
#define WIN32_Windows_Win32_RightsManagement_0_H
WIN32_EXPORT namespace win32::Windows::Win32::RightsManagement
{
#pragma region enums
    enum class DRMATTESTTYPE : int32_t
    {
        DRMATTESTTYPE_FULLENVIRONMENT = 0,
        DRMATTESTTYPE_HASHONLY = 1,
    };
    enum class DRMENCODINGTYPE : int32_t
    {
        DRMENCODINGTYPE_BASE64 = 0,
        DRMENCODINGTYPE_STRING = 1,
        DRMENCODINGTYPE_LONG = 2,
        DRMENCODINGTYPE_TIME = 3,
        DRMENCODINGTYPE_UINT = 4,
        DRMENCODINGTYPE_RAW = 5,
    };
    enum class DRMGLOBALOPTIONS : int32_t
    {
        DRMGLOBALOPTIONS_USE_WINHTTP = 0,
        DRMGLOBALOPTIONS_USE_SERVERSECURITYPROCESSOR = 1,
    };
    enum class DRMSECURITYPROVIDERTYPE : int32_t
    {
        DRMSECURITYPROVIDERTYPE_SOFTWARESECREP = 0,
    };
    enum class DRMSPECTYPE : int32_t
    {
        DRMSPECTYPE_UNKNOWN = 0,
        DRMSPECTYPE_FILENAME = 1,
    };
    enum class DRMTIMETYPE : int32_t
    {
        DRMTIMETYPE_SYSTEMUTC = 0,
        DRMTIMETYPE_SYSTEMLOCAL = 1,
    };
    enum class DRM_DISTRIBUTION_POINT_INFO : int32_t
    {
        DRM_DISTRIBUTION_POINT_LICENSE_ACQUISITION = 0,
        DRM_DISTRIBUTION_POINT_PUBLISHING = 1,
        DRM_DISTRIBUTION_POINT_REFERRAL_INFO = 2,
    };
    enum class DRM_STATUS_MSG : int32_t
    {
        DRM_MSG_ACTIVATE_MACHINE = 0,
        DRM_MSG_ACTIVATE_GROUPIDENTITY = 1,
        DRM_MSG_ACQUIRE_LICENSE = 2,
        DRM_MSG_ACQUIRE_ADVISORY = 3,
        DRM_MSG_SIGN_ISSUANCE_LICENSE = 4,
        DRM_MSG_ACQUIRE_CLIENTLICENSOR = 5,
        DRM_MSG_ACQUIRE_ISSUANCE_LICENSE_TEMPLATE = 6,
    };
    enum class DRM_USAGEPOLICY_TYPE : int32_t
    {
        DRM_USAGEPOLICY_TYPE_BYNAME = 0,
        DRM_USAGEPOLICY_TYPE_BYPUBLICKEY = 1,
        DRM_USAGEPOLICY_TYPE_BYDIGEST = 2,
        DRM_USAGEPOLICY_TYPE_OSEXCLUSION = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DRMBOUNDLICENSEPARAMS;
    struct DRMID;
    struct DRM_ACTSERV_INFO;
    struct DRM_CLIENT_VERSION_INFO;
    struct DRM_LICENSE_ACQ_DATA;
#pragma endregion forward_declarations

#pragma region delegates
    using DRMCALLBACK = int32_t __stdcall(Windows::Win32::RightsManagement::DRM_STATUS_MSG, int32_t, void*, void*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif