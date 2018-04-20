struct cpuinfo_mock_file filesystem[] = {
#if CPUINFO_ARCH_ARM64
	{
		.path = "/proc/cpuinfo",
		.size = 421,
		.content =
			"Processor\t: AArch64 Processor rev 2 (aarch64)\n"
			"processor\t: 0\n"
			"BogoMIPS\t: 26.00\n"
			"Features\t: fp asimd aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: AArch64\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xd03\n"
			"CPU revision\t: 2\n"
			"processor\t: 1\n"
			"BogoMIPS\t: 26.00\n"
			"Features\t: fp asimd aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: AArch64\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xd03\n"
			"CPU revision\t: 2\n"
			"\n"
			"Hardware\t: MT6755\n",
	},
#elif CPUINFO_ARCH_ARM
	{
		.path = "/proc/cpuinfo",
		.size = 495,
		.content =
			"WARNING: linker: /data/local/tmp/cpuinfo-dump: unused DT entry: type 0x6ffffffe arg 0x52c\r\n"
			"WARNING: linker: /data/local/tmp/cpuinfo-dump: unused DT entry: type 0x6fffffff arg 0x1\r\n"
			"Processor\t: AArch64 Processor rev 2 (aarch64)\r\n"
			"processor\t: 0\r\n"
			"BogoMIPS\t: 26.00\r\n"
			"Features\t: fp asimd aes pmull sha1 sha2 crc32 wp half thumb fastmult vfp edsp neon vfpv3 tlsi vfpv4 idiva idivt \r\n"
			"CPU implementer\t: 0x41\r\n"
			"CPU architecture: 8\r\n"
			"CPU variant\t: 0x0\r\n"
			"CPU part\t: 0xd03\r\n"
			"CPU revision\t: 2\r\n"
			"\r\n"
			"Hardware\t: MT6755\r\n",
	},
#endif
	{
		.path = "/system/build.prop",
		.size = 11243,
		.content =
			"############################## Add OPPO Info Begin for oppo6755_15311 ##############################\n"
			"persist.version.confidential=false\n"
			"ro.dirac.max_active.powersound=3\n"
			"ro.dirac.max_active.headset=5\n"
			"ro.dirac.poolsize=2\n"
			"ro.dirac.config=1\n"
			"ro.mediatek.version.release=X9009EX_11_A.18_160620\n"
			"############################## Add OPPO Info End for oppo6755_15311 ##############################\n"
			"############################## Add OPPO Info Begin ##############################\n"
			"ro.build.date.Ymd=160620\n"
			"ro.build.date.ymd=160620\n"
			"ro.build.date.YmdHM=201606201827\n"
			"ro.product.model=X9009\n"
			"ro.product.brand=OPPO\n"
			"ro.product.name=X9009\n"
			"ro.product.device=X9009\n"
			"ro.product.board=full_oppo6755_15311\n"
			"ro.build.product=oppo6755_15311\n"
			"ro.build.soft.version=A.18\n"
			"ro.xxversion=v0.5\n"
			"ro.build.version.ota=X9009EX_11.A.18_INT_018_201606201753\n"
			"ro.build.soft.majorversion=\n"
			"ro.build.ota.versionname=X9009EX_11_A.18_160620\n"
			"ro.build.display.id=X9009EX_11_A.18_160620\n"
			"ro.build.kernel.id=3.10.72-G201606201753\n"
			"ro.build.version.base_os=OPPO/X9009/X9009:5.1/LMY47I/1449641681:user/release-keys\n"
			"ro.oppo.version=US\n"
			"persist.sys.timezone=America/New_York\n"
			"persist.sys.oppo.region=US\n"
			"ro.build.version.opporom=V3.0.0i\n"
			"ro.rom.different.version=ColorOS3.0.0\n"
			"ro.build.master.date=201606201827\n"
			"persist.power.useautobrightadj=true\n"
			"persist.sys.assert.enable=false\n"
			"persist.sys.assert.panic=false\n"
			"persist.sys.assert.state=false\n"
			"persist.sys.assert.enabletip=0\n"
			"ro.build.release_type=true\n"
			"persist.sys.cfu_auto=1\n"
			"persist.sys.oem_smooth=1\n"
			"############################## Add OPPO Info End ##############################\n"
			"gr.use.leader=true\n"
			"gr.apk.number=5\n"
			"gr.download.url=http://otafs.coloros.com/googles/23dec9b52fa383563b162ef9b5abf389\n"
			"############################## Add OPPO Info Begin ##############################\n"
			"ro.build.date.Ymd=160620\n"
			"ro.build.date.ymd=160620\n"
			"ro.build.date.YmdHM=201606201827\n"
			"ro.product.model=X9009\n"
			"ro.product.brand=OPPO\n"
			"ro.product.name=X9009\n"
			"ro.product.device=X9009\n"
			"ro.product.board=full_oppo6755_15311\n"
			"ro.build.product=oppo6755_15311\n"
			"ro.build.soft.version=A.18\n"
			"ro.xxversion=v0.5\n"
			"ro.build.version.ota=X9009EX_11.A.18_INT_018_201606201753\n"
			"ro.build.soft.majorversion=\n"
			"ro.build.ota.versionname=X9009EX_11_A.18_160620\n"
			"ro.build.display.id=X9009EX_11_A.18_160620\n"
			"ro.build.kernel.id=3.10.72-G201606201753\n"
			"persist.oppo.ctsversion=false\n"
			"ro.oppo.version=US\n"
			"persist.sys.timezone=America/New_York\n"
			"persist.sys.oppo.region=US\n"
			"ro.build.version.opporom=V3.0.0i\n"
			"ro.rom.different.version=ColorOS3.0.0\n"
			"ro.build.master.date=201606201827\n"
			"persist.power.useautobrightadj=true\n"
			"persist.sys.assert.enable=false\n"
			"persist.sys.assert.panic=false\n"
			"persist.sys.assert.state=false\n"
			"persist.sys.assert.enabletip=0\n"
			"ro.build.release_type=true\n"
			"persist.sys.cfu_auto=1\n"
			"persist.sys.oem_smooth=1\n"
			"############################## Add OPPO Info End ##############################\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"dalvik.vm.heapminfree=4m\n"
			"dalvik.vm.heapstartsize=16m\n"
			"ro.build.version.base_os=OPPO/X9009/X9009:5.1/LMY47I/1449641681:user/release-keys\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=LMY47I\n"
			"ro.build.version.incremental=1466418229\n"
			"ro.build.version.sdk=22\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.1\n"
			"ro.build.version.security_patch=2016-01-01\n"
			"ro.build.date=Mon Jun 20 18:27:07 CST 2016\n"
			"ro.build.date.utc=1466418427\n"
			"ro.build.type=user\n"
			"ro.build.user=root\n"
			"ro.build.host=WX-122-132\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=full_oppo6755_15311-user\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=arm64-v8a\n"
			"ro.product.cpu.abilist=arm64-v8a,armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=arm64-v8a\n"
			"ro.product.manufacturer=OPPO\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=US\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=mt6755\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=full_oppo6755_15311-user 5.1 LMY47I 1466418229 release-keys\n"
			"ro.build.characteristics=default\n"
			"# end build properties\n"
			"############################## Add OPPO Info Begin for oppo6755_15311 ##############################\n"
			"persist.version.confidential=false\n"
			"ro.dirac.max_active.powersound=3\n"
			"ro.dirac.max_active.headset=5\n"
			"ro.dirac.poolsize=2\n"
			"ro.dirac.config=1\n"
			"ro.mediatek.version.release=X9009EX_11_A.18_160620\n"
			"############################## Add OPPO Info End for oppo6755_15311 ##############################\n"
			"############################## Add OPPO Info Begin ##############################\n"
			"ro.build.date.Ymd=160620\n"
			"ro.build.date.ymd=160620\n"
			"ro.build.date.YmdHM=201606201827\n"
			"ro.product.model=X9009\n"
			"ro.product.brand=OPPO\n"
			"ro.product.name=X9009\n"
			"ro.product.device=X9009\n"
			"ro.product.board=full_oppo6755_15311\n"
			"ro.build.product=oppo6755_15311\n"
			"ro.build.soft.version=A.18\n"
			"ro.xxversion=v0.5\n"
			"ro.build.version.ota=X9009EX_11.A.18_INT_018_201606201753\n"
			"ro.build.soft.majorversion=\n"
			"ro.build.ota.versionname=X9009EX_11_A.18_160620\n"
			"ro.build.display.id=X9009EX_11_A.18_160620\n"
			"ro.build.kernel.id=3.10.72-G201606201753\n"
			"ro.build.version.base_os=OPPO/X9009/X9009:5.1/LMY47I/1449641681:user/release-keys\n"
			"ro.oppo.version=US\n"
			"persist.sys.timezone=America/New_York\n"
			"persist.sys.oppo.region=US\n"
			"ro.build.version.opporom=V3.0.0i\n"
			"ro.rom.different.version=ColorOS3.0.0\n"
			"ro.build.master.date=201606201827\n"
			"persist.power.useautobrightadj=true\n"
			"persist.sys.assert.enable=false\n"
			"persist.sys.assert.panic=false\n"
			"persist.sys.assert.state=false\n"
			"persist.sys.assert.enabletip=0\n"
			"ro.build.release_type=true\n"
			"persist.sys.cfu_auto=1\n"
			"persist.sys.oem_smooth=1\n"
			"############################## Add OPPO Info End ##############################\n"
			"gr.use.leader=true\n"
			"gr.apk.number=5\n"
			"gr.download.url=http://otafs.coloros.com/googles/23dec9b52fa383563b162ef9b5abf389\n"
			"#\n"
			"# system.prop for generic sdk\n"
			"#\n"
			"\n"
			"rild.libpath=mtk-ril.so\n"
			"rild.libargs=-d /dev/ttyC0\n"
			"\n"
			"\n"
			"# MTK, Infinity, 20090720 {\n"
			"wifi.interface=wlan0\n"
			"# MTK, Infinity, 20090720 }\n"
			"\n"
			"# MTK, mtk03034, 20101210 {\n"
			"ro.mediatek.wlan.wsc=1\n"
			"# MTK, mtk03034 20101210}\n"
			"# MTK, mtk03034, 20110318 {\n"
			"ro.mediatek.wlan.p2p=1\n"
			"# MTK, mtk03034 20110318}\n"
			"\n"
			"# MTK, mtk03034, 20101213 {\n"
			"mediatek.wlan.ctia=0\n"
			"# MTK, mtk03034 20101213}\n"
			"\n"
			"\n"
			"#\n"
			"wifi.tethering.interface=ap0\n"
			"#\n"
			"\n"
			"ro.opengles.version=196608\n"
			"\n"
			"wifi.direct.interface=p2p0\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapsize=512m\n"
			"\n"
			"# USB MTP WHQL\n"
			"ro.sys.usb.mtp.whql.enable=0\n"
			"\n"
			"# Power off opt in IPO\n"
			"sys.ipo.pwrdncap=2\n"
			"\n"
			"ro.sys.usb.storage.type=mtp,mass_storage\n"
			"\n"
			"# USB BICR function\n"
			"ro.sys.usb.bicr=yes\n"
			"\n"
			"# USB Charge only function\n"
			"ro.sys.usb.charging.only=yes\n"
			"\n"
			"# audio\n"
			"ro.camera.sound.forced=0\n"
			"ro.audio.silent=0\n"
			"\n"
			"ro.zygote.preload.enable=0\n"
			"\n"
			"#ifdef VENDOR_EDIT\n"
			"#Zongjun.li@Swdp.Android.Input, 2015/11/19, Modify for disable NavigationBar\n"
			"# temporary enables NAV bar (soft keys)\n"
			"qemu.hw.mainkeys=1\n"
			"#endif /* VENDOR_EDIT */\n"
			"\n"
			"ro.kernel.zio=38,108,105,16\n"
			"#ro.kernel.qemu=1\n"
			"#ro.kernel.qemu.gles=0\n"
			"#ro.boot.selinux=disable\n"
			"\n"
			"\n"
			"ro.sf.lcd_density=480\n"
			"\n"
			"# performance\n"
			"ro.mtk_perf_simple_start_win=1\n"
			"#ifndef VENDOR_EDIT\n"
			"#Yanzhen.Feng@Swdp.Android.Wms.FastStartingWindow, 2016/02/01, Modify for statusbar flash with fullscreen window Bug 755313\n"
			"#ro.mtk_perf_fast_start_win=1\n"
			"#else /* VENDOR_EDIT */\n"
			"ro.mtk_perf_fast_start_win=0\n"
			"#endif /* VENDOR_EDIT */\n"
			"ro.mtk_perf_response_time=1\n"
			"\n"
			"#ifdef VENDOR_EDIT \n"
			"#jianrong.zheng@swdp.Android.Power.Breathing, 2014/11/15, Add for breathlight mode.\n"
			"ro.sys.breathlight.mode=whitelight\n"
			"#endif /* VENDOR_EDIT */\n"
			"\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.config.alarm_alert=alarm_001.ogg\n"
			"ro.config.ringtone=ringtone_001.ogg\n"
			"ro.config.notification_sound=notification_001.ogg\n"
			"ro.config.ringtone_sim2=ringtone_001.ogg\n"
			"ro.config.notification_sim2=notification_001.ogg\n"
			"ro.config.calendar_sound=notification_003.ogg\n"
			"ro.carrier=unknown\n"
			"ro.oppo.theme.version=800\n"
			"ro.com.android.mobiledata=true\n"
			"persist.radio.mobile.data=1,1\n"
			"dalvik.vm.heapgrowthlimit=256m\n"
			"dalvik.vm.heapsize=512m\n"
			"ro.mediatek.chip_ver=S01\n"
			"ro.mediatek.platform=MT6755\n"
			"ro.telephony.sim.count=2\n"
			"persist.radio.default.sim=0\n"
			"persist.radio.multisim.config=dsds\n"
			"persist.md.perm.checked=to_upgrade\n"
			"persist.gemini.sim_num=2\n"
			"ro.gemini.smart_sim_switch=false\n"
			"ro.multi_log_feature=0\n"
			"ril.specific.sm_cause=0\n"
			"bgw.current3gband=0\n"
			"ril.external.md=0\n"
			"ro.mtk_cam_lomo_support=1\n"
			"ro.btstack=blueangel\n"
			"ro.sf.hwrotation=0\n"
			"ril.current.share_modem=2\n"
			"ro.mediatek.gemini_support=true\n"
			"persist.radio.fd.counter=15\n"
			"persist.radio.fd.off.counter=5\n"
			"persist.radio.fd.r8.counter=15\n"
			"persist.radio.fd.off.r8.counter=5\n"
			"drm.service.enabled=true\n"
			"fmradio.driver.enable=0\n"
			"ril.first.md=1\n"
			"ril.flightmode.poweroffMD=0\n"
			"ril.telephony.mode=0\n"
			"dalvik.vm.mtk-stack-trace-file=/data/anr/mtk_traces.txt\n"
			"mediatek.wlan.chip=CONSYS_MT6755\n"
			"mediatek.wlan.module.postfix=_consys_mt6755\n"
			"ril.radiooff.poweroffMD=0\n"
			"ro.frp.pst=/dev/block/platform/mtk-msdc.0/by-name/frp\n"
			"ro.mediatek.version.branch=L1.MP10.TC16SP\n"
			"ro.mediatek.version.sdk=4\n"
			"ro.setupwizard.mode=OPTIONAL\n"
			"ro.com.google.gmsversion=5.1_r3\n"
			"ro.com.google.clientidbase=android-oppo\n"
			"ro.mtk_gemini_support=1\n"
			"ro.mtk_audenh_support=1\n"
			"ro.mtk_bessurround_support=1\n"
			"ro.mtk_gemini_enhancement=1\n"
			"ro.mtk_wapi_support=1\n"
			"ro.mtk_bt_support=1\n"
			"ro.mtk_wappush_support=1\n"
			"ro.mtk_agps_app=1\n"
			"ro.mtk_audio_tuning_tool_ver=V2.2\n"
			"ro.mtk_matv_analog_support=1\n"
			"ro.mtk_wlan_support=1\n"
			"ro.mtk_gps_support=1\n"
			"ro.mtk_omacp_support=1\n"
			"ro.mtk_search_db_support=1\n"
			"ro.mtk_dialer_search_support=1\n"
			"ro.mtk_dhcpv6c_wifi=1\n"
			"ro.have_aacencode_feature=1\n"
			"ro.mtk_fd_support=1\n"
			"ro.mtk_oma_drm_support=1\n"
			"ro.mtk_widevine_drm_l3_support=1\n"
			"ro.mtk_eap_sim_aka=1\n"
			"ro.mtk_audio_ape_support=1\n"
			"ro.mtk_flv_playback_support=1\n"
			"ro.mtk_wmv_playback_support=1\n"
			"ro.mtk_send_rr_support=1\n"
			"persist.sys.esn_track_switch=0\n"
			"ro.mtk_emmc_support=1\n"
			"ro.mtk_tetheringipv6_support=1\n"
			"ro.mtk_shared_sdcard=1\n"
			"ro.mtk_enable_md1=1\n"
			"ro.mtk_pq_support=2\n"
			"ro.mtk_pq_color_mode=3\n"
			"ro.mtk_miravision_support=1\n"
			"ro.mtk_miravision_image_dc=1\n"
			"ro.mtk_wfd_support=1\n"
			"ro.mtk_wfd_sink_support=1\n"
			"ro.mtk_wfd_sink_uibc_support=1\n"
			"ro.mtk_wifi_mcc_support=1\n"
			"ro.mtk_system_update_support=1\n"
			"ro.mtk_sim_hot_swap=1\n"
			"ro.mtk_thumbnail_play_support=1\n"
			"ro.mtk_bip_scws=1\n"
			"ro.mtk_world_phone_policy=0\n"
			"ro.mtk_md_world_mode_support=1\n"
			"ro.mtk_perfservice_support=1\n"
			"ro.mtk_sim_hot_swap_common_slot=1\n"
			"ro.mtk_cta_set=1\n"
			"ro.mtk_antibricking_level=2\n"
			"ro.mtk_cam_mfb_support=3\n"
			"ro.mtk_slow_motion_support=1\n"
			"ro.mtk_lte_support=1\n"
			"ro.sim_refresh_reset_by_modem=1\n"
			"ro.mtk_slidevideo_support=1\n"
			"ro.mtk_passpoint_r1_support=1\n"
			"ro.mtk_bg_power_saving_support=1\n"
			"ro.mtk_bg_power_saving_ui=1\n"
			"ro.have_aee_feature=1\n"
			"ro.sim_me_lock_mode=0\n"
			"ro.mtk_dual_mic_support=1\n"
			"ro.mtk_is_tablet=0\n"
			"ro.mtk_pow_perf_support=1\n"
			"ro.mtk_ims_support=1\n"
			"ro.mtk_volte_support=1\n"
			"persist.mtk.volte.enable=0\n"
			"persist.dbg.volte_avail_ovr=1\n"
			"wfd.dummy.enable=1\n"
			"ro.mediatek.project.path=device/oppo/oppo6755_15311\n"
			"ro.mtk_trustonic_tee_support=1\n"
			"persist.mtk.wcn.combo.chipid=-1\n"
			"persist.mtk.wcn.fwlog.status=no\n"
			"service.wcn.driver.ready=no\n"
			"persist.meta.dumpdata=0\n"
			"ro.mtk_hetcomm_support=1\n"
			"ro.mtk_deinterlace_support=1\n"
			"ro.mtk_md_sbp_custom_value=0\n"
			"persist.mtk.datashaping.support=1\n"
			"persist.datashaping.alarmgroup=1\n"
			"persist.radio.mtk_dsbp_support=1\n"
			"ro.dex2oat_white_list=com.google.android.gms:\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm64.features=default\n"
			"dalvik.vm.isa.arm.features=default\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.telephony.default_network=14,0",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "7\n",
	},
	{
		.path = "/sys/devices/system/cpu/modalias",
		.size = 61,
		.content = "cpu:type:aarch64:feature:,0000,0001,0003,0004,0005,0006,0007\n",
	},
	{
		.path = "/sys/devices/system/cpu/offline",
		.size = 4,
		.content = "1-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/online",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpufreq/all_time_in_state",
		.size = 260,
		.content =
			"freq\t\tcpu0\t\tcpu1\t\tcpu2\t\tcpu3\t\tcpu4\t\tcpu5\t\tcpu6\t\tcpu7\t\t\n"
			"156000\t\t0\t\t\n"
			"286000\t\tN/A\t\t\n"
			"338000\t\t0\t\t\n"
			"494000\t\t0\t\t\n"
			"598000\t\t0\t\t\n"
			"663000\t\tN/A\t\t\n"
			"689000\t\t0\t\t\n"
			"871000\t\t0\t\t\n"
			"1014000\t\t0\t\t\n"
			"1027000\t\tN/A\t\t\n"
			"1144000\t\t18232\t\t\n"
			"1196000\t\tN/A\t\t\n"
			"1573000\t\tN/A\t\t\n"
			"1755000\t\tN/A\t\t\n"
			"1950000\t\tN/A\t\t\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_driver",
		.size = 15,
		.content = "mt6755_cpuidle\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpuidle/current_governor_ro",
		.size = 13,
		.content = "mtk_governor\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/big_cpumask",
		.size = 3,
		.content = "f0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/glbinfo",
		.size = 71,
		.content =
			"big/little arch: yes\n"
			"big/little cpumask:f0/f\n"
			"nr_cups: 8\n"
			"nr_clusters: 2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/is_big_little",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/is_multi_cluster",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/little_cpumask",
		.size = 3,
		.content = "0f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cputopo/nr_clusters",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1950000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "156000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_transition_latency",
		.size = 5,
		.content = "1000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies",
		.size = 59,
		.content = "1144000 1014000 871000 689000 598000 494000 338000 156000 \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors",
		.size = 54,
		.content = "ondemand userspace powersave interactive performance \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq",
		.size = 7,
		.content = "598000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_driver",
		.size = 11,
		.content = "mt-cpufreq\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor",
		.size = 12,
		.content = "interactive\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq",
		.size = 8,
		.content = "1144000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq",
		.size = 7,
		.content = "156000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/time_in_state",
		.size = 0,
		.content = "",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/total_trans",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/stats/trans_table",
		.size = 29,
		.content =
			"   From  :    To\n"
			"         : \n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings",
		.size = 3,
		.content = "0f\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/cpu_capacity",
		.size = 4,
		.content = "314\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/max_cpu_capacity",
		.size = 4,
		.content = "600\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings",
		.size = 3,
		.content = "01\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/scaling_driver",
		.size = 11,
		.content = "mt-cpufreq\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/scaling_governor",
		.size = 12,
		.content = "interactive\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/scaling_max_freq",
		.size = 8,
		.content = "1144000\n",
	},
	{ NULL },
};
#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "af.policy.r_submix_prio_adjust",
		.value = "0",
	},
	{
		.key = "af.rf_info",
		.value = "0",
	},
	{
		.key = "bgw.current3gband",
		.value = "0",
	},
	{
		.key = "camera.disable_zsl_mode",
		.value = "1",
	},
	{
		.key = "dalvik.vm.dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.dex2oat-Xmx",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "256m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "4m",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "16m",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xmx",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.isa.arm.features",
		.value = "default",
	},
	{
		.key = "dalvik.vm.isa.arm64.features",
		.value = "default",
	},
	{
		.key = "dalvik.vm.mtk-stack-trace-file",
		.value = "/data/anr/mtk_traces.txt",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "dalvik.vm.zygote32.pid",
		.value = "387",
	},
	{
		.key = "dalvik.vm.zygote64.pid",
		.value = "386",
	},
	{
		.key = "debug.MB.running",
		.value = "0",
	},
	{
		.key = "debug.bindercall.api",
		.value = "none",
	},
	{
		.key = "debug.force_rtl",
		.value = "0",
	},
	{
		.key = "debug.hwc.bq_count",
		.value = "4",
	},
	{
		.key = "debug.hwc.compose_level",
		.value = "0",
	},
	{
		.key = "debug.mdlogger.Running",
		.value = "0",
	},
	{
		.key = "debug.mdlogger.log2sd.path",
		.value = "internal_sd",
	},
	{
		.key = "debug.mtklog.netlog.Running",
		.value = "0",
	},
	{
		.key = "debug.oppo.morning.time",
		.value = "2 : 43",
	},
	{
		.key = "debug.program_binary.enable",
		.value = "1",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "fmradio.driver.enable",
		.value = "0",
	},
	{
		.key = "gr.apk.number",
		.value = "5",
	},
	{
		.key = "gr.download.url",
		.value = "http://otafs.coloros.com/googles/23dec9b52fa383563b162ef9b5abf389",
	},
	{
		.key = "gr.use.leader",
		.value = "true",
	},
	{
		.key = "gsm.baseband.capability",
		.value = "1023",
	},
	{
		.key = "gsm.current.phone-type",
		.value = "1,1",
	},
	{
		.key = "gsm.emdstatus.init",
		.value = "1",
	},
	{
		.key = "gsm.gcf.testmode",
		.value = "0",
	},
	{
		.key = "gsm.lte.ca.support",
		.value = "1",
	},
	{
		.key = "gsm.network.type",
		.value = "Unknown,Unknown",
	},
	{
		.key = "gsm.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.operator.isroaming",
		.value = "false,false",
	},
	{
		.key = "gsm.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.project.baseband.2",
		.value = "OPPO6755_15311_66_L(LWCTG)",
	},
	{
		.key = "gsm.project.baseband",
		.value = "OPPO6755_15311_66_L(LWCTG)",
	},
	{
		.key = "gsm.ril.ct3g.2",
		.value = "0",
	},
	{
		.key = "gsm.ril.ct3g",
		.value = "0",
	},
	{
		.key = "gsm.ril.eboot",
		.value = "-1",
	},
	{
		.key = "gsm.ril.init",
		.value = "1",
	},
	{
		.key = "gsm.ril.uicctype.2",
		.value = "USIM",
	},
	{
		.key = "gsm.ril.uicctype.3",
		.value = "",
	},
	{
		.key = "gsm.ril.uicctype.4",
		.value = "",
	},
	{
		.key = "gsm.ril.uicctype",
		.value = "USIM",
	},
	{
		.key = "gsm.serial",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.alpha",
		.value = ",",
	},
	{
		.key = "gsm.sim.operator.iso-country",
		.value = ",",
	},
	{
		.key = "gsm.sim.operator.numeric",
		.value = ",",
	},
	{
		.key = "gsm.sim.operator.spn",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin1.2",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin1.3",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin1.4",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin1",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin2.2",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin2.3",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin2.4",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.pin2",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk1.2",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk1.3",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk1.4",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk1",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk2.2",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk2.3",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk2.4",
		.value = "",
	},
	{
		.key = "gsm.sim.retry.puk2",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.mcc.mnc.2",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.mcc.mnc.3",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.mcc.mnc.4",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.mcc.mnc",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.phbready.2",
		.value = "true",
	},
	{
		.key = "gsm.sim.ril.phbready.3",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.phbready.4",
		.value = "",
	},
	{
		.key = "gsm.sim.ril.phbready",
		.value = "false",
	},
	{
		.key = "gsm.sim.state",
		.value = "ABSENT,ABSENT",
	},
	{
		.key = "gsm.version.baseband1",
		.value = "MOLY.LR11.W1539.MD.MP.V9.P67.T74, 2016/06/20 17:51",
	},
	{
		.key = "gsm.version.baseband",
		.value = "MOLY.LR11.W1539.MD.MP.V9.P67.T74, 2016/06/20 17:51",
	},
	{
		.key = "gsm.version.ril-impl",
		.value = "mtk gemini ril 1.0",
	},
	{
		.key = "init.svc.DMAgent",
		.value = "running",
	},
	{
		.key = "init.svc.GoogleOtaAgent",
		.value = "running",
	},
	{
		.key = "init.svc.MPED",
		.value = "running",
	},
	{
		.key = "init.svc.MtkCodecService",
		.value = "running",
	},
	{
		.key = "init.svc.NvRAMAgent",
		.value = "running",
	},
	{
		.key = "init.svc.PPLAgent",
		.value = "running",
	},
	{
		.key = "init.svc.adbd",
		.value = "running",
	},
	{
		.key = "init.svc.agpsd",
		.value = "running",
	},
	{
		.key = "init.svc.block-mode",
		.value = "stopped",
	},
	{
		.key = "init.svc.bootanim",
		.value = "stopped",
	},
	{
		.key = "init.svc.bootlogoupdater",
		.value = "stopped",
	},
	{
		.key = "init.svc.ccci3_fsd",
		.value = "stopped",
	},
	{
		.key = "init.svc.ccci3_mdinit",
		.value = "stopped",
	},
	{
		.key = "init.svc.ccci_fsd",
		.value = "running",
	},
	{
		.key = "init.svc.ccci_mdinit",
		.value = "running",
	},
	{
		.key = "init.svc.conn_launcher",
		.value = "running",
	},
	{
		.key = "init.svc.criticallog",
		.value = "running",
	},
	{
		.key = "init.svc.datafree",
		.value = "stopped",
	},
	{
		.key = "init.svc.datasync",
		.value = "stopped",
	},
	{
		.key = "init.svc.debuggerd64",
		.value = "running",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.emdlogger1",
		.value = "running",
	},
	{
		.key = "init.svc.emsvr_user",
		.value = "running",
	},
	{
		.key = "init.svc.enableswap",
		.value = "stopped",
	},
	{
		.key = "init.svc.engineermode-sh",
		.value = "stopped",
	},
	{
		.key = "init.svc.fingerprintd",
		.value = "running",
	},
	{
		.key = "init.svc.flash_recovery",
		.value = "stopped",
	},
	{
		.key = "init.svc.gas_srv",
		.value = "running",
	},
	{
		.key = "init.svc.ged_srv",
		.value = "running",
	},
	{
		.key = "init.svc.gsm0710muxd",
		.value = "running",
	},
	{
		.key = "init.svc.guiext-server",
		.value = "running",
	},
	{
		.key = "init.svc.healthd",
		.value = "running",
	},
	{
		.key = "init.svc.installd",
		.value = "running",
	},
	{
		.key = "init.svc.keystore",
		.value = "running",
	},
	{
		.key = "init.svc.lmkd",
		.value = "running",
	},
	{
		.key = "init.svc.logd",
		.value = "running",
	},
	{
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.memsicd3416x",
		.value = "running",
	},
	{
		.key = "init.svc.mnld",
		.value = "running",
	},
	{
		.key = "init.svc.mobicore",
		.value = "running",
	},
	{
		.key = "init.svc.mobile_log_d",
		.value = "running",
	},
	{
		.key = "init.svc.msensord",
		.value = "stopped",
	},
	{
		.key = "init.svc.mtkbt",
		.value = "running",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.netdiag",
		.value = "running",
	},
	{
		.key = "init.svc.nvram_daemon",
		.value = "stopped",
	},
	{
		.key = "init.svc.nvramsensord",
		.value = "stopped",
	},
	{
		.key = "init.svc.oppoasserttip",
		.value = "running",
	},
	{
		.key = "init.svc.p2p_supplicant",
		.value = "running",
	},
	{
		.key = "init.svc.permission_check",
		.value = "stopped",
	},
	{
		.key = "init.svc.pq",
		.value = "running",
	},
	{
		.key = "init.svc.program_binary",
		.value = "running",
	},
	{
		.key = "init.svc.prop-adap-core",
		.value = "stopped",
	},
	{
		.key = "init.svc.prop-adap-main",
		.value = "stopped",
	},
	{
		.key = "init.svc.psensord",
		.value = "running",
	},
	{
		.key = "init.svc.regioncheck",
		.value = "stopped",
	},
	{
		.key = "init.svc.ril-daemon-mtk",
		.value = "running",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "stopped",
	},
	{
		.key = "init.svc.rutilsdaemon",
		.value = "stopped",
	},
	{
		.key = "init.svc.sdcard",
		.value = "running",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.sn",
		.value = "running",
	},
	{
		.key = "init.svc.spm_script",
		.value = "stopped",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.terservice",
		.value = "stopped",
	},
	{
		.key = "init.svc.thermal",
		.value = "running",
	},
	{
		.key = "init.svc.thermal_manager",
		.value = "stopped",
	},
	{
		.key = "init.svc.thermalloadalgod",
		.value = "running",
	},
	{
		.key = "init.svc.ueventd",
		.value = "running",
	},
	{
		.key = "init.svc.vold",
		.value = "running",
	},
	{
		.key = "init.svc.volte_imcb",
		.value = "running",
	},
	{
		.key = "init.svc.volte_stack",
		.value = "running",
	},
	{
		.key = "init.svc.volte_ua",
		.value = "running",
	},
	{
		.key = "init.svc.vtservice",
		.value = "running",
	},
	{
		.key = "init.svc.wifi2agps",
		.value = "running",
	},
	{
		.key = "init.svc.wmtLoader",
		.value = "stopped",
	},
	{
		.key = "init.svc.xlogboot",
		.value = "stopped",
	},
	{
		.key = "init.svc.xlogdebugchanged",
		.value = "stopped",
	},
	{
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "init.svc.zygote_secondary",
		.value = "running",
	},
	{
		.key = "media.wfd.portrait",
		.value = "0",
	},
	{
		.key = "media.wfd.video-format",
		.value = "7",
	},
	{
		.key = "mediatek.wlan.chip",
		.value = "CONSYS_MT6755",
	},
	{
		.key = "mediatek.wlan.ctia",
		.value = "0",
	},
	{
		.key = "mediatek.wlan.module.postfix",
		.value = "_consys_mt6755",
	},
	{
		.key = "mtk.md1.starttime",
		.value = "0s Thu Dec 31 19:09:02 2009\r\n",
	},
	{
		.key = "mtk.md1.status",
		.value = "ready",
	},
	{
		.key = "mtk_wifi.fwpath",
		.value = "STA",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.qtaguid_enabled",
	},
	{
		.key = "net.hostname",
		.value = "android-14e71e8750182435",
	},
	{
		.key = "net.nsiot_pending",
		.value = "false",
	},
	{
		.key = "net.perf.cpu.core",
		.value = "4,4,0,0",
	},
	{
		.key = "net.perf.cpu.freq",
		.value = "1144000,1144000,0,0",
	},
	{
		.key = "net.perf.rps",
		.value = "ff",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.tcp.default_init_rwnd",
		.value = "60",
	},
	{
		.key = "oppo.device.firstboot",
		.value = "0",
	},
	{
		.key = "oppo.dex.thread.count.switch",
		.value = "false",
	},
	{
		.key = "oppo.service.datafree.enable",
		.value = "1",
	},
	{
		.key = "oppo.service.datasync.enable",
		.value = "0",
	},
	{
		.key = "oppo.service.rutils.enable",
		.value = "0",
	},
	{
		.key = "persist.aee.core.dump",
		.value = "disable",
	},
	{
		.key = "persist.af.hac_on",
		.value = "0",
	},
	{
		.key = "persist.boot_time",
		.value = "6",
	},
	{
		.key = "persist.bt.fwdump",
		.value = "0",
	},
	{
		.key = "persist.datashaping.alarmgroup",
		.value = "1",
	},
	{
		.key = "persist.dbg.volte_avail_ovr",
		.value = "1",
	},
	{
		.key = "persist.dm.lock",
		.value = "false",
	},
	{
		.key = "persist.gemini.sim_num",
		.value = "2",
	},
	{
		.key = "persist.md.perm.checked",
		.value = "1",
	},
	{
		.key = "persist.meta.dumpdata",
		.value = "0",
	},
	{
		.key = "persist.mtk.aee.mode",
		.value = "4",
	},
	{
		.key = "persist.mtk.datashaping.support",
		.value = "1",
	},
	{
		.key = "persist.mtk.sf.fps.upper_bound",
		.value = "60",
	},
	{
		.key = "persist.mtk.volte.enable",
		.value = "0",
	},
	{
		.key = "persist.mtk.wcn.combo.chipid",
		.value = "0x6755",
	},
	{
		.key = "persist.mtk.wcn.fwlog.status",
		.value = "no",
	},
	{
		.key = "persist.oppo.ctsversion",
		.value = "false",
	},
	{
		.key = "persist.power.useautobrightadj",
		.value = "true",
	},
	{
		.key = "persist.radio.default.sim",
		.value = "0",
	},
	{
		.key = "persist.radio.fd.counter",
		.value = "15",
	},
	{
		.key = "persist.radio.fd.off.counter",
		.value = "5",
	},
	{
		.key = "persist.radio.fd.off.r8.counter",
		.value = "5",
	},
	{
		.key = "persist.radio.fd.r8.counter",
		.value = "15",
	},
	{
		.key = "persist.radio.ia-apn",
		.value = "",
	},
	{
		.key = "persist.radio.ia",
		.value = "",
	},
	{
		.key = "persist.radio.mobile.data",
		.value = "1,1",
	},
	{
		.key = "persist.radio.mtk_dsbp_support",
		.value = "1",
	},
	{
		.key = "persist.radio.multisim.config",
		.value = "dsds",
	},
	{
		.key = "persist.radio.reset_on_switch",
		.value = "true",
	},
	{
		.key = "persist.radio.simswitch",
		.value = "1",
	},
	{
		.key = "persist.service.acm.enable",
		.value = "",
	},
	{
		.key = "persist.service.adb.enable",
		.value = "",
	},
	{
		.key = "persist.sys.assert.enable",
		.value = "false",
	},
	{
		.key = "persist.sys.assert.enabletip",
		.value = "0",
	},
	{
		.key = "persist.sys.assert.panic",
		.value = "false",
	},
	{
		.key = "persist.sys.assert.state",
		.value = "false",
	},
	{
		.key = "persist.sys.cfu_auto",
		.value = "1",
	},
	{
		.key = "persist.sys.dalvik.vm.lib.2",
		.value = "libart.so",
	},
	{
		.key = "persist.sys.device_first_boot",
		.value = "0",
	},
	{
		.key = "persist.sys.esn_track_switch",
		.value = "0",
	},
	{
		.key = "persist.sys.first_time_boot",
		.value = "false",
	},
	{
		.key = "persist.sys.mute.state",
		.value = "2",
	},
	{
		.key = "persist.sys.oem_smooth",
		.value = "1",
	},
	{
		.key = "persist.sys.oppo.displaymetrics",
		.value = "1080,1920",
	},
	{
		.key = "persist.sys.oppo.dragstate",
		.value = "0",
	},
	{
		.key = "persist.sys.oppo.otg_support",
		.value = "false",
	},
	{
		.key = "persist.sys.oppo.region.netlock",
		.value = "1",
	},
	{
		.key = "persist.sys.oppo.region",
		.value = "US",
	},
	{
		.key = "persist.sys.oppo.screendrag",
		.value = "0,0,0,0.0",
	},
	{
		.key = "persist.sys.permission.enable",
		.value = "false",
	},
	{
		.key = "persist.sys.port_index",
		.value = "",
	},
	{
		.key = "persist.sys.poweroffsound",
		.value = "1",
	},
	{
		.key = "persist.sys.poweronsound",
		.value = "1",
	},
	{
		.key = "persist.sys.pq.adl.idx",
		.value = "0",
	},
	{
		.key = "persist.sys.pq.shp.idx",
		.value = "2",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.screenshot.times",
		.value = "1",
	},
	{
		.key = "persist.sys.sd.defaultpath",
		.value = "/storage/emulated/0",
	},
	{
		.key = "persist.sys.timezone",
		.value = "America/New_York",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mtp,mass_storage,adb",
	},
	{
		.key = "persist.version.confidential",
		.value = "false",
	},
	{
		.key = "qemu.hw.mainkeys",
		.value = "1",
	},
	{
		.key = "ril.active.md",
		.value = "9",
	},
	{
		.key = "ril.current.share_modem",
		.value = "2",
	},
	{
		.key = "ril.data.allow",
		.value = "0",
	},
	{
		.key = "ril.ecclist1",
		.value = "",
	},
	{
		.key = "ril.ecclist2",
		.value = "",
	},
	{
		.key = "ril.ecclist3",
		.value = "",
	},
	{
		.key = "ril.ecclist",
		.value = "",
	},
	{
		.key = "ril.external.md",
		.value = "0",
	},
	{
		.key = "ril.fd.mode",
		.value = "1",
	},
	{
		.key = "ril.first.md",
		.value = "1",
	},
	{
		.key = "ril.flightmode.poweroffMD",
		.value = "0",
	},
	{
		.key = "ril.ia.iccid",
		.value = "",
	},
	{
		.key = "ril.iccid.sim1",
		.value = "N/A",
	},
	{
		.key = "ril.iccid.sim2",
		.value = "N/A",
	},
	{
		.key = "ril.iccid.sim3",
		.value = "",
	},
	{
		.key = "ril.iccid.sim4",
		.value = "",
	},
	{
		.key = "ril.imsi.status.sim1",
		.value = "0",
	},
	{
		.key = "ril.imsi.status.sim2",
		.value = "0",
	},
	{
		.key = "ril.ipo.radiooff.2",
		.value = "0",
	},
	{
		.key = "ril.ipo.radiooff",
		.value = "0",
	},
	{
		.key = "ril.mux.ee.md1",
		.value = "0",
	},
	{
		.key = "ril.mux.report.case",
		.value = "0",
	},
	{
		.key = "ril.nw.rat.detail",
		.value = "3",
	},
	{
		.key = "ril.nw.worldmode.activemode",
		.value = "1",
	},
	{
		.key = "ril.pid.1",
		.value = "953",
	},
	{
		.key = "ril.radio.ia-apn",
		.value = "",
	},
	{
		.key = "ril.radio.ia",
		.value = "",
	},
	{
		.key = "ril.radiooff.poweroffMD",
		.value = "0",
	},
	{
		.key = "ril.ready.sim",
		.value = "false",
	},
	{
		.key = "ril.specific.sm_cause",
		.value = "0",
	},
	{
		.key = "ril.telephony.mode",
		.value = "0",
	},
	{
		.key = "ril.volte.imcb",
		.value = "1",
	},
	{
		.key = "ril.volte.stack",
		.value = "1",
	},
	{
		.key = "ril.volte.ua",
		.value = "1",
	},
	{
		.key = "rild.libargs",
		.value = "-d /dev/ttyC0",
	},
	{
		.key = "rild.libpath",
		.value = "mtk-ril.so",
	},
	{
		.key = "rild.mark_switchuser",
		.value = "0",
	},
	{
		.key = "ro.adb.secure",
		.value = "1",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.audio.silent",
		.value = "0",
	},
	{
		.key = "ro.baseband",
		.value = "unknown",
	},
	{
		.key = "ro.board.platform",
		.value = "mt6755",
	},
	{
		.key = "ro.boot.bootreason",
		.value = "wdt_by_pass_pwk",
	},
	{
		.key = "ro.boot.hardware",
		.value = "mt6755",
	},
	{
		.key = "ro.boot.serialno",
		.value = "HI9LLRD6SCSSDUE6",
	},
	{
		.key = "ro.bootloader",
		.value = "unknown",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.btstack",
		.value = "blueangel",
	},
	{
		.key = "ro.build.characteristics",
		.value = "default",
	},
	{
		.key = "ro.build.date.YmdHM",
		.value = "201606201827",
	},
	{
		.key = "ro.build.date.Ymd",
		.value = "160620",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1466418427",
	},
	{
		.key = "ro.build.date.ymd",
		.value = "160620",
	},
	{
		.key = "ro.build.date",
		.value = "Mon Jun 20 18:27:07 CST 2016",
	},
	{
		.key = "ro.build.description",
		.value = "full_oppo6755_15311-user 5.1 LMY47I 1466418229 release-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "X9009EX_11_A.18_160620",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "OPPO/X9009/X9009:5.1/LMY47I/1454158811:user/release-keys",
	},
	{
		.key = "ro.build.flavor",
		.value = "full_oppo6755_15311-user",
	},
	{
		.key = "ro.build.host",
		.value = "WX-122-132",
	},
	{
		.key = "ro.build.id",
		.value = "LMY47I",
	},
	{
		.key = "ro.build.kernel.id",
		.value = "3.10.72-G201606201753",
	},
	{
		.key = "ro.build.master.date",
		.value = "201606201827",
	},
	{
		.key = "ro.build.ota.versionname",
		.value = "X9009EX_11_A.18_160620",
	},
	{
		.key = "ro.build.product",
		.value = "oppo6755_15311",
	},
	{
		.key = "ro.build.release_type",
		.value = "true",
	},
	{
		.key = "ro.build.soft.majorversion",
		.value = "",
	},
	{
		.key = "ro.build.soft.version",
		.value = "A.18",
	},
	{
		.key = "ro.build.tags",
		.value = "release-keys",
	},
	{
		.key = "ro.build.type",
		.value = "user",
	},
	{
		.key = "ro.build.user",
		.value = "root",
	},
	{
		.key = "ro.build.version.all_codenames",
		.value = "REL",
	},
	{
		.key = "ro.build.version.base_os",
		.value = "OPPO/X9009/X9009:5.1/LMY47I/1449641681:user/release-keys",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "1466418229",
	},
	{
		.key = "ro.build.version.opporom",
		.value = "V3.0.0i",
	},
	{
		.key = "ro.build.version.ota",
		.value = "X9009EX_11.A.18_INT_018_201606201753",
	},
	{
		.key = "ro.build.version.release",
		.value = "5.1",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "22",
	},
	{
		.key = "ro.build.version.security_patch",
		.value = "2016-01-01",
	},
	{
		.key = "ro.camera.sound.forced",
		.value = "0",
	},
	{
		.key = "ro.carrier",
		.value = "unknown",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.android.mobiledata",
		.value = "true",
	},
	{
		.key = "ro.com.google.clientidbase",
		.value = "android-oppo",
	},
	{
		.key = "ro.com.google.gmsversion",
		.value = "5.1_r3",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "alarm_001.ogg",
	},
	{
		.key = "ro.config.calendar_sound",
		.value = "notification_003.ogg",
	},
	{
		.key = "ro.config.notification_sim2",
		.value = "notification_001.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "notification_001.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "ringtone_001.ogg",
	},
	{
		.key = "ro.config.ringtone_sim2",
		.value = "ringtone_001.ogg",
	},
	{
		.key = "ro.crypto.fuse_sdcard",
		.value = "true",
	},
	{
		.key = "ro.crypto.state",
		.value = "unencrypted",
	},
	{
		.key = "ro.dalvik.vm.native.bridge",
		.value = "0",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.dex2oat_white_list",
		.value = "com.google.android.gms:",
	},
	{
		.key = "ro.dirac.config",
		.value = "1",
	},
	{
		.key = "ro.dirac.max_active.headset",
		.value = "5",
	},
	{
		.key = "ro.dirac.max_active.powersound",
		.value = "3",
	},
	{
		.key = "ro.dirac.poolsize",
		.value = "2",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.frp.pst",
		.value = "/dev/block/platform/mtk-msdc.0/by-name/frp",
	},
	{
		.key = "ro.gemini.smart_sim_switch",
		.value = "false",
	},
	{
		.key = "ro.hardware",
		.value = "mt6755",
	},
	{
		.key = "ro.have_aacencode_feature",
		.value = "1",
	},
	{
		.key = "ro.have_aee_feature",
		.value = "1",
	},
	{
		.key = "ro.kernel.zio",
		.value = "38,108,105,16",
	},
	{
		.key = "ro.mediatek.chip_ver",
		.value = "S01",
	},
	{
		.key = "ro.mediatek.gemini_support",
		.value = "true",
	},
	{
		.key = "ro.mediatek.platform",
		.value = "MT6755",
	},
	{
		.key = "ro.mediatek.project.path",
		.value = "device/oppo/oppo6755_15311",
	},
	{
		.key = "ro.mediatek.version.branch",
		.value = "L1.MP10.TC16SP",
	},
	{
		.key = "ro.mediatek.version.release",
		.value = "X9009EX_11_A.18_160620",
	},
	{
		.key = "ro.mediatek.version.sdk",
		.value = "4",
	},
	{
		.key = "ro.mediatek.wlan.p2p",
		.value = "1",
	},
	{
		.key = "ro.mediatek.wlan.wsc",
		.value = "1",
	},
	{
		.key = "ro.mount.fs",
		.value = "EXT4",
	},
	{
		.key = "ro.mtk_agps_app",
		.value = "1",
	},
	{
		.key = "ro.mtk_antibricking_level",
		.value = "2",
	},
	{
		.key = "ro.mtk_audenh_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_audio_ape_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_audio_tuning_tool_ver",
		.value = "V2.2",
	},
	{
		.key = "ro.mtk_bessurround_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_bg_power_saving_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_bg_power_saving_ui",
		.value = "1",
	},
	{
		.key = "ro.mtk_bip_scws",
		.value = "1",
	},
	{
		.key = "ro.mtk_bt_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_cam_lomo_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_cam_mfb_support",
		.value = "3",
	},
	{
		.key = "ro.mtk_cta_set",
		.value = "1",
	},
	{
		.key = "ro.mtk_deinterlace_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_dhcpv6c_wifi",
		.value = "1",
	},
	{
		.key = "ro.mtk_dialer_search_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_dual_mic_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_eap_sim_aka",
		.value = "1",
	},
	{
		.key = "ro.mtk_emmc_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_enable_md1",
		.value = "1",
	},
	{
		.key = "ro.mtk_fd_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_flv_playback_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_gemini_enhancement",
		.value = "1",
	},
	{
		.key = "ro.mtk_gemini_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_gps_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_hetcomm_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_ims_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_is_tablet",
		.value = "0",
	},
	{
		.key = "ro.mtk_lte_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_matv_analog_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_md_sbp_custom_value",
		.value = "0",
	},
	{
		.key = "ro.mtk_md_world_mode_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_miravision_image_dc",
		.value = "1",
	},
	{
		.key = "ro.mtk_miravision_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_oma_drm_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_omacp_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_passpoint_r1_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_perf_fast_start_win",
		.value = "0",
	},
	{
		.key = "ro.mtk_perf_response_time",
		.value = "1",
	},
	{
		.key = "ro.mtk_perf_simple_start_win",
		.value = "1",
	},
	{
		.key = "ro.mtk_perfservice_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_pow_perf_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_pq_color_mode",
		.value = "3",
	},
	{
		.key = "ro.mtk_pq_support",
		.value = "2",
	},
	{
		.key = "ro.mtk_search_db_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_send_rr_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_shared_sdcard",
		.value = "1",
	},
	{
		.key = "ro.mtk_sim_hot_swap",
		.value = "1",
	},
	{
		.key = "ro.mtk_sim_hot_swap_common_slot",
		.value = "1",
	},
	{
		.key = "ro.mtk_slidevideo_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_slow_motion_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_system_update_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_tetheringipv6_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_thumbnail_play_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_trustonic_tee_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_volte_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wapi_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wappush_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wfd_sink_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wfd_sink_uibc_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wfd_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_widevine_drm_l3_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wifi_mcc_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wlan_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_wmv_playback_support",
		.value = "1",
	},
	{
		.key = "ro.mtk_world_phone_policy",
		.value = "0",
	},
	{
		.key = "ro.multi_log_feature",
		.value = "0",
	},
	{
		.key = "ro.opengles.version",
		.value = "196608",
	},
	{
		.key = "ro.oppo.theme.version",
		.value = "800",
	},
	{
		.key = "ro.oppo.version",
		.value = "US",
	},
	{
		.key = "ro.product.board",
		.value = "full_oppo6755_15311",
	},
	{
		.key = "ro.product.brand",
		.value = "OPPO",
	},
	{
		.key = "ro.product.cpu.abi",
		.value = "arm64-v8a",
	},
	{
		.key = "ro.product.cpu.abilist32",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.cpu.abilist64",
		.value = "arm64-v8a",
	},
	{
		.key = "ro.product.cpu.abilist",
		.value = "arm64-v8a,armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.device",
		.value = "X9009",
	},
	{
		.key = "ro.product.locale.language",
		.value = "en",
	},
	{
		.key = "ro.product.locale.region",
		.value = "US",
	},
	{
		.key = "ro.product.manufacturer",
		.value = "OPPO",
	},
	{
		.key = "ro.product.model",
		.value = "X9009",
	},
	{
		.key = "ro.product.name",
		.value = "X9009",
	},
	{
		.key = "ro.revision",
		.value = "0",
	},
	{
		.key = "ro.rom.different.version",
		.value = "ColorOS3.0.0",
	},
	{
		.key = "ro.runtime.firstboot",
		.value = "1262304558539",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.serialno",
		.value = "HI9LLRD6SCSSDUE6",
	},
	{
		.key = "ro.setupwizard.mode",
		.value = "OPTIONAL",
	},
	{
		.key = "ro.sf.hwrotation",
		.value = "0",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "480",
	},
	{
		.key = "ro.sim_me_lock_mode",
		.value = "0",
	},
	{
		.key = "ro.sim_refresh_reset_by_modem",
		.value = "1",
	},
	{
		.key = "ro.sys.breathlight.mode",
		.value = "whitelight",
	},
	{
		.key = "ro.sys.usb.bicr",
		.value = "yes",
	},
	{
		.key = "ro.sys.usb.charging.only",
		.value = "yes",
	},
	{
		.key = "ro.sys.usb.mtp.whql.enable",
		.value = "0",
	},
	{
		.key = "ro.sys.usb.storage.type",
		.value = "mtp,mass_storage",
	},
	{
		.key = "ro.telephony.default_network",
		.value = "14,0",
	},
	{
		.key = "ro.telephony.sim.count",
		.value = "2",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.xxversion",
		.value = "v0.5",
	},
	{
		.key = "ro.zygote.preload.enable",
		.value = "0",
	},
	{
		.key = "ro.zygote",
		.value = "zygote64_32",
	},
	{
		.key = "selinux.reload_policy",
		.value = "1",
	},
	{
		.key = "service.bootanim.exit",
		.value = "1",
	},
	{
		.key = "service.cat.install.on.2",
		.value = "0",
	},
	{
		.key = "service.cat.install.on.3",
		.value = "0",
	},
	{
		.key = "service.cat.install.on.4",
		.value = "0",
	},
	{
		.key = "service.cat.install.on",
		.value = "0",
	},
	{
		.key = "service.nvram_init",
		.value = "Ready",
	},
	{
		.key = "service.wcn.coredump.mode",
		.value = "0",
	},
	{
		.key = "service.wcn.driver.ready",
		.value = "yes",
	},
	{
		.key = "sys.app_freeze_timeout",
		.value = "0",
	},
	{
		.key = "sys.boot.reason",
		.value = "0",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.ipo.pwrdncap",
		.value = "2",
	},
	{
		.key = "sys.ipowin.done",
		.value = "1",
	},
	{
		.key = "sys.oppo.screenshot",
		.value = "0",
	},
	{
		.key = "sys.power.screenoff.reason",
		.value = "2",
	},
	{
		.key = "sys.power_off_alarm",
		.value = "0",
	},
	{
		.key = "sys.settings_global_version",
		.value = "3",
	},
	{
		.key = "sys.settings_secure_version",
		.value = "2",
	},
	{
		.key = "sys.settings_system_version",
		.value = "99",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "24300",
	},
	{
		.key = "sys.usb.config",
		.value = "mtp,mass_storage,adb",
	},
	{
		.key = "sys.usb.mtpConnect",
		.value = "mtpConnection",
	},
	{
		.key = "sys.usb.state",
		.value = "mtp,mass_storage,adb",
	},
	{
		.key = "sys.usb.vid",
		.value = "22d9",
	},
	{
		.key = "vold.path.external_sd",
		.value = "/storage/sdcard1",
	},
	{
		.key = "vold.path.internal_sd",
		.value = "/storage/sdcard0",
	},
	{
		.key = "vold.post_fs_data_done",
		.value = "1",
	},
	{
		.key = "vold.swap.state",
		.value = "0",
	},
	{
		.key = "wfd.dummy.enable",
		.value = "1",
	},
	{
		.key = "wifi.direct.interface",
		.value = "p2p0",
	},
	{
		.key = "wifi.interface",
		.value = "wlan0",
	},
	{
		.key = "wifi.tethering.interface",
		.value = "ap0",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{
		.key = "wlan.wfd.security.image",
		.value = "1",
	},
	{ NULL },
};
#endif /* __ANDROID__ */
