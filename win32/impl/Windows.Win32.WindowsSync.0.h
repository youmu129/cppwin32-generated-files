// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsSync_0_H
#define WIN32_Windows_Win32_WindowsSync_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsSync
{
#pragma region enums
    enum class CONFLICT_RESOLUTION_POLICY : int32_t
    {
        CRP_NONE = 0,
        CRP_DESTINATION_PROVIDER_WINS = 1,
        CRP_SOURCE_PROVIDER_WINS = 2,
        CRP_LAST = 3,
    };
    enum class FILTERING_TYPE : int32_t
    {
        FT_CURRENT_ITEMS_ONLY = 0,
        FT_CURRENT_ITEMS_AND_VERSIONS_FOR_MOVED_OUT_ITEMS = 1,
    };
    enum class KNOWLEDGE_COOKIE_COMPARISON_RESULT : int32_t
    {
        KCCR_COOKIE_KNOWLEDGE_EQUAL = 0,
        KCCR_COOKIE_KNOWLEDGE_CONTAINED = 1,
        KCCR_COOKIE_KNOWLEDGE_CONTAINS = 2,
        KCCR_COOKIE_KNOWLEDGE_NOT_COMPARABLE = 3,
    };
    enum class SYNC_FULL_ENUMERATION_ACTION : int32_t
    {
        SFEA_FULL_ENUMERATION = 0,
        SFEA_PARTIAL_SYNC = 1,
        SFEA_ABORT = 2,
    };
    enum class SYNC_PROGRESS_STAGE : int32_t
    {
        SPS_CHANGE_DETECTION = 0,
        SPS_CHANGE_ENUMERATION = 1,
        SPS_CHANGE_APPLICATION = 2,
    };
    enum class SYNC_PROVIDER_ROLE : int32_t
    {
        SPR_SOURCE = 0,
        SPR_DESTINATION = 1,
    };
    enum class SYNC_REGISTRATION_EVENT : int32_t
    {
        SRE_PROVIDER_ADDED = 0,
        SRE_PROVIDER_REMOVED = 1,
        SRE_PROVIDER_UPDATED = 2,
        SRE_PROVIDER_STATE_CHANGED = 3,
        SRE_CONFIGUI_ADDED = 4,
        SRE_CONFIGUI_REMOVED = 5,
        SRE_CONFIGUI_UPDATED = 6,
    };
    enum class SYNC_RESOLVE_ACTION : int32_t
    {
        SRA_DEFER = 0,
        SRA_ACCEPT_DESTINATION_PROVIDER = 1,
        SRA_ACCEPT_SOURCE_PROVIDER = 2,
        SRA_MERGE = 3,
        SRA_TRANSFER_AND_DEFER = 4,
        SRA_LAST = 5,
    };
    enum class SYNC_SERIALIZATION_VERSION : int32_t
    {
        SYNC_SERIALIZATION_VERSION_V1 = 1,
        SYNC_SERIALIZATION_VERSION_V2 = 4,
        SYNC_SERIALIZATION_VERSION_V3 = 5,
    };
    enum class SYNC_STATISTICS : int32_t
    {
        SYNC_STATISTICS_RANGE_COUNT = 0,
    };
    enum class __MIDL___MIDL_itf_winsync_0000_0000_0009 : int32_t
    {
        SCRA_DEFER = 0,
        SCRA_ACCEPT_DESTINATION_PROVIDER = 1,
        SCRA_ACCEPT_SOURCE_PROVIDER = 2,
        SCRA_TRANSFER_AND_DEFER = 3,
        SCRA_MERGE = 4,
        SCRA_RENAME_SOURCE = 5,
        SCRA_RENAME_DESTINATION = 6,
    };
    enum class __MIDL___MIDL_itf_winsync_0000_0000_0010 : int32_t
    {
        CCR_OTHER = 0,
        CCR_COLLISION = 1,
        CCR_NOPARENT = 2,
        CCR_IDENTITY = 3,
    };
    enum class __MIDL___MIDL_itf_winsync_0000_0036_0001 : int32_t
    {
        FCT_INTERSECTION = 0,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ID_PARAMETERS;
    struct ID_PARAMETER_PAIR;
    struct SYNC_FILTER_CHANGE;
    struct SYNC_RANGE;
    struct SYNC_SESSION_STATISTICS;
    struct SYNC_TIME;
    struct SYNC_VERSION;
    struct SyncProviderConfigUIConfiguration;
    struct SyncProviderConfiguration;
    struct IAsynchronousDataRetriever;
    struct IChangeConflict;
    struct IChangeUnitException;
    struct IChangeUnitListFilterInfo;
    struct IClockVector;
    struct IClockVectorElement;
    struct ICombinedFilterInfo;
    struct IConstraintConflict;
    struct IConstructReplicaKeyMap;
    struct ICoreFragment;
    struct ICoreFragmentInspector;
    struct ICustomFilterInfo;
    struct IDataRetrieverCallback;
    struct IEnumChangeUnitExceptions;
    struct IEnumClockVector;
    struct IEnumFeedClockVector;
    struct IEnumItemIds;
    struct IEnumRangeExceptions;
    struct IEnumSingleItemExceptions;
    struct IEnumSyncChangeUnits;
    struct IEnumSyncChanges;
    struct IEnumSyncProviderConfigUIInfos;
    struct IEnumSyncProviderInfos;
    struct IFeedClockVector;
    struct IFeedClockVectorElement;
    struct IFilterKeyMap;
    struct IFilterRequestCallback;
    struct IFilterTrackingProvider;
    struct IFilterTrackingRequestCallback;
    struct IFilterTrackingSyncChangeBuilder;
    struct IForgottenKnowledge;
    struct IKnowledgeSyncProvider;
    struct ILoadChangeContext;
    struct IProviderConverter;
    struct IRangeException;
    struct IRecoverableError;
    struct IRecoverableErrorData;
    struct IRegisteredSyncProvider;
    struct IReplicaKeyMap;
    struct IRequestFilteredSync;
    struct ISingleItemException;
    struct ISupportFilteredSync;
    struct ISupportLastWriteTime;
    struct ISyncCallback;
    struct ISyncCallback2;
    struct ISyncChange;
    struct ISyncChangeBatch;
    struct ISyncChangeBatch2;
    struct ISyncChangeBatchAdvanced;
    struct ISyncChangeBatchBase;
    struct ISyncChangeBatchBase2;
    struct ISyncChangeBatchWithFilterKeyMap;
    struct ISyncChangeBatchWithPrerequisite;
    struct ISyncChangeBuilder;
    struct ISyncChangeUnit;
    struct ISyncChangeWithFilterKeyMap;
    struct ISyncChangeWithPrerequisite;
    struct ISyncConstraintCallback;
    struct ISyncDataConverter;
    struct ISyncFilter;
    struct ISyncFilterDeserializer;
    struct ISyncFilterInfo;
    struct ISyncFilterInfo2;
    struct ISyncFullEnumerationChange;
    struct ISyncFullEnumerationChangeBatch;
    struct ISyncFullEnumerationChangeBatch2;
    struct ISyncKnowledge;
    struct ISyncKnowledge2;
    struct ISyncMergeTombstoneChange;
    struct ISyncProvider;
    struct ISyncProviderConfigUI;
    struct ISyncProviderConfigUIInfo;
    struct ISyncProviderInfo;
    struct ISyncProviderRegistration;
    struct ISyncRegistrationChange;
    struct ISyncSessionExtendedErrorInfo;
    struct ISyncSessionState;
    struct ISyncSessionState2;
    struct ISynchronousDataRetriever;
    struct SyncProviderRegistration;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IAsynchronousDataRetriever>{ 0x9FC7E470,0x61EA,0x4A88,{ 0x9B,0xE4,0xDF,0x56,0xA2,0x7C,0xFE,0xF2 } }; // 9FC7E470-61EA-4A88-9BE4-DF56A27CFEF2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IChangeConflict>{ 0x014EBF97,0x9F20,0x4F7A,{ 0xBD,0xD4,0x25,0x97,0x9C,0x77,0xC0,0x02 } }; // 014EBF97-9F20-4F7A-BDD4-25979C77C002
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IChangeUnitException>{ 0x0CD7EE7C,0xFEC0,0x4021,{ 0x99,0xEE,0xF0,0xE5,0x34,0x8F,0x2A,0x5F } }; // 0CD7EE7C-FEC0-4021-99EE-F0E5348F2A5F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IChangeUnitListFilterInfo>{ 0xF2837671,0x0BDF,0x43FA,{ 0xB5,0x02,0x23,0x23,0x75,0xFB,0x50,0xC2 } }; // F2837671-0BDF-43FA-B502-232375FB50C2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IClockVector>{ 0x14B2274A,0x8698,0x4CC6,{ 0x93,0x33,0xF8,0x9B,0xD1,0xD4,0x7B,0xC4 } }; // 14B2274A-8698-4CC6-9333-F89BD1D47BC4
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IClockVectorElement>{ 0xE71C4250,0xADF8,0x4A07,{ 0x8F,0xAE,0x56,0x69,0x59,0x69,0x09,0xC1 } }; // E71C4250-ADF8-4A07-8FAE-5669596909C1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ICombinedFilterInfo>{ 0x11F9DE71,0x2818,0x4779,{ 0xB2,0xAC,0x42,0xD4,0x50,0x56,0x5F,0x45 } }; // 11F9DE71-2818-4779-B2AC-42D450565F45
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IConstraintConflict>{ 0x00D2302E,0x1CF8,0x4835,{ 0xB8,0x5F,0xB7,0xCA,0x4F,0x79,0x9E,0x0A } }; // 00D2302E-1CF8-4835-B85F-B7CA4F799E0A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IConstructReplicaKeyMap>{ 0xDED10970,0xEC85,0x4115,{ 0xB5,0x2C,0x44,0x05,0x84,0x56,0x42,0xA5 } }; // DED10970-EC85-4115-B52C-4405845642A5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ICoreFragment>{ 0x613B2AB5,0xB304,0x47D9,{ 0x9C,0x31,0xCE,0x6C,0x54,0x40,0x1A,0x15 } }; // 613B2AB5-B304-47D9-9C31-CE6C54401A15
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ICoreFragmentInspector>{ 0xF7FCC5FD,0xAE26,0x4679,{ 0xBA,0x16,0x96,0xAA,0xC5,0x83,0xC1,0x34 } }; // F7FCC5FD-AE26-4679-BA16-96AAC583C134
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ICustomFilterInfo>{ 0x1D335DFF,0x6F88,0x4E4D,{ 0x91,0xA8,0xA3,0xF3,0x51,0xCF,0xD4,0x73 } }; // 1D335DFF-6F88-4E4D-91A8-A3F351CFD473
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IDataRetrieverCallback>{ 0x71B4863B,0xF969,0x4676,{ 0xBB,0xC3,0x3D,0x9F,0xDC,0x3F,0xB2,0xC7 } }; // 71B4863B-F969-4676-BBC3-3D9FDC3FB2C7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumChangeUnitExceptions>{ 0x3074E802,0x9319,0x4420,{ 0xBE,0x21,0x10,0x22,0xE2,0xE2,0x1D,0xA8 } }; // 3074E802-9319-4420-BE21-1022E2E21DA8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumClockVector>{ 0x525844DB,0x2837,0x4799,{ 0x9E,0x80,0x81,0xA6,0x6E,0x02,0x22,0x0C } }; // 525844DB-2837-4799-9E80-81A66E02220C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumFeedClockVector>{ 0x550F763D,0x146A,0x48F6,{ 0xAB,0xEB,0x6C,0x88,0xC7,0xF7,0x05,0x14 } }; // 550F763D-146A-48F6-ABEB-6C88C7F70514
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumItemIds>{ 0x43AA3F61,0x4B2E,0x4B60,{ 0x83,0xDF,0xB1,0x10,0xD3,0xE1,0x48,0xF1 } }; // 43AA3F61-4B2E-4B60-83DF-B110D3E148F1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumRangeExceptions>{ 0x0944439F,0xDDB1,0x4176,{ 0xB7,0x03,0x04,0x6F,0xF2,0x2A,0x23,0x86 } }; // 0944439F-DDB1-4176-B703-046FF22A2386
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumSingleItemExceptions>{ 0xE563381C,0x1B4D,0x4C66,{ 0x97,0x96,0xC8,0x6F,0xAC,0xCD,0xCD,0x40 } }; // E563381C-1B4D-4C66-9796-C86FACCDCD40
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumSyncChangeUnits>{ 0x346B35F1,0x8703,0x4C6D,{ 0xAB,0x1A,0x4D,0xBC,0xA2,0xCF,0xF9,0x7F } }; // 346B35F1-8703-4C6D-AB1A-4DBCA2CFF97F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumSyncChanges>{ 0x5F86BE4A,0x5E78,0x4E32,{ 0xAC,0x1C,0xC2,0x4F,0xD2,0x23,0xEF,0x85 } }; // 5F86BE4A-5E78-4E32-AC1C-C24FD223EF85
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumSyncProviderConfigUIInfos>{ 0xF6BE2602,0x17C6,0x4658,{ 0xA2,0xD7,0x68,0xED,0x33,0x30,0xF6,0x41 } }; // F6BE2602-17C6-4658-A2D7-68ED3330F641
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IEnumSyncProviderInfos>{ 0xA04BA850,0x5EB1,0x460D,{ 0xA9,0x73,0x39,0x3F,0xCB,0x60,0x8A,0x11 } }; // A04BA850-5EB1-460D-A973-393FCB608A11
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFeedClockVector>{ 0x8D1D98D1,0x9FB8,0x4EC9,{ 0xA5,0x53,0x54,0xDD,0x92,0x4E,0x0F,0x67 } }; // 8D1D98D1-9FB8-4EC9-A553-54DD924E0F67
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFeedClockVectorElement>{ 0xA40B46D2,0xE97B,0x4156,{ 0xB6,0xDA,0x99,0x1F,0x50,0x1B,0x0F,0x05 } }; // A40B46D2-E97B-4156-B6DA-991F501B0F05
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFilterKeyMap>{ 0xCA169652,0x07C6,0x4708,{ 0xA3,0xDA,0x6E,0x4E,0xBA,0x8D,0x22,0x97 } }; // CA169652-07C6-4708-A3DA-6E4EBA8D2297
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFilterRequestCallback>{ 0x82DF8873,0x6360,0x463A,{ 0xA8,0xA1,0xED,0xE5,0xE1,0xA1,0x59,0x4D } }; // 82DF8873-6360-463A-A8A1-EDE5E1A1594D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFilterTrackingProvider>{ 0x743383C0,0xFC4E,0x45BA,{ 0xAD,0x81,0xD9,0xD8,0x4C,0x7A,0x24,0xF8 } }; // 743383C0-FC4E-45BA-AD81-D9D84C7A24F8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFilterTrackingRequestCallback>{ 0x713CA7BB,0xC858,0x4674,{ 0xB4,0xB6,0x11,0x22,0x43,0x65,0x87,0xA9 } }; // 713CA7BB-C858-4674-B4B6-1122436587A9
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IFilterTrackingSyncChangeBuilder>{ 0x295024A0,0x70DA,0x4C58,{ 0x88,0x3C,0xCE,0x2A,0xFB,0x30,0x8D,0x0B } }; // 295024A0-70DA-4C58-883C-CE2AFB308D0B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IForgottenKnowledge>{ 0x456E0F96,0x6036,0x452B,{ 0x9F,0x9D,0xBC,0xC4,0xB4,0xA8,0x5D,0xB2 } }; // 456E0F96-6036-452B-9F9D-BCC4B4A85DB2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IKnowledgeSyncProvider>{ 0x43434A49,0x8DA4,0x47F2,{ 0x81,0x72,0xAD,0x7B,0x8B,0x02,0x49,0x78 } }; // 43434A49-8DA4-47F2-8172-AD7B8B024978
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ILoadChangeContext>{ 0x44A4AACA,0xEC39,0x46D5,{ 0xB5,0xC9,0xD6,0x33,0xC0,0xEE,0x67,0xE2 } }; // 44A4AACA-EC39-46D5-B5C9-D633C0EE67E2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IProviderConverter>{ 0x809B7276,0x98CF,0x4957,{ 0x93,0xA5,0x0E,0xBD,0xD3,0xDD,0xDF,0xFD } }; // 809B7276-98CF-4957-93A5-0EBDD3DDDFFD
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IRangeException>{ 0x75AE8777,0x6848,0x49F7,{ 0x95,0x6C,0xA3,0xA9,0x2F,0x50,0x96,0xE8 } }; // 75AE8777-6848-49F7-956C-A3A92F5096E8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IRecoverableError>{ 0x0F5625E8,0x0A7B,0x45EE,{ 0x96,0x37,0x1C,0xE1,0x36,0x45,0x90,0x9E } }; // 0F5625E8-0A7B-45EE-9637-1CE13645909E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IRecoverableErrorData>{ 0xB37C4A0A,0x4B7D,0x4C2D,{ 0x97,0x11,0x3B,0x00,0xD1,0x19,0xB1,0xC8 } }; // B37C4A0A-4B7D-4C2D-9711-3B00D119B1C8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IRegisteredSyncProvider>{ 0x913BCF76,0x47C1,0x40B5,{ 0xA8,0x96,0x5E,0x8A,0x9C,0x41,0x4C,0x14 } }; // 913BCF76-47C1-40B5-A896-5E8A9C414C14
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IReplicaKeyMap>{ 0x2209F4FC,0xFD10,0x4FF0,{ 0x84,0xA8,0xF0,0xA1,0x98,0x2E,0x44,0x0E } }; // 2209F4FC-FD10-4FF0-84A8-F0A1982E440E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::IRequestFilteredSync>{ 0x2E020184,0x6D18,0x46A7,{ 0xA3,0x2A,0xDA,0x4A,0xEB,0x06,0x69,0x6C } }; // 2E020184-6D18-46A7-A32A-DA4AEB06696C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISingleItemException>{ 0x892FB9B0,0x7C55,0x4A18,{ 0x93,0x16,0xFD,0xF4,0x49,0x56,0x9B,0x64 } }; // 892FB9B0-7C55-4A18-9316-FDF449569B64
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISupportFilteredSync>{ 0x3D128DED,0xD555,0x4E0D,{ 0xBF,0x4B,0xFB,0x21,0x3A,0x8A,0x93,0x02 } }; // 3D128DED-D555-4E0D-BF4B-FB213A8A9302
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISupportLastWriteTime>{ 0xEADF816F,0xD0BD,0x43CA,{ 0x8F,0x40,0x5A,0xCD,0xC6,0xC0,0x6F,0x7A } }; // EADF816F-D0BD-43CA-8F40-5ACDC6C06F7A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncCallback>{ 0x0599797F,0x5ED9,0x485C,{ 0xAE,0x36,0x0C,0x5D,0x1B,0xF2,0xE7,0xA5 } }; // 0599797F-5ED9-485C-AE36-0C5D1BF2E7A5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncCallback2>{ 0x47CE84AF,0x7442,0x4EAD,{ 0x86,0x30,0x12,0x01,0x5E,0x03,0x0A,0xD7 } }; // 47CE84AF-7442-4EAD-8630-12015E030AD7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChange>{ 0xA1952BEB,0x0F6B,0x4711,{ 0xB1,0x36,0x01,0xDA,0x85,0xB9,0x68,0xA6 } }; // A1952BEB-0F6B-4711-B136-01DA85B968A6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatch>{ 0x70C64DEE,0x380F,0x4C2E,{ 0x8F,0x70,0x31,0xC5,0x5B,0xD5,0xF9,0xB3 } }; // 70C64DEE-380F-4C2E-8F70-31C55BD5F9B3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatch2>{ 0x225F4A33,0xF5EE,0x4CC7,{ 0xB0,0x39,0x67,0xA2,0x62,0xB4,0xB2,0xAC } }; // 225F4A33-F5EE-4CC7-B039-67A262B4B2AC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatchAdvanced>{ 0x0F1A4995,0xCBC8,0x421D,{ 0xB5,0x50,0x5D,0x0B,0xEB,0xF3,0xE9,0xA5 } }; // 0F1A4995-CBC8-421D-B550-5D0BEBF3E9A5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatchBase>{ 0x52F6E694,0x6A71,0x4494,{ 0xA1,0x84,0xA8,0x31,0x1B,0xF5,0xD2,0x27 } }; // 52F6E694-6A71-4494-A184-A8311BF5D227
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatchBase2>{ 0x6FDB596A,0xD755,0x4584,{ 0xBD,0x0C,0xC0,0xC2,0x3A,0x54,0x8F,0xBF } }; // 6FDB596A-D755-4584-BD0C-C0C23A548FBF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatchWithFilterKeyMap>{ 0xDE247002,0x566D,0x459A,{ 0xA6,0xED,0xA5,0xAA,0xB3,0x45,0x9F,0xB7 } }; // DE247002-566D-459A-A6ED-A5AAB3459FB7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBatchWithPrerequisite>{ 0x097F13BE,0x5B92,0x4048,{ 0xB3,0xF2,0x7B,0x42,0xA2,0x51,0x5E,0x07 } }; // 097F13BE-5B92-4048-B3F2-7B42A2515E07
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeBuilder>{ 0x56F14771,0x8677,0x484F,{ 0xA1,0x70,0xE3,0x86,0xE4,0x18,0xA6,0x76 } }; // 56F14771-8677-484F-A170-E386E418A676
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeUnit>{ 0x60EDD8CA,0x7341,0x4BB7,{ 0x95,0xCE,0xFA,0xB6,0x39,0x4B,0x51,0xCB } }; // 60EDD8CA-7341-4BB7-95CE-FAB6394B51CB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeWithFilterKeyMap>{ 0xBFE1EF00,0xE87D,0x42FD,{ 0xA4,0xE9,0x24,0x2D,0x70,0x41,0x4A,0xEF } }; // BFE1EF00-E87D-42FD-A4E9-242D70414AEF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncChangeWithPrerequisite>{ 0x9E38382F,0x1589,0x48C3,{ 0x92,0xE4,0x05,0xEC,0xDC,0xB4,0xF3,0xF7 } }; // 9E38382F-1589-48C3-92E4-05ECDCB4F3F7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncConstraintCallback>{ 0x8AF3843E,0x75B3,0x438C,{ 0xBB,0x51,0x6F,0x02,0x0D,0x70,0xD3,0xCB } }; // 8AF3843E-75B3-438C-BB51-6F020D70D3CB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncDataConverter>{ 0x435D4861,0x68D5,0x44AA,{ 0xA0,0xF9,0x72,0xA0,0xB0,0x0E,0xF9,0xCF } }; // 435D4861-68D5-44AA-A0F9-72A0B00EF9CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFilter>{ 0x087A3F15,0x0FCB,0x44C1,{ 0x96,0x39,0x53,0xC1,0x4E,0x2B,0x55,0x06 } }; // 087A3F15-0FCB-44C1-9639-53C14E2B5506
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFilterDeserializer>{ 0xB45B7A72,0xE5C7,0x46BE,{ 0x9C,0x82,0x77,0xB8,0xB1,0x5D,0xAB,0x8A } }; // B45B7A72-E5C7-46BE-9C82-77B8B15DAB8A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFilterInfo>{ 0x794EAAF8,0x3F2E,0x47E6,{ 0x97,0x28,0x17,0xE6,0xFC,0xF9,0x4C,0xB7 } }; // 794EAAF8-3F2E-47E6-9728-17E6FCF94CB7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFilterInfo2>{ 0x19B394BA,0xE3D0,0x468C,{ 0x93,0x4D,0x32,0x19,0x68,0xB2,0xAB,0x34 } }; // 19B394BA-E3D0-468C-934D-321968B2AB34
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFullEnumerationChange>{ 0x9785E0BD,0xBDFF,0x40C4,{ 0x98,0xC5,0xB3,0x4B,0x2F,0x19,0x91,0xB3 } }; // 9785E0BD-BDFF-40C4-98C5-B34B2F1991B3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFullEnumerationChangeBatch>{ 0xEF64197D,0x4F44,0x4EA2,{ 0xB3,0x55,0x45,0x24,0x71,0x3E,0x3B,0xED } }; // EF64197D-4F44-4EA2-B355-4524713E3BED
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncFullEnumerationChangeBatch2>{ 0xE06449F4,0xA205,0x4B65,{ 0x97,0x24,0x01,0xB2,0x21,0x01,0xEE,0xC1 } }; // E06449F4-A205-4B65-9724-01B22101EEC1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncKnowledge>{ 0x615BBB53,0xC945,0x4203,{ 0xBF,0x4B,0x2C,0xB6,0x59,0x19,0xA0,0xAA } }; // 615BBB53-C945-4203-BF4B-2CB65919A0AA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncKnowledge2>{ 0xED0ADDC0,0x3B4B,0x46A1,{ 0x9A,0x45,0x45,0x66,0x1D,0x21,0x14,0xC8 } }; // ED0ADDC0-3B4B-46A1-9A45-45661D2114C8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncMergeTombstoneChange>{ 0x6EC62597,0x0903,0x484C,{ 0xAD,0x61,0x36,0xD6,0xE9,0x38,0xF4,0x7B } }; // 6EC62597-0903-484C-AD61-36D6E938F47B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncProvider>{ 0x8F657056,0x2BCE,0x4A17,{ 0x8C,0x68,0xC7,0xBB,0x78,0x98,0xB5,0x6F } }; // 8F657056-2BCE-4A17-8C68-C7BB7898B56F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncProviderConfigUI>{ 0x7B0705F6,0xCBCD,0x4071,{ 0xAB,0x05,0x3B,0xDC,0x36,0x4D,0x4A,0x0C } }; // 7B0705F6-CBCD-4071-AB05-3BDC364D4A0C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncProviderConfigUIInfo>{ 0x214141AE,0x33D7,0x4D8D,{ 0x8E,0x37,0xF2,0x27,0xE8,0x80,0xCE,0x50 } }; // 214141AE-33D7-4D8D-8E37-F227E880CE50
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncProviderInfo>{ 0x1EE135DE,0x88A4,0x4504,{ 0xB0,0xD0,0xF7,0x92,0x0D,0x7E,0x5B,0xA6 } }; // 1EE135DE-88A4-4504-B0D0-F7920D7E5BA6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncProviderRegistration>{ 0xCB45953B,0x7624,0x47BC,{ 0xA4,0x72,0xEB,0x8C,0xAC,0x6B,0x22,0x2E } }; // CB45953B-7624-47BC-A472-EB8CAC6B222E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncRegistrationChange>{ 0xEEA0D9AE,0x6B29,0x43B4,{ 0x9E,0x70,0xE3,0xAE,0x33,0xBB,0x2C,0x3B } }; // EEA0D9AE-6B29-43B4-9E70-E3AE33BB2C3B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncSessionExtendedErrorInfo>{ 0x326C6810,0x790A,0x409B,{ 0xB7,0x41,0x69,0x99,0x38,0x87,0x61,0xEB } }; // 326C6810-790A-409B-B741-6999388761EB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncSessionState>{ 0xB8A940FE,0x9F01,0x483B,{ 0x94,0x34,0xC3,0x7D,0x36,0x12,0x25,0xD9 } }; // B8A940FE-9F01-483B-9434-C37D361225D9
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISyncSessionState2>{ 0x9E37CFA3,0x9E38,0x4C61,{ 0x9C,0xA3,0xFF,0xE8,0x10,0xB4,0x5C,0xA2 } }; // 9E37CFA3-9E38-4C61-9CA3-FFE810B45CA2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::ISynchronousDataRetriever>{ 0x9B22F2A9,0xA4CD,0x4648,{ 0x9D,0x8E,0x3A,0x51,0x0D,0x4D,0xA0,0x4B } }; // 9B22F2A9-A4CD-4648-9D8E-3A510D4DA04B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSync::SyncProviderRegistration>{ 0xF82B4EF1,0x93A9,0x4DDE,{ 0x80,0x15,0xF7,0x95,0x0A,0x1A,0x6E,0x31 } }; // F82B4EF1-93A9-4DDE-8015-F7950A1A6E31
#pragma endregion guids

}
#endif