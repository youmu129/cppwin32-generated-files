// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Http_2_H
#define WIN32_Windows_Win32_Http_2_H
#include "win32/impl/Windows.Win32.Http.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    uint32_t __stdcall WIN32_IMPL_HttpInitialize(win32::Windows::Win32::Http::HTTPAPI_VERSION Version, uint32_t Flags, void* pReserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpTerminate(uint32_t Flags, void* pReserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCreateHttpHandle(intptr_t* RequestQueueHandle, uint32_t Reserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCreateRequestQueue(win32::Windows::Win32::Http::HTTPAPI_VERSION Version, uint16_t* Name, win32::Windows::Win32::SystemServices::SECURITY_ATTRIBUTES* SecurityAttributes, uint32_t Flags, intptr_t* RequestQueueHandle) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCloseRequestQueue(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSetRequestQueueProperty(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, void* Reserved2) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpQueryRequestQueueProperty(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t Reserved1, uint32_t* ReturnLength, void* Reserved2) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpShutdownRequestQueue(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpReceiveClientCertificate(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Flags, win32::Windows::Win32::Http::HTTP_SSL_CLIENT_CERT_INFO* SslClientCertInfo, uint32_t SslClientCertInfoSize, uint32_t* BytesReceived, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCreateServerSession(win32::Windows::Win32::Http::HTTPAPI_VERSION Version, uint64_t* ServerSessionId, uint32_t Reserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCloseServerSession(uint64_t ServerSessionId) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpQueryServerSessionProperty(uint64_t ServerSessionId, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSetServerSessionProperty(uint64_t ServerSessionId, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpAddUrl(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint16_t* FullyQualifiedUrl, void* Reserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpRemoveUrl(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint16_t* FullyQualifiedUrl) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCreateUrlGroup(uint64_t ServerSessionId, uint64_t* pUrlGroupId, uint32_t Reserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCloseUrlGroup(uint64_t UrlGroupId) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpAddUrlToUrlGroup(uint64_t UrlGroupId, uint16_t* pFullyQualifiedUrl, uint64_t UrlContext, uint32_t Reserved) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpRemoveUrlFromUrlGroup(uint64_t UrlGroupId, uint16_t* pFullyQualifiedUrl, uint32_t Flags) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSetUrlGroupProperty(uint64_t UrlGroupId, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpQueryUrlGroupProperty(uint64_t UrlGroupId, win32::Windows::Win32::Http::HTTP_SERVER_PROPERTY Property, void* PropertyInformation, uint32_t PropertyInformationLength, uint32_t* ReturnLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpPrepareUrl(void* Reserved, uint32_t Flags, uint16_t* Url, uint16_t** PreparedUrl) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpReceiveHttpRequest(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, win32::Windows::Win32::Http::HTTP_REQUEST_V2* RequestBuffer, uint32_t RequestBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpReceiveRequestEntityBody(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, void* EntityBuffer, uint32_t EntityBufferLength, uint32_t* BytesReturned, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSendHttpResponse(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, win32::Windows::Win32::Http::HTTP_RESPONSE_V2* HttpResponse, win32::Windows::Win32::Http::HTTP_CACHE_POLICY* CachePolicy, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped, win32::Windows::Win32::Http::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSendResponseEntityBody(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, uint32_t Flags, uint16_t EntityChunkCount, win32::Windows::Win32::Http::HTTP_DATA_CHUNK* EntityChunks, uint32_t* BytesSent, void* Reserved1, uint32_t Reserved2, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped, win32::Windows::Win32::Http::HTTP_LOG_DATA* LogData) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpDeclarePush(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::Http::HTTP_VERB Verb, uint16_t* Path, int8_t* Query, win32::Windows::Win32::Http::HTTP_REQUEST_HEADERS* Headers) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpWaitForDisconnect(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t ConnectionId, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpWaitForDisconnectEx(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t ConnectionId, uint32_t Reserved, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpCancelHttpRequest(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint64_t RequestId, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpWaitForDemandStart(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpFlushResponseCache(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint16_t* UrlPrefix, uint32_t Flags, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpAddFragmentToCache(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint16_t* UrlPrefix, win32::Windows::Win32::Http::HTTP_DATA_CHUNK* DataChunk, win32::Windows::Win32::Http::HTTP_CACHE_POLICY* CachePolicy, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpReadFragmentFromCache(win32::Windows::Win32::SystemServices::HANDLE RequestQueueHandle, uint16_t* UrlPrefix, win32::Windows::Win32::Http::HTTP_BYTE_RANGE* ByteRange, void* Buffer, uint32_t BufferLength, uint32_t* BytesRead, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpSetServiceConfiguration(win32::Windows::Win32::SystemServices::HANDLE ServiceHandle, win32::Windows::Win32::Http::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::SystemServices::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpUpdateServiceConfiguration(win32::Windows::Win32::SystemServices::HANDLE Handle, win32::Windows::Win32::Http::HTTP_SERVICE_CONFIG_ID ConfigId, void* ConfigInfo, uint32_t ConfigInfoLength, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpDeleteServiceConfiguration(win32::Windows::Win32::SystemServices::HANDLE ServiceHandle, win32::Windows::Win32::Http::HTTP_SERVICE_CONFIG_ID ConfigId, void* pConfigInformation, uint32_t ConfigInformationLength, win32::Windows::Win32::SystemServices::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpQueryServiceConfiguration(win32::Windows::Win32::SystemServices::HANDLE ServiceHandle, win32::Windows::Win32::Http::HTTP_SERVICE_CONFIG_ID ConfigId, void* pInput, uint32_t InputLength, void* pOutput, uint32_t OutputLength, uint32_t* pReturnLength, win32::Windows::Win32::SystemServices::OVERLAPPED* pOverlapped) noexcept;
    uint32_t __stdcall WIN32_IMPL_HttpGetExtension(win32::Windows::Win32::Http::HTTPAPI_VERSION Version, uint32_t Extension, void* Buffer, uint32_t BufferSize) noexcept;
    win32::Windows::Win32::Http::WINHTTP_STATUS_CALLBACK* __stdcall WIN32_IMPL_WinHttpSetStatusCallback(void* hInternet, win32::Windows::Win32::Http::WINHTTP_STATUS_CALLBACK* lpfnInternetCallback, uint32_t dwNotificationFlags, size_t dwReserved) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpTimeFromSystemTime(win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pst, uint16_t* pwszTime) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpTimeToSystemTime(uint16_t* pwszTime, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pst) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpCrackUrl(uint16_t* pwszUrl, uint32_t dwUrlLength, uint32_t dwFlags, win32::Windows::Win32::Http::URL_COMPONENTS* lpUrlComponents) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpCreateUrl(win32::Windows::Win32::Http::URL_COMPONENTS* lpUrlComponents, uint32_t dwFlags, uint16_t* pwszUrl, uint32_t* pdwUrlLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpCheckPlatform() noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpGetDefaultProxyConfiguration(win32::Windows::Win32::Http::WINHTTP_PROXY_INFO* pProxyInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpSetDefaultProxyConfiguration(win32::Windows::Win32::Http::WINHTTP_PROXY_INFO* pProxyInfo) noexcept;
    void* __stdcall WIN32_IMPL_WinHttpOpen(uint16_t* pszAgentW, uint32_t dwAccessType, uint16_t* pszProxyW, uint16_t* pszProxyBypassW, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpCloseHandle(void* hInternet) noexcept;
    void* __stdcall WIN32_IMPL_WinHttpConnect(void* hSession, uint16_t* pswzServerName, uint16_t nServerPort, uint32_t dwReserved) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpReadData(void* hRequest, void* lpBuffer, uint32_t dwNumberOfBytesToRead, uint32_t* lpdwNumberOfBytesRead) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpWriteData(void* hRequest, void* lpBuffer, uint32_t dwNumberOfBytesToWrite, uint32_t* lpdwNumberOfBytesWritten) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpQueryDataAvailable(void* hRequest, uint32_t* lpdwNumberOfBytesAvailable) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpQueryOption(void* hInternet, uint32_t dwOption, void* lpBuffer, uint32_t* lpdwBufferLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpSetOption(void* hInternet, uint32_t dwOption, void* lpBuffer, uint32_t dwBufferLength) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpSetTimeouts(void* hInternet, int32_t nResolveTimeout, int32_t nConnectTimeout, int32_t nSendTimeout, int32_t nReceiveTimeout) noexcept;
    void* __stdcall WIN32_IMPL_WinHttpOpenRequest(void* hConnect, uint16_t* pwszVerb, uint16_t* pwszObjectName, uint16_t* pwszVersion, uint16_t* pwszReferrer, uint16_t** ppwszAcceptTypes, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpAddRequestHeaders(void* hRequest, uint16_t* lpszHeaders, uint32_t dwHeadersLength, uint32_t dwModifiers) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpAddRequestHeadersEx(void* hRequest, uint32_t dwModifiers, uint64_t ullFlags, uint64_t ullExtra, uint32_t cHeaders, win32::Windows::Win32::Http::WINHTTP_EXTENDED_HEADER* pHeaders) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpSendRequest(void* hRequest, uint16_t* lpszHeaders, uint32_t dwHeadersLength, void* lpOptional, uint32_t dwOptionalLength, uint32_t dwTotalLength, size_t dwContext) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpSetCredentials(void* hRequest, uint32_t AuthTargets, uint32_t AuthScheme, uint16_t* pwszUserName, uint16_t* pwszPassword, void* pAuthParams) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpQueryAuthSchemes(void* hRequest, uint32_t* lpdwSupportedSchemes, uint32_t* lpdwFirstScheme, uint32_t* pdwAuthTarget) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpReceiveResponse(void* hRequest, void* lpReserved) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpQueryHeaders(void* hRequest, uint32_t dwInfoLevel, uint16_t* pwszName, void* lpBuffer, uint32_t* lpdwBufferLength, uint32_t* lpdwIndex) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpDetectAutoProxyConfigUrl(uint32_t dwAutoDetectFlags, uint16_t** ppwstrAutoConfigUrl) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpGetProxyForUrl(void* hSession, uint16_t* lpcwszUrl, win32::Windows::Win32::Http::WINHTTP_AUTOPROXY_OPTIONS* pAutoProxyOptions, win32::Windows::Win32::Http::WINHTTP_PROXY_INFO* pProxyInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpCreateProxyResolver(void* hSession, void** phResolver) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpGetProxyForUrlEx(void* hResolver, uint16_t* pcwszUrl, win32::Windows::Win32::Http::WINHTTP_AUTOPROXY_OPTIONS* pAutoProxyOptions, size_t pContext) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpGetProxyForUrlEx2(void* hResolver, uint16_t* pcwszUrl, win32::Windows::Win32::Http::WINHTTP_AUTOPROXY_OPTIONS* pAutoProxyOptions, uint32_t cbInterfaceSelectionContext, uint8_t* pInterfaceSelectionContext, size_t pContext) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpGetProxyResult(void* hResolver, win32::Windows::Win32::Http::WINHTTP_PROXY_RESULT* pProxyResult) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpGetProxyResultEx(void* hResolver, win32::Windows::Win32::Http::WINHTTP_PROXY_RESULT_EX* pProxyResultEx) noexcept;
    void __stdcall WIN32_IMPL_WinHttpFreeProxyResult(win32::Windows::Win32::Http::WINHTTP_PROXY_RESULT* pProxyResult) noexcept;
    void __stdcall WIN32_IMPL_WinHttpFreeProxyResultEx(win32::Windows::Win32::Http::WINHTTP_PROXY_RESULT_EX* pProxyResultEx) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpResetAutoProxy(void* hSession, uint32_t dwFlags) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinHttpGetIEProxyConfigForCurrentUser(win32::Windows::Win32::Http::WINHTTP_CURRENT_USER_IE_PROXY_CONFIG* pProxyConfig) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWriteProxySettings(void* hSession, win32::Windows::Win32::SystemServices::BOOL fForceUpdate, win32::Windows::Win32::Http::WINHTTP_PROXY_SETTINGS* pWinHttpProxySettings) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpReadProxySettings(void* hSession, uint16_t* pcwszConnectionName, win32::Windows::Win32::SystemServices::BOOL fFallBackToDefaultSettings, win32::Windows::Win32::SystemServices::BOOL fSetAutoDiscoverForDefaultSettings, uint32_t* pdwSettingsVersion, int32_t* pfDefaultSettingsAreReturned, win32::Windows::Win32::Http::WINHTTP_PROXY_SETTINGS* pWinHttpProxySettings) noexcept;
    void __stdcall WIN32_IMPL_WinHttpFreeProxySettings(win32::Windows::Win32::Http::WINHTTP_PROXY_SETTINGS* pWinHttpProxySettings) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpGetProxySettingsVersion(void* hSession, uint32_t* pdwProxySettingsVersion) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpSetProxySettingsPerUser(win32::Windows::Win32::SystemServices::BOOL fProxySettingsPerUser) noexcept;
    void* __stdcall WIN32_IMPL_WinHttpWebSocketCompleteUpgrade(void* hRequest, size_t pContext) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWebSocketSend(void* hWebSocket, win32::Windows::Win32::Http::WINHTTP_WEB_SOCKET_BUFFER_TYPE eBufferType, void* pvBuffer, uint32_t dwBufferLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWebSocketReceive(void* hWebSocket, void* pvBuffer, uint32_t dwBufferLength, uint32_t* pdwBytesRead, win32::Windows::Win32::Http::WINHTTP_WEB_SOCKET_BUFFER_TYPE* peBufferType) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWebSocketShutdown(void* hWebSocket, uint16_t usStatus, void* pvReason, uint32_t dwReasonLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWebSocketClose(void* hWebSocket, uint16_t usStatus, void* pvReason, uint32_t dwReasonLength) noexcept;
    uint32_t __stdcall WIN32_IMPL_WinHttpWebSocketQueryCloseStatus(void* hWebSocket, uint16_t* pusStatus, void* pvReason, uint32_t dwReasonLength, uint32_t* pdwReasonLengthConsumed) noexcept;
}
WIN32_IMPL_LINK(HttpInitialize, 12)
WIN32_IMPL_LINK(HttpTerminate, 8)
WIN32_IMPL_LINK(HttpCreateHttpHandle, 8)
WIN32_IMPL_LINK(HttpCreateRequestQueue, 20)
WIN32_IMPL_LINK(HttpCloseRequestQueue, 4)
WIN32_IMPL_LINK(HttpSetRequestQueueProperty, 24)
WIN32_IMPL_LINK(HttpQueryRequestQueueProperty, 28)
WIN32_IMPL_LINK(HttpShutdownRequestQueue, 4)
WIN32_IMPL_LINK(HttpReceiveClientCertificate, 32)
WIN32_IMPL_LINK(HttpCreateServerSession, 12)
WIN32_IMPL_LINK(HttpCloseServerSession, 8)
WIN32_IMPL_LINK(HttpQueryServerSessionProperty, 24)
WIN32_IMPL_LINK(HttpSetServerSessionProperty, 20)
WIN32_IMPL_LINK(HttpAddUrl, 12)
WIN32_IMPL_LINK(HttpRemoveUrl, 8)
WIN32_IMPL_LINK(HttpCreateUrlGroup, 16)
WIN32_IMPL_LINK(HttpCloseUrlGroup, 8)
WIN32_IMPL_LINK(HttpAddUrlToUrlGroup, 24)
WIN32_IMPL_LINK(HttpRemoveUrlFromUrlGroup, 16)
WIN32_IMPL_LINK(HttpSetUrlGroupProperty, 20)
WIN32_IMPL_LINK(HttpQueryUrlGroupProperty, 24)
WIN32_IMPL_LINK(HttpPrepareUrl, 16)
WIN32_IMPL_LINK(HttpReceiveHttpRequest, 32)
WIN32_IMPL_LINK(HttpReceiveRequestEntityBody, 32)
WIN32_IMPL_LINK(HttpSendHttpResponse, 44)
WIN32_IMPL_LINK(HttpSendResponseEntityBody, 44)
WIN32_IMPL_LINK(HttpDeclarePush, 28)
WIN32_IMPL_LINK(HttpWaitForDisconnect, 16)
WIN32_IMPL_LINK(HttpWaitForDisconnectEx, 20)
WIN32_IMPL_LINK(HttpCancelHttpRequest, 16)
WIN32_IMPL_LINK(HttpWaitForDemandStart, 8)
WIN32_IMPL_LINK(HttpFlushResponseCache, 16)
WIN32_IMPL_LINK(HttpAddFragmentToCache, 20)
WIN32_IMPL_LINK(HttpReadFragmentFromCache, 28)
WIN32_IMPL_LINK(HttpSetServiceConfiguration, 20)
WIN32_IMPL_LINK(HttpUpdateServiceConfiguration, 20)
WIN32_IMPL_LINK(HttpDeleteServiceConfiguration, 20)
WIN32_IMPL_LINK(HttpQueryServiceConfiguration, 32)
WIN32_IMPL_LINK(HttpGetExtension, 16)
WIN32_IMPL_LINK(WinHttpSetStatusCallback, 16)
WIN32_IMPL_LINK(WinHttpTimeFromSystemTime, 8)
WIN32_IMPL_LINK(WinHttpTimeToSystemTime, 8)
WIN32_IMPL_LINK(WinHttpCrackUrl, 16)
WIN32_IMPL_LINK(WinHttpCreateUrl, 16)
WIN32_IMPL_LINK(WinHttpCheckPlatform, 0)
WIN32_IMPL_LINK(WinHttpGetDefaultProxyConfiguration, 4)
WIN32_IMPL_LINK(WinHttpSetDefaultProxyConfiguration, 4)
WIN32_IMPL_LINK(WinHttpOpen, 20)
WIN32_IMPL_LINK(WinHttpCloseHandle, 4)
WIN32_IMPL_LINK(WinHttpConnect, 16)
WIN32_IMPL_LINK(WinHttpReadData, 16)
WIN32_IMPL_LINK(WinHttpWriteData, 16)
WIN32_IMPL_LINK(WinHttpQueryDataAvailable, 8)
WIN32_IMPL_LINK(WinHttpQueryOption, 16)
WIN32_IMPL_LINK(WinHttpSetOption, 16)
WIN32_IMPL_LINK(WinHttpSetTimeouts, 20)
WIN32_IMPL_LINK(WinHttpOpenRequest, 28)
WIN32_IMPL_LINK(WinHttpAddRequestHeaders, 16)
WIN32_IMPL_LINK(WinHttpAddRequestHeadersEx, 32)
WIN32_IMPL_LINK(WinHttpSendRequest, 28)
WIN32_IMPL_LINK(WinHttpSetCredentials, 24)
WIN32_IMPL_LINK(WinHttpQueryAuthSchemes, 16)
WIN32_IMPL_LINK(WinHttpReceiveResponse, 8)
WIN32_IMPL_LINK(WinHttpQueryHeaders, 24)
WIN32_IMPL_LINK(WinHttpDetectAutoProxyConfigUrl, 8)
WIN32_IMPL_LINK(WinHttpGetProxyForUrl, 16)
WIN32_IMPL_LINK(WinHttpCreateProxyResolver, 8)
WIN32_IMPL_LINK(WinHttpGetProxyForUrlEx, 16)
WIN32_IMPL_LINK(WinHttpGetProxyForUrlEx2, 24)
WIN32_IMPL_LINK(WinHttpGetProxyResult, 8)
WIN32_IMPL_LINK(WinHttpGetProxyResultEx, 8)
WIN32_IMPL_LINK(WinHttpFreeProxyResult, 4)
WIN32_IMPL_LINK(WinHttpFreeProxyResultEx, 4)
WIN32_IMPL_LINK(WinHttpResetAutoProxy, 8)
WIN32_IMPL_LINK(WinHttpGetIEProxyConfigForCurrentUser, 4)
WIN32_IMPL_LINK(WinHttpWriteProxySettings, 12)
WIN32_IMPL_LINK(WinHttpReadProxySettings, 28)
WIN32_IMPL_LINK(WinHttpFreeProxySettings, 4)
WIN32_IMPL_LINK(WinHttpGetProxySettingsVersion, 8)
WIN32_IMPL_LINK(WinHttpSetProxySettingsPerUser, 4)
WIN32_IMPL_LINK(WinHttpWebSocketCompleteUpgrade, 8)
WIN32_IMPL_LINK(WinHttpWebSocketSend, 16)
WIN32_IMPL_LINK(WinHttpWebSocketReceive, 20)
WIN32_IMPL_LINK(WinHttpWebSocketShutdown, 16)
WIN32_IMPL_LINK(WinHttpWebSocketClose, 16)
WIN32_IMPL_LINK(WinHttpWebSocketQueryCloseStatus, 20)

#pragma endregion abi_methods

#endif