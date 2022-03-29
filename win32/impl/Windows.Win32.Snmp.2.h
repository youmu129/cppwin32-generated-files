// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Snmp_2_H
#define WIN32_Windows_Win32_Snmp_2_H
#include "win32/impl/Windows.Win32.Snmp.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_SnmpUtilOidCpy(win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOidDst, win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOidSrc) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOidAppend(win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOidDst, win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOidSrc) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOidNCmp(win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOid1, win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOid2, uint32_t nSubIds) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOidCmp(win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOid1, win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOid2) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilOidFree(win32::Windows::Win32::Snmp::AsnObjectIdentifier* pOid) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOctetsCmp(win32::Windows::Win32::Snmp::AsnOctetString* pOctets1, win32::Windows::Win32::Snmp::AsnOctetString* pOctets2) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOctetsNCmp(win32::Windows::Win32::Snmp::AsnOctetString* pOctets1, win32::Windows::Win32::Snmp::AsnOctetString* pOctets2, uint32_t nChars) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilOctetsCpy(win32::Windows::Win32::Snmp::AsnOctetString* pOctetsDst, win32::Windows::Win32::Snmp::AsnOctetString* pOctetsSrc) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilOctetsFree(win32::Windows::Win32::Snmp::AsnOctetString* pOctets) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilAsnAnyCpy(win32::Windows::Win32::Snmp::AsnAny* pAnyDst, win32::Windows::Win32::Snmp::AsnAny* pAnySrc) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilAsnAnyFree(win32::Windows::Win32::Snmp::AsnAny* pAny) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilVarBindCpy(win32::Windows::Win32::Snmp::SnmpVarBind* pVbDst, win32::Windows::Win32::Snmp::SnmpVarBind* pVbSrc) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilVarBindFree(win32::Windows::Win32::Snmp::SnmpVarBind* pVb) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpUtilVarBindListCpy(win32::Windows::Win32::Snmp::SnmpVarBindList* pVblDst, win32::Windows::Win32::Snmp::SnmpVarBindList* pVblSrc) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilVarBindListFree(win32::Windows::Win32::Snmp::SnmpVarBindList* pVbl) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilMemFree(void* pMem) noexcept;
    void* __stdcall WIN32_IMPL_SnmpUtilMemAlloc(uint32_t nBytes) noexcept;
    void* __stdcall WIN32_IMPL_SnmpUtilMemReAlloc(void* pMem, uint32_t nBytes) noexcept;
    int8_t* __stdcall WIN32_IMPL_SnmpUtilOidToA(win32::Windows::Win32::Snmp::AsnObjectIdentifier* Oid) noexcept;
    int8_t* __stdcall WIN32_IMPL_SnmpUtilIdsToA(uint32_t* Ids, uint32_t IdLength) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilPrintOid(win32::Windows::Win32::Snmp::AsnObjectIdentifier* Oid) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilPrintAsnAny(win32::Windows::Win32::Snmp::AsnAny* pAny) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSvcGetUptime() noexcept;
    void __stdcall WIN32_IMPL_SnmpSvcSetLogLevel(int32_t nLogLevel) noexcept;
    void __stdcall WIN32_IMPL_SnmpSvcSetLogType(int32_t nLogType) noexcept;
    void __stdcall WIN32_IMPL_SnmpUtilDbgPrint(int32_t nLogLevel, int8_t* szFormat) noexcept;
    void* __stdcall WIN32_IMPL_SnmpMgrOpen(int8_t* lpAgentAddress, int8_t* lpAgentCommunity, int32_t nTimeOut, int32_t nRetries) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrCtl(void* session, uint32_t dwCtlCode, void* lpvInBuffer, uint32_t cbInBuffer, void* lpvOUTBuffer, uint32_t cbOUTBuffer, uint32_t* lpcbBytesReturned) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrClose(void* session) noexcept;
    int32_t __stdcall WIN32_IMPL_SnmpMgrRequest(void* session, uint8_t requestType, win32::Windows::Win32::Snmp::SnmpVarBindList* variableBindings, int32_t* errorStatus, int32_t* errorIndex) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrStrToOid(int8_t* string, win32::Windows::Win32::Snmp::AsnObjectIdentifier* oid) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrOidToStr(win32::Windows::Win32::Snmp::AsnObjectIdentifier* oid, int8_t** string) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrTrapListen(win32::Windows::Win32::SystemServices::HANDLE* phTrapAvailable) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrGetTrap(win32::Windows::Win32::Snmp::AsnObjectIdentifier* enterprise, win32::Windows::Win32::Snmp::AsnOctetString* IPAddress, int32_t* genericTrap, int32_t* specificTrap, uint32_t* timeStamp, win32::Windows::Win32::Snmp::SnmpVarBindList* variableBindings) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SnmpMgrGetTrapEx(win32::Windows::Win32::Snmp::AsnObjectIdentifier* enterprise, win32::Windows::Win32::Snmp::AsnOctetString* agentAddress, win32::Windows::Win32::Snmp::AsnOctetString* sourceAddress, int32_t* genericTrap, int32_t* specificTrap, win32::Windows::Win32::Snmp::AsnOctetString* community, uint32_t* timeStamp, win32::Windows::Win32::Snmp::SnmpVarBindList* variableBindings) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetTranslateMode(uint32_t* nTranslateMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetTranslateMode(uint32_t nTranslateMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetRetransmitMode(uint32_t* nRetransmitMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetRetransmitMode(uint32_t nRetransmitMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetTimeout(intptr_t hEntity, uint32_t* nPolicyTimeout, uint32_t* nActualTimeout) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetTimeout(intptr_t hEntity, uint32_t nPolicyTimeout) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetRetry(intptr_t hEntity, uint32_t* nPolicyRetry, uint32_t* nActualRetry) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetRetry(intptr_t hEntity, uint32_t nPolicyRetry) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetVendorInfo(win32::Windows::Win32::Snmp::smiVENDORINFO* vendorInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpStartup(uint32_t* nMajorVersion, uint32_t* nMinorVersion, uint32_t* nLevel, uint32_t* nTranslateMode, uint32_t* nRetransmitMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpCleanup() noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpOpen(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t wMsg) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpClose(intptr_t session) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSendMsg(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, intptr_t PDU) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpRecvMsg(intptr_t session, intptr_t* srcEntity, intptr_t* dstEntity, intptr_t* context, intptr_t* PDU) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpRegister(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, win32::Windows::Win32::Snmp::smiOID* notification, uint32_t state) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpCreateSession(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t wMsg, win32::Windows::Win32::Snmp::SNMPAPI_CALLBACK* fCallBack, void* lpClientData) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpListen(intptr_t hEntity, uint32_t lStatus) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpListenEx(intptr_t hEntity, uint32_t lStatus, uint32_t nUseEntityAddr) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpCancelMsg(intptr_t session, int32_t reqId) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpStartupEx(uint32_t* nMajorVersion, uint32_t* nMinorVersion, uint32_t* nLevel, uint32_t* nTranslateMode, uint32_t* nRetransmitMode) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpCleanupEx() noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpStrToEntity(intptr_t session, int8_t* string) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpEntityToStr(intptr_t entity, uint32_t size, int8_t* string) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpFreeEntity(intptr_t entity) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpStrToContext(intptr_t session, win32::Windows::Win32::Snmp::smiOCTETS* string) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpContextToStr(intptr_t context, win32::Windows::Win32::Snmp::smiOCTETS* string) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpFreeContext(intptr_t context) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetPort(intptr_t hEntity, uint32_t nPort) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpCreatePdu(intptr_t session, int32_t PDU_type, int32_t request_id, int32_t error_status, int32_t error_index, intptr_t varbindlist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetPduData(intptr_t PDU, int32_t* PDU_type, int32_t* request_id, int32_t* error_status, int32_t* error_index, intptr_t* varbindlist) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetPduData(intptr_t PDU, int32_t* PDU_type, int32_t* request_id, int32_t* non_repeaters, int32_t* max_repetitions, intptr_t* varbindlist) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpDuplicatePdu(intptr_t session, intptr_t PDU) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpFreePdu(intptr_t PDU) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpCreateVbl(intptr_t session, win32::Windows::Win32::Snmp::smiOID* name, win32::Windows::Win32::Snmp::smiVALUE* value) noexcept;
    intptr_t __stdcall WIN32_IMPL_SnmpDuplicateVbl(intptr_t session, intptr_t vbl) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpFreeVbl(intptr_t vbl) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpCountVbl(intptr_t vbl) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetVb(intptr_t vbl, uint32_t index, win32::Windows::Win32::Snmp::smiOID* name, win32::Windows::Win32::Snmp::smiVALUE* value) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpSetVb(intptr_t vbl, uint32_t index, win32::Windows::Win32::Snmp::smiOID* name, win32::Windows::Win32::Snmp::smiVALUE* value) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpDeleteVb(intptr_t vbl, uint32_t index) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpGetLastError(intptr_t session) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpStrToOid(int8_t* string, win32::Windows::Win32::Snmp::smiOID* dstOID) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpOidToStr(win32::Windows::Win32::Snmp::smiOID* srcOID, uint32_t size, int8_t* string) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpOidCopy(win32::Windows::Win32::Snmp::smiOID* srcOID, win32::Windows::Win32::Snmp::smiOID* dstOID) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpOidCompare(win32::Windows::Win32::Snmp::smiOID* xOID, win32::Windows::Win32::Snmp::smiOID* yOID, uint32_t maxlen, int32_t* result) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpEncodeMsg(intptr_t session, intptr_t srcEntity, intptr_t dstEntity, intptr_t context, intptr_t pdu, win32::Windows::Win32::Snmp::smiOCTETS* msgBufDesc) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpDecodeMsg(intptr_t session, intptr_t* srcEntity, intptr_t* dstEntity, intptr_t* context, intptr_t* pdu, win32::Windows::Win32::Snmp::smiOCTETS* msgBufDesc) noexcept;
    uint32_t __stdcall WIN32_IMPL_SnmpFreeDescriptor(uint32_t syntax, win32::Windows::Win32::Snmp::smiOCTETS* descriptor) noexcept;
}
WIN32_IMPL_LINK(SnmpUtilOidCpy, 8)
WIN32_IMPL_LINK(SnmpUtilOidAppend, 8)
WIN32_IMPL_LINK(SnmpUtilOidNCmp, 12)
WIN32_IMPL_LINK(SnmpUtilOidCmp, 8)
WIN32_IMPL_LINK(SnmpUtilOidFree, 4)
WIN32_IMPL_LINK(SnmpUtilOctetsCmp, 8)
WIN32_IMPL_LINK(SnmpUtilOctetsNCmp, 12)
WIN32_IMPL_LINK(SnmpUtilOctetsCpy, 8)
WIN32_IMPL_LINK(SnmpUtilOctetsFree, 4)
WIN32_IMPL_LINK(SnmpUtilAsnAnyCpy, 8)
WIN32_IMPL_LINK(SnmpUtilAsnAnyFree, 4)
WIN32_IMPL_LINK(SnmpUtilVarBindCpy, 8)
WIN32_IMPL_LINK(SnmpUtilVarBindFree, 4)
WIN32_IMPL_LINK(SnmpUtilVarBindListCpy, 8)
WIN32_IMPL_LINK(SnmpUtilVarBindListFree, 4)
WIN32_IMPL_LINK(SnmpUtilMemFree, 4)
WIN32_IMPL_LINK(SnmpUtilMemAlloc, 4)
WIN32_IMPL_LINK(SnmpUtilMemReAlloc, 8)
WIN32_IMPL_LINK(SnmpUtilOidToA, 4)
WIN32_IMPL_LINK(SnmpUtilIdsToA, 8)
WIN32_IMPL_LINK(SnmpUtilPrintOid, 4)
WIN32_IMPL_LINK(SnmpUtilPrintAsnAny, 4)
WIN32_IMPL_LINK(SnmpSvcGetUptime, 0)
WIN32_IMPL_LINK(SnmpSvcSetLogLevel, 4)
WIN32_IMPL_LINK(SnmpSvcSetLogType, 4)
WIN32_IMPL_LINK(SnmpUtilDbgPrint, 8)
WIN32_IMPL_LINK(SnmpMgrOpen, 16)
WIN32_IMPL_LINK(SnmpMgrCtl, 28)
WIN32_IMPL_LINK(SnmpMgrClose, 4)
WIN32_IMPL_LINK(SnmpMgrRequest, 20)
WIN32_IMPL_LINK(SnmpMgrStrToOid, 8)
WIN32_IMPL_LINK(SnmpMgrOidToStr, 8)
WIN32_IMPL_LINK(SnmpMgrTrapListen, 4)
WIN32_IMPL_LINK(SnmpMgrGetTrap, 24)
WIN32_IMPL_LINK(SnmpMgrGetTrapEx, 32)
WIN32_IMPL_LINK(SnmpGetTranslateMode, 4)
WIN32_IMPL_LINK(SnmpSetTranslateMode, 4)
WIN32_IMPL_LINK(SnmpGetRetransmitMode, 4)
WIN32_IMPL_LINK(SnmpSetRetransmitMode, 4)
WIN32_IMPL_LINK(SnmpGetTimeout, 12)
WIN32_IMPL_LINK(SnmpSetTimeout, 8)
WIN32_IMPL_LINK(SnmpGetRetry, 12)
WIN32_IMPL_LINK(SnmpSetRetry, 8)
WIN32_IMPL_LINK(SnmpGetVendorInfo, 4)
WIN32_IMPL_LINK(SnmpStartup, 20)
WIN32_IMPL_LINK(SnmpCleanup, 0)
WIN32_IMPL_LINK(SnmpOpen, 8)
WIN32_IMPL_LINK(SnmpClose, 4)
WIN32_IMPL_LINK(SnmpSendMsg, 20)
WIN32_IMPL_LINK(SnmpRecvMsg, 20)
WIN32_IMPL_LINK(SnmpRegister, 24)
WIN32_IMPL_LINK(SnmpCreateSession, 16)
WIN32_IMPL_LINK(SnmpListen, 8)
WIN32_IMPL_LINK(SnmpListenEx, 12)
WIN32_IMPL_LINK(SnmpCancelMsg, 8)
WIN32_IMPL_LINK(SnmpStartupEx, 20)
WIN32_IMPL_LINK(SnmpCleanupEx, 0)
WIN32_IMPL_LINK(SnmpStrToEntity, 8)
WIN32_IMPL_LINK(SnmpEntityToStr, 12)
WIN32_IMPL_LINK(SnmpFreeEntity, 4)
WIN32_IMPL_LINK(SnmpStrToContext, 8)
WIN32_IMPL_LINK(SnmpContextToStr, 8)
WIN32_IMPL_LINK(SnmpFreeContext, 4)
WIN32_IMPL_LINK(SnmpSetPort, 8)
WIN32_IMPL_LINK(SnmpCreatePdu, 24)
WIN32_IMPL_LINK(SnmpGetPduData, 24)
WIN32_IMPL_LINK(SnmpSetPduData, 24)
WIN32_IMPL_LINK(SnmpDuplicatePdu, 8)
WIN32_IMPL_LINK(SnmpFreePdu, 4)
WIN32_IMPL_LINK(SnmpCreateVbl, 12)
WIN32_IMPL_LINK(SnmpDuplicateVbl, 8)
WIN32_IMPL_LINK(SnmpFreeVbl, 4)
WIN32_IMPL_LINK(SnmpCountVbl, 4)
WIN32_IMPL_LINK(SnmpGetVb, 16)
WIN32_IMPL_LINK(SnmpSetVb, 16)
WIN32_IMPL_LINK(SnmpDeleteVb, 8)
WIN32_IMPL_LINK(SnmpGetLastError, 4)
WIN32_IMPL_LINK(SnmpStrToOid, 8)
WIN32_IMPL_LINK(SnmpOidToStr, 12)
WIN32_IMPL_LINK(SnmpOidCopy, 8)
WIN32_IMPL_LINK(SnmpOidCompare, 16)
WIN32_IMPL_LINK(SnmpEncodeMsg, 24)
WIN32_IMPL_LINK(SnmpDecodeMsg, 24)
WIN32_IMPL_LINK(SnmpFreeDescriptor, 8)

#pragma endregion abi_methods

#endif