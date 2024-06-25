// Generated using https://github.com/a2x/cs2-dumper
// 2024-06-18 11:14:06.970414600 UTC

#![allow(non_upper_case_globals, unused)]

pub mod cs2_dumper {
    pub mod interfaces {
        // Module: animationsystem.dll
        pub mod animationsystem_dll {
            pub const AnimationSystemUtils_001: usize = 0x79E30;
            pub const AnimationSystem_001: usize = 0x748F0;
        }
        // Module: client.dll
        pub mod client_dll {
            pub const ClientToolsInfo_001: usize = 0x7466C0;
            pub const EmptyWorldService001_Client: usize = 0x481E40;
            pub const GameClientExports001: usize = 0x7466D0;
            pub const LegacyGameUI001: usize = 0x8DEEE0;
            pub const Source2Client002: usize = 0x7466E0;
            pub const Source2ClientConfig001: usize = 0x465240;
            pub const Source2ClientPrediction001: usize = 0x7C9990;
            pub const Source2ClientUI001: usize = 0x8C57B0;
        }
        // Module: engine2.dll
        pub mod engine2_dll {
            pub const BenchmarkService001: usize = 0x1845D0;
            pub const BugService001: usize = 0x185720;
            pub const ClientServerEngineLoopService_001: usize = 0x1FA6E0;
            pub const EngineGameUI001: usize = 0x129A10;
            pub const EngineServiceMgr001: usize = 0x1E8A70;
            pub const GameEventSystemClientV001: usize = 0x1EDBF0;
            pub const GameEventSystemServerV001: usize = 0x1EDC00;
            pub const GameResourceServiceClientV001: usize = 0x18CDA0;
            pub const GameResourceServiceServerV001: usize = 0x18CDB0;
            pub const GameUIService_001: usize = 0x18F760;
            pub const HostStateMgr001: usize = 0x1F3380;
            pub const INETSUPPORT_001: usize = 0xF83A0;
            pub const InputService_001: usize = 0x1952E0;
            pub const KeyValueCache001: usize = 0x1F5BA0;
            pub const MapListService_001: usize = 0x1A84A0;
            pub const NetworkClientService_001: usize = 0x1AF6F0;
            pub const NetworkP2PService_001: usize = 0x1B5E80;
            pub const NetworkServerService_001: usize = 0x1BA3B0;
            pub const NetworkService_001: usize = 0x1BF670;
            pub const RenderService_001: usize = 0x1BFB60;
            pub const ScreenshotService001: usize = 0x1C2510;
            pub const SimpleEngineLoopService_001: usize = 0x2072B0;
            pub const SoundService_001: usize = 0x1C6750;
            pub const Source2EngineToClient001: usize = 0x68F70;
            pub const Source2EngineToClientStringTable001: usize = 0x922D0;
            pub const Source2EngineToServer001: usize = 0x99860;
            pub const Source2EngineToServerStringTable001: usize = 0xB0E60;
            pub const SplitScreenService_001: usize = 0x1CD1A0;
            pub const StatsService_001: usize = 0x1CFF00;
            pub const ToolService_001: usize = 0x1D4980;
            pub const VENGINE_GAMEUIFUNCS_VERSION005: usize = 0x12A6C0;
            pub const VProfService_001: usize = 0x1D5DC0;
        }
        // Module: filesystem_stdio.dll
        pub mod filesystem_stdio_dll {
            pub const VAsyncFileSystem2_001: usize = 0x67490;
            pub const VFileSystem017: usize = 0x67480;
        }
        // Module: host.dll
        pub mod host_dll {
            pub const DebugDrawQueueManager001: usize = 0x15170;
            pub const GameModelInfo001: usize = 0x15720;
            pub const GameSystem2HostHook: usize = 0x15800;
            pub const HostUtils001: usize = 0x15FB0;
            pub const PredictionDiffManager001: usize = 0x1AB00;
            pub const SaveRestoreDataVersion001: usize = 0x1C500;
            pub const SinglePlayerSharedMemory001: usize = 0x1C510;
            pub const Source2Host001: usize = 0x1C8A0;
        }
        // Module: imemanager.dll
        pub mod imemanager_dll {
            pub const IMEManager001: usize = 0xC470;
        }
        // Module: inputsystem.dll
        pub mod inputsystem_dll {
            pub const InputStackSystemVersion001: usize = 0x1950;
            pub const InputSystemVersion001: usize = 0x2B40;
        }
        // Module: localize.dll
        pub mod localize_dll {
            pub const Localize_001: usize = 0x3AE0;
        }
        // Module: matchmaking.dll
        pub mod matchmaking_dll {
            pub const GameTypes001: usize = 0x32B10;
            pub const MATCHFRAMEWORK_001: usize = 0xE49C0;
        }
        // Module: materialsystem2.dll
        pub mod materialsystem2_dll {
            pub const FontManager_001: usize = 0x38450;
            pub const MaterialUtils_001: usize = 0x4E3A0;
            pub const PostProcessingSystem_001: usize = 0x43350;
            pub const TextLayout_001: usize = 0x4AA60;
            pub const VMaterialSystem2_001: usize = 0x26760;
        }
        // Module: meshsystem.dll
        pub mod meshsystem_dll {
            pub const MeshSystem001: usize = 0xAA20;
        }
        // Module: navsystem.dll
        pub mod navsystem_dll {
            pub const NavSystem001: usize = 0xC430;
        }
        // Module: networksystem.dll
        pub mod networksystem_dll {
            pub const FlattenedSerializersVersion001: usize = 0x83B60;
            pub const NetworkMessagesVersion001: usize = 0xA4840;
            pub const NetworkSystemVersion001: usize = 0xC5AE0;
            pub const SerializedEntitiesVersion001: usize = 0xDBCB0;
        }
        // Module: panorama.dll
        pub mod panorama_dll {
            pub const PanoramaUIEngine001: usize = 0x61240;
        }
        // Module: panorama_text_pango.dll
        pub mod panorama_text_pango_dll {
            pub const PanoramaTextServices001: usize = 0x4CBD0;
        }
        // Module: panoramauiclient.dll
        pub mod panoramauiclient_dll {
            pub const PanoramaUIClient001: usize = 0x122B0;
        }
        // Module: particles.dll
        pub mod particles_dll {
            pub const ParticleSystemMgr003: usize = 0x5C6D0;
        }
        // Module: pulse_system.dll
        pub mod pulse_system_dll {
            pub const IPulseSystem_001: usize = 0x3EC0;
        }
        // Module: rendersystemdx11.dll
        pub mod rendersystemdx11_dll {
            pub const RenderDeviceMgr001: usize = 0x4FAC0;
            pub const RenderUtils_001: usize = 0x596D0;
            pub const VRenderDeviceMgrBackdoor001: usize = 0x4FAD0;
        }
        // Module: resourcesystem.dll
        pub mod resourcesystem_dll {
            pub const ResourceSystem013: usize = 0x10C30;
        }
        // Module: scenefilecache.dll
        pub mod scenefilecache_dll {
            pub const ResponseRulesCache001: usize = 0x3320;
            pub const SceneFileCache002: usize = 0x6BE0;
        }
        // Module: scenesystem.dll
        pub mod scenesystem_dll {
            pub const RenderingPipelines_001: usize = 0x9C390;
            pub const SceneSystem_002: usize = 0xD3550;
            pub const SceneUtils_001: usize = 0x14B590;
        }
        // Module: schemasystem.dll
        pub mod schemasystem_dll {
            pub const SchemaSystem_001: usize = 0xAB40;
        }
        // Module: server.dll
        pub mod server_dll {
            pub const EmptyWorldService001_Server: usize = 0x564D40;
            pub const EntitySubclassUtilsV001: usize = 0x2BD310;
            pub const NavGameTest001: usize = 0xA57050;
            pub const ServerToolsInfo_001: usize = 0x8490B0;
            pub const Source2GameClients001: usize = 0x8490C0;
            pub const Source2GameDirector001: usize = 0x124330;
            pub const Source2GameEntities001: usize = 0x8490D0;
            pub const Source2Server001: usize = 0x8490E0;
            pub const Source2ServerConfig001: usize = 0x54FA60;
            pub const customnavsystem001: usize = 0x22BE60;
        }
        // Module: soundsystem.dll
        pub mod soundsystem_dll {
            pub const SoundOpSystem001: usize = 0x17F6C0;
            pub const SoundOpSystemEdit001: usize = 0x9CD80;
            pub const SoundSystem001: usize = 0x49730;
            pub const VMixEditTool001: usize = 0x7A160;
        }
        // Module: steamaudio.dll
        pub mod steamaudio_dll {
            pub const SteamAudio001: usize = 0x64A70;
        }
        // Module: steamclient64.dll
        pub mod steamclient64_dll {
            pub const CLIENTENGINE_INTERFACE_VERSION005: usize = 0x8A8B10;
            pub const IVALIDATE001: usize = 0x8ACF90;
            pub const SteamClient006: usize = 0x693650;
            pub const SteamClient007: usize = 0x693660;
            pub const SteamClient008: usize = 0x693670;
            pub const SteamClient009: usize = 0x693680;
            pub const SteamClient010: usize = 0x693690;
            pub const SteamClient011: usize = 0x6936A0;
            pub const SteamClient012: usize = 0x6936B0;
            pub const SteamClient013: usize = 0x6936C0;
            pub const SteamClient014: usize = 0x6936D0;
            pub const SteamClient015: usize = 0x6936E0;
            pub const SteamClient016: usize = 0x6936F0;
            pub const SteamClient017: usize = 0x693700;
            pub const SteamClient018: usize = 0x693710;
            pub const SteamClient019: usize = 0x693720;
            pub const SteamClient020: usize = 0x693730;
            pub const SteamClient021: usize = 0x693740;
            pub const p2pvoice002: usize = 0xDA9A0;
            pub const p2pvoicesingleton002: usize = 0xD72B0;
        }
        // Module: tier0.dll
        pub mod tier0_dll {
            pub const TestScriptMgr001: usize = 0x149BF0;
            pub const VEngineCvar007: usize = 0x63C70;
            pub const VProcessUtils002: usize = 0x13A650;
            pub const VStringTokenSystem001: usize = 0x19E7A0;
        }
        // Module: v8system.dll
        pub mod v8system_dll {
            pub const Source2V8System001: usize = 0x1AE0;
        }
        // Module: valve_avi.dll
        pub mod valve_avi_dll {
            pub const VAvi001: usize = 0x2F90;
        }
        // Module: valve_wmf.dll
        pub mod valve_wmf_dll {
            pub const VMediaFoundation001: usize = 0x12D0;
        }
        // Module: vphysics2.dll
        pub mod vphysics2_dll {
            pub const VPhysics2_Handle_Interface_001: usize = 0x60C80;
            pub const VPhysics2_Interface_001: usize = 0x5C030;
        }
        // Module: vscript.dll
        pub mod vscript_dll {
            pub const VScriptManager010: usize = 0x32210;
        }
        // Module: vstdlib_s64.dll
        pub mod vstdlib_s64_dll {
            pub const IVALIDATE001: usize = 0x26B40;
            pub const VEngineCvar002: usize = 0x6060;
        }
        // Module: worldrenderer.dll
        pub mod worldrenderer_dll {
            pub const WorldRendererMgr001: usize = 0x22FD0;
        }
    }
}
