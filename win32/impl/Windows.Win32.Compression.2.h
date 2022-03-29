// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Compression_2_H
#define WIN32_Windows_Win32_Compression_2_H
#include "win32/impl/Windows.Win32.Compression.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_CreateCompressor(uint32_t Algorithm, win32::Windows::Win32::Compression::COMPRESS_ALLOCATION_ROUTINES* AllocationRoutines, win32::Windows::Win32::Compression::COMPRESSOR_HANDLE* CompressorHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetCompressorInformation(win32::Windows::Win32::Compression::COMPRESSOR_HANDLE CompressorHandle, win32::Windows::Win32::Compression::COMPRESS_INFORMATION_CLASS CompressInformationClass, void* CompressInformation, size_t CompressInformationSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_QueryCompressorInformation(win32::Windows::Win32::Compression::COMPRESSOR_HANDLE CompressorHandle, win32::Windows::Win32::Compression::COMPRESS_INFORMATION_CLASS CompressInformationClass, void* CompressInformation, size_t CompressInformationSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_Compress(win32::Windows::Win32::Compression::COMPRESSOR_HANDLE CompressorHandle, void* UncompressedData, size_t UncompressedDataSize, void* CompressedBuffer, size_t CompressedBufferSize, size_t* CompressedDataSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ResetCompressor(win32::Windows::Win32::Compression::COMPRESSOR_HANDLE CompressorHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_CloseCompressor(win32::Windows::Win32::Compression::COMPRESSOR_HANDLE CompressorHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_CreateDecompressor(uint32_t Algorithm, win32::Windows::Win32::Compression::COMPRESS_ALLOCATION_ROUTINES* AllocationRoutines, intptr_t* DecompressorHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetDecompressorInformation(intptr_t DecompressorHandle, win32::Windows::Win32::Compression::COMPRESS_INFORMATION_CLASS CompressInformationClass, void* CompressInformation, size_t CompressInformationSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_QueryDecompressorInformation(intptr_t DecompressorHandle, win32::Windows::Win32::Compression::COMPRESS_INFORMATION_CLASS CompressInformationClass, void* CompressInformation, size_t CompressInformationSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_Decompress(intptr_t DecompressorHandle, void* CompressedData, size_t CompressedDataSize, void* UncompressedBuffer, size_t UncompressedBufferSize, size_t* UncompressedDataSize) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ResetDecompressor(intptr_t DecompressorHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_CloseDecompressor(intptr_t DecompressorHandle) noexcept;
}
WIN32_IMPL_LINK(CreateCompressor, 12)
WIN32_IMPL_LINK(SetCompressorInformation, 16)
WIN32_IMPL_LINK(QueryCompressorInformation, 16)
WIN32_IMPL_LINK(Compress, 24)
WIN32_IMPL_LINK(ResetCompressor, 4)
WIN32_IMPL_LINK(CloseCompressor, 4)
WIN32_IMPL_LINK(CreateDecompressor, 12)
WIN32_IMPL_LINK(SetDecompressorInformation, 16)
WIN32_IMPL_LINK(QueryDecompressorInformation, 16)
WIN32_IMPL_LINK(Decompress, 24)
WIN32_IMPL_LINK(ResetDecompressor, 4)
WIN32_IMPL_LINK(CloseDecompressor, 4)

#pragma endregion abi_methods

#endif