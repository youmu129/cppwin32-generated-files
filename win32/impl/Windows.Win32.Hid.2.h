// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Hid_2_H
#define WIN32_Windows_Win32_Hid_2_H
#include "win32/impl/Windows.Win32.Hid.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_DirectInput8Create(win32::Windows::Win32::SystemServices::HINSTANCE hinst, uint32_t dwVersion, ::win32::guid* riidltf, void** ppvOut, win32::Windows::Win32::Com::IUnknown* punkOuter) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetCaps(intptr_t PreparsedData, win32::Windows::Win32::Hid::HIDP_CAPS* Capabilities) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetLinkCollectionNodes(win32::Windows::Win32::Hid::HIDP_LINK_COLLECTION_NODE* LinkCollectionNodes, uint32_t* LinkCollectionNodesLength, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetSpecificButtonCaps(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, win32::Windows::Win32::Hid::HIDP_BUTTON_CAPS* ButtonCaps, uint16_t* ButtonCapsLength, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetButtonCaps(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, win32::Windows::Win32::Hid::HIDP_BUTTON_CAPS* ButtonCaps, uint16_t* ButtonCapsLength, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetSpecificValueCaps(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, win32::Windows::Win32::Hid::HIDP_VALUE_CAPS* ValueCaps, uint16_t* ValueCapsLength, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetValueCaps(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, win32::Windows::Win32::Hid::HIDP_VALUE_CAPS* ValueCaps, uint16_t* ValueCapsLength, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetExtendedAttributes(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t DataIndex, intptr_t PreparsedData, win32::Windows::Win32::Hid::HIDP_EXTENDED_ATTRIBUTES* Attributes, uint32_t* LengthAttributes) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_InitializeReportForID(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint8_t ReportID, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_SetData(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, win32::Windows::Win32::Hid::HIDP_DATA* DataList, uint32_t* DataLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetData(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, win32::Windows::Win32::Hid::HIDP_DATA* DataList, uint32_t* DataLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HidP_MaxDataListLength(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_SetUsages(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t* UsageList, uint32_t* UsageLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_UnsetUsages(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t* UsageList, uint32_t* UsageLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetUsages(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t* UsageList, uint32_t* UsageLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetUsagesEx(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t LinkCollection, win32::Windows::Win32::Hid::USAGE_AND_PAGE* ButtonList, uint32_t* UsageLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HidP_MaxUsageListLength(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, intptr_t PreparsedData) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_SetUsageValue(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, uint32_t UsageValue, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_SetScaledUsageValue(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, int32_t UsageValue, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_SetUsageValueArray(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, int8_t* UsageValue, uint16_t UsageValueByteLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetUsageValue(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, uint32_t* UsageValue, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetScaledUsageValue(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, int32_t* UsageValue, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_GetUsageValueArray(win32::Windows::Win32::Hid::HIDP_REPORT_TYPE ReportType, uint16_t UsagePage, uint16_t LinkCollection, uint16_t Usage, int8_t* UsageValue, uint16_t UsageValueByteLength, intptr_t PreparsedData, int8_t* Report, uint32_t ReportLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_UsageListDifference(uint16_t* PreviousUsageList, uint16_t* CurrentUsageList, uint16_t* BreakUsageList, uint16_t* MakeUsageList, uint32_t UsageListLength) noexcept;
    win32::Windows::Win32::SystemServices::NTSTATUS __stdcall WIN32_IMPL_HidP_TranslateUsagesToI8042ScanCodes(uint16_t* ChangedUsageList, uint32_t UsageListLength, win32::Windows::Win32::Hid::HIDP_KEYBOARD_DIRECTION KeyAction, win32::Windows::Win32::Hid::HIDP_KEYBOARD_MODIFIER_STATE* ModifierState, win32::Windows::Win32::Hid::PHIDP_INSERT_SCANCODES* InsertCodesProcedure, void* InsertCodesContext) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetAttributes(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, win32::Windows::Win32::Hid::HIDD_ATTRIBUTES* Attributes) noexcept;
    void __stdcall WIN32_IMPL_HidD_GetHidGuid(::win32::guid* HidGuid) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetPreparsedData(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, intptr_t* PreparsedData) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_FreePreparsedData(intptr_t PreparsedData) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_FlushQueue(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetConfiguration(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, win32::Windows::Win32::Hid::HIDD_CONFIGURATION* Configuration, uint32_t ConfigurationLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_SetConfiguration(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, win32::Windows::Win32::Hid::HIDD_CONFIGURATION* Configuration, uint32_t ConfigurationLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetFeature(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* ReportBuffer, uint32_t ReportBufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_SetFeature(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* ReportBuffer, uint32_t ReportBufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetInputReport(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* ReportBuffer, uint32_t ReportBufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_SetOutputReport(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* ReportBuffer, uint32_t ReportBufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetNumInputBuffers(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, uint32_t* NumberBuffers) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_SetNumInputBuffers(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, uint32_t NumberBuffers) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetPhysicalDescriptor(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* Buffer, uint32_t BufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetManufacturerString(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* Buffer, uint32_t BufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetProductString(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* Buffer, uint32_t BufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetIndexedString(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, uint32_t StringIndex, void* Buffer, uint32_t BufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetSerialNumberString(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* Buffer, uint32_t BufferLength) noexcept;
    uint8_t __stdcall WIN32_IMPL_HidD_GetMsGenreDescriptor(win32::Windows::Win32::SystemServices::HANDLE HidDeviceObject, void* Buffer, uint32_t BufferLength) noexcept;
}
WIN32_IMPL_LINK(DirectInput8Create, 20)
WIN32_IMPL_LINK(HidP_GetCaps, 8)
WIN32_IMPL_LINK(HidP_GetLinkCollectionNodes, 12)
WIN32_IMPL_LINK(HidP_GetSpecificButtonCaps, 28)
WIN32_IMPL_LINK(HidP_GetButtonCaps, 16)
WIN32_IMPL_LINK(HidP_GetSpecificValueCaps, 28)
WIN32_IMPL_LINK(HidP_GetValueCaps, 16)
WIN32_IMPL_LINK(HidP_GetExtendedAttributes, 20)
WIN32_IMPL_LINK(HidP_InitializeReportForID, 20)
WIN32_IMPL_LINK(HidP_SetData, 24)
WIN32_IMPL_LINK(HidP_GetData, 24)
WIN32_IMPL_LINK(HidP_MaxDataListLength, 8)
WIN32_IMPL_LINK(HidP_SetUsages, 32)
WIN32_IMPL_LINK(HidP_UnsetUsages, 32)
WIN32_IMPL_LINK(HidP_GetUsages, 32)
WIN32_IMPL_LINK(HidP_GetUsagesEx, 28)
WIN32_IMPL_LINK(HidP_MaxUsageListLength, 12)
WIN32_IMPL_LINK(HidP_SetUsageValue, 32)
WIN32_IMPL_LINK(HidP_SetScaledUsageValue, 32)
WIN32_IMPL_LINK(HidP_SetUsageValueArray, 36)
WIN32_IMPL_LINK(HidP_GetUsageValue, 32)
WIN32_IMPL_LINK(HidP_GetScaledUsageValue, 32)
WIN32_IMPL_LINK(HidP_GetUsageValueArray, 36)
WIN32_IMPL_LINK(HidP_UsageListDifference, 20)
WIN32_IMPL_LINK(HidP_TranslateUsagesToI8042ScanCodes, 24)
WIN32_IMPL_LINK(HidD_GetAttributes, 8)
WIN32_IMPL_LINK(HidD_GetHidGuid, 4)
WIN32_IMPL_LINK(HidD_GetPreparsedData, 8)
WIN32_IMPL_LINK(HidD_FreePreparsedData, 4)
WIN32_IMPL_LINK(HidD_FlushQueue, 4)
WIN32_IMPL_LINK(HidD_GetConfiguration, 12)
WIN32_IMPL_LINK(HidD_SetConfiguration, 12)
WIN32_IMPL_LINK(HidD_GetFeature, 12)
WIN32_IMPL_LINK(HidD_SetFeature, 12)
WIN32_IMPL_LINK(HidD_GetInputReport, 12)
WIN32_IMPL_LINK(HidD_SetOutputReport, 12)
WIN32_IMPL_LINK(HidD_GetNumInputBuffers, 8)
WIN32_IMPL_LINK(HidD_SetNumInputBuffers, 8)
WIN32_IMPL_LINK(HidD_GetPhysicalDescriptor, 12)
WIN32_IMPL_LINK(HidD_GetManufacturerString, 12)
WIN32_IMPL_LINK(HidD_GetProductString, 12)
WIN32_IMPL_LINK(HidD_GetIndexedString, 16)
WIN32_IMPL_LINK(HidD_GetSerialNumberString, 12)
WIN32_IMPL_LINK(HidD_GetMsGenreDescriptor, 12)

#pragma endregion abi_methods

#endif