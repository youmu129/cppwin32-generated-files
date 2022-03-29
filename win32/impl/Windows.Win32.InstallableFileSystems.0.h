// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_InstallableFileSystems_0_H
#define WIN32_Windows_Win32_InstallableFileSystems_0_H
WIN32_EXPORT namespace win32::Windows::Win32::InstallableFileSystems
{
#pragma region enums
    enum class FILTER_INFORMATION_CLASS : int32_t
    {
        FilterFullInformation = 0,
        FilterAggregateBasicInformation = 1,
        FilterAggregateStandardInformation = 2,
    };
    enum class FILTER_VOLUME_INFORMATION_CLASS : int32_t
    {
        FilterVolumeBasicInformation = 0,
        FilterVolumeStandardInformation = 1,
    };
    enum class FLT_FILESYSTEM_TYPE : int32_t
    {
        FLT_FSTYPE_UNKNOWN = 0,
        FLT_FSTYPE_RAW = 1,
        FLT_FSTYPE_NTFS = 2,
        FLT_FSTYPE_FAT = 3,
        FLT_FSTYPE_CDFS = 4,
        FLT_FSTYPE_UDFS = 5,
        FLT_FSTYPE_LANMAN = 6,
        FLT_FSTYPE_WEBDAV = 7,
        FLT_FSTYPE_RDPDR = 8,
        FLT_FSTYPE_NFS = 9,
        FLT_FSTYPE_MS_NETWARE = 10,
        FLT_FSTYPE_NETWARE = 11,
        FLT_FSTYPE_BSUDF = 12,
        FLT_FSTYPE_MUP = 13,
        FLT_FSTYPE_RSFX = 14,
        FLT_FSTYPE_ROXIO_UDF1 = 15,
        FLT_FSTYPE_ROXIO_UDF2 = 16,
        FLT_FSTYPE_ROXIO_UDF3 = 17,
        FLT_FSTYPE_TACIT = 18,
        FLT_FSTYPE_FS_REC = 19,
        FLT_FSTYPE_INCD = 20,
        FLT_FSTYPE_INCD_FAT = 21,
        FLT_FSTYPE_EXFAT = 22,
        FLT_FSTYPE_PSFS = 23,
        FLT_FSTYPE_GPFS = 24,
        FLT_FSTYPE_NPFS = 25,
        FLT_FSTYPE_MSFS = 26,
        FLT_FSTYPE_CSVFS = 27,
        FLT_FSTYPE_REFS = 28,
        FLT_FSTYPE_OPENAFS = 29,
        FLT_FSTYPE_CIMFS = 30,
    };
    enum class INSTANCE_INFORMATION_CLASS : int32_t
    {
        InstanceBasicInformation = 0,
        InstancePartialInformation = 1,
        InstanceFullInformation = 2,
        InstanceAggregateStandardInformation = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct FILTER_AGGREGATE_BASIC_INFORMATION;
    struct FILTER_AGGREGATE_STANDARD_INFORMATION;
    struct FILTER_FULL_INFORMATION;
    struct FILTER_MESSAGE_HEADER;
    struct FILTER_REPLY_HEADER;
    struct FILTER_VOLUME_BASIC_INFORMATION;
    struct FILTER_VOLUME_STANDARD_INFORMATION;
    struct FilterFindHandle;
    struct FilterInstanceFindHandle;
    struct FilterVolumeFindHandle;
    struct FilterVolumeInstanceFindHandle;
    struct HFILTER;
    struct HFILTER_INSTANCE;
    struct INSTANCE_AGGREGATE_STANDARD_INFORMATION;
    struct INSTANCE_BASIC_INFORMATION;
    struct INSTANCE_FULL_INFORMATION;
    struct INSTANCE_PARTIAL_INFORMATION;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif