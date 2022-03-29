// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Kernel_0_H
#define WIN32_Windows_Win32_Kernel_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Debug
{
    struct CONTEXT;
    struct EXCEPTION_RECORD;
}
WIN32_EXPORT namespace win32::Windows::Win32::Kernel
{
#pragma region enums
    enum class COMPARTMENT_ID : int32_t
    {
        UNSPECIFIED_COMPARTMENT_ID = 0,
        DEFAULT_COMPARTMENT_ID = 1,
    };
    enum class EVENT_TYPE : int32_t
    {
        NotificationEvent = 0,
        SynchronizationEvent = 1,
    };
    enum class EXCEPTION_DISPOSITION : int32_t
    {
        ExceptionContinueExecution = 0,
        ExceptionContinueSearch = 1,
        ExceptionNestedException = 2,
        ExceptionCollidedUnwind = 3,
    };
    enum class NT_PRODUCT_TYPE : int32_t
    {
        NtProductWinNt = 1,
        NtProductLanManNt = 2,
        NtProductServer = 3,
    };
    enum class SUITE_TYPE : int32_t
    {
        SmallBusiness = 0,
        Enterprise = 1,
        BackOffice = 2,
        CommunicationServer = 3,
        TerminalServer = 4,
        SmallBusinessRestricted = 5,
        EmbeddedNT = 6,
        DataCenter = 7,
        SingleUserTS = 8,
        Personal = 9,
        Blade = 10,
        EmbeddedRestricted = 11,
        SecurityAppliance = 12,
        StorageServer = 13,
        ComputeServer = 14,
        WHServer = 15,
        PhoneNT = 16,
        MultiUserTS = 17,
        MaxSuiteType = 18,
    };
    enum class TIMER_TYPE : int32_t
    {
        NotificationTimer = 0,
        SynchronizationTimer = 1,
    };
    enum class WAIT_TYPE : int32_t
    {
        WaitAll = 0,
        WaitAny = 1,
        WaitNotification = 2,
        WaitDequeue = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CSTRING;
    struct LIST_ENTRY;
    struct LIST_ENTRY32;
    struct LIST_ENTRY64;
    struct LUID;
    struct OBJECTID;
    struct OBJECT_ATTRIBUTES32;
    struct OBJECT_ATTRIBUTES64;
    struct QUAD;
    struct RTL_BALANCED_NODE;
    struct SINGLE_LIST_ENTRY;
    struct SINGLE_LIST_ENTRY32;
    struct STRING32;
    struct STRING64;
    struct WNF_STATE_NAME;
#pragma endregion forward_declarations

#pragma region delegates
    using EXCEPTION_ROUTINE = Windows::Win32::Kernel::EXCEPTION_DISPOSITION __stdcall(Windows::Win32::Debug::EXCEPTION_RECORD*, void*, Windows::Win32::Debug::CONTEXT*, void*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif