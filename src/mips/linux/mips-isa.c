#include <inttypes.h>

#include <mips/linux/api.h>

void cpuinfo_mips_linux_decode_isa_from_proc_cpuinfo(
        uint32_t features,
        struct cpuinfo_mips_isa isa[restrict static 1])
{
    if (features & HWCAP_MIPS_R6) {
        isa->r = true;
    }
    if (features & HWCAP_MIPS_MSA) {
        isa->msa = true;
    }
    if (features & HWCAP_MIPS_DSP) {
        isa->dsp = true;
    }
    if (features & HWCAP_MIPS_DSP2) {
        isa->dsp2 = true;
    }
    if (features & HWCAP_MIPS_DSP3) {
        isa->dsp3 = true;
    }
}

