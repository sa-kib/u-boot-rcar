#ifndef __SALVATOR_X_XEN_H
#define __SALVATOR_X_XEN_H

#ifndef __ASSEMBLY__
#include <linux/types.h>
#endif

#define CONFIG_EXTRA_ENV_SETTINGS

#undef CONFIG_NR_DRAM_BANKS
#undef CONFIG_SYS_SDRAM_BASE

#define CONFIG_NR_DRAM_BANKS          1

/*
 * This can be any arbitrary address as we are using PIE, but
 * please note, that CONFIG_SYS_TEXT_BASE must match the below.
 */
#define CONFIG_SYS_LOAD_ADDR                    0x40000000
#define CONFIG_SYS_INIT_SP_ADDR                 0x42FFC000
#define CONFIG_LNX_KRNL_IMG_TEXT_OFFSET_BASE    CONFIG_SYS_LOAD_ADDR

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN         (1 * 1024 * 1024)

/* Monitor Command Prompt */
#define CONFIG_SYS_PROMPT_HUSH_PS2    "> "
#define CONFIG_SYS_CBSIZE             1024
#define CONFIG_SYS_MAXARGS            64
#define CONFIG_SYS_BARGSIZE           CONFIG_SYS_CBSIZE
#define CONFIG_SYS_PBSIZE             (CONFIG_SYS_CBSIZE + \
				      sizeof(CONFIG_SYS_PROMPT) + 16)

#define CONFIG_OF_SYSTEM_SETUP

#undef CONFIG_EXTRA_ENV_SETTINGS
#define CONFIG_EXTRA_ENV_SETTINGS	\
        "fdt_high=0xffffffffffffffff\0" \
        "initrd_high=0xffffffffffffffff\0"
/* Ethernet RAVB */
#define CONFIG_BITBANGMII_MULTI


#endif /* __SALVATOR_X_XEN_H */