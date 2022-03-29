// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_XAudio2_H
#define WIN32_Windows_Win32_XAudio2_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.XAudio2.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::XAudio2
{
#pragma region methods
    inline int32_t CreateFX(::win32::guid* clsid, Windows::Win32::Com::IUnknown** pEffect, void* pInitDat, uint32_t InitDataByteSize)
    {
        auto win32_impl_result = WIN32_IMPL_CreateFX(clsid, pEffect, pInitDat, InitDataByteSize);
        return win32_impl_result;
    }
    inline int32_t XAudio2CreateWithVersionInfo(Windows::Win32::XAudio2::IXAudio2** ppXAudio2, uint32_t Flags, uint32_t XAudio2Processor, uint32_t ntddiVersion)
    {
        auto win32_impl_result = WIN32_IMPL_XAudio2CreateWithVersionInfo(ppXAudio2, Flags, XAudio2Processor, ntddiVersion);
        return win32_impl_result;
    }
    inline int32_t CreateAudioVolumeMeter(Windows::Win32::Com::IUnknown** ppApo)
    {
        auto win32_impl_result = WIN32_IMPL_CreateAudioVolumeMeter(ppApo);
        return win32_impl_result;
    }
    inline int32_t CreateAudioReverb(Windows::Win32::Com::IUnknown** ppApo)
    {
        auto win32_impl_result = WIN32_IMPL_CreateAudioReverb(ppApo);
        return win32_impl_result;
    }
    inline int32_t CreateHrtfApo(Windows::Win32::XAudio2::HrtfApoInit* init, Windows::Win32::XAudio2::IXAPO** xApo)
    {
        auto win32_impl_result = WIN32_IMPL_CreateHrtfApo(init, xApo);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif