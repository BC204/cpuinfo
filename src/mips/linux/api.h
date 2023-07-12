#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#include <cpuinfo.h>
#include <cpuinfo/common.h>

/* HWCAP flags */
#define HWCAP_MIPS_R6		      UINT32_C(0x00000001)
#define HWCAP_MIPS_MSA		      UINT32_C(0x00000002)
#define HWCAP_MIPS_CRC32	      UINT32_C(0x00000004)
#define HWCAP_MIPS_MIPS16	      UINT32_C(0x00000008)
#define HWCAP_MIPS_MDMX           UINT32_C(0x00000010)
#define HWCAP_MIPS_MIPS3D         UINT32_C(0x00000020)
#define HWCAP_MIPS_SMARTMIPS      UINT32_C(0x00000040)
#define HWCAP_MIPS_DSP            UINT32_C(0x00000080)
#define HWCAP_MIPS_DSP2           UINT32_C(0x00000100)
#define HWCAP_MIPS_DSP3           UINT32_C(0x00000200)
#define HWCAP_MIPS_MIPS16E2       UINT32_C(0x00000400)
#define HWCAP_LOONGSON_MMI        UINT32_C(0x00000800)
#define HWCAP_LOONGSON_EXT        UINT32_C(0x00001000)
#define HWCAP_LOONGSON_EXT2       UINT32_C(0x00002000)
#define HWCAP_LOONGSON_CPUCFG     UINT32_C(0x00004000)

