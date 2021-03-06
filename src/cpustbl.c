#include "sysconfig.h"
#include "sysdeps.h"
#include "options.h"
#include "memory.h"
#include "custom.h"
#include "events.h"
#include "newcpu.h"
#include "machdep/m68kops.h"
#include "cpu_prefetch.h"
#include "cputbl.h"
#define CPUFUNC(x) x##_ff
#define SET_CFLG_ALWAYS(flags, x) SET_CFLG(flags, x)
#define SET_NFLG_ALWAYS(flags, x) SET_NFLG(flags, x)
#ifdef NOFLAGS
#include "noflags.h"
#endif
#ifdef CPUEMU_0
const struct cputbl CPUFUNC(op_smalltbl_0)[] = {
{ CPUFUNC(op_0000_0), 0 }, /* OR */
{ CPUFUNC(op_0010_0), 16 }, /* OR */
{ CPUFUNC(op_0018_0), 24 }, /* OR */
{ CPUFUNC(op_0020_0), 32 }, /* OR */
{ CPUFUNC(op_0028_0), 40 }, /* OR */
{ CPUFUNC(op_0030_0), 48 }, /* OR */
{ CPUFUNC(op_0038_0), 56 }, /* OR */
{ CPUFUNC(op_0039_0), 57 }, /* OR */
{ CPUFUNC(op_003c_0), 60 }, /* ORSR */
{ CPUFUNC(op_0040_0), 64 }, /* OR */
{ CPUFUNC(op_0050_0), 80 }, /* OR */
{ CPUFUNC(op_0058_0), 88 }, /* OR */
{ CPUFUNC(op_0060_0), 96 }, /* OR */
{ CPUFUNC(op_0068_0), 104 }, /* OR */
{ CPUFUNC(op_0070_0), 112 }, /* OR */
{ CPUFUNC(op_0078_0), 120 }, /* OR */
{ CPUFUNC(op_0079_0), 121 }, /* OR */
{ CPUFUNC(op_007c_0), 124 }, /* ORSR */
{ CPUFUNC(op_0080_0), 128 }, /* OR */
{ CPUFUNC(op_0090_0), 144 }, /* OR */
{ CPUFUNC(op_0098_0), 152 }, /* OR */
{ CPUFUNC(op_00a0_0), 160 }, /* OR */
{ CPUFUNC(op_00a8_0), 168 }, /* OR */
{ CPUFUNC(op_00b0_0), 176 }, /* OR */
{ CPUFUNC(op_00b8_0), 184 }, /* OR */
{ CPUFUNC(op_00b9_0), 185 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00d0_0), 208 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00e8_0), 232 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f0_0), 240 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f8_0), 248 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00f9_0), 249 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fa_0), 250 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_00fb_0), 251 }, /* CHK2 */
#endif
{ CPUFUNC(op_0100_0), 256 }, /* BTST */
{ CPUFUNC(op_0108_0), 264 }, /* MVPMR */
{ CPUFUNC(op_0110_0), 272 }, /* BTST */
{ CPUFUNC(op_0118_0), 280 }, /* BTST */
{ CPUFUNC(op_0120_0), 288 }, /* BTST */
{ CPUFUNC(op_0128_0), 296 }, /* BTST */
{ CPUFUNC(op_0130_0), 304 }, /* BTST */
{ CPUFUNC(op_0138_0), 312 }, /* BTST */
{ CPUFUNC(op_0139_0), 313 }, /* BTST */
{ CPUFUNC(op_013a_0), 314 }, /* BTST */
{ CPUFUNC(op_013b_0), 315 }, /* BTST */
{ CPUFUNC(op_013c_0), 316 }, /* BTST */
{ CPUFUNC(op_0140_0), 320 }, /* BCHG */
{ CPUFUNC(op_0148_0), 328 }, /* MVPMR */
{ CPUFUNC(op_0150_0), 336 }, /* BCHG */
{ CPUFUNC(op_0158_0), 344 }, /* BCHG */
{ CPUFUNC(op_0160_0), 352 }, /* BCHG */
{ CPUFUNC(op_0168_0), 360 }, /* BCHG */
{ CPUFUNC(op_0170_0), 368 }, /* BCHG */
{ CPUFUNC(op_0178_0), 376 }, /* BCHG */
{ CPUFUNC(op_0179_0), 377 }, /* BCHG */
{ CPUFUNC(op_017a_0), 378 }, /* BCHG */
{ CPUFUNC(op_017b_0), 379 }, /* BCHG */
{ CPUFUNC(op_0180_0), 384 }, /* BCLR */
{ CPUFUNC(op_0188_0), 392 }, /* MVPRM */
{ CPUFUNC(op_0190_0), 400 }, /* BCLR */
{ CPUFUNC(op_0198_0), 408 }, /* BCLR */
{ CPUFUNC(op_01a0_0), 416 }, /* BCLR */
{ CPUFUNC(op_01a8_0), 424 }, /* BCLR */
{ CPUFUNC(op_01b0_0), 432 }, /* BCLR */
{ CPUFUNC(op_01b8_0), 440 }, /* BCLR */
{ CPUFUNC(op_01b9_0), 441 }, /* BCLR */
{ CPUFUNC(op_01ba_0), 442 }, /* BCLR */
{ CPUFUNC(op_01bb_0), 443 }, /* BCLR */
{ CPUFUNC(op_01c0_0), 448 }, /* BSET */
{ CPUFUNC(op_01c8_0), 456 }, /* MVPRM */
{ CPUFUNC(op_01d0_0), 464 }, /* BSET */
{ CPUFUNC(op_01d8_0), 472 }, /* BSET */
{ CPUFUNC(op_01e0_0), 480 }, /* BSET */
{ CPUFUNC(op_01e8_0), 488 }, /* BSET */
{ CPUFUNC(op_01f0_0), 496 }, /* BSET */
{ CPUFUNC(op_01f8_0), 504 }, /* BSET */
{ CPUFUNC(op_01f9_0), 505 }, /* BSET */
{ CPUFUNC(op_01fa_0), 506 }, /* BSET */
{ CPUFUNC(op_01fb_0), 507 }, /* BSET */
{ CPUFUNC(op_0200_0), 512 }, /* AND */
{ CPUFUNC(op_0210_0), 528 }, /* AND */
{ CPUFUNC(op_0218_0), 536 }, /* AND */
{ CPUFUNC(op_0220_0), 544 }, /* AND */
{ CPUFUNC(op_0228_0), 552 }, /* AND */
{ CPUFUNC(op_0230_0), 560 }, /* AND */
{ CPUFUNC(op_0238_0), 568 }, /* AND */
{ CPUFUNC(op_0239_0), 569 }, /* AND */
{ CPUFUNC(op_023c_0), 572 }, /* ANDSR */
{ CPUFUNC(op_0240_0), 576 }, /* AND */
{ CPUFUNC(op_0250_0), 592 }, /* AND */
{ CPUFUNC(op_0258_0), 600 }, /* AND */
{ CPUFUNC(op_0260_0), 608 }, /* AND */
{ CPUFUNC(op_0268_0), 616 }, /* AND */
{ CPUFUNC(op_0270_0), 624 }, /* AND */
{ CPUFUNC(op_0278_0), 632 }, /* AND */
{ CPUFUNC(op_0279_0), 633 }, /* AND */
{ CPUFUNC(op_027c_0), 636 }, /* ANDSR */
{ CPUFUNC(op_0280_0), 640 }, /* AND */
{ CPUFUNC(op_0290_0), 656 }, /* AND */
{ CPUFUNC(op_0298_0), 664 }, /* AND */
{ CPUFUNC(op_02a0_0), 672 }, /* AND */
{ CPUFUNC(op_02a8_0), 680 }, /* AND */
{ CPUFUNC(op_02b0_0), 688 }, /* AND */
{ CPUFUNC(op_02b8_0), 696 }, /* AND */
{ CPUFUNC(op_02b9_0), 697 }, /* AND */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02d0_0), 720 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02e8_0), 744 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f0_0), 752 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f8_0), 760 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02f9_0), 761 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fa_0), 762 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_02fb_0), 763 }, /* CHK2 */
#endif
{ CPUFUNC(op_0400_0), 1024 }, /* SUB */
{ CPUFUNC(op_0410_0), 1040 }, /* SUB */
{ CPUFUNC(op_0418_0), 1048 }, /* SUB */
{ CPUFUNC(op_0420_0), 1056 }, /* SUB */
{ CPUFUNC(op_0428_0), 1064 }, /* SUB */
{ CPUFUNC(op_0430_0), 1072 }, /* SUB */
{ CPUFUNC(op_0438_0), 1080 }, /* SUB */
{ CPUFUNC(op_0439_0), 1081 }, /* SUB */
{ CPUFUNC(op_0440_0), 1088 }, /* SUB */
{ CPUFUNC(op_0450_0), 1104 }, /* SUB */
{ CPUFUNC(op_0458_0), 1112 }, /* SUB */
{ CPUFUNC(op_0460_0), 1120 }, /* SUB */
{ CPUFUNC(op_0468_0), 1128 }, /* SUB */
{ CPUFUNC(op_0470_0), 1136 }, /* SUB */
{ CPUFUNC(op_0478_0), 1144 }, /* SUB */
{ CPUFUNC(op_0479_0), 1145 }, /* SUB */
{ CPUFUNC(op_0480_0), 1152 }, /* SUB */
{ CPUFUNC(op_0490_0), 1168 }, /* SUB */
{ CPUFUNC(op_0498_0), 1176 }, /* SUB */
{ CPUFUNC(op_04a0_0), 1184 }, /* SUB */
{ CPUFUNC(op_04a8_0), 1192 }, /* SUB */
{ CPUFUNC(op_04b0_0), 1200 }, /* SUB */
{ CPUFUNC(op_04b8_0), 1208 }, /* SUB */
{ CPUFUNC(op_04b9_0), 1209 }, /* SUB */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04d0_0), 1232 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04e8_0), 1256 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f0_0), 1264 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f8_0), 1272 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04f9_0), 1273 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fa_0), 1274 }, /* CHK2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_04fb_0), 1275 }, /* CHK2 */
#endif
{ CPUFUNC(op_0600_0), 1536 }, /* ADD */
{ CPUFUNC(op_0610_0), 1552 }, /* ADD */
{ CPUFUNC(op_0618_0), 1560 }, /* ADD */
{ CPUFUNC(op_0620_0), 1568 }, /* ADD */
{ CPUFUNC(op_0628_0), 1576 }, /* ADD */
{ CPUFUNC(op_0630_0), 1584 }, /* ADD */
{ CPUFUNC(op_0638_0), 1592 }, /* ADD */
{ CPUFUNC(op_0639_0), 1593 }, /* ADD */
{ CPUFUNC(op_0640_0), 1600 }, /* ADD */
{ CPUFUNC(op_0650_0), 1616 }, /* ADD */
{ CPUFUNC(op_0658_0), 1624 }, /* ADD */
{ CPUFUNC(op_0660_0), 1632 }, /* ADD */
{ CPUFUNC(op_0668_0), 1640 }, /* ADD */
{ CPUFUNC(op_0670_0), 1648 }, /* ADD */
{ CPUFUNC(op_0678_0), 1656 }, /* ADD */
{ CPUFUNC(op_0679_0), 1657 }, /* ADD */
{ CPUFUNC(op_0680_0), 1664 }, /* ADD */
{ CPUFUNC(op_0690_0), 1680 }, /* ADD */
{ CPUFUNC(op_0698_0), 1688 }, /* ADD */
{ CPUFUNC(op_06a0_0), 1696 }, /* ADD */
{ CPUFUNC(op_06a8_0), 1704 }, /* ADD */
{ CPUFUNC(op_06b0_0), 1712 }, /* ADD */
{ CPUFUNC(op_06b8_0), 1720 }, /* ADD */
{ CPUFUNC(op_06b9_0), 1721 }, /* ADD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c0_0), 1728 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06c8_0), 1736 }, /* RTM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06d0_0), 1744 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06e8_0), 1768 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f0_0), 1776 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f8_0), 1784 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06f9_0), 1785 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fa_0), 1786 }, /* CALLM */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_06fb_0), 1787 }, /* CALLM */
#endif
{ CPUFUNC(op_0800_0), 2048 }, /* BTST */
{ CPUFUNC(op_0810_0), 2064 }, /* BTST */
{ CPUFUNC(op_0818_0), 2072 }, /* BTST */
{ CPUFUNC(op_0820_0), 2080 }, /* BTST */
{ CPUFUNC(op_0828_0), 2088 }, /* BTST */
{ CPUFUNC(op_0830_0), 2096 }, /* BTST */
{ CPUFUNC(op_0838_0), 2104 }, /* BTST */
{ CPUFUNC(op_0839_0), 2105 }, /* BTST */
{ CPUFUNC(op_083a_0), 2106 }, /* BTST */
{ CPUFUNC(op_083b_0), 2107 }, /* BTST */
{ CPUFUNC(op_083c_0), 2108 }, /* BTST */
{ CPUFUNC(op_0840_0), 2112 }, /* BCHG */
{ CPUFUNC(op_0850_0), 2128 }, /* BCHG */
{ CPUFUNC(op_0858_0), 2136 }, /* BCHG */
{ CPUFUNC(op_0860_0), 2144 }, /* BCHG */
{ CPUFUNC(op_0868_0), 2152 }, /* BCHG */
{ CPUFUNC(op_0870_0), 2160 }, /* BCHG */
{ CPUFUNC(op_0878_0), 2168 }, /* BCHG */
{ CPUFUNC(op_0879_0), 2169 }, /* BCHG */
{ CPUFUNC(op_087a_0), 2170 }, /* BCHG */
{ CPUFUNC(op_087b_0), 2171 }, /* BCHG */
{ CPUFUNC(op_0880_0), 2176 }, /* BCLR */
{ CPUFUNC(op_0890_0), 2192 }, /* BCLR */
{ CPUFUNC(op_0898_0), 2200 }, /* BCLR */
{ CPUFUNC(op_08a0_0), 2208 }, /* BCLR */
{ CPUFUNC(op_08a8_0), 2216 }, /* BCLR */
{ CPUFUNC(op_08b0_0), 2224 }, /* BCLR */
{ CPUFUNC(op_08b8_0), 2232 }, /* BCLR */
{ CPUFUNC(op_08b9_0), 2233 }, /* BCLR */
{ CPUFUNC(op_08ba_0), 2234 }, /* BCLR */
{ CPUFUNC(op_08bb_0), 2235 }, /* BCLR */
{ CPUFUNC(op_08c0_0), 2240 }, /* BSET */
{ CPUFUNC(op_08d0_0), 2256 }, /* BSET */
{ CPUFUNC(op_08d8_0), 2264 }, /* BSET */
{ CPUFUNC(op_08e0_0), 2272 }, /* BSET */
{ CPUFUNC(op_08e8_0), 2280 }, /* BSET */
{ CPUFUNC(op_08f0_0), 2288 }, /* BSET */
{ CPUFUNC(op_08f8_0), 2296 }, /* BSET */
{ CPUFUNC(op_08f9_0), 2297 }, /* BSET */
{ CPUFUNC(op_08fa_0), 2298 }, /* BSET */
{ CPUFUNC(op_08fb_0), 2299 }, /* BSET */
{ CPUFUNC(op_0a00_0), 2560 }, /* EOR */
{ CPUFUNC(op_0a10_0), 2576 }, /* EOR */
{ CPUFUNC(op_0a18_0), 2584 }, /* EOR */
{ CPUFUNC(op_0a20_0), 2592 }, /* EOR */
{ CPUFUNC(op_0a28_0), 2600 }, /* EOR */
{ CPUFUNC(op_0a30_0), 2608 }, /* EOR */
{ CPUFUNC(op_0a38_0), 2616 }, /* EOR */
{ CPUFUNC(op_0a39_0), 2617 }, /* EOR */
{ CPUFUNC(op_0a3c_0), 2620 }, /* EORSR */
{ CPUFUNC(op_0a40_0), 2624 }, /* EOR */
{ CPUFUNC(op_0a50_0), 2640 }, /* EOR */
{ CPUFUNC(op_0a58_0), 2648 }, /* EOR */
{ CPUFUNC(op_0a60_0), 2656 }, /* EOR */
{ CPUFUNC(op_0a68_0), 2664 }, /* EOR */
{ CPUFUNC(op_0a70_0), 2672 }, /* EOR */
{ CPUFUNC(op_0a78_0), 2680 }, /* EOR */
{ CPUFUNC(op_0a79_0), 2681 }, /* EOR */
{ CPUFUNC(op_0a7c_0), 2684 }, /* EORSR */
{ CPUFUNC(op_0a80_0), 2688 }, /* EOR */
{ CPUFUNC(op_0a90_0), 2704 }, /* EOR */
{ CPUFUNC(op_0a98_0), 2712 }, /* EOR */
{ CPUFUNC(op_0aa0_0), 2720 }, /* EOR */
{ CPUFUNC(op_0aa8_0), 2728 }, /* EOR */
{ CPUFUNC(op_0ab0_0), 2736 }, /* EOR */
{ CPUFUNC(op_0ab8_0), 2744 }, /* EOR */
{ CPUFUNC(op_0ab9_0), 2745 }, /* EOR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad0_0), 2768 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ad8_0), 2776 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae0_0), 2784 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ae8_0), 2792 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af0_0), 2800 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af8_0), 2808 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0af9_0), 2809 }, /* CAS */
#endif
{ CPUFUNC(op_0c00_0), 3072 }, /* CMP */
{ CPUFUNC(op_0c10_0), 3088 }, /* CMP */
{ CPUFUNC(op_0c18_0), 3096 }, /* CMP */
{ CPUFUNC(op_0c20_0), 3104 }, /* CMP */
{ CPUFUNC(op_0c28_0), 3112 }, /* CMP */
{ CPUFUNC(op_0c30_0), 3120 }, /* CMP */
{ CPUFUNC(op_0c38_0), 3128 }, /* CMP */
{ CPUFUNC(op_0c39_0), 3129 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3a_0), 3130 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c3b_0), 3131 }, /* CMP */
#endif
{ CPUFUNC(op_0c40_0), 3136 }, /* CMP */
{ CPUFUNC(op_0c50_0), 3152 }, /* CMP */
{ CPUFUNC(op_0c58_0), 3160 }, /* CMP */
{ CPUFUNC(op_0c60_0), 3168 }, /* CMP */
{ CPUFUNC(op_0c68_0), 3176 }, /* CMP */
{ CPUFUNC(op_0c70_0), 3184 }, /* CMP */
{ CPUFUNC(op_0c78_0), 3192 }, /* CMP */
{ CPUFUNC(op_0c79_0), 3193 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7a_0), 3194 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0c7b_0), 3195 }, /* CMP */
#endif
{ CPUFUNC(op_0c80_0), 3200 }, /* CMP */
{ CPUFUNC(op_0c90_0), 3216 }, /* CMP */
{ CPUFUNC(op_0c98_0), 3224 }, /* CMP */
{ CPUFUNC(op_0ca0_0), 3232 }, /* CMP */
{ CPUFUNC(op_0ca8_0), 3240 }, /* CMP */
{ CPUFUNC(op_0cb0_0), 3248 }, /* CMP */
{ CPUFUNC(op_0cb8_0), 3256 }, /* CMP */
{ CPUFUNC(op_0cb9_0), 3257 }, /* CMP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cba_0), 3258 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cbb_0), 3259 }, /* CMP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd0_0), 3280 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cd8_0), 3288 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce0_0), 3296 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ce8_0), 3304 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf0_0), 3312 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf8_0), 3320 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cf9_0), 3321 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0cfc_0), 3324 }, /* CAS2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e10_0), 3600 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e18_0), 3608 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e20_0), 3616 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e28_0), 3624 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e30_0), 3632 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e38_0), 3640 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e39_0), 3641 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e50_0), 3664 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e58_0), 3672 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e60_0), 3680 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e68_0), 3688 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e70_0), 3696 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e78_0), 3704 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e79_0), 3705 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e90_0), 3728 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0e98_0), 3736 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea0_0), 3744 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ea8_0), 3752 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb0_0), 3760 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb8_0), 3768 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0eb9_0), 3769 }, /* MOVES */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed0_0), 3792 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ed8_0), 3800 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee0_0), 3808 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ee8_0), 3816 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef0_0), 3824 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef8_0), 3832 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0ef9_0), 3833 }, /* CAS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_0efc_0), 3836 }, /* CAS2 */
#endif
{ CPUFUNC(op_1000_0), 4096 }, /* MOVE */
{ CPUFUNC(op_1010_0), 4112 }, /* MOVE */
{ CPUFUNC(op_1018_0), 4120 }, /* MOVE */
{ CPUFUNC(op_1020_0), 4128 }, /* MOVE */
{ CPUFUNC(op_1028_0), 4136 }, /* MOVE */
{ CPUFUNC(op_1030_0), 4144 }, /* MOVE */
{ CPUFUNC(op_1038_0), 4152 }, /* MOVE */
{ CPUFUNC(op_1039_0), 4153 }, /* MOVE */
{ CPUFUNC(op_103a_0), 4154 }, /* MOVE */
{ CPUFUNC(op_103b_0), 4155 }, /* MOVE */
{ CPUFUNC(op_103c_0), 4156 }, /* MOVE */
{ CPUFUNC(op_1080_0), 4224 }, /* MOVE */
{ CPUFUNC(op_1090_0), 4240 }, /* MOVE */
{ CPUFUNC(op_1098_0), 4248 }, /* MOVE */
{ CPUFUNC(op_10a0_0), 4256 }, /* MOVE */
{ CPUFUNC(op_10a8_0), 4264 }, /* MOVE */
{ CPUFUNC(op_10b0_0), 4272 }, /* MOVE */
{ CPUFUNC(op_10b8_0), 4280 }, /* MOVE */
{ CPUFUNC(op_10b9_0), 4281 }, /* MOVE */
{ CPUFUNC(op_10ba_0), 4282 }, /* MOVE */
{ CPUFUNC(op_10bb_0), 4283 }, /* MOVE */
{ CPUFUNC(op_10bc_0), 4284 }, /* MOVE */
{ CPUFUNC(op_10c0_0), 4288 }, /* MOVE */
{ CPUFUNC(op_10d0_0), 4304 }, /* MOVE */
{ CPUFUNC(op_10d8_0), 4312 }, /* MOVE */
{ CPUFUNC(op_10e0_0), 4320 }, /* MOVE */
{ CPUFUNC(op_10e8_0), 4328 }, /* MOVE */
{ CPUFUNC(op_10f0_0), 4336 }, /* MOVE */
{ CPUFUNC(op_10f8_0), 4344 }, /* MOVE */
{ CPUFUNC(op_10f9_0), 4345 }, /* MOVE */
{ CPUFUNC(op_10fa_0), 4346 }, /* MOVE */
{ CPUFUNC(op_10fb_0), 4347 }, /* MOVE */
{ CPUFUNC(op_10fc_0), 4348 }, /* MOVE */
{ CPUFUNC(op_1100_0), 4352 }, /* MOVE */
{ CPUFUNC(op_1110_0), 4368 }, /* MOVE */
{ CPUFUNC(op_1118_0), 4376 }, /* MOVE */
{ CPUFUNC(op_1120_0), 4384 }, /* MOVE */
{ CPUFUNC(op_1128_0), 4392 }, /* MOVE */
{ CPUFUNC(op_1130_0), 4400 }, /* MOVE */
{ CPUFUNC(op_1138_0), 4408 }, /* MOVE */
{ CPUFUNC(op_1139_0), 4409 }, /* MOVE */
{ CPUFUNC(op_113a_0), 4410 }, /* MOVE */
{ CPUFUNC(op_113b_0), 4411 }, /* MOVE */
{ CPUFUNC(op_113c_0), 4412 }, /* MOVE */
{ CPUFUNC(op_1140_0), 4416 }, /* MOVE */
{ CPUFUNC(op_1150_0), 4432 }, /* MOVE */
{ CPUFUNC(op_1158_0), 4440 }, /* MOVE */
{ CPUFUNC(op_1160_0), 4448 }, /* MOVE */
{ CPUFUNC(op_1168_0), 4456 }, /* MOVE */
{ CPUFUNC(op_1170_0), 4464 }, /* MOVE */
{ CPUFUNC(op_1178_0), 4472 }, /* MOVE */
{ CPUFUNC(op_1179_0), 4473 }, /* MOVE */
{ CPUFUNC(op_117a_0), 4474 }, /* MOVE */
{ CPUFUNC(op_117b_0), 4475 }, /* MOVE */
{ CPUFUNC(op_117c_0), 4476 }, /* MOVE */
{ CPUFUNC(op_1180_0), 4480 }, /* MOVE */
{ CPUFUNC(op_1190_0), 4496 }, /* MOVE */
{ CPUFUNC(op_1198_0), 4504 }, /* MOVE */
{ CPUFUNC(op_11a0_0), 4512 }, /* MOVE */
{ CPUFUNC(op_11a8_0), 4520 }, /* MOVE */
{ CPUFUNC(op_11b0_0), 4528 }, /* MOVE */
{ CPUFUNC(op_11b8_0), 4536 }, /* MOVE */
{ CPUFUNC(op_11b9_0), 4537 }, /* MOVE */
{ CPUFUNC(op_11ba_0), 4538 }, /* MOVE */
{ CPUFUNC(op_11bb_0), 4539 }, /* MOVE */
{ CPUFUNC(op_11bc_0), 4540 }, /* MOVE */
{ CPUFUNC(op_11c0_0), 4544 }, /* MOVE */
{ CPUFUNC(op_11d0_0), 4560 }, /* MOVE */
{ CPUFUNC(op_11d8_0), 4568 }, /* MOVE */
{ CPUFUNC(op_11e0_0), 4576 }, /* MOVE */
{ CPUFUNC(op_11e8_0), 4584 }, /* MOVE */
{ CPUFUNC(op_11f0_0), 4592 }, /* MOVE */
{ CPUFUNC(op_11f8_0), 4600 }, /* MOVE */
{ CPUFUNC(op_11f9_0), 4601 }, /* MOVE */
{ CPUFUNC(op_11fa_0), 4602 }, /* MOVE */
{ CPUFUNC(op_11fb_0), 4603 }, /* MOVE */
{ CPUFUNC(op_11fc_0), 4604 }, /* MOVE */
{ CPUFUNC(op_13c0_0), 5056 }, /* MOVE */
{ CPUFUNC(op_13d0_0), 5072 }, /* MOVE */
{ CPUFUNC(op_13d8_0), 5080 }, /* MOVE */
{ CPUFUNC(op_13e0_0), 5088 }, /* MOVE */
{ CPUFUNC(op_13e8_0), 5096 }, /* MOVE */
{ CPUFUNC(op_13f0_0), 5104 }, /* MOVE */
{ CPUFUNC(op_13f8_0), 5112 }, /* MOVE */
{ CPUFUNC(op_13f9_0), 5113 }, /* MOVE */
{ CPUFUNC(op_13fa_0), 5114 }, /* MOVE */
{ CPUFUNC(op_13fb_0), 5115 }, /* MOVE */
{ CPUFUNC(op_13fc_0), 5116 }, /* MOVE */
{ CPUFUNC(op_2000_0), 8192 }, /* MOVE */
{ CPUFUNC(op_2008_0), 8200 }, /* MOVE */
{ CPUFUNC(op_2010_0), 8208 }, /* MOVE */
{ CPUFUNC(op_2018_0), 8216 }, /* MOVE */
{ CPUFUNC(op_2020_0), 8224 }, /* MOVE */
{ CPUFUNC(op_2028_0), 8232 }, /* MOVE */
{ CPUFUNC(op_2030_0), 8240 }, /* MOVE */
{ CPUFUNC(op_2038_0), 8248 }, /* MOVE */
{ CPUFUNC(op_2039_0), 8249 }, /* MOVE */
{ CPUFUNC(op_203a_0), 8250 }, /* MOVE */
{ CPUFUNC(op_203b_0), 8251 }, /* MOVE */
{ CPUFUNC(op_203c_0), 8252 }, /* MOVE */
{ CPUFUNC(op_2040_0), 8256 }, /* MOVEA */
{ CPUFUNC(op_2048_0), 8264 }, /* MOVEA */
{ CPUFUNC(op_2050_0), 8272 }, /* MOVEA */
{ CPUFUNC(op_2058_0), 8280 }, /* MOVEA */
{ CPUFUNC(op_2060_0), 8288 }, /* MOVEA */
{ CPUFUNC(op_2068_0), 8296 }, /* MOVEA */
{ CPUFUNC(op_2070_0), 8304 }, /* MOVEA */
{ CPUFUNC(op_2078_0), 8312 }, /* MOVEA */
{ CPUFUNC(op_2079_0), 8313 }, /* MOVEA */
{ CPUFUNC(op_207a_0), 8314 }, /* MOVEA */
{ CPUFUNC(op_207b_0), 8315 }, /* MOVEA */
{ CPUFUNC(op_207c_0), 8316 }, /* MOVEA */
{ CPUFUNC(op_2080_0), 8320 }, /* MOVE */
{ CPUFUNC(op_2088_0), 8328 }, /* MOVE */
{ CPUFUNC(op_2090_0), 8336 }, /* MOVE */
{ CPUFUNC(op_2098_0), 8344 }, /* MOVE */
{ CPUFUNC(op_20a0_0), 8352 }, /* MOVE */
{ CPUFUNC(op_20a8_0), 8360 }, /* MOVE */
{ CPUFUNC(op_20b0_0), 8368 }, /* MOVE */
{ CPUFUNC(op_20b8_0), 8376 }, /* MOVE */
{ CPUFUNC(op_20b9_0), 8377 }, /* MOVE */
{ CPUFUNC(op_20ba_0), 8378 }, /* MOVE */
{ CPUFUNC(op_20bb_0), 8379 }, /* MOVE */
{ CPUFUNC(op_20bc_0), 8380 }, /* MOVE */
{ CPUFUNC(op_20c0_0), 8384 }, /* MOVE */
{ CPUFUNC(op_20c8_0), 8392 }, /* MOVE */
{ CPUFUNC(op_20d0_0), 8400 }, /* MOVE */
{ CPUFUNC(op_20d8_0), 8408 }, /* MOVE */
{ CPUFUNC(op_20e0_0), 8416 }, /* MOVE */
{ CPUFUNC(op_20e8_0), 8424 }, /* MOVE */
{ CPUFUNC(op_20f0_0), 8432 }, /* MOVE */
{ CPUFUNC(op_20f8_0), 8440 }, /* MOVE */
{ CPUFUNC(op_20f9_0), 8441 }, /* MOVE */
{ CPUFUNC(op_20fa_0), 8442 }, /* MOVE */
{ CPUFUNC(op_20fb_0), 8443 }, /* MOVE */
{ CPUFUNC(op_20fc_0), 8444 }, /* MOVE */
{ CPUFUNC(op_2100_0), 8448 }, /* MOVE */
{ CPUFUNC(op_2108_0), 8456 }, /* MOVE */
{ CPUFUNC(op_2110_0), 8464 }, /* MOVE */
{ CPUFUNC(op_2118_0), 8472 }, /* MOVE */
{ CPUFUNC(op_2120_0), 8480 }, /* MOVE */
{ CPUFUNC(op_2128_0), 8488 }, /* MOVE */
{ CPUFUNC(op_2130_0), 8496 }, /* MOVE */
{ CPUFUNC(op_2138_0), 8504 }, /* MOVE */
{ CPUFUNC(op_2139_0), 8505 }, /* MOVE */
{ CPUFUNC(op_213a_0), 8506 }, /* MOVE */
{ CPUFUNC(op_213b_0), 8507 }, /* MOVE */
{ CPUFUNC(op_213c_0), 8508 }, /* MOVE */
{ CPUFUNC(op_2140_0), 8512 }, /* MOVE */
{ CPUFUNC(op_2148_0), 8520 }, /* MOVE */
{ CPUFUNC(op_2150_0), 8528 }, /* MOVE */
{ CPUFUNC(op_2158_0), 8536 }, /* MOVE */
{ CPUFUNC(op_2160_0), 8544 }, /* MOVE */
{ CPUFUNC(op_2168_0), 8552 }, /* MOVE */
{ CPUFUNC(op_2170_0), 8560 }, /* MOVE */
{ CPUFUNC(op_2178_0), 8568 }, /* MOVE */
{ CPUFUNC(op_2179_0), 8569 }, /* MOVE */
{ CPUFUNC(op_217a_0), 8570 }, /* MOVE */
{ CPUFUNC(op_217b_0), 8571 }, /* MOVE */
{ CPUFUNC(op_217c_0), 8572 }, /* MOVE */
{ CPUFUNC(op_2180_0), 8576 }, /* MOVE */
{ CPUFUNC(op_2188_0), 8584 }, /* MOVE */
{ CPUFUNC(op_2190_0), 8592 }, /* MOVE */
{ CPUFUNC(op_2198_0), 8600 }, /* MOVE */
{ CPUFUNC(op_21a0_0), 8608 }, /* MOVE */
{ CPUFUNC(op_21a8_0), 8616 }, /* MOVE */
{ CPUFUNC(op_21b0_0), 8624 }, /* MOVE */
{ CPUFUNC(op_21b8_0), 8632 }, /* MOVE */
{ CPUFUNC(op_21b9_0), 8633 }, /* MOVE */
{ CPUFUNC(op_21ba_0), 8634 }, /* MOVE */
{ CPUFUNC(op_21bb_0), 8635 }, /* MOVE */
{ CPUFUNC(op_21bc_0), 8636 }, /* MOVE */
{ CPUFUNC(op_21c0_0), 8640 }, /* MOVE */
{ CPUFUNC(op_21c8_0), 8648 }, /* MOVE */
{ CPUFUNC(op_21d0_0), 8656 }, /* MOVE */
{ CPUFUNC(op_21d8_0), 8664 }, /* MOVE */
{ CPUFUNC(op_21e0_0), 8672 }, /* MOVE */
{ CPUFUNC(op_21e8_0), 8680 }, /* MOVE */
{ CPUFUNC(op_21f0_0), 8688 }, /* MOVE */
{ CPUFUNC(op_21f8_0), 8696 }, /* MOVE */
{ CPUFUNC(op_21f9_0), 8697 }, /* MOVE */
{ CPUFUNC(op_21fa_0), 8698 }, /* MOVE */
{ CPUFUNC(op_21fb_0), 8699 }, /* MOVE */
{ CPUFUNC(op_21fc_0), 8700 }, /* MOVE */
{ CPUFUNC(op_23c0_0), 9152 }, /* MOVE */
{ CPUFUNC(op_23c8_0), 9160 }, /* MOVE */
{ CPUFUNC(op_23d0_0), 9168 }, /* MOVE */
{ CPUFUNC(op_23d8_0), 9176 }, /* MOVE */
{ CPUFUNC(op_23e0_0), 9184 }, /* MOVE */
{ CPUFUNC(op_23e8_0), 9192 }, /* MOVE */
{ CPUFUNC(op_23f0_0), 9200 }, /* MOVE */
{ CPUFUNC(op_23f8_0), 9208 }, /* MOVE */
{ CPUFUNC(op_23f9_0), 9209 }, /* MOVE */
{ CPUFUNC(op_23fa_0), 9210 }, /* MOVE */
{ CPUFUNC(op_23fb_0), 9211 }, /* MOVE */
{ CPUFUNC(op_23fc_0), 9212 }, /* MOVE */
{ CPUFUNC(op_3000_0), 12288 }, /* MOVE */
{ CPUFUNC(op_3008_0), 12296 }, /* MOVE */
{ CPUFUNC(op_3010_0), 12304 }, /* MOVE */
{ CPUFUNC(op_3018_0), 12312 }, /* MOVE */
{ CPUFUNC(op_3020_0), 12320 }, /* MOVE */
{ CPUFUNC(op_3028_0), 12328 }, /* MOVE */
{ CPUFUNC(op_3030_0), 12336 }, /* MOVE */
{ CPUFUNC(op_3038_0), 12344 }, /* MOVE */
{ CPUFUNC(op_3039_0), 12345 }, /* MOVE */
{ CPUFUNC(op_303a_0), 12346 }, /* MOVE */
{ CPUFUNC(op_303b_0), 12347 }, /* MOVE */
{ CPUFUNC(op_303c_0), 12348 }, /* MOVE */
{ CPUFUNC(op_3040_0), 12352 }, /* MOVEA */
{ CPUFUNC(op_3048_0), 12360 }, /* MOVEA */
{ CPUFUNC(op_3050_0), 12368 }, /* MOVEA */
{ CPUFUNC(op_3058_0), 12376 }, /* MOVEA */
{ CPUFUNC(op_3060_0), 12384 }, /* MOVEA */
{ CPUFUNC(op_3068_0), 12392 }, /* MOVEA */
{ CPUFUNC(op_3070_0), 12400 }, /* MOVEA */
{ CPUFUNC(op_3078_0), 12408 }, /* MOVEA */
{ CPUFUNC(op_3079_0), 12409 }, /* MOVEA */
{ CPUFUNC(op_307a_0), 12410 }, /* MOVEA */
{ CPUFUNC(op_307b_0), 12411 }, /* MOVEA */
{ CPUFUNC(op_307c_0), 12412 }, /* MOVEA */
{ CPUFUNC(op_3080_0), 12416 }, /* MOVE */
{ CPUFUNC(op_3088_0), 12424 }, /* MOVE */
{ CPUFUNC(op_3090_0), 12432 }, /* MOVE */
{ CPUFUNC(op_3098_0), 12440 }, /* MOVE */
{ CPUFUNC(op_30a0_0), 12448 }, /* MOVE */
{ CPUFUNC(op_30a8_0), 12456 }, /* MOVE */
{ CPUFUNC(op_30b0_0), 12464 }, /* MOVE */
{ CPUFUNC(op_30b8_0), 12472 }, /* MOVE */
{ CPUFUNC(op_30b9_0), 12473 }, /* MOVE */
{ CPUFUNC(op_30ba_0), 12474 }, /* MOVE */
{ CPUFUNC(op_30bb_0), 12475 }, /* MOVE */
{ CPUFUNC(op_30bc_0), 12476 }, /* MOVE */
{ CPUFUNC(op_30c0_0), 12480 }, /* MOVE */
{ CPUFUNC(op_30c8_0), 12488 }, /* MOVE */
{ CPUFUNC(op_30d0_0), 12496 }, /* MOVE */
{ CPUFUNC(op_30d8_0), 12504 }, /* MOVE */
{ CPUFUNC(op_30e0_0), 12512 }, /* MOVE */
{ CPUFUNC(op_30e8_0), 12520 }, /* MOVE */
{ CPUFUNC(op_30f0_0), 12528 }, /* MOVE */
{ CPUFUNC(op_30f8_0), 12536 }, /* MOVE */
{ CPUFUNC(op_30f9_0), 12537 }, /* MOVE */
{ CPUFUNC(op_30fa_0), 12538 }, /* MOVE */
{ CPUFUNC(op_30fb_0), 12539 }, /* MOVE */
{ CPUFUNC(op_30fc_0), 12540 }, /* MOVE */
{ CPUFUNC(op_3100_0), 12544 }, /* MOVE */
{ CPUFUNC(op_3108_0), 12552 }, /* MOVE */
{ CPUFUNC(op_3110_0), 12560 }, /* MOVE */
{ CPUFUNC(op_3118_0), 12568 }, /* MOVE */
{ CPUFUNC(op_3120_0), 12576 }, /* MOVE */
{ CPUFUNC(op_3128_0), 12584 }, /* MOVE */
{ CPUFUNC(op_3130_0), 12592 }, /* MOVE */
{ CPUFUNC(op_3138_0), 12600 }, /* MOVE */
{ CPUFUNC(op_3139_0), 12601 }, /* MOVE */
{ CPUFUNC(op_313a_0), 12602 }, /* MOVE */
{ CPUFUNC(op_313b_0), 12603 }, /* MOVE */
{ CPUFUNC(op_313c_0), 12604 }, /* MOVE */
{ CPUFUNC(op_3140_0), 12608 }, /* MOVE */
{ CPUFUNC(op_3148_0), 12616 }, /* MOVE */
{ CPUFUNC(op_3150_0), 12624 }, /* MOVE */
{ CPUFUNC(op_3158_0), 12632 }, /* MOVE */
{ CPUFUNC(op_3160_0), 12640 }, /* MOVE */
{ CPUFUNC(op_3168_0), 12648 }, /* MOVE */
{ CPUFUNC(op_3170_0), 12656 }, /* MOVE */
{ CPUFUNC(op_3178_0), 12664 }, /* MOVE */
{ CPUFUNC(op_3179_0), 12665 }, /* MOVE */
{ CPUFUNC(op_317a_0), 12666 }, /* MOVE */
{ CPUFUNC(op_317b_0), 12667 }, /* MOVE */
{ CPUFUNC(op_317c_0), 12668 }, /* MOVE */
{ CPUFUNC(op_3180_0), 12672 }, /* MOVE */
{ CPUFUNC(op_3188_0), 12680 }, /* MOVE */
{ CPUFUNC(op_3190_0), 12688 }, /* MOVE */
{ CPUFUNC(op_3198_0), 12696 }, /* MOVE */
{ CPUFUNC(op_31a0_0), 12704 }, /* MOVE */
{ CPUFUNC(op_31a8_0), 12712 }, /* MOVE */
{ CPUFUNC(op_31b0_0), 12720 }, /* MOVE */
{ CPUFUNC(op_31b8_0), 12728 }, /* MOVE */
{ CPUFUNC(op_31b9_0), 12729 }, /* MOVE */
{ CPUFUNC(op_31ba_0), 12730 }, /* MOVE */
{ CPUFUNC(op_31bb_0), 12731 }, /* MOVE */
{ CPUFUNC(op_31bc_0), 12732 }, /* MOVE */
{ CPUFUNC(op_31c0_0), 12736 }, /* MOVE */
{ CPUFUNC(op_31c8_0), 12744 }, /* MOVE */
{ CPUFUNC(op_31d0_0), 12752 }, /* MOVE */
{ CPUFUNC(op_31d8_0), 12760 }, /* MOVE */
{ CPUFUNC(op_31e0_0), 12768 }, /* MOVE */
{ CPUFUNC(op_31e8_0), 12776 }, /* MOVE */
{ CPUFUNC(op_31f0_0), 12784 }, /* MOVE */
{ CPUFUNC(op_31f8_0), 12792 }, /* MOVE */
{ CPUFUNC(op_31f9_0), 12793 }, /* MOVE */
{ CPUFUNC(op_31fa_0), 12794 }, /* MOVE */
{ CPUFUNC(op_31fb_0), 12795 }, /* MOVE */
{ CPUFUNC(op_31fc_0), 12796 }, /* MOVE */
{ CPUFUNC(op_33c0_0), 13248 }, /* MOVE */
{ CPUFUNC(op_33c8_0), 13256 }, /* MOVE */
{ CPUFUNC(op_33d0_0), 13264 }, /* MOVE */
{ CPUFUNC(op_33d8_0), 13272 }, /* MOVE */
{ CPUFUNC(op_33e0_0), 13280 }, /* MOVE */
{ CPUFUNC(op_33e8_0), 13288 }, /* MOVE */
{ CPUFUNC(op_33f0_0), 13296 }, /* MOVE */
{ CPUFUNC(op_33f8_0), 13304 }, /* MOVE */
{ CPUFUNC(op_33f9_0), 13305 }, /* MOVE */
{ CPUFUNC(op_33fa_0), 13306 }, /* MOVE */
{ CPUFUNC(op_33fb_0), 13307 }, /* MOVE */
{ CPUFUNC(op_33fc_0), 13308 }, /* MOVE */
{ CPUFUNC(op_4000_0), 16384 }, /* NEGX */
{ CPUFUNC(op_4010_0), 16400 }, /* NEGX */
{ CPUFUNC(op_4018_0), 16408 }, /* NEGX */
{ CPUFUNC(op_4020_0), 16416 }, /* NEGX */
{ CPUFUNC(op_4028_0), 16424 }, /* NEGX */
{ CPUFUNC(op_4030_0), 16432 }, /* NEGX */
{ CPUFUNC(op_4038_0), 16440 }, /* NEGX */
{ CPUFUNC(op_4039_0), 16441 }, /* NEGX */
{ CPUFUNC(op_4040_0), 16448 }, /* NEGX */
{ CPUFUNC(op_4050_0), 16464 }, /* NEGX */
{ CPUFUNC(op_4058_0), 16472 }, /* NEGX */
{ CPUFUNC(op_4060_0), 16480 }, /* NEGX */
{ CPUFUNC(op_4068_0), 16488 }, /* NEGX */
{ CPUFUNC(op_4070_0), 16496 }, /* NEGX */
{ CPUFUNC(op_4078_0), 16504 }, /* NEGX */
{ CPUFUNC(op_4079_0), 16505 }, /* NEGX */
{ CPUFUNC(op_4080_0), 16512 }, /* NEGX */
{ CPUFUNC(op_4090_0), 16528 }, /* NEGX */
{ CPUFUNC(op_4098_0), 16536 }, /* NEGX */
{ CPUFUNC(op_40a0_0), 16544 }, /* NEGX */
{ CPUFUNC(op_40a8_0), 16552 }, /* NEGX */
{ CPUFUNC(op_40b0_0), 16560 }, /* NEGX */
{ CPUFUNC(op_40b8_0), 16568 }, /* NEGX */
{ CPUFUNC(op_40b9_0), 16569 }, /* NEGX */
{ CPUFUNC(op_40c0_0), 16576 }, /* MVSR2 */
{ CPUFUNC(op_40d0_0), 16592 }, /* MVSR2 */
{ CPUFUNC(op_40d8_0), 16600 }, /* MVSR2 */
{ CPUFUNC(op_40e0_0), 16608 }, /* MVSR2 */
{ CPUFUNC(op_40e8_0), 16616 }, /* MVSR2 */
{ CPUFUNC(op_40f0_0), 16624 }, /* MVSR2 */
{ CPUFUNC(op_40f8_0), 16632 }, /* MVSR2 */
{ CPUFUNC(op_40f9_0), 16633 }, /* MVSR2 */
{ CPUFUNC(op_4100_0), 16640 }, /* CHK */
{ CPUFUNC(op_4110_0), 16656 }, /* CHK */
{ CPUFUNC(op_4118_0), 16664 }, /* CHK */
{ CPUFUNC(op_4120_0), 16672 }, /* CHK */
{ CPUFUNC(op_4128_0), 16680 }, /* CHK */
{ CPUFUNC(op_4130_0), 16688 }, /* CHK */
{ CPUFUNC(op_4138_0), 16696 }, /* CHK */
{ CPUFUNC(op_4139_0), 16697 }, /* CHK */
{ CPUFUNC(op_413a_0), 16698 }, /* CHK */
{ CPUFUNC(op_413b_0), 16699 }, /* CHK */
{ CPUFUNC(op_413c_0), 16700 }, /* CHK */
{ CPUFUNC(op_4180_0), 16768 }, /* CHK */
{ CPUFUNC(op_4190_0), 16784 }, /* CHK */
{ CPUFUNC(op_4198_0), 16792 }, /* CHK */
{ CPUFUNC(op_41a0_0), 16800 }, /* CHK */
{ CPUFUNC(op_41a8_0), 16808 }, /* CHK */
{ CPUFUNC(op_41b0_0), 16816 }, /* CHK */
{ CPUFUNC(op_41b8_0), 16824 }, /* CHK */
{ CPUFUNC(op_41b9_0), 16825 }, /* CHK */
{ CPUFUNC(op_41ba_0), 16826 }, /* CHK */
{ CPUFUNC(op_41bb_0), 16827 }, /* CHK */
{ CPUFUNC(op_41bc_0), 16828 }, /* CHK */
{ CPUFUNC(op_41d0_0), 16848 }, /* LEA */
{ CPUFUNC(op_41e8_0), 16872 }, /* LEA */
{ CPUFUNC(op_41f0_0), 16880 }, /* LEA */
{ CPUFUNC(op_41f8_0), 16888 }, /* LEA */
{ CPUFUNC(op_41f9_0), 16889 }, /* LEA */
{ CPUFUNC(op_41fa_0), 16890 }, /* LEA */
{ CPUFUNC(op_41fb_0), 16891 }, /* LEA */
{ CPUFUNC(op_4200_0), 16896 }, /* CLR */
{ CPUFUNC(op_4210_0), 16912 }, /* CLR */
{ CPUFUNC(op_4218_0), 16920 }, /* CLR */
{ CPUFUNC(op_4220_0), 16928 }, /* CLR */
{ CPUFUNC(op_4228_0), 16936 }, /* CLR */
{ CPUFUNC(op_4230_0), 16944 }, /* CLR */
{ CPUFUNC(op_4238_0), 16952 }, /* CLR */
{ CPUFUNC(op_4239_0), 16953 }, /* CLR */
{ CPUFUNC(op_4240_0), 16960 }, /* CLR */
{ CPUFUNC(op_4250_0), 16976 }, /* CLR */
{ CPUFUNC(op_4258_0), 16984 }, /* CLR */
{ CPUFUNC(op_4260_0), 16992 }, /* CLR */
{ CPUFUNC(op_4268_0), 17000 }, /* CLR */
{ CPUFUNC(op_4270_0), 17008 }, /* CLR */
{ CPUFUNC(op_4278_0), 17016 }, /* CLR */
{ CPUFUNC(op_4279_0), 17017 }, /* CLR */
{ CPUFUNC(op_4280_0), 17024 }, /* CLR */
{ CPUFUNC(op_4290_0), 17040 }, /* CLR */
{ CPUFUNC(op_4298_0), 17048 }, /* CLR */
{ CPUFUNC(op_42a0_0), 17056 }, /* CLR */
{ CPUFUNC(op_42a8_0), 17064 }, /* CLR */
{ CPUFUNC(op_42b0_0), 17072 }, /* CLR */
{ CPUFUNC(op_42b8_0), 17080 }, /* CLR */
{ CPUFUNC(op_42b9_0), 17081 }, /* CLR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42c0_0), 17088 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d0_0), 17104 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42d8_0), 17112 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e0_0), 17120 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42e8_0), 17128 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f0_0), 17136 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f8_0), 17144 }, /* MVSR2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f9_0), 17145 }, /* MVSR2 */
#endif
{ CPUFUNC(op_4400_0), 17408 }, /* NEG */
{ CPUFUNC(op_4410_0), 17424 }, /* NEG */
{ CPUFUNC(op_4418_0), 17432 }, /* NEG */
{ CPUFUNC(op_4420_0), 17440 }, /* NEG */
{ CPUFUNC(op_4428_0), 17448 }, /* NEG */
{ CPUFUNC(op_4430_0), 17456 }, /* NEG */
{ CPUFUNC(op_4438_0), 17464 }, /* NEG */
{ CPUFUNC(op_4439_0), 17465 }, /* NEG */
{ CPUFUNC(op_4440_0), 17472 }, /* NEG */
{ CPUFUNC(op_4450_0), 17488 }, /* NEG */
{ CPUFUNC(op_4458_0), 17496 }, /* NEG */
{ CPUFUNC(op_4460_0), 17504 }, /* NEG */
{ CPUFUNC(op_4468_0), 17512 }, /* NEG */
{ CPUFUNC(op_4470_0), 17520 }, /* NEG */
{ CPUFUNC(op_4478_0), 17528 }, /* NEG */
{ CPUFUNC(op_4479_0), 17529 }, /* NEG */
{ CPUFUNC(op_4480_0), 17536 }, /* NEG */
{ CPUFUNC(op_4490_0), 17552 }, /* NEG */
{ CPUFUNC(op_4498_0), 17560 }, /* NEG */
{ CPUFUNC(op_44a0_0), 17568 }, /* NEG */
{ CPUFUNC(op_44a8_0), 17576 }, /* NEG */
{ CPUFUNC(op_44b0_0), 17584 }, /* NEG */
{ CPUFUNC(op_44b8_0), 17592 }, /* NEG */
{ CPUFUNC(op_44b9_0), 17593 }, /* NEG */
{ CPUFUNC(op_44c0_0), 17600 }, /* MV2SR */
{ CPUFUNC(op_44d0_0), 17616 }, /* MV2SR */
{ CPUFUNC(op_44d8_0), 17624 }, /* MV2SR */
{ CPUFUNC(op_44e0_0), 17632 }, /* MV2SR */
{ CPUFUNC(op_44e8_0), 17640 }, /* MV2SR */
{ CPUFUNC(op_44f0_0), 17648 }, /* MV2SR */
{ CPUFUNC(op_44f8_0), 17656 }, /* MV2SR */
{ CPUFUNC(op_44f9_0), 17657 }, /* MV2SR */
{ CPUFUNC(op_44fa_0), 17658 }, /* MV2SR */
{ CPUFUNC(op_44fb_0), 17659 }, /* MV2SR */
{ CPUFUNC(op_44fc_0), 17660 }, /* MV2SR */
{ CPUFUNC(op_4600_0), 17920 }, /* NOT */
{ CPUFUNC(op_4610_0), 17936 }, /* NOT */
{ CPUFUNC(op_4618_0), 17944 }, /* NOT */
{ CPUFUNC(op_4620_0), 17952 }, /* NOT */
{ CPUFUNC(op_4628_0), 17960 }, /* NOT */
{ CPUFUNC(op_4630_0), 17968 }, /* NOT */
{ CPUFUNC(op_4638_0), 17976 }, /* NOT */
{ CPUFUNC(op_4639_0), 17977 }, /* NOT */
{ CPUFUNC(op_4640_0), 17984 }, /* NOT */
{ CPUFUNC(op_4650_0), 18000 }, /* NOT */
{ CPUFUNC(op_4658_0), 18008 }, /* NOT */
{ CPUFUNC(op_4660_0), 18016 }, /* NOT */
{ CPUFUNC(op_4668_0), 18024 }, /* NOT */
{ CPUFUNC(op_4670_0), 18032 }, /* NOT */
{ CPUFUNC(op_4678_0), 18040 }, /* NOT */
{ CPUFUNC(op_4679_0), 18041 }, /* NOT */
{ CPUFUNC(op_4680_0), 18048 }, /* NOT */
{ CPUFUNC(op_4690_0), 18064 }, /* NOT */
{ CPUFUNC(op_4698_0), 18072 }, /* NOT */
{ CPUFUNC(op_46a0_0), 18080 }, /* NOT */
{ CPUFUNC(op_46a8_0), 18088 }, /* NOT */
{ CPUFUNC(op_46b0_0), 18096 }, /* NOT */
{ CPUFUNC(op_46b8_0), 18104 }, /* NOT */
{ CPUFUNC(op_46b9_0), 18105 }, /* NOT */
{ CPUFUNC(op_46c0_0), 18112 }, /* MV2SR */
{ CPUFUNC(op_46d0_0), 18128 }, /* MV2SR */
{ CPUFUNC(op_46d8_0), 18136 }, /* MV2SR */
{ CPUFUNC(op_46e0_0), 18144 }, /* MV2SR */
{ CPUFUNC(op_46e8_0), 18152 }, /* MV2SR */
{ CPUFUNC(op_46f0_0), 18160 }, /* MV2SR */
{ CPUFUNC(op_46f8_0), 18168 }, /* MV2SR */
{ CPUFUNC(op_46f9_0), 18169 }, /* MV2SR */
{ CPUFUNC(op_46fa_0), 18170 }, /* MV2SR */
{ CPUFUNC(op_46fb_0), 18171 }, /* MV2SR */
{ CPUFUNC(op_46fc_0), 18172 }, /* MV2SR */
{ CPUFUNC(op_4800_0), 18432 }, /* NBCD */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4808_0), 18440 }, /* LINK */
#endif
{ CPUFUNC(op_4810_0), 18448 }, /* NBCD */
{ CPUFUNC(op_4818_0), 18456 }, /* NBCD */
{ CPUFUNC(op_4820_0), 18464 }, /* NBCD */
{ CPUFUNC(op_4828_0), 18472 }, /* NBCD */
{ CPUFUNC(op_4830_0), 18480 }, /* NBCD */
{ CPUFUNC(op_4838_0), 18488 }, /* NBCD */
{ CPUFUNC(op_4839_0), 18489 }, /* NBCD */
{ CPUFUNC(op_4840_0), 18496 }, /* SWAP */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4848_0), 18504 }, /* BKPT */
#endif
{ CPUFUNC(op_4850_0), 18512 }, /* PEA */
{ CPUFUNC(op_4868_0), 18536 }, /* PEA */
{ CPUFUNC(op_4870_0), 18544 }, /* PEA */
{ CPUFUNC(op_4878_0), 18552 }, /* PEA */
{ CPUFUNC(op_4879_0), 18553 }, /* PEA */
{ CPUFUNC(op_487a_0), 18554 }, /* PEA */
{ CPUFUNC(op_487b_0), 18555 }, /* PEA */
{ CPUFUNC(op_4880_0), 18560 }, /* EXT */
{ CPUFUNC(op_4890_0), 18576 }, /* MVMLE */
{ CPUFUNC(op_48a0_0), 18592 }, /* MVMLE */
{ CPUFUNC(op_48a8_0), 18600 }, /* MVMLE */
{ CPUFUNC(op_48b0_0), 18608 }, /* MVMLE */
{ CPUFUNC(op_48b8_0), 18616 }, /* MVMLE */
{ CPUFUNC(op_48b9_0), 18617 }, /* MVMLE */
{ CPUFUNC(op_48c0_0), 18624 }, /* EXT */
{ CPUFUNC(op_48d0_0), 18640 }, /* MVMLE */
{ CPUFUNC(op_48e0_0), 18656 }, /* MVMLE */
{ CPUFUNC(op_48e8_0), 18664 }, /* MVMLE */
{ CPUFUNC(op_48f0_0), 18672 }, /* MVMLE */
{ CPUFUNC(op_48f8_0), 18680 }, /* MVMLE */
{ CPUFUNC(op_48f9_0), 18681 }, /* MVMLE */
{ CPUFUNC(op_49c0_0), 18880 }, /* EXT */
{ CPUFUNC(op_4a00_0), 18944 }, /* TST */
{ CPUFUNC(op_4a10_0), 18960 }, /* TST */
{ CPUFUNC(op_4a18_0), 18968 }, /* TST */
{ CPUFUNC(op_4a20_0), 18976 }, /* TST */
{ CPUFUNC(op_4a28_0), 18984 }, /* TST */
{ CPUFUNC(op_4a30_0), 18992 }, /* TST */
{ CPUFUNC(op_4a38_0), 19000 }, /* TST */
{ CPUFUNC(op_4a39_0), 19001 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3a_0), 19002 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3b_0), 19003 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a3c_0), 19004 }, /* TST */
#endif
{ CPUFUNC(op_4a40_0), 19008 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a48_0), 19016 }, /* TST */
#endif
{ CPUFUNC(op_4a50_0), 19024 }, /* TST */
{ CPUFUNC(op_4a58_0), 19032 }, /* TST */
{ CPUFUNC(op_4a60_0), 19040 }, /* TST */
{ CPUFUNC(op_4a68_0), 19048 }, /* TST */
{ CPUFUNC(op_4a70_0), 19056 }, /* TST */
{ CPUFUNC(op_4a78_0), 19064 }, /* TST */
{ CPUFUNC(op_4a79_0), 19065 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7a_0), 19066 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7b_0), 19067 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a7c_0), 19068 }, /* TST */
#endif
{ CPUFUNC(op_4a80_0), 19072 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4a88_0), 19080 }, /* TST */
#endif
{ CPUFUNC(op_4a90_0), 19088 }, /* TST */
{ CPUFUNC(op_4a98_0), 19096 }, /* TST */
{ CPUFUNC(op_4aa0_0), 19104 }, /* TST */
{ CPUFUNC(op_4aa8_0), 19112 }, /* TST */
{ CPUFUNC(op_4ab0_0), 19120 }, /* TST */
{ CPUFUNC(op_4ab8_0), 19128 }, /* TST */
{ CPUFUNC(op_4ab9_0), 19129 }, /* TST */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4aba_0), 19130 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abb_0), 19131 }, /* TST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4abc_0), 19132 }, /* TST */
#endif
{ CPUFUNC(op_4ac0_0), 19136 }, /* TAS */
{ CPUFUNC(op_4ad0_0), 19152 }, /* TAS */
{ CPUFUNC(op_4ad8_0), 19160 }, /* TAS */
{ CPUFUNC(op_4ae0_0), 19168 }, /* TAS */
{ CPUFUNC(op_4ae8_0), 19176 }, /* TAS */
{ CPUFUNC(op_4af0_0), 19184 }, /* TAS */
{ CPUFUNC(op_4af8_0), 19192 }, /* TAS */
{ CPUFUNC(op_4af9_0), 19193 }, /* TAS */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c00_0), 19456 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c10_0), 19472 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c18_0), 19480 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c20_0), 19488 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c28_0), 19496 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c30_0), 19504 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c38_0), 19512 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c39_0), 19513 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3a_0), 19514 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3b_0), 19515 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c3c_0), 19516 }, /* MULL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c40_0), 19520 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c50_0), 19536 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c58_0), 19544 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c60_0), 19552 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c68_0), 19560 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c70_0), 19568 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c78_0), 19576 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c79_0), 19577 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7a_0), 19578 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7b_0), 19579 }, /* DIVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4c7c_0), 19580 }, /* DIVL */
#endif
{ CPUFUNC(op_4c90_0), 19600 }, /* MVMEL */
{ CPUFUNC(op_4c98_0), 19608 }, /* MVMEL */
{ CPUFUNC(op_4ca8_0), 19624 }, /* MVMEL */
{ CPUFUNC(op_4cb0_0), 19632 }, /* MVMEL */
{ CPUFUNC(op_4cb8_0), 19640 }, /* MVMEL */
{ CPUFUNC(op_4cb9_0), 19641 }, /* MVMEL */
{ CPUFUNC(op_4cba_0), 19642 }, /* MVMEL */
{ CPUFUNC(op_4cbb_0), 19643 }, /* MVMEL */
{ CPUFUNC(op_4cd0_0), 19664 }, /* MVMEL */
{ CPUFUNC(op_4cd8_0), 19672 }, /* MVMEL */
{ CPUFUNC(op_4ce8_0), 19688 }, /* MVMEL */
{ CPUFUNC(op_4cf0_0), 19696 }, /* MVMEL */
{ CPUFUNC(op_4cf8_0), 19704 }, /* MVMEL */
{ CPUFUNC(op_4cf9_0), 19705 }, /* MVMEL */
{ CPUFUNC(op_4cfa_0), 19706 }, /* MVMEL */
{ CPUFUNC(op_4cfb_0), 19707 }, /* MVMEL */
{ CPUFUNC(op_4e40_0), 20032 }, /* TRAP */
{ CPUFUNC(op_4e50_0), 20048 }, /* LINK */
{ CPUFUNC(op_4e58_0), 20056 }, /* UNLK */
{ CPUFUNC(op_4e60_0), 20064 }, /* MVR2USP */
{ CPUFUNC(op_4e68_0), 20072 }, /* MVUSP2R */
{ CPUFUNC(op_4e70_0), 20080 }, /* RESET */
{ CPUFUNC(op_4e71_0), 20081 }, /* NOP */
{ CPUFUNC(op_4e72_0), 20082 }, /* STOP */
{ CPUFUNC(op_4e73_0), 20083 }, /* RTE */
{ CPUFUNC(op_4e74_0), 20084 }, /* RTD */
{ CPUFUNC(op_4e75_0), 20085 }, /* RTS */
{ CPUFUNC(op_4e76_0), 20086 }, /* TRAPV */
{ CPUFUNC(op_4e77_0), 20087 }, /* RTR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7a_0), 20090 }, /* MOVEC2 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_4e7b_0), 20091 }, /* MOVE2C */
#endif
{ CPUFUNC(op_4e90_0), 20112 }, /* JSR */
{ CPUFUNC(op_4ea8_0), 20136 }, /* JSR */
{ CPUFUNC(op_4eb0_0), 20144 }, /* JSR */
{ CPUFUNC(op_4eb8_0), 20152 }, /* JSR */
{ CPUFUNC(op_4eb9_0), 20153 }, /* JSR */
{ CPUFUNC(op_4eba_0), 20154 }, /* JSR */
{ CPUFUNC(op_4ebb_0), 20155 }, /* JSR */
{ CPUFUNC(op_4ed0_0), 20176 }, /* JMP */
{ CPUFUNC(op_4ee8_0), 20200 }, /* JMP */
{ CPUFUNC(op_4ef0_0), 20208 }, /* JMP */
{ CPUFUNC(op_4ef8_0), 20216 }, /* JMP */
{ CPUFUNC(op_4ef9_0), 20217 }, /* JMP */
{ CPUFUNC(op_4efa_0), 20218 }, /* JMP */
{ CPUFUNC(op_4efb_0), 20219 }, /* JMP */
{ CPUFUNC(op_5000_0), 20480 }, /* ADD */
{ CPUFUNC(op_5010_0), 20496 }, /* ADD */
{ CPUFUNC(op_5018_0), 20504 }, /* ADD */
{ CPUFUNC(op_5020_0), 20512 }, /* ADD */
{ CPUFUNC(op_5028_0), 20520 }, /* ADD */
{ CPUFUNC(op_5030_0), 20528 }, /* ADD */
{ CPUFUNC(op_5038_0), 20536 }, /* ADD */
{ CPUFUNC(op_5039_0), 20537 }, /* ADD */
{ CPUFUNC(op_5040_0), 20544 }, /* ADD */
{ CPUFUNC(op_5048_0), 20552 }, /* ADDA */
{ CPUFUNC(op_5050_0), 20560 }, /* ADD */
{ CPUFUNC(op_5058_0), 20568 }, /* ADD */
{ CPUFUNC(op_5060_0), 20576 }, /* ADD */
{ CPUFUNC(op_5068_0), 20584 }, /* ADD */
{ CPUFUNC(op_5070_0), 20592 }, /* ADD */
{ CPUFUNC(op_5078_0), 20600 }, /* ADD */
{ CPUFUNC(op_5079_0), 20601 }, /* ADD */
{ CPUFUNC(op_5080_0), 20608 }, /* ADD */
{ CPUFUNC(op_5088_0), 20616 }, /* ADDA */
{ CPUFUNC(op_5090_0), 20624 }, /* ADD */
{ CPUFUNC(op_5098_0), 20632 }, /* ADD */
{ CPUFUNC(op_50a0_0), 20640 }, /* ADD */
{ CPUFUNC(op_50a8_0), 20648 }, /* ADD */
{ CPUFUNC(op_50b0_0), 20656 }, /* ADD */
{ CPUFUNC(op_50b8_0), 20664 }, /* ADD */
{ CPUFUNC(op_50b9_0), 20665 }, /* ADD */
{ CPUFUNC(op_50c0_0), 20672 }, /* Scc */
{ CPUFUNC(op_50c8_0), 20680 }, /* DBcc */
{ CPUFUNC(op_50d0_0), 20688 }, /* Scc */
{ CPUFUNC(op_50d8_0), 20696 }, /* Scc */
{ CPUFUNC(op_50e0_0), 20704 }, /* Scc */
{ CPUFUNC(op_50e8_0), 20712 }, /* Scc */
{ CPUFUNC(op_50f0_0), 20720 }, /* Scc */
{ CPUFUNC(op_50f8_0), 20728 }, /* Scc */
{ CPUFUNC(op_50f9_0), 20729 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fa_0), 20730 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fb_0), 20731 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_50fc_0), 20732 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5100_0), 20736 }, /* SUB */
{ CPUFUNC(op_5110_0), 20752 }, /* SUB */
{ CPUFUNC(op_5118_0), 20760 }, /* SUB */
{ CPUFUNC(op_5120_0), 20768 }, /* SUB */
{ CPUFUNC(op_5128_0), 20776 }, /* SUB */
{ CPUFUNC(op_5130_0), 20784 }, /* SUB */
{ CPUFUNC(op_5138_0), 20792 }, /* SUB */
{ CPUFUNC(op_5139_0), 20793 }, /* SUB */
{ CPUFUNC(op_5140_0), 20800 }, /* SUB */
{ CPUFUNC(op_5148_0), 20808 }, /* SUBA */
{ CPUFUNC(op_5150_0), 20816 }, /* SUB */
{ CPUFUNC(op_5158_0), 20824 }, /* SUB */
{ CPUFUNC(op_5160_0), 20832 }, /* SUB */
{ CPUFUNC(op_5168_0), 20840 }, /* SUB */
{ CPUFUNC(op_5170_0), 20848 }, /* SUB */
{ CPUFUNC(op_5178_0), 20856 }, /* SUB */
{ CPUFUNC(op_5179_0), 20857 }, /* SUB */
{ CPUFUNC(op_5180_0), 20864 }, /* SUB */
{ CPUFUNC(op_5188_0), 20872 }, /* SUBA */
{ CPUFUNC(op_5190_0), 20880 }, /* SUB */
{ CPUFUNC(op_5198_0), 20888 }, /* SUB */
{ CPUFUNC(op_51a0_0), 20896 }, /* SUB */
{ CPUFUNC(op_51a8_0), 20904 }, /* SUB */
{ CPUFUNC(op_51b0_0), 20912 }, /* SUB */
{ CPUFUNC(op_51b8_0), 20920 }, /* SUB */
{ CPUFUNC(op_51b9_0), 20921 }, /* SUB */
{ CPUFUNC(op_51c0_0), 20928 }, /* Scc */
{ CPUFUNC(op_51c8_0), 20936 }, /* DBcc */
{ CPUFUNC(op_51d0_0), 20944 }, /* Scc */
{ CPUFUNC(op_51d8_0), 20952 }, /* Scc */
{ CPUFUNC(op_51e0_0), 20960 }, /* Scc */
{ CPUFUNC(op_51e8_0), 20968 }, /* Scc */
{ CPUFUNC(op_51f0_0), 20976 }, /* Scc */
{ CPUFUNC(op_51f8_0), 20984 }, /* Scc */
{ CPUFUNC(op_51f9_0), 20985 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fa_0), 20986 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fb_0), 20987 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_51fc_0), 20988 }, /* TRAPcc */
#endif
{ CPUFUNC(op_52c0_0), 21184 }, /* Scc */
{ CPUFUNC(op_52c8_0), 21192 }, /* DBcc */
{ CPUFUNC(op_52d0_0), 21200 }, /* Scc */
{ CPUFUNC(op_52d8_0), 21208 }, /* Scc */
{ CPUFUNC(op_52e0_0), 21216 }, /* Scc */
{ CPUFUNC(op_52e8_0), 21224 }, /* Scc */
{ CPUFUNC(op_52f0_0), 21232 }, /* Scc */
{ CPUFUNC(op_52f8_0), 21240 }, /* Scc */
{ CPUFUNC(op_52f9_0), 21241 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fa_0), 21242 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fb_0), 21243 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_52fc_0), 21244 }, /* TRAPcc */
#endif
{ CPUFUNC(op_53c0_0), 21440 }, /* Scc */
{ CPUFUNC(op_53c8_0), 21448 }, /* DBcc */
{ CPUFUNC(op_53d0_0), 21456 }, /* Scc */
{ CPUFUNC(op_53d8_0), 21464 }, /* Scc */
{ CPUFUNC(op_53e0_0), 21472 }, /* Scc */
{ CPUFUNC(op_53e8_0), 21480 }, /* Scc */
{ CPUFUNC(op_53f0_0), 21488 }, /* Scc */
{ CPUFUNC(op_53f8_0), 21496 }, /* Scc */
{ CPUFUNC(op_53f9_0), 21497 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fa_0), 21498 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fb_0), 21499 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_53fc_0), 21500 }, /* TRAPcc */
#endif
{ CPUFUNC(op_54c0_0), 21696 }, /* Scc */
{ CPUFUNC(op_54c8_0), 21704 }, /* DBcc */
{ CPUFUNC(op_54d0_0), 21712 }, /* Scc */
{ CPUFUNC(op_54d8_0), 21720 }, /* Scc */
{ CPUFUNC(op_54e0_0), 21728 }, /* Scc */
{ CPUFUNC(op_54e8_0), 21736 }, /* Scc */
{ CPUFUNC(op_54f0_0), 21744 }, /* Scc */
{ CPUFUNC(op_54f8_0), 21752 }, /* Scc */
{ CPUFUNC(op_54f9_0), 21753 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fa_0), 21754 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fb_0), 21755 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_54fc_0), 21756 }, /* TRAPcc */
#endif
{ CPUFUNC(op_55c0_0), 21952 }, /* Scc */
{ CPUFUNC(op_55c8_0), 21960 }, /* DBcc */
{ CPUFUNC(op_55d0_0), 21968 }, /* Scc */
{ CPUFUNC(op_55d8_0), 21976 }, /* Scc */
{ CPUFUNC(op_55e0_0), 21984 }, /* Scc */
{ CPUFUNC(op_55e8_0), 21992 }, /* Scc */
{ CPUFUNC(op_55f0_0), 22000 }, /* Scc */
{ CPUFUNC(op_55f8_0), 22008 }, /* Scc */
{ CPUFUNC(op_55f9_0), 22009 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fa_0), 22010 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fb_0), 22011 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_55fc_0), 22012 }, /* TRAPcc */
#endif
{ CPUFUNC(op_56c0_0), 22208 }, /* Scc */
{ CPUFUNC(op_56c8_0), 22216 }, /* DBcc */
{ CPUFUNC(op_56d0_0), 22224 }, /* Scc */
{ CPUFUNC(op_56d8_0), 22232 }, /* Scc */
{ CPUFUNC(op_56e0_0), 22240 }, /* Scc */
{ CPUFUNC(op_56e8_0), 22248 }, /* Scc */
{ CPUFUNC(op_56f0_0), 22256 }, /* Scc */
{ CPUFUNC(op_56f8_0), 22264 }, /* Scc */
{ CPUFUNC(op_56f9_0), 22265 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fa_0), 22266 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fb_0), 22267 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_56fc_0), 22268 }, /* TRAPcc */
#endif
{ CPUFUNC(op_57c0_0), 22464 }, /* Scc */
{ CPUFUNC(op_57c8_0), 22472 }, /* DBcc */
{ CPUFUNC(op_57d0_0), 22480 }, /* Scc */
{ CPUFUNC(op_57d8_0), 22488 }, /* Scc */
{ CPUFUNC(op_57e0_0), 22496 }, /* Scc */
{ CPUFUNC(op_57e8_0), 22504 }, /* Scc */
{ CPUFUNC(op_57f0_0), 22512 }, /* Scc */
{ CPUFUNC(op_57f8_0), 22520 }, /* Scc */
{ CPUFUNC(op_57f9_0), 22521 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fa_0), 22522 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fb_0), 22523 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_57fc_0), 22524 }, /* TRAPcc */
#endif
{ CPUFUNC(op_58c0_0), 22720 }, /* Scc */
{ CPUFUNC(op_58c8_0), 22728 }, /* DBcc */
{ CPUFUNC(op_58d0_0), 22736 }, /* Scc */
{ CPUFUNC(op_58d8_0), 22744 }, /* Scc */
{ CPUFUNC(op_58e0_0), 22752 }, /* Scc */
{ CPUFUNC(op_58e8_0), 22760 }, /* Scc */
{ CPUFUNC(op_58f0_0), 22768 }, /* Scc */
{ CPUFUNC(op_58f8_0), 22776 }, /* Scc */
{ CPUFUNC(op_58f9_0), 22777 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fa_0), 22778 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fb_0), 22779 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_58fc_0), 22780 }, /* TRAPcc */
#endif
{ CPUFUNC(op_59c0_0), 22976 }, /* Scc */
{ CPUFUNC(op_59c8_0), 22984 }, /* DBcc */
{ CPUFUNC(op_59d0_0), 22992 }, /* Scc */
{ CPUFUNC(op_59d8_0), 23000 }, /* Scc */
{ CPUFUNC(op_59e0_0), 23008 }, /* Scc */
{ CPUFUNC(op_59e8_0), 23016 }, /* Scc */
{ CPUFUNC(op_59f0_0), 23024 }, /* Scc */
{ CPUFUNC(op_59f8_0), 23032 }, /* Scc */
{ CPUFUNC(op_59f9_0), 23033 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fa_0), 23034 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fb_0), 23035 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_59fc_0), 23036 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ac0_0), 23232 }, /* Scc */
{ CPUFUNC(op_5ac8_0), 23240 }, /* DBcc */
{ CPUFUNC(op_5ad0_0), 23248 }, /* Scc */
{ CPUFUNC(op_5ad8_0), 23256 }, /* Scc */
{ CPUFUNC(op_5ae0_0), 23264 }, /* Scc */
{ CPUFUNC(op_5ae8_0), 23272 }, /* Scc */
{ CPUFUNC(op_5af0_0), 23280 }, /* Scc */
{ CPUFUNC(op_5af8_0), 23288 }, /* Scc */
{ CPUFUNC(op_5af9_0), 23289 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afa_0), 23290 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afb_0), 23291 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5afc_0), 23292 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5bc0_0), 23488 }, /* Scc */
{ CPUFUNC(op_5bc8_0), 23496 }, /* DBcc */
{ CPUFUNC(op_5bd0_0), 23504 }, /* Scc */
{ CPUFUNC(op_5bd8_0), 23512 }, /* Scc */
{ CPUFUNC(op_5be0_0), 23520 }, /* Scc */
{ CPUFUNC(op_5be8_0), 23528 }, /* Scc */
{ CPUFUNC(op_5bf0_0), 23536 }, /* Scc */
{ CPUFUNC(op_5bf8_0), 23544 }, /* Scc */
{ CPUFUNC(op_5bf9_0), 23545 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfa_0), 23546 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfb_0), 23547 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5bfc_0), 23548 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5cc0_0), 23744 }, /* Scc */
{ CPUFUNC(op_5cc8_0), 23752 }, /* DBcc */
{ CPUFUNC(op_5cd0_0), 23760 }, /* Scc */
{ CPUFUNC(op_5cd8_0), 23768 }, /* Scc */
{ CPUFUNC(op_5ce0_0), 23776 }, /* Scc */
{ CPUFUNC(op_5ce8_0), 23784 }, /* Scc */
{ CPUFUNC(op_5cf0_0), 23792 }, /* Scc */
{ CPUFUNC(op_5cf8_0), 23800 }, /* Scc */
{ CPUFUNC(op_5cf9_0), 23801 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfa_0), 23802 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfb_0), 23803 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5cfc_0), 23804 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5dc0_0), 24000 }, /* Scc */
{ CPUFUNC(op_5dc8_0), 24008 }, /* DBcc */
{ CPUFUNC(op_5dd0_0), 24016 }, /* Scc */
{ CPUFUNC(op_5dd8_0), 24024 }, /* Scc */
{ CPUFUNC(op_5de0_0), 24032 }, /* Scc */
{ CPUFUNC(op_5de8_0), 24040 }, /* Scc */
{ CPUFUNC(op_5df0_0), 24048 }, /* Scc */
{ CPUFUNC(op_5df8_0), 24056 }, /* Scc */
{ CPUFUNC(op_5df9_0), 24057 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfa_0), 24058 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfb_0), 24059 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5dfc_0), 24060 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5ec0_0), 24256 }, /* Scc */
{ CPUFUNC(op_5ec8_0), 24264 }, /* DBcc */
{ CPUFUNC(op_5ed0_0), 24272 }, /* Scc */
{ CPUFUNC(op_5ed8_0), 24280 }, /* Scc */
{ CPUFUNC(op_5ee0_0), 24288 }, /* Scc */
{ CPUFUNC(op_5ee8_0), 24296 }, /* Scc */
{ CPUFUNC(op_5ef0_0), 24304 }, /* Scc */
{ CPUFUNC(op_5ef8_0), 24312 }, /* Scc */
{ CPUFUNC(op_5ef9_0), 24313 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efa_0), 24314 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efb_0), 24315 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5efc_0), 24316 }, /* TRAPcc */
#endif
{ CPUFUNC(op_5fc0_0), 24512 }, /* Scc */
{ CPUFUNC(op_5fc8_0), 24520 }, /* DBcc */
{ CPUFUNC(op_5fd0_0), 24528 }, /* Scc */
{ CPUFUNC(op_5fd8_0), 24536 }, /* Scc */
{ CPUFUNC(op_5fe0_0), 24544 }, /* Scc */
{ CPUFUNC(op_5fe8_0), 24552 }, /* Scc */
{ CPUFUNC(op_5ff0_0), 24560 }, /* Scc */
{ CPUFUNC(op_5ff8_0), 24568 }, /* Scc */
{ CPUFUNC(op_5ff9_0), 24569 }, /* Scc */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffa_0), 24570 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffb_0), 24571 }, /* TRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_5ffc_0), 24572 }, /* TRAPcc */
#endif
{ CPUFUNC(op_6000_0), 24576 }, /* Bcc */
{ CPUFUNC(op_6001_0), 24577 }, /* Bcc */
{ CPUFUNC(op_60ff_0), 24831 }, /* Bcc */
{ CPUFUNC(op_6100_0), 24832 }, /* BSR */
{ CPUFUNC(op_6101_0), 24833 }, /* BSR */
{ CPUFUNC(op_61ff_0), 25087 }, /* BSR */
{ CPUFUNC(op_6200_0), 25088 }, /* Bcc */
{ CPUFUNC(op_6201_0), 25089 }, /* Bcc */
{ CPUFUNC(op_62ff_0), 25343 }, /* Bcc */
{ CPUFUNC(op_6300_0), 25344 }, /* Bcc */
{ CPUFUNC(op_6301_0), 25345 }, /* Bcc */
{ CPUFUNC(op_63ff_0), 25599 }, /* Bcc */
{ CPUFUNC(op_6400_0), 25600 }, /* Bcc */
{ CPUFUNC(op_6401_0), 25601 }, /* Bcc */
{ CPUFUNC(op_64ff_0), 25855 }, /* Bcc */
{ CPUFUNC(op_6500_0), 25856 }, /* Bcc */
{ CPUFUNC(op_6501_0), 25857 }, /* Bcc */
{ CPUFUNC(op_65ff_0), 26111 }, /* Bcc */
{ CPUFUNC(op_6600_0), 26112 }, /* Bcc */
{ CPUFUNC(op_6601_0), 26113 }, /* Bcc */
{ CPUFUNC(op_66ff_0), 26367 }, /* Bcc */
{ CPUFUNC(op_6700_0), 26368 }, /* Bcc */
{ CPUFUNC(op_6701_0), 26369 }, /* Bcc */
{ CPUFUNC(op_67ff_0), 26623 }, /* Bcc */
{ CPUFUNC(op_6800_0), 26624 }, /* Bcc */
{ CPUFUNC(op_6801_0), 26625 }, /* Bcc */
{ CPUFUNC(op_68ff_0), 26879 }, /* Bcc */
{ CPUFUNC(op_6900_0), 26880 }, /* Bcc */
{ CPUFUNC(op_6901_0), 26881 }, /* Bcc */
{ CPUFUNC(op_69ff_0), 27135 }, /* Bcc */
{ CPUFUNC(op_6a00_0), 27136 }, /* Bcc */
{ CPUFUNC(op_6a01_0), 27137 }, /* Bcc */
{ CPUFUNC(op_6aff_0), 27391 }, /* Bcc */
{ CPUFUNC(op_6b00_0), 27392 }, /* Bcc */
{ CPUFUNC(op_6b01_0), 27393 }, /* Bcc */
{ CPUFUNC(op_6bff_0), 27647 }, /* Bcc */
{ CPUFUNC(op_6c00_0), 27648 }, /* Bcc */
{ CPUFUNC(op_6c01_0), 27649 }, /* Bcc */
{ CPUFUNC(op_6cff_0), 27903 }, /* Bcc */
{ CPUFUNC(op_6d00_0), 27904 }, /* Bcc */
{ CPUFUNC(op_6d01_0), 27905 }, /* Bcc */
{ CPUFUNC(op_6dff_0), 28159 }, /* Bcc */
{ CPUFUNC(op_6e00_0), 28160 }, /* Bcc */
{ CPUFUNC(op_6e01_0), 28161 }, /* Bcc */
{ CPUFUNC(op_6eff_0), 28415 }, /* Bcc */
{ CPUFUNC(op_6f00_0), 28416 }, /* Bcc */
{ CPUFUNC(op_6f01_0), 28417 }, /* Bcc */
{ CPUFUNC(op_6fff_0), 28671 }, /* Bcc */
{ CPUFUNC(op_7000_0), 28672 }, /* MOVE */
{ CPUFUNC(op_8000_0), 32768 }, /* OR */
{ CPUFUNC(op_8010_0), 32784 }, /* OR */
{ CPUFUNC(op_8018_0), 32792 }, /* OR */
{ CPUFUNC(op_8020_0), 32800 }, /* OR */
{ CPUFUNC(op_8028_0), 32808 }, /* OR */
{ CPUFUNC(op_8030_0), 32816 }, /* OR */
{ CPUFUNC(op_8038_0), 32824 }, /* OR */
{ CPUFUNC(op_8039_0), 32825 }, /* OR */
{ CPUFUNC(op_803a_0), 32826 }, /* OR */
{ CPUFUNC(op_803b_0), 32827 }, /* OR */
{ CPUFUNC(op_803c_0), 32828 }, /* OR */
{ CPUFUNC(op_8040_0), 32832 }, /* OR */
{ CPUFUNC(op_8050_0), 32848 }, /* OR */
{ CPUFUNC(op_8058_0), 32856 }, /* OR */
{ CPUFUNC(op_8060_0), 32864 }, /* OR */
{ CPUFUNC(op_8068_0), 32872 }, /* OR */
{ CPUFUNC(op_8070_0), 32880 }, /* OR */
{ CPUFUNC(op_8078_0), 32888 }, /* OR */
{ CPUFUNC(op_8079_0), 32889 }, /* OR */
{ CPUFUNC(op_807a_0), 32890 }, /* OR */
{ CPUFUNC(op_807b_0), 32891 }, /* OR */
{ CPUFUNC(op_807c_0), 32892 }, /* OR */
{ CPUFUNC(op_8080_0), 32896 }, /* OR */
{ CPUFUNC(op_8090_0), 32912 }, /* OR */
{ CPUFUNC(op_8098_0), 32920 }, /* OR */
{ CPUFUNC(op_80a0_0), 32928 }, /* OR */
{ CPUFUNC(op_80a8_0), 32936 }, /* OR */
{ CPUFUNC(op_80b0_0), 32944 }, /* OR */
{ CPUFUNC(op_80b8_0), 32952 }, /* OR */
{ CPUFUNC(op_80b9_0), 32953 }, /* OR */
{ CPUFUNC(op_80ba_0), 32954 }, /* OR */
{ CPUFUNC(op_80bb_0), 32955 }, /* OR */
{ CPUFUNC(op_80bc_0), 32956 }, /* OR */
{ CPUFUNC(op_80c0_0), 32960 }, /* DIVU */
{ CPUFUNC(op_80d0_0), 32976 }, /* DIVU */
{ CPUFUNC(op_80d8_0), 32984 }, /* DIVU */
{ CPUFUNC(op_80e0_0), 32992 }, /* DIVU */
{ CPUFUNC(op_80e8_0), 33000 }, /* DIVU */
{ CPUFUNC(op_80f0_0), 33008 }, /* DIVU */
{ CPUFUNC(op_80f8_0), 33016 }, /* DIVU */
{ CPUFUNC(op_80f9_0), 33017 }, /* DIVU */
{ CPUFUNC(op_80fa_0), 33018 }, /* DIVU */
{ CPUFUNC(op_80fb_0), 33019 }, /* DIVU */
{ CPUFUNC(op_80fc_0), 33020 }, /* DIVU */
{ CPUFUNC(op_8100_0), 33024 }, /* SBCD */
{ CPUFUNC(op_8108_0), 33032 }, /* SBCD */
{ CPUFUNC(op_8110_0), 33040 }, /* OR */
{ CPUFUNC(op_8118_0), 33048 }, /* OR */
{ CPUFUNC(op_8120_0), 33056 }, /* OR */
{ CPUFUNC(op_8128_0), 33064 }, /* OR */
{ CPUFUNC(op_8130_0), 33072 }, /* OR */
{ CPUFUNC(op_8138_0), 33080 }, /* OR */
{ CPUFUNC(op_8139_0), 33081 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8140_0), 33088 }, /* PACK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8148_0), 33096 }, /* PACK */
#endif
{ CPUFUNC(op_8150_0), 33104 }, /* OR */
{ CPUFUNC(op_8158_0), 33112 }, /* OR */
{ CPUFUNC(op_8160_0), 33120 }, /* OR */
{ CPUFUNC(op_8168_0), 33128 }, /* OR */
{ CPUFUNC(op_8170_0), 33136 }, /* OR */
{ CPUFUNC(op_8178_0), 33144 }, /* OR */
{ CPUFUNC(op_8179_0), 33145 }, /* OR */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8180_0), 33152 }, /* UNPK */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_8188_0), 33160 }, /* UNPK */
#endif
{ CPUFUNC(op_8190_0), 33168 }, /* OR */
{ CPUFUNC(op_8198_0), 33176 }, /* OR */
{ CPUFUNC(op_81a0_0), 33184 }, /* OR */
{ CPUFUNC(op_81a8_0), 33192 }, /* OR */
{ CPUFUNC(op_81b0_0), 33200 }, /* OR */
{ CPUFUNC(op_81b8_0), 33208 }, /* OR */
{ CPUFUNC(op_81b9_0), 33209 }, /* OR */
{ CPUFUNC(op_81c0_0), 33216 }, /* DIVS */
{ CPUFUNC(op_81d0_0), 33232 }, /* DIVS */
{ CPUFUNC(op_81d8_0), 33240 }, /* DIVS */
{ CPUFUNC(op_81e0_0), 33248 }, /* DIVS */
{ CPUFUNC(op_81e8_0), 33256 }, /* DIVS */
{ CPUFUNC(op_81f0_0), 33264 }, /* DIVS */
{ CPUFUNC(op_81f8_0), 33272 }, /* DIVS */
{ CPUFUNC(op_81f9_0), 33273 }, /* DIVS */
{ CPUFUNC(op_81fa_0), 33274 }, /* DIVS */
{ CPUFUNC(op_81fb_0), 33275 }, /* DIVS */
{ CPUFUNC(op_81fc_0), 33276 }, /* DIVS */
{ CPUFUNC(op_9000_0), 36864 }, /* SUB */
{ CPUFUNC(op_9010_0), 36880 }, /* SUB */
{ CPUFUNC(op_9018_0), 36888 }, /* SUB */
{ CPUFUNC(op_9020_0), 36896 }, /* SUB */
{ CPUFUNC(op_9028_0), 36904 }, /* SUB */
{ CPUFUNC(op_9030_0), 36912 }, /* SUB */
{ CPUFUNC(op_9038_0), 36920 }, /* SUB */
{ CPUFUNC(op_9039_0), 36921 }, /* SUB */
{ CPUFUNC(op_903a_0), 36922 }, /* SUB */
{ CPUFUNC(op_903b_0), 36923 }, /* SUB */
{ CPUFUNC(op_903c_0), 36924 }, /* SUB */
{ CPUFUNC(op_9040_0), 36928 }, /* SUB */
{ CPUFUNC(op_9048_0), 36936 }, /* SUB */
{ CPUFUNC(op_9050_0), 36944 }, /* SUB */
{ CPUFUNC(op_9058_0), 36952 }, /* SUB */
{ CPUFUNC(op_9060_0), 36960 }, /* SUB */
{ CPUFUNC(op_9068_0), 36968 }, /* SUB */
{ CPUFUNC(op_9070_0), 36976 }, /* SUB */
{ CPUFUNC(op_9078_0), 36984 }, /* SUB */
{ CPUFUNC(op_9079_0), 36985 }, /* SUB */
{ CPUFUNC(op_907a_0), 36986 }, /* SUB */
{ CPUFUNC(op_907b_0), 36987 }, /* SUB */
{ CPUFUNC(op_907c_0), 36988 }, /* SUB */
{ CPUFUNC(op_9080_0), 36992 }, /* SUB */
{ CPUFUNC(op_9088_0), 37000 }, /* SUB */
{ CPUFUNC(op_9090_0), 37008 }, /* SUB */
{ CPUFUNC(op_9098_0), 37016 }, /* SUB */
{ CPUFUNC(op_90a0_0), 37024 }, /* SUB */
{ CPUFUNC(op_90a8_0), 37032 }, /* SUB */
{ CPUFUNC(op_90b0_0), 37040 }, /* SUB */
{ CPUFUNC(op_90b8_0), 37048 }, /* SUB */
{ CPUFUNC(op_90b9_0), 37049 }, /* SUB */
{ CPUFUNC(op_90ba_0), 37050 }, /* SUB */
{ CPUFUNC(op_90bb_0), 37051 }, /* SUB */
{ CPUFUNC(op_90bc_0), 37052 }, /* SUB */
{ CPUFUNC(op_90c0_0), 37056 }, /* SUBA */
{ CPUFUNC(op_90c8_0), 37064 }, /* SUBA */
{ CPUFUNC(op_90d0_0), 37072 }, /* SUBA */
{ CPUFUNC(op_90d8_0), 37080 }, /* SUBA */
{ CPUFUNC(op_90e0_0), 37088 }, /* SUBA */
{ CPUFUNC(op_90e8_0), 37096 }, /* SUBA */
{ CPUFUNC(op_90f0_0), 37104 }, /* SUBA */
{ CPUFUNC(op_90f8_0), 37112 }, /* SUBA */
{ CPUFUNC(op_90f9_0), 37113 }, /* SUBA */
{ CPUFUNC(op_90fa_0), 37114 }, /* SUBA */
{ CPUFUNC(op_90fb_0), 37115 }, /* SUBA */
{ CPUFUNC(op_90fc_0), 37116 }, /* SUBA */
{ CPUFUNC(op_9100_0), 37120 }, /* SUBX */
{ CPUFUNC(op_9108_0), 37128 }, /* SUBX */
{ CPUFUNC(op_9110_0), 37136 }, /* SUB */
{ CPUFUNC(op_9118_0), 37144 }, /* SUB */
{ CPUFUNC(op_9120_0), 37152 }, /* SUB */
{ CPUFUNC(op_9128_0), 37160 }, /* SUB */
{ CPUFUNC(op_9130_0), 37168 }, /* SUB */
{ CPUFUNC(op_9138_0), 37176 }, /* SUB */
{ CPUFUNC(op_9139_0), 37177 }, /* SUB */
{ CPUFUNC(op_9140_0), 37184 }, /* SUBX */
{ CPUFUNC(op_9148_0), 37192 }, /* SUBX */
{ CPUFUNC(op_9150_0), 37200 }, /* SUB */
{ CPUFUNC(op_9158_0), 37208 }, /* SUB */
{ CPUFUNC(op_9160_0), 37216 }, /* SUB */
{ CPUFUNC(op_9168_0), 37224 }, /* SUB */
{ CPUFUNC(op_9170_0), 37232 }, /* SUB */
{ CPUFUNC(op_9178_0), 37240 }, /* SUB */
{ CPUFUNC(op_9179_0), 37241 }, /* SUB */
{ CPUFUNC(op_9180_0), 37248 }, /* SUBX */
{ CPUFUNC(op_9188_0), 37256 }, /* SUBX */
{ CPUFUNC(op_9190_0), 37264 }, /* SUB */
{ CPUFUNC(op_9198_0), 37272 }, /* SUB */
{ CPUFUNC(op_91a0_0), 37280 }, /* SUB */
{ CPUFUNC(op_91a8_0), 37288 }, /* SUB */
{ CPUFUNC(op_91b0_0), 37296 }, /* SUB */
{ CPUFUNC(op_91b8_0), 37304 }, /* SUB */
{ CPUFUNC(op_91b9_0), 37305 }, /* SUB */
{ CPUFUNC(op_91c0_0), 37312 }, /* SUBA */
{ CPUFUNC(op_91c8_0), 37320 }, /* SUBA */
{ CPUFUNC(op_91d0_0), 37328 }, /* SUBA */
{ CPUFUNC(op_91d8_0), 37336 }, /* SUBA */
{ CPUFUNC(op_91e0_0), 37344 }, /* SUBA */
{ CPUFUNC(op_91e8_0), 37352 }, /* SUBA */
{ CPUFUNC(op_91f0_0), 37360 }, /* SUBA */
{ CPUFUNC(op_91f8_0), 37368 }, /* SUBA */
{ CPUFUNC(op_91f9_0), 37369 }, /* SUBA */
{ CPUFUNC(op_91fa_0), 37370 }, /* SUBA */
{ CPUFUNC(op_91fb_0), 37371 }, /* SUBA */
{ CPUFUNC(op_91fc_0), 37372 }, /* SUBA */
{ CPUFUNC(op_b000_0), 45056 }, /* CMP */
{ CPUFUNC(op_b010_0), 45072 }, /* CMP */
{ CPUFUNC(op_b018_0), 45080 }, /* CMP */
{ CPUFUNC(op_b020_0), 45088 }, /* CMP */
{ CPUFUNC(op_b028_0), 45096 }, /* CMP */
{ CPUFUNC(op_b030_0), 45104 }, /* CMP */
{ CPUFUNC(op_b038_0), 45112 }, /* CMP */
{ CPUFUNC(op_b039_0), 45113 }, /* CMP */
{ CPUFUNC(op_b03a_0), 45114 }, /* CMP */
{ CPUFUNC(op_b03b_0), 45115 }, /* CMP */
{ CPUFUNC(op_b03c_0), 45116 }, /* CMP */
{ CPUFUNC(op_b040_0), 45120 }, /* CMP */
{ CPUFUNC(op_b048_0), 45128 }, /* CMP */
{ CPUFUNC(op_b050_0), 45136 }, /* CMP */
{ CPUFUNC(op_b058_0), 45144 }, /* CMP */
{ CPUFUNC(op_b060_0), 45152 }, /* CMP */
{ CPUFUNC(op_b068_0), 45160 }, /* CMP */
{ CPUFUNC(op_b070_0), 45168 }, /* CMP */
{ CPUFUNC(op_b078_0), 45176 }, /* CMP */
{ CPUFUNC(op_b079_0), 45177 }, /* CMP */
{ CPUFUNC(op_b07a_0), 45178 }, /* CMP */
{ CPUFUNC(op_b07b_0), 45179 }, /* CMP */
{ CPUFUNC(op_b07c_0), 45180 }, /* CMP */
{ CPUFUNC(op_b080_0), 45184 }, /* CMP */
{ CPUFUNC(op_b088_0), 45192 }, /* CMP */
{ CPUFUNC(op_b090_0), 45200 }, /* CMP */
{ CPUFUNC(op_b098_0), 45208 }, /* CMP */
{ CPUFUNC(op_b0a0_0), 45216 }, /* CMP */
{ CPUFUNC(op_b0a8_0), 45224 }, /* CMP */
{ CPUFUNC(op_b0b0_0), 45232 }, /* CMP */
{ CPUFUNC(op_b0b8_0), 45240 }, /* CMP */
{ CPUFUNC(op_b0b9_0), 45241 }, /* CMP */
{ CPUFUNC(op_b0ba_0), 45242 }, /* CMP */
{ CPUFUNC(op_b0bb_0), 45243 }, /* CMP */
{ CPUFUNC(op_b0bc_0), 45244 }, /* CMP */
{ CPUFUNC(op_b0c0_0), 45248 }, /* CMPA */
{ CPUFUNC(op_b0c8_0), 45256 }, /* CMPA */
{ CPUFUNC(op_b0d0_0), 45264 }, /* CMPA */
{ CPUFUNC(op_b0d8_0), 45272 }, /* CMPA */
{ CPUFUNC(op_b0e0_0), 45280 }, /* CMPA */
{ CPUFUNC(op_b0e8_0), 45288 }, /* CMPA */
{ CPUFUNC(op_b0f0_0), 45296 }, /* CMPA */
{ CPUFUNC(op_b0f8_0), 45304 }, /* CMPA */
{ CPUFUNC(op_b0f9_0), 45305 }, /* CMPA */
{ CPUFUNC(op_b0fa_0), 45306 }, /* CMPA */
{ CPUFUNC(op_b0fb_0), 45307 }, /* CMPA */
{ CPUFUNC(op_b0fc_0), 45308 }, /* CMPA */
{ CPUFUNC(op_b100_0), 45312 }, /* EOR */
{ CPUFUNC(op_b108_0), 45320 }, /* CMPM */
{ CPUFUNC(op_b110_0), 45328 }, /* EOR */
{ CPUFUNC(op_b118_0), 45336 }, /* EOR */
{ CPUFUNC(op_b120_0), 45344 }, /* EOR */
{ CPUFUNC(op_b128_0), 45352 }, /* EOR */
{ CPUFUNC(op_b130_0), 45360 }, /* EOR */
{ CPUFUNC(op_b138_0), 45368 }, /* EOR */
{ CPUFUNC(op_b139_0), 45369 }, /* EOR */
{ CPUFUNC(op_b140_0), 45376 }, /* EOR */
{ CPUFUNC(op_b148_0), 45384 }, /* CMPM */
{ CPUFUNC(op_b150_0), 45392 }, /* EOR */
{ CPUFUNC(op_b158_0), 45400 }, /* EOR */
{ CPUFUNC(op_b160_0), 45408 }, /* EOR */
{ CPUFUNC(op_b168_0), 45416 }, /* EOR */
{ CPUFUNC(op_b170_0), 45424 }, /* EOR */
{ CPUFUNC(op_b178_0), 45432 }, /* EOR */
{ CPUFUNC(op_b179_0), 45433 }, /* EOR */
{ CPUFUNC(op_b180_0), 45440 }, /* EOR */
{ CPUFUNC(op_b188_0), 45448 }, /* CMPM */
{ CPUFUNC(op_b190_0), 45456 }, /* EOR */
{ CPUFUNC(op_b198_0), 45464 }, /* EOR */
{ CPUFUNC(op_b1a0_0), 45472 }, /* EOR */
{ CPUFUNC(op_b1a8_0), 45480 }, /* EOR */
{ CPUFUNC(op_b1b0_0), 45488 }, /* EOR */
{ CPUFUNC(op_b1b8_0), 45496 }, /* EOR */
{ CPUFUNC(op_b1b9_0), 45497 }, /* EOR */
{ CPUFUNC(op_b1c0_0), 45504 }, /* CMPA */
{ CPUFUNC(op_b1c8_0), 45512 }, /* CMPA */
{ CPUFUNC(op_b1d0_0), 45520 }, /* CMPA */
{ CPUFUNC(op_b1d8_0), 45528 }, /* CMPA */
{ CPUFUNC(op_b1e0_0), 45536 }, /* CMPA */
{ CPUFUNC(op_b1e8_0), 45544 }, /* CMPA */
{ CPUFUNC(op_b1f0_0), 45552 }, /* CMPA */
{ CPUFUNC(op_b1f8_0), 45560 }, /* CMPA */
{ CPUFUNC(op_b1f9_0), 45561 }, /* CMPA */
{ CPUFUNC(op_b1fa_0), 45562 }, /* CMPA */
{ CPUFUNC(op_b1fb_0), 45563 }, /* CMPA */
{ CPUFUNC(op_b1fc_0), 45564 }, /* CMPA */
{ CPUFUNC(op_c000_0), 49152 }, /* AND */
{ CPUFUNC(op_c010_0), 49168 }, /* AND */
{ CPUFUNC(op_c018_0), 49176 }, /* AND */
{ CPUFUNC(op_c020_0), 49184 }, /* AND */
{ CPUFUNC(op_c028_0), 49192 }, /* AND */
{ CPUFUNC(op_c030_0), 49200 }, /* AND */
{ CPUFUNC(op_c038_0), 49208 }, /* AND */
{ CPUFUNC(op_c039_0), 49209 }, /* AND */
{ CPUFUNC(op_c03a_0), 49210 }, /* AND */
{ CPUFUNC(op_c03b_0), 49211 }, /* AND */
{ CPUFUNC(op_c03c_0), 49212 }, /* AND */
{ CPUFUNC(op_c040_0), 49216 }, /* AND */
{ CPUFUNC(op_c050_0), 49232 }, /* AND */
{ CPUFUNC(op_c058_0), 49240 }, /* AND */
{ CPUFUNC(op_c060_0), 49248 }, /* AND */
{ CPUFUNC(op_c068_0), 49256 }, /* AND */
{ CPUFUNC(op_c070_0), 49264 }, /* AND */
{ CPUFUNC(op_c078_0), 49272 }, /* AND */
{ CPUFUNC(op_c079_0), 49273 }, /* AND */
{ CPUFUNC(op_c07a_0), 49274 }, /* AND */
{ CPUFUNC(op_c07b_0), 49275 }, /* AND */
{ CPUFUNC(op_c07c_0), 49276 }, /* AND */
{ CPUFUNC(op_c080_0), 49280 }, /* AND */
{ CPUFUNC(op_c090_0), 49296 }, /* AND */
{ CPUFUNC(op_c098_0), 49304 }, /* AND */
{ CPUFUNC(op_c0a0_0), 49312 }, /* AND */
{ CPUFUNC(op_c0a8_0), 49320 }, /* AND */
{ CPUFUNC(op_c0b0_0), 49328 }, /* AND */
{ CPUFUNC(op_c0b8_0), 49336 }, /* AND */
{ CPUFUNC(op_c0b9_0), 49337 }, /* AND */
{ CPUFUNC(op_c0ba_0), 49338 }, /* AND */
{ CPUFUNC(op_c0bb_0), 49339 }, /* AND */
{ CPUFUNC(op_c0bc_0), 49340 }, /* AND */
{ CPUFUNC(op_c0c0_0), 49344 }, /* MULU */
{ CPUFUNC(op_c0d0_0), 49360 }, /* MULU */
{ CPUFUNC(op_c0d8_0), 49368 }, /* MULU */
{ CPUFUNC(op_c0e0_0), 49376 }, /* MULU */
{ CPUFUNC(op_c0e8_0), 49384 }, /* MULU */
{ CPUFUNC(op_c0f0_0), 49392 }, /* MULU */
{ CPUFUNC(op_c0f8_0), 49400 }, /* MULU */
{ CPUFUNC(op_c0f9_0), 49401 }, /* MULU */
{ CPUFUNC(op_c0fa_0), 49402 }, /* MULU */
{ CPUFUNC(op_c0fb_0), 49403 }, /* MULU */
{ CPUFUNC(op_c0fc_0), 49404 }, /* MULU */
{ CPUFUNC(op_c100_0), 49408 }, /* ABCD */
{ CPUFUNC(op_c108_0), 49416 }, /* ABCD */
{ CPUFUNC(op_c110_0), 49424 }, /* AND */
{ CPUFUNC(op_c118_0), 49432 }, /* AND */
{ CPUFUNC(op_c120_0), 49440 }, /* AND */
{ CPUFUNC(op_c128_0), 49448 }, /* AND */
{ CPUFUNC(op_c130_0), 49456 }, /* AND */
{ CPUFUNC(op_c138_0), 49464 }, /* AND */
{ CPUFUNC(op_c139_0), 49465 }, /* AND */
{ CPUFUNC(op_c140_0), 49472 }, /* EXG */
{ CPUFUNC(op_c148_0), 49480 }, /* EXG */
{ CPUFUNC(op_c150_0), 49488 }, /* AND */
{ CPUFUNC(op_c158_0), 49496 }, /* AND */
{ CPUFUNC(op_c160_0), 49504 }, /* AND */
{ CPUFUNC(op_c168_0), 49512 }, /* AND */
{ CPUFUNC(op_c170_0), 49520 }, /* AND */
{ CPUFUNC(op_c178_0), 49528 }, /* AND */
{ CPUFUNC(op_c179_0), 49529 }, /* AND */
{ CPUFUNC(op_c188_0), 49544 }, /* EXG */
{ CPUFUNC(op_c190_0), 49552 }, /* AND */
{ CPUFUNC(op_c198_0), 49560 }, /* AND */
{ CPUFUNC(op_c1a0_0), 49568 }, /* AND */
{ CPUFUNC(op_c1a8_0), 49576 }, /* AND */
{ CPUFUNC(op_c1b0_0), 49584 }, /* AND */
{ CPUFUNC(op_c1b8_0), 49592 }, /* AND */
{ CPUFUNC(op_c1b9_0), 49593 }, /* AND */
{ CPUFUNC(op_c1c0_0), 49600 }, /* MULS */
{ CPUFUNC(op_c1d0_0), 49616 }, /* MULS */
{ CPUFUNC(op_c1d8_0), 49624 }, /* MULS */
{ CPUFUNC(op_c1e0_0), 49632 }, /* MULS */
{ CPUFUNC(op_c1e8_0), 49640 }, /* MULS */
{ CPUFUNC(op_c1f0_0), 49648 }, /* MULS */
{ CPUFUNC(op_c1f8_0), 49656 }, /* MULS */
{ CPUFUNC(op_c1f9_0), 49657 }, /* MULS */
{ CPUFUNC(op_c1fa_0), 49658 }, /* MULS */
{ CPUFUNC(op_c1fb_0), 49659 }, /* MULS */
{ CPUFUNC(op_c1fc_0), 49660 }, /* MULS */
{ CPUFUNC(op_d000_0), 53248 }, /* ADD */
{ CPUFUNC(op_d010_0), 53264 }, /* ADD */
{ CPUFUNC(op_d018_0), 53272 }, /* ADD */
{ CPUFUNC(op_d020_0), 53280 }, /* ADD */
{ CPUFUNC(op_d028_0), 53288 }, /* ADD */
{ CPUFUNC(op_d030_0), 53296 }, /* ADD */
{ CPUFUNC(op_d038_0), 53304 }, /* ADD */
{ CPUFUNC(op_d039_0), 53305 }, /* ADD */
{ CPUFUNC(op_d03a_0), 53306 }, /* ADD */
{ CPUFUNC(op_d03b_0), 53307 }, /* ADD */
{ CPUFUNC(op_d03c_0), 53308 }, /* ADD */
{ CPUFUNC(op_d040_0), 53312 }, /* ADD */
{ CPUFUNC(op_d048_0), 53320 }, /* ADD */
{ CPUFUNC(op_d050_0), 53328 }, /* ADD */
{ CPUFUNC(op_d058_0), 53336 }, /* ADD */
{ CPUFUNC(op_d060_0), 53344 }, /* ADD */
{ CPUFUNC(op_d068_0), 53352 }, /* ADD */
{ CPUFUNC(op_d070_0), 53360 }, /* ADD */
{ CPUFUNC(op_d078_0), 53368 }, /* ADD */
{ CPUFUNC(op_d079_0), 53369 }, /* ADD */
{ CPUFUNC(op_d07a_0), 53370 }, /* ADD */
{ CPUFUNC(op_d07b_0), 53371 }, /* ADD */
{ CPUFUNC(op_d07c_0), 53372 }, /* ADD */
{ CPUFUNC(op_d080_0), 53376 }, /* ADD */
{ CPUFUNC(op_d088_0), 53384 }, /* ADD */
{ CPUFUNC(op_d090_0), 53392 }, /* ADD */
{ CPUFUNC(op_d098_0), 53400 }, /* ADD */
{ CPUFUNC(op_d0a0_0), 53408 }, /* ADD */
{ CPUFUNC(op_d0a8_0), 53416 }, /* ADD */
{ CPUFUNC(op_d0b0_0), 53424 }, /* ADD */
{ CPUFUNC(op_d0b8_0), 53432 }, /* ADD */
{ CPUFUNC(op_d0b9_0), 53433 }, /* ADD */
{ CPUFUNC(op_d0ba_0), 53434 }, /* ADD */
{ CPUFUNC(op_d0bb_0), 53435 }, /* ADD */
{ CPUFUNC(op_d0bc_0), 53436 }, /* ADD */
{ CPUFUNC(op_d0c0_0), 53440 }, /* ADDA */
{ CPUFUNC(op_d0c8_0), 53448 }, /* ADDA */
{ CPUFUNC(op_d0d0_0), 53456 }, /* ADDA */
{ CPUFUNC(op_d0d8_0), 53464 }, /* ADDA */
{ CPUFUNC(op_d0e0_0), 53472 }, /* ADDA */
{ CPUFUNC(op_d0e8_0), 53480 }, /* ADDA */
{ CPUFUNC(op_d0f0_0), 53488 }, /* ADDA */
{ CPUFUNC(op_d0f8_0), 53496 }, /* ADDA */
{ CPUFUNC(op_d0f9_0), 53497 }, /* ADDA */
{ CPUFUNC(op_d0fa_0), 53498 }, /* ADDA */
{ CPUFUNC(op_d0fb_0), 53499 }, /* ADDA */
{ CPUFUNC(op_d0fc_0), 53500 }, /* ADDA */
{ CPUFUNC(op_d100_0), 53504 }, /* ADDX */
{ CPUFUNC(op_d108_0), 53512 }, /* ADDX */
{ CPUFUNC(op_d110_0), 53520 }, /* ADD */
{ CPUFUNC(op_d118_0), 53528 }, /* ADD */
{ CPUFUNC(op_d120_0), 53536 }, /* ADD */
{ CPUFUNC(op_d128_0), 53544 }, /* ADD */
{ CPUFUNC(op_d130_0), 53552 }, /* ADD */
{ CPUFUNC(op_d138_0), 53560 }, /* ADD */
{ CPUFUNC(op_d139_0), 53561 }, /* ADD */
{ CPUFUNC(op_d140_0), 53568 }, /* ADDX */
{ CPUFUNC(op_d148_0), 53576 }, /* ADDX */
{ CPUFUNC(op_d150_0), 53584 }, /* ADD */
{ CPUFUNC(op_d158_0), 53592 }, /* ADD */
{ CPUFUNC(op_d160_0), 53600 }, /* ADD */
{ CPUFUNC(op_d168_0), 53608 }, /* ADD */
{ CPUFUNC(op_d170_0), 53616 }, /* ADD */
{ CPUFUNC(op_d178_0), 53624 }, /* ADD */
{ CPUFUNC(op_d179_0), 53625 }, /* ADD */
{ CPUFUNC(op_d180_0), 53632 }, /* ADDX */
{ CPUFUNC(op_d188_0), 53640 }, /* ADDX */
{ CPUFUNC(op_d190_0), 53648 }, /* ADD */
{ CPUFUNC(op_d198_0), 53656 }, /* ADD */
{ CPUFUNC(op_d1a0_0), 53664 }, /* ADD */
{ CPUFUNC(op_d1a8_0), 53672 }, /* ADD */
{ CPUFUNC(op_d1b0_0), 53680 }, /* ADD */
{ CPUFUNC(op_d1b8_0), 53688 }, /* ADD */
{ CPUFUNC(op_d1b9_0), 53689 }, /* ADD */
{ CPUFUNC(op_d1c0_0), 53696 }, /* ADDA */
{ CPUFUNC(op_d1c8_0), 53704 }, /* ADDA */
{ CPUFUNC(op_d1d0_0), 53712 }, /* ADDA */
{ CPUFUNC(op_d1d8_0), 53720 }, /* ADDA */
{ CPUFUNC(op_d1e0_0), 53728 }, /* ADDA */
{ CPUFUNC(op_d1e8_0), 53736 }, /* ADDA */
{ CPUFUNC(op_d1f0_0), 53744 }, /* ADDA */
{ CPUFUNC(op_d1f8_0), 53752 }, /* ADDA */
{ CPUFUNC(op_d1f9_0), 53753 }, /* ADDA */
{ CPUFUNC(op_d1fa_0), 53754 }, /* ADDA */
{ CPUFUNC(op_d1fb_0), 53755 }, /* ADDA */
{ CPUFUNC(op_d1fc_0), 53756 }, /* ADDA */
{ CPUFUNC(op_e000_0), 57344 }, /* ASR */
{ CPUFUNC(op_e008_0), 57352 }, /* LSR */
{ CPUFUNC(op_e010_0), 57360 }, /* ROXR */
{ CPUFUNC(op_e018_0), 57368 }, /* ROR */
{ CPUFUNC(op_e020_0), 57376 }, /* ASR */
{ CPUFUNC(op_e028_0), 57384 }, /* LSR */
{ CPUFUNC(op_e030_0), 57392 }, /* ROXR */
{ CPUFUNC(op_e038_0), 57400 }, /* ROR */
{ CPUFUNC(op_e040_0), 57408 }, /* ASR */
{ CPUFUNC(op_e048_0), 57416 }, /* LSR */
{ CPUFUNC(op_e050_0), 57424 }, /* ROXR */
{ CPUFUNC(op_e058_0), 57432 }, /* ROR */
{ CPUFUNC(op_e060_0), 57440 }, /* ASR */
{ CPUFUNC(op_e068_0), 57448 }, /* LSR */
{ CPUFUNC(op_e070_0), 57456 }, /* ROXR */
{ CPUFUNC(op_e078_0), 57464 }, /* ROR */
{ CPUFUNC(op_e080_0), 57472 }, /* ASR */
{ CPUFUNC(op_e088_0), 57480 }, /* LSR */
{ CPUFUNC(op_e090_0), 57488 }, /* ROXR */
{ CPUFUNC(op_e098_0), 57496 }, /* ROR */
{ CPUFUNC(op_e0a0_0), 57504 }, /* ASR */
{ CPUFUNC(op_e0a8_0), 57512 }, /* LSR */
{ CPUFUNC(op_e0b0_0), 57520 }, /* ROXR */
{ CPUFUNC(op_e0b8_0), 57528 }, /* ROR */
{ CPUFUNC(op_e0d0_0), 57552 }, /* ASRW */
{ CPUFUNC(op_e0d8_0), 57560 }, /* ASRW */
{ CPUFUNC(op_e0e0_0), 57568 }, /* ASRW */
{ CPUFUNC(op_e0e8_0), 57576 }, /* ASRW */
{ CPUFUNC(op_e0f0_0), 57584 }, /* ASRW */
{ CPUFUNC(op_e0f8_0), 57592 }, /* ASRW */
{ CPUFUNC(op_e0f9_0), 57593 }, /* ASRW */
{ CPUFUNC(op_e100_0), 57600 }, /* ASL */
{ CPUFUNC(op_e108_0), 57608 }, /* LSL */
{ CPUFUNC(op_e110_0), 57616 }, /* ROXL */
{ CPUFUNC(op_e118_0), 57624 }, /* ROL */
{ CPUFUNC(op_e120_0), 57632 }, /* ASL */
{ CPUFUNC(op_e128_0), 57640 }, /* LSL */
{ CPUFUNC(op_e130_0), 57648 }, /* ROXL */
{ CPUFUNC(op_e138_0), 57656 }, /* ROL */
{ CPUFUNC(op_e140_0), 57664 }, /* ASL */
{ CPUFUNC(op_e148_0), 57672 }, /* LSL */
{ CPUFUNC(op_e150_0), 57680 }, /* ROXL */
{ CPUFUNC(op_e158_0), 57688 }, /* ROL */
{ CPUFUNC(op_e160_0), 57696 }, /* ASL */
{ CPUFUNC(op_e168_0), 57704 }, /* LSL */
{ CPUFUNC(op_e170_0), 57712 }, /* ROXL */
{ CPUFUNC(op_e178_0), 57720 }, /* ROL */
{ CPUFUNC(op_e180_0), 57728 }, /* ASL */
{ CPUFUNC(op_e188_0), 57736 }, /* LSL */
{ CPUFUNC(op_e190_0), 57744 }, /* ROXL */
{ CPUFUNC(op_e198_0), 57752 }, /* ROL */
{ CPUFUNC(op_e1a0_0), 57760 }, /* ASL */
{ CPUFUNC(op_e1a8_0), 57768 }, /* LSL */
{ CPUFUNC(op_e1b0_0), 57776 }, /* ROXL */
{ CPUFUNC(op_e1b8_0), 57784 }, /* ROL */
{ CPUFUNC(op_e1d0_0), 57808 }, /* ASLW */
{ CPUFUNC(op_e1d8_0), 57816 }, /* ASLW */
{ CPUFUNC(op_e1e0_0), 57824 }, /* ASLW */
{ CPUFUNC(op_e1e8_0), 57832 }, /* ASLW */
{ CPUFUNC(op_e1f0_0), 57840 }, /* ASLW */
{ CPUFUNC(op_e1f8_0), 57848 }, /* ASLW */
{ CPUFUNC(op_e1f9_0), 57849 }, /* ASLW */
{ CPUFUNC(op_e2d0_0), 58064 }, /* LSRW */
{ CPUFUNC(op_e2d8_0), 58072 }, /* LSRW */
{ CPUFUNC(op_e2e0_0), 58080 }, /* LSRW */
{ CPUFUNC(op_e2e8_0), 58088 }, /* LSRW */
{ CPUFUNC(op_e2f0_0), 58096 }, /* LSRW */
{ CPUFUNC(op_e2f8_0), 58104 }, /* LSRW */
{ CPUFUNC(op_e2f9_0), 58105 }, /* LSRW */
{ CPUFUNC(op_e3d0_0), 58320 }, /* LSLW */
{ CPUFUNC(op_e3d8_0), 58328 }, /* LSLW */
{ CPUFUNC(op_e3e0_0), 58336 }, /* LSLW */
{ CPUFUNC(op_e3e8_0), 58344 }, /* LSLW */
{ CPUFUNC(op_e3f0_0), 58352 }, /* LSLW */
{ CPUFUNC(op_e3f8_0), 58360 }, /* LSLW */
{ CPUFUNC(op_e3f9_0), 58361 }, /* LSLW */
{ CPUFUNC(op_e4d0_0), 58576 }, /* ROXRW */
{ CPUFUNC(op_e4d8_0), 58584 }, /* ROXRW */
{ CPUFUNC(op_e4e0_0), 58592 }, /* ROXRW */
{ CPUFUNC(op_e4e8_0), 58600 }, /* ROXRW */
{ CPUFUNC(op_e4f0_0), 58608 }, /* ROXRW */
{ CPUFUNC(op_e4f8_0), 58616 }, /* ROXRW */
{ CPUFUNC(op_e4f9_0), 58617 }, /* ROXRW */
{ CPUFUNC(op_e5d0_0), 58832 }, /* ROXLW */
{ CPUFUNC(op_e5d8_0), 58840 }, /* ROXLW */
{ CPUFUNC(op_e5e0_0), 58848 }, /* ROXLW */
{ CPUFUNC(op_e5e8_0), 58856 }, /* ROXLW */
{ CPUFUNC(op_e5f0_0), 58864 }, /* ROXLW */
{ CPUFUNC(op_e5f8_0), 58872 }, /* ROXLW */
{ CPUFUNC(op_e5f9_0), 58873 }, /* ROXLW */
{ CPUFUNC(op_e6d0_0), 59088 }, /* RORW */
{ CPUFUNC(op_e6d8_0), 59096 }, /* RORW */
{ CPUFUNC(op_e6e0_0), 59104 }, /* RORW */
{ CPUFUNC(op_e6e8_0), 59112 }, /* RORW */
{ CPUFUNC(op_e6f0_0), 59120 }, /* RORW */
{ CPUFUNC(op_e6f8_0), 59128 }, /* RORW */
{ CPUFUNC(op_e6f9_0), 59129 }, /* RORW */
{ CPUFUNC(op_e7d0_0), 59344 }, /* ROLW */
{ CPUFUNC(op_e7d8_0), 59352 }, /* ROLW */
{ CPUFUNC(op_e7e0_0), 59360 }, /* ROLW */
{ CPUFUNC(op_e7e8_0), 59368 }, /* ROLW */
{ CPUFUNC(op_e7f0_0), 59376 }, /* ROLW */
{ CPUFUNC(op_e7f8_0), 59384 }, /* ROLW */
{ CPUFUNC(op_e7f9_0), 59385 }, /* ROLW */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8c0_0), 59584 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8d0_0), 59600 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8e8_0), 59624 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f0_0), 59632 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f8_0), 59640 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8f9_0), 59641 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fa_0), 59642 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e8fb_0), 59643 }, /* BFTST */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9c0_0), 59840 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9d0_0), 59856 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9e8_0), 59880 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f0_0), 59888 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f8_0), 59896 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9f9_0), 59897 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fa_0), 59898 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_e9fb_0), 59899 }, /* BFEXTU */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eac0_0), 60096 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ead0_0), 60112 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eae8_0), 60136 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf0_0), 60144 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf8_0), 60152 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eaf9_0), 60153 }, /* BFCHG */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebc0_0), 60352 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebd0_0), 60368 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebe8_0), 60392 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf0_0), 60400 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf8_0), 60408 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebf9_0), 60409 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfa_0), 60410 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ebfb_0), 60411 }, /* BFEXTS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecc0_0), 60608 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecd0_0), 60624 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ece8_0), 60648 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf0_0), 60656 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf8_0), 60664 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ecf9_0), 60665 }, /* BFCLR */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edc0_0), 60864 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edd0_0), 60880 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_ede8_0), 60904 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf0_0), 60912 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf8_0), 60920 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edf9_0), 60921 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfa_0), 60922 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_edfb_0), 60923 }, /* BFFFO */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eec0_0), 61120 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eed0_0), 61136 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eee8_0), 61160 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef0_0), 61168 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef8_0), 61176 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eef9_0), 61177 }, /* BFSET */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efc0_0), 61376 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efd0_0), 61392 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_efe8_0), 61416 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff0_0), 61424 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff8_0), 61432 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_eff9_0), 61433 }, /* BFINS */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f200_0), 61952 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f208_0), 61960 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f210_0), 61968 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f218_0), 61976 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f220_0), 61984 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f228_0), 61992 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f230_0), 62000 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f238_0), 62008 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f239_0), 62009 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23a_0), 62010 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23b_0), 62011 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f23c_0), 62012 }, /* FPP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f240_0), 62016 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f248_0), 62024 }, /* FDBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f250_0), 62032 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f258_0), 62040 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f260_0), 62048 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f268_0), 62056 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f270_0), 62064 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f278_0), 62072 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f279_0), 62073 }, /* FScc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27a_0), 62074 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27b_0), 62075 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f27c_0), 62076 }, /* FTRAPcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f280_0), 62080 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f2c0_0), 62144 }, /* FBcc */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f310_0), 62224 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f320_0), 62240 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f328_0), 62248 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f330_0), 62256 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f338_0), 62264 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f339_0), 62265 }, /* FSAVE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f350_0), 62288 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f358_0), 62296 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f368_0), 62312 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f370_0), 62320 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f378_0), 62328 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f379_0), 62329 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37a_0), 62330 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f37b_0), 62331 }, /* FRESTORE */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f408_0), 62472 }, /* CINVL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f410_0), 62480 }, /* CINVP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f418_0), 62488 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f419_0), 62489 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41a_0), 62490 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41b_0), 62491 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41c_0), 62492 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41d_0), 62493 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41e_0), 62494 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f41f_0), 62495 }, /* CINVA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f428_0), 62504 }, /* CPUSHL */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f430_0), 62512 }, /* CPUSHP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f438_0), 62520 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f439_0), 62521 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43a_0), 62522 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43b_0), 62523 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43c_0), 62524 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43d_0), 62525 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43e_0), 62526 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f43f_0), 62527 }, /* CPUSHA */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f500_0), 62720 }, /* MMUOP */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f600_0), 62976 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f608_0), 62984 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f610_0), 62992 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f618_0), 63000 }, /* MOVE16 */
#endif
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_f620_0), 63008 }, /* MOVE16 */
#endif
{ 0, 0 }};
#endif /* CPUEMU_0 */
#ifndef CPUEMU_68000_ONLY
const struct cputbl CPUFUNC(op_smalltbl_1)[] = {
{ CPUFUNC(op_0000_0), 0}, /* OR */
{ CPUFUNC(op_0010_0), 16}, /* OR */
{ CPUFUNC(op_0018_0), 24}, /* OR */
{ CPUFUNC(op_0020_0), 32}, /* OR */
{ CPUFUNC(op_0028_0), 40}, /* OR */
{ CPUFUNC(op_0030_0), 48}, /* OR */
{ CPUFUNC(op_0038_0), 56}, /* OR */
{ CPUFUNC(op_0039_0), 57}, /* OR */
{ CPUFUNC(op_003c_0), 60}, /* ORSR */
{ CPUFUNC(op_0040_0), 64}, /* OR */
{ CPUFUNC(op_0050_0), 80}, /* OR */
{ CPUFUNC(op_0058_0), 88}, /* OR */
{ CPUFUNC(op_0060_0), 96}, /* OR */
{ CPUFUNC(op_0068_0), 104}, /* OR */
{ CPUFUNC(op_0070_0), 112}, /* OR */
{ CPUFUNC(op_0078_0), 120}, /* OR */
{ CPUFUNC(op_0079_0), 121}, /* OR */
{ CPUFUNC(op_007c_0), 124}, /* ORSR */
{ CPUFUNC(op_0080_0), 128}, /* OR */
{ CPUFUNC(op_0090_0), 144}, /* OR */
{ CPUFUNC(op_0098_0), 152}, /* OR */
{ CPUFUNC(op_00a0_0), 160}, /* OR */
{ CPUFUNC(op_00a8_0), 168}, /* OR */
{ CPUFUNC(op_00b0_0), 176}, /* OR */
{ CPUFUNC(op_00b8_0), 184}, /* OR */
{ CPUFUNC(op_00b9_0), 185}, /* OR */
{ CPUFUNC(op_00d0_0), 208}, /* CHK2 */
{ CPUFUNC(op_00e8_0), 232}, /* CHK2 */
{ CPUFUNC(op_00f0_0), 240}, /* CHK2 */
{ CPUFUNC(op_00f8_0), 248}, /* CHK2 */
{ CPUFUNC(op_00f9_0), 249}, /* CHK2 */
{ CPUFUNC(op_00fa_0), 250}, /* CHK2 */
{ CPUFUNC(op_00fb_0), 251}, /* CHK2 */
{ CPUFUNC(op_0100_0), 256}, /* BTST */
{ CPUFUNC(op_0108_0), 264}, /* MVPMR */
{ CPUFUNC(op_0110_0), 272}, /* BTST */
{ CPUFUNC(op_0118_0), 280}, /* BTST */
{ CPUFUNC(op_0120_0), 288}, /* BTST */
{ CPUFUNC(op_0128_0), 296}, /* BTST */
{ CPUFUNC(op_0130_0), 304}, /* BTST */
{ CPUFUNC(op_0138_0), 312}, /* BTST */
{ CPUFUNC(op_0139_0), 313}, /* BTST */
{ CPUFUNC(op_013a_0), 314}, /* BTST */
{ CPUFUNC(op_013b_0), 315}, /* BTST */
{ CPUFUNC(op_013c_0), 316}, /* BTST */
{ CPUFUNC(op_0140_0), 320}, /* BCHG */
{ CPUFUNC(op_0148_0), 328}, /* MVPMR */
{ CPUFUNC(op_0150_0), 336}, /* BCHG */
{ CPUFUNC(op_0158_0), 344}, /* BCHG */
{ CPUFUNC(op_0160_0), 352}, /* BCHG */
{ CPUFUNC(op_0168_0), 360}, /* BCHG */
{ CPUFUNC(op_0170_0), 368}, /* BCHG */
{ CPUFUNC(op_0178_0), 376}, /* BCHG */
{ CPUFUNC(op_0179_0), 377}, /* BCHG */
{ CPUFUNC(op_017a_0), 378}, /* BCHG */
{ CPUFUNC(op_017b_0), 379}, /* BCHG */
{ CPUFUNC(op_0180_0), 384}, /* BCLR */
{ CPUFUNC(op_0188_0), 392}, /* MVPRM */
{ CPUFUNC(op_0190_0), 400}, /* BCLR */
{ CPUFUNC(op_0198_0), 408}, /* BCLR */
{ CPUFUNC(op_01a0_0), 416}, /* BCLR */
{ CPUFUNC(op_01a8_0), 424}, /* BCLR */
{ CPUFUNC(op_01b0_0), 432}, /* BCLR */
{ CPUFUNC(op_01b8_0), 440}, /* BCLR */
{ CPUFUNC(op_01b9_0), 441}, /* BCLR */
{ CPUFUNC(op_01ba_0), 442}, /* BCLR */
{ CPUFUNC(op_01bb_0), 443}, /* BCLR */
{ CPUFUNC(op_01c0_0), 448}, /* BSET */
{ CPUFUNC(op_01c8_0), 456}, /* MVPRM */
{ CPUFUNC(op_01d0_0), 464}, /* BSET */
{ CPUFUNC(op_01d8_0), 472}, /* BSET */
{ CPUFUNC(op_01e0_0), 480}, /* BSET */
{ CPUFUNC(op_01e8_0), 488}, /* BSET */
{ CPUFUNC(op_01f0_0), 496}, /* BSET */
{ CPUFUNC(op_01f8_0), 504}, /* BSET */
{ CPUFUNC(op_01f9_0), 505}, /* BSET */
{ CPUFUNC(op_01fa_0), 506}, /* BSET */
{ CPUFUNC(op_01fb_0), 507}, /* BSET */
{ CPUFUNC(op_0200_0), 512}, /* AND */
{ CPUFUNC(op_0210_0), 528}, /* AND */
{ CPUFUNC(op_0218_0), 536}, /* AND */
{ CPUFUNC(op_0220_0), 544}, /* AND */
{ CPUFUNC(op_0228_0), 552}, /* AND */
{ CPUFUNC(op_0230_0), 560}, /* AND */
{ CPUFUNC(op_0238_0), 568}, /* AND */
{ CPUFUNC(op_0239_0), 569}, /* AND */
{ CPUFUNC(op_023c_0), 572}, /* ANDSR */
{ CPUFUNC(op_0240_0), 576}, /* AND */
{ CPUFUNC(op_0250_0), 592}, /* AND */
{ CPUFUNC(op_0258_0), 600}, /* AND */
{ CPUFUNC(op_0260_0), 608}, /* AND */
{ CPUFUNC(op_0268_0), 616}, /* AND */
{ CPUFUNC(op_0270_0), 624}, /* AND */
{ CPUFUNC(op_0278_0), 632}, /* AND */
{ CPUFUNC(op_0279_0), 633}, /* AND */
{ CPUFUNC(op_027c_0), 636}, /* ANDSR */
{ CPUFUNC(op_0280_0), 640}, /* AND */
{ CPUFUNC(op_0290_0), 656}, /* AND */
{ CPUFUNC(op_0298_0), 664}, /* AND */
{ CPUFUNC(op_02a0_0), 672}, /* AND */
{ CPUFUNC(op_02a8_0), 680}, /* AND */
{ CPUFUNC(op_02b0_0), 688}, /* AND */
{ CPUFUNC(op_02b8_0), 696}, /* AND */
{ CPUFUNC(op_02b9_0), 697}, /* AND */
{ CPUFUNC(op_02d0_0), 720}, /* CHK2 */
{ CPUFUNC(op_02e8_0), 744}, /* CHK2 */
{ CPUFUNC(op_02f0_0), 752}, /* CHK2 */
{ CPUFUNC(op_02f8_0), 760}, /* CHK2 */
{ CPUFUNC(op_02f9_0), 761}, /* CHK2 */
{ CPUFUNC(op_02fa_0), 762}, /* CHK2 */
{ CPUFUNC(op_02fb_0), 763}, /* CHK2 */
{ CPUFUNC(op_0400_0), 1024}, /* SUB */
{ CPUFUNC(op_0410_0), 1040}, /* SUB */
{ CPUFUNC(op_0418_0), 1048}, /* SUB */
{ CPUFUNC(op_0420_0), 1056}, /* SUB */
{ CPUFUNC(op_0428_0), 1064}, /* SUB */
{ CPUFUNC(op_0430_0), 1072}, /* SUB */
{ CPUFUNC(op_0438_0), 1080}, /* SUB */
{ CPUFUNC(op_0439_0), 1081}, /* SUB */
{ CPUFUNC(op_0440_0), 1088}, /* SUB */
{ CPUFUNC(op_0450_0), 1104}, /* SUB */
{ CPUFUNC(op_0458_0), 1112}, /* SUB */
{ CPUFUNC(op_0460_0), 1120}, /* SUB */
{ CPUFUNC(op_0468_0), 1128}, /* SUB */
{ CPUFUNC(op_0470_0), 1136}, /* SUB */
{ CPUFUNC(op_0478_0), 1144}, /* SUB */
{ CPUFUNC(op_0479_0), 1145}, /* SUB */
{ CPUFUNC(op_0480_0), 1152}, /* SUB */
{ CPUFUNC(op_0490_0), 1168}, /* SUB */
{ CPUFUNC(op_0498_0), 1176}, /* SUB */
{ CPUFUNC(op_04a0_0), 1184}, /* SUB */
{ CPUFUNC(op_04a8_0), 1192}, /* SUB */
{ CPUFUNC(op_04b0_0), 1200}, /* SUB */
{ CPUFUNC(op_04b8_0), 1208}, /* SUB */
{ CPUFUNC(op_04b9_0), 1209}, /* SUB */
{ CPUFUNC(op_04d0_0), 1232}, /* CHK2 */
{ CPUFUNC(op_04e8_0), 1256}, /* CHK2 */
{ CPUFUNC(op_04f0_0), 1264}, /* CHK2 */
{ CPUFUNC(op_04f8_0), 1272}, /* CHK2 */
{ CPUFUNC(op_04f9_0), 1273}, /* CHK2 */
{ CPUFUNC(op_04fa_0), 1274}, /* CHK2 */
{ CPUFUNC(op_04fb_0), 1275}, /* CHK2 */
{ CPUFUNC(op_0600_0), 1536}, /* ADD */
{ CPUFUNC(op_0610_0), 1552}, /* ADD */
{ CPUFUNC(op_0618_0), 1560}, /* ADD */
{ CPUFUNC(op_0620_0), 1568}, /* ADD */
{ CPUFUNC(op_0628_0), 1576}, /* ADD */
{ CPUFUNC(op_0630_0), 1584}, /* ADD */
{ CPUFUNC(op_0638_0), 1592}, /* ADD */
{ CPUFUNC(op_0639_0), 1593}, /* ADD */
{ CPUFUNC(op_0640_0), 1600}, /* ADD */
{ CPUFUNC(op_0650_0), 1616}, /* ADD */
{ CPUFUNC(op_0658_0), 1624}, /* ADD */
{ CPUFUNC(op_0660_0), 1632}, /* ADD */
{ CPUFUNC(op_0668_0), 1640}, /* ADD */
{ CPUFUNC(op_0670_0), 1648}, /* ADD */
{ CPUFUNC(op_0678_0), 1656}, /* ADD */
{ CPUFUNC(op_0679_0), 1657}, /* ADD */
{ CPUFUNC(op_0680_0), 1664}, /* ADD */
{ CPUFUNC(op_0690_0), 1680}, /* ADD */
{ CPUFUNC(op_0698_0), 1688}, /* ADD */
{ CPUFUNC(op_06a0_0), 1696}, /* ADD */
{ CPUFUNC(op_06a8_0), 1704}, /* ADD */
{ CPUFUNC(op_06b0_0), 1712}, /* ADD */
{ CPUFUNC(op_06b8_0), 1720}, /* ADD */
{ CPUFUNC(op_06b9_0), 1721}, /* ADD */
{ CPUFUNC(op_06c0_0), 1728}, /* RTM */
{ CPUFUNC(op_06c8_0), 1736}, /* RTM */
{ CPUFUNC(op_06d0_0), 1744}, /* CALLM */
{ CPUFUNC(op_06e8_0), 1768}, /* CALLM */
{ CPUFUNC(op_06f0_0), 1776}, /* CALLM */
{ CPUFUNC(op_06f8_0), 1784}, /* CALLM */
{ CPUFUNC(op_06f9_0), 1785}, /* CALLM */
{ CPUFUNC(op_06fa_0), 1786}, /* CALLM */
{ CPUFUNC(op_06fb_0), 1787}, /* CALLM */
{ CPUFUNC(op_0800_0), 2048}, /* BTST */
{ CPUFUNC(op_0810_0), 2064}, /* BTST */
{ CPUFUNC(op_0818_0), 2072}, /* BTST */
{ CPUFUNC(op_0820_0), 2080}, /* BTST */
{ CPUFUNC(op_0828_0), 2088}, /* BTST */
{ CPUFUNC(op_0830_0), 2096}, /* BTST */
{ CPUFUNC(op_0838_0), 2104}, /* BTST */
{ CPUFUNC(op_0839_0), 2105}, /* BTST */
{ CPUFUNC(op_083a_0), 2106}, /* BTST */
{ CPUFUNC(op_083b_0), 2107}, /* BTST */
{ CPUFUNC(op_083c_0), 2108}, /* BTST */
{ CPUFUNC(op_0840_0), 2112}, /* BCHG */
{ CPUFUNC(op_0850_0), 2128}, /* BCHG */
{ CPUFUNC(op_0858_0), 2136}, /* BCHG */
{ CPUFUNC(op_0860_0), 2144}, /* BCHG */
{ CPUFUNC(op_0868_0), 2152}, /* BCHG */
{ CPUFUNC(op_0870_0), 2160}, /* BCHG */
{ CPUFUNC(op_0878_0), 2168}, /* BCHG */
{ CPUFUNC(op_0879_0), 2169}, /* BCHG */
{ CPUFUNC(op_087a_0), 2170}, /* BCHG */
{ CPUFUNC(op_087b_0), 2171}, /* BCHG */
{ CPUFUNC(op_0880_0), 2176}, /* BCLR */
{ CPUFUNC(op_0890_0), 2192}, /* BCLR */
{ CPUFUNC(op_0898_0), 2200}, /* BCLR */
{ CPUFUNC(op_08a0_0), 2208}, /* BCLR */
{ CPUFUNC(op_08a8_0), 2216}, /* BCLR */
{ CPUFUNC(op_08b0_0), 2224}, /* BCLR */
{ CPUFUNC(op_08b8_0), 2232}, /* BCLR */
{ CPUFUNC(op_08b9_0), 2233}, /* BCLR */
{ CPUFUNC(op_08ba_0), 2234}, /* BCLR */
{ CPUFUNC(op_08bb_0), 2235}, /* BCLR */
{ CPUFUNC(op_08c0_0), 2240}, /* BSET */
{ CPUFUNC(op_08d0_0), 2256}, /* BSET */
{ CPUFUNC(op_08d8_0), 2264}, /* BSET */
{ CPUFUNC(op_08e0_0), 2272}, /* BSET */
{ CPUFUNC(op_08e8_0), 2280}, /* BSET */
{ CPUFUNC(op_08f0_0), 2288}, /* BSET */
{ CPUFUNC(op_08f8_0), 2296}, /* BSET */
{ CPUFUNC(op_08f9_0), 2297}, /* BSET */
{ CPUFUNC(op_08fa_0), 2298}, /* BSET */
{ CPUFUNC(op_08fb_0), 2299}, /* BSET */
{ CPUFUNC(op_0a00_0), 2560}, /* EOR */
{ CPUFUNC(op_0a10_0), 2576}, /* EOR */
{ CPUFUNC(op_0a18_0), 2584}, /* EOR */
{ CPUFUNC(op_0a20_0), 2592}, /* EOR */
{ CPUFUNC(op_0a28_0), 2600}, /* EOR */
{ CPUFUNC(op_0a30_0), 2608}, /* EOR */
{ CPUFUNC(op_0a38_0), 2616}, /* EOR */
{ CPUFUNC(op_0a39_0), 2617}, /* EOR */
{ CPUFUNC(op_0a3c_0), 2620}, /* EORSR */
{ CPUFUNC(op_0a40_0), 2624}, /* EOR */
{ CPUFUNC(op_0a50_0), 2640}, /* EOR */
{ CPUFUNC(op_0a58_0), 2648}, /* EOR */
{ CPUFUNC(op_0a60_0), 2656}, /* EOR */
{ CPUFUNC(op_0a68_0), 2664}, /* EOR */
{ CPUFUNC(op_0a70_0), 2672}, /* EOR */
{ CPUFUNC(op_0a78_0), 2680}, /* EOR */
{ CPUFUNC(op_0a79_0), 2681}, /* EOR */
{ CPUFUNC(op_0a7c_0), 2684}, /* EORSR */
{ CPUFUNC(op_0a80_0), 2688}, /* EOR */
{ CPUFUNC(op_0a90_0), 2704}, /* EOR */
{ CPUFUNC(op_0a98_0), 2712}, /* EOR */
{ CPUFUNC(op_0aa0_0), 2720}, /* EOR */
{ CPUFUNC(op_0aa8_0), 2728}, /* EOR */
{ CPUFUNC(op_0ab0_0), 2736}, /* EOR */
{ CPUFUNC(op_0ab8_0), 2744}, /* EOR */
{ CPUFUNC(op_0ab9_0), 2745}, /* EOR */
{ CPUFUNC(op_0ad0_0), 2768}, /* CAS */
{ CPUFUNC(op_0ad8_0), 2776}, /* CAS */
{ CPUFUNC(op_0ae0_0), 2784}, /* CAS */
{ CPUFUNC(op_0ae8_0), 2792}, /* CAS */
{ CPUFUNC(op_0af0_0), 2800}, /* CAS */
{ CPUFUNC(op_0af8_0), 2808}, /* CAS */
{ CPUFUNC(op_0af9_0), 2809}, /* CAS */
{ CPUFUNC(op_0c00_0), 3072}, /* CMP */
{ CPUFUNC(op_0c10_0), 3088}, /* CMP */
{ CPUFUNC(op_0c18_0), 3096}, /* CMP */
{ CPUFUNC(op_0c20_0), 3104}, /* CMP */
{ CPUFUNC(op_0c28_0), 3112}, /* CMP */
{ CPUFUNC(op_0c30_0), 3120}, /* CMP */
{ CPUFUNC(op_0c38_0), 3128}, /* CMP */
{ CPUFUNC(op_0c39_0), 3129}, /* CMP */
{ CPUFUNC(op_0c3a_0), 3130}, /* CMP */
{ CPUFUNC(op_0c3b_0), 3131}, /* CMP */
{ CPUFUNC(op_0c40_0), 3136}, /* CMP */
{ CPUFUNC(op_0c50_0), 3152}, /* CMP */
{ CPUFUNC(op_0c58_0), 3160}, /* CMP */
{ CPUFUNC(op_0c60_0), 3168}, /* CMP */
{ CPUFUNC(op_0c68_0), 3176}, /* CMP */
{ CPUFUNC(op_0c70_0), 3184}, /* CMP */
{ CPUFUNC(op_0c78_0), 3192}, /* CMP */
{ CPUFUNC(op_0c79_0), 3193}, /* CMP */
{ CPUFUNC(op_0c7a_0), 3194}, /* CMP */
{ CPUFUNC(op_0c7b_0), 3195}, /* CMP */
{ CPUFUNC(op_0c80_0), 3200}, /* CMP */
{ CPUFUNC(op_0c90_0), 3216}, /* CMP */
{ CPUFUNC(op_0c98_0), 3224}, /* CMP */
{ CPUFUNC(op_0ca0_0), 3232}, /* CMP */
{ CPUFUNC(op_0ca8_0), 3240}, /* CMP */
{ CPUFUNC(op_0cb0_0), 3248}, /* CMP */
{ CPUFUNC(op_0cb8_0), 3256}, /* CMP */
{ CPUFUNC(op_0cb9_0), 3257}, /* CMP */
{ CPUFUNC(op_0cba_0), 3258}, /* CMP */
{ CPUFUNC(op_0cbb_0), 3259}, /* CMP */
{ CPUFUNC(op_0cd0_0), 3280}, /* CAS */
{ CPUFUNC(op_0cd8_0), 3288}, /* CAS */
{ CPUFUNC(op_0ce0_0), 3296}, /* CAS */
{ CPUFUNC(op_0ce8_0), 3304}, /* CAS */
{ CPUFUNC(op_0cf0_0), 3312}, /* CAS */
{ CPUFUNC(op_0cf8_0), 3320}, /* CAS */
{ CPUFUNC(op_0cf9_0), 3321}, /* CAS */
{ CPUFUNC(op_0cfc_0), 3324}, /* CAS2 */
{ CPUFUNC(op_0e10_0), 3600}, /* MOVES */
{ CPUFUNC(op_0e18_0), 3608}, /* MOVES */
{ CPUFUNC(op_0e20_0), 3616}, /* MOVES */
{ CPUFUNC(op_0e28_0), 3624}, /* MOVES */
{ CPUFUNC(op_0e30_0), 3632}, /* MOVES */
{ CPUFUNC(op_0e38_0), 3640}, /* MOVES */
{ CPUFUNC(op_0e39_0), 3641}, /* MOVES */
{ CPUFUNC(op_0e50_0), 3664}, /* MOVES */
{ CPUFUNC(op_0e58_0), 3672}, /* MOVES */
{ CPUFUNC(op_0e60_0), 3680}, /* MOVES */
{ CPUFUNC(op_0e68_0), 3688}, /* MOVES */
{ CPUFUNC(op_0e70_0), 3696}, /* MOVES */
{ CPUFUNC(op_0e78_0), 3704}, /* MOVES */
{ CPUFUNC(op_0e79_0), 3705}, /* MOVES */
{ CPUFUNC(op_0e90_0), 3728}, /* MOVES */
{ CPUFUNC(op_0e98_0), 3736}, /* MOVES */
{ CPUFUNC(op_0ea0_0), 3744}, /* MOVES */
{ CPUFUNC(op_0ea8_0), 3752}, /* MOVES */
{ CPUFUNC(op_0eb0_0), 3760}, /* MOVES */
{ CPUFUNC(op_0eb8_0), 3768}, /* MOVES */
{ CPUFUNC(op_0eb9_0), 3769}, /* MOVES */
{ CPUFUNC(op_0ed0_0), 3792}, /* CAS */
{ CPUFUNC(op_0ed8_0), 3800}, /* CAS */
{ CPUFUNC(op_0ee0_0), 3808}, /* CAS */
{ CPUFUNC(op_0ee8_0), 3816}, /* CAS */
{ CPUFUNC(op_0ef0_0), 3824}, /* CAS */
{ CPUFUNC(op_0ef8_0), 3832}, /* CAS */
{ CPUFUNC(op_0ef9_0), 3833}, /* CAS */
{ CPUFUNC(op_0efc_0), 3836}, /* CAS2 */
{ CPUFUNC(op_1000_0), 4096}, /* MOVE */
{ CPUFUNC(op_1010_0), 4112}, /* MOVE */
{ CPUFUNC(op_1018_0), 4120}, /* MOVE */
{ CPUFUNC(op_1020_0), 4128}, /* MOVE */
{ CPUFUNC(op_1028_0), 4136}, /* MOVE */
{ CPUFUNC(op_1030_0), 4144}, /* MOVE */
{ CPUFUNC(op_1038_0), 4152}, /* MOVE */
{ CPUFUNC(op_1039_0), 4153}, /* MOVE */
{ CPUFUNC(op_103a_0), 4154}, /* MOVE */
{ CPUFUNC(op_103b_0), 4155}, /* MOVE */
{ CPUFUNC(op_103c_0), 4156}, /* MOVE */
{ CPUFUNC(op_1080_0), 4224}, /* MOVE */
{ CPUFUNC(op_1090_0), 4240}, /* MOVE */
{ CPUFUNC(op_1098_0), 4248}, /* MOVE */
{ CPUFUNC(op_10a0_0), 4256}, /* MOVE */
{ CPUFUNC(op_10a8_0), 4264}, /* MOVE */
{ CPUFUNC(op_10b0_0), 4272}, /* MOVE */
{ CPUFUNC(op_10b8_0), 4280}, /* MOVE */
{ CPUFUNC(op_10b9_0), 4281}, /* MOVE */
{ CPUFUNC(op_10ba_0), 4282}, /* MOVE */
{ CPUFUNC(op_10bb_0), 4283}, /* MOVE */
{ CPUFUNC(op_10bc_0), 4284}, /* MOVE */
{ CPUFUNC(op_10c0_0), 4288}, /* MOVE */
{ CPUFUNC(op_10d0_0), 4304}, /* MOVE */
{ CPUFUNC(op_10d8_0), 4312}, /* MOVE */
{ CPUFUNC(op_10e0_0), 4320}, /* MOVE */
{ CPUFUNC(op_10e8_0), 4328}, /* MOVE */
{ CPUFUNC(op_10f0_0), 4336}, /* MOVE */
{ CPUFUNC(op_10f8_0), 4344}, /* MOVE */
{ CPUFUNC(op_10f9_0), 4345}, /* MOVE */
{ CPUFUNC(op_10fa_0), 4346}, /* MOVE */
{ CPUFUNC(op_10fb_0), 4347}, /* MOVE */
{ CPUFUNC(op_10fc_0), 4348}, /* MOVE */
{ CPUFUNC(op_1100_0), 4352}, /* MOVE */
{ CPUFUNC(op_1110_0), 4368}, /* MOVE */
{ CPUFUNC(op_1118_0), 4376}, /* MOVE */
{ CPUFUNC(op_1120_0), 4384}, /* MOVE */
{ CPUFUNC(op_1128_0), 4392}, /* MOVE */
{ CPUFUNC(op_1130_0), 4400}, /* MOVE */
{ CPUFUNC(op_1138_0), 4408}, /* MOVE */
{ CPUFUNC(op_1139_0), 4409}, /* MOVE */
{ CPUFUNC(op_113a_0), 4410}, /* MOVE */
{ CPUFUNC(op_113b_0), 4411}, /* MOVE */
{ CPUFUNC(op_113c_0), 4412}, /* MOVE */
{ CPUFUNC(op_1140_0), 4416}, /* MOVE */
{ CPUFUNC(op_1150_0), 4432}, /* MOVE */
{ CPUFUNC(op_1158_0), 4440}, /* MOVE */
{ CPUFUNC(op_1160_0), 4448}, /* MOVE */
{ CPUFUNC(op_1168_0), 4456}, /* MOVE */
{ CPUFUNC(op_1170_0), 4464}, /* MOVE */
{ CPUFUNC(op_1178_0), 4472}, /* MOVE */
{ CPUFUNC(op_1179_0), 4473}, /* MOVE */
{ CPUFUNC(op_117a_0), 4474}, /* MOVE */
{ CPUFUNC(op_117b_0), 4475}, /* MOVE */
{ CPUFUNC(op_117c_0), 4476}, /* MOVE */
{ CPUFUNC(op_1180_0), 4480}, /* MOVE */
{ CPUFUNC(op_1190_0), 4496}, /* MOVE */
{ CPUFUNC(op_1198_0), 4504}, /* MOVE */
{ CPUFUNC(op_11a0_0), 4512}, /* MOVE */
{ CPUFUNC(op_11a8_0), 4520}, /* MOVE */
{ CPUFUNC(op_11b0_0), 4528}, /* MOVE */
{ CPUFUNC(op_11b8_0), 4536}, /* MOVE */
{ CPUFUNC(op_11b9_0), 4537}, /* MOVE */
{ CPUFUNC(op_11ba_0), 4538}, /* MOVE */
{ CPUFUNC(op_11bb_0), 4539}, /* MOVE */
{ CPUFUNC(op_11bc_0), 4540}, /* MOVE */
{ CPUFUNC(op_11c0_0), 4544}, /* MOVE */
{ CPUFUNC(op_11d0_0), 4560}, /* MOVE */
{ CPUFUNC(op_11d8_0), 4568}, /* MOVE */
{ CPUFUNC(op_11e0_0), 4576}, /* MOVE */
{ CPUFUNC(op_11e8_0), 4584}, /* MOVE */
{ CPUFUNC(op_11f0_0), 4592}, /* MOVE */
{ CPUFUNC(op_11f8_0), 4600}, /* MOVE */
{ CPUFUNC(op_11f9_0), 4601}, /* MOVE */
{ CPUFUNC(op_11fa_0), 4602}, /* MOVE */
{ CPUFUNC(op_11fb_0), 4603}, /* MOVE */
{ CPUFUNC(op_11fc_0), 4604}, /* MOVE */
{ CPUFUNC(op_13c0_0), 5056}, /* MOVE */
{ CPUFUNC(op_13d0_0), 5072}, /* MOVE */
{ CPUFUNC(op_13d8_0), 5080}, /* MOVE */
{ CPUFUNC(op_13e0_0), 5088}, /* MOVE */
{ CPUFUNC(op_13e8_0), 5096}, /* MOVE */
{ CPUFUNC(op_13f0_0), 5104}, /* MOVE */
{ CPUFUNC(op_13f8_0), 5112}, /* MOVE */
{ CPUFUNC(op_13f9_0), 5113}, /* MOVE */
{ CPUFUNC(op_13fa_0), 5114}, /* MOVE */
{ CPUFUNC(op_13fb_0), 5115}, /* MOVE */
{ CPUFUNC(op_13fc_0), 5116}, /* MOVE */
{ CPUFUNC(op_2000_0), 8192}, /* MOVE */
{ CPUFUNC(op_2008_0), 8200}, /* MOVE */
{ CPUFUNC(op_2010_0), 8208}, /* MOVE */
{ CPUFUNC(op_2018_0), 8216}, /* MOVE */
{ CPUFUNC(op_2020_0), 8224}, /* MOVE */
{ CPUFUNC(op_2028_0), 8232}, /* MOVE */
{ CPUFUNC(op_2030_0), 8240}, /* MOVE */
{ CPUFUNC(op_2038_0), 8248}, /* MOVE */
{ CPUFUNC(op_2039_0), 8249}, /* MOVE */
{ CPUFUNC(op_203a_0), 8250}, /* MOVE */
{ CPUFUNC(op_203b_0), 8251}, /* MOVE */
{ CPUFUNC(op_203c_0), 8252}, /* MOVE */
{ CPUFUNC(op_2040_0), 8256}, /* MOVEA */
{ CPUFUNC(op_2048_0), 8264}, /* MOVEA */
{ CPUFUNC(op_2050_0), 8272}, /* MOVEA */
{ CPUFUNC(op_2058_0), 8280}, /* MOVEA */
{ CPUFUNC(op_2060_0), 8288}, /* MOVEA */
{ CPUFUNC(op_2068_0), 8296}, /* MOVEA */
{ CPUFUNC(op_2070_0), 8304}, /* MOVEA */
{ CPUFUNC(op_2078_0), 8312}, /* MOVEA */
{ CPUFUNC(op_2079_0), 8313}, /* MOVEA */
{ CPUFUNC(op_207a_0), 8314}, /* MOVEA */
{ CPUFUNC(op_207b_0), 8315}, /* MOVEA */
{ CPUFUNC(op_207c_0), 8316}, /* MOVEA */
{ CPUFUNC(op_2080_0), 8320}, /* MOVE */
{ CPUFUNC(op_2088_0), 8328}, /* MOVE */
{ CPUFUNC(op_2090_0), 8336}, /* MOVE */
{ CPUFUNC(op_2098_0), 8344}, /* MOVE */
{ CPUFUNC(op_20a0_0), 8352}, /* MOVE */
{ CPUFUNC(op_20a8_0), 8360}, /* MOVE */
{ CPUFUNC(op_20b0_0), 8368}, /* MOVE */
{ CPUFUNC(op_20b8_0), 8376}, /* MOVE */
{ CPUFUNC(op_20b9_0), 8377}, /* MOVE */
{ CPUFUNC(op_20ba_0), 8378}, /* MOVE */
{ CPUFUNC(op_20bb_0), 8379}, /* MOVE */
{ CPUFUNC(op_20bc_0), 8380}, /* MOVE */
{ CPUFUNC(op_20c0_0), 8384}, /* MOVE */
{ CPUFUNC(op_20c8_0), 8392}, /* MOVE */
{ CPUFUNC(op_20d0_0), 8400}, /* MOVE */
{ CPUFUNC(op_20d8_0), 8408}, /* MOVE */
{ CPUFUNC(op_20e0_0), 8416}, /* MOVE */
{ CPUFUNC(op_20e8_0), 8424}, /* MOVE */
{ CPUFUNC(op_20f0_0), 8432}, /* MOVE */
{ CPUFUNC(op_20f8_0), 8440}, /* MOVE */
{ CPUFUNC(op_20f9_0), 8441}, /* MOVE */
{ CPUFUNC(op_20fa_0), 8442}, /* MOVE */
{ CPUFUNC(op_20fb_0), 8443}, /* MOVE */
{ CPUFUNC(op_20fc_0), 8444}, /* MOVE */
{ CPUFUNC(op_2100_0), 8448}, /* MOVE */
{ CPUFUNC(op_2108_0), 8456}, /* MOVE */
{ CPUFUNC(op_2110_0), 8464}, /* MOVE */
{ CPUFUNC(op_2118_0), 8472}, /* MOVE */
{ CPUFUNC(op_2120_0), 8480}, /* MOVE */
{ CPUFUNC(op_2128_0), 8488}, /* MOVE */
{ CPUFUNC(op_2130_0), 8496}, /* MOVE */
{ CPUFUNC(op_2138_0), 8504}, /* MOVE */
{ CPUFUNC(op_2139_0), 8505}, /* MOVE */
{ CPUFUNC(op_213a_0), 8506}, /* MOVE */
{ CPUFUNC(op_213b_0), 8507}, /* MOVE */
{ CPUFUNC(op_213c_0), 8508}, /* MOVE */
{ CPUFUNC(op_2140_0), 8512}, /* MOVE */
{ CPUFUNC(op_2148_0), 8520}, /* MOVE */
{ CPUFUNC(op_2150_0), 8528}, /* MOVE */
{ CPUFUNC(op_2158_0), 8536}, /* MOVE */
{ CPUFUNC(op_2160_0), 8544}, /* MOVE */
{ CPUFUNC(op_2168_0), 8552}, /* MOVE */
{ CPUFUNC(op_2170_0), 8560}, /* MOVE */
{ CPUFUNC(op_2178_0), 8568}, /* MOVE */
{ CPUFUNC(op_2179_0), 8569}, /* MOVE */
{ CPUFUNC(op_217a_0), 8570}, /* MOVE */
{ CPUFUNC(op_217b_0), 8571}, /* MOVE */
{ CPUFUNC(op_217c_0), 8572}, /* MOVE */
{ CPUFUNC(op_2180_0), 8576}, /* MOVE */
{ CPUFUNC(op_2188_0), 8584}, /* MOVE */
{ CPUFUNC(op_2190_0), 8592}, /* MOVE */
{ CPUFUNC(op_2198_0), 8600}, /* MOVE */
{ CPUFUNC(op_21a0_0), 8608}, /* MOVE */
{ CPUFUNC(op_21a8_0), 8616}, /* MOVE */
{ CPUFUNC(op_21b0_0), 8624}, /* MOVE */
{ CPUFUNC(op_21b8_0), 8632}, /* MOVE */
{ CPUFUNC(op_21b9_0), 8633}, /* MOVE */
{ CPUFUNC(op_21ba_0), 8634}, /* MOVE */
{ CPUFUNC(op_21bb_0), 8635}, /* MOVE */
{ CPUFUNC(op_21bc_0), 8636}, /* MOVE */
{ CPUFUNC(op_21c0_0), 8640}, /* MOVE */
{ CPUFUNC(op_21c8_0), 8648}, /* MOVE */
{ CPUFUNC(op_21d0_0), 8656}, /* MOVE */
{ CPUFUNC(op_21d8_0), 8664}, /* MOVE */
{ CPUFUNC(op_21e0_0), 8672}, /* MOVE */
{ CPUFUNC(op_21e8_0), 8680}, /* MOVE */
{ CPUFUNC(op_21f0_0), 8688}, /* MOVE */
{ CPUFUNC(op_21f8_0), 8696}, /* MOVE */
{ CPUFUNC(op_21f9_0), 8697}, /* MOVE */
{ CPUFUNC(op_21fa_0), 8698}, /* MOVE */
{ CPUFUNC(op_21fb_0), 8699}, /* MOVE */
{ CPUFUNC(op_21fc_0), 8700}, /* MOVE */
{ CPUFUNC(op_23c0_0), 9152}, /* MOVE */
{ CPUFUNC(op_23c8_0), 9160}, /* MOVE */
{ CPUFUNC(op_23d0_0), 9168}, /* MOVE */
{ CPUFUNC(op_23d8_0), 9176}, /* MOVE */
{ CPUFUNC(op_23e0_0), 9184}, /* MOVE */
{ CPUFUNC(op_23e8_0), 9192}, /* MOVE */
{ CPUFUNC(op_23f0_0), 9200}, /* MOVE */
{ CPUFUNC(op_23f8_0), 9208}, /* MOVE */
{ CPUFUNC(op_23f9_0), 9209}, /* MOVE */
{ CPUFUNC(op_23fa_0), 9210}, /* MOVE */
{ CPUFUNC(op_23fb_0), 9211}, /* MOVE */
{ CPUFUNC(op_23fc_0), 9212}, /* MOVE */
{ CPUFUNC(op_3000_0), 12288}, /* MOVE */
{ CPUFUNC(op_3008_0), 12296}, /* MOVE */
{ CPUFUNC(op_3010_0), 12304}, /* MOVE */
{ CPUFUNC(op_3018_0), 12312}, /* MOVE */
{ CPUFUNC(op_3020_0), 12320}, /* MOVE */
{ CPUFUNC(op_3028_0), 12328}, /* MOVE */
{ CPUFUNC(op_3030_0), 12336}, /* MOVE */
{ CPUFUNC(op_3038_0), 12344}, /* MOVE */
{ CPUFUNC(op_3039_0), 12345}, /* MOVE */
{ CPUFUNC(op_303a_0), 12346}, /* MOVE */
{ CPUFUNC(op_303b_0), 12347}, /* MOVE */
{ CPUFUNC(op_303c_0), 12348}, /* MOVE */
{ CPUFUNC(op_3040_0), 12352}, /* MOVEA */
{ CPUFUNC(op_3048_0), 12360}, /* MOVEA */
{ CPUFUNC(op_3050_0), 12368}, /* MOVEA */
{ CPUFUNC(op_3058_0), 12376}, /* MOVEA */
{ CPUFUNC(op_3060_0), 12384}, /* MOVEA */
{ CPUFUNC(op_3068_0), 12392}, /* MOVEA */
{ CPUFUNC(op_3070_0), 12400}, /* MOVEA */
{ CPUFUNC(op_3078_0), 12408}, /* MOVEA */
{ CPUFUNC(op_3079_0), 12409}, /* MOVEA */
{ CPUFUNC(op_307a_0), 12410}, /* MOVEA */
{ CPUFUNC(op_307b_0), 12411}, /* MOVEA */
{ CPUFUNC(op_307c_0), 12412}, /* MOVEA */
{ CPUFUNC(op_3080_0), 12416}, /* MOVE */
{ CPUFUNC(op_3088_0), 12424}, /* MOVE */
{ CPUFUNC(op_3090_0), 12432}, /* MOVE */
{ CPUFUNC(op_3098_0), 12440}, /* MOVE */
{ CPUFUNC(op_30a0_0), 12448}, /* MOVE */
{ CPUFUNC(op_30a8_0), 12456}, /* MOVE */
{ CPUFUNC(op_30b0_0), 12464}, /* MOVE */
{ CPUFUNC(op_30b8_0), 12472}, /* MOVE */
{ CPUFUNC(op_30b9_0), 12473}, /* MOVE */
{ CPUFUNC(op_30ba_0), 12474}, /* MOVE */
{ CPUFUNC(op_30bb_0), 12475}, /* MOVE */
{ CPUFUNC(op_30bc_0), 12476}, /* MOVE */
{ CPUFUNC(op_30c0_0), 12480}, /* MOVE */
{ CPUFUNC(op_30c8_0), 12488}, /* MOVE */
{ CPUFUNC(op_30d0_0), 12496}, /* MOVE */
{ CPUFUNC(op_30d8_0), 12504}, /* MOVE */
{ CPUFUNC(op_30e0_0), 12512}, /* MOVE */
{ CPUFUNC(op_30e8_0), 12520}, /* MOVE */
{ CPUFUNC(op_30f0_0), 12528}, /* MOVE */
{ CPUFUNC(op_30f8_0), 12536}, /* MOVE */
{ CPUFUNC(op_30f9_0), 12537}, /* MOVE */
{ CPUFUNC(op_30fa_0), 12538}, /* MOVE */
{ CPUFUNC(op_30fb_0), 12539}, /* MOVE */
{ CPUFUNC(op_30fc_0), 12540}, /* MOVE */
{ CPUFUNC(op_3100_0), 12544}, /* MOVE */
{ CPUFUNC(op_3108_0), 12552}, /* MOVE */
{ CPUFUNC(op_3110_0), 12560}, /* MOVE */
{ CPUFUNC(op_3118_0), 12568}, /* MOVE */
{ CPUFUNC(op_3120_0), 12576}, /* MOVE */
{ CPUFUNC(op_3128_0), 12584}, /* MOVE */
{ CPUFUNC(op_3130_0), 12592}, /* MOVE */
{ CPUFUNC(op_3138_0), 12600}, /* MOVE */
{ CPUFUNC(op_3139_0), 12601}, /* MOVE */
{ CPUFUNC(op_313a_0), 12602}, /* MOVE */
{ CPUFUNC(op_313b_0), 12603}, /* MOVE */
{ CPUFUNC(op_313c_0), 12604}, /* MOVE */
{ CPUFUNC(op_3140_0), 12608}, /* MOVE */
{ CPUFUNC(op_3148_0), 12616}, /* MOVE */
{ CPUFUNC(op_3150_0), 12624}, /* MOVE */
{ CPUFUNC(op_3158_0), 12632}, /* MOVE */
{ CPUFUNC(op_3160_0), 12640}, /* MOVE */
{ CPUFUNC(op_3168_0), 12648}, /* MOVE */
{ CPUFUNC(op_3170_0), 12656}, /* MOVE */
{ CPUFUNC(op_3178_0), 12664}, /* MOVE */
{ CPUFUNC(op_3179_0), 12665}, /* MOVE */
{ CPUFUNC(op_317a_0), 12666}, /* MOVE */
{ CPUFUNC(op_317b_0), 12667}, /* MOVE */
{ CPUFUNC(op_317c_0), 12668}, /* MOVE */
{ CPUFUNC(op_3180_0), 12672}, /* MOVE */
{ CPUFUNC(op_3188_0), 12680}, /* MOVE */
{ CPUFUNC(op_3190_0), 12688}, /* MOVE */
{ CPUFUNC(op_3198_0), 12696}, /* MOVE */
{ CPUFUNC(op_31a0_0), 12704}, /* MOVE */
{ CPUFUNC(op_31a8_0), 12712}, /* MOVE */
{ CPUFUNC(op_31b0_0), 12720}, /* MOVE */
{ CPUFUNC(op_31b8_0), 12728}, /* MOVE */
{ CPUFUNC(op_31b9_0), 12729}, /* MOVE */
{ CPUFUNC(op_31ba_0), 12730}, /* MOVE */
{ CPUFUNC(op_31bb_0), 12731}, /* MOVE */
{ CPUFUNC(op_31bc_0), 12732}, /* MOVE */
{ CPUFUNC(op_31c0_0), 12736}, /* MOVE */
{ CPUFUNC(op_31c8_0), 12744}, /* MOVE */
{ CPUFUNC(op_31d0_0), 12752}, /* MOVE */
{ CPUFUNC(op_31d8_0), 12760}, /* MOVE */
{ CPUFUNC(op_31e0_0), 12768}, /* MOVE */
{ CPUFUNC(op_31e8_0), 12776}, /* MOVE */
{ CPUFUNC(op_31f0_0), 12784}, /* MOVE */
{ CPUFUNC(op_31f8_0), 12792}, /* MOVE */
{ CPUFUNC(op_31f9_0), 12793}, /* MOVE */
{ CPUFUNC(op_31fa_0), 12794}, /* MOVE */
{ CPUFUNC(op_31fb_0), 12795}, /* MOVE */
{ CPUFUNC(op_31fc_0), 12796}, /* MOVE */
{ CPUFUNC(op_33c0_0), 13248}, /* MOVE */
{ CPUFUNC(op_33c8_0), 13256}, /* MOVE */
{ CPUFUNC(op_33d0_0), 13264}, /* MOVE */
{ CPUFUNC(op_33d8_0), 13272}, /* MOVE */
{ CPUFUNC(op_33e0_0), 13280}, /* MOVE */
{ CPUFUNC(op_33e8_0), 13288}, /* MOVE */
{ CPUFUNC(op_33f0_0), 13296}, /* MOVE */
{ CPUFUNC(op_33f8_0), 13304}, /* MOVE */
{ CPUFUNC(op_33f9_0), 13305}, /* MOVE */
{ CPUFUNC(op_33fa_0), 13306}, /* MOVE */
{ CPUFUNC(op_33fb_0), 13307}, /* MOVE */
{ CPUFUNC(op_33fc_0), 13308}, /* MOVE */
{ CPUFUNC(op_4000_0), 16384}, /* NEGX */
{ CPUFUNC(op_4010_0), 16400}, /* NEGX */
{ CPUFUNC(op_4018_0), 16408}, /* NEGX */
{ CPUFUNC(op_4020_0), 16416}, /* NEGX */
{ CPUFUNC(op_4028_0), 16424}, /* NEGX */
{ CPUFUNC(op_4030_0), 16432}, /* NEGX */
{ CPUFUNC(op_4038_0), 16440}, /* NEGX */
{ CPUFUNC(op_4039_0), 16441}, /* NEGX */
{ CPUFUNC(op_4040_0), 16448}, /* NEGX */
{ CPUFUNC(op_4050_0), 16464}, /* NEGX */
{ CPUFUNC(op_4058_0), 16472}, /* NEGX */
{ CPUFUNC(op_4060_0), 16480}, /* NEGX */
{ CPUFUNC(op_4068_0), 16488}, /* NEGX */
{ CPUFUNC(op_4070_0), 16496}, /* NEGX */
{ CPUFUNC(op_4078_0), 16504}, /* NEGX */
{ CPUFUNC(op_4079_0), 16505}, /* NEGX */
{ CPUFUNC(op_4080_0), 16512}, /* NEGX */
{ CPUFUNC(op_4090_0), 16528}, /* NEGX */
{ CPUFUNC(op_4098_0), 16536}, /* NEGX */
{ CPUFUNC(op_40a0_0), 16544}, /* NEGX */
{ CPUFUNC(op_40a8_0), 16552}, /* NEGX */
{ CPUFUNC(op_40b0_0), 16560}, /* NEGX */
{ CPUFUNC(op_40b8_0), 16568}, /* NEGX */
{ CPUFUNC(op_40b9_0), 16569}, /* NEGX */
{ CPUFUNC(op_40c0_0), 16576}, /* MVSR2 */
{ CPUFUNC(op_40d0_0), 16592}, /* MVSR2 */
{ CPUFUNC(op_40d8_0), 16600}, /* MVSR2 */
{ CPUFUNC(op_40e0_0), 16608}, /* MVSR2 */
{ CPUFUNC(op_40e8_0), 16616}, /* MVSR2 */
{ CPUFUNC(op_40f0_0), 16624}, /* MVSR2 */
{ CPUFUNC(op_40f8_0), 16632}, /* MVSR2 */
{ CPUFUNC(op_40f9_0), 16633}, /* MVSR2 */
{ CPUFUNC(op_4100_0), 16640}, /* CHK */
{ CPUFUNC(op_4110_0), 16656}, /* CHK */
{ CPUFUNC(op_4118_0), 16664}, /* CHK */
{ CPUFUNC(op_4120_0), 16672}, /* CHK */
{ CPUFUNC(op_4128_0), 16680}, /* CHK */
{ CPUFUNC(op_4130_0), 16688}, /* CHK */
{ CPUFUNC(op_4138_0), 16696}, /* CHK */
{ CPUFUNC(op_4139_0), 16697}, /* CHK */
{ CPUFUNC(op_413a_0), 16698}, /* CHK */
{ CPUFUNC(op_413b_0), 16699}, /* CHK */
{ CPUFUNC(op_413c_0), 16700}, /* CHK */
{ CPUFUNC(op_4180_0), 16768}, /* CHK */
{ CPUFUNC(op_4190_0), 16784}, /* CHK */
{ CPUFUNC(op_4198_0), 16792}, /* CHK */
{ CPUFUNC(op_41a0_0), 16800}, /* CHK */
{ CPUFUNC(op_41a8_0), 16808}, /* CHK */
{ CPUFUNC(op_41b0_0), 16816}, /* CHK */
{ CPUFUNC(op_41b8_0), 16824}, /* CHK */
{ CPUFUNC(op_41b9_0), 16825}, /* CHK */
{ CPUFUNC(op_41ba_0), 16826}, /* CHK */
{ CPUFUNC(op_41bb_0), 16827}, /* CHK */
{ CPUFUNC(op_41bc_0), 16828}, /* CHK */
{ CPUFUNC(op_41d0_0), 16848}, /* LEA */
{ CPUFUNC(op_41e8_0), 16872}, /* LEA */
{ CPUFUNC(op_41f0_0), 16880}, /* LEA */
{ CPUFUNC(op_41f8_0), 16888}, /* LEA */
{ CPUFUNC(op_41f9_0), 16889}, /* LEA */
{ CPUFUNC(op_41fa_0), 16890}, /* LEA */
{ CPUFUNC(op_41fb_0), 16891}, /* LEA */
{ CPUFUNC(op_4200_0), 16896}, /* CLR */
{ CPUFUNC(op_4210_0), 16912}, /* CLR */
{ CPUFUNC(op_4218_0), 16920}, /* CLR */
{ CPUFUNC(op_4220_0), 16928}, /* CLR */
{ CPUFUNC(op_4228_0), 16936}, /* CLR */
{ CPUFUNC(op_4230_0), 16944}, /* CLR */
{ CPUFUNC(op_4238_0), 16952}, /* CLR */
{ CPUFUNC(op_4239_0), 16953}, /* CLR */
{ CPUFUNC(op_4240_0), 16960}, /* CLR */
{ CPUFUNC(op_4250_0), 16976}, /* CLR */
{ CPUFUNC(op_4258_0), 16984}, /* CLR */
{ CPUFUNC(op_4260_0), 16992}, /* CLR */
{ CPUFUNC(op_4268_0), 17000}, /* CLR */
{ CPUFUNC(op_4270_0), 17008}, /* CLR */
{ CPUFUNC(op_4278_0), 17016}, /* CLR */
{ CPUFUNC(op_4279_0), 17017}, /* CLR */
{ CPUFUNC(op_4280_0), 17024}, /* CLR */
{ CPUFUNC(op_4290_0), 17040}, /* CLR */
{ CPUFUNC(op_4298_0), 17048}, /* CLR */
{ CPUFUNC(op_42a0_0), 17056}, /* CLR */
{ CPUFUNC(op_42a8_0), 17064}, /* CLR */
{ CPUFUNC(op_42b0_0), 17072}, /* CLR */
{ CPUFUNC(op_42b8_0), 17080}, /* CLR */
{ CPUFUNC(op_42b9_0), 17081}, /* CLR */
{ CPUFUNC(op_42c0_0), 17088}, /* MVSR2 */
{ CPUFUNC(op_42d0_0), 17104}, /* MVSR2 */
{ CPUFUNC(op_42d8_0), 17112}, /* MVSR2 */
{ CPUFUNC(op_42e0_0), 17120}, /* MVSR2 */
{ CPUFUNC(op_42e8_0), 17128}, /* MVSR2 */
{ CPUFUNC(op_42f0_0), 17136}, /* MVSR2 */
{ CPUFUNC(op_42f8_0), 17144}, /* MVSR2 */
{ CPUFUNC(op_42f9_0), 17145}, /* MVSR2 */
{ CPUFUNC(op_4400_0), 17408}, /* NEG */
{ CPUFUNC(op_4410_0), 17424}, /* NEG */
{ CPUFUNC(op_4418_0), 17432}, /* NEG */
{ CPUFUNC(op_4420_0), 17440}, /* NEG */
{ CPUFUNC(op_4428_0), 17448}, /* NEG */
{ CPUFUNC(op_4430_0), 17456}, /* NEG */
{ CPUFUNC(op_4438_0), 17464}, /* NEG */
{ CPUFUNC(op_4439_0), 17465}, /* NEG */
{ CPUFUNC(op_4440_0), 17472}, /* NEG */
{ CPUFUNC(op_4450_0), 17488}, /* NEG */
{ CPUFUNC(op_4458_0), 17496}, /* NEG */
{ CPUFUNC(op_4460_0), 17504}, /* NEG */
{ CPUFUNC(op_4468_0), 17512}, /* NEG */
{ CPUFUNC(op_4470_0), 17520}, /* NEG */
{ CPUFUNC(op_4478_0), 17528}, /* NEG */
{ CPUFUNC(op_4479_0), 17529}, /* NEG */
{ CPUFUNC(op_4480_0), 17536}, /* NEG */
{ CPUFUNC(op_4490_0), 17552}, /* NEG */
{ CPUFUNC(op_4498_0), 17560}, /* NEG */
{ CPUFUNC(op_44a0_0), 17568}, /* NEG */
{ CPUFUNC(op_44a8_0), 17576}, /* NEG */
{ CPUFUNC(op_44b0_0), 17584}, /* NEG */
{ CPUFUNC(op_44b8_0), 17592}, /* NEG */
{ CPUFUNC(op_44b9_0), 17593}, /* NEG */
{ CPUFUNC(op_44c0_0), 17600}, /* MV2SR */
{ CPUFUNC(op_44d0_0), 17616}, /* MV2SR */
{ CPUFUNC(op_44d8_0), 17624}, /* MV2SR */
{ CPUFUNC(op_44e0_0), 17632}, /* MV2SR */
{ CPUFUNC(op_44e8_0), 17640}, /* MV2SR */
{ CPUFUNC(op_44f0_0), 17648}, /* MV2SR */
{ CPUFUNC(op_44f8_0), 17656}, /* MV2SR */
{ CPUFUNC(op_44f9_0), 17657}, /* MV2SR */
{ CPUFUNC(op_44fa_0), 17658}, /* MV2SR */
{ CPUFUNC(op_44fb_0), 17659}, /* MV2SR */
{ CPUFUNC(op_44fc_0), 17660}, /* MV2SR */
{ CPUFUNC(op_4600_0), 17920}, /* NOT */
{ CPUFUNC(op_4610_0), 17936}, /* NOT */
{ CPUFUNC(op_4618_0), 17944}, /* NOT */
{ CPUFUNC(op_4620_0), 17952}, /* NOT */
{ CPUFUNC(op_4628_0), 17960}, /* NOT */
{ CPUFUNC(op_4630_0), 17968}, /* NOT */
{ CPUFUNC(op_4638_0), 17976}, /* NOT */
{ CPUFUNC(op_4639_0), 17977}, /* NOT */
{ CPUFUNC(op_4640_0), 17984}, /* NOT */
{ CPUFUNC(op_4650_0), 18000}, /* NOT */
{ CPUFUNC(op_4658_0), 18008}, /* NOT */
{ CPUFUNC(op_4660_0), 18016}, /* NOT */
{ CPUFUNC(op_4668_0), 18024}, /* NOT */
{ CPUFUNC(op_4670_0), 18032}, /* NOT */
{ CPUFUNC(op_4678_0), 18040}, /* NOT */
{ CPUFUNC(op_4679_0), 18041}, /* NOT */
{ CPUFUNC(op_4680_0), 18048}, /* NOT */
{ CPUFUNC(op_4690_0), 18064}, /* NOT */
{ CPUFUNC(op_4698_0), 18072}, /* NOT */
{ CPUFUNC(op_46a0_0), 18080}, /* NOT */
{ CPUFUNC(op_46a8_0), 18088}, /* NOT */
{ CPUFUNC(op_46b0_0), 18096}, /* NOT */
{ CPUFUNC(op_46b8_0), 18104}, /* NOT */
{ CPUFUNC(op_46b9_0), 18105}, /* NOT */
{ CPUFUNC(op_46c0_0), 18112}, /* MV2SR */
{ CPUFUNC(op_46d0_0), 18128}, /* MV2SR */
{ CPUFUNC(op_46d8_0), 18136}, /* MV2SR */
{ CPUFUNC(op_46e0_0), 18144}, /* MV2SR */
{ CPUFUNC(op_46e8_0), 18152}, /* MV2SR */
{ CPUFUNC(op_46f0_0), 18160}, /* MV2SR */
{ CPUFUNC(op_46f8_0), 18168}, /* MV2SR */
{ CPUFUNC(op_46f9_0), 18169}, /* MV2SR */
{ CPUFUNC(op_46fa_0), 18170}, /* MV2SR */
{ CPUFUNC(op_46fb_0), 18171}, /* MV2SR */
{ CPUFUNC(op_46fc_0), 18172}, /* MV2SR */
{ CPUFUNC(op_4800_0), 18432}, /* NBCD */
{ CPUFUNC(op_4808_0), 18440}, /* LINK */
{ CPUFUNC(op_4810_0), 18448}, /* NBCD */
{ CPUFUNC(op_4818_0), 18456}, /* NBCD */
{ CPUFUNC(op_4820_0), 18464}, /* NBCD */
{ CPUFUNC(op_4828_0), 18472}, /* NBCD */
{ CPUFUNC(op_4830_0), 18480}, /* NBCD */
{ CPUFUNC(op_4838_0), 18488}, /* NBCD */
{ CPUFUNC(op_4839_0), 18489}, /* NBCD */
{ CPUFUNC(op_4840_0), 18496}, /* SWAP */
{ CPUFUNC(op_4848_0), 18504}, /* BKPT */
{ CPUFUNC(op_4850_0), 18512}, /* PEA */
{ CPUFUNC(op_4868_0), 18536}, /* PEA */
{ CPUFUNC(op_4870_0), 18544}, /* PEA */
{ CPUFUNC(op_4878_0), 18552}, /* PEA */
{ CPUFUNC(op_4879_0), 18553}, /* PEA */
{ CPUFUNC(op_487a_0), 18554}, /* PEA */
{ CPUFUNC(op_487b_0), 18555}, /* PEA */
{ CPUFUNC(op_4880_0), 18560}, /* EXT */
{ CPUFUNC(op_4890_0), 18576}, /* MVMLE */
{ CPUFUNC(op_48a0_0), 18592}, /* MVMLE */
{ CPUFUNC(op_48a8_0), 18600}, /* MVMLE */
{ CPUFUNC(op_48b0_0), 18608}, /* MVMLE */
{ CPUFUNC(op_48b8_0), 18616}, /* MVMLE */
{ CPUFUNC(op_48b9_0), 18617}, /* MVMLE */
{ CPUFUNC(op_48c0_0), 18624}, /* EXT */
{ CPUFUNC(op_48d0_0), 18640}, /* MVMLE */
{ CPUFUNC(op_48e0_0), 18656}, /* MVMLE */
{ CPUFUNC(op_48e8_0), 18664}, /* MVMLE */
{ CPUFUNC(op_48f0_0), 18672}, /* MVMLE */
{ CPUFUNC(op_48f8_0), 18680}, /* MVMLE */
{ CPUFUNC(op_48f9_0), 18681}, /* MVMLE */
{ CPUFUNC(op_49c0_0), 18880}, /* EXT */
{ CPUFUNC(op_4a00_0), 18944}, /* TST */
{ CPUFUNC(op_4a10_0), 18960}, /* TST */
{ CPUFUNC(op_4a18_0), 18968}, /* TST */
{ CPUFUNC(op_4a20_0), 18976}, /* TST */
{ CPUFUNC(op_4a28_0), 18984}, /* TST */
{ CPUFUNC(op_4a30_0), 18992}, /* TST */
{ CPUFUNC(op_4a38_0), 19000}, /* TST */
{ CPUFUNC(op_4a39_0), 19001}, /* TST */
{ CPUFUNC(op_4a3a_0), 19002}, /* TST */
{ CPUFUNC(op_4a3b_0), 19003}, /* TST */
{ CPUFUNC(op_4a3c_0), 19004}, /* TST */
{ CPUFUNC(op_4a40_0), 19008}, /* TST */
{ CPUFUNC(op_4a48_0), 19016}, /* TST */
{ CPUFUNC(op_4a50_0), 19024}, /* TST */
{ CPUFUNC(op_4a58_0), 19032}, /* TST */
{ CPUFUNC(op_4a60_0), 19040}, /* TST */
{ CPUFUNC(op_4a68_0), 19048}, /* TST */
{ CPUFUNC(op_4a70_0), 19056}, /* TST */
{ CPUFUNC(op_4a78_0), 19064}, /* TST */
{ CPUFUNC(op_4a79_0), 19065}, /* TST */
{ CPUFUNC(op_4a7a_0), 19066}, /* TST */
{ CPUFUNC(op_4a7b_0), 19067}, /* TST */
{ CPUFUNC(op_4a7c_0), 19068}, /* TST */
{ CPUFUNC(op_4a80_0), 19072}, /* TST */
{ CPUFUNC(op_4a88_0), 19080}, /* TST */
{ CPUFUNC(op_4a90_0), 19088}, /* TST */
{ CPUFUNC(op_4a98_0), 19096}, /* TST */
{ CPUFUNC(op_4aa0_0), 19104}, /* TST */
{ CPUFUNC(op_4aa8_0), 19112}, /* TST */
{ CPUFUNC(op_4ab0_0), 19120}, /* TST */
{ CPUFUNC(op_4ab8_0), 19128}, /* TST */
{ CPUFUNC(op_4ab9_0), 19129}, /* TST */
{ CPUFUNC(op_4aba_0), 19130}, /* TST */
{ CPUFUNC(op_4abb_0), 19131}, /* TST */
{ CPUFUNC(op_4abc_0), 19132}, /* TST */
{ CPUFUNC(op_4ac0_0), 19136}, /* TAS */
{ CPUFUNC(op_4ad0_0), 19152}, /* TAS */
{ CPUFUNC(op_4ad8_0), 19160}, /* TAS */
{ CPUFUNC(op_4ae0_0), 19168}, /* TAS */
{ CPUFUNC(op_4ae8_0), 19176}, /* TAS */
{ CPUFUNC(op_4af0_0), 19184}, /* TAS */
{ CPUFUNC(op_4af8_0), 19192}, /* TAS */
{ CPUFUNC(op_4af9_0), 19193}, /* TAS */
{ CPUFUNC(op_4c00_0), 19456}, /* MULL */
{ CPUFUNC(op_4c10_0), 19472}, /* MULL */
{ CPUFUNC(op_4c18_0), 19480}, /* MULL */
{ CPUFUNC(op_4c20_0), 19488}, /* MULL */
{ CPUFUNC(op_4c28_0), 19496}, /* MULL */
{ CPUFUNC(op_4c30_0), 19504}, /* MULL */
{ CPUFUNC(op_4c38_0), 19512}, /* MULL */
{ CPUFUNC(op_4c39_0), 19513}, /* MULL */
{ CPUFUNC(op_4c3a_0), 19514}, /* MULL */
{ CPUFUNC(op_4c3b_0), 19515}, /* MULL */
{ CPUFUNC(op_4c3c_0), 19516}, /* MULL */
{ CPUFUNC(op_4c40_0), 19520}, /* DIVL */
{ CPUFUNC(op_4c50_0), 19536}, /* DIVL */
{ CPUFUNC(op_4c58_0), 19544}, /* DIVL */
{ CPUFUNC(op_4c60_0), 19552}, /* DIVL */
{ CPUFUNC(op_4c68_0), 19560}, /* DIVL */
{ CPUFUNC(op_4c70_0), 19568}, /* DIVL */
{ CPUFUNC(op_4c78_0), 19576}, /* DIVL */
{ CPUFUNC(op_4c79_0), 19577}, /* DIVL */
{ CPUFUNC(op_4c7a_0), 19578}, /* DIVL */
{ CPUFUNC(op_4c7b_0), 19579}, /* DIVL */
{ CPUFUNC(op_4c7c_0), 19580}, /* DIVL */
{ CPUFUNC(op_4c90_0), 19600}, /* MVMEL */
{ CPUFUNC(op_4c98_0), 19608}, /* MVMEL */
{ CPUFUNC(op_4ca8_0), 19624}, /* MVMEL */
{ CPUFUNC(op_4cb0_0), 19632}, /* MVMEL */
{ CPUFUNC(op_4cb8_0), 19640}, /* MVMEL */
{ CPUFUNC(op_4cb9_0), 19641}, /* MVMEL */
{ CPUFUNC(op_4cba_0), 19642}, /* MVMEL */
{ CPUFUNC(op_4cbb_0), 19643}, /* MVMEL */
{ CPUFUNC(op_4cd0_0), 19664}, /* MVMEL */
{ CPUFUNC(op_4cd8_0), 19672}, /* MVMEL */
{ CPUFUNC(op_4ce8_0), 19688}, /* MVMEL */
{ CPUFUNC(op_4cf0_0), 19696}, /* MVMEL */
{ CPUFUNC(op_4cf8_0), 19704}, /* MVMEL */
{ CPUFUNC(op_4cf9_0), 19705}, /* MVMEL */
{ CPUFUNC(op_4cfa_0), 19706}, /* MVMEL */
{ CPUFUNC(op_4cfb_0), 19707}, /* MVMEL */
{ CPUFUNC(op_4e40_0), 20032}, /* TRAP */
{ CPUFUNC(op_4e50_0), 20048}, /* LINK */
{ CPUFUNC(op_4e58_0), 20056}, /* UNLK */
{ CPUFUNC(op_4e60_0), 20064}, /* MVR2USP */
{ CPUFUNC(op_4e68_0), 20072}, /* MVUSP2R */
{ CPUFUNC(op_4e70_0), 20080}, /* RESET */
{ CPUFUNC(op_4e71_0), 20081}, /* NOP */
{ CPUFUNC(op_4e72_0), 20082}, /* STOP */
{ CPUFUNC(op_4e73_0), 20083}, /* RTE */
{ CPUFUNC(op_4e74_0), 20084}, /* RTD */
{ CPUFUNC(op_4e75_0), 20085}, /* RTS */
{ CPUFUNC(op_4e76_0), 20086}, /* TRAPV */
{ CPUFUNC(op_4e77_0), 20087}, /* RTR */
{ CPUFUNC(op_4e7a_0), 20090}, /* MOVEC2 */
{ CPUFUNC(op_4e7b_0), 20091}, /* MOVE2C */
{ CPUFUNC(op_4e90_0), 20112}, /* JSR */
{ CPUFUNC(op_4ea8_0), 20136}, /* JSR */
{ CPUFUNC(op_4eb0_0), 20144}, /* JSR */
{ CPUFUNC(op_4eb8_0), 20152}, /* JSR */
{ CPUFUNC(op_4eb9_0), 20153}, /* JSR */
{ CPUFUNC(op_4eba_0), 20154}, /* JSR */
{ CPUFUNC(op_4ebb_0), 20155}, /* JSR */
{ CPUFUNC(op_4ed0_0), 20176}, /* JMP */
{ CPUFUNC(op_4ee8_0), 20200}, /* JMP */
{ CPUFUNC(op_4ef0_0), 20208}, /* JMP */
{ CPUFUNC(op_4ef8_0), 20216}, /* JMP */
{ CPUFUNC(op_4ef9_0), 20217}, /* JMP */
{ CPUFUNC(op_4efa_0), 20218}, /* JMP */
{ CPUFUNC(op_4efb_0), 20219}, /* JMP */
{ CPUFUNC(op_5000_0), 20480}, /* ADD */
{ CPUFUNC(op_5010_0), 20496}, /* ADD */
{ CPUFUNC(op_5018_0), 20504}, /* ADD */
{ CPUFUNC(op_5020_0), 20512}, /* ADD */
{ CPUFUNC(op_5028_0), 20520}, /* ADD */
{ CPUFUNC(op_5030_0), 20528}, /* ADD */
{ CPUFUNC(op_5038_0), 20536}, /* ADD */
{ CPUFUNC(op_5039_0), 20537}, /* ADD */
{ CPUFUNC(op_5040_0), 20544}, /* ADD */
{ CPUFUNC(op_5048_0), 20552}, /* ADDA */
{ CPUFUNC(op_5050_0), 20560}, /* ADD */
{ CPUFUNC(op_5058_0), 20568}, /* ADD */
{ CPUFUNC(op_5060_0), 20576}, /* ADD */
{ CPUFUNC(op_5068_0), 20584}, /* ADD */
{ CPUFUNC(op_5070_0), 20592}, /* ADD */
{ CPUFUNC(op_5078_0), 20600}, /* ADD */
{ CPUFUNC(op_5079_0), 20601}, /* ADD */
{ CPUFUNC(op_5080_0), 20608}, /* ADD */
{ CPUFUNC(op_5088_0), 20616}, /* ADDA */
{ CPUFUNC(op_5090_0), 20624}, /* ADD */
{ CPUFUNC(op_5098_0), 20632}, /* ADD */
{ CPUFUNC(op_50a0_0), 20640}, /* ADD */
{ CPUFUNC(op_50a8_0), 20648}, /* ADD */
{ CPUFUNC(op_50b0_0), 20656}, /* ADD */
{ CPUFUNC(op_50b8_0), 20664}, /* ADD */
{ CPUFUNC(op_50b9_0), 20665}, /* ADD */
{ CPUFUNC(op_50c0_0), 20672}, /* Scc */
{ CPUFUNC(op_50c8_0), 20680}, /* DBcc */
{ CPUFUNC(op_50d0_0), 20688}, /* Scc */
{ CPUFUNC(op_50d8_0), 20696}, /* Scc */
{ CPUFUNC(op_50e0_0), 20704}, /* Scc */
{ CPUFUNC(op_50e8_0), 20712}, /* Scc */
{ CPUFUNC(op_50f0_0), 20720}, /* Scc */
{ CPUFUNC(op_50f8_0), 20728}, /* Scc */
{ CPUFUNC(op_50f9_0), 20729}, /* Scc */
{ CPUFUNC(op_50fa_0), 20730}, /* TRAPcc */
{ CPUFUNC(op_50fb_0), 20731}, /* TRAPcc */
{ CPUFUNC(op_50fc_0), 20732}, /* TRAPcc */
{ CPUFUNC(op_5100_0), 20736}, /* SUB */
{ CPUFUNC(op_5110_0), 20752}, /* SUB */
{ CPUFUNC(op_5118_0), 20760}, /* SUB */
{ CPUFUNC(op_5120_0), 20768}, /* SUB */
{ CPUFUNC(op_5128_0), 20776}, /* SUB */
{ CPUFUNC(op_5130_0), 20784}, /* SUB */
{ CPUFUNC(op_5138_0), 20792}, /* SUB */
{ CPUFUNC(op_5139_0), 20793}, /* SUB */
{ CPUFUNC(op_5140_0), 20800}, /* SUB */
{ CPUFUNC(op_5148_0), 20808}, /* SUBA */
{ CPUFUNC(op_5150_0), 20816}, /* SUB */
{ CPUFUNC(op_5158_0), 20824}, /* SUB */
{ CPUFUNC(op_5160_0), 20832}, /* SUB */
{ CPUFUNC(op_5168_0), 20840}, /* SUB */
{ CPUFUNC(op_5170_0), 20848}, /* SUB */
{ CPUFUNC(op_5178_0), 20856}, /* SUB */
{ CPUFUNC(op_5179_0), 20857}, /* SUB */
{ CPUFUNC(op_5180_0), 20864}, /* SUB */
{ CPUFUNC(op_5188_0), 20872}, /* SUBA */
{ CPUFUNC(op_5190_0), 20880}, /* SUB */
{ CPUFUNC(op_5198_0), 20888}, /* SUB */
{ CPUFUNC(op_51a0_0), 20896}, /* SUB */
{ CPUFUNC(op_51a8_0), 20904}, /* SUB */
{ CPUFUNC(op_51b0_0), 20912}, /* SUB */
{ CPUFUNC(op_51b8_0), 20920}, /* SUB */
{ CPUFUNC(op_51b9_0), 20921}, /* SUB */
{ CPUFUNC(op_51c0_0), 20928}, /* Scc */
{ CPUFUNC(op_51c8_0), 20936}, /* DBcc */
{ CPUFUNC(op_51d0_0), 20944}, /* Scc */
{ CPUFUNC(op_51d8_0), 20952}, /* Scc */
{ CPUFUNC(op_51e0_0), 20960}, /* Scc */
{ CPUFUNC(op_51e8_0), 20968}, /* Scc */
{ CPUFUNC(op_51f0_0), 20976}, /* Scc */
{ CPUFUNC(op_51f8_0), 20984}, /* Scc */
{ CPUFUNC(op_51f9_0), 20985}, /* Scc */
{ CPUFUNC(op_51fa_0), 20986}, /* TRAPcc */
{ CPUFUNC(op_51fb_0), 20987}, /* TRAPcc */
{ CPUFUNC(op_51fc_0), 20988}, /* TRAPcc */
{ CPUFUNC(op_52c0_0), 21184}, /* Scc */
{ CPUFUNC(op_52c8_0), 21192}, /* DBcc */
{ CPUFUNC(op_52d0_0), 21200}, /* Scc */
{ CPUFUNC(op_52d8_0), 21208}, /* Scc */
{ CPUFUNC(op_52e0_0), 21216}, /* Scc */
{ CPUFUNC(op_52e8_0), 21224}, /* Scc */
{ CPUFUNC(op_52f0_0), 21232}, /* Scc */
{ CPUFUNC(op_52f8_0), 21240}, /* Scc */
{ CPUFUNC(op_52f9_0), 21241}, /* Scc */
{ CPUFUNC(op_52fa_0), 21242}, /* TRAPcc */
{ CPUFUNC(op_52fb_0), 21243}, /* TRAPcc */
{ CPUFUNC(op_52fc_0), 21244}, /* TRAPcc */
{ CPUFUNC(op_53c0_0), 21440}, /* Scc */
{ CPUFUNC(op_53c8_0), 21448}, /* DBcc */
{ CPUFUNC(op_53d0_0), 21456}, /* Scc */
{ CPUFUNC(op_53d8_0), 21464}, /* Scc */
{ CPUFUNC(op_53e0_0), 21472}, /* Scc */
{ CPUFUNC(op_53e8_0), 21480}, /* Scc */
{ CPUFUNC(op_53f0_0), 21488}, /* Scc */
{ CPUFUNC(op_53f8_0), 21496}, /* Scc */
{ CPUFUNC(op_53f9_0), 21497}, /* Scc */
{ CPUFUNC(op_53fa_0), 21498}, /* TRAPcc */
{ CPUFUNC(op_53fb_0), 21499}, /* TRAPcc */
{ CPUFUNC(op_53fc_0), 21500}, /* TRAPcc */
{ CPUFUNC(op_54c0_0), 21696}, /* Scc */
{ CPUFUNC(op_54c8_0), 21704}, /* DBcc */
{ CPUFUNC(op_54d0_0), 21712}, /* Scc */
{ CPUFUNC(op_54d8_0), 21720}, /* Scc */
{ CPUFUNC(op_54e0_0), 21728}, /* Scc */
{ CPUFUNC(op_54e8_0), 21736}, /* Scc */
{ CPUFUNC(op_54f0_0), 21744}, /* Scc */
{ CPUFUNC(op_54f8_0), 21752}, /* Scc */
{ CPUFUNC(op_54f9_0), 21753}, /* Scc */
{ CPUFUNC(op_54fa_0), 21754}, /* TRAPcc */
{ CPUFUNC(op_54fb_0), 21755}, /* TRAPcc */
{ CPUFUNC(op_54fc_0), 21756}, /* TRAPcc */
{ CPUFUNC(op_55c0_0), 21952}, /* Scc */
{ CPUFUNC(op_55c8_0), 21960}, /* DBcc */
{ CPUFUNC(op_55d0_0), 21968}, /* Scc */
{ CPUFUNC(op_55d8_0), 21976}, /* Scc */
{ CPUFUNC(op_55e0_0), 21984}, /* Scc */
{ CPUFUNC(op_55e8_0), 21992}, /* Scc */
{ CPUFUNC(op_55f0_0), 22000}, /* Scc */
{ CPUFUNC(op_55f8_0), 22008}, /* Scc */
{ CPUFUNC(op_55f9_0), 22009}, /* Scc */
{ CPUFUNC(op_55fa_0), 22010}, /* TRAPcc */
{ CPUFUNC(op_55fb_0), 22011}, /* TRAPcc */
{ CPUFUNC(op_55fc_0), 22012}, /* TRAPcc */
{ CPUFUNC(op_56c0_0), 22208}, /* Scc */
{ CPUFUNC(op_56c8_0), 22216}, /* DBcc */
{ CPUFUNC(op_56d0_0), 22224}, /* Scc */
{ CPUFUNC(op_56d8_0), 22232}, /* Scc */
{ CPUFUNC(op_56e0_0), 22240}, /* Scc */
{ CPUFUNC(op_56e8_0), 22248}, /* Scc */
{ CPUFUNC(op_56f0_0), 22256}, /* Scc */
{ CPUFUNC(op_56f8_0), 22264}, /* Scc */
{ CPUFUNC(op_56f9_0), 22265}, /* Scc */
{ CPUFUNC(op_56fa_0), 22266}, /* TRAPcc */
{ CPUFUNC(op_56fb_0), 22267}, /* TRAPcc */
{ CPUFUNC(op_56fc_0), 22268}, /* TRAPcc */
{ CPUFUNC(op_57c0_0), 22464}, /* Scc */
{ CPUFUNC(op_57c8_0), 22472}, /* DBcc */
{ CPUFUNC(op_57d0_0), 22480}, /* Scc */
{ CPUFUNC(op_57d8_0), 22488}, /* Scc */
{ CPUFUNC(op_57e0_0), 22496}, /* Scc */
{ CPUFUNC(op_57e8_0), 22504}, /* Scc */
{ CPUFUNC(op_57f0_0), 22512}, /* Scc */
{ CPUFUNC(op_57f8_0), 22520}, /* Scc */
{ CPUFUNC(op_57f9_0), 22521}, /* Scc */
{ CPUFUNC(op_57fa_0), 22522}, /* TRAPcc */
{ CPUFUNC(op_57fb_0), 22523}, /* TRAPcc */
{ CPUFUNC(op_57fc_0), 22524}, /* TRAPcc */
{ CPUFUNC(op_58c0_0), 22720}, /* Scc */
{ CPUFUNC(op_58c8_0), 22728}, /* DBcc */
{ CPUFUNC(op_58d0_0), 22736}, /* Scc */
{ CPUFUNC(op_58d8_0), 22744}, /* Scc */
{ CPUFUNC(op_58e0_0), 22752}, /* Scc */
{ CPUFUNC(op_58e8_0), 22760}, /* Scc */
{ CPUFUNC(op_58f0_0), 22768}, /* Scc */
{ CPUFUNC(op_58f8_0), 22776}, /* Scc */
{ CPUFUNC(op_58f9_0), 22777}, /* Scc */
{ CPUFUNC(op_58fa_0), 22778}, /* TRAPcc */
{ CPUFUNC(op_58fb_0), 22779}, /* TRAPcc */
{ CPUFUNC(op_58fc_0), 22780}, /* TRAPcc */
{ CPUFUNC(op_59c0_0), 22976}, /* Scc */
{ CPUFUNC(op_59c8_0), 22984}, /* DBcc */
{ CPUFUNC(op_59d0_0), 22992}, /* Scc */
{ CPUFUNC(op_59d8_0), 23000}, /* Scc */
{ CPUFUNC(op_59e0_0), 23008}, /* Scc */
{ CPUFUNC(op_59e8_0), 23016}, /* Scc */
{ CPUFUNC(op_59f0_0), 23024}, /* Scc */
{ CPUFUNC(op_59f8_0), 23032}, /* Scc */
{ CPUFUNC(op_59f9_0), 23033}, /* Scc */
{ CPUFUNC(op_59fa_0), 23034}, /* TRAPcc */
{ CPUFUNC(op_59fb_0), 23035}, /* TRAPcc */
{ CPUFUNC(op_59fc_0), 23036}, /* TRAPcc */
{ CPUFUNC(op_5ac0_0), 23232}, /* Scc */
{ CPUFUNC(op_5ac8_0), 23240}, /* DBcc */
{ CPUFUNC(op_5ad0_0), 23248}, /* Scc */
{ CPUFUNC(op_5ad8_0), 23256}, /* Scc */
{ CPUFUNC(op_5ae0_0), 23264}, /* Scc */
{ CPUFUNC(op_5ae8_0), 23272}, /* Scc */
{ CPUFUNC(op_5af0_0), 23280}, /* Scc */
{ CPUFUNC(op_5af8_0), 23288}, /* Scc */
{ CPUFUNC(op_5af9_0), 23289}, /* Scc */
{ CPUFUNC(op_5afa_0), 23290}, /* TRAPcc */
{ CPUFUNC(op_5afb_0), 23291}, /* TRAPcc */
{ CPUFUNC(op_5afc_0), 23292}, /* TRAPcc */
{ CPUFUNC(op_5bc0_0), 23488}, /* Scc */
{ CPUFUNC(op_5bc8_0), 23496}, /* DBcc */
{ CPUFUNC(op_5bd0_0), 23504}, /* Scc */
{ CPUFUNC(op_5bd8_0), 23512}, /* Scc */
{ CPUFUNC(op_5be0_0), 23520}, /* Scc */
{ CPUFUNC(op_5be8_0), 23528}, /* Scc */
{ CPUFUNC(op_5bf0_0), 23536}, /* Scc */
{ CPUFUNC(op_5bf8_0), 23544}, /* Scc */
{ CPUFUNC(op_5bf9_0), 23545}, /* Scc */
{ CPUFUNC(op_5bfa_0), 23546}, /* TRAPcc */
{ CPUFUNC(op_5bfb_0), 23547}, /* TRAPcc */
{ CPUFUNC(op_5bfc_0), 23548}, /* TRAPcc */
{ CPUFUNC(op_5cc0_0), 23744}, /* Scc */
{ CPUFUNC(op_5cc8_0), 23752}, /* DBcc */
{ CPUFUNC(op_5cd0_0), 23760}, /* Scc */
{ CPUFUNC(op_5cd8_0), 23768}, /* Scc */
{ CPUFUNC(op_5ce0_0), 23776}, /* Scc */
{ CPUFUNC(op_5ce8_0), 23784}, /* Scc */
{ CPUFUNC(op_5cf0_0), 23792}, /* Scc */
{ CPUFUNC(op_5cf8_0), 23800}, /* Scc */
{ CPUFUNC(op_5cf9_0), 23801}, /* Scc */
{ CPUFUNC(op_5cfa_0), 23802}, /* TRAPcc */
{ CPUFUNC(op_5cfb_0), 23803}, /* TRAPcc */
{ CPUFUNC(op_5cfc_0), 23804}, /* TRAPcc */
{ CPUFUNC(op_5dc0_0), 24000}, /* Scc */
{ CPUFUNC(op_5dc8_0), 24008}, /* DBcc */
{ CPUFUNC(op_5dd0_0), 24016}, /* Scc */
{ CPUFUNC(op_5dd8_0), 24024}, /* Scc */
{ CPUFUNC(op_5de0_0), 24032}, /* Scc */
{ CPUFUNC(op_5de8_0), 24040}, /* Scc */
{ CPUFUNC(op_5df0_0), 24048}, /* Scc */
{ CPUFUNC(op_5df8_0), 24056}, /* Scc */
{ CPUFUNC(op_5df9_0), 24057}, /* Scc */
{ CPUFUNC(op_5dfa_0), 24058}, /* TRAPcc */
{ CPUFUNC(op_5dfb_0), 24059}, /* TRAPcc */
{ CPUFUNC(op_5dfc_0), 24060}, /* TRAPcc */
{ CPUFUNC(op_5ec0_0), 24256}, /* Scc */
{ CPUFUNC(op_5ec8_0), 24264}, /* DBcc */
{ CPUFUNC(op_5ed0_0), 24272}, /* Scc */
{ CPUFUNC(op_5ed8_0), 24280}, /* Scc */
{ CPUFUNC(op_5ee0_0), 24288}, /* Scc */
{ CPUFUNC(op_5ee8_0), 24296}, /* Scc */
{ CPUFUNC(op_5ef0_0), 24304}, /* Scc */
{ CPUFUNC(op_5ef8_0), 24312}, /* Scc */
{ CPUFUNC(op_5ef9_0), 24313}, /* Scc */
{ CPUFUNC(op_5efa_0), 24314}, /* TRAPcc */
{ CPUFUNC(op_5efb_0), 24315}, /* TRAPcc */
{ CPUFUNC(op_5efc_0), 24316}, /* TRAPcc */
{ CPUFUNC(op_5fc0_0), 24512}, /* Scc */
{ CPUFUNC(op_5fc8_0), 24520}, /* DBcc */
{ CPUFUNC(op_5fd0_0), 24528}, /* Scc */
{ CPUFUNC(op_5fd8_0), 24536}, /* Scc */
{ CPUFUNC(op_5fe0_0), 24544}, /* Scc */
{ CPUFUNC(op_5fe8_0), 24552}, /* Scc */
{ CPUFUNC(op_5ff0_0), 24560}, /* Scc */
{ CPUFUNC(op_5ff8_0), 24568}, /* Scc */
{ CPUFUNC(op_5ff9_0), 24569}, /* Scc */
{ CPUFUNC(op_5ffa_0), 24570}, /* TRAPcc */
{ CPUFUNC(op_5ffb_0), 24571}, /* TRAPcc */
{ CPUFUNC(op_5ffc_0), 24572}, /* TRAPcc */
{ CPUFUNC(op_6000_0), 24576}, /* Bcc */
{ CPUFUNC(op_6001_0), 24577}, /* Bcc */
{ CPUFUNC(op_60ff_0), 24831}, /* Bcc */
{ CPUFUNC(op_6100_0), 24832}, /* BSR */
{ CPUFUNC(op_6101_0), 24833}, /* BSR */
{ CPUFUNC(op_61ff_0), 25087}, /* BSR */
{ CPUFUNC(op_6200_0), 25088}, /* Bcc */
{ CPUFUNC(op_6201_0), 25089}, /* Bcc */
{ CPUFUNC(op_62ff_0), 25343}, /* Bcc */
{ CPUFUNC(op_6300_0), 25344}, /* Bcc */
{ CPUFUNC(op_6301_0), 25345}, /* Bcc */
{ CPUFUNC(op_63ff_0), 25599}, /* Bcc */
{ CPUFUNC(op_6400_0), 25600}, /* Bcc */
{ CPUFUNC(op_6401_0), 25601}, /* Bcc */
{ CPUFUNC(op_64ff_0), 25855}, /* Bcc */
{ CPUFUNC(op_6500_0), 25856}, /* Bcc */
{ CPUFUNC(op_6501_0), 25857}, /* Bcc */
{ CPUFUNC(op_65ff_0), 26111}, /* Bcc */
{ CPUFUNC(op_6600_0), 26112}, /* Bcc */
{ CPUFUNC(op_6601_0), 26113}, /* Bcc */
{ CPUFUNC(op_66ff_0), 26367}, /* Bcc */
{ CPUFUNC(op_6700_0), 26368}, /* Bcc */
{ CPUFUNC(op_6701_0), 26369}, /* Bcc */
{ CPUFUNC(op_67ff_0), 26623}, /* Bcc */
{ CPUFUNC(op_6800_0), 26624}, /* Bcc */
{ CPUFUNC(op_6801_0), 26625}, /* Bcc */
{ CPUFUNC(op_68ff_0), 26879}, /* Bcc */
{ CPUFUNC(op_6900_0), 26880}, /* Bcc */
{ CPUFUNC(op_6901_0), 26881}, /* Bcc */
{ CPUFUNC(op_69ff_0), 27135}, /* Bcc */
{ CPUFUNC(op_6a00_0), 27136}, /* Bcc */
{ CPUFUNC(op_6a01_0), 27137}, /* Bcc */
{ CPUFUNC(op_6aff_0), 27391}, /* Bcc */
{ CPUFUNC(op_6b00_0), 27392}, /* Bcc */
{ CPUFUNC(op_6b01_0), 27393}, /* Bcc */
{ CPUFUNC(op_6bff_0), 27647}, /* Bcc */
{ CPUFUNC(op_6c00_0), 27648}, /* Bcc */
{ CPUFUNC(op_6c01_0), 27649}, /* Bcc */
{ CPUFUNC(op_6cff_0), 27903}, /* Bcc */
{ CPUFUNC(op_6d00_0), 27904}, /* Bcc */
{ CPUFUNC(op_6d01_0), 27905}, /* Bcc */
{ CPUFUNC(op_6dff_0), 28159}, /* Bcc */
{ CPUFUNC(op_6e00_0), 28160}, /* Bcc */
{ CPUFUNC(op_6e01_0), 28161}, /* Bcc */
{ CPUFUNC(op_6eff_0), 28415}, /* Bcc */
{ CPUFUNC(op_6f00_0), 28416}, /* Bcc */
{ CPUFUNC(op_6f01_0), 28417}, /* Bcc */
{ CPUFUNC(op_6fff_0), 28671}, /* Bcc */
{ CPUFUNC(op_7000_0), 28672}, /* MOVE */
{ CPUFUNC(op_8000_0), 32768}, /* OR */
{ CPUFUNC(op_8010_0), 32784}, /* OR */
{ CPUFUNC(op_8018_0), 32792}, /* OR */
{ CPUFUNC(op_8020_0), 32800}, /* OR */
{ CPUFUNC(op_8028_0), 32808}, /* OR */
{ CPUFUNC(op_8030_0), 32816}, /* OR */
{ CPUFUNC(op_8038_0), 32824}, /* OR */
{ CPUFUNC(op_8039_0), 32825}, /* OR */
{ CPUFUNC(op_803a_0), 32826}, /* OR */
{ CPUFUNC(op_803b_0), 32827}, /* OR */
{ CPUFUNC(op_803c_0), 32828}, /* OR */
{ CPUFUNC(op_8040_0), 32832}, /* OR */
{ CPUFUNC(op_8050_0), 32848}, /* OR */
{ CPUFUNC(op_8058_0), 32856}, /* OR */
{ CPUFUNC(op_8060_0), 32864}, /* OR */
{ CPUFUNC(op_8068_0), 32872}, /* OR */
{ CPUFUNC(op_8070_0), 32880}, /* OR */
{ CPUFUNC(op_8078_0), 32888}, /* OR */
{ CPUFUNC(op_8079_0), 32889}, /* OR */
{ CPUFUNC(op_807a_0), 32890}, /* OR */
{ CPUFUNC(op_807b_0), 32891}, /* OR */
{ CPUFUNC(op_807c_0), 32892}, /* OR */
{ CPUFUNC(op_8080_0), 32896}, /* OR */
{ CPUFUNC(op_8090_0), 32912}, /* OR */
{ CPUFUNC(op_8098_0), 32920}, /* OR */
{ CPUFUNC(op_80a0_0), 32928}, /* OR */
{ CPUFUNC(op_80a8_0), 32936}, /* OR */
{ CPUFUNC(op_80b0_0), 32944}, /* OR */
{ CPUFUNC(op_80b8_0), 32952}, /* OR */
{ CPUFUNC(op_80b9_0), 32953}, /* OR */
{ CPUFUNC(op_80ba_0), 32954}, /* OR */
{ CPUFUNC(op_80bb_0), 32955}, /* OR */
{ CPUFUNC(op_80bc_0), 32956}, /* OR */
{ CPUFUNC(op_80c0_0), 32960}, /* DIVU */
{ CPUFUNC(op_80d0_0), 32976}, /* DIVU */
{ CPUFUNC(op_80d8_0), 32984}, /* DIVU */
{ CPUFUNC(op_80e0_0), 32992}, /* DIVU */
{ CPUFUNC(op_80e8_0), 33000}, /* DIVU */
{ CPUFUNC(op_80f0_0), 33008}, /* DIVU */
{ CPUFUNC(op_80f8_0), 33016}, /* DIVU */
{ CPUFUNC(op_80f9_0), 33017}, /* DIVU */
{ CPUFUNC(op_80fa_0), 33018}, /* DIVU */
{ CPUFUNC(op_80fb_0), 33019}, /* DIVU */
{ CPUFUNC(op_80fc_0), 33020}, /* DIVU */
{ CPUFUNC(op_8100_0), 33024}, /* SBCD */
{ CPUFUNC(op_8108_0), 33032}, /* SBCD */
{ CPUFUNC(op_8110_0), 33040}, /* OR */
{ CPUFUNC(op_8118_0), 33048}, /* OR */
{ CPUFUNC(op_8120_0), 33056}, /* OR */
{ CPUFUNC(op_8128_0), 33064}, /* OR */
{ CPUFUNC(op_8130_0), 33072}, /* OR */
{ CPUFUNC(op_8138_0), 33080}, /* OR */
{ CPUFUNC(op_8139_0), 33081}, /* OR */
{ CPUFUNC(op_8140_0), 33088}, /* PACK */
{ CPUFUNC(op_8148_0), 33096}, /* PACK */
{ CPUFUNC(op_8150_0), 33104}, /* OR */
{ CPUFUNC(op_8158_0), 33112}, /* OR */
{ CPUFUNC(op_8160_0), 33120}, /* OR */
{ CPUFUNC(op_8168_0), 33128}, /* OR */
{ CPUFUNC(op_8170_0), 33136}, /* OR */
{ CPUFUNC(op_8178_0), 33144}, /* OR */
{ CPUFUNC(op_8179_0), 33145}, /* OR */
{ CPUFUNC(op_8180_0), 33152}, /* UNPK */
{ CPUFUNC(op_8188_0), 33160}, /* UNPK */
{ CPUFUNC(op_8190_0), 33168}, /* OR */
{ CPUFUNC(op_8198_0), 33176}, /* OR */
{ CPUFUNC(op_81a0_0), 33184}, /* OR */
{ CPUFUNC(op_81a8_0), 33192}, /* OR */
{ CPUFUNC(op_81b0_0), 33200}, /* OR */
{ CPUFUNC(op_81b8_0), 33208}, /* OR */
{ CPUFUNC(op_81b9_0), 33209}, /* OR */
{ CPUFUNC(op_81c0_0), 33216}, /* DIVS */
{ CPUFUNC(op_81d0_0), 33232}, /* DIVS */
{ CPUFUNC(op_81d8_0), 33240}, /* DIVS */
{ CPUFUNC(op_81e0_0), 33248}, /* DIVS */
{ CPUFUNC(op_81e8_0), 33256}, /* DIVS */
{ CPUFUNC(op_81f0_0), 33264}, /* DIVS */
{ CPUFUNC(op_81f8_0), 33272}, /* DIVS */
{ CPUFUNC(op_81f9_0), 33273}, /* DIVS */
{ CPUFUNC(op_81fa_0), 33274}, /* DIVS */
{ CPUFUNC(op_81fb_0), 33275}, /* DIVS */
{ CPUFUNC(op_81fc_0), 33276}, /* DIVS */
{ CPUFUNC(op_9000_0), 36864}, /* SUB */
{ CPUFUNC(op_9010_0), 36880}, /* SUB */
{ CPUFUNC(op_9018_0), 36888}, /* SUB */
{ CPUFUNC(op_9020_0), 36896}, /* SUB */
{ CPUFUNC(op_9028_0), 36904}, /* SUB */
{ CPUFUNC(op_9030_0), 36912}, /* SUB */
{ CPUFUNC(op_9038_0), 36920}, /* SUB */
{ CPUFUNC(op_9039_0), 36921}, /* SUB */
{ CPUFUNC(op_903a_0), 36922}, /* SUB */
{ CPUFUNC(op_903b_0), 36923}, /* SUB */
{ CPUFUNC(op_903c_0), 36924}, /* SUB */
{ CPUFUNC(op_9040_0), 36928}, /* SUB */
{ CPUFUNC(op_9048_0), 36936}, /* SUB */
{ CPUFUNC(op_9050_0), 36944}, /* SUB */
{ CPUFUNC(op_9058_0), 36952}, /* SUB */
{ CPUFUNC(op_9060_0), 36960}, /* SUB */
{ CPUFUNC(op_9068_0), 36968}, /* SUB */
{ CPUFUNC(op_9070_0), 36976}, /* SUB */
{ CPUFUNC(op_9078_0), 36984}, /* SUB */
{ CPUFUNC(op_9079_0), 36985}, /* SUB */
{ CPUFUNC(op_907a_0), 36986}, /* SUB */
{ CPUFUNC(op_907b_0), 36987}, /* SUB */
{ CPUFUNC(op_907c_0), 36988}, /* SUB */
{ CPUFUNC(op_9080_0), 36992}, /* SUB */
{ CPUFUNC(op_9088_0), 37000}, /* SUB */
{ CPUFUNC(op_9090_0), 37008}, /* SUB */
{ CPUFUNC(op_9098_0), 37016}, /* SUB */
{ CPUFUNC(op_90a0_0), 37024}, /* SUB */
{ CPUFUNC(op_90a8_0), 37032}, /* SUB */
{ CPUFUNC(op_90b0_0), 37040}, /* SUB */
{ CPUFUNC(op_90b8_0), 37048}, /* SUB */
{ CPUFUNC(op_90b9_0), 37049}, /* SUB */
{ CPUFUNC(op_90ba_0), 37050}, /* SUB */
{ CPUFUNC(op_90bb_0), 37051}, /* SUB */
{ CPUFUNC(op_90bc_0), 37052}, /* SUB */
{ CPUFUNC(op_90c0_0), 37056}, /* SUBA */
{ CPUFUNC(op_90c8_0), 37064}, /* SUBA */
{ CPUFUNC(op_90d0_0), 37072}, /* SUBA */
{ CPUFUNC(op_90d8_0), 37080}, /* SUBA */
{ CPUFUNC(op_90e0_0), 37088}, /* SUBA */
{ CPUFUNC(op_90e8_0), 37096}, /* SUBA */
{ CPUFUNC(op_90f0_0), 37104}, /* SUBA */
{ CPUFUNC(op_90f8_0), 37112}, /* SUBA */
{ CPUFUNC(op_90f9_0), 37113}, /* SUBA */
{ CPUFUNC(op_90fa_0), 37114}, /* SUBA */
{ CPUFUNC(op_90fb_0), 37115}, /* SUBA */
{ CPUFUNC(op_90fc_0), 37116}, /* SUBA */
{ CPUFUNC(op_9100_0), 37120}, /* SUBX */
{ CPUFUNC(op_9108_0), 37128}, /* SUBX */
{ CPUFUNC(op_9110_0), 37136}, /* SUB */
{ CPUFUNC(op_9118_0), 37144}, /* SUB */
{ CPUFUNC(op_9120_0), 37152}, /* SUB */
{ CPUFUNC(op_9128_0), 37160}, /* SUB */
{ CPUFUNC(op_9130_0), 37168}, /* SUB */
{ CPUFUNC(op_9138_0), 37176}, /* SUB */
{ CPUFUNC(op_9139_0), 37177}, /* SUB */
{ CPUFUNC(op_9140_0), 37184}, /* SUBX */
{ CPUFUNC(op_9148_0), 37192}, /* SUBX */
{ CPUFUNC(op_9150_0), 37200}, /* SUB */
{ CPUFUNC(op_9158_0), 37208}, /* SUB */
{ CPUFUNC(op_9160_0), 37216}, /* SUB */
{ CPUFUNC(op_9168_0), 37224}, /* SUB */
{ CPUFUNC(op_9170_0), 37232}, /* SUB */
{ CPUFUNC(op_9178_0), 37240}, /* SUB */
{ CPUFUNC(op_9179_0), 37241}, /* SUB */
{ CPUFUNC(op_9180_0), 37248}, /* SUBX */
{ CPUFUNC(op_9188_0), 37256}, /* SUBX */
{ CPUFUNC(op_9190_0), 37264}, /* SUB */
{ CPUFUNC(op_9198_0), 37272}, /* SUB */
{ CPUFUNC(op_91a0_0), 37280}, /* SUB */
{ CPUFUNC(op_91a8_0), 37288}, /* SUB */
{ CPUFUNC(op_91b0_0), 37296}, /* SUB */
{ CPUFUNC(op_91b8_0), 37304}, /* SUB */
{ CPUFUNC(op_91b9_0), 37305}, /* SUB */
{ CPUFUNC(op_91c0_0), 37312}, /* SUBA */
{ CPUFUNC(op_91c8_0), 37320}, /* SUBA */
{ CPUFUNC(op_91d0_0), 37328}, /* SUBA */
{ CPUFUNC(op_91d8_0), 37336}, /* SUBA */
{ CPUFUNC(op_91e0_0), 37344}, /* SUBA */
{ CPUFUNC(op_91e8_0), 37352}, /* SUBA */
{ CPUFUNC(op_91f0_0), 37360}, /* SUBA */
{ CPUFUNC(op_91f8_0), 37368}, /* SUBA */
{ CPUFUNC(op_91f9_0), 37369}, /* SUBA */
{ CPUFUNC(op_91fa_0), 37370}, /* SUBA */
{ CPUFUNC(op_91fb_0), 37371}, /* SUBA */
{ CPUFUNC(op_91fc_0), 37372}, /* SUBA */
{ CPUFUNC(op_b000_0), 45056}, /* CMP */
{ CPUFUNC(op_b010_0), 45072}, /* CMP */
{ CPUFUNC(op_b018_0), 45080}, /* CMP */
{ CPUFUNC(op_b020_0), 45088}, /* CMP */
{ CPUFUNC(op_b028_0), 45096}, /* CMP */
{ CPUFUNC(op_b030_0), 45104}, /* CMP */
{ CPUFUNC(op_b038_0), 45112}, /* CMP */
{ CPUFUNC(op_b039_0), 45113}, /* CMP */
{ CPUFUNC(op_b03a_0), 45114}, /* CMP */
{ CPUFUNC(op_b03b_0), 45115}, /* CMP */
{ CPUFUNC(op_b03c_0), 45116}, /* CMP */
{ CPUFUNC(op_b040_0), 45120}, /* CMP */
{ CPUFUNC(op_b048_0), 45128}, /* CMP */
{ CPUFUNC(op_b050_0), 45136}, /* CMP */
{ CPUFUNC(op_b058_0), 45144}, /* CMP */
{ CPUFUNC(op_b060_0), 45152}, /* CMP */
{ CPUFUNC(op_b068_0), 45160}, /* CMP */
{ CPUFUNC(op_b070_0), 45168}, /* CMP */
{ CPUFUNC(op_b078_0), 45176}, /* CMP */
{ CPUFUNC(op_b079_0), 45177}, /* CMP */
{ CPUFUNC(op_b07a_0), 45178}, /* CMP */
{ CPUFUNC(op_b07b_0), 45179}, /* CMP */
{ CPUFUNC(op_b07c_0), 45180}, /* CMP */
{ CPUFUNC(op_b080_0), 45184}, /* CMP */
{ CPUFUNC(op_b088_0), 45192}, /* CMP */
{ CPUFUNC(op_b090_0), 45200}, /* CMP */
{ CPUFUNC(op_b098_0), 45208}, /* CMP */
{ CPUFUNC(op_b0a0_0), 45216}, /* CMP */
{ CPUFUNC(op_b0a8_0), 45224}, /* CMP */
{ CPUFUNC(op_b0b0_0), 45232}, /* CMP */
{ CPUFUNC(op_b0b8_0), 45240}, /* CMP */
{ CPUFUNC(op_b0b9_0), 45241}, /* CMP */
{ CPUFUNC(op_b0ba_0), 45242}, /* CMP */
{ CPUFUNC(op_b0bb_0), 45243}, /* CMP */
{ CPUFUNC(op_b0bc_0), 45244}, /* CMP */
{ CPUFUNC(op_b0c0_0), 45248}, /* CMPA */
{ CPUFUNC(op_b0c8_0), 45256}, /* CMPA */
{ CPUFUNC(op_b0d0_0), 45264}, /* CMPA */
{ CPUFUNC(op_b0d8_0), 45272}, /* CMPA */
{ CPUFUNC(op_b0e0_0), 45280}, /* CMPA */
{ CPUFUNC(op_b0e8_0), 45288}, /* CMPA */
{ CPUFUNC(op_b0f0_0), 45296}, /* CMPA */
{ CPUFUNC(op_b0f8_0), 45304}, /* CMPA */
{ CPUFUNC(op_b0f9_0), 45305}, /* CMPA */
{ CPUFUNC(op_b0fa_0), 45306}, /* CMPA */
{ CPUFUNC(op_b0fb_0), 45307}, /* CMPA */
{ CPUFUNC(op_b0fc_0), 45308}, /* CMPA */
{ CPUFUNC(op_b100_0), 45312}, /* EOR */
{ CPUFUNC(op_b108_0), 45320}, /* CMPM */
{ CPUFUNC(op_b110_0), 45328}, /* EOR */
{ CPUFUNC(op_b118_0), 45336}, /* EOR */
{ CPUFUNC(op_b120_0), 45344}, /* EOR */
{ CPUFUNC(op_b128_0), 45352}, /* EOR */
{ CPUFUNC(op_b130_0), 45360}, /* EOR */
{ CPUFUNC(op_b138_0), 45368}, /* EOR */
{ CPUFUNC(op_b139_0), 45369}, /* EOR */
{ CPUFUNC(op_b140_0), 45376}, /* EOR */
{ CPUFUNC(op_b148_0), 45384}, /* CMPM */
{ CPUFUNC(op_b150_0), 45392}, /* EOR */
{ CPUFUNC(op_b158_0), 45400}, /* EOR */
{ CPUFUNC(op_b160_0), 45408}, /* EOR */
{ CPUFUNC(op_b168_0), 45416}, /* EOR */
{ CPUFUNC(op_b170_0), 45424}, /* EOR */
{ CPUFUNC(op_b178_0), 45432}, /* EOR */
{ CPUFUNC(op_b179_0), 45433}, /* EOR */
{ CPUFUNC(op_b180_0), 45440}, /* EOR */
{ CPUFUNC(op_b188_0), 45448}, /* CMPM */
{ CPUFUNC(op_b190_0), 45456}, /* EOR */
{ CPUFUNC(op_b198_0), 45464}, /* EOR */
{ CPUFUNC(op_b1a0_0), 45472}, /* EOR */
{ CPUFUNC(op_b1a8_0), 45480}, /* EOR */
{ CPUFUNC(op_b1b0_0), 45488}, /* EOR */
{ CPUFUNC(op_b1b8_0), 45496}, /* EOR */
{ CPUFUNC(op_b1b9_0), 45497}, /* EOR */
{ CPUFUNC(op_b1c0_0), 45504}, /* CMPA */
{ CPUFUNC(op_b1c8_0), 45512}, /* CMPA */
{ CPUFUNC(op_b1d0_0), 45520}, /* CMPA */
{ CPUFUNC(op_b1d8_0), 45528}, /* CMPA */
{ CPUFUNC(op_b1e0_0), 45536}, /* CMPA */
{ CPUFUNC(op_b1e8_0), 45544}, /* CMPA */
{ CPUFUNC(op_b1f0_0), 45552}, /* CMPA */
{ CPUFUNC(op_b1f8_0), 45560}, /* CMPA */
{ CPUFUNC(op_b1f9_0), 45561}, /* CMPA */
{ CPUFUNC(op_b1fa_0), 45562}, /* CMPA */
{ CPUFUNC(op_b1fb_0), 45563}, /* CMPA */
{ CPUFUNC(op_b1fc_0), 45564}, /* CMPA */
{ CPUFUNC(op_c000_0), 49152}, /* AND */
{ CPUFUNC(op_c010_0), 49168}, /* AND */
{ CPUFUNC(op_c018_0), 49176}, /* AND */
{ CPUFUNC(op_c020_0), 49184}, /* AND */
{ CPUFUNC(op_c028_0), 49192}, /* AND */
{ CPUFUNC(op_c030_0), 49200}, /* AND */
{ CPUFUNC(op_c038_0), 49208}, /* AND */
{ CPUFUNC(op_c039_0), 49209}, /* AND */
{ CPUFUNC(op_c03a_0), 49210}, /* AND */
{ CPUFUNC(op_c03b_0), 49211}, /* AND */
{ CPUFUNC(op_c03c_0), 49212}, /* AND */
{ CPUFUNC(op_c040_0), 49216}, /* AND */
{ CPUFUNC(op_c050_0), 49232}, /* AND */
{ CPUFUNC(op_c058_0), 49240}, /* AND */
{ CPUFUNC(op_c060_0), 49248}, /* AND */
{ CPUFUNC(op_c068_0), 49256}, /* AND */
{ CPUFUNC(op_c070_0), 49264}, /* AND */
{ CPUFUNC(op_c078_0), 49272}, /* AND */
{ CPUFUNC(op_c079_0), 49273}, /* AND */
{ CPUFUNC(op_c07a_0), 49274}, /* AND */
{ CPUFUNC(op_c07b_0), 49275}, /* AND */
{ CPUFUNC(op_c07c_0), 49276}, /* AND */
{ CPUFUNC(op_c080_0), 49280}, /* AND */
{ CPUFUNC(op_c090_0), 49296}, /* AND */
{ CPUFUNC(op_c098_0), 49304}, /* AND */
{ CPUFUNC(op_c0a0_0), 49312}, /* AND */
{ CPUFUNC(op_c0a8_0), 49320}, /* AND */
{ CPUFUNC(op_c0b0_0), 49328}, /* AND */
{ CPUFUNC(op_c0b8_0), 49336}, /* AND */
{ CPUFUNC(op_c0b9_0), 49337}, /* AND */
{ CPUFUNC(op_c0ba_0), 49338}, /* AND */
{ CPUFUNC(op_c0bb_0), 49339}, /* AND */
{ CPUFUNC(op_c0bc_0), 49340}, /* AND */
{ CPUFUNC(op_c0c0_0), 49344}, /* MULU */
{ CPUFUNC(op_c0d0_0), 49360}, /* MULU */
{ CPUFUNC(op_c0d8_0), 49368}, /* MULU */
{ CPUFUNC(op_c0e0_0), 49376}, /* MULU */
{ CPUFUNC(op_c0e8_0), 49384}, /* MULU */
{ CPUFUNC(op_c0f0_0), 49392}, /* MULU */
{ CPUFUNC(op_c0f8_0), 49400}, /* MULU */
{ CPUFUNC(op_c0f9_0), 49401}, /* MULU */
{ CPUFUNC(op_c0fa_0), 49402}, /* MULU */
{ CPUFUNC(op_c0fb_0), 49403}, /* MULU */
{ CPUFUNC(op_c0fc_0), 49404}, /* MULU */
{ CPUFUNC(op_c100_0), 49408}, /* ABCD */
{ CPUFUNC(op_c108_0), 49416}, /* ABCD */
{ CPUFUNC(op_c110_0), 49424}, /* AND */
{ CPUFUNC(op_c118_0), 49432}, /* AND */
{ CPUFUNC(op_c120_0), 49440}, /* AND */
{ CPUFUNC(op_c128_0), 49448}, /* AND */
{ CPUFUNC(op_c130_0), 49456}, /* AND */
{ CPUFUNC(op_c138_0), 49464}, /* AND */
{ CPUFUNC(op_c139_0), 49465}, /* AND */
{ CPUFUNC(op_c140_0), 49472}, /* EXG */
{ CPUFUNC(op_c148_0), 49480}, /* EXG */
{ CPUFUNC(op_c150_0), 49488}, /* AND */
{ CPUFUNC(op_c158_0), 49496}, /* AND */
{ CPUFUNC(op_c160_0), 49504}, /* AND */
{ CPUFUNC(op_c168_0), 49512}, /* AND */
{ CPUFUNC(op_c170_0), 49520}, /* AND */
{ CPUFUNC(op_c178_0), 49528}, /* AND */
{ CPUFUNC(op_c179_0), 49529}, /* AND */
{ CPUFUNC(op_c188_0), 49544}, /* EXG */
{ CPUFUNC(op_c190_0), 49552}, /* AND */
{ CPUFUNC(op_c198_0), 49560}, /* AND */
{ CPUFUNC(op_c1a0_0), 49568}, /* AND */
{ CPUFUNC(op_c1a8_0), 49576}, /* AND */
{ CPUFUNC(op_c1b0_0), 49584}, /* AND */
{ CPUFUNC(op_c1b8_0), 49592}, /* AND */
{ CPUFUNC(op_c1b9_0), 49593}, /* AND */
{ CPUFUNC(op_c1c0_0), 49600}, /* MULS */
{ CPUFUNC(op_c1d0_0), 49616}, /* MULS */
{ CPUFUNC(op_c1d8_0), 49624}, /* MULS */
{ CPUFUNC(op_c1e0_0), 49632}, /* MULS */
{ CPUFUNC(op_c1e8_0), 49640}, /* MULS */
{ CPUFUNC(op_c1f0_0), 49648}, /* MULS */
{ CPUFUNC(op_c1f8_0), 49656}, /* MULS */
{ CPUFUNC(op_c1f9_0), 49657}, /* MULS */
{ CPUFUNC(op_c1fa_0), 49658}, /* MULS */
{ CPUFUNC(op_c1fb_0), 49659}, /* MULS */
{ CPUFUNC(op_c1fc_0), 49660}, /* MULS */
{ CPUFUNC(op_d000_0), 53248}, /* ADD */
{ CPUFUNC(op_d010_0), 53264}, /* ADD */
{ CPUFUNC(op_d018_0), 53272}, /* ADD */
{ CPUFUNC(op_d020_0), 53280}, /* ADD */
{ CPUFUNC(op_d028_0), 53288}, /* ADD */
{ CPUFUNC(op_d030_0), 53296}, /* ADD */
{ CPUFUNC(op_d038_0), 53304}, /* ADD */
{ CPUFUNC(op_d039_0), 53305}, /* ADD */
{ CPUFUNC(op_d03a_0), 53306}, /* ADD */
{ CPUFUNC(op_d03b_0), 53307}, /* ADD */
{ CPUFUNC(op_d03c_0), 53308}, /* ADD */
{ CPUFUNC(op_d040_0), 53312}, /* ADD */
{ CPUFUNC(op_d048_0), 53320}, /* ADD */
{ CPUFUNC(op_d050_0), 53328}, /* ADD */
{ CPUFUNC(op_d058_0), 53336}, /* ADD */
{ CPUFUNC(op_d060_0), 53344}, /* ADD */
{ CPUFUNC(op_d068_0), 53352}, /* ADD */
{ CPUFUNC(op_d070_0), 53360}, /* ADD */
{ CPUFUNC(op_d078_0), 53368}, /* ADD */
{ CPUFUNC(op_d079_0), 53369}, /* ADD */
{ CPUFUNC(op_d07a_0), 53370}, /* ADD */
{ CPUFUNC(op_d07b_0), 53371}, /* ADD */
{ CPUFUNC(op_d07c_0), 53372}, /* ADD */
{ CPUFUNC(op_d080_0), 53376}, /* ADD */
{ CPUFUNC(op_d088_0), 53384}, /* ADD */
{ CPUFUNC(op_d090_0), 53392}, /* ADD */
{ CPUFUNC(op_d098_0), 53400}, /* ADD */
{ CPUFUNC(op_d0a0_0), 53408}, /* ADD */
{ CPUFUNC(op_d0a8_0), 53416}, /* ADD */
{ CPUFUNC(op_d0b0_0), 53424}, /* ADD */
{ CPUFUNC(op_d0b8_0), 53432}, /* ADD */
{ CPUFUNC(op_d0b9_0), 53433}, /* ADD */
{ CPUFUNC(op_d0ba_0), 53434}, /* ADD */
{ CPUFUNC(op_d0bb_0), 53435}, /* ADD */
{ CPUFUNC(op_d0bc_0), 53436}, /* ADD */
{ CPUFUNC(op_d0c0_0), 53440}, /* ADDA */
{ CPUFUNC(op_d0c8_0), 53448}, /* ADDA */
{ CPUFUNC(op_d0d0_0), 53456}, /* ADDA */
{ CPUFUNC(op_d0d8_0), 53464}, /* ADDA */
{ CPUFUNC(op_d0e0_0), 53472}, /* ADDA */
{ CPUFUNC(op_d0e8_0), 53480}, /* ADDA */
{ CPUFUNC(op_d0f0_0), 53488}, /* ADDA */
{ CPUFUNC(op_d0f8_0), 53496}, /* ADDA */
{ CPUFUNC(op_d0f9_0), 53497}, /* ADDA */
{ CPUFUNC(op_d0fa_0), 53498}, /* ADDA */
{ CPUFUNC(op_d0fb_0), 53499}, /* ADDA */
{ CPUFUNC(op_d0fc_0), 53500}, /* ADDA */
{ CPUFUNC(op_d100_0), 53504}, /* ADDX */
{ CPUFUNC(op_d108_0), 53512}, /* ADDX */
{ CPUFUNC(op_d110_0), 53520}, /* ADD */
{ CPUFUNC(op_d118_0), 53528}, /* ADD */
{ CPUFUNC(op_d120_0), 53536}, /* ADD */
{ CPUFUNC(op_d128_0), 53544}, /* ADD */
{ CPUFUNC(op_d130_0), 53552}, /* ADD */
{ CPUFUNC(op_d138_0), 53560}, /* ADD */
{ CPUFUNC(op_d139_0), 53561}, /* ADD */
{ CPUFUNC(op_d140_0), 53568}, /* ADDX */
{ CPUFUNC(op_d148_0), 53576}, /* ADDX */
{ CPUFUNC(op_d150_0), 53584}, /* ADD */
{ CPUFUNC(op_d158_0), 53592}, /* ADD */
{ CPUFUNC(op_d160_0), 53600}, /* ADD */
{ CPUFUNC(op_d168_0), 53608}, /* ADD */
{ CPUFUNC(op_d170_0), 53616}, /* ADD */
{ CPUFUNC(op_d178_0), 53624}, /* ADD */
{ CPUFUNC(op_d179_0), 53625}, /* ADD */
{ CPUFUNC(op_d180_0), 53632}, /* ADDX */
{ CPUFUNC(op_d188_0), 53640}, /* ADDX */
{ CPUFUNC(op_d190_0), 53648}, /* ADD */
{ CPUFUNC(op_d198_0), 53656}, /* ADD */
{ CPUFUNC(op_d1a0_0), 53664}, /* ADD */
{ CPUFUNC(op_d1a8_0), 53672}, /* ADD */
{ CPUFUNC(op_d1b0_0), 53680}, /* ADD */
{ CPUFUNC(op_d1b8_0), 53688}, /* ADD */
{ CPUFUNC(op_d1b9_0), 53689}, /* ADD */
{ CPUFUNC(op_d1c0_0), 53696}, /* ADDA */
{ CPUFUNC(op_d1c8_0), 53704}, /* ADDA */
{ CPUFUNC(op_d1d0_0), 53712}, /* ADDA */
{ CPUFUNC(op_d1d8_0), 53720}, /* ADDA */
{ CPUFUNC(op_d1e0_0), 53728}, /* ADDA */
{ CPUFUNC(op_d1e8_0), 53736}, /* ADDA */
{ CPUFUNC(op_d1f0_0), 53744}, /* ADDA */
{ CPUFUNC(op_d1f8_0), 53752}, /* ADDA */
{ CPUFUNC(op_d1f9_0), 53753}, /* ADDA */
{ CPUFUNC(op_d1fa_0), 53754}, /* ADDA */
{ CPUFUNC(op_d1fb_0), 53755}, /* ADDA */
{ CPUFUNC(op_d1fc_0), 53756}, /* ADDA */
{ CPUFUNC(op_e000_0), 57344}, /* ASR */
{ CPUFUNC(op_e008_0), 57352}, /* LSR */
{ CPUFUNC(op_e010_0), 57360}, /* ROXR */
{ CPUFUNC(op_e018_0), 57368}, /* ROR */
{ CPUFUNC(op_e020_0), 57376}, /* ASR */
{ CPUFUNC(op_e028_0), 57384}, /* LSR */
{ CPUFUNC(op_e030_0), 57392}, /* ROXR */
{ CPUFUNC(op_e038_0), 57400}, /* ROR */
{ CPUFUNC(op_e040_0), 57408}, /* ASR */
{ CPUFUNC(op_e048_0), 57416}, /* LSR */
{ CPUFUNC(op_e050_0), 57424}, /* ROXR */
{ CPUFUNC(op_e058_0), 57432}, /* ROR */
{ CPUFUNC(op_e060_0), 57440}, /* ASR */
{ CPUFUNC(op_e068_0), 57448}, /* LSR */
{ CPUFUNC(op_e070_0), 57456}, /* ROXR */
{ CPUFUNC(op_e078_0), 57464}, /* ROR */
{ CPUFUNC(op_e080_0), 57472}, /* ASR */
{ CPUFUNC(op_e088_0), 57480}, /* LSR */
{ CPUFUNC(op_e090_0), 57488}, /* ROXR */
{ CPUFUNC(op_e098_0), 57496}, /* ROR */
{ CPUFUNC(op_e0a0_0), 57504}, /* ASR */
{ CPUFUNC(op_e0a8_0), 57512}, /* LSR */
{ CPUFUNC(op_e0b0_0), 57520}, /* ROXR */
{ CPUFUNC(op_e0b8_0), 57528}, /* ROR */
{ CPUFUNC(op_e0d0_0), 57552}, /* ASRW */
{ CPUFUNC(op_e0d8_0), 57560}, /* ASRW */
{ CPUFUNC(op_e0e0_0), 57568}, /* ASRW */
{ CPUFUNC(op_e0e8_0), 57576}, /* ASRW */
{ CPUFUNC(op_e0f0_0), 57584}, /* ASRW */
{ CPUFUNC(op_e0f8_0), 57592}, /* ASRW */
{ CPUFUNC(op_e0f9_0), 57593}, /* ASRW */
{ CPUFUNC(op_e100_0), 57600}, /* ASL */
{ CPUFUNC(op_e108_0), 57608}, /* LSL */
{ CPUFUNC(op_e110_0), 57616}, /* ROXL */
{ CPUFUNC(op_e118_0), 57624}, /* ROL */
{ CPUFUNC(op_e120_0), 57632}, /* ASL */
{ CPUFUNC(op_e128_0), 57640}, /* LSL */
{ CPUFUNC(op_e130_0), 57648}, /* ROXL */
{ CPUFUNC(op_e138_0), 57656}, /* ROL */
{ CPUFUNC(op_e140_0), 57664}, /* ASL */
{ CPUFUNC(op_e148_0), 57672}, /* LSL */
{ CPUFUNC(op_e150_0), 57680}, /* ROXL */
{ CPUFUNC(op_e158_0), 57688}, /* ROL */
{ CPUFUNC(op_e160_0), 57696}, /* ASL */
{ CPUFUNC(op_e168_0), 57704}, /* LSL */
{ CPUFUNC(op_e170_0), 57712}, /* ROXL */
{ CPUFUNC(op_e178_0), 57720}, /* ROL */
{ CPUFUNC(op_e180_0), 57728}, /* ASL */
{ CPUFUNC(op_e188_0), 57736}, /* LSL */
{ CPUFUNC(op_e190_0), 57744}, /* ROXL */
{ CPUFUNC(op_e198_0), 57752}, /* ROL */
{ CPUFUNC(op_e1a0_0), 57760}, /* ASL */
{ CPUFUNC(op_e1a8_0), 57768}, /* LSL */
{ CPUFUNC(op_e1b0_0), 57776}, /* ROXL */
{ CPUFUNC(op_e1b8_0), 57784}, /* ROL */
{ CPUFUNC(op_e1d0_0), 57808}, /* ASLW */
{ CPUFUNC(op_e1d8_0), 57816}, /* ASLW */
{ CPUFUNC(op_e1e0_0), 57824}, /* ASLW */
{ CPUFUNC(op_e1e8_0), 57832}, /* ASLW */
{ CPUFUNC(op_e1f0_0), 57840}, /* ASLW */
{ CPUFUNC(op_e1f8_0), 57848}, /* ASLW */
{ CPUFUNC(op_e1f9_0), 57849}, /* ASLW */
{ CPUFUNC(op_e2d0_0), 58064}, /* LSRW */
{ CPUFUNC(op_e2d8_0), 58072}, /* LSRW */
{ CPUFUNC(op_e2e0_0), 58080}, /* LSRW */
{ CPUFUNC(op_e2e8_0), 58088}, /* LSRW */
{ CPUFUNC(op_e2f0_0), 58096}, /* LSRW */
{ CPUFUNC(op_e2f8_0), 58104}, /* LSRW */
{ CPUFUNC(op_e2f9_0), 58105}, /* LSRW */
{ CPUFUNC(op_e3d0_0), 58320}, /* LSLW */
{ CPUFUNC(op_e3d8_0), 58328}, /* LSLW */
{ CPUFUNC(op_e3e0_0), 58336}, /* LSLW */
{ CPUFUNC(op_e3e8_0), 58344}, /* LSLW */
{ CPUFUNC(op_e3f0_0), 58352}, /* LSLW */
{ CPUFUNC(op_e3f8_0), 58360}, /* LSLW */
{ CPUFUNC(op_e3f9_0), 58361}, /* LSLW */
{ CPUFUNC(op_e4d0_0), 58576}, /* ROXRW */
{ CPUFUNC(op_e4d8_0), 58584}, /* ROXRW */
{ CPUFUNC(op_e4e0_0), 58592}, /* ROXRW */
{ CPUFUNC(op_e4e8_0), 58600}, /* ROXRW */
{ CPUFUNC(op_e4f0_0), 58608}, /* ROXRW */
{ CPUFUNC(op_e4f8_0), 58616}, /* ROXRW */
{ CPUFUNC(op_e4f9_0), 58617}, /* ROXRW */
{ CPUFUNC(op_e5d0_0), 58832}, /* ROXLW */
{ CPUFUNC(op_e5d8_0), 58840}, /* ROXLW */
{ CPUFUNC(op_e5e0_0), 58848}, /* ROXLW */
{ CPUFUNC(op_e5e8_0), 58856}, /* ROXLW */
{ CPUFUNC(op_e5f0_0), 58864}, /* ROXLW */
{ CPUFUNC(op_e5f8_0), 58872}, /* ROXLW */
{ CPUFUNC(op_e5f9_0), 58873}, /* ROXLW */
{ CPUFUNC(op_e6d0_0), 59088}, /* RORW */
{ CPUFUNC(op_e6d8_0), 59096}, /* RORW */
{ CPUFUNC(op_e6e0_0), 59104}, /* RORW */
{ CPUFUNC(op_e6e8_0), 59112}, /* RORW */
{ CPUFUNC(op_e6f0_0), 59120}, /* RORW */
{ CPUFUNC(op_e6f8_0), 59128}, /* RORW */
{ CPUFUNC(op_e6f9_0), 59129}, /* RORW */
{ CPUFUNC(op_e7d0_0), 59344}, /* ROLW */
{ CPUFUNC(op_e7d8_0), 59352}, /* ROLW */
{ CPUFUNC(op_e7e0_0), 59360}, /* ROLW */
{ CPUFUNC(op_e7e8_0), 59368}, /* ROLW */
{ CPUFUNC(op_e7f0_0), 59376}, /* ROLW */
{ CPUFUNC(op_e7f8_0), 59384}, /* ROLW */
{ CPUFUNC(op_e7f9_0), 59385}, /* ROLW */
{ CPUFUNC(op_e8c0_0), 59584}, /* BFTST */
{ CPUFUNC(op_e8d0_0), 59600}, /* BFTST */
{ CPUFUNC(op_e8e8_0), 59624}, /* BFTST */
{ CPUFUNC(op_e8f0_0), 59632}, /* BFTST */
{ CPUFUNC(op_e8f8_0), 59640}, /* BFTST */
{ CPUFUNC(op_e8f9_0), 59641}, /* BFTST */
{ CPUFUNC(op_e8fa_0), 59642}, /* BFTST */
{ CPUFUNC(op_e8fb_0), 59643}, /* BFTST */
{ CPUFUNC(op_e9c0_0), 59840}, /* BFEXTU */
{ CPUFUNC(op_e9d0_0), 59856}, /* BFEXTU */
{ CPUFUNC(op_e9e8_0), 59880}, /* BFEXTU */
{ CPUFUNC(op_e9f0_0), 59888}, /* BFEXTU */
{ CPUFUNC(op_e9f8_0), 59896}, /* BFEXTU */
{ CPUFUNC(op_e9f9_0), 59897}, /* BFEXTU */
{ CPUFUNC(op_e9fa_0), 59898}, /* BFEXTU */
{ CPUFUNC(op_e9fb_0), 59899}, /* BFEXTU */
{ CPUFUNC(op_eac0_0), 60096}, /* BFCHG */
{ CPUFUNC(op_ead0_0), 60112}, /* BFCHG */
{ CPUFUNC(op_eae8_0), 60136}, /* BFCHG */
{ CPUFUNC(op_eaf0_0), 60144}, /* BFCHG */
{ CPUFUNC(op_eaf8_0), 60152}, /* BFCHG */
{ CPUFUNC(op_eaf9_0), 60153}, /* BFCHG */
{ CPUFUNC(op_ebc0_0), 60352}, /* BFEXTS */
{ CPUFUNC(op_ebd0_0), 60368}, /* BFEXTS */
{ CPUFUNC(op_ebe8_0), 60392}, /* BFEXTS */
{ CPUFUNC(op_ebf0_0), 60400}, /* BFEXTS */
{ CPUFUNC(op_ebf8_0), 60408}, /* BFEXTS */
{ CPUFUNC(op_ebf9_0), 60409}, /* BFEXTS */
{ CPUFUNC(op_ebfa_0), 60410}, /* BFEXTS */
{ CPUFUNC(op_ebfb_0), 60411}, /* BFEXTS */
{ CPUFUNC(op_ecc0_0), 60608}, /* BFCLR */
{ CPUFUNC(op_ecd0_0), 60624}, /* BFCLR */
{ CPUFUNC(op_ece8_0), 60648}, /* BFCLR */
{ CPUFUNC(op_ecf0_0), 60656}, /* BFCLR */
{ CPUFUNC(op_ecf8_0), 60664}, /* BFCLR */
{ CPUFUNC(op_ecf9_0), 60665}, /* BFCLR */
{ CPUFUNC(op_edc0_0), 60864}, /* BFFFO */
{ CPUFUNC(op_edd0_0), 60880}, /* BFFFO */
{ CPUFUNC(op_ede8_0), 60904}, /* BFFFO */
{ CPUFUNC(op_edf0_0), 60912}, /* BFFFO */
{ CPUFUNC(op_edf8_0), 60920}, /* BFFFO */
{ CPUFUNC(op_edf9_0), 60921}, /* BFFFO */
{ CPUFUNC(op_edfa_0), 60922}, /* BFFFO */
{ CPUFUNC(op_edfb_0), 60923}, /* BFFFO */
{ CPUFUNC(op_eec0_0), 61120}, /* BFSET */
{ CPUFUNC(op_eed0_0), 61136}, /* BFSET */
{ CPUFUNC(op_eee8_0), 61160}, /* BFSET */
{ CPUFUNC(op_eef0_0), 61168}, /* BFSET */
{ CPUFUNC(op_eef8_0), 61176}, /* BFSET */
{ CPUFUNC(op_eef9_0), 61177}, /* BFSET */
{ CPUFUNC(op_efc0_0), 61376}, /* BFINS */
{ CPUFUNC(op_efd0_0), 61392}, /* BFINS */
{ CPUFUNC(op_efe8_0), 61416}, /* BFINS */
{ CPUFUNC(op_eff0_0), 61424}, /* BFINS */
{ CPUFUNC(op_eff8_0), 61432}, /* BFINS */
{ CPUFUNC(op_eff9_0), 61433}, /* BFINS */
{ CPUFUNC(op_f200_0), 61952}, /* FPP */
{ CPUFUNC(op_f208_0), 61960}, /* FPP */
{ CPUFUNC(op_f210_0), 61968}, /* FPP */
{ CPUFUNC(op_f218_0), 61976}, /* FPP */
{ CPUFUNC(op_f220_0), 61984}, /* FPP */
{ CPUFUNC(op_f228_0), 61992}, /* FPP */
{ CPUFUNC(op_f230_0), 62000}, /* FPP */
{ CPUFUNC(op_f238_0), 62008}, /* FPP */
{ CPUFUNC(op_f239_0), 62009}, /* FPP */
{ CPUFUNC(op_f23a_0), 62010}, /* FPP */
{ CPUFUNC(op_f23b_0), 62011}, /* FPP */
{ CPUFUNC(op_f23c_0), 62012}, /* FPP */
{ CPUFUNC(op_f240_0), 62016}, /* FScc */
{ CPUFUNC(op_f248_0), 62024}, /* FDBcc */
{ CPUFUNC(op_f250_0), 62032}, /* FScc */
{ CPUFUNC(op_f258_0), 62040}, /* FScc */
{ CPUFUNC(op_f260_0), 62048}, /* FScc */
{ CPUFUNC(op_f268_0), 62056}, /* FScc */
{ CPUFUNC(op_f270_0), 62064}, /* FScc */
{ CPUFUNC(op_f278_0), 62072}, /* FScc */
{ CPUFUNC(op_f279_0), 62073}, /* FScc */
{ CPUFUNC(op_f27a_0), 62074}, /* FTRAPcc */
{ CPUFUNC(op_f27b_0), 62075}, /* FTRAPcc */
{ CPUFUNC(op_f27c_0), 62076}, /* FTRAPcc */
{ CPUFUNC(op_f280_0), 62080}, /* FBcc */
{ CPUFUNC(op_f2c0_0), 62144}, /* FBcc */
{ CPUFUNC(op_f310_0), 62224}, /* FSAVE */
{ CPUFUNC(op_f320_0), 62240}, /* FSAVE */
{ CPUFUNC(op_f328_0), 62248}, /* FSAVE */
{ CPUFUNC(op_f330_0), 62256}, /* FSAVE */
{ CPUFUNC(op_f338_0), 62264}, /* FSAVE */
{ CPUFUNC(op_f339_0), 62265}, /* FSAVE */
{ CPUFUNC(op_f350_0), 62288}, /* FRESTORE */
{ CPUFUNC(op_f358_0), 62296}, /* FRESTORE */
{ CPUFUNC(op_f368_0), 62312}, /* FRESTORE */
{ CPUFUNC(op_f370_0), 62320}, /* FRESTORE */
{ CPUFUNC(op_f378_0), 62328}, /* FRESTORE */
{ CPUFUNC(op_f379_0), 62329}, /* FRESTORE */
{ CPUFUNC(op_f37a_0), 62330}, /* FRESTORE */
{ CPUFUNC(op_f37b_0), 62331}, /* FRESTORE */
{ 0, 0 }};
#endif /* CPUEMU_68000_ONLY */
#ifndef CPUEMU_68000_ONLY
const struct cputbl CPUFUNC(op_smalltbl_2)[] = {
{ CPUFUNC(op_0000_0), 0}, /* OR */
{ CPUFUNC(op_0010_0), 16}, /* OR */
{ CPUFUNC(op_0018_0), 24}, /* OR */
{ CPUFUNC(op_0020_0), 32}, /* OR */
{ CPUFUNC(op_0028_0), 40}, /* OR */
{ CPUFUNC(op_0030_0), 48}, /* OR */
{ CPUFUNC(op_0038_0), 56}, /* OR */
{ CPUFUNC(op_0039_0), 57}, /* OR */
{ CPUFUNC(op_003c_0), 60}, /* ORSR */
{ CPUFUNC(op_0040_0), 64}, /* OR */
{ CPUFUNC(op_0050_0), 80}, /* OR */
{ CPUFUNC(op_0058_0), 88}, /* OR */
{ CPUFUNC(op_0060_0), 96}, /* OR */
{ CPUFUNC(op_0068_0), 104}, /* OR */
{ CPUFUNC(op_0070_0), 112}, /* OR */
{ CPUFUNC(op_0078_0), 120}, /* OR */
{ CPUFUNC(op_0079_0), 121}, /* OR */
{ CPUFUNC(op_007c_0), 124}, /* ORSR */
{ CPUFUNC(op_0080_0), 128}, /* OR */
{ CPUFUNC(op_0090_0), 144}, /* OR */
{ CPUFUNC(op_0098_0), 152}, /* OR */
{ CPUFUNC(op_00a0_0), 160}, /* OR */
{ CPUFUNC(op_00a8_0), 168}, /* OR */
{ CPUFUNC(op_00b0_0), 176}, /* OR */
{ CPUFUNC(op_00b8_0), 184}, /* OR */
{ CPUFUNC(op_00b9_0), 185}, /* OR */
{ CPUFUNC(op_00d0_0), 208}, /* CHK2 */
{ CPUFUNC(op_00e8_0), 232}, /* CHK2 */
{ CPUFUNC(op_00f0_0), 240}, /* CHK2 */
{ CPUFUNC(op_00f8_0), 248}, /* CHK2 */
{ CPUFUNC(op_00f9_0), 249}, /* CHK2 */
{ CPUFUNC(op_00fa_0), 250}, /* CHK2 */
{ CPUFUNC(op_00fb_0), 251}, /* CHK2 */
{ CPUFUNC(op_0100_0), 256}, /* BTST */
{ CPUFUNC(op_0108_0), 264}, /* MVPMR */
{ CPUFUNC(op_0110_0), 272}, /* BTST */
{ CPUFUNC(op_0118_0), 280}, /* BTST */
{ CPUFUNC(op_0120_0), 288}, /* BTST */
{ CPUFUNC(op_0128_0), 296}, /* BTST */
{ CPUFUNC(op_0130_0), 304}, /* BTST */
{ CPUFUNC(op_0138_0), 312}, /* BTST */
{ CPUFUNC(op_0139_0), 313}, /* BTST */
{ CPUFUNC(op_013a_0), 314}, /* BTST */
{ CPUFUNC(op_013b_0), 315}, /* BTST */
{ CPUFUNC(op_013c_0), 316}, /* BTST */
{ CPUFUNC(op_0140_0), 320}, /* BCHG */
{ CPUFUNC(op_0148_0), 328}, /* MVPMR */
{ CPUFUNC(op_0150_0), 336}, /* BCHG */
{ CPUFUNC(op_0158_0), 344}, /* BCHG */
{ CPUFUNC(op_0160_0), 352}, /* BCHG */
{ CPUFUNC(op_0168_0), 360}, /* BCHG */
{ CPUFUNC(op_0170_0), 368}, /* BCHG */
{ CPUFUNC(op_0178_0), 376}, /* BCHG */
{ CPUFUNC(op_0179_0), 377}, /* BCHG */
{ CPUFUNC(op_017a_0), 378}, /* BCHG */
{ CPUFUNC(op_017b_0), 379}, /* BCHG */
{ CPUFUNC(op_0180_0), 384}, /* BCLR */
{ CPUFUNC(op_0188_0), 392}, /* MVPRM */
{ CPUFUNC(op_0190_0), 400}, /* BCLR */
{ CPUFUNC(op_0198_0), 408}, /* BCLR */
{ CPUFUNC(op_01a0_0), 416}, /* BCLR */
{ CPUFUNC(op_01a8_0), 424}, /* BCLR */
{ CPUFUNC(op_01b0_0), 432}, /* BCLR */
{ CPUFUNC(op_01b8_0), 440}, /* BCLR */
{ CPUFUNC(op_01b9_0), 441}, /* BCLR */
{ CPUFUNC(op_01ba_0), 442}, /* BCLR */
{ CPUFUNC(op_01bb_0), 443}, /* BCLR */
{ CPUFUNC(op_01c0_0), 448}, /* BSET */
{ CPUFUNC(op_01c8_0), 456}, /* MVPRM */
{ CPUFUNC(op_01d0_0), 464}, /* BSET */
{ CPUFUNC(op_01d8_0), 472}, /* BSET */
{ CPUFUNC(op_01e0_0), 480}, /* BSET */
{ CPUFUNC(op_01e8_0), 488}, /* BSET */
{ CPUFUNC(op_01f0_0), 496}, /* BSET */
{ CPUFUNC(op_01f8_0), 504}, /* BSET */
{ CPUFUNC(op_01f9_0), 505}, /* BSET */
{ CPUFUNC(op_01fa_0), 506}, /* BSET */
{ CPUFUNC(op_01fb_0), 507}, /* BSET */
{ CPUFUNC(op_0200_0), 512}, /* AND */
{ CPUFUNC(op_0210_0), 528}, /* AND */
{ CPUFUNC(op_0218_0), 536}, /* AND */
{ CPUFUNC(op_0220_0), 544}, /* AND */
{ CPUFUNC(op_0228_0), 552}, /* AND */
{ CPUFUNC(op_0230_0), 560}, /* AND */
{ CPUFUNC(op_0238_0), 568}, /* AND */
{ CPUFUNC(op_0239_0), 569}, /* AND */
{ CPUFUNC(op_023c_0), 572}, /* ANDSR */
{ CPUFUNC(op_0240_0), 576}, /* AND */
{ CPUFUNC(op_0250_0), 592}, /* AND */
{ CPUFUNC(op_0258_0), 600}, /* AND */
{ CPUFUNC(op_0260_0), 608}, /* AND */
{ CPUFUNC(op_0268_0), 616}, /* AND */
{ CPUFUNC(op_0270_0), 624}, /* AND */
{ CPUFUNC(op_0278_0), 632}, /* AND */
{ CPUFUNC(op_0279_0), 633}, /* AND */
{ CPUFUNC(op_027c_0), 636}, /* ANDSR */
{ CPUFUNC(op_0280_0), 640}, /* AND */
{ CPUFUNC(op_0290_0), 656}, /* AND */
{ CPUFUNC(op_0298_0), 664}, /* AND */
{ CPUFUNC(op_02a0_0), 672}, /* AND */
{ CPUFUNC(op_02a8_0), 680}, /* AND */
{ CPUFUNC(op_02b0_0), 688}, /* AND */
{ CPUFUNC(op_02b8_0), 696}, /* AND */
{ CPUFUNC(op_02b9_0), 697}, /* AND */
{ CPUFUNC(op_02d0_0), 720}, /* CHK2 */
{ CPUFUNC(op_02e8_0), 744}, /* CHK2 */
{ CPUFUNC(op_02f0_0), 752}, /* CHK2 */
{ CPUFUNC(op_02f8_0), 760}, /* CHK2 */
{ CPUFUNC(op_02f9_0), 761}, /* CHK2 */
{ CPUFUNC(op_02fa_0), 762}, /* CHK2 */
{ CPUFUNC(op_02fb_0), 763}, /* CHK2 */
{ CPUFUNC(op_0400_0), 1024}, /* SUB */
{ CPUFUNC(op_0410_0), 1040}, /* SUB */
{ CPUFUNC(op_0418_0), 1048}, /* SUB */
{ CPUFUNC(op_0420_0), 1056}, /* SUB */
{ CPUFUNC(op_0428_0), 1064}, /* SUB */
{ CPUFUNC(op_0430_0), 1072}, /* SUB */
{ CPUFUNC(op_0438_0), 1080}, /* SUB */
{ CPUFUNC(op_0439_0), 1081}, /* SUB */
{ CPUFUNC(op_0440_0), 1088}, /* SUB */
{ CPUFUNC(op_0450_0), 1104}, /* SUB */
{ CPUFUNC(op_0458_0), 1112}, /* SUB */
{ CPUFUNC(op_0460_0), 1120}, /* SUB */
{ CPUFUNC(op_0468_0), 1128}, /* SUB */
{ CPUFUNC(op_0470_0), 1136}, /* SUB */
{ CPUFUNC(op_0478_0), 1144}, /* SUB */
{ CPUFUNC(op_0479_0), 1145}, /* SUB */
{ CPUFUNC(op_0480_0), 1152}, /* SUB */
{ CPUFUNC(op_0490_0), 1168}, /* SUB */
{ CPUFUNC(op_0498_0), 1176}, /* SUB */
{ CPUFUNC(op_04a0_0), 1184}, /* SUB */
{ CPUFUNC(op_04a8_0), 1192}, /* SUB */
{ CPUFUNC(op_04b0_0), 1200}, /* SUB */
{ CPUFUNC(op_04b8_0), 1208}, /* SUB */
{ CPUFUNC(op_04b9_0), 1209}, /* SUB */
{ CPUFUNC(op_04d0_0), 1232}, /* CHK2 */
{ CPUFUNC(op_04e8_0), 1256}, /* CHK2 */
{ CPUFUNC(op_04f0_0), 1264}, /* CHK2 */
{ CPUFUNC(op_04f8_0), 1272}, /* CHK2 */
{ CPUFUNC(op_04f9_0), 1273}, /* CHK2 */
{ CPUFUNC(op_04fa_0), 1274}, /* CHK2 */
{ CPUFUNC(op_04fb_0), 1275}, /* CHK2 */
{ CPUFUNC(op_0600_0), 1536}, /* ADD */
{ CPUFUNC(op_0610_0), 1552}, /* ADD */
{ CPUFUNC(op_0618_0), 1560}, /* ADD */
{ CPUFUNC(op_0620_0), 1568}, /* ADD */
{ CPUFUNC(op_0628_0), 1576}, /* ADD */
{ CPUFUNC(op_0630_0), 1584}, /* ADD */
{ CPUFUNC(op_0638_0), 1592}, /* ADD */
{ CPUFUNC(op_0639_0), 1593}, /* ADD */
{ CPUFUNC(op_0640_0), 1600}, /* ADD */
{ CPUFUNC(op_0650_0), 1616}, /* ADD */
{ CPUFUNC(op_0658_0), 1624}, /* ADD */
{ CPUFUNC(op_0660_0), 1632}, /* ADD */
{ CPUFUNC(op_0668_0), 1640}, /* ADD */
{ CPUFUNC(op_0670_0), 1648}, /* ADD */
{ CPUFUNC(op_0678_0), 1656}, /* ADD */
{ CPUFUNC(op_0679_0), 1657}, /* ADD */
{ CPUFUNC(op_0680_0), 1664}, /* ADD */
{ CPUFUNC(op_0690_0), 1680}, /* ADD */
{ CPUFUNC(op_0698_0), 1688}, /* ADD */
{ CPUFUNC(op_06a0_0), 1696}, /* ADD */
{ CPUFUNC(op_06a8_0), 1704}, /* ADD */
{ CPUFUNC(op_06b0_0), 1712}, /* ADD */
{ CPUFUNC(op_06b8_0), 1720}, /* ADD */
{ CPUFUNC(op_06b9_0), 1721}, /* ADD */
{ CPUFUNC(op_06c0_0), 1728}, /* RTM */
{ CPUFUNC(op_06c8_0), 1736}, /* RTM */
{ CPUFUNC(op_06d0_0), 1744}, /* CALLM */
{ CPUFUNC(op_06e8_0), 1768}, /* CALLM */
{ CPUFUNC(op_06f0_0), 1776}, /* CALLM */
{ CPUFUNC(op_06f8_0), 1784}, /* CALLM */
{ CPUFUNC(op_06f9_0), 1785}, /* CALLM */
{ CPUFUNC(op_06fa_0), 1786}, /* CALLM */
{ CPUFUNC(op_06fb_0), 1787}, /* CALLM */
{ CPUFUNC(op_0800_0), 2048}, /* BTST */
{ CPUFUNC(op_0810_0), 2064}, /* BTST */
{ CPUFUNC(op_0818_0), 2072}, /* BTST */
{ CPUFUNC(op_0820_0), 2080}, /* BTST */
{ CPUFUNC(op_0828_0), 2088}, /* BTST */
{ CPUFUNC(op_0830_0), 2096}, /* BTST */
{ CPUFUNC(op_0838_0), 2104}, /* BTST */
{ CPUFUNC(op_0839_0), 2105}, /* BTST */
{ CPUFUNC(op_083a_0), 2106}, /* BTST */
{ CPUFUNC(op_083b_0), 2107}, /* BTST */
{ CPUFUNC(op_083c_0), 2108}, /* BTST */
{ CPUFUNC(op_0840_0), 2112}, /* BCHG */
{ CPUFUNC(op_0850_0), 2128}, /* BCHG */
{ CPUFUNC(op_0858_0), 2136}, /* BCHG */
{ CPUFUNC(op_0860_0), 2144}, /* BCHG */
{ CPUFUNC(op_0868_0), 2152}, /* BCHG */
{ CPUFUNC(op_0870_0), 2160}, /* BCHG */
{ CPUFUNC(op_0878_0), 2168}, /* BCHG */
{ CPUFUNC(op_0879_0), 2169}, /* BCHG */
{ CPUFUNC(op_087a_0), 2170}, /* BCHG */
{ CPUFUNC(op_087b_0), 2171}, /* BCHG */
{ CPUFUNC(op_0880_0), 2176}, /* BCLR */
{ CPUFUNC(op_0890_0), 2192}, /* BCLR */
{ CPUFUNC(op_0898_0), 2200}, /* BCLR */
{ CPUFUNC(op_08a0_0), 2208}, /* BCLR */
{ CPUFUNC(op_08a8_0), 2216}, /* BCLR */
{ CPUFUNC(op_08b0_0), 2224}, /* BCLR */
{ CPUFUNC(op_08b8_0), 2232}, /* BCLR */
{ CPUFUNC(op_08b9_0), 2233}, /* BCLR */
{ CPUFUNC(op_08ba_0), 2234}, /* BCLR */
{ CPUFUNC(op_08bb_0), 2235}, /* BCLR */
{ CPUFUNC(op_08c0_0), 2240}, /* BSET */
{ CPUFUNC(op_08d0_0), 2256}, /* BSET */
{ CPUFUNC(op_08d8_0), 2264}, /* BSET */
{ CPUFUNC(op_08e0_0), 2272}, /* BSET */
{ CPUFUNC(op_08e8_0), 2280}, /* BSET */
{ CPUFUNC(op_08f0_0), 2288}, /* BSET */
{ CPUFUNC(op_08f8_0), 2296}, /* BSET */
{ CPUFUNC(op_08f9_0), 2297}, /* BSET */
{ CPUFUNC(op_08fa_0), 2298}, /* BSET */
{ CPUFUNC(op_08fb_0), 2299}, /* BSET */
{ CPUFUNC(op_0a00_0), 2560}, /* EOR */
{ CPUFUNC(op_0a10_0), 2576}, /* EOR */
{ CPUFUNC(op_0a18_0), 2584}, /* EOR */
{ CPUFUNC(op_0a20_0), 2592}, /* EOR */
{ CPUFUNC(op_0a28_0), 2600}, /* EOR */
{ CPUFUNC(op_0a30_0), 2608}, /* EOR */
{ CPUFUNC(op_0a38_0), 2616}, /* EOR */
{ CPUFUNC(op_0a39_0), 2617}, /* EOR */
{ CPUFUNC(op_0a3c_0), 2620}, /* EORSR */
{ CPUFUNC(op_0a40_0), 2624}, /* EOR */
{ CPUFUNC(op_0a50_0), 2640}, /* EOR */
{ CPUFUNC(op_0a58_0), 2648}, /* EOR */
{ CPUFUNC(op_0a60_0), 2656}, /* EOR */
{ CPUFUNC(op_0a68_0), 2664}, /* EOR */
{ CPUFUNC(op_0a70_0), 2672}, /* EOR */
{ CPUFUNC(op_0a78_0), 2680}, /* EOR */
{ CPUFUNC(op_0a79_0), 2681}, /* EOR */
{ CPUFUNC(op_0a7c_0), 2684}, /* EORSR */
{ CPUFUNC(op_0a80_0), 2688}, /* EOR */
{ CPUFUNC(op_0a90_0), 2704}, /* EOR */
{ CPUFUNC(op_0a98_0), 2712}, /* EOR */
{ CPUFUNC(op_0aa0_0), 2720}, /* EOR */
{ CPUFUNC(op_0aa8_0), 2728}, /* EOR */
{ CPUFUNC(op_0ab0_0), 2736}, /* EOR */
{ CPUFUNC(op_0ab8_0), 2744}, /* EOR */
{ CPUFUNC(op_0ab9_0), 2745}, /* EOR */
{ CPUFUNC(op_0ad0_0), 2768}, /* CAS */
{ CPUFUNC(op_0ad8_0), 2776}, /* CAS */
{ CPUFUNC(op_0ae0_0), 2784}, /* CAS */
{ CPUFUNC(op_0ae8_0), 2792}, /* CAS */
{ CPUFUNC(op_0af0_0), 2800}, /* CAS */
{ CPUFUNC(op_0af8_0), 2808}, /* CAS */
{ CPUFUNC(op_0af9_0), 2809}, /* CAS */
{ CPUFUNC(op_0c00_0), 3072}, /* CMP */
{ CPUFUNC(op_0c10_0), 3088}, /* CMP */
{ CPUFUNC(op_0c18_0), 3096}, /* CMP */
{ CPUFUNC(op_0c20_0), 3104}, /* CMP */
{ CPUFUNC(op_0c28_0), 3112}, /* CMP */
{ CPUFUNC(op_0c30_0), 3120}, /* CMP */
{ CPUFUNC(op_0c38_0), 3128}, /* CMP */
{ CPUFUNC(op_0c39_0), 3129}, /* CMP */
{ CPUFUNC(op_0c3a_0), 3130}, /* CMP */
{ CPUFUNC(op_0c3b_0), 3131}, /* CMP */
{ CPUFUNC(op_0c40_0), 3136}, /* CMP */
{ CPUFUNC(op_0c50_0), 3152}, /* CMP */
{ CPUFUNC(op_0c58_0), 3160}, /* CMP */
{ CPUFUNC(op_0c60_0), 3168}, /* CMP */
{ CPUFUNC(op_0c68_0), 3176}, /* CMP */
{ CPUFUNC(op_0c70_0), 3184}, /* CMP */
{ CPUFUNC(op_0c78_0), 3192}, /* CMP */
{ CPUFUNC(op_0c79_0), 3193}, /* CMP */
{ CPUFUNC(op_0c7a_0), 3194}, /* CMP */
{ CPUFUNC(op_0c7b_0), 3195}, /* CMP */
{ CPUFUNC(op_0c80_0), 3200}, /* CMP */
{ CPUFUNC(op_0c90_0), 3216}, /* CMP */
{ CPUFUNC(op_0c98_0), 3224}, /* CMP */
{ CPUFUNC(op_0ca0_0), 3232}, /* CMP */
{ CPUFUNC(op_0ca8_0), 3240}, /* CMP */
{ CPUFUNC(op_0cb0_0), 3248}, /* CMP */
{ CPUFUNC(op_0cb8_0), 3256}, /* CMP */
{ CPUFUNC(op_0cb9_0), 3257}, /* CMP */
{ CPUFUNC(op_0cba_0), 3258}, /* CMP */
{ CPUFUNC(op_0cbb_0), 3259}, /* CMP */
{ CPUFUNC(op_0cd0_0), 3280}, /* CAS */
{ CPUFUNC(op_0cd8_0), 3288}, /* CAS */
{ CPUFUNC(op_0ce0_0), 3296}, /* CAS */
{ CPUFUNC(op_0ce8_0), 3304}, /* CAS */
{ CPUFUNC(op_0cf0_0), 3312}, /* CAS */
{ CPUFUNC(op_0cf8_0), 3320}, /* CAS */
{ CPUFUNC(op_0cf9_0), 3321}, /* CAS */
{ CPUFUNC(op_0cfc_0), 3324}, /* CAS2 */
{ CPUFUNC(op_0e10_0), 3600}, /* MOVES */
{ CPUFUNC(op_0e18_0), 3608}, /* MOVES */
{ CPUFUNC(op_0e20_0), 3616}, /* MOVES */
{ CPUFUNC(op_0e28_0), 3624}, /* MOVES */
{ CPUFUNC(op_0e30_0), 3632}, /* MOVES */
{ CPUFUNC(op_0e38_0), 3640}, /* MOVES */
{ CPUFUNC(op_0e39_0), 3641}, /* MOVES */
{ CPUFUNC(op_0e50_0), 3664}, /* MOVES */
{ CPUFUNC(op_0e58_0), 3672}, /* MOVES */
{ CPUFUNC(op_0e60_0), 3680}, /* MOVES */
{ CPUFUNC(op_0e68_0), 3688}, /* MOVES */
{ CPUFUNC(op_0e70_0), 3696}, /* MOVES */
{ CPUFUNC(op_0e78_0), 3704}, /* MOVES */
{ CPUFUNC(op_0e79_0), 3705}, /* MOVES */
{ CPUFUNC(op_0e90_0), 3728}, /* MOVES */
{ CPUFUNC(op_0e98_0), 3736}, /* MOVES */
{ CPUFUNC(op_0ea0_0), 3744}, /* MOVES */
{ CPUFUNC(op_0ea8_0), 3752}, /* MOVES */
{ CPUFUNC(op_0eb0_0), 3760}, /* MOVES */
{ CPUFUNC(op_0eb8_0), 3768}, /* MOVES */
{ CPUFUNC(op_0eb9_0), 3769}, /* MOVES */
{ CPUFUNC(op_0ed0_0), 3792}, /* CAS */
{ CPUFUNC(op_0ed8_0), 3800}, /* CAS */
{ CPUFUNC(op_0ee0_0), 3808}, /* CAS */
{ CPUFUNC(op_0ee8_0), 3816}, /* CAS */
{ CPUFUNC(op_0ef0_0), 3824}, /* CAS */
{ CPUFUNC(op_0ef8_0), 3832}, /* CAS */
{ CPUFUNC(op_0ef9_0), 3833}, /* CAS */
{ CPUFUNC(op_0efc_0), 3836}, /* CAS2 */
{ CPUFUNC(op_1000_0), 4096}, /* MOVE */
{ CPUFUNC(op_1010_0), 4112}, /* MOVE */
{ CPUFUNC(op_1018_0), 4120}, /* MOVE */
{ CPUFUNC(op_1020_0), 4128}, /* MOVE */
{ CPUFUNC(op_1028_0), 4136}, /* MOVE */
{ CPUFUNC(op_1030_0), 4144}, /* MOVE */
{ CPUFUNC(op_1038_0), 4152}, /* MOVE */
{ CPUFUNC(op_1039_0), 4153}, /* MOVE */
{ CPUFUNC(op_103a_0), 4154}, /* MOVE */
{ CPUFUNC(op_103b_0), 4155}, /* MOVE */
{ CPUFUNC(op_103c_0), 4156}, /* MOVE */
{ CPUFUNC(op_1080_0), 4224}, /* MOVE */
{ CPUFUNC(op_1090_0), 4240}, /* MOVE */
{ CPUFUNC(op_1098_0), 4248}, /* MOVE */
{ CPUFUNC(op_10a0_0), 4256}, /* MOVE */
{ CPUFUNC(op_10a8_0), 4264}, /* MOVE */
{ CPUFUNC(op_10b0_0), 4272}, /* MOVE */
{ CPUFUNC(op_10b8_0), 4280}, /* MOVE */
{ CPUFUNC(op_10b9_0), 4281}, /* MOVE */
{ CPUFUNC(op_10ba_0), 4282}, /* MOVE */
{ CPUFUNC(op_10bb_0), 4283}, /* MOVE */
{ CPUFUNC(op_10bc_0), 4284}, /* MOVE */
{ CPUFUNC(op_10c0_0), 4288}, /* MOVE */
{ CPUFUNC(op_10d0_0), 4304}, /* MOVE */
{ CPUFUNC(op_10d8_0), 4312}, /* MOVE */
{ CPUFUNC(op_10e0_0), 4320}, /* MOVE */
{ CPUFUNC(op_10e8_0), 4328}, /* MOVE */
{ CPUFUNC(op_10f0_0), 4336}, /* MOVE */
{ CPUFUNC(op_10f8_0), 4344}, /* MOVE */
{ CPUFUNC(op_10f9_0), 4345}, /* MOVE */
{ CPUFUNC(op_10fa_0), 4346}, /* MOVE */
{ CPUFUNC(op_10fb_0), 4347}, /* MOVE */
{ CPUFUNC(op_10fc_0), 4348}, /* MOVE */
{ CPUFUNC(op_1100_0), 4352}, /* MOVE */
{ CPUFUNC(op_1110_0), 4368}, /* MOVE */
{ CPUFUNC(op_1118_0), 4376}, /* MOVE */
{ CPUFUNC(op_1120_0), 4384}, /* MOVE */
{ CPUFUNC(op_1128_0), 4392}, /* MOVE */
{ CPUFUNC(op_1130_0), 4400}, /* MOVE */
{ CPUFUNC(op_1138_0), 4408}, /* MOVE */
{ CPUFUNC(op_1139_0), 4409}, /* MOVE */
{ CPUFUNC(op_113a_0), 4410}, /* MOVE */
{ CPUFUNC(op_113b_0), 4411}, /* MOVE */
{ CPUFUNC(op_113c_0), 4412}, /* MOVE */
{ CPUFUNC(op_1140_0), 4416}, /* MOVE */
{ CPUFUNC(op_1150_0), 4432}, /* MOVE */
{ CPUFUNC(op_1158_0), 4440}, /* MOVE */
{ CPUFUNC(op_1160_0), 4448}, /* MOVE */
{ CPUFUNC(op_1168_0), 4456}, /* MOVE */
{ CPUFUNC(op_1170_0), 4464}, /* MOVE */
{ CPUFUNC(op_1178_0), 4472}, /* MOVE */
{ CPUFUNC(op_1179_0), 4473}, /* MOVE */
{ CPUFUNC(op_117a_0), 4474}, /* MOVE */
{ CPUFUNC(op_117b_0), 4475}, /* MOVE */
{ CPUFUNC(op_117c_0), 4476}, /* MOVE */
{ CPUFUNC(op_1180_0), 4480}, /* MOVE */
{ CPUFUNC(op_1190_0), 4496}, /* MOVE */
{ CPUFUNC(op_1198_0), 4504}, /* MOVE */
{ CPUFUNC(op_11a0_0), 4512}, /* MOVE */
{ CPUFUNC(op_11a8_0), 4520}, /* MOVE */
{ CPUFUNC(op_11b0_0), 4528}, /* MOVE */
{ CPUFUNC(op_11b8_0), 4536}, /* MOVE */
{ CPUFUNC(op_11b9_0), 4537}, /* MOVE */
{ CPUFUNC(op_11ba_0), 4538}, /* MOVE */
{ CPUFUNC(op_11bb_0), 4539}, /* MOVE */
{ CPUFUNC(op_11bc_0), 4540}, /* MOVE */
{ CPUFUNC(op_11c0_0), 4544}, /* MOVE */
{ CPUFUNC(op_11d0_0), 4560}, /* MOVE */
{ CPUFUNC(op_11d8_0), 4568}, /* MOVE */
{ CPUFUNC(op_11e0_0), 4576}, /* MOVE */
{ CPUFUNC(op_11e8_0), 4584}, /* MOVE */
{ CPUFUNC(op_11f0_0), 4592}, /* MOVE */
{ CPUFUNC(op_11f8_0), 4600}, /* MOVE */
{ CPUFUNC(op_11f9_0), 4601}, /* MOVE */
{ CPUFUNC(op_11fa_0), 4602}, /* MOVE */
{ CPUFUNC(op_11fb_0), 4603}, /* MOVE */
{ CPUFUNC(op_11fc_0), 4604}, /* MOVE */
{ CPUFUNC(op_13c0_0), 5056}, /* MOVE */
{ CPUFUNC(op_13d0_0), 5072}, /* MOVE */
{ CPUFUNC(op_13d8_0), 5080}, /* MOVE */
{ CPUFUNC(op_13e0_0), 5088}, /* MOVE */
{ CPUFUNC(op_13e8_0), 5096}, /* MOVE */
{ CPUFUNC(op_13f0_0), 5104}, /* MOVE */
{ CPUFUNC(op_13f8_0), 5112}, /* MOVE */
{ CPUFUNC(op_13f9_0), 5113}, /* MOVE */
{ CPUFUNC(op_13fa_0), 5114}, /* MOVE */
{ CPUFUNC(op_13fb_0), 5115}, /* MOVE */
{ CPUFUNC(op_13fc_0), 5116}, /* MOVE */
{ CPUFUNC(op_2000_0), 8192}, /* MOVE */
{ CPUFUNC(op_2008_0), 8200}, /* MOVE */
{ CPUFUNC(op_2010_0), 8208}, /* MOVE */
{ CPUFUNC(op_2018_0), 8216}, /* MOVE */
{ CPUFUNC(op_2020_0), 8224}, /* MOVE */
{ CPUFUNC(op_2028_0), 8232}, /* MOVE */
{ CPUFUNC(op_2030_0), 8240}, /* MOVE */
{ CPUFUNC(op_2038_0), 8248}, /* MOVE */
{ CPUFUNC(op_2039_0), 8249}, /* MOVE */
{ CPUFUNC(op_203a_0), 8250}, /* MOVE */
{ CPUFUNC(op_203b_0), 8251}, /* MOVE */
{ CPUFUNC(op_203c_0), 8252}, /* MOVE */
{ CPUFUNC(op_2040_0), 8256}, /* MOVEA */
{ CPUFUNC(op_2048_0), 8264}, /* MOVEA */
{ CPUFUNC(op_2050_0), 8272}, /* MOVEA */
{ CPUFUNC(op_2058_0), 8280}, /* MOVEA */
{ CPUFUNC(op_2060_0), 8288}, /* MOVEA */
{ CPUFUNC(op_2068_0), 8296}, /* MOVEA */
{ CPUFUNC(op_2070_0), 8304}, /* MOVEA */
{ CPUFUNC(op_2078_0), 8312}, /* MOVEA */
{ CPUFUNC(op_2079_0), 8313}, /* MOVEA */
{ CPUFUNC(op_207a_0), 8314}, /* MOVEA */
{ CPUFUNC(op_207b_0), 8315}, /* MOVEA */
{ CPUFUNC(op_207c_0), 8316}, /* MOVEA */
{ CPUFUNC(op_2080_0), 8320}, /* MOVE */
{ CPUFUNC(op_2088_0), 8328}, /* MOVE */
{ CPUFUNC(op_2090_0), 8336}, /* MOVE */
{ CPUFUNC(op_2098_0), 8344}, /* MOVE */
{ CPUFUNC(op_20a0_0), 8352}, /* MOVE */
{ CPUFUNC(op_20a8_0), 8360}, /* MOVE */
{ CPUFUNC(op_20b0_0), 8368}, /* MOVE */
{ CPUFUNC(op_20b8_0), 8376}, /* MOVE */
{ CPUFUNC(op_20b9_0), 8377}, /* MOVE */
{ CPUFUNC(op_20ba_0), 8378}, /* MOVE */
{ CPUFUNC(op_20bb_0), 8379}, /* MOVE */
{ CPUFUNC(op_20bc_0), 8380}, /* MOVE */
{ CPUFUNC(op_20c0_0), 8384}, /* MOVE */
{ CPUFUNC(op_20c8_0), 8392}, /* MOVE */
{ CPUFUNC(op_20d0_0), 8400}, /* MOVE */
{ CPUFUNC(op_20d8_0), 8408}, /* MOVE */
{ CPUFUNC(op_20e0_0), 8416}, /* MOVE */
{ CPUFUNC(op_20e8_0), 8424}, /* MOVE */
{ CPUFUNC(op_20f0_0), 8432}, /* MOVE */
{ CPUFUNC(op_20f8_0), 8440}, /* MOVE */
{ CPUFUNC(op_20f9_0), 8441}, /* MOVE */
{ CPUFUNC(op_20fa_0), 8442}, /* MOVE */
{ CPUFUNC(op_20fb_0), 8443}, /* MOVE */
{ CPUFUNC(op_20fc_0), 8444}, /* MOVE */
{ CPUFUNC(op_2100_0), 8448}, /* MOVE */
{ CPUFUNC(op_2108_0), 8456}, /* MOVE */
{ CPUFUNC(op_2110_0), 8464}, /* MOVE */
{ CPUFUNC(op_2118_0), 8472}, /* MOVE */
{ CPUFUNC(op_2120_0), 8480}, /* MOVE */
{ CPUFUNC(op_2128_0), 8488}, /* MOVE */
{ CPUFUNC(op_2130_0), 8496}, /* MOVE */
{ CPUFUNC(op_2138_0), 8504}, /* MOVE */
{ CPUFUNC(op_2139_0), 8505}, /* MOVE */
{ CPUFUNC(op_213a_0), 8506}, /* MOVE */
{ CPUFUNC(op_213b_0), 8507}, /* MOVE */
{ CPUFUNC(op_213c_0), 8508}, /* MOVE */
{ CPUFUNC(op_2140_0), 8512}, /* MOVE */
{ CPUFUNC(op_2148_0), 8520}, /* MOVE */
{ CPUFUNC(op_2150_0), 8528}, /* MOVE */
{ CPUFUNC(op_2158_0), 8536}, /* MOVE */
{ CPUFUNC(op_2160_0), 8544}, /* MOVE */
{ CPUFUNC(op_2168_0), 8552}, /* MOVE */
{ CPUFUNC(op_2170_0), 8560}, /* MOVE */
{ CPUFUNC(op_2178_0), 8568}, /* MOVE */
{ CPUFUNC(op_2179_0), 8569}, /* MOVE */
{ CPUFUNC(op_217a_0), 8570}, /* MOVE */
{ CPUFUNC(op_217b_0), 8571}, /* MOVE */
{ CPUFUNC(op_217c_0), 8572}, /* MOVE */
{ CPUFUNC(op_2180_0), 8576}, /* MOVE */
{ CPUFUNC(op_2188_0), 8584}, /* MOVE */
{ CPUFUNC(op_2190_0), 8592}, /* MOVE */
{ CPUFUNC(op_2198_0), 8600}, /* MOVE */
{ CPUFUNC(op_21a0_0), 8608}, /* MOVE */
{ CPUFUNC(op_21a8_0), 8616}, /* MOVE */
{ CPUFUNC(op_21b0_0), 8624}, /* MOVE */
{ CPUFUNC(op_21b8_0), 8632}, /* MOVE */
{ CPUFUNC(op_21b9_0), 8633}, /* MOVE */
{ CPUFUNC(op_21ba_0), 8634}, /* MOVE */
{ CPUFUNC(op_21bb_0), 8635}, /* MOVE */
{ CPUFUNC(op_21bc_0), 8636}, /* MOVE */
{ CPUFUNC(op_21c0_0), 8640}, /* MOVE */
{ CPUFUNC(op_21c8_0), 8648}, /* MOVE */
{ CPUFUNC(op_21d0_0), 8656}, /* MOVE */
{ CPUFUNC(op_21d8_0), 8664}, /* MOVE */
{ CPUFUNC(op_21e0_0), 8672}, /* MOVE */
{ CPUFUNC(op_21e8_0), 8680}, /* MOVE */
{ CPUFUNC(op_21f0_0), 8688}, /* MOVE */
{ CPUFUNC(op_21f8_0), 8696}, /* MOVE */
{ CPUFUNC(op_21f9_0), 8697}, /* MOVE */
{ CPUFUNC(op_21fa_0), 8698}, /* MOVE */
{ CPUFUNC(op_21fb_0), 8699}, /* MOVE */
{ CPUFUNC(op_21fc_0), 8700}, /* MOVE */
{ CPUFUNC(op_23c0_0), 9152}, /* MOVE */
{ CPUFUNC(op_23c8_0), 9160}, /* MOVE */
{ CPUFUNC(op_23d0_0), 9168}, /* MOVE */
{ CPUFUNC(op_23d8_0), 9176}, /* MOVE */
{ CPUFUNC(op_23e0_0), 9184}, /* MOVE */
{ CPUFUNC(op_23e8_0), 9192}, /* MOVE */
{ CPUFUNC(op_23f0_0), 9200}, /* MOVE */
{ CPUFUNC(op_23f8_0), 9208}, /* MOVE */
{ CPUFUNC(op_23f9_0), 9209}, /* MOVE */
{ CPUFUNC(op_23fa_0), 9210}, /* MOVE */
{ CPUFUNC(op_23fb_0), 9211}, /* MOVE */
{ CPUFUNC(op_23fc_0), 9212}, /* MOVE */
{ CPUFUNC(op_3000_0), 12288}, /* MOVE */
{ CPUFUNC(op_3008_0), 12296}, /* MOVE */
{ CPUFUNC(op_3010_0), 12304}, /* MOVE */
{ CPUFUNC(op_3018_0), 12312}, /* MOVE */
{ CPUFUNC(op_3020_0), 12320}, /* MOVE */
{ CPUFUNC(op_3028_0), 12328}, /* MOVE */
{ CPUFUNC(op_3030_0), 12336}, /* MOVE */
{ CPUFUNC(op_3038_0), 12344}, /* MOVE */
{ CPUFUNC(op_3039_0), 12345}, /* MOVE */
{ CPUFUNC(op_303a_0), 12346}, /* MOVE */
{ CPUFUNC(op_303b_0), 12347}, /* MOVE */
{ CPUFUNC(op_303c_0), 12348}, /* MOVE */
{ CPUFUNC(op_3040_0), 12352}, /* MOVEA */
{ CPUFUNC(op_3048_0), 12360}, /* MOVEA */
{ CPUFUNC(op_3050_0), 12368}, /* MOVEA */
{ CPUFUNC(op_3058_0), 12376}, /* MOVEA */
{ CPUFUNC(op_3060_0), 12384}, /* MOVEA */
{ CPUFUNC(op_3068_0), 12392}, /* MOVEA */
{ CPUFUNC(op_3070_0), 12400}, /* MOVEA */
{ CPUFUNC(op_3078_0), 12408}, /* MOVEA */
{ CPUFUNC(op_3079_0), 12409}, /* MOVEA */
{ CPUFUNC(op_307a_0), 12410}, /* MOVEA */
{ CPUFUNC(op_307b_0), 12411}, /* MOVEA */
{ CPUFUNC(op_307c_0), 12412}, /* MOVEA */
{ CPUFUNC(op_3080_0), 12416}, /* MOVE */
{ CPUFUNC(op_3088_0), 12424}, /* MOVE */
{ CPUFUNC(op_3090_0), 12432}, /* MOVE */
{ CPUFUNC(op_3098_0), 12440}, /* MOVE */
{ CPUFUNC(op_30a0_0), 12448}, /* MOVE */
{ CPUFUNC(op_30a8_0), 12456}, /* MOVE */
{ CPUFUNC(op_30b0_0), 12464}, /* MOVE */
{ CPUFUNC(op_30b8_0), 12472}, /* MOVE */
{ CPUFUNC(op_30b9_0), 12473}, /* MOVE */
{ CPUFUNC(op_30ba_0), 12474}, /* MOVE */
{ CPUFUNC(op_30bb_0), 12475}, /* MOVE */
{ CPUFUNC(op_30bc_0), 12476}, /* MOVE */
{ CPUFUNC(op_30c0_0), 12480}, /* MOVE */
{ CPUFUNC(op_30c8_0), 12488}, /* MOVE */
{ CPUFUNC(op_30d0_0), 12496}, /* MOVE */
{ CPUFUNC(op_30d8_0), 12504}, /* MOVE */
{ CPUFUNC(op_30e0_0), 12512}, /* MOVE */
{ CPUFUNC(op_30e8_0), 12520}, /* MOVE */
{ CPUFUNC(op_30f0_0), 12528}, /* MOVE */
{ CPUFUNC(op_30f8_0), 12536}, /* MOVE */
{ CPUFUNC(op_30f9_0), 12537}, /* MOVE */
{ CPUFUNC(op_30fa_0), 12538}, /* MOVE */
{ CPUFUNC(op_30fb_0), 12539}, /* MOVE */
{ CPUFUNC(op_30fc_0), 12540}, /* MOVE */
{ CPUFUNC(op_3100_0), 12544}, /* MOVE */
{ CPUFUNC(op_3108_0), 12552}, /* MOVE */
{ CPUFUNC(op_3110_0), 12560}, /* MOVE */
{ CPUFUNC(op_3118_0), 12568}, /* MOVE */
{ CPUFUNC(op_3120_0), 12576}, /* MOVE */
{ CPUFUNC(op_3128_0), 12584}, /* MOVE */
{ CPUFUNC(op_3130_0), 12592}, /* MOVE */
{ CPUFUNC(op_3138_0), 12600}, /* MOVE */
{ CPUFUNC(op_3139_0), 12601}, /* MOVE */
{ CPUFUNC(op_313a_0), 12602}, /* MOVE */
{ CPUFUNC(op_313b_0), 12603}, /* MOVE */
{ CPUFUNC(op_313c_0), 12604}, /* MOVE */
{ CPUFUNC(op_3140_0), 12608}, /* MOVE */
{ CPUFUNC(op_3148_0), 12616}, /* MOVE */
{ CPUFUNC(op_3150_0), 12624}, /* MOVE */
{ CPUFUNC(op_3158_0), 12632}, /* MOVE */
{ CPUFUNC(op_3160_0), 12640}, /* MOVE */
{ CPUFUNC(op_3168_0), 12648}, /* MOVE */
{ CPUFUNC(op_3170_0), 12656}, /* MOVE */
{ CPUFUNC(op_3178_0), 12664}, /* MOVE */
{ CPUFUNC(op_3179_0), 12665}, /* MOVE */
{ CPUFUNC(op_317a_0), 12666}, /* MOVE */
{ CPUFUNC(op_317b_0), 12667}, /* MOVE */
{ CPUFUNC(op_317c_0), 12668}, /* MOVE */
{ CPUFUNC(op_3180_0), 12672}, /* MOVE */
{ CPUFUNC(op_3188_0), 12680}, /* MOVE */
{ CPUFUNC(op_3190_0), 12688}, /* MOVE */
{ CPUFUNC(op_3198_0), 12696}, /* MOVE */
{ CPUFUNC(op_31a0_0), 12704}, /* MOVE */
{ CPUFUNC(op_31a8_0), 12712}, /* MOVE */
{ CPUFUNC(op_31b0_0), 12720}, /* MOVE */
{ CPUFUNC(op_31b8_0), 12728}, /* MOVE */
{ CPUFUNC(op_31b9_0), 12729}, /* MOVE */
{ CPUFUNC(op_31ba_0), 12730}, /* MOVE */
{ CPUFUNC(op_31bb_0), 12731}, /* MOVE */
{ CPUFUNC(op_31bc_0), 12732}, /* MOVE */
{ CPUFUNC(op_31c0_0), 12736}, /* MOVE */
{ CPUFUNC(op_31c8_0), 12744}, /* MOVE */
{ CPUFUNC(op_31d0_0), 12752}, /* MOVE */
{ CPUFUNC(op_31d8_0), 12760}, /* MOVE */
{ CPUFUNC(op_31e0_0), 12768}, /* MOVE */
{ CPUFUNC(op_31e8_0), 12776}, /* MOVE */
{ CPUFUNC(op_31f0_0), 12784}, /* MOVE */
{ CPUFUNC(op_31f8_0), 12792}, /* MOVE */
{ CPUFUNC(op_31f9_0), 12793}, /* MOVE */
{ CPUFUNC(op_31fa_0), 12794}, /* MOVE */
{ CPUFUNC(op_31fb_0), 12795}, /* MOVE */
{ CPUFUNC(op_31fc_0), 12796}, /* MOVE */
{ CPUFUNC(op_33c0_0), 13248}, /* MOVE */
{ CPUFUNC(op_33c8_0), 13256}, /* MOVE */
{ CPUFUNC(op_33d0_0), 13264}, /* MOVE */
{ CPUFUNC(op_33d8_0), 13272}, /* MOVE */
{ CPUFUNC(op_33e0_0), 13280}, /* MOVE */
{ CPUFUNC(op_33e8_0), 13288}, /* MOVE */
{ CPUFUNC(op_33f0_0), 13296}, /* MOVE */
{ CPUFUNC(op_33f8_0), 13304}, /* MOVE */
{ CPUFUNC(op_33f9_0), 13305}, /* MOVE */
{ CPUFUNC(op_33fa_0), 13306}, /* MOVE */
{ CPUFUNC(op_33fb_0), 13307}, /* MOVE */
{ CPUFUNC(op_33fc_0), 13308}, /* MOVE */
{ CPUFUNC(op_4000_0), 16384}, /* NEGX */
{ CPUFUNC(op_4010_0), 16400}, /* NEGX */
{ CPUFUNC(op_4018_0), 16408}, /* NEGX */
{ CPUFUNC(op_4020_0), 16416}, /* NEGX */
{ CPUFUNC(op_4028_0), 16424}, /* NEGX */
{ CPUFUNC(op_4030_0), 16432}, /* NEGX */
{ CPUFUNC(op_4038_0), 16440}, /* NEGX */
{ CPUFUNC(op_4039_0), 16441}, /* NEGX */
{ CPUFUNC(op_4040_0), 16448}, /* NEGX */
{ CPUFUNC(op_4050_0), 16464}, /* NEGX */
{ CPUFUNC(op_4058_0), 16472}, /* NEGX */
{ CPUFUNC(op_4060_0), 16480}, /* NEGX */
{ CPUFUNC(op_4068_0), 16488}, /* NEGX */
{ CPUFUNC(op_4070_0), 16496}, /* NEGX */
{ CPUFUNC(op_4078_0), 16504}, /* NEGX */
{ CPUFUNC(op_4079_0), 16505}, /* NEGX */
{ CPUFUNC(op_4080_0), 16512}, /* NEGX */
{ CPUFUNC(op_4090_0), 16528}, /* NEGX */
{ CPUFUNC(op_4098_0), 16536}, /* NEGX */
{ CPUFUNC(op_40a0_0), 16544}, /* NEGX */
{ CPUFUNC(op_40a8_0), 16552}, /* NEGX */
{ CPUFUNC(op_40b0_0), 16560}, /* NEGX */
{ CPUFUNC(op_40b8_0), 16568}, /* NEGX */
{ CPUFUNC(op_40b9_0), 16569}, /* NEGX */
{ CPUFUNC(op_40c0_0), 16576}, /* MVSR2 */
{ CPUFUNC(op_40d0_0), 16592}, /* MVSR2 */
{ CPUFUNC(op_40d8_0), 16600}, /* MVSR2 */
{ CPUFUNC(op_40e0_0), 16608}, /* MVSR2 */
{ CPUFUNC(op_40e8_0), 16616}, /* MVSR2 */
{ CPUFUNC(op_40f0_0), 16624}, /* MVSR2 */
{ CPUFUNC(op_40f8_0), 16632}, /* MVSR2 */
{ CPUFUNC(op_40f9_0), 16633}, /* MVSR2 */
{ CPUFUNC(op_4100_0), 16640}, /* CHK */
{ CPUFUNC(op_4110_0), 16656}, /* CHK */
{ CPUFUNC(op_4118_0), 16664}, /* CHK */
{ CPUFUNC(op_4120_0), 16672}, /* CHK */
{ CPUFUNC(op_4128_0), 16680}, /* CHK */
{ CPUFUNC(op_4130_0), 16688}, /* CHK */
{ CPUFUNC(op_4138_0), 16696}, /* CHK */
{ CPUFUNC(op_4139_0), 16697}, /* CHK */
{ CPUFUNC(op_413a_0), 16698}, /* CHK */
{ CPUFUNC(op_413b_0), 16699}, /* CHK */
{ CPUFUNC(op_413c_0), 16700}, /* CHK */
{ CPUFUNC(op_4180_0), 16768}, /* CHK */
{ CPUFUNC(op_4190_0), 16784}, /* CHK */
{ CPUFUNC(op_4198_0), 16792}, /* CHK */
{ CPUFUNC(op_41a0_0), 16800}, /* CHK */
{ CPUFUNC(op_41a8_0), 16808}, /* CHK */
{ CPUFUNC(op_41b0_0), 16816}, /* CHK */
{ CPUFUNC(op_41b8_0), 16824}, /* CHK */
{ CPUFUNC(op_41b9_0), 16825}, /* CHK */
{ CPUFUNC(op_41ba_0), 16826}, /* CHK */
{ CPUFUNC(op_41bb_0), 16827}, /* CHK */
{ CPUFUNC(op_41bc_0), 16828}, /* CHK */
{ CPUFUNC(op_41d0_0), 16848}, /* LEA */
{ CPUFUNC(op_41e8_0), 16872}, /* LEA */
{ CPUFUNC(op_41f0_0), 16880}, /* LEA */
{ CPUFUNC(op_41f8_0), 16888}, /* LEA */
{ CPUFUNC(op_41f9_0), 16889}, /* LEA */
{ CPUFUNC(op_41fa_0), 16890}, /* LEA */
{ CPUFUNC(op_41fb_0), 16891}, /* LEA */
{ CPUFUNC(op_4200_0), 16896}, /* CLR */
{ CPUFUNC(op_4210_0), 16912}, /* CLR */
{ CPUFUNC(op_4218_0), 16920}, /* CLR */
{ CPUFUNC(op_4220_0), 16928}, /* CLR */
{ CPUFUNC(op_4228_0), 16936}, /* CLR */
{ CPUFUNC(op_4230_0), 16944}, /* CLR */
{ CPUFUNC(op_4238_0), 16952}, /* CLR */
{ CPUFUNC(op_4239_0), 16953}, /* CLR */
{ CPUFUNC(op_4240_0), 16960}, /* CLR */
{ CPUFUNC(op_4250_0), 16976}, /* CLR */
{ CPUFUNC(op_4258_0), 16984}, /* CLR */
{ CPUFUNC(op_4260_0), 16992}, /* CLR */
{ CPUFUNC(op_4268_0), 17000}, /* CLR */
{ CPUFUNC(op_4270_0), 17008}, /* CLR */
{ CPUFUNC(op_4278_0), 17016}, /* CLR */
{ CPUFUNC(op_4279_0), 17017}, /* CLR */
{ CPUFUNC(op_4280_0), 17024}, /* CLR */
{ CPUFUNC(op_4290_0), 17040}, /* CLR */
{ CPUFUNC(op_4298_0), 17048}, /* CLR */
{ CPUFUNC(op_42a0_0), 17056}, /* CLR */
{ CPUFUNC(op_42a8_0), 17064}, /* CLR */
{ CPUFUNC(op_42b0_0), 17072}, /* CLR */
{ CPUFUNC(op_42b8_0), 17080}, /* CLR */
{ CPUFUNC(op_42b9_0), 17081}, /* CLR */
{ CPUFUNC(op_42c0_0), 17088}, /* MVSR2 */
{ CPUFUNC(op_42d0_0), 17104}, /* MVSR2 */
{ CPUFUNC(op_42d8_0), 17112}, /* MVSR2 */
{ CPUFUNC(op_42e0_0), 17120}, /* MVSR2 */
{ CPUFUNC(op_42e8_0), 17128}, /* MVSR2 */
{ CPUFUNC(op_42f0_0), 17136}, /* MVSR2 */
{ CPUFUNC(op_42f8_0), 17144}, /* MVSR2 */
{ CPUFUNC(op_42f9_0), 17145}, /* MVSR2 */
{ CPUFUNC(op_4400_0), 17408}, /* NEG */
{ CPUFUNC(op_4410_0), 17424}, /* NEG */
{ CPUFUNC(op_4418_0), 17432}, /* NEG */
{ CPUFUNC(op_4420_0), 17440}, /* NEG */
{ CPUFUNC(op_4428_0), 17448}, /* NEG */
{ CPUFUNC(op_4430_0), 17456}, /* NEG */
{ CPUFUNC(op_4438_0), 17464}, /* NEG */
{ CPUFUNC(op_4439_0), 17465}, /* NEG */
{ CPUFUNC(op_4440_0), 17472}, /* NEG */
{ CPUFUNC(op_4450_0), 17488}, /* NEG */
{ CPUFUNC(op_4458_0), 17496}, /* NEG */
{ CPUFUNC(op_4460_0), 17504}, /* NEG */
{ CPUFUNC(op_4468_0), 17512}, /* NEG */
{ CPUFUNC(op_4470_0), 17520}, /* NEG */
{ CPUFUNC(op_4478_0), 17528}, /* NEG */
{ CPUFUNC(op_4479_0), 17529}, /* NEG */
{ CPUFUNC(op_4480_0), 17536}, /* NEG */
{ CPUFUNC(op_4490_0), 17552}, /* NEG */
{ CPUFUNC(op_4498_0), 17560}, /* NEG */
{ CPUFUNC(op_44a0_0), 17568}, /* NEG */
{ CPUFUNC(op_44a8_0), 17576}, /* NEG */
{ CPUFUNC(op_44b0_0), 17584}, /* NEG */
{ CPUFUNC(op_44b8_0), 17592}, /* NEG */
{ CPUFUNC(op_44b9_0), 17593}, /* NEG */
{ CPUFUNC(op_44c0_0), 17600}, /* MV2SR */
{ CPUFUNC(op_44d0_0), 17616}, /* MV2SR */
{ CPUFUNC(op_44d8_0), 17624}, /* MV2SR */
{ CPUFUNC(op_44e0_0), 17632}, /* MV2SR */
{ CPUFUNC(op_44e8_0), 17640}, /* MV2SR */
{ CPUFUNC(op_44f0_0), 17648}, /* MV2SR */
{ CPUFUNC(op_44f8_0), 17656}, /* MV2SR */
{ CPUFUNC(op_44f9_0), 17657}, /* MV2SR */
{ CPUFUNC(op_44fa_0), 17658}, /* MV2SR */
{ CPUFUNC(op_44fb_0), 17659}, /* MV2SR */
{ CPUFUNC(op_44fc_0), 17660}, /* MV2SR */
{ CPUFUNC(op_4600_0), 17920}, /* NOT */
{ CPUFUNC(op_4610_0), 17936}, /* NOT */
{ CPUFUNC(op_4618_0), 17944}, /* NOT */
{ CPUFUNC(op_4620_0), 17952}, /* NOT */
{ CPUFUNC(op_4628_0), 17960}, /* NOT */
{ CPUFUNC(op_4630_0), 17968}, /* NOT */
{ CPUFUNC(op_4638_0), 17976}, /* NOT */
{ CPUFUNC(op_4639_0), 17977}, /* NOT */
{ CPUFUNC(op_4640_0), 17984}, /* NOT */
{ CPUFUNC(op_4650_0), 18000}, /* NOT */
{ CPUFUNC(op_4658_0), 18008}, /* NOT */
{ CPUFUNC(op_4660_0), 18016}, /* NOT */
{ CPUFUNC(op_4668_0), 18024}, /* NOT */
{ CPUFUNC(op_4670_0), 18032}, /* NOT */
{ CPUFUNC(op_4678_0), 18040}, /* NOT */
{ CPUFUNC(op_4679_0), 18041}, /* NOT */
{ CPUFUNC(op_4680_0), 18048}, /* NOT */
{ CPUFUNC(op_4690_0), 18064}, /* NOT */
{ CPUFUNC(op_4698_0), 18072}, /* NOT */
{ CPUFUNC(op_46a0_0), 18080}, /* NOT */
{ CPUFUNC(op_46a8_0), 18088}, /* NOT */
{ CPUFUNC(op_46b0_0), 18096}, /* NOT */
{ CPUFUNC(op_46b8_0), 18104}, /* NOT */
{ CPUFUNC(op_46b9_0), 18105}, /* NOT */
{ CPUFUNC(op_46c0_0), 18112}, /* MV2SR */
{ CPUFUNC(op_46d0_0), 18128}, /* MV2SR */
{ CPUFUNC(op_46d8_0), 18136}, /* MV2SR */
{ CPUFUNC(op_46e0_0), 18144}, /* MV2SR */
{ CPUFUNC(op_46e8_0), 18152}, /* MV2SR */
{ CPUFUNC(op_46f0_0), 18160}, /* MV2SR */
{ CPUFUNC(op_46f8_0), 18168}, /* MV2SR */
{ CPUFUNC(op_46f9_0), 18169}, /* MV2SR */
{ CPUFUNC(op_46fa_0), 18170}, /* MV2SR */
{ CPUFUNC(op_46fb_0), 18171}, /* MV2SR */
{ CPUFUNC(op_46fc_0), 18172}, /* MV2SR */
{ CPUFUNC(op_4800_0), 18432}, /* NBCD */
{ CPUFUNC(op_4808_0), 18440}, /* LINK */
{ CPUFUNC(op_4810_0), 18448}, /* NBCD */
{ CPUFUNC(op_4818_0), 18456}, /* NBCD */
{ CPUFUNC(op_4820_0), 18464}, /* NBCD */
{ CPUFUNC(op_4828_0), 18472}, /* NBCD */
{ CPUFUNC(op_4830_0), 18480}, /* NBCD */
{ CPUFUNC(op_4838_0), 18488}, /* NBCD */
{ CPUFUNC(op_4839_0), 18489}, /* NBCD */
{ CPUFUNC(op_4840_0), 18496}, /* SWAP */
{ CPUFUNC(op_4848_0), 18504}, /* BKPT */
{ CPUFUNC(op_4850_0), 18512}, /* PEA */
{ CPUFUNC(op_4868_0), 18536}, /* PEA */
{ CPUFUNC(op_4870_0), 18544}, /* PEA */
{ CPUFUNC(op_4878_0), 18552}, /* PEA */
{ CPUFUNC(op_4879_0), 18553}, /* PEA */
{ CPUFUNC(op_487a_0), 18554}, /* PEA */
{ CPUFUNC(op_487b_0), 18555}, /* PEA */
{ CPUFUNC(op_4880_0), 18560}, /* EXT */
{ CPUFUNC(op_4890_0), 18576}, /* MVMLE */
{ CPUFUNC(op_48a0_0), 18592}, /* MVMLE */
{ CPUFUNC(op_48a8_0), 18600}, /* MVMLE */
{ CPUFUNC(op_48b0_0), 18608}, /* MVMLE */
{ CPUFUNC(op_48b8_0), 18616}, /* MVMLE */
{ CPUFUNC(op_48b9_0), 18617}, /* MVMLE */
{ CPUFUNC(op_48c0_0), 18624}, /* EXT */
{ CPUFUNC(op_48d0_0), 18640}, /* MVMLE */
{ CPUFUNC(op_48e0_0), 18656}, /* MVMLE */
{ CPUFUNC(op_48e8_0), 18664}, /* MVMLE */
{ CPUFUNC(op_48f0_0), 18672}, /* MVMLE */
{ CPUFUNC(op_48f8_0), 18680}, /* MVMLE */
{ CPUFUNC(op_48f9_0), 18681}, /* MVMLE */
{ CPUFUNC(op_49c0_0), 18880}, /* EXT */
{ CPUFUNC(op_4a00_0), 18944}, /* TST */
{ CPUFUNC(op_4a10_0), 18960}, /* TST */
{ CPUFUNC(op_4a18_0), 18968}, /* TST */
{ CPUFUNC(op_4a20_0), 18976}, /* TST */
{ CPUFUNC(op_4a28_0), 18984}, /* TST */
{ CPUFUNC(op_4a30_0), 18992}, /* TST */
{ CPUFUNC(op_4a38_0), 19000}, /* TST */
{ CPUFUNC(op_4a39_0), 19001}, /* TST */
{ CPUFUNC(op_4a3a_0), 19002}, /* TST */
{ CPUFUNC(op_4a3b_0), 19003}, /* TST */
{ CPUFUNC(op_4a3c_0), 19004}, /* TST */
{ CPUFUNC(op_4a40_0), 19008}, /* TST */
{ CPUFUNC(op_4a48_0), 19016}, /* TST */
{ CPUFUNC(op_4a50_0), 19024}, /* TST */
{ CPUFUNC(op_4a58_0), 19032}, /* TST */
{ CPUFUNC(op_4a60_0), 19040}, /* TST */
{ CPUFUNC(op_4a68_0), 19048}, /* TST */
{ CPUFUNC(op_4a70_0), 19056}, /* TST */
{ CPUFUNC(op_4a78_0), 19064}, /* TST */
{ CPUFUNC(op_4a79_0), 19065}, /* TST */
{ CPUFUNC(op_4a7a_0), 19066}, /* TST */
{ CPUFUNC(op_4a7b_0), 19067}, /* TST */
{ CPUFUNC(op_4a7c_0), 19068}, /* TST */
{ CPUFUNC(op_4a80_0), 19072}, /* TST */
{ CPUFUNC(op_4a88_0), 19080}, /* TST */
{ CPUFUNC(op_4a90_0), 19088}, /* TST */
{ CPUFUNC(op_4a98_0), 19096}, /* TST */
{ CPUFUNC(op_4aa0_0), 19104}, /* TST */
{ CPUFUNC(op_4aa8_0), 19112}, /* TST */
{ CPUFUNC(op_4ab0_0), 19120}, /* TST */
{ CPUFUNC(op_4ab8_0), 19128}, /* TST */
{ CPUFUNC(op_4ab9_0), 19129}, /* TST */
{ CPUFUNC(op_4aba_0), 19130}, /* TST */
{ CPUFUNC(op_4abb_0), 19131}, /* TST */
{ CPUFUNC(op_4abc_0), 19132}, /* TST */
{ CPUFUNC(op_4ac0_0), 19136}, /* TAS */
{ CPUFUNC(op_4ad0_0), 19152}, /* TAS */
{ CPUFUNC(op_4ad8_0), 19160}, /* TAS */
{ CPUFUNC(op_4ae0_0), 19168}, /* TAS */
{ CPUFUNC(op_4ae8_0), 19176}, /* TAS */
{ CPUFUNC(op_4af0_0), 19184}, /* TAS */
{ CPUFUNC(op_4af8_0), 19192}, /* TAS */
{ CPUFUNC(op_4af9_0), 19193}, /* TAS */
{ CPUFUNC(op_4c00_0), 19456}, /* MULL */
{ CPUFUNC(op_4c10_0), 19472}, /* MULL */
{ CPUFUNC(op_4c18_0), 19480}, /* MULL */
{ CPUFUNC(op_4c20_0), 19488}, /* MULL */
{ CPUFUNC(op_4c28_0), 19496}, /* MULL */
{ CPUFUNC(op_4c30_0), 19504}, /* MULL */
{ CPUFUNC(op_4c38_0), 19512}, /* MULL */
{ CPUFUNC(op_4c39_0), 19513}, /* MULL */
{ CPUFUNC(op_4c3a_0), 19514}, /* MULL */
{ CPUFUNC(op_4c3b_0), 19515}, /* MULL */
{ CPUFUNC(op_4c3c_0), 19516}, /* MULL */
{ CPUFUNC(op_4c40_0), 19520}, /* DIVL */
{ CPUFUNC(op_4c50_0), 19536}, /* DIVL */
{ CPUFUNC(op_4c58_0), 19544}, /* DIVL */
{ CPUFUNC(op_4c60_0), 19552}, /* DIVL */
{ CPUFUNC(op_4c68_0), 19560}, /* DIVL */
{ CPUFUNC(op_4c70_0), 19568}, /* DIVL */
{ CPUFUNC(op_4c78_0), 19576}, /* DIVL */
{ CPUFUNC(op_4c79_0), 19577}, /* DIVL */
{ CPUFUNC(op_4c7a_0), 19578}, /* DIVL */
{ CPUFUNC(op_4c7b_0), 19579}, /* DIVL */
{ CPUFUNC(op_4c7c_0), 19580}, /* DIVL */
{ CPUFUNC(op_4c90_0), 19600}, /* MVMEL */
{ CPUFUNC(op_4c98_0), 19608}, /* MVMEL */
{ CPUFUNC(op_4ca8_0), 19624}, /* MVMEL */
{ CPUFUNC(op_4cb0_0), 19632}, /* MVMEL */
{ CPUFUNC(op_4cb8_0), 19640}, /* MVMEL */
{ CPUFUNC(op_4cb9_0), 19641}, /* MVMEL */
{ CPUFUNC(op_4cba_0), 19642}, /* MVMEL */
{ CPUFUNC(op_4cbb_0), 19643}, /* MVMEL */
{ CPUFUNC(op_4cd0_0), 19664}, /* MVMEL */
{ CPUFUNC(op_4cd8_0), 19672}, /* MVMEL */
{ CPUFUNC(op_4ce8_0), 19688}, /* MVMEL */
{ CPUFUNC(op_4cf0_0), 19696}, /* MVMEL */
{ CPUFUNC(op_4cf8_0), 19704}, /* MVMEL */
{ CPUFUNC(op_4cf9_0), 19705}, /* MVMEL */
{ CPUFUNC(op_4cfa_0), 19706}, /* MVMEL */
{ CPUFUNC(op_4cfb_0), 19707}, /* MVMEL */
{ CPUFUNC(op_4e40_0), 20032}, /* TRAP */
{ CPUFUNC(op_4e50_0), 20048}, /* LINK */
{ CPUFUNC(op_4e58_0), 20056}, /* UNLK */
{ CPUFUNC(op_4e60_0), 20064}, /* MVR2USP */
{ CPUFUNC(op_4e68_0), 20072}, /* MVUSP2R */
{ CPUFUNC(op_4e70_0), 20080}, /* RESET */
{ CPUFUNC(op_4e71_0), 20081}, /* NOP */
{ CPUFUNC(op_4e72_0), 20082}, /* STOP */
{ CPUFUNC(op_4e73_0), 20083}, /* RTE */
{ CPUFUNC(op_4e74_0), 20084}, /* RTD */
{ CPUFUNC(op_4e75_0), 20085}, /* RTS */
{ CPUFUNC(op_4e76_0), 20086}, /* TRAPV */
{ CPUFUNC(op_4e77_0), 20087}, /* RTR */
{ CPUFUNC(op_4e7a_0), 20090}, /* MOVEC2 */
{ CPUFUNC(op_4e7b_0), 20091}, /* MOVE2C */
{ CPUFUNC(op_4e90_0), 20112}, /* JSR */
{ CPUFUNC(op_4ea8_0), 20136}, /* JSR */
{ CPUFUNC(op_4eb0_0), 20144}, /* JSR */
{ CPUFUNC(op_4eb8_0), 20152}, /* JSR */
{ CPUFUNC(op_4eb9_0), 20153}, /* JSR */
{ CPUFUNC(op_4eba_0), 20154}, /* JSR */
{ CPUFUNC(op_4ebb_0), 20155}, /* JSR */
{ CPUFUNC(op_4ed0_0), 20176}, /* JMP */
{ CPUFUNC(op_4ee8_0), 20200}, /* JMP */
{ CPUFUNC(op_4ef0_0), 20208}, /* JMP */
{ CPUFUNC(op_4ef8_0), 20216}, /* JMP */
{ CPUFUNC(op_4ef9_0), 20217}, /* JMP */
{ CPUFUNC(op_4efa_0), 20218}, /* JMP */
{ CPUFUNC(op_4efb_0), 20219}, /* JMP */
{ CPUFUNC(op_5000_0), 20480}, /* ADD */
{ CPUFUNC(op_5010_0), 20496}, /* ADD */
{ CPUFUNC(op_5018_0), 20504}, /* ADD */
{ CPUFUNC(op_5020_0), 20512}, /* ADD */
{ CPUFUNC(op_5028_0), 20520}, /* ADD */
{ CPUFUNC(op_5030_0), 20528}, /* ADD */
{ CPUFUNC(op_5038_0), 20536}, /* ADD */
{ CPUFUNC(op_5039_0), 20537}, /* ADD */
{ CPUFUNC(op_5040_0), 20544}, /* ADD */
{ CPUFUNC(op_5048_0), 20552}, /* ADDA */
{ CPUFUNC(op_5050_0), 20560}, /* ADD */
{ CPUFUNC(op_5058_0), 20568}, /* ADD */
{ CPUFUNC(op_5060_0), 20576}, /* ADD */
{ CPUFUNC(op_5068_0), 20584}, /* ADD */
{ CPUFUNC(op_5070_0), 20592}, /* ADD */
{ CPUFUNC(op_5078_0), 20600}, /* ADD */
{ CPUFUNC(op_5079_0), 20601}, /* ADD */
{ CPUFUNC(op_5080_0), 20608}, /* ADD */
{ CPUFUNC(op_5088_0), 20616}, /* ADDA */
{ CPUFUNC(op_5090_0), 20624}, /* ADD */
{ CPUFUNC(op_5098_0), 20632}, /* ADD */
{ CPUFUNC(op_50a0_0), 20640}, /* ADD */
{ CPUFUNC(op_50a8_0), 20648}, /* ADD */
{ CPUFUNC(op_50b0_0), 20656}, /* ADD */
{ CPUFUNC(op_50b8_0), 20664}, /* ADD */
{ CPUFUNC(op_50b9_0), 20665}, /* ADD */
{ CPUFUNC(op_50c0_0), 20672}, /* Scc */
{ CPUFUNC(op_50c8_0), 20680}, /* DBcc */
{ CPUFUNC(op_50d0_0), 20688}, /* Scc */
{ CPUFUNC(op_50d8_0), 20696}, /* Scc */
{ CPUFUNC(op_50e0_0), 20704}, /* Scc */
{ CPUFUNC(op_50e8_0), 20712}, /* Scc */
{ CPUFUNC(op_50f0_0), 20720}, /* Scc */
{ CPUFUNC(op_50f8_0), 20728}, /* Scc */
{ CPUFUNC(op_50f9_0), 20729}, /* Scc */
{ CPUFUNC(op_50fa_0), 20730}, /* TRAPcc */
{ CPUFUNC(op_50fb_0), 20731}, /* TRAPcc */
{ CPUFUNC(op_50fc_0), 20732}, /* TRAPcc */
{ CPUFUNC(op_5100_0), 20736}, /* SUB */
{ CPUFUNC(op_5110_0), 20752}, /* SUB */
{ CPUFUNC(op_5118_0), 20760}, /* SUB */
{ CPUFUNC(op_5120_0), 20768}, /* SUB */
{ CPUFUNC(op_5128_0), 20776}, /* SUB */
{ CPUFUNC(op_5130_0), 20784}, /* SUB */
{ CPUFUNC(op_5138_0), 20792}, /* SUB */
{ CPUFUNC(op_5139_0), 20793}, /* SUB */
{ CPUFUNC(op_5140_0), 20800}, /* SUB */
{ CPUFUNC(op_5148_0), 20808}, /* SUBA */
{ CPUFUNC(op_5150_0), 20816}, /* SUB */
{ CPUFUNC(op_5158_0), 20824}, /* SUB */
{ CPUFUNC(op_5160_0), 20832}, /* SUB */
{ CPUFUNC(op_5168_0), 20840}, /* SUB */
{ CPUFUNC(op_5170_0), 20848}, /* SUB */
{ CPUFUNC(op_5178_0), 20856}, /* SUB */
{ CPUFUNC(op_5179_0), 20857}, /* SUB */
{ CPUFUNC(op_5180_0), 20864}, /* SUB */
{ CPUFUNC(op_5188_0), 20872}, /* SUBA */
{ CPUFUNC(op_5190_0), 20880}, /* SUB */
{ CPUFUNC(op_5198_0), 20888}, /* SUB */
{ CPUFUNC(op_51a0_0), 20896}, /* SUB */
{ CPUFUNC(op_51a8_0), 20904}, /* SUB */
{ CPUFUNC(op_51b0_0), 20912}, /* SUB */
{ CPUFUNC(op_51b8_0), 20920}, /* SUB */
{ CPUFUNC(op_51b9_0), 20921}, /* SUB */
{ CPUFUNC(op_51c0_0), 20928}, /* Scc */
{ CPUFUNC(op_51c8_0), 20936}, /* DBcc */
{ CPUFUNC(op_51d0_0), 20944}, /* Scc */
{ CPUFUNC(op_51d8_0), 20952}, /* Scc */
{ CPUFUNC(op_51e0_0), 20960}, /* Scc */
{ CPUFUNC(op_51e8_0), 20968}, /* Scc */
{ CPUFUNC(op_51f0_0), 20976}, /* Scc */
{ CPUFUNC(op_51f8_0), 20984}, /* Scc */
{ CPUFUNC(op_51f9_0), 20985}, /* Scc */
{ CPUFUNC(op_51fa_0), 20986}, /* TRAPcc */
{ CPUFUNC(op_51fb_0), 20987}, /* TRAPcc */
{ CPUFUNC(op_51fc_0), 20988}, /* TRAPcc */
{ CPUFUNC(op_52c0_0), 21184}, /* Scc */
{ CPUFUNC(op_52c8_0), 21192}, /* DBcc */
{ CPUFUNC(op_52d0_0), 21200}, /* Scc */
{ CPUFUNC(op_52d8_0), 21208}, /* Scc */
{ CPUFUNC(op_52e0_0), 21216}, /* Scc */
{ CPUFUNC(op_52e8_0), 21224}, /* Scc */
{ CPUFUNC(op_52f0_0), 21232}, /* Scc */
{ CPUFUNC(op_52f8_0), 21240}, /* Scc */
{ CPUFUNC(op_52f9_0), 21241}, /* Scc */
{ CPUFUNC(op_52fa_0), 21242}, /* TRAPcc */
{ CPUFUNC(op_52fb_0), 21243}, /* TRAPcc */
{ CPUFUNC(op_52fc_0), 21244}, /* TRAPcc */
{ CPUFUNC(op_53c0_0), 21440}, /* Scc */
{ CPUFUNC(op_53c8_0), 21448}, /* DBcc */
{ CPUFUNC(op_53d0_0), 21456}, /* Scc */
{ CPUFUNC(op_53d8_0), 21464}, /* Scc */
{ CPUFUNC(op_53e0_0), 21472}, /* Scc */
{ CPUFUNC(op_53e8_0), 21480}, /* Scc */
{ CPUFUNC(op_53f0_0), 21488}, /* Scc */
{ CPUFUNC(op_53f8_0), 21496}, /* Scc */
{ CPUFUNC(op_53f9_0), 21497}, /* Scc */
{ CPUFUNC(op_53fa_0), 21498}, /* TRAPcc */
{ CPUFUNC(op_53fb_0), 21499}, /* TRAPcc */
{ CPUFUNC(op_53fc_0), 21500}, /* TRAPcc */
{ CPUFUNC(op_54c0_0), 21696}, /* Scc */
{ CPUFUNC(op_54c8_0), 21704}, /* DBcc */
{ CPUFUNC(op_54d0_0), 21712}, /* Scc */
{ CPUFUNC(op_54d8_0), 21720}, /* Scc */
{ CPUFUNC(op_54e0_0), 21728}, /* Scc */
{ CPUFUNC(op_54e8_0), 21736}, /* Scc */
{ CPUFUNC(op_54f0_0), 21744}, /* Scc */
{ CPUFUNC(op_54f8_0), 21752}, /* Scc */
{ CPUFUNC(op_54f9_0), 21753}, /* Scc */
{ CPUFUNC(op_54fa_0), 21754}, /* TRAPcc */
{ CPUFUNC(op_54fb_0), 21755}, /* TRAPcc */
{ CPUFUNC(op_54fc_0), 21756}, /* TRAPcc */
{ CPUFUNC(op_55c0_0), 21952}, /* Scc */
{ CPUFUNC(op_55c8_0), 21960}, /* DBcc */
{ CPUFUNC(op_55d0_0), 21968}, /* Scc */
{ CPUFUNC(op_55d8_0), 21976}, /* Scc */
{ CPUFUNC(op_55e0_0), 21984}, /* Scc */
{ CPUFUNC(op_55e8_0), 21992}, /* Scc */
{ CPUFUNC(op_55f0_0), 22000}, /* Scc */
{ CPUFUNC(op_55f8_0), 22008}, /* Scc */
{ CPUFUNC(op_55f9_0), 22009}, /* Scc */
{ CPUFUNC(op_55fa_0), 22010}, /* TRAPcc */
{ CPUFUNC(op_55fb_0), 22011}, /* TRAPcc */
{ CPUFUNC(op_55fc_0), 22012}, /* TRAPcc */
{ CPUFUNC(op_56c0_0), 22208}, /* Scc */
{ CPUFUNC(op_56c8_0), 22216}, /* DBcc */
{ CPUFUNC(op_56d0_0), 22224}, /* Scc */
{ CPUFUNC(op_56d8_0), 22232}, /* Scc */
{ CPUFUNC(op_56e0_0), 22240}, /* Scc */
{ CPUFUNC(op_56e8_0), 22248}, /* Scc */
{ CPUFUNC(op_56f0_0), 22256}, /* Scc */
{ CPUFUNC(op_56f8_0), 22264}, /* Scc */
{ CPUFUNC(op_56f9_0), 22265}, /* Scc */
{ CPUFUNC(op_56fa_0), 22266}, /* TRAPcc */
{ CPUFUNC(op_56fb_0), 22267}, /* TRAPcc */
{ CPUFUNC(op_56fc_0), 22268}, /* TRAPcc */
{ CPUFUNC(op_57c0_0), 22464}, /* Scc */
{ CPUFUNC(op_57c8_0), 22472}, /* DBcc */
{ CPUFUNC(op_57d0_0), 22480}, /* Scc */
{ CPUFUNC(op_57d8_0), 22488}, /* Scc */
{ CPUFUNC(op_57e0_0), 22496}, /* Scc */
{ CPUFUNC(op_57e8_0), 22504}, /* Scc */
{ CPUFUNC(op_57f0_0), 22512}, /* Scc */
{ CPUFUNC(op_57f8_0), 22520}, /* Scc */
{ CPUFUNC(op_57f9_0), 22521}, /* Scc */
{ CPUFUNC(op_57fa_0), 22522}, /* TRAPcc */
{ CPUFUNC(op_57fb_0), 22523}, /* TRAPcc */
{ CPUFUNC(op_57fc_0), 22524}, /* TRAPcc */
{ CPUFUNC(op_58c0_0), 22720}, /* Scc */
{ CPUFUNC(op_58c8_0), 22728}, /* DBcc */
{ CPUFUNC(op_58d0_0), 22736}, /* Scc */
{ CPUFUNC(op_58d8_0), 22744}, /* Scc */
{ CPUFUNC(op_58e0_0), 22752}, /* Scc */
{ CPUFUNC(op_58e8_0), 22760}, /* Scc */
{ CPUFUNC(op_58f0_0), 22768}, /* Scc */
{ CPUFUNC(op_58f8_0), 22776}, /* Scc */
{ CPUFUNC(op_58f9_0), 22777}, /* Scc */
{ CPUFUNC(op_58fa_0), 22778}, /* TRAPcc */
{ CPUFUNC(op_58fb_0), 22779}, /* TRAPcc */
{ CPUFUNC(op_58fc_0), 22780}, /* TRAPcc */
{ CPUFUNC(op_59c0_0), 22976}, /* Scc */
{ CPUFUNC(op_59c8_0), 22984}, /* DBcc */
{ CPUFUNC(op_59d0_0), 22992}, /* Scc */
{ CPUFUNC(op_59d8_0), 23000}, /* Scc */
{ CPUFUNC(op_59e0_0), 23008}, /* Scc */
{ CPUFUNC(op_59e8_0), 23016}, /* Scc */
{ CPUFUNC(op_59f0_0), 23024}, /* Scc */
{ CPUFUNC(op_59f8_0), 23032}, /* Scc */
{ CPUFUNC(op_59f9_0), 23033}, /* Scc */
{ CPUFUNC(op_59fa_0), 23034}, /* TRAPcc */
{ CPUFUNC(op_59fb_0), 23035}, /* TRAPcc */
{ CPUFUNC(op_59fc_0), 23036}, /* TRAPcc */
{ CPUFUNC(op_5ac0_0), 23232}, /* Scc */
{ CPUFUNC(op_5ac8_0), 23240}, /* DBcc */
{ CPUFUNC(op_5ad0_0), 23248}, /* Scc */
{ CPUFUNC(op_5ad8_0), 23256}, /* Scc */
{ CPUFUNC(op_5ae0_0), 23264}, /* Scc */
{ CPUFUNC(op_5ae8_0), 23272}, /* Scc */
{ CPUFUNC(op_5af0_0), 23280}, /* Scc */
{ CPUFUNC(op_5af8_0), 23288}, /* Scc */
{ CPUFUNC(op_5af9_0), 23289}, /* Scc */
{ CPUFUNC(op_5afa_0), 23290}, /* TRAPcc */
{ CPUFUNC(op_5afb_0), 23291}, /* TRAPcc */
{ CPUFUNC(op_5afc_0), 23292}, /* TRAPcc */
{ CPUFUNC(op_5bc0_0), 23488}, /* Scc */
{ CPUFUNC(op_5bc8_0), 23496}, /* DBcc */
{ CPUFUNC(op_5bd0_0), 23504}, /* Scc */
{ CPUFUNC(op_5bd8_0), 23512}, /* Scc */
{ CPUFUNC(op_5be0_0), 23520}, /* Scc */
{ CPUFUNC(op_5be8_0), 23528}, /* Scc */
{ CPUFUNC(op_5bf0_0), 23536}, /* Scc */
{ CPUFUNC(op_5bf8_0), 23544}, /* Scc */
{ CPUFUNC(op_5bf9_0), 23545}, /* Scc */
{ CPUFUNC(op_5bfa_0), 23546}, /* TRAPcc */
{ CPUFUNC(op_5bfb_0), 23547}, /* TRAPcc */
{ CPUFUNC(op_5bfc_0), 23548}, /* TRAPcc */
{ CPUFUNC(op_5cc0_0), 23744}, /* Scc */
{ CPUFUNC(op_5cc8_0), 23752}, /* DBcc */
{ CPUFUNC(op_5cd0_0), 23760}, /* Scc */
{ CPUFUNC(op_5cd8_0), 23768}, /* Scc */
{ CPUFUNC(op_5ce0_0), 23776}, /* Scc */
{ CPUFUNC(op_5ce8_0), 23784}, /* Scc */
{ CPUFUNC(op_5cf0_0), 23792}, /* Scc */
{ CPUFUNC(op_5cf8_0), 23800}, /* Scc */
{ CPUFUNC(op_5cf9_0), 23801}, /* Scc */
{ CPUFUNC(op_5cfa_0), 23802}, /* TRAPcc */
{ CPUFUNC(op_5cfb_0), 23803}, /* TRAPcc */
{ CPUFUNC(op_5cfc_0), 23804}, /* TRAPcc */
{ CPUFUNC(op_5dc0_0), 24000}, /* Scc */
{ CPUFUNC(op_5dc8_0), 24008}, /* DBcc */
{ CPUFUNC(op_5dd0_0), 24016}, /* Scc */
{ CPUFUNC(op_5dd8_0), 24024}, /* Scc */
{ CPUFUNC(op_5de0_0), 24032}, /* Scc */
{ CPUFUNC(op_5de8_0), 24040}, /* Scc */
{ CPUFUNC(op_5df0_0), 24048}, /* Scc */
{ CPUFUNC(op_5df8_0), 24056}, /* Scc */
{ CPUFUNC(op_5df9_0), 24057}, /* Scc */
{ CPUFUNC(op_5dfa_0), 24058}, /* TRAPcc */
{ CPUFUNC(op_5dfb_0), 24059}, /* TRAPcc */
{ CPUFUNC(op_5dfc_0), 24060}, /* TRAPcc */
{ CPUFUNC(op_5ec0_0), 24256}, /* Scc */
{ CPUFUNC(op_5ec8_0), 24264}, /* DBcc */
{ CPUFUNC(op_5ed0_0), 24272}, /* Scc */
{ CPUFUNC(op_5ed8_0), 24280}, /* Scc */
{ CPUFUNC(op_5ee0_0), 24288}, /* Scc */
{ CPUFUNC(op_5ee8_0), 24296}, /* Scc */
{ CPUFUNC(op_5ef0_0), 24304}, /* Scc */
{ CPUFUNC(op_5ef8_0), 24312}, /* Scc */
{ CPUFUNC(op_5ef9_0), 24313}, /* Scc */
{ CPUFUNC(op_5efa_0), 24314}, /* TRAPcc */
{ CPUFUNC(op_5efb_0), 24315}, /* TRAPcc */
{ CPUFUNC(op_5efc_0), 24316}, /* TRAPcc */
{ CPUFUNC(op_5fc0_0), 24512}, /* Scc */
{ CPUFUNC(op_5fc8_0), 24520}, /* DBcc */
{ CPUFUNC(op_5fd0_0), 24528}, /* Scc */
{ CPUFUNC(op_5fd8_0), 24536}, /* Scc */
{ CPUFUNC(op_5fe0_0), 24544}, /* Scc */
{ CPUFUNC(op_5fe8_0), 24552}, /* Scc */
{ CPUFUNC(op_5ff0_0), 24560}, /* Scc */
{ CPUFUNC(op_5ff8_0), 24568}, /* Scc */
{ CPUFUNC(op_5ff9_0), 24569}, /* Scc */
{ CPUFUNC(op_5ffa_0), 24570}, /* TRAPcc */
{ CPUFUNC(op_5ffb_0), 24571}, /* TRAPcc */
{ CPUFUNC(op_5ffc_0), 24572}, /* TRAPcc */
{ CPUFUNC(op_6000_0), 24576}, /* Bcc */
{ CPUFUNC(op_6001_0), 24577}, /* Bcc */
{ CPUFUNC(op_60ff_0), 24831}, /* Bcc */
{ CPUFUNC(op_6100_0), 24832}, /* BSR */
{ CPUFUNC(op_6101_0), 24833}, /* BSR */
{ CPUFUNC(op_61ff_0), 25087}, /* BSR */
{ CPUFUNC(op_6200_0), 25088}, /* Bcc */
{ CPUFUNC(op_6201_0), 25089}, /* Bcc */
{ CPUFUNC(op_62ff_0), 25343}, /* Bcc */
{ CPUFUNC(op_6300_0), 25344}, /* Bcc */
{ CPUFUNC(op_6301_0), 25345}, /* Bcc */
{ CPUFUNC(op_63ff_0), 25599}, /* Bcc */
{ CPUFUNC(op_6400_0), 25600}, /* Bcc */
{ CPUFUNC(op_6401_0), 25601}, /* Bcc */
{ CPUFUNC(op_64ff_0), 25855}, /* Bcc */
{ CPUFUNC(op_6500_0), 25856}, /* Bcc */
{ CPUFUNC(op_6501_0), 25857}, /* Bcc */
{ CPUFUNC(op_65ff_0), 26111}, /* Bcc */
{ CPUFUNC(op_6600_0), 26112}, /* Bcc */
{ CPUFUNC(op_6601_0), 26113}, /* Bcc */
{ CPUFUNC(op_66ff_0), 26367}, /* Bcc */
{ CPUFUNC(op_6700_0), 26368}, /* Bcc */
{ CPUFUNC(op_6701_0), 26369}, /* Bcc */
{ CPUFUNC(op_67ff_0), 26623}, /* Bcc */
{ CPUFUNC(op_6800_0), 26624}, /* Bcc */
{ CPUFUNC(op_6801_0), 26625}, /* Bcc */
{ CPUFUNC(op_68ff_0), 26879}, /* Bcc */
{ CPUFUNC(op_6900_0), 26880}, /* Bcc */
{ CPUFUNC(op_6901_0), 26881}, /* Bcc */
{ CPUFUNC(op_69ff_0), 27135}, /* Bcc */
{ CPUFUNC(op_6a00_0), 27136}, /* Bcc */
{ CPUFUNC(op_6a01_0), 27137}, /* Bcc */
{ CPUFUNC(op_6aff_0), 27391}, /* Bcc */
{ CPUFUNC(op_6b00_0), 27392}, /* Bcc */
{ CPUFUNC(op_6b01_0), 27393}, /* Bcc */
{ CPUFUNC(op_6bff_0), 27647}, /* Bcc */
{ CPUFUNC(op_6c00_0), 27648}, /* Bcc */
{ CPUFUNC(op_6c01_0), 27649}, /* Bcc */
{ CPUFUNC(op_6cff_0), 27903}, /* Bcc */
{ CPUFUNC(op_6d00_0), 27904}, /* Bcc */
{ CPUFUNC(op_6d01_0), 27905}, /* Bcc */
{ CPUFUNC(op_6dff_0), 28159}, /* Bcc */
{ CPUFUNC(op_6e00_0), 28160}, /* Bcc */
{ CPUFUNC(op_6e01_0), 28161}, /* Bcc */
{ CPUFUNC(op_6eff_0), 28415}, /* Bcc */
{ CPUFUNC(op_6f00_0), 28416}, /* Bcc */
{ CPUFUNC(op_6f01_0), 28417}, /* Bcc */
{ CPUFUNC(op_6fff_0), 28671}, /* Bcc */
{ CPUFUNC(op_7000_0), 28672}, /* MOVE */
{ CPUFUNC(op_8000_0), 32768}, /* OR */
{ CPUFUNC(op_8010_0), 32784}, /* OR */
{ CPUFUNC(op_8018_0), 32792}, /* OR */
{ CPUFUNC(op_8020_0), 32800}, /* OR */
{ CPUFUNC(op_8028_0), 32808}, /* OR */
{ CPUFUNC(op_8030_0), 32816}, /* OR */
{ CPUFUNC(op_8038_0), 32824}, /* OR */
{ CPUFUNC(op_8039_0), 32825}, /* OR */
{ CPUFUNC(op_803a_0), 32826}, /* OR */
{ CPUFUNC(op_803b_0), 32827}, /* OR */
{ CPUFUNC(op_803c_0), 32828}, /* OR */
{ CPUFUNC(op_8040_0), 32832}, /* OR */
{ CPUFUNC(op_8050_0), 32848}, /* OR */
{ CPUFUNC(op_8058_0), 32856}, /* OR */
{ CPUFUNC(op_8060_0), 32864}, /* OR */
{ CPUFUNC(op_8068_0), 32872}, /* OR */
{ CPUFUNC(op_8070_0), 32880}, /* OR */
{ CPUFUNC(op_8078_0), 32888}, /* OR */
{ CPUFUNC(op_8079_0), 32889}, /* OR */
{ CPUFUNC(op_807a_0), 32890}, /* OR */
{ CPUFUNC(op_807b_0), 32891}, /* OR */
{ CPUFUNC(op_807c_0), 32892}, /* OR */
{ CPUFUNC(op_8080_0), 32896}, /* OR */
{ CPUFUNC(op_8090_0), 32912}, /* OR */
{ CPUFUNC(op_8098_0), 32920}, /* OR */
{ CPUFUNC(op_80a0_0), 32928}, /* OR */
{ CPUFUNC(op_80a8_0), 32936}, /* OR */
{ CPUFUNC(op_80b0_0), 32944}, /* OR */
{ CPUFUNC(op_80b8_0), 32952}, /* OR */
{ CPUFUNC(op_80b9_0), 32953}, /* OR */
{ CPUFUNC(op_80ba_0), 32954}, /* OR */
{ CPUFUNC(op_80bb_0), 32955}, /* OR */
{ CPUFUNC(op_80bc_0), 32956}, /* OR */
{ CPUFUNC(op_80c0_0), 32960}, /* DIVU */
{ CPUFUNC(op_80d0_0), 32976}, /* DIVU */
{ CPUFUNC(op_80d8_0), 32984}, /* DIVU */
{ CPUFUNC(op_80e0_0), 32992}, /* DIVU */
{ CPUFUNC(op_80e8_0), 33000}, /* DIVU */
{ CPUFUNC(op_80f0_0), 33008}, /* DIVU */
{ CPUFUNC(op_80f8_0), 33016}, /* DIVU */
{ CPUFUNC(op_80f9_0), 33017}, /* DIVU */
{ CPUFUNC(op_80fa_0), 33018}, /* DIVU */
{ CPUFUNC(op_80fb_0), 33019}, /* DIVU */
{ CPUFUNC(op_80fc_0), 33020}, /* DIVU */
{ CPUFUNC(op_8100_0), 33024}, /* SBCD */
{ CPUFUNC(op_8108_0), 33032}, /* SBCD */
{ CPUFUNC(op_8110_0), 33040}, /* OR */
{ CPUFUNC(op_8118_0), 33048}, /* OR */
{ CPUFUNC(op_8120_0), 33056}, /* OR */
{ CPUFUNC(op_8128_0), 33064}, /* OR */
{ CPUFUNC(op_8130_0), 33072}, /* OR */
{ CPUFUNC(op_8138_0), 33080}, /* OR */
{ CPUFUNC(op_8139_0), 33081}, /* OR */
{ CPUFUNC(op_8140_0), 33088}, /* PACK */
{ CPUFUNC(op_8148_0), 33096}, /* PACK */
{ CPUFUNC(op_8150_0), 33104}, /* OR */
{ CPUFUNC(op_8158_0), 33112}, /* OR */
{ CPUFUNC(op_8160_0), 33120}, /* OR */
{ CPUFUNC(op_8168_0), 33128}, /* OR */
{ CPUFUNC(op_8170_0), 33136}, /* OR */
{ CPUFUNC(op_8178_0), 33144}, /* OR */
{ CPUFUNC(op_8179_0), 33145}, /* OR */
{ CPUFUNC(op_8180_0), 33152}, /* UNPK */
{ CPUFUNC(op_8188_0), 33160}, /* UNPK */
{ CPUFUNC(op_8190_0), 33168}, /* OR */
{ CPUFUNC(op_8198_0), 33176}, /* OR */
{ CPUFUNC(op_81a0_0), 33184}, /* OR */
{ CPUFUNC(op_81a8_0), 33192}, /* OR */
{ CPUFUNC(op_81b0_0), 33200}, /* OR */
{ CPUFUNC(op_81b8_0), 33208}, /* OR */
{ CPUFUNC(op_81b9_0), 33209}, /* OR */
{ CPUFUNC(op_81c0_0), 33216}, /* DIVS */
{ CPUFUNC(op_81d0_0), 33232}, /* DIVS */
{ CPUFUNC(op_81d8_0), 33240}, /* DIVS */
{ CPUFUNC(op_81e0_0), 33248}, /* DIVS */
{ CPUFUNC(op_81e8_0), 33256}, /* DIVS */
{ CPUFUNC(op_81f0_0), 33264}, /* DIVS */
{ CPUFUNC(op_81f8_0), 33272}, /* DIVS */
{ CPUFUNC(op_81f9_0), 33273}, /* DIVS */
{ CPUFUNC(op_81fa_0), 33274}, /* DIVS */
{ CPUFUNC(op_81fb_0), 33275}, /* DIVS */
{ CPUFUNC(op_81fc_0), 33276}, /* DIVS */
{ CPUFUNC(op_9000_0), 36864}, /* SUB */
{ CPUFUNC(op_9010_0), 36880}, /* SUB */
{ CPUFUNC(op_9018_0), 36888}, /* SUB */
{ CPUFUNC(op_9020_0), 36896}, /* SUB */
{ CPUFUNC(op_9028_0), 36904}, /* SUB */
{ CPUFUNC(op_9030_0), 36912}, /* SUB */
{ CPUFUNC(op_9038_0), 36920}, /* SUB */
{ CPUFUNC(op_9039_0), 36921}, /* SUB */
{ CPUFUNC(op_903a_0), 36922}, /* SUB */
{ CPUFUNC(op_903b_0), 36923}, /* SUB */
{ CPUFUNC(op_903c_0), 36924}, /* SUB */
{ CPUFUNC(op_9040_0), 36928}, /* SUB */
{ CPUFUNC(op_9048_0), 36936}, /* SUB */
{ CPUFUNC(op_9050_0), 36944}, /* SUB */
{ CPUFUNC(op_9058_0), 36952}, /* SUB */
{ CPUFUNC(op_9060_0), 36960}, /* SUB */
{ CPUFUNC(op_9068_0), 36968}, /* SUB */
{ CPUFUNC(op_9070_0), 36976}, /* SUB */
{ CPUFUNC(op_9078_0), 36984}, /* SUB */
{ CPUFUNC(op_9079_0), 36985}, /* SUB */
{ CPUFUNC(op_907a_0), 36986}, /* SUB */
{ CPUFUNC(op_907b_0), 36987}, /* SUB */
{ CPUFUNC(op_907c_0), 36988}, /* SUB */
{ CPUFUNC(op_9080_0), 36992}, /* SUB */
{ CPUFUNC(op_9088_0), 37000}, /* SUB */
{ CPUFUNC(op_9090_0), 37008}, /* SUB */
{ CPUFUNC(op_9098_0), 37016}, /* SUB */
{ CPUFUNC(op_90a0_0), 37024}, /* SUB */
{ CPUFUNC(op_90a8_0), 37032}, /* SUB */
{ CPUFUNC(op_90b0_0), 37040}, /* SUB */
{ CPUFUNC(op_90b8_0), 37048}, /* SUB */
{ CPUFUNC(op_90b9_0), 37049}, /* SUB */
{ CPUFUNC(op_90ba_0), 37050}, /* SUB */
{ CPUFUNC(op_90bb_0), 37051}, /* SUB */
{ CPUFUNC(op_90bc_0), 37052}, /* SUB */
{ CPUFUNC(op_90c0_0), 37056}, /* SUBA */
{ CPUFUNC(op_90c8_0), 37064}, /* SUBA */
{ CPUFUNC(op_90d0_0), 37072}, /* SUBA */
{ CPUFUNC(op_90d8_0), 37080}, /* SUBA */
{ CPUFUNC(op_90e0_0), 37088}, /* SUBA */
{ CPUFUNC(op_90e8_0), 37096}, /* SUBA */
{ CPUFUNC(op_90f0_0), 37104}, /* SUBA */
{ CPUFUNC(op_90f8_0), 37112}, /* SUBA */
{ CPUFUNC(op_90f9_0), 37113}, /* SUBA */
{ CPUFUNC(op_90fa_0), 37114}, /* SUBA */
{ CPUFUNC(op_90fb_0), 37115}, /* SUBA */
{ CPUFUNC(op_90fc_0), 37116}, /* SUBA */
{ CPUFUNC(op_9100_0), 37120}, /* SUBX */
{ CPUFUNC(op_9108_0), 37128}, /* SUBX */
{ CPUFUNC(op_9110_0), 37136}, /* SUB */
{ CPUFUNC(op_9118_0), 37144}, /* SUB */
{ CPUFUNC(op_9120_0), 37152}, /* SUB */
{ CPUFUNC(op_9128_0), 37160}, /* SUB */
{ CPUFUNC(op_9130_0), 37168}, /* SUB */
{ CPUFUNC(op_9138_0), 37176}, /* SUB */
{ CPUFUNC(op_9139_0), 37177}, /* SUB */
{ CPUFUNC(op_9140_0), 37184}, /* SUBX */
{ CPUFUNC(op_9148_0), 37192}, /* SUBX */
{ CPUFUNC(op_9150_0), 37200}, /* SUB */
{ CPUFUNC(op_9158_0), 37208}, /* SUB */
{ CPUFUNC(op_9160_0), 37216}, /* SUB */
{ CPUFUNC(op_9168_0), 37224}, /* SUB */
{ CPUFUNC(op_9170_0), 37232}, /* SUB */
{ CPUFUNC(op_9178_0), 37240}, /* SUB */
{ CPUFUNC(op_9179_0), 37241}, /* SUB */
{ CPUFUNC(op_9180_0), 37248}, /* SUBX */
{ CPUFUNC(op_9188_0), 37256}, /* SUBX */
{ CPUFUNC(op_9190_0), 37264}, /* SUB */
{ CPUFUNC(op_9198_0), 37272}, /* SUB */
{ CPUFUNC(op_91a0_0), 37280}, /* SUB */
{ CPUFUNC(op_91a8_0), 37288}, /* SUB */
{ CPUFUNC(op_91b0_0), 37296}, /* SUB */
{ CPUFUNC(op_91b8_0), 37304}, /* SUB */
{ CPUFUNC(op_91b9_0), 37305}, /* SUB */
{ CPUFUNC(op_91c0_0), 37312}, /* SUBA */
{ CPUFUNC(op_91c8_0), 37320}, /* SUBA */
{ CPUFUNC(op_91d0_0), 37328}, /* SUBA */
{ CPUFUNC(op_91d8_0), 37336}, /* SUBA */
{ CPUFUNC(op_91e0_0), 37344}, /* SUBA */
{ CPUFUNC(op_91e8_0), 37352}, /* SUBA */
{ CPUFUNC(op_91f0_0), 37360}, /* SUBA */
{ CPUFUNC(op_91f8_0), 37368}, /* SUBA */
{ CPUFUNC(op_91f9_0), 37369}, /* SUBA */
{ CPUFUNC(op_91fa_0), 37370}, /* SUBA */
{ CPUFUNC(op_91fb_0), 37371}, /* SUBA */
{ CPUFUNC(op_91fc_0), 37372}, /* SUBA */
{ CPUFUNC(op_b000_0), 45056}, /* CMP */
{ CPUFUNC(op_b010_0), 45072}, /* CMP */
{ CPUFUNC(op_b018_0), 45080}, /* CMP */
{ CPUFUNC(op_b020_0), 45088}, /* CMP */
{ CPUFUNC(op_b028_0), 45096}, /* CMP */
{ CPUFUNC(op_b030_0), 45104}, /* CMP */
{ CPUFUNC(op_b038_0), 45112}, /* CMP */
{ CPUFUNC(op_b039_0), 45113}, /* CMP */
{ CPUFUNC(op_b03a_0), 45114}, /* CMP */
{ CPUFUNC(op_b03b_0), 45115}, /* CMP */
{ CPUFUNC(op_b03c_0), 45116}, /* CMP */
{ CPUFUNC(op_b040_0), 45120}, /* CMP */
{ CPUFUNC(op_b048_0), 45128}, /* CMP */
{ CPUFUNC(op_b050_0), 45136}, /* CMP */
{ CPUFUNC(op_b058_0), 45144}, /* CMP */
{ CPUFUNC(op_b060_0), 45152}, /* CMP */
{ CPUFUNC(op_b068_0), 45160}, /* CMP */
{ CPUFUNC(op_b070_0), 45168}, /* CMP */
{ CPUFUNC(op_b078_0), 45176}, /* CMP */
{ CPUFUNC(op_b079_0), 45177}, /* CMP */
{ CPUFUNC(op_b07a_0), 45178}, /* CMP */
{ CPUFUNC(op_b07b_0), 45179}, /* CMP */
{ CPUFUNC(op_b07c_0), 45180}, /* CMP */
{ CPUFUNC(op_b080_0), 45184}, /* CMP */
{ CPUFUNC(op_b088_0), 45192}, /* CMP */
{ CPUFUNC(op_b090_0), 45200}, /* CMP */
{ CPUFUNC(op_b098_0), 45208}, /* CMP */
{ CPUFUNC(op_b0a0_0), 45216}, /* CMP */
{ CPUFUNC(op_b0a8_0), 45224}, /* CMP */
{ CPUFUNC(op_b0b0_0), 45232}, /* CMP */
{ CPUFUNC(op_b0b8_0), 45240}, /* CMP */
{ CPUFUNC(op_b0b9_0), 45241}, /* CMP */
{ CPUFUNC(op_b0ba_0), 45242}, /* CMP */
{ CPUFUNC(op_b0bb_0), 45243}, /* CMP */
{ CPUFUNC(op_b0bc_0), 45244}, /* CMP */
{ CPUFUNC(op_b0c0_0), 45248}, /* CMPA */
{ CPUFUNC(op_b0c8_0), 45256}, /* CMPA */
{ CPUFUNC(op_b0d0_0), 45264}, /* CMPA */
{ CPUFUNC(op_b0d8_0), 45272}, /* CMPA */
{ CPUFUNC(op_b0e0_0), 45280}, /* CMPA */
{ CPUFUNC(op_b0e8_0), 45288}, /* CMPA */
{ CPUFUNC(op_b0f0_0), 45296}, /* CMPA */
{ CPUFUNC(op_b0f8_0), 45304}, /* CMPA */
{ CPUFUNC(op_b0f9_0), 45305}, /* CMPA */
{ CPUFUNC(op_b0fa_0), 45306}, /* CMPA */
{ CPUFUNC(op_b0fb_0), 45307}, /* CMPA */
{ CPUFUNC(op_b0fc_0), 45308}, /* CMPA */
{ CPUFUNC(op_b100_0), 45312}, /* EOR */
{ CPUFUNC(op_b108_0), 45320}, /* CMPM */
{ CPUFUNC(op_b110_0), 45328}, /* EOR */
{ CPUFUNC(op_b118_0), 45336}, /* EOR */
{ CPUFUNC(op_b120_0), 45344}, /* EOR */
{ CPUFUNC(op_b128_0), 45352}, /* EOR */
{ CPUFUNC(op_b130_0), 45360}, /* EOR */
{ CPUFUNC(op_b138_0), 45368}, /* EOR */
{ CPUFUNC(op_b139_0), 45369}, /* EOR */
{ CPUFUNC(op_b140_0), 45376}, /* EOR */
{ CPUFUNC(op_b148_0), 45384}, /* CMPM */
{ CPUFUNC(op_b150_0), 45392}, /* EOR */
{ CPUFUNC(op_b158_0), 45400}, /* EOR */
{ CPUFUNC(op_b160_0), 45408}, /* EOR */
{ CPUFUNC(op_b168_0), 45416}, /* EOR */
{ CPUFUNC(op_b170_0), 45424}, /* EOR */
{ CPUFUNC(op_b178_0), 45432}, /* EOR */
{ CPUFUNC(op_b179_0), 45433}, /* EOR */
{ CPUFUNC(op_b180_0), 45440}, /* EOR */
{ CPUFUNC(op_b188_0), 45448}, /* CMPM */
{ CPUFUNC(op_b190_0), 45456}, /* EOR */
{ CPUFUNC(op_b198_0), 45464}, /* EOR */
{ CPUFUNC(op_b1a0_0), 45472}, /* EOR */
{ CPUFUNC(op_b1a8_0), 45480}, /* EOR */
{ CPUFUNC(op_b1b0_0), 45488}, /* EOR */
{ CPUFUNC(op_b1b8_0), 45496}, /* EOR */
{ CPUFUNC(op_b1b9_0), 45497}, /* EOR */
{ CPUFUNC(op_b1c0_0), 45504}, /* CMPA */
{ CPUFUNC(op_b1c8_0), 45512}, /* CMPA */
{ CPUFUNC(op_b1d0_0), 45520}, /* CMPA */
{ CPUFUNC(op_b1d8_0), 45528}, /* CMPA */
{ CPUFUNC(op_b1e0_0), 45536}, /* CMPA */
{ CPUFUNC(op_b1e8_0), 45544}, /* CMPA */
{ CPUFUNC(op_b1f0_0), 45552}, /* CMPA */
{ CPUFUNC(op_b1f8_0), 45560}, /* CMPA */
{ CPUFUNC(op_b1f9_0), 45561}, /* CMPA */
{ CPUFUNC(op_b1fa_0), 45562}, /* CMPA */
{ CPUFUNC(op_b1fb_0), 45563}, /* CMPA */
{ CPUFUNC(op_b1fc_0), 45564}, /* CMPA */
{ CPUFUNC(op_c000_0), 49152}, /* AND */
{ CPUFUNC(op_c010_0), 49168}, /* AND */
{ CPUFUNC(op_c018_0), 49176}, /* AND */
{ CPUFUNC(op_c020_0), 49184}, /* AND */
{ CPUFUNC(op_c028_0), 49192}, /* AND */
{ CPUFUNC(op_c030_0), 49200}, /* AND */
{ CPUFUNC(op_c038_0), 49208}, /* AND */
{ CPUFUNC(op_c039_0), 49209}, /* AND */
{ CPUFUNC(op_c03a_0), 49210}, /* AND */
{ CPUFUNC(op_c03b_0), 49211}, /* AND */
{ CPUFUNC(op_c03c_0), 49212}, /* AND */
{ CPUFUNC(op_c040_0), 49216}, /* AND */
{ CPUFUNC(op_c050_0), 49232}, /* AND */
{ CPUFUNC(op_c058_0), 49240}, /* AND */
{ CPUFUNC(op_c060_0), 49248}, /* AND */
{ CPUFUNC(op_c068_0), 49256}, /* AND */
{ CPUFUNC(op_c070_0), 49264}, /* AND */
{ CPUFUNC(op_c078_0), 49272}, /* AND */
{ CPUFUNC(op_c079_0), 49273}, /* AND */
{ CPUFUNC(op_c07a_0), 49274}, /* AND */
{ CPUFUNC(op_c07b_0), 49275}, /* AND */
{ CPUFUNC(op_c07c_0), 49276}, /* AND */
{ CPUFUNC(op_c080_0), 49280}, /* AND */
{ CPUFUNC(op_c090_0), 49296}, /* AND */
{ CPUFUNC(op_c098_0), 49304}, /* AND */
{ CPUFUNC(op_c0a0_0), 49312}, /* AND */
{ CPUFUNC(op_c0a8_0), 49320}, /* AND */
{ CPUFUNC(op_c0b0_0), 49328}, /* AND */
{ CPUFUNC(op_c0b8_0), 49336}, /* AND */
{ CPUFUNC(op_c0b9_0), 49337}, /* AND */
{ CPUFUNC(op_c0ba_0), 49338}, /* AND */
{ CPUFUNC(op_c0bb_0), 49339}, /* AND */
{ CPUFUNC(op_c0bc_0), 49340}, /* AND */
{ CPUFUNC(op_c0c0_0), 49344}, /* MULU */
{ CPUFUNC(op_c0d0_0), 49360}, /* MULU */
{ CPUFUNC(op_c0d8_0), 49368}, /* MULU */
{ CPUFUNC(op_c0e0_0), 49376}, /* MULU */
{ CPUFUNC(op_c0e8_0), 49384}, /* MULU */
{ CPUFUNC(op_c0f0_0), 49392}, /* MULU */
{ CPUFUNC(op_c0f8_0), 49400}, /* MULU */
{ CPUFUNC(op_c0f9_0), 49401}, /* MULU */
{ CPUFUNC(op_c0fa_0), 49402}, /* MULU */
{ CPUFUNC(op_c0fb_0), 49403}, /* MULU */
{ CPUFUNC(op_c0fc_0), 49404}, /* MULU */
{ CPUFUNC(op_c100_0), 49408}, /* ABCD */
{ CPUFUNC(op_c108_0), 49416}, /* ABCD */
{ CPUFUNC(op_c110_0), 49424}, /* AND */
{ CPUFUNC(op_c118_0), 49432}, /* AND */
{ CPUFUNC(op_c120_0), 49440}, /* AND */
{ CPUFUNC(op_c128_0), 49448}, /* AND */
{ CPUFUNC(op_c130_0), 49456}, /* AND */
{ CPUFUNC(op_c138_0), 49464}, /* AND */
{ CPUFUNC(op_c139_0), 49465}, /* AND */
{ CPUFUNC(op_c140_0), 49472}, /* EXG */
{ CPUFUNC(op_c148_0), 49480}, /* EXG */
{ CPUFUNC(op_c150_0), 49488}, /* AND */
{ CPUFUNC(op_c158_0), 49496}, /* AND */
{ CPUFUNC(op_c160_0), 49504}, /* AND */
{ CPUFUNC(op_c168_0), 49512}, /* AND */
{ CPUFUNC(op_c170_0), 49520}, /* AND */
{ CPUFUNC(op_c178_0), 49528}, /* AND */
{ CPUFUNC(op_c179_0), 49529}, /* AND */
{ CPUFUNC(op_c188_0), 49544}, /* EXG */
{ CPUFUNC(op_c190_0), 49552}, /* AND */
{ CPUFUNC(op_c198_0), 49560}, /* AND */
{ CPUFUNC(op_c1a0_0), 49568}, /* AND */
{ CPUFUNC(op_c1a8_0), 49576}, /* AND */
{ CPUFUNC(op_c1b0_0), 49584}, /* AND */
{ CPUFUNC(op_c1b8_0), 49592}, /* AND */
{ CPUFUNC(op_c1b9_0), 49593}, /* AND */
{ CPUFUNC(op_c1c0_0), 49600}, /* MULS */
{ CPUFUNC(op_c1d0_0), 49616}, /* MULS */
{ CPUFUNC(op_c1d8_0), 49624}, /* MULS */
{ CPUFUNC(op_c1e0_0), 49632}, /* MULS */
{ CPUFUNC(op_c1e8_0), 49640}, /* MULS */
{ CPUFUNC(op_c1f0_0), 49648}, /* MULS */
{ CPUFUNC(op_c1f8_0), 49656}, /* MULS */
{ CPUFUNC(op_c1f9_0), 49657}, /* MULS */
{ CPUFUNC(op_c1fa_0), 49658}, /* MULS */
{ CPUFUNC(op_c1fb_0), 49659}, /* MULS */
{ CPUFUNC(op_c1fc_0), 49660}, /* MULS */
{ CPUFUNC(op_d000_0), 53248}, /* ADD */
{ CPUFUNC(op_d010_0), 53264}, /* ADD */
{ CPUFUNC(op_d018_0), 53272}, /* ADD */
{ CPUFUNC(op_d020_0), 53280}, /* ADD */
{ CPUFUNC(op_d028_0), 53288}, /* ADD */
{ CPUFUNC(op_d030_0), 53296}, /* ADD */
{ CPUFUNC(op_d038_0), 53304}, /* ADD */
{ CPUFUNC(op_d039_0), 53305}, /* ADD */
{ CPUFUNC(op_d03a_0), 53306}, /* ADD */
{ CPUFUNC(op_d03b_0), 53307}, /* ADD */
{ CPUFUNC(op_d03c_0), 53308}, /* ADD */
{ CPUFUNC(op_d040_0), 53312}, /* ADD */
{ CPUFUNC(op_d048_0), 53320}, /* ADD */
{ CPUFUNC(op_d050_0), 53328}, /* ADD */
{ CPUFUNC(op_d058_0), 53336}, /* ADD */
{ CPUFUNC(op_d060_0), 53344}, /* ADD */
{ CPUFUNC(op_d068_0), 53352}, /* ADD */
{ CPUFUNC(op_d070_0), 53360}, /* ADD */
{ CPUFUNC(op_d078_0), 53368}, /* ADD */
{ CPUFUNC(op_d079_0), 53369}, /* ADD */
{ CPUFUNC(op_d07a_0), 53370}, /* ADD */
{ CPUFUNC(op_d07b_0), 53371}, /* ADD */
{ CPUFUNC(op_d07c_0), 53372}, /* ADD */
{ CPUFUNC(op_d080_0), 53376}, /* ADD */
{ CPUFUNC(op_d088_0), 53384}, /* ADD */
{ CPUFUNC(op_d090_0), 53392}, /* ADD */
{ CPUFUNC(op_d098_0), 53400}, /* ADD */
{ CPUFUNC(op_d0a0_0), 53408}, /* ADD */
{ CPUFUNC(op_d0a8_0), 53416}, /* ADD */
{ CPUFUNC(op_d0b0_0), 53424}, /* ADD */
{ CPUFUNC(op_d0b8_0), 53432}, /* ADD */
{ CPUFUNC(op_d0b9_0), 53433}, /* ADD */
{ CPUFUNC(op_d0ba_0), 53434}, /* ADD */
{ CPUFUNC(op_d0bb_0), 53435}, /* ADD */
{ CPUFUNC(op_d0bc_0), 53436}, /* ADD */
{ CPUFUNC(op_d0c0_0), 53440}, /* ADDA */
{ CPUFUNC(op_d0c8_0), 53448}, /* ADDA */
{ CPUFUNC(op_d0d0_0), 53456}, /* ADDA */
{ CPUFUNC(op_d0d8_0), 53464}, /* ADDA */
{ CPUFUNC(op_d0e0_0), 53472}, /* ADDA */
{ CPUFUNC(op_d0e8_0), 53480}, /* ADDA */
{ CPUFUNC(op_d0f0_0), 53488}, /* ADDA */
{ CPUFUNC(op_d0f8_0), 53496}, /* ADDA */
{ CPUFUNC(op_d0f9_0), 53497}, /* ADDA */
{ CPUFUNC(op_d0fa_0), 53498}, /* ADDA */
{ CPUFUNC(op_d0fb_0), 53499}, /* ADDA */
{ CPUFUNC(op_d0fc_0), 53500}, /* ADDA */
{ CPUFUNC(op_d100_0), 53504}, /* ADDX */
{ CPUFUNC(op_d108_0), 53512}, /* ADDX */
{ CPUFUNC(op_d110_0), 53520}, /* ADD */
{ CPUFUNC(op_d118_0), 53528}, /* ADD */
{ CPUFUNC(op_d120_0), 53536}, /* ADD */
{ CPUFUNC(op_d128_0), 53544}, /* ADD */
{ CPUFUNC(op_d130_0), 53552}, /* ADD */
{ CPUFUNC(op_d138_0), 53560}, /* ADD */
{ CPUFUNC(op_d139_0), 53561}, /* ADD */
{ CPUFUNC(op_d140_0), 53568}, /* ADDX */
{ CPUFUNC(op_d148_0), 53576}, /* ADDX */
{ CPUFUNC(op_d150_0), 53584}, /* ADD */
{ CPUFUNC(op_d158_0), 53592}, /* ADD */
{ CPUFUNC(op_d160_0), 53600}, /* ADD */
{ CPUFUNC(op_d168_0), 53608}, /* ADD */
{ CPUFUNC(op_d170_0), 53616}, /* ADD */
{ CPUFUNC(op_d178_0), 53624}, /* ADD */
{ CPUFUNC(op_d179_0), 53625}, /* ADD */
{ CPUFUNC(op_d180_0), 53632}, /* ADDX */
{ CPUFUNC(op_d188_0), 53640}, /* ADDX */
{ CPUFUNC(op_d190_0), 53648}, /* ADD */
{ CPUFUNC(op_d198_0), 53656}, /* ADD */
{ CPUFUNC(op_d1a0_0), 53664}, /* ADD */
{ CPUFUNC(op_d1a8_0), 53672}, /* ADD */
{ CPUFUNC(op_d1b0_0), 53680}, /* ADD */
{ CPUFUNC(op_d1b8_0), 53688}, /* ADD */
{ CPUFUNC(op_d1b9_0), 53689}, /* ADD */
{ CPUFUNC(op_d1c0_0), 53696}, /* ADDA */
{ CPUFUNC(op_d1c8_0), 53704}, /* ADDA */
{ CPUFUNC(op_d1d0_0), 53712}, /* ADDA */
{ CPUFUNC(op_d1d8_0), 53720}, /* ADDA */
{ CPUFUNC(op_d1e0_0), 53728}, /* ADDA */
{ CPUFUNC(op_d1e8_0), 53736}, /* ADDA */
{ CPUFUNC(op_d1f0_0), 53744}, /* ADDA */
{ CPUFUNC(op_d1f8_0), 53752}, /* ADDA */
{ CPUFUNC(op_d1f9_0), 53753}, /* ADDA */
{ CPUFUNC(op_d1fa_0), 53754}, /* ADDA */
{ CPUFUNC(op_d1fb_0), 53755}, /* ADDA */
{ CPUFUNC(op_d1fc_0), 53756}, /* ADDA */
{ CPUFUNC(op_e000_0), 57344}, /* ASR */
{ CPUFUNC(op_e008_0), 57352}, /* LSR */
{ CPUFUNC(op_e010_0), 57360}, /* ROXR */
{ CPUFUNC(op_e018_0), 57368}, /* ROR */
{ CPUFUNC(op_e020_0), 57376}, /* ASR */
{ CPUFUNC(op_e028_0), 57384}, /* LSR */
{ CPUFUNC(op_e030_0), 57392}, /* ROXR */
{ CPUFUNC(op_e038_0), 57400}, /* ROR */
{ CPUFUNC(op_e040_0), 57408}, /* ASR */
{ CPUFUNC(op_e048_0), 57416}, /* LSR */
{ CPUFUNC(op_e050_0), 57424}, /* ROXR */
{ CPUFUNC(op_e058_0), 57432}, /* ROR */
{ CPUFUNC(op_e060_0), 57440}, /* ASR */
{ CPUFUNC(op_e068_0), 57448}, /* LSR */
{ CPUFUNC(op_e070_0), 57456}, /* ROXR */
{ CPUFUNC(op_e078_0), 57464}, /* ROR */
{ CPUFUNC(op_e080_0), 57472}, /* ASR */
{ CPUFUNC(op_e088_0), 57480}, /* LSR */
{ CPUFUNC(op_e090_0), 57488}, /* ROXR */
{ CPUFUNC(op_e098_0), 57496}, /* ROR */
{ CPUFUNC(op_e0a0_0), 57504}, /* ASR */
{ CPUFUNC(op_e0a8_0), 57512}, /* LSR */
{ CPUFUNC(op_e0b0_0), 57520}, /* ROXR */
{ CPUFUNC(op_e0b8_0), 57528}, /* ROR */
{ CPUFUNC(op_e0d0_0), 57552}, /* ASRW */
{ CPUFUNC(op_e0d8_0), 57560}, /* ASRW */
{ CPUFUNC(op_e0e0_0), 57568}, /* ASRW */
{ CPUFUNC(op_e0e8_0), 57576}, /* ASRW */
{ CPUFUNC(op_e0f0_0), 57584}, /* ASRW */
{ CPUFUNC(op_e0f8_0), 57592}, /* ASRW */
{ CPUFUNC(op_e0f9_0), 57593}, /* ASRW */
{ CPUFUNC(op_e100_0), 57600}, /* ASL */
{ CPUFUNC(op_e108_0), 57608}, /* LSL */
{ CPUFUNC(op_e110_0), 57616}, /* ROXL */
{ CPUFUNC(op_e118_0), 57624}, /* ROL */
{ CPUFUNC(op_e120_0), 57632}, /* ASL */
{ CPUFUNC(op_e128_0), 57640}, /* LSL */
{ CPUFUNC(op_e130_0), 57648}, /* ROXL */
{ CPUFUNC(op_e138_0), 57656}, /* ROL */
{ CPUFUNC(op_e140_0), 57664}, /* ASL */
{ CPUFUNC(op_e148_0), 57672}, /* LSL */
{ CPUFUNC(op_e150_0), 57680}, /* ROXL */
{ CPUFUNC(op_e158_0), 57688}, /* ROL */
{ CPUFUNC(op_e160_0), 57696}, /* ASL */
{ CPUFUNC(op_e168_0), 57704}, /* LSL */
{ CPUFUNC(op_e170_0), 57712}, /* ROXL */
{ CPUFUNC(op_e178_0), 57720}, /* ROL */
{ CPUFUNC(op_e180_0), 57728}, /* ASL */
{ CPUFUNC(op_e188_0), 57736}, /* LSL */
{ CPUFUNC(op_e190_0), 57744}, /* ROXL */
{ CPUFUNC(op_e198_0), 57752}, /* ROL */
{ CPUFUNC(op_e1a0_0), 57760}, /* ASL */
{ CPUFUNC(op_e1a8_0), 57768}, /* LSL */
{ CPUFUNC(op_e1b0_0), 57776}, /* ROXL */
{ CPUFUNC(op_e1b8_0), 57784}, /* ROL */
{ CPUFUNC(op_e1d0_0), 57808}, /* ASLW */
{ CPUFUNC(op_e1d8_0), 57816}, /* ASLW */
{ CPUFUNC(op_e1e0_0), 57824}, /* ASLW */
{ CPUFUNC(op_e1e8_0), 57832}, /* ASLW */
{ CPUFUNC(op_e1f0_0), 57840}, /* ASLW */
{ CPUFUNC(op_e1f8_0), 57848}, /* ASLW */
{ CPUFUNC(op_e1f9_0), 57849}, /* ASLW */
{ CPUFUNC(op_e2d0_0), 58064}, /* LSRW */
{ CPUFUNC(op_e2d8_0), 58072}, /* LSRW */
{ CPUFUNC(op_e2e0_0), 58080}, /* LSRW */
{ CPUFUNC(op_e2e8_0), 58088}, /* LSRW */
{ CPUFUNC(op_e2f0_0), 58096}, /* LSRW */
{ CPUFUNC(op_e2f8_0), 58104}, /* LSRW */
{ CPUFUNC(op_e2f9_0), 58105}, /* LSRW */
{ CPUFUNC(op_e3d0_0), 58320}, /* LSLW */
{ CPUFUNC(op_e3d8_0), 58328}, /* LSLW */
{ CPUFUNC(op_e3e0_0), 58336}, /* LSLW */
{ CPUFUNC(op_e3e8_0), 58344}, /* LSLW */
{ CPUFUNC(op_e3f0_0), 58352}, /* LSLW */
{ CPUFUNC(op_e3f8_0), 58360}, /* LSLW */
{ CPUFUNC(op_e3f9_0), 58361}, /* LSLW */
{ CPUFUNC(op_e4d0_0), 58576}, /* ROXRW */
{ CPUFUNC(op_e4d8_0), 58584}, /* ROXRW */
{ CPUFUNC(op_e4e0_0), 58592}, /* ROXRW */
{ CPUFUNC(op_e4e8_0), 58600}, /* ROXRW */
{ CPUFUNC(op_e4f0_0), 58608}, /* ROXRW */
{ CPUFUNC(op_e4f8_0), 58616}, /* ROXRW */
{ CPUFUNC(op_e4f9_0), 58617}, /* ROXRW */
{ CPUFUNC(op_e5d0_0), 58832}, /* ROXLW */
{ CPUFUNC(op_e5d8_0), 58840}, /* ROXLW */
{ CPUFUNC(op_e5e0_0), 58848}, /* ROXLW */
{ CPUFUNC(op_e5e8_0), 58856}, /* ROXLW */
{ CPUFUNC(op_e5f0_0), 58864}, /* ROXLW */
{ CPUFUNC(op_e5f8_0), 58872}, /* ROXLW */
{ CPUFUNC(op_e5f9_0), 58873}, /* ROXLW */
{ CPUFUNC(op_e6d0_0), 59088}, /* RORW */
{ CPUFUNC(op_e6d8_0), 59096}, /* RORW */
{ CPUFUNC(op_e6e0_0), 59104}, /* RORW */
{ CPUFUNC(op_e6e8_0), 59112}, /* RORW */
{ CPUFUNC(op_e6f0_0), 59120}, /* RORW */
{ CPUFUNC(op_e6f8_0), 59128}, /* RORW */
{ CPUFUNC(op_e6f9_0), 59129}, /* RORW */
{ CPUFUNC(op_e7d0_0), 59344}, /* ROLW */
{ CPUFUNC(op_e7d8_0), 59352}, /* ROLW */
{ CPUFUNC(op_e7e0_0), 59360}, /* ROLW */
{ CPUFUNC(op_e7e8_0), 59368}, /* ROLW */
{ CPUFUNC(op_e7f0_0), 59376}, /* ROLW */
{ CPUFUNC(op_e7f8_0), 59384}, /* ROLW */
{ CPUFUNC(op_e7f9_0), 59385}, /* ROLW */
{ CPUFUNC(op_e8c0_0), 59584}, /* BFTST */
{ CPUFUNC(op_e8d0_0), 59600}, /* BFTST */
{ CPUFUNC(op_e8e8_0), 59624}, /* BFTST */
{ CPUFUNC(op_e8f0_0), 59632}, /* BFTST */
{ CPUFUNC(op_e8f8_0), 59640}, /* BFTST */
{ CPUFUNC(op_e8f9_0), 59641}, /* BFTST */
{ CPUFUNC(op_e8fa_0), 59642}, /* BFTST */
{ CPUFUNC(op_e8fb_0), 59643}, /* BFTST */
{ CPUFUNC(op_e9c0_0), 59840}, /* BFEXTU */
{ CPUFUNC(op_e9d0_0), 59856}, /* BFEXTU */
{ CPUFUNC(op_e9e8_0), 59880}, /* BFEXTU */
{ CPUFUNC(op_e9f0_0), 59888}, /* BFEXTU */
{ CPUFUNC(op_e9f8_0), 59896}, /* BFEXTU */
{ CPUFUNC(op_e9f9_0), 59897}, /* BFEXTU */
{ CPUFUNC(op_e9fa_0), 59898}, /* BFEXTU */
{ CPUFUNC(op_e9fb_0), 59899}, /* BFEXTU */
{ CPUFUNC(op_eac0_0), 60096}, /* BFCHG */
{ CPUFUNC(op_ead0_0), 60112}, /* BFCHG */
{ CPUFUNC(op_eae8_0), 60136}, /* BFCHG */
{ CPUFUNC(op_eaf0_0), 60144}, /* BFCHG */
{ CPUFUNC(op_eaf8_0), 60152}, /* BFCHG */
{ CPUFUNC(op_eaf9_0), 60153}, /* BFCHG */
{ CPUFUNC(op_ebc0_0), 60352}, /* BFEXTS */
{ CPUFUNC(op_ebd0_0), 60368}, /* BFEXTS */
{ CPUFUNC(op_ebe8_0), 60392}, /* BFEXTS */
{ CPUFUNC(op_ebf0_0), 60400}, /* BFEXTS */
{ CPUFUNC(op_ebf8_0), 60408}, /* BFEXTS */
{ CPUFUNC(op_ebf9_0), 60409}, /* BFEXTS */
{ CPUFUNC(op_ebfa_0), 60410}, /* BFEXTS */
{ CPUFUNC(op_ebfb_0), 60411}, /* BFEXTS */
{ CPUFUNC(op_ecc0_0), 60608}, /* BFCLR */
{ CPUFUNC(op_ecd0_0), 60624}, /* BFCLR */
{ CPUFUNC(op_ece8_0), 60648}, /* BFCLR */
{ CPUFUNC(op_ecf0_0), 60656}, /* BFCLR */
{ CPUFUNC(op_ecf8_0), 60664}, /* BFCLR */
{ CPUFUNC(op_ecf9_0), 60665}, /* BFCLR */
{ CPUFUNC(op_edc0_0), 60864}, /* BFFFO */
{ CPUFUNC(op_edd0_0), 60880}, /* BFFFO */
{ CPUFUNC(op_ede8_0), 60904}, /* BFFFO */
{ CPUFUNC(op_edf0_0), 60912}, /* BFFFO */
{ CPUFUNC(op_edf8_0), 60920}, /* BFFFO */
{ CPUFUNC(op_edf9_0), 60921}, /* BFFFO */
{ CPUFUNC(op_edfa_0), 60922}, /* BFFFO */
{ CPUFUNC(op_edfb_0), 60923}, /* BFFFO */
{ CPUFUNC(op_eec0_0), 61120}, /* BFSET */
{ CPUFUNC(op_eed0_0), 61136}, /* BFSET */
{ CPUFUNC(op_eee8_0), 61160}, /* BFSET */
{ CPUFUNC(op_eef0_0), 61168}, /* BFSET */
{ CPUFUNC(op_eef8_0), 61176}, /* BFSET */
{ CPUFUNC(op_eef9_0), 61177}, /* BFSET */
{ CPUFUNC(op_efc0_0), 61376}, /* BFINS */
{ CPUFUNC(op_efd0_0), 61392}, /* BFINS */
{ CPUFUNC(op_efe8_0), 61416}, /* BFINS */
{ CPUFUNC(op_eff0_0), 61424}, /* BFINS */
{ CPUFUNC(op_eff8_0), 61432}, /* BFINS */
{ CPUFUNC(op_eff9_0), 61433}, /* BFINS */
{ 0, 0 }};
#endif /* CPUEMU_68000_ONLY */
#ifndef CPUEMU_68000_ONLY
const struct cputbl CPUFUNC(op_smalltbl_3)[] = {
{ CPUFUNC(op_0000_0), 0}, /* OR */
{ CPUFUNC(op_0010_0), 16}, /* OR */
{ CPUFUNC(op_0018_0), 24}, /* OR */
{ CPUFUNC(op_0020_0), 32}, /* OR */
{ CPUFUNC(op_0028_0), 40}, /* OR */
{ CPUFUNC(op_0030_3), 48 }, /* OR */
{ CPUFUNC(op_0038_0), 56}, /* OR */
{ CPUFUNC(op_0039_0), 57}, /* OR */
{ CPUFUNC(op_003c_0), 60}, /* ORSR */
{ CPUFUNC(op_0040_0), 64}, /* OR */
{ CPUFUNC(op_0050_0), 80}, /* OR */
{ CPUFUNC(op_0058_0), 88}, /* OR */
{ CPUFUNC(op_0060_0), 96}, /* OR */
{ CPUFUNC(op_0068_0), 104}, /* OR */
{ CPUFUNC(op_0070_3), 112 }, /* OR */
{ CPUFUNC(op_0078_0), 120}, /* OR */
{ CPUFUNC(op_0079_0), 121}, /* OR */
{ CPUFUNC(op_007c_0), 124}, /* ORSR */
{ CPUFUNC(op_0080_0), 128}, /* OR */
{ CPUFUNC(op_0090_0), 144}, /* OR */
{ CPUFUNC(op_0098_0), 152}, /* OR */
{ CPUFUNC(op_00a0_0), 160}, /* OR */
{ CPUFUNC(op_00a8_0), 168}, /* OR */
{ CPUFUNC(op_00b0_3), 176 }, /* OR */
{ CPUFUNC(op_00b8_0), 184}, /* OR */
{ CPUFUNC(op_00b9_0), 185}, /* OR */
{ CPUFUNC(op_0100_0), 256}, /* BTST */
{ CPUFUNC(op_0108_0), 264}, /* MVPMR */
{ CPUFUNC(op_0110_0), 272}, /* BTST */
{ CPUFUNC(op_0118_0), 280}, /* BTST */
{ CPUFUNC(op_0120_0), 288}, /* BTST */
{ CPUFUNC(op_0128_0), 296}, /* BTST */
{ CPUFUNC(op_0130_3), 304 }, /* BTST */
{ CPUFUNC(op_0138_0), 312}, /* BTST */
{ CPUFUNC(op_0139_0), 313}, /* BTST */
{ CPUFUNC(op_013a_0), 314}, /* BTST */
{ CPUFUNC(op_013b_3), 315 }, /* BTST */
{ CPUFUNC(op_013c_0), 316}, /* BTST */
{ CPUFUNC(op_0140_0), 320}, /* BCHG */
{ CPUFUNC(op_0148_0), 328}, /* MVPMR */
{ CPUFUNC(op_0150_0), 336}, /* BCHG */
{ CPUFUNC(op_0158_0), 344}, /* BCHG */
{ CPUFUNC(op_0160_0), 352}, /* BCHG */
{ CPUFUNC(op_0168_0), 360}, /* BCHG */
{ CPUFUNC(op_0170_3), 368 }, /* BCHG */
{ CPUFUNC(op_0178_0), 376}, /* BCHG */
{ CPUFUNC(op_0179_0), 377}, /* BCHG */
{ CPUFUNC(op_017a_0), 378}, /* BCHG */
{ CPUFUNC(op_017b_3), 379 }, /* BCHG */
{ CPUFUNC(op_0180_0), 384}, /* BCLR */
{ CPUFUNC(op_0188_0), 392}, /* MVPRM */
{ CPUFUNC(op_0190_0), 400}, /* BCLR */
{ CPUFUNC(op_0198_0), 408}, /* BCLR */
{ CPUFUNC(op_01a0_0), 416}, /* BCLR */
{ CPUFUNC(op_01a8_0), 424}, /* BCLR */
{ CPUFUNC(op_01b0_3), 432 }, /* BCLR */
{ CPUFUNC(op_01b8_0), 440}, /* BCLR */
{ CPUFUNC(op_01b9_0), 441}, /* BCLR */
{ CPUFUNC(op_01ba_0), 442}, /* BCLR */
{ CPUFUNC(op_01bb_3), 443 }, /* BCLR */
{ CPUFUNC(op_01c0_0), 448}, /* BSET */
{ CPUFUNC(op_01c8_0), 456}, /* MVPRM */
{ CPUFUNC(op_01d0_0), 464}, /* BSET */
{ CPUFUNC(op_01d8_0), 472}, /* BSET */
{ CPUFUNC(op_01e0_0), 480}, /* BSET */
{ CPUFUNC(op_01e8_0), 488}, /* BSET */
{ CPUFUNC(op_01f0_3), 496 }, /* BSET */
{ CPUFUNC(op_01f8_0), 504}, /* BSET */
{ CPUFUNC(op_01f9_0), 505}, /* BSET */
{ CPUFUNC(op_01fa_0), 506}, /* BSET */
{ CPUFUNC(op_01fb_3), 507 }, /* BSET */
{ CPUFUNC(op_0200_0), 512}, /* AND */
{ CPUFUNC(op_0210_0), 528}, /* AND */
{ CPUFUNC(op_0218_0), 536}, /* AND */
{ CPUFUNC(op_0220_0), 544}, /* AND */
{ CPUFUNC(op_0228_0), 552}, /* AND */
{ CPUFUNC(op_0230_3), 560 }, /* AND */
{ CPUFUNC(op_0238_0), 568}, /* AND */
{ CPUFUNC(op_0239_0), 569}, /* AND */
{ CPUFUNC(op_023c_0), 572}, /* ANDSR */
{ CPUFUNC(op_0240_0), 576}, /* AND */
{ CPUFUNC(op_0250_0), 592}, /* AND */
{ CPUFUNC(op_0258_0), 600}, /* AND */
{ CPUFUNC(op_0260_0), 608}, /* AND */
{ CPUFUNC(op_0268_0), 616}, /* AND */
{ CPUFUNC(op_0270_3), 624 }, /* AND */
{ CPUFUNC(op_0278_0), 632}, /* AND */
{ CPUFUNC(op_0279_0), 633}, /* AND */
{ CPUFUNC(op_027c_0), 636}, /* ANDSR */
{ CPUFUNC(op_0280_0), 640}, /* AND */
{ CPUFUNC(op_0290_0), 656}, /* AND */
{ CPUFUNC(op_0298_0), 664}, /* AND */
{ CPUFUNC(op_02a0_0), 672}, /* AND */
{ CPUFUNC(op_02a8_0), 680}, /* AND */
{ CPUFUNC(op_02b0_3), 688 }, /* AND */
{ CPUFUNC(op_02b8_0), 696}, /* AND */
{ CPUFUNC(op_02b9_0), 697}, /* AND */
{ CPUFUNC(op_0400_0), 1024}, /* SUB */
{ CPUFUNC(op_0410_0), 1040}, /* SUB */
{ CPUFUNC(op_0418_0), 1048}, /* SUB */
{ CPUFUNC(op_0420_0), 1056}, /* SUB */
{ CPUFUNC(op_0428_0), 1064}, /* SUB */
{ CPUFUNC(op_0430_3), 1072 }, /* SUB */
{ CPUFUNC(op_0438_0), 1080}, /* SUB */
{ CPUFUNC(op_0439_0), 1081}, /* SUB */
{ CPUFUNC(op_0440_0), 1088}, /* SUB */
{ CPUFUNC(op_0450_0), 1104}, /* SUB */
{ CPUFUNC(op_0458_0), 1112}, /* SUB */
{ CPUFUNC(op_0460_0), 1120}, /* SUB */
{ CPUFUNC(op_0468_0), 1128}, /* SUB */
{ CPUFUNC(op_0470_3), 1136 }, /* SUB */
{ CPUFUNC(op_0478_0), 1144}, /* SUB */
{ CPUFUNC(op_0479_0), 1145}, /* SUB */
{ CPUFUNC(op_0480_0), 1152}, /* SUB */
{ CPUFUNC(op_0490_0), 1168}, /* SUB */
{ CPUFUNC(op_0498_0), 1176}, /* SUB */
{ CPUFUNC(op_04a0_0), 1184}, /* SUB */
{ CPUFUNC(op_04a8_0), 1192}, /* SUB */
{ CPUFUNC(op_04b0_3), 1200 }, /* SUB */
{ CPUFUNC(op_04b8_0), 1208}, /* SUB */
{ CPUFUNC(op_04b9_0), 1209}, /* SUB */
{ CPUFUNC(op_0600_0), 1536}, /* ADD */
{ CPUFUNC(op_0610_0), 1552}, /* ADD */
{ CPUFUNC(op_0618_0), 1560}, /* ADD */
{ CPUFUNC(op_0620_0), 1568}, /* ADD */
{ CPUFUNC(op_0628_0), 1576}, /* ADD */
{ CPUFUNC(op_0630_3), 1584 }, /* ADD */
{ CPUFUNC(op_0638_0), 1592}, /* ADD */
{ CPUFUNC(op_0639_0), 1593}, /* ADD */
{ CPUFUNC(op_0640_0), 1600}, /* ADD */
{ CPUFUNC(op_0650_0), 1616}, /* ADD */
{ CPUFUNC(op_0658_0), 1624}, /* ADD */
{ CPUFUNC(op_0660_0), 1632}, /* ADD */
{ CPUFUNC(op_0668_0), 1640}, /* ADD */
{ CPUFUNC(op_0670_3), 1648 }, /* ADD */
{ CPUFUNC(op_0678_0), 1656}, /* ADD */
{ CPUFUNC(op_0679_0), 1657}, /* ADD */
{ CPUFUNC(op_0680_0), 1664}, /* ADD */
{ CPUFUNC(op_0690_0), 1680}, /* ADD */
{ CPUFUNC(op_0698_0), 1688}, /* ADD */
{ CPUFUNC(op_06a0_0), 1696}, /* ADD */
{ CPUFUNC(op_06a8_0), 1704}, /* ADD */
{ CPUFUNC(op_06b0_3), 1712 }, /* ADD */
{ CPUFUNC(op_06b8_0), 1720}, /* ADD */
{ CPUFUNC(op_06b9_0), 1721}, /* ADD */
{ CPUFUNC(op_0800_0), 2048}, /* BTST */
{ CPUFUNC(op_0810_0), 2064}, /* BTST */
{ CPUFUNC(op_0818_0), 2072}, /* BTST */
{ CPUFUNC(op_0820_0), 2080}, /* BTST */
{ CPUFUNC(op_0828_0), 2088}, /* BTST */
{ CPUFUNC(op_0830_3), 2096 }, /* BTST */
{ CPUFUNC(op_0838_0), 2104}, /* BTST */
{ CPUFUNC(op_0839_0), 2105}, /* BTST */
{ CPUFUNC(op_083a_0), 2106}, /* BTST */
{ CPUFUNC(op_083b_3), 2107 }, /* BTST */
{ CPUFUNC(op_083c_0), 2108}, /* BTST */
{ CPUFUNC(op_0840_0), 2112}, /* BCHG */
{ CPUFUNC(op_0850_0), 2128}, /* BCHG */
{ CPUFUNC(op_0858_0), 2136}, /* BCHG */
{ CPUFUNC(op_0860_0), 2144}, /* BCHG */
{ CPUFUNC(op_0868_0), 2152}, /* BCHG */
{ CPUFUNC(op_0870_3), 2160 }, /* BCHG */
{ CPUFUNC(op_0878_0), 2168}, /* BCHG */
{ CPUFUNC(op_0879_0), 2169}, /* BCHG */
{ CPUFUNC(op_087a_0), 2170}, /* BCHG */
{ CPUFUNC(op_087b_3), 2171 }, /* BCHG */
{ CPUFUNC(op_0880_0), 2176}, /* BCLR */
{ CPUFUNC(op_0890_0), 2192}, /* BCLR */
{ CPUFUNC(op_0898_0), 2200}, /* BCLR */
{ CPUFUNC(op_08a0_0), 2208}, /* BCLR */
{ CPUFUNC(op_08a8_0), 2216}, /* BCLR */
{ CPUFUNC(op_08b0_3), 2224 }, /* BCLR */
{ CPUFUNC(op_08b8_0), 2232}, /* BCLR */
{ CPUFUNC(op_08b9_0), 2233}, /* BCLR */
{ CPUFUNC(op_08ba_0), 2234}, /* BCLR */
{ CPUFUNC(op_08bb_3), 2235 }, /* BCLR */
{ CPUFUNC(op_08c0_0), 2240}, /* BSET */
{ CPUFUNC(op_08d0_0), 2256}, /* BSET */
{ CPUFUNC(op_08d8_0), 2264}, /* BSET */
{ CPUFUNC(op_08e0_0), 2272}, /* BSET */
{ CPUFUNC(op_08e8_0), 2280}, /* BSET */
{ CPUFUNC(op_08f0_3), 2288 }, /* BSET */
{ CPUFUNC(op_08f8_0), 2296}, /* BSET */
{ CPUFUNC(op_08f9_0), 2297}, /* BSET */
{ CPUFUNC(op_08fa_0), 2298}, /* BSET */
{ CPUFUNC(op_08fb_3), 2299 }, /* BSET */
{ CPUFUNC(op_0a00_0), 2560}, /* EOR */
{ CPUFUNC(op_0a10_0), 2576}, /* EOR */
{ CPUFUNC(op_0a18_0), 2584}, /* EOR */
{ CPUFUNC(op_0a20_0), 2592}, /* EOR */
{ CPUFUNC(op_0a28_0), 2600}, /* EOR */
{ CPUFUNC(op_0a30_3), 2608 }, /* EOR */
{ CPUFUNC(op_0a38_0), 2616}, /* EOR */
{ CPUFUNC(op_0a39_0), 2617}, /* EOR */
{ CPUFUNC(op_0a3c_0), 2620}, /* EORSR */
{ CPUFUNC(op_0a40_0), 2624}, /* EOR */
{ CPUFUNC(op_0a50_0), 2640}, /* EOR */
{ CPUFUNC(op_0a58_0), 2648}, /* EOR */
{ CPUFUNC(op_0a60_0), 2656}, /* EOR */
{ CPUFUNC(op_0a68_0), 2664}, /* EOR */
{ CPUFUNC(op_0a70_3), 2672 }, /* EOR */
{ CPUFUNC(op_0a78_0), 2680}, /* EOR */
{ CPUFUNC(op_0a79_0), 2681}, /* EOR */
{ CPUFUNC(op_0a7c_0), 2684}, /* EORSR */
{ CPUFUNC(op_0a80_0), 2688}, /* EOR */
{ CPUFUNC(op_0a90_0), 2704}, /* EOR */
{ CPUFUNC(op_0a98_0), 2712}, /* EOR */
{ CPUFUNC(op_0aa0_0), 2720}, /* EOR */
{ CPUFUNC(op_0aa8_0), 2728}, /* EOR */
{ CPUFUNC(op_0ab0_3), 2736 }, /* EOR */
{ CPUFUNC(op_0ab8_0), 2744}, /* EOR */
{ CPUFUNC(op_0ab9_0), 2745}, /* EOR */
{ CPUFUNC(op_0c00_0), 3072}, /* CMP */
{ CPUFUNC(op_0c10_0), 3088}, /* CMP */
{ CPUFUNC(op_0c18_0), 3096}, /* CMP */
{ CPUFUNC(op_0c20_0), 3104}, /* CMP */
{ CPUFUNC(op_0c28_0), 3112}, /* CMP */
{ CPUFUNC(op_0c30_3), 3120 }, /* CMP */
{ CPUFUNC(op_0c38_0), 3128}, /* CMP */
{ CPUFUNC(op_0c39_0), 3129}, /* CMP */
{ CPUFUNC(op_0c40_0), 3136}, /* CMP */
{ CPUFUNC(op_0c50_0), 3152}, /* CMP */
{ CPUFUNC(op_0c58_0), 3160}, /* CMP */
{ CPUFUNC(op_0c60_0), 3168}, /* CMP */
{ CPUFUNC(op_0c68_0), 3176}, /* CMP */
{ CPUFUNC(op_0c70_3), 3184 }, /* CMP */
{ CPUFUNC(op_0c78_0), 3192}, /* CMP */
{ CPUFUNC(op_0c79_0), 3193}, /* CMP */
{ CPUFUNC(op_0c80_0), 3200}, /* CMP */
{ CPUFUNC(op_0c90_0), 3216}, /* CMP */
{ CPUFUNC(op_0c98_0), 3224}, /* CMP */
{ CPUFUNC(op_0ca0_0), 3232}, /* CMP */
{ CPUFUNC(op_0ca8_0), 3240}, /* CMP */
{ CPUFUNC(op_0cb0_3), 3248 }, /* CMP */
{ CPUFUNC(op_0cb8_0), 3256}, /* CMP */
{ CPUFUNC(op_0cb9_0), 3257}, /* CMP */
{ CPUFUNC(op_1000_0), 4096}, /* MOVE */
{ CPUFUNC(op_1010_0), 4112}, /* MOVE */
{ CPUFUNC(op_1018_0), 4120}, /* MOVE */
{ CPUFUNC(op_1020_0), 4128}, /* MOVE */
{ CPUFUNC(op_1028_0), 4136}, /* MOVE */
{ CPUFUNC(op_1030_3), 4144 }, /* MOVE */
{ CPUFUNC(op_1038_0), 4152}, /* MOVE */
{ CPUFUNC(op_1039_0), 4153}, /* MOVE */
{ CPUFUNC(op_103a_0), 4154}, /* MOVE */
{ CPUFUNC(op_103b_3), 4155 }, /* MOVE */
{ CPUFUNC(op_103c_0), 4156}, /* MOVE */
{ CPUFUNC(op_1080_0), 4224}, /* MOVE */
{ CPUFUNC(op_1090_0), 4240}, /* MOVE */
{ CPUFUNC(op_1098_0), 4248}, /* MOVE */
{ CPUFUNC(op_10a0_0), 4256}, /* MOVE */
{ CPUFUNC(op_10a8_0), 4264}, /* MOVE */
{ CPUFUNC(op_10b0_3), 4272 }, /* MOVE */
{ CPUFUNC(op_10b8_0), 4280}, /* MOVE */
{ CPUFUNC(op_10b9_0), 4281}, /* MOVE */
{ CPUFUNC(op_10ba_0), 4282}, /* MOVE */
{ CPUFUNC(op_10bb_3), 4283 }, /* MOVE */
{ CPUFUNC(op_10bc_0), 4284}, /* MOVE */
{ CPUFUNC(op_10c0_0), 4288}, /* MOVE */
{ CPUFUNC(op_10d0_0), 4304}, /* MOVE */
{ CPUFUNC(op_10d8_0), 4312}, /* MOVE */
{ CPUFUNC(op_10e0_0), 4320}, /* MOVE */
{ CPUFUNC(op_10e8_0), 4328}, /* MOVE */
{ CPUFUNC(op_10f0_3), 4336 }, /* MOVE */
{ CPUFUNC(op_10f8_0), 4344}, /* MOVE */
{ CPUFUNC(op_10f9_0), 4345}, /* MOVE */
{ CPUFUNC(op_10fa_0), 4346}, /* MOVE */
{ CPUFUNC(op_10fb_3), 4347 }, /* MOVE */
{ CPUFUNC(op_10fc_0), 4348}, /* MOVE */
{ CPUFUNC(op_1100_0), 4352}, /* MOVE */
{ CPUFUNC(op_1110_0), 4368}, /* MOVE */
{ CPUFUNC(op_1118_0), 4376}, /* MOVE */
{ CPUFUNC(op_1120_0), 4384}, /* MOVE */
{ CPUFUNC(op_1128_0), 4392}, /* MOVE */
{ CPUFUNC(op_1130_3), 4400 }, /* MOVE */
{ CPUFUNC(op_1138_0), 4408}, /* MOVE */
{ CPUFUNC(op_1139_0), 4409}, /* MOVE */
{ CPUFUNC(op_113a_0), 4410}, /* MOVE */
{ CPUFUNC(op_113b_3), 4411 }, /* MOVE */
{ CPUFUNC(op_113c_0), 4412}, /* MOVE */
{ CPUFUNC(op_1140_0), 4416}, /* MOVE */
{ CPUFUNC(op_1150_0), 4432}, /* MOVE */
{ CPUFUNC(op_1158_0), 4440}, /* MOVE */
{ CPUFUNC(op_1160_0), 4448}, /* MOVE */
{ CPUFUNC(op_1168_0), 4456}, /* MOVE */
{ CPUFUNC(op_1170_3), 4464 }, /* MOVE */
{ CPUFUNC(op_1178_0), 4472}, /* MOVE */
{ CPUFUNC(op_1179_0), 4473}, /* MOVE */
{ CPUFUNC(op_117a_0), 4474}, /* MOVE */
{ CPUFUNC(op_117b_3), 4475 }, /* MOVE */
{ CPUFUNC(op_117c_0), 4476}, /* MOVE */
{ CPUFUNC(op_1180_3), 4480 }, /* MOVE */
{ CPUFUNC(op_1190_3), 4496 }, /* MOVE */
{ CPUFUNC(op_1198_3), 4504 }, /* MOVE */
{ CPUFUNC(op_11a0_3), 4512 }, /* MOVE */
{ CPUFUNC(op_11a8_3), 4520 }, /* MOVE */
{ CPUFUNC(op_11b0_3), 4528 }, /* MOVE */
{ CPUFUNC(op_11b8_3), 4536 }, /* MOVE */
{ CPUFUNC(op_11b9_3), 4537 }, /* MOVE */
{ CPUFUNC(op_11ba_3), 4538 }, /* MOVE */
{ CPUFUNC(op_11bb_3), 4539 }, /* MOVE */
{ CPUFUNC(op_11bc_3), 4540 }, /* MOVE */
{ CPUFUNC(op_11c0_0), 4544}, /* MOVE */
{ CPUFUNC(op_11d0_0), 4560}, /* MOVE */
{ CPUFUNC(op_11d8_0), 4568}, /* MOVE */
{ CPUFUNC(op_11e0_0), 4576}, /* MOVE */
{ CPUFUNC(op_11e8_0), 4584}, /* MOVE */
{ CPUFUNC(op_11f0_3), 4592 }, /* MOVE */
{ CPUFUNC(op_11f8_0), 4600}, /* MOVE */
{ CPUFUNC(op_11f9_0), 4601}, /* MOVE */
{ CPUFUNC(op_11fa_0), 4602}, /* MOVE */
{ CPUFUNC(op_11fb_3), 4603 }, /* MOVE */
{ CPUFUNC(op_11fc_0), 4604}, /* MOVE */
{ CPUFUNC(op_13c0_0), 5056}, /* MOVE */
{ CPUFUNC(op_13d0_0), 5072}, /* MOVE */
{ CPUFUNC(op_13d8_0), 5080}, /* MOVE */
{ CPUFUNC(op_13e0_0), 5088}, /* MOVE */
{ CPUFUNC(op_13e8_0), 5096}, /* MOVE */
{ CPUFUNC(op_13f0_3), 5104 }, /* MOVE */
{ CPUFUNC(op_13f8_0), 5112}, /* MOVE */
{ CPUFUNC(op_13f9_0), 5113}, /* MOVE */
{ CPUFUNC(op_13fa_0), 5114}, /* MOVE */
{ CPUFUNC(op_13fb_3), 5115 }, /* MOVE */
{ CPUFUNC(op_13fc_0), 5116}, /* MOVE */
{ CPUFUNC(op_2000_0), 8192}, /* MOVE */
{ CPUFUNC(op_2008_0), 8200}, /* MOVE */
{ CPUFUNC(op_2010_0), 8208}, /* MOVE */
{ CPUFUNC(op_2018_0), 8216}, /* MOVE */
{ CPUFUNC(op_2020_0), 8224}, /* MOVE */
{ CPUFUNC(op_2028_0), 8232}, /* MOVE */
{ CPUFUNC(op_2030_3), 8240 }, /* MOVE */
{ CPUFUNC(op_2038_0), 8248}, /* MOVE */
{ CPUFUNC(op_2039_0), 8249}, /* MOVE */
{ CPUFUNC(op_203a_0), 8250}, /* MOVE */
{ CPUFUNC(op_203b_3), 8251 }, /* MOVE */
{ CPUFUNC(op_203c_0), 8252}, /* MOVE */
{ CPUFUNC(op_2040_0), 8256}, /* MOVEA */
{ CPUFUNC(op_2048_0), 8264}, /* MOVEA */
{ CPUFUNC(op_2050_0), 8272}, /* MOVEA */
{ CPUFUNC(op_2058_0), 8280}, /* MOVEA */
{ CPUFUNC(op_2060_0), 8288}, /* MOVEA */
{ CPUFUNC(op_2068_0), 8296}, /* MOVEA */
{ CPUFUNC(op_2070_3), 8304 }, /* MOVEA */
{ CPUFUNC(op_2078_0), 8312}, /* MOVEA */
{ CPUFUNC(op_2079_0), 8313}, /* MOVEA */
{ CPUFUNC(op_207a_0), 8314}, /* MOVEA */
{ CPUFUNC(op_207b_3), 8315 }, /* MOVEA */
{ CPUFUNC(op_207c_0), 8316}, /* MOVEA */
{ CPUFUNC(op_2080_0), 8320}, /* MOVE */
{ CPUFUNC(op_2088_0), 8328}, /* MOVE */
{ CPUFUNC(op_2090_0), 8336}, /* MOVE */
{ CPUFUNC(op_2098_0), 8344}, /* MOVE */
{ CPUFUNC(op_20a0_0), 8352}, /* MOVE */
{ CPUFUNC(op_20a8_0), 8360}, /* MOVE */
{ CPUFUNC(op_20b0_3), 8368 }, /* MOVE */
{ CPUFUNC(op_20b8_0), 8376}, /* MOVE */
{ CPUFUNC(op_20b9_0), 8377}, /* MOVE */
{ CPUFUNC(op_20ba_0), 8378}, /* MOVE */
{ CPUFUNC(op_20bb_3), 8379 }, /* MOVE */
{ CPUFUNC(op_20bc_0), 8380}, /* MOVE */
{ CPUFUNC(op_20c0_0), 8384}, /* MOVE */
{ CPUFUNC(op_20c8_0), 8392}, /* MOVE */
{ CPUFUNC(op_20d0_0), 8400}, /* MOVE */
{ CPUFUNC(op_20d8_0), 8408}, /* MOVE */
{ CPUFUNC(op_20e0_0), 8416}, /* MOVE */
{ CPUFUNC(op_20e8_0), 8424}, /* MOVE */
{ CPUFUNC(op_20f0_3), 8432 }, /* MOVE */
{ CPUFUNC(op_20f8_0), 8440}, /* MOVE */
{ CPUFUNC(op_20f9_0), 8441}, /* MOVE */
{ CPUFUNC(op_20fa_0), 8442}, /* MOVE */
{ CPUFUNC(op_20fb_3), 8443 }, /* MOVE */
{ CPUFUNC(op_20fc_0), 8444}, /* MOVE */
{ CPUFUNC(op_2100_0), 8448}, /* MOVE */
{ CPUFUNC(op_2108_0), 8456}, /* MOVE */
{ CPUFUNC(op_2110_0), 8464}, /* MOVE */
{ CPUFUNC(op_2118_0), 8472}, /* MOVE */
{ CPUFUNC(op_2120_0), 8480}, /* MOVE */
{ CPUFUNC(op_2128_0), 8488}, /* MOVE */
{ CPUFUNC(op_2130_3), 8496 }, /* MOVE */
{ CPUFUNC(op_2138_0), 8504}, /* MOVE */
{ CPUFUNC(op_2139_0), 8505}, /* MOVE */
{ CPUFUNC(op_213a_0), 8506}, /* MOVE */
{ CPUFUNC(op_213b_3), 8507 }, /* MOVE */
{ CPUFUNC(op_213c_0), 8508}, /* MOVE */
{ CPUFUNC(op_2140_0), 8512}, /* MOVE */
{ CPUFUNC(op_2148_0), 8520}, /* MOVE */
{ CPUFUNC(op_2150_0), 8528}, /* MOVE */
{ CPUFUNC(op_2158_0), 8536}, /* MOVE */
{ CPUFUNC(op_2160_0), 8544}, /* MOVE */
{ CPUFUNC(op_2168_0), 8552}, /* MOVE */
{ CPUFUNC(op_2170_3), 8560 }, /* MOVE */
{ CPUFUNC(op_2178_0), 8568}, /* MOVE */
{ CPUFUNC(op_2179_0), 8569}, /* MOVE */
{ CPUFUNC(op_217a_0), 8570}, /* MOVE */
{ CPUFUNC(op_217b_3), 8571 }, /* MOVE */
{ CPUFUNC(op_217c_0), 8572}, /* MOVE */
{ CPUFUNC(op_2180_3), 8576 }, /* MOVE */
{ CPUFUNC(op_2188_3), 8584 }, /* MOVE */
{ CPUFUNC(op_2190_3), 8592 }, /* MOVE */
{ CPUFUNC(op_2198_3), 8600 }, /* MOVE */
{ CPUFUNC(op_21a0_3), 8608 }, /* MOVE */
{ CPUFUNC(op_21a8_3), 8616 }, /* MOVE */
{ CPUFUNC(op_21b0_3), 8624 }, /* MOVE */
{ CPUFUNC(op_21b8_3), 8632 }, /* MOVE */
{ CPUFUNC(op_21b9_3), 8633 }, /* MOVE */
{ CPUFUNC(op_21ba_3), 8634 }, /* MOVE */
{ CPUFUNC(op_21bb_3), 8635 }, /* MOVE */
{ CPUFUNC(op_21bc_3), 8636 }, /* MOVE */
{ CPUFUNC(op_21c0_0), 8640}, /* MOVE */
{ CPUFUNC(op_21c8_0), 8648}, /* MOVE */
{ CPUFUNC(op_21d0_0), 8656}, /* MOVE */
{ CPUFUNC(op_21d8_0), 8664}, /* MOVE */
{ CPUFUNC(op_21e0_0), 8672}, /* MOVE */
{ CPUFUNC(op_21e8_0), 8680}, /* MOVE */
{ CPUFUNC(op_21f0_3), 8688 }, /* MOVE */
{ CPUFUNC(op_21f8_0), 8696}, /* MOVE */
{ CPUFUNC(op_21f9_0), 8697}, /* MOVE */
{ CPUFUNC(op_21fa_0), 8698}, /* MOVE */
{ CPUFUNC(op_21fb_3), 8699 }, /* MOVE */
{ CPUFUNC(op_21fc_0), 8700}, /* MOVE */
{ CPUFUNC(op_23c0_0), 9152}, /* MOVE */
{ CPUFUNC(op_23c8_0), 9160}, /* MOVE */
{ CPUFUNC(op_23d0_0), 9168}, /* MOVE */
{ CPUFUNC(op_23d8_0), 9176}, /* MOVE */
{ CPUFUNC(op_23e0_0), 9184}, /* MOVE */
{ CPUFUNC(op_23e8_0), 9192}, /* MOVE */
{ CPUFUNC(op_23f0_3), 9200 }, /* MOVE */
{ CPUFUNC(op_23f8_0), 9208}, /* MOVE */
{ CPUFUNC(op_23f9_0), 9209}, /* MOVE */
{ CPUFUNC(op_23fa_0), 9210}, /* MOVE */
{ CPUFUNC(op_23fb_3), 9211 }, /* MOVE */
{ CPUFUNC(op_23fc_0), 9212}, /* MOVE */
{ CPUFUNC(op_3000_0), 12288}, /* MOVE */
{ CPUFUNC(op_3008_0), 12296}, /* MOVE */
{ CPUFUNC(op_3010_0), 12304}, /* MOVE */
{ CPUFUNC(op_3018_0), 12312}, /* MOVE */
{ CPUFUNC(op_3020_0), 12320}, /* MOVE */
{ CPUFUNC(op_3028_0), 12328}, /* MOVE */
{ CPUFUNC(op_3030_3), 12336 }, /* MOVE */
{ CPUFUNC(op_3038_0), 12344}, /* MOVE */
{ CPUFUNC(op_3039_0), 12345}, /* MOVE */
{ CPUFUNC(op_303a_0), 12346}, /* MOVE */
{ CPUFUNC(op_303b_3), 12347 }, /* MOVE */
{ CPUFUNC(op_303c_0), 12348}, /* MOVE */
{ CPUFUNC(op_3040_0), 12352}, /* MOVEA */
{ CPUFUNC(op_3048_0), 12360}, /* MOVEA */
{ CPUFUNC(op_3050_0), 12368}, /* MOVEA */
{ CPUFUNC(op_3058_0), 12376}, /* MOVEA */
{ CPUFUNC(op_3060_0), 12384}, /* MOVEA */
{ CPUFUNC(op_3068_0), 12392}, /* MOVEA */
{ CPUFUNC(op_3070_3), 12400 }, /* MOVEA */
{ CPUFUNC(op_3078_0), 12408}, /* MOVEA */
{ CPUFUNC(op_3079_0), 12409}, /* MOVEA */
{ CPUFUNC(op_307a_0), 12410}, /* MOVEA */
{ CPUFUNC(op_307b_3), 12411 }, /* MOVEA */
{ CPUFUNC(op_307c_0), 12412}, /* MOVEA */
{ CPUFUNC(op_3080_0), 12416}, /* MOVE */
{ CPUFUNC(op_3088_0), 12424}, /* MOVE */
{ CPUFUNC(op_3090_0), 12432}, /* MOVE */
{ CPUFUNC(op_3098_0), 12440}, /* MOVE */
{ CPUFUNC(op_30a0_0), 12448}, /* MOVE */
{ CPUFUNC(op_30a8_0), 12456}, /* MOVE */
{ CPUFUNC(op_30b0_3), 12464 }, /* MOVE */
{ CPUFUNC(op_30b8_0), 12472}, /* MOVE */
{ CPUFUNC(op_30b9_0), 12473}, /* MOVE */
{ CPUFUNC(op_30ba_0), 12474}, /* MOVE */
{ CPUFUNC(op_30bb_3), 12475 }, /* MOVE */
{ CPUFUNC(op_30bc_0), 12476}, /* MOVE */
{ CPUFUNC(op_30c0_0), 12480}, /* MOVE */
{ CPUFUNC(op_30c8_0), 12488}, /* MOVE */
{ CPUFUNC(op_30d0_0), 12496}, /* MOVE */
{ CPUFUNC(op_30d8_0), 12504}, /* MOVE */
{ CPUFUNC(op_30e0_0), 12512}, /* MOVE */
{ CPUFUNC(op_30e8_0), 12520}, /* MOVE */
{ CPUFUNC(op_30f0_3), 12528 }, /* MOVE */
{ CPUFUNC(op_30f8_0), 12536}, /* MOVE */
{ CPUFUNC(op_30f9_0), 12537}, /* MOVE */
{ CPUFUNC(op_30fa_0), 12538}, /* MOVE */
{ CPUFUNC(op_30fb_3), 12539 }, /* MOVE */
{ CPUFUNC(op_30fc_0), 12540}, /* MOVE */
{ CPUFUNC(op_3100_0), 12544}, /* MOVE */
{ CPUFUNC(op_3108_0), 12552}, /* MOVE */
{ CPUFUNC(op_3110_0), 12560}, /* MOVE */
{ CPUFUNC(op_3118_0), 12568}, /* MOVE */
{ CPUFUNC(op_3120_0), 12576}, /* MOVE */
{ CPUFUNC(op_3128_0), 12584}, /* MOVE */
{ CPUFUNC(op_3130_3), 12592 }, /* MOVE */
{ CPUFUNC(op_3138_0), 12600}, /* MOVE */
{ CPUFUNC(op_3139_0), 12601}, /* MOVE */
{ CPUFUNC(op_313a_0), 12602}, /* MOVE */
{ CPUFUNC(op_313b_3), 12603 }, /* MOVE */
{ CPUFUNC(op_313c_0), 12604}, /* MOVE */
{ CPUFUNC(op_3140_0), 12608}, /* MOVE */
{ CPUFUNC(op_3148_0), 12616}, /* MOVE */
{ CPUFUNC(op_3150_0), 12624}, /* MOVE */
{ CPUFUNC(op_3158_0), 12632}, /* MOVE */
{ CPUFUNC(op_3160_0), 12640}, /* MOVE */
{ CPUFUNC(op_3168_0), 12648}, /* MOVE */
{ CPUFUNC(op_3170_3), 12656 }, /* MOVE */
{ CPUFUNC(op_3178_0), 12664}, /* MOVE */
{ CPUFUNC(op_3179_0), 12665}, /* MOVE */
{ CPUFUNC(op_317a_0), 12666}, /* MOVE */
{ CPUFUNC(op_317b_3), 12667 }, /* MOVE */
{ CPUFUNC(op_317c_0), 12668}, /* MOVE */
{ CPUFUNC(op_3180_3), 12672 }, /* MOVE */
{ CPUFUNC(op_3188_3), 12680 }, /* MOVE */
{ CPUFUNC(op_3190_3), 12688 }, /* MOVE */
{ CPUFUNC(op_3198_3), 12696 }, /* MOVE */
{ CPUFUNC(op_31a0_3), 12704 }, /* MOVE */
{ CPUFUNC(op_31a8_3), 12712 }, /* MOVE */
{ CPUFUNC(op_31b0_3), 12720 }, /* MOVE */
{ CPUFUNC(op_31b8_3), 12728 }, /* MOVE */
{ CPUFUNC(op_31b9_3), 12729 }, /* MOVE */
{ CPUFUNC(op_31ba_3), 12730 }, /* MOVE */
{ CPUFUNC(op_31bb_3), 12731 }, /* MOVE */
{ CPUFUNC(op_31bc_3), 12732 }, /* MOVE */
{ CPUFUNC(op_31c0_0), 12736}, /* MOVE */
{ CPUFUNC(op_31c8_0), 12744}, /* MOVE */
{ CPUFUNC(op_31d0_0), 12752}, /* MOVE */
{ CPUFUNC(op_31d8_0), 12760}, /* MOVE */
{ CPUFUNC(op_31e0_0), 12768}, /* MOVE */
{ CPUFUNC(op_31e8_0), 12776}, /* MOVE */
{ CPUFUNC(op_31f0_3), 12784 }, /* MOVE */
{ CPUFUNC(op_31f8_0), 12792}, /* MOVE */
{ CPUFUNC(op_31f9_0), 12793}, /* MOVE */
{ CPUFUNC(op_31fa_0), 12794}, /* MOVE */
{ CPUFUNC(op_31fb_3), 12795 }, /* MOVE */
{ CPUFUNC(op_31fc_0), 12796}, /* MOVE */
{ CPUFUNC(op_33c0_0), 13248}, /* MOVE */
{ CPUFUNC(op_33c8_0), 13256}, /* MOVE */
{ CPUFUNC(op_33d0_0), 13264}, /* MOVE */
{ CPUFUNC(op_33d8_0), 13272}, /* MOVE */
{ CPUFUNC(op_33e0_0), 13280}, /* MOVE */
{ CPUFUNC(op_33e8_0), 13288}, /* MOVE */
{ CPUFUNC(op_33f0_3), 13296 }, /* MOVE */
{ CPUFUNC(op_33f8_0), 13304}, /* MOVE */
{ CPUFUNC(op_33f9_0), 13305}, /* MOVE */
{ CPUFUNC(op_33fa_0), 13306}, /* MOVE */
{ CPUFUNC(op_33fb_3), 13307 }, /* MOVE */
{ CPUFUNC(op_33fc_0), 13308}, /* MOVE */
{ CPUFUNC(op_4000_0), 16384}, /* NEGX */
{ CPUFUNC(op_4010_0), 16400}, /* NEGX */
{ CPUFUNC(op_4018_0), 16408}, /* NEGX */
{ CPUFUNC(op_4020_0), 16416}, /* NEGX */
{ CPUFUNC(op_4028_0), 16424}, /* NEGX */
{ CPUFUNC(op_4030_3), 16432 }, /* NEGX */
{ CPUFUNC(op_4038_0), 16440}, /* NEGX */
{ CPUFUNC(op_4039_0), 16441}, /* NEGX */
{ CPUFUNC(op_4040_0), 16448}, /* NEGX */
{ CPUFUNC(op_4050_0), 16464}, /* NEGX */
{ CPUFUNC(op_4058_0), 16472}, /* NEGX */
{ CPUFUNC(op_4060_0), 16480}, /* NEGX */
{ CPUFUNC(op_4068_0), 16488}, /* NEGX */
{ CPUFUNC(op_4070_3), 16496 }, /* NEGX */
{ CPUFUNC(op_4078_0), 16504}, /* NEGX */
{ CPUFUNC(op_4079_0), 16505}, /* NEGX */
{ CPUFUNC(op_4080_0), 16512}, /* NEGX */
{ CPUFUNC(op_4090_0), 16528}, /* NEGX */
{ CPUFUNC(op_4098_0), 16536}, /* NEGX */
{ CPUFUNC(op_40a0_0), 16544}, /* NEGX */
{ CPUFUNC(op_40a8_0), 16552}, /* NEGX */
{ CPUFUNC(op_40b0_3), 16560 }, /* NEGX */
{ CPUFUNC(op_40b8_0), 16568}, /* NEGX */
{ CPUFUNC(op_40b9_0), 16569}, /* NEGX */
{ CPUFUNC(op_40c0_0), 16576}, /* MVSR2 */
{ CPUFUNC(op_40d0_0), 16592}, /* MVSR2 */
{ CPUFUNC(op_40d8_0), 16600}, /* MVSR2 */
{ CPUFUNC(op_40e0_0), 16608}, /* MVSR2 */
{ CPUFUNC(op_40e8_0), 16616}, /* MVSR2 */
{ CPUFUNC(op_40f0_3), 16624 }, /* MVSR2 */
{ CPUFUNC(op_40f8_0), 16632}, /* MVSR2 */
{ CPUFUNC(op_40f9_0), 16633}, /* MVSR2 */
{ CPUFUNC(op_4100_0), 16640}, /* CHK */
{ CPUFUNC(op_4110_0), 16656}, /* CHK */
{ CPUFUNC(op_4118_0), 16664}, /* CHK */
{ CPUFUNC(op_4120_0), 16672}, /* CHK */
{ CPUFUNC(op_4128_0), 16680}, /* CHK */
{ CPUFUNC(op_4130_3), 16688 }, /* CHK */
{ CPUFUNC(op_4138_0), 16696}, /* CHK */
{ CPUFUNC(op_4139_0), 16697}, /* CHK */
{ CPUFUNC(op_413a_0), 16698}, /* CHK */
{ CPUFUNC(op_413b_3), 16699 }, /* CHK */
{ CPUFUNC(op_413c_0), 16700}, /* CHK */
{ CPUFUNC(op_4180_0), 16768}, /* CHK */
{ CPUFUNC(op_4190_0), 16784}, /* CHK */
{ CPUFUNC(op_4198_0), 16792}, /* CHK */
{ CPUFUNC(op_41a0_0), 16800}, /* CHK */
{ CPUFUNC(op_41a8_0), 16808}, /* CHK */
{ CPUFUNC(op_41b0_3), 16816 }, /* CHK */
{ CPUFUNC(op_41b8_0), 16824}, /* CHK */
{ CPUFUNC(op_41b9_0), 16825}, /* CHK */
{ CPUFUNC(op_41ba_0), 16826}, /* CHK */
{ CPUFUNC(op_41bb_3), 16827 }, /* CHK */
{ CPUFUNC(op_41bc_0), 16828}, /* CHK */
{ CPUFUNC(op_41d0_0), 16848}, /* LEA */
{ CPUFUNC(op_41e8_0), 16872}, /* LEA */
{ CPUFUNC(op_41f0_3), 16880 }, /* LEA */
{ CPUFUNC(op_41f8_0), 16888}, /* LEA */
{ CPUFUNC(op_41f9_0), 16889}, /* LEA */
{ CPUFUNC(op_41fa_0), 16890}, /* LEA */
{ CPUFUNC(op_41fb_3), 16891 }, /* LEA */
{ CPUFUNC(op_4200_0), 16896}, /* CLR */
{ CPUFUNC(op_4210_0), 16912}, /* CLR */
{ CPUFUNC(op_4218_0), 16920}, /* CLR */
{ CPUFUNC(op_4220_0), 16928}, /* CLR */
{ CPUFUNC(op_4228_0), 16936}, /* CLR */
{ CPUFUNC(op_4230_3), 16944 }, /* CLR */
{ CPUFUNC(op_4238_0), 16952}, /* CLR */
{ CPUFUNC(op_4239_0), 16953}, /* CLR */
{ CPUFUNC(op_4240_0), 16960}, /* CLR */
{ CPUFUNC(op_4250_0), 16976}, /* CLR */
{ CPUFUNC(op_4258_0), 16984}, /* CLR */
{ CPUFUNC(op_4260_0), 16992}, /* CLR */
{ CPUFUNC(op_4268_0), 17000}, /* CLR */
{ CPUFUNC(op_4270_3), 17008 }, /* CLR */
{ CPUFUNC(op_4278_0), 17016}, /* CLR */
{ CPUFUNC(op_4279_0), 17017}, /* CLR */
{ CPUFUNC(op_4280_0), 17024}, /* CLR */
{ CPUFUNC(op_4290_0), 17040}, /* CLR */
{ CPUFUNC(op_4298_0), 17048}, /* CLR */
{ CPUFUNC(op_42a0_0), 17056}, /* CLR */
{ CPUFUNC(op_42a8_0), 17064}, /* CLR */
{ CPUFUNC(op_42b0_3), 17072 }, /* CLR */
{ CPUFUNC(op_42b8_0), 17080}, /* CLR */
{ CPUFUNC(op_42b9_0), 17081}, /* CLR */
{ CPUFUNC(op_42c0_0), 17088}, /* MVSR2 */
{ CPUFUNC(op_42d0_0), 17104}, /* MVSR2 */
{ CPUFUNC(op_42d8_0), 17112}, /* MVSR2 */
{ CPUFUNC(op_42e0_0), 17120}, /* MVSR2 */
{ CPUFUNC(op_42e8_0), 17128}, /* MVSR2 */
#ifndef CPUEMU_68000_ONLY
{ CPUFUNC(op_42f0_3), 17136 }, /* MVSR2 */
#endif
{ CPUFUNC(op_42f8_0), 17144}, /* MVSR2 */
{ CPUFUNC(op_42f9_0), 17145}, /* MVSR2 */
{ CPUFUNC(op_4400_0), 17408}, /* NEG */
{ CPUFUNC(op_4410_0), 17424}, /* NEG */
{ CPUFUNC(op_4418_0), 17432}, /* NEG */
{ CPUFUNC(op_4420_0), 17440}, /* NEG */
{ CPUFUNC(op_4428_0), 17448}, /* NEG */
{ CPUFUNC(op_4430_3), 17456 }, /* NEG */
{ CPUFUNC(op_4438_0), 17464}, /* NEG */
{ CPUFUNC(op_4439_0), 17465}, /* NEG */
{ CPUFUNC(op_4440_0), 17472}, /* NEG */
{ CPUFUNC(op_4450_0), 17488}, /* NEG */
{ CPUFUNC(op_4458_0), 17496}, /* NEG */
{ CPUFUNC(op_4460_0), 17504}, /* NEG */
{ CPUFUNC(op_4468_0), 17512}, /* NEG */
{ CPUFUNC(op_4470_3), 17520 }, /* NEG */
{ CPUFUNC(op_4478_0), 17528}, /* NEG */
{ CPUFUNC(op_4479_0), 17529}, /* NEG */
{ CPUFUNC(op_4480_0), 17536}, /* NEG */
{ CPUFUNC(op_4490_0), 17552}, /* NEG */
{ CPUFUNC(op_4498_0), 17560}, /* NEG */
{ CPUFUNC(op_44a0_0), 17568}, /* NEG */
{ CPUFUNC(op_44a8_0), 17576}, /* NEG */
{ CPUFUNC(op_44b0_3), 17584 }, /* NEG */
{ CPUFUNC(op_44b8_0), 17592}, /* NEG */
{ CPUFUNC(op_44b9_0), 17593}, /* NEG */
{ CPUFUNC(op_44c0_0), 17600}, /* MV2SR */
{ CPUFUNC(op_44d0_0), 17616}, /* MV2SR */
{ CPUFUNC(op_44d8_0), 17624}, /* MV2SR */
{ CPUFUNC(op_44e0_0), 17632}, /* MV2SR */
{ CPUFUNC(op_44e8_0), 17640}, /* MV2SR */
{ CPUFUNC(op_44f0_3), 17648 }, /* MV2SR */
{ CPUFUNC(op_44f8_0), 17656}, /* MV2SR */
{ CPUFUNC(op_44f9_0), 17657}, /* MV2SR */
{ CPUFUNC(op_44fa_0), 17658}, /* MV2SR */
{ CPUFUNC(op_44fb_3), 17659 }, /* MV2SR */
{ CPUFUNC(op_44fc_0), 17660}, /* MV2SR */
{ CPUFUNC(op_4600_0), 17920}, /* NOT */
{ CPUFUNC(op_4610_0), 17936}, /* NOT */
{ CPUFUNC(op_4618_0), 17944}, /* NOT */
{ CPUFUNC(op_4620_0), 17952}, /* NOT */
{ CPUFUNC(op_4628_0), 17960}, /* NOT */
{ CPUFUNC(op_4630_3), 17968 }, /* NOT */
{ CPUFUNC(op_4638_0), 17976}, /* NOT */
{ CPUFUNC(op_4639_0), 17977}, /* NOT */
{ CPUFUNC(op_4640_0), 17984}, /* NOT */
{ CPUFUNC(op_4650_0), 18000}, /* NOT */
{ CPUFUNC(op_4658_0), 18008}, /* NOT */
{ CPUFUNC(op_4660_0), 18016}, /* NOT */
{ CPUFUNC(op_4668_0), 18024}, /* NOT */
{ CPUFUNC(op_4670_3), 18032 }, /* NOT */
{ CPUFUNC(op_4678_0), 18040}, /* NOT */
{ CPUFUNC(op_4679_0), 18041}, /* NOT */
{ CPUFUNC(op_4680_0), 18048}, /* NOT */
{ CPUFUNC(op_4690_0), 18064}, /* NOT */
{ CPUFUNC(op_4698_0), 18072}, /* NOT */
{ CPUFUNC(op_46a0_0), 18080}, /* NOT */
{ CPUFUNC(op_46a8_0), 18088}, /* NOT */
{ CPUFUNC(op_46b0_3), 18096 }, /* NOT */
{ CPUFUNC(op_46b8_0), 18104}, /* NOT */
{ CPUFUNC(op_46b9_0), 18105}, /* NOT */
{ CPUFUNC(op_46c0_0), 18112}, /* MV2SR */
{ CPUFUNC(op_46d0_0), 18128}, /* MV2SR */
{ CPUFUNC(op_46d8_0), 18136}, /* MV2SR */
{ CPUFUNC(op_46e0_0), 18144}, /* MV2SR */
{ CPUFUNC(op_46e8_0), 18152}, /* MV2SR */
{ CPUFUNC(op_46f0_3), 18160 }, /* MV2SR */
{ CPUFUNC(op_46f8_0), 18168}, /* MV2SR */
{ CPUFUNC(op_46f9_0), 18169}, /* MV2SR */
{ CPUFUNC(op_46fa_0), 18170}, /* MV2SR */
{ CPUFUNC(op_46fb_3), 18171 }, /* MV2SR */
{ CPUFUNC(op_46fc_0), 18172}, /* MV2SR */
{ CPUFUNC(op_4800_0), 18432}, /* NBCD */
{ CPUFUNC(op_4810_0), 18448}, /* NBCD */
{ CPUFUNC(op_4818_0), 18456}, /* NBCD */
{ CPUFUNC(op_4820_0), 18464}, /* NBCD */
{ CPUFUNC(op_4828_0), 18472}, /* NBCD */
{ CPUFUNC(op_4830_3), 18480 }, /* NBCD */
{ CPUFUNC(op_4838_0), 18488}, /* NBCD */
{ CPUFUNC(op_4839_0), 18489}, /* NBCD */
{ CPUFUNC(op_4840_0), 18496}, /* SWAP */
{ CPUFUNC(op_4850_0), 18512}, /* PEA */
{ CPUFUNC(op_4868_0), 18536}, /* PEA */
{ CPUFUNC(op_4870_3), 18544 }, /* PEA */
{ CPUFUNC(op_4878_0), 18552}, /* PEA */
{ CPUFUNC(op_4879_0), 18553}, /* PEA */
{ CPUFUNC(op_487a_0), 18554}, /* PEA */
{ CPUFUNC(op_487b_3), 18555 }, /* PEA */
{ CPUFUNC(op_4880_0), 18560}, /* EXT */
{ CPUFUNC(op_4890_0), 18576}, /* MVMLE */
{ CPUFUNC(op_48a0_0), 18592}, /* MVMLE */
{ CPUFUNC(op_48a8_0), 18600}, /* MVMLE */
{ CPUFUNC(op_48b0_3), 18608 }, /* MVMLE */
{ CPUFUNC(op_48b8_0), 18616}, /* MVMLE */
{ CPUFUNC(op_48b9_0), 18617}, /* MVMLE */
{ CPUFUNC(op_48c0_0), 18624}, /* EXT */
{ CPUFUNC(op_48d0_0), 18640}, /* MVMLE */
{ CPUFUNC(op_48e0_0), 18656}, /* MVMLE */
{ CPUFUNC(op_48e8_0), 18664}, /* MVMLE */
{ CPUFUNC(op_48f0_3), 18672 }, /* MVMLE */
{ CPUFUNC(op_48f8_0), 18680}, /* MVMLE */
{ CPUFUNC(op_48f9_0), 18681}, /* MVMLE */
{ CPUFUNC(op_49c0_0), 18880}, /* EXT */
{ CPUFUNC(op_4a00_0), 18944}, /* TST */
{ CPUFUNC(op_4a10_0), 18960}, /* TST */
{ CPUFUNC(op_4a18_0), 18968}, /* TST */
{ CPUFUNC(op_4a20_0), 18976}, /* TST */
{ CPUFUNC(op_4a28_0), 18984}, /* TST */
{ CPUFUNC(op_4a30_3), 18992 }, /* TST */
{ CPUFUNC(op_4a38_0), 19000}, /* TST */
{ CPUFUNC(op_4a39_0), 19001}, /* TST */
{ CPUFUNC(op_4a40_0), 19008}, /* TST */
{ CPUFUNC(op_4a50_0), 19024}, /* TST */
{ CPUFUNC(op_4a58_0), 19032}, /* TST */
{ CPUFUNC(op_4a60_0), 19040}, /* TST */
{ CPUFUNC(op_4a68_0), 19048}, /* TST */
{ CPUFUNC(op_4a70_3), 19056 }, /* TST */
{ CPUFUNC(op_4a78_0), 19064}, /* TST */
{ CPUFUNC(op_4a79_0), 19065}, /* TST */
{ CPUFUNC(op_4a80_0), 19072}, /* TST */
{ CPUFUNC(op_4a90_0), 19088}, /* TST */
{ CPUFUNC(op_4a98_0), 19096}, /* TST */
{ CPUFUNC(op_4aa0_0), 19104}, /* TST */
{ CPUFUNC(op_4aa8_0), 19112}, /* TST */
{ CPUFUNC(op_4ab0_3), 19120 }, /* TST */
{ CPUFUNC(op_4ab8_0), 19128}, /* TST */
{ CPUFUNC(op_4ab9_0), 19129}, /* TST */
{ CPUFUNC(op_4ac0_0), 19136}, /* TAS */
{ CPUFUNC(op_4ad0_0), 19152}, /* TAS */
{ CPUFUNC(op_4ad8_0), 19160}, /* TAS */
{ CPUFUNC(op_4ae0_0), 19168}, /* TAS */
{ CPUFUNC(op_4ae8_0), 19176}, /* TAS */
{ CPUFUNC(op_4af0_3), 19184 }, /* TAS */
{ CPUFUNC(op_4af8_0), 19192}, /* TAS */
{ CPUFUNC(op_4af9_0), 19193}, /* TAS */
{ CPUFUNC(op_4c90_0), 19600}, /* MVMEL */
{ CPUFUNC(op_4c98_0), 19608}, /* MVMEL */
{ CPUFUNC(op_4ca8_0), 19624}, /* MVMEL */
{ CPUFUNC(op_4cb0_3), 19632 }, /* MVMEL */
{ CPUFUNC(op_4cb8_0), 19640}, /* MVMEL */
{ CPUFUNC(op_4cb9_0), 19641}, /* MVMEL */
{ CPUFUNC(op_4cba_0), 19642}, /* MVMEL */
{ CPUFUNC(op_4cbb_3), 19643 }, /* MVMEL */
{ CPUFUNC(op_4cd0_0), 19664}, /* MVMEL */
{ CPUFUNC(op_4cd8_0), 19672}, /* MVMEL */
{ CPUFUNC(op_4ce8_0), 19688}, /* MVMEL */
{ CPUFUNC(op_4cf0_3), 19696 }, /* MVMEL */
{ CPUFUNC(op_4cf8_0), 19704}, /* MVMEL */
{ CPUFUNC(op_4cf9_0), 19705}, /* MVMEL */
{ CPUFUNC(op_4cfa_0), 19706}, /* MVMEL */
{ CPUFUNC(op_4cfb_3), 19707 }, /* MVMEL */
{ CPUFUNC(op_4e40_0), 20032}, /* TRAP */
{ CPUFUNC(op_4e50_0), 20048}, /* LINK */
{ CPUFUNC(op_4e58_0), 20056}, /* UNLK */
{ CPUFUNC(op_4e60_0), 20064}, /* MVR2USP */
{ CPUFUNC(op_4e68_0), 20072}, /* MVUSP2R */
{ CPUFUNC(op_4e70_0), 20080}, /* RESET */
{ CPUFUNC(op_4e71_0), 20081}, /* NOP */
{ CPUFUNC(op_4e72_0), 20082}, /* STOP */
{ CPUFUNC(op_4e73_0), 20083}, /* RTE */
{ CPUFUNC(op_4e74_0), 20084}, /* RTD */
{ CPUFUNC(op_4e75_0), 20085}, /* RTS */
{ CPUFUNC(op_4e76_0), 20086}, /* TRAPV */
{ CPUFUNC(op_4e77_0), 20087}, /* RTR */
{ CPUFUNC(op_4e7a_0), 20090}, /* MOVEC2 */
{ CPUFUNC(op_4e7b_0), 20091}, /* MOVE2C */
{ CPUFUNC(op_4e90_0), 20112}, /* JSR */
{ CPUFUNC(op_4ea8_0), 20136}, /* JSR */
{ CPUFUNC(op_4eb0_3), 20144 }, /* JSR */
{ CPUFUNC(op_4eb8_0), 20152}, /* JSR */
{ CPUFUNC(op_4eb9_0), 20153}, /* JSR */
{ CPUFUNC(op_4eba_0), 20154}, /* JSR */
{ CPUFUNC(op_4ebb_3), 20155 }, /* JSR */
{ CPUFUNC(op_4ed0_0), 20176}, /* JMP */
{ CPUFUNC(op_4ee8_0), 20200}, /* JMP */
{ CPUFUNC(op_4ef0_3), 20208 }, /* JMP */
{ CPUFUNC(op_4ef8_0), 20216}, /* JMP */
{ CPUFUNC(op_4ef9_0), 20217}, /* JMP */
{ CPUFUNC(op_4efa_0), 20218}, /* JMP */
{ CPUFUNC(op_4efb_3), 20219 }, /* JMP */
{ CPUFUNC(op_5000_0), 20480}, /* ADD */
{ CPUFUNC(op_5010_0), 20496}, /* ADD */
{ CPUFUNC(op_5018_0), 20504}, /* ADD */
{ CPUFUNC(op_5020_0), 20512}, /* ADD */
{ CPUFUNC(op_5028_0), 20520}, /* ADD */
{ CPUFUNC(op_5030_3), 20528 }, /* ADD */
{ CPUFUNC(op_5038_0), 20536}, /* ADD */
{ CPUFUNC(op_5039_0), 20537}, /* ADD */
{ CPUFUNC(op_5040_0), 20544}, /* ADD */
{ CPUFUNC(op_5048_0), 20552}, /* ADDA */
{ CPUFUNC(op_5050_0), 20560}, /* ADD */
{ CPUFUNC(op_5058_0), 20568}, /* ADD */
{ CPUFUNC(op_5060_0), 20576}, /* ADD */
{ CPUFUNC(op_5068_0), 20584}, /* ADD */
{ CPUFUNC(op_5070_3), 20592 }, /* ADD */
{ CPUFUNC(op_5078_0), 20600}, /* ADD */
{ CPUFUNC(op_5079_0), 20601}, /* ADD */
{ CPUFUNC(op_5080_0), 20608}, /* ADD */
{ CPUFUNC(op_5088_0), 20616}, /* ADDA */
{ CPUFUNC(op_5090_0), 20624}, /* ADD */
{ CPUFUNC(op_5098_0), 20632}, /* ADD */
{ CPUFUNC(op_50a0_0), 20640}, /* ADD */
{ CPUFUNC(op_50a8_0), 20648}, /* ADD */
{ CPUFUNC(op_50b0_3), 20656 }, /* ADD */
{ CPUFUNC(op_50b8_0), 20664}, /* ADD */
{ CPUFUNC(op_50b9_0), 20665}, /* ADD */
{ CPUFUNC(op_50c0_0), 20672}, /* Scc */
{ CPUFUNC(op_50c8_0), 20680}, /* DBcc */
{ CPUFUNC(op_50d0_0), 20688}, /* Scc */
{ CPUFUNC(op_50d8_0), 20696}, /* Scc */
{ CPUFUNC(op_50e0_0), 20704}, /* Scc */
{ CPUFUNC(op_50e8_0), 20712}, /* Scc */
{ CPUFUNC(op_50f0_3), 20720 }, /* Scc */
{ CPUFUNC(op_50f8_0), 20728}, /* Scc */
{ CPUFUNC(op_50f9_0), 20729}, /* Scc */
{ CPUFUNC(op_5100_0), 20736}, /* SUB */
{ CPUFUNC(op_5110_0), 20752}, /* SUB */
{ CPUFUNC(op_5118_0), 20760}, /* SUB */
{ CPUFUNC(op_5120_0), 20768}, /* SUB */
{ CPUFUNC(op_5128_0), 20776}, /* SUB */
{ CPUFUNC(op_5130_3), 20784 }, /* SUB */
{ CPUFUNC(op_5138_0), 20792}, /* SUB */
{ CPUFUNC(op_5139_0), 20793}, /* SUB */
{ CPUFUNC(op_5140_0), 20800}, /* SUB */
{ CPUFUNC(op_5148_0), 20808}, /* SUBA */
{ CPUFUNC(op_5150_0), 20816}, /* SUB */
{ CPUFUNC(op_5158_0), 20824}, /* SUB */
{ CPUFUNC(op_5160_0), 20832}, /* SUB */
{ CPUFUNC(op_5168_0), 20840}, /* SUB */
{ CPUFUNC(op_5170_3), 20848 }, /* SUB */
{ CPUFUNC(op_5178_0), 20856}, /* SUB */
{ CPUFUNC(op_5179_0), 20857}, /* SUB */
{ CPUFUNC(op_5180_0), 20864}, /* SUB */
{ CPUFUNC(op_5188_0), 20872}, /* SUBA */
{ CPUFUNC(op_5190_0), 20880}, /* SUB */
{ CPUFUNC(op_5198_0), 20888}, /* SUB */
{ CPUFUNC(op_51a0_0), 20896}, /* SUB */
{ CPUFUNC(op_51a8_0), 20904}, /* SUB */
{ CPUFUNC(op_51b0_3), 20912 }, /* SUB */
{ CPUFUNC(op_51b8_0), 20920}, /* SUB */
{ CPUFUNC(op_51b9_0), 20921}, /* SUB */
{ CPUFUNC(op_51c0_0), 20928}, /* Scc */
{ CPUFUNC(op_51c8_0), 20936}, /* DBcc */
{ CPUFUNC(op_51d0_0), 20944}, /* Scc */
{ CPUFUNC(op_51d8_0), 20952}, /* Scc */
{ CPUFUNC(op_51e0_0), 20960}, /* Scc */
{ CPUFUNC(op_51e8_0), 20968}, /* Scc */
{ CPUFUNC(op_51f0_3), 20976 }, /* Scc */
{ CPUFUNC(op_51f8_0), 20984}, /* Scc */
{ CPUFUNC(op_51f9_0), 20985}, /* Scc */
{ CPUFUNC(op_52c0_0), 21184}, /* Scc */
{ CPUFUNC(op_52c8_0), 21192}, /* DBcc */
{ CPUFUNC(op_52d0_0), 21200}, /* Scc */
{ CPUFUNC(op_52d8_0), 21208}, /* Scc */
{ CPUFUNC(op_52e0_0), 21216}, /* Scc */
{ CPUFUNC(op_52e8_0), 21224}, /* Scc */
{ CPUFUNC(op_52f0_3), 21232 }, /* Scc */
{ CPUFUNC(op_52f8_0), 21240}, /* Scc */
{ CPUFUNC(op_52f9_0), 21241}, /* Scc */
{ CPUFUNC(op_53c0_0), 21440}, /* Scc */
{ CPUFUNC(op_53c8_0), 21448}, /* DBcc */
{ CPUFUNC(op_53d0_0), 21456}, /* Scc */
{ CPUFUNC(op_53d8_0), 21464}, /* Scc */
{ CPUFUNC(op_53e0_0), 21472}, /* Scc */
{ CPUFUNC(op_53e8_0), 21480}, /* Scc */
{ CPUFUNC(op_53f0_3), 21488 }, /* Scc */
{ CPUFUNC(op_53f8_0), 21496}, /* Scc */
{ CPUFUNC(op_53f9_0), 21497}, /* Scc */
{ CPUFUNC(op_54c0_0), 21696}, /* Scc */
{ CPUFUNC(op_54c8_0), 21704}, /* DBcc */
{ CPUFUNC(op_54d0_0), 21712}, /* Scc */
{ CPUFUNC(op_54d8_0), 21720}, /* Scc */
{ CPUFUNC(op_54e0_0), 21728}, /* Scc */
{ CPUFUNC(op_54e8_0), 21736}, /* Scc */
{ CPUFUNC(op_54f0_3), 21744 }, /* Scc */
{ CPUFUNC(op_54f8_0), 21752}, /* Scc */
{ CPUFUNC(op_54f9_0), 21753}, /* Scc */
{ CPUFUNC(op_55c0_0), 21952}, /* Scc */
{ CPUFUNC(op_55c8_0), 21960}, /* DBcc */
{ CPUFUNC(op_55d0_0), 21968}, /* Scc */
{ CPUFUNC(op_55d8_0), 21976}, /* Scc */
{ CPUFUNC(op_55e0_0), 21984}, /* Scc */
{ CPUFUNC(op_55e8_0), 21992}, /* Scc */
{ CPUFUNC(op_55f0_3), 22000 }, /* Scc */
{ CPUFUNC(op_55f8_0), 22008}, /* Scc */
{ CPUFUNC(op_55f9_0), 22009}, /* Scc */
{ CPUFUNC(op_56c0_0), 22208}, /* Scc */
{ CPUFUNC(op_56c8_0), 22216}, /* DBcc */
{ CPUFUNC(op_56d0_0), 22224}, /* Scc */
{ CPUFUNC(op_56d8_0), 22232}, /* Scc */
{ CPUFUNC(op_56e0_0), 22240}, /* Scc */
{ CPUFUNC(op_56e8_0), 22248}, /* Scc */
{ CPUFUNC(op_56f0_3), 22256 }, /* Scc */
{ CPUFUNC(op_56f8_0), 22264}, /* Scc */
{ CPUFUNC(op_56f9_0), 22265}, /* Scc */
{ CPUFUNC(op_57c0_0), 22464}, /* Scc */
{ CPUFUNC(op_57c8_0), 22472}, /* DBcc */
{ CPUFUNC(op_57d0_0), 22480}, /* Scc */
{ CPUFUNC(op_57d8_0), 22488}, /* Scc */
{ CPUFUNC(op_57e0_0), 22496}, /* Scc */
{ CPUFUNC(op_57e8_0), 22504}, /* Scc */
{ CPUFUNC(op_57f0_3), 22512 }, /* Scc */
{ CPUFUNC(op_57f8_0), 22520}, /* Scc */
{ CPUFUNC(op_57f9_0), 22521}, /* Scc */
{ CPUFUNC(op_58c0_0), 22720}, /* Scc */
{ CPUFUNC(op_58c8_0), 22728}, /* DBcc */
{ CPUFUNC(op_58d0_0), 22736}, /* Scc */
{ CPUFUNC(op_58d8_0), 22744}, /* Scc */
{ CPUFUNC(op_58e0_0), 22752}, /* Scc */
{ CPUFUNC(op_58e8_0), 22760}, /* Scc */
{ CPUFUNC(op_58f0_3), 22768 }, /* Scc */
{ CPUFUNC(op_58f8_0), 22776}, /* Scc */
{ CPUFUNC(op_58f9_0), 22777}, /* Scc */
{ CPUFUNC(op_59c0_0), 22976}, /* Scc */
{ CPUFUNC(op_59c8_0), 22984}, /* DBcc */
{ CPUFUNC(op_59d0_0), 22992}, /* Scc */
{ CPUFUNC(op_59d8_0), 23000}, /* Scc */
{ CPUFUNC(op_59e0_0), 23008}, /* Scc */
{ CPUFUNC(op_59e8_0), 23016}, /* Scc */
{ CPUFUNC(op_59f0_3), 23024 }, /* Scc */
{ CPUFUNC(op_59f8_0), 23032}, /* Scc */
{ CPUFUNC(op_59f9_0), 23033}, /* Scc */
{ CPUFUNC(op_5ac0_0), 23232}, /* Scc */
{ CPUFUNC(op_5ac8_0), 23240}, /* DBcc */
{ CPUFUNC(op_5ad0_0), 23248}, /* Scc */
{ CPUFUNC(op_5ad8_0), 23256}, /* Scc */
{ CPUFUNC(op_5ae0_0), 23264}, /* Scc */
{ CPUFUNC(op_5ae8_0), 23272}, /* Scc */
{ CPUFUNC(op_5af0_3), 23280 }, /* Scc */
{ CPUFUNC(op_5af8_0), 23288}, /* Scc */
{ CPUFUNC(op_5af9_0), 23289}, /* Scc */
{ CPUFUNC(op_5bc0_0), 23488}, /* Scc */
{ CPUFUNC(op_5bc8_0), 23496}, /* DBcc */
{ CPUFUNC(op_5bd0_0), 23504}, /* Scc */
{ CPUFUNC(op_5bd8_0), 23512}, /* Scc */
{ CPUFUNC(op_5be0_0), 23520}, /* Scc */
{ CPUFUNC(op_5be8_0), 23528}, /* Scc */
{ CPUFUNC(op_5bf0_3), 23536 }, /* Scc */
{ CPUFUNC(op_5bf8_0), 23544}, /* Scc */
{ CPUFUNC(op_5bf9_0), 23545}, /* Scc */
{ CPUFUNC(op_5cc0_0), 23744}, /* Scc */
{ CPUFUNC(op_5cc8_0), 23752}, /* DBcc */
{ CPUFUNC(op_5cd0_0), 23760}, /* Scc */
{ CPUFUNC(op_5cd8_0), 23768}, /* Scc */
{ CPUFUNC(op_5ce0_0), 23776}, /* Scc */
{ CPUFUNC(op_5ce8_0), 23784}, /* Scc */
{ CPUFUNC(op_5cf0_3), 23792 }, /* Scc */
{ CPUFUNC(op_5cf8_0), 23800}, /* Scc */
{ CPUFUNC(op_5cf9_0), 23801}, /* Scc */
{ CPUFUNC(op_5dc0_0), 24000}, /* Scc */
{ CPUFUNC(op_5dc8_0), 24008}, /* DBcc */
{ CPUFUNC(op_5dd0_0), 24016}, /* Scc */
{ CPUFUNC(op_5dd8_0), 24024}, /* Scc */
{ CPUFUNC(op_5de0_0), 24032}, /* Scc */
{ CPUFUNC(op_5de8_0), 24040}, /* Scc */
{ CPUFUNC(op_5df0_3), 24048 }, /* Scc */
{ CPUFUNC(op_5df8_0), 24056}, /* Scc */
{ CPUFUNC(op_5df9_0), 24057}, /* Scc */
{ CPUFUNC(op_5ec0_0), 24256}, /* Scc */
{ CPUFUNC(op_5ec8_0), 24264}, /* DBcc */
{ CPUFUNC(op_5ed0_0), 24272}, /* Scc */
{ CPUFUNC(op_5ed8_0), 24280}, /* Scc */
{ CPUFUNC(op_5ee0_0), 24288}, /* Scc */
{ CPUFUNC(op_5ee8_0), 24296}, /* Scc */
{ CPUFUNC(op_5ef0_3), 24304 }, /* Scc */
{ CPUFUNC(op_5ef8_0), 24312}, /* Scc */
{ CPUFUNC(op_5ef9_0), 24313}, /* Scc */
{ CPUFUNC(op_5fc0_0), 24512}, /* Scc */
{ CPUFUNC(op_5fc8_0), 24520}, /* DBcc */
{ CPUFUNC(op_5fd0_0), 24528}, /* Scc */
{ CPUFUNC(op_5fd8_0), 24536}, /* Scc */
{ CPUFUNC(op_5fe0_0), 24544}, /* Scc */
{ CPUFUNC(op_5fe8_0), 24552}, /* Scc */
{ CPUFUNC(op_5ff0_3), 24560 }, /* Scc */
{ CPUFUNC(op_5ff8_0), 24568}, /* Scc */
{ CPUFUNC(op_5ff9_0), 24569}, /* Scc */
{ CPUFUNC(op_6000_0), 24576}, /* Bcc */
{ CPUFUNC(op_6001_0), 24577}, /* Bcc */
{ CPUFUNC(op_60ff_3), 24831 }, /* Bcc */
{ CPUFUNC(op_6100_0), 24832}, /* BSR */
{ CPUFUNC(op_6101_0), 24833}, /* BSR */
{ CPUFUNC(op_61ff_0), 25087}, /* BSR */
{ CPUFUNC(op_6200_0), 25088}, /* Bcc */
{ CPUFUNC(op_6201_0), 25089}, /* Bcc */
{ CPUFUNC(op_62ff_3), 25343 }, /* Bcc */
{ CPUFUNC(op_6300_0), 25344}, /* Bcc */
{ CPUFUNC(op_6301_0), 25345}, /* Bcc */
{ CPUFUNC(op_63ff_3), 25599 }, /* Bcc */
{ CPUFUNC(op_6400_0), 25600}, /* Bcc */
{ CPUFUNC(op_6401_0), 25601}, /* Bcc */
{ CPUFUNC(op_64ff_3), 25855 }, /* Bcc */
{ CPUFUNC(op_6500_0), 25856}, /* Bcc */
{ CPUFUNC(op_6501_0), 25857}, /* Bcc */
{ CPUFUNC(op_65ff_3), 26111 }, /* Bcc */
{ CPUFUNC(op_6600_0), 26112}, /* Bcc */
{ CPUFUNC(op_6601_0), 26113}, /* Bcc */
{ CPUFUNC(op_66ff_3), 26367 }, /* Bcc */
{ CPUFUNC(op_6700_0), 26368}, /* Bcc */
{ CPUFUNC(op_6701_0), 26369}, /* Bcc */
{ CPUFUNC(op_67ff_3), 26623 }, /* Bcc */
{ CPUFUNC(op_6800_0), 26624}, /* Bcc */
{ CPUFUNC(op_6801_0), 26625}, /* Bcc */
{ CPUFUNC(op_68ff_3), 26879 }, /* Bcc */
{ CPUFUNC(op_6900_0), 26880}, /* Bcc */
{ CPUFUNC(op_6901_0), 26881}, /* Bcc */
{ CPUFUNC(op_69ff_3), 27135 }, /* Bcc */
{ CPUFUNC(op_6a00_0), 27136}, /* Bcc */
{ CPUFUNC(op_6a01_0), 27137}, /* Bcc */
{ CPUFUNC(op_6aff_3), 27391 }, /* Bcc */
{ CPUFUNC(op_6b00_0), 27392}, /* Bcc */
{ CPUFUNC(op_6b01_0), 27393}, /* Bcc */
{ CPUFUNC(op_6bff_3), 27647 }, /* Bcc */
{ CPUFUNC(op_6c00_0), 27648}, /* Bcc */
{ CPUFUNC(op_6c01_0), 27649}, /* Bcc */
{ CPUFUNC(op_6cff_3), 27903 }, /* Bcc */
{ CPUFUNC(op_6d00_0), 27904}, /* Bcc */
{ CPUFUNC(op_6d01_0), 27905}, /* Bcc */
{ CPUFUNC(op_6dff_3), 28159 }, /* Bcc */
{ CPUFUNC(op_6e00_0), 28160}, /* Bcc */
{ CPUFUNC(op_6e01_0), 28161}, /* Bcc */
{ CPUFUNC(op_6eff_3), 28415 }, /* Bcc */
{ CPUFUNC(op_6f00_0), 28416}, /* Bcc */
{ CPUFUNC(op_6f01_0), 28417}, /* Bcc */
{ CPUFUNC(op_6fff_3), 28671 }, /* Bcc */
{ CPUFUNC(op_7000_0), 28672}, /* MOVE */
{ CPUFUNC(op_8000_0), 32768}, /* OR */
{ CPUFUNC(op_8010_0), 32784}, /* OR */
{ CPUFUNC(op_8018_0), 32792}, /* OR */
{ CPUFUNC(op_8020_0), 32800}, /* OR */
{ CPUFUNC(op_8028_0), 32808}, /* OR */
{ CPUFUNC(op_8030_3), 32816 }, /* OR */
{ CPUFUNC(op_8038_0), 32824}, /* OR */
{ CPUFUNC(op_8039_0), 32825}, /* OR */
{ CPUFUNC(op_803a_0), 32826}, /* OR */
{ CPUFUNC(op_803b_3), 32827 }, /* OR */
{ CPUFUNC(op_803c_0), 32828}, /* OR */
{ CPUFUNC(op_8040_0), 32832}, /* OR */
{ CPUFUNC(op_8050_0), 32848}, /* OR */
{ CPUFUNC(op_8058_0), 32856}, /* OR */
{ CPUFUNC(op_8060_0), 32864}, /* OR */
{ CPUFUNC(op_8068_0), 32872}, /* OR */
{ CPUFUNC(op_8070_3), 32880 }, /* OR */
{ CPUFUNC(op_8078_0), 32888}, /* OR */
{ CPUFUNC(op_8079_0), 32889}, /* OR */
{ CPUFUNC(op_807a_0), 32890}, /* OR */
{ CPUFUNC(op_807b_3), 32891 }, /* OR */
{ CPUFUNC(op_807c_0), 32892}, /* OR */
{ CPUFUNC(op_8080_0), 32896}, /* OR */
{ CPUFUNC(op_8090_0), 32912}, /* OR */
{ CPUFUNC(op_8098_0), 32920}, /* OR */
{ CPUFUNC(op_80a0_0), 32928}, /* OR */
{ CPUFUNC(op_80a8_0), 32936}, /* OR */
{ CPUFUNC(op_80b0_3), 32944 }, /* OR */
{ CPUFUNC(op_80b8_0), 32952}, /* OR */
{ CPUFUNC(op_80b9_0), 32953}, /* OR */
{ CPUFUNC(op_80ba_0), 32954}, /* OR */
{ CPUFUNC(op_80bb_3), 32955 }, /* OR */
{ CPUFUNC(op_80bc_0), 32956}, /* OR */
{ CPUFUNC(op_80c0_0), 32960}, /* DIVU */
{ CPUFUNC(op_80d0_0), 32976}, /* DIVU */
{ CPUFUNC(op_80d8_0), 32984}, /* DIVU */
{ CPUFUNC(op_80e0_0), 32992}, /* DIVU */
{ CPUFUNC(op_80e8_0), 33000}, /* DIVU */
{ CPUFUNC(op_80f0_3), 33008 }, /* DIVU */
{ CPUFUNC(op_80f8_0), 33016}, /* DIVU */
{ CPUFUNC(op_80f9_0), 33017}, /* DIVU */
{ CPUFUNC(op_80fa_0), 33018}, /* DIVU */
{ CPUFUNC(op_80fb_3), 33019 }, /* DIVU */
{ CPUFUNC(op_80fc_0), 33020}, /* DIVU */
{ CPUFUNC(op_8100_0), 33024}, /* SBCD */
{ CPUFUNC(op_8108_0), 33032}, /* SBCD */
{ CPUFUNC(op_8110_0), 33040}, /* OR */
{ CPUFUNC(op_8118_0), 33048}, /* OR */
{ CPUFUNC(op_8120_0), 33056}, /* OR */
{ CPUFUNC(op_8128_0), 33064}, /* OR */
{ CPUFUNC(op_8130_3), 33072 }, /* OR */
{ CPUFUNC(op_8138_0), 33080}, /* OR */
{ CPUFUNC(op_8139_0), 33081}, /* OR */
{ CPUFUNC(op_8150_0), 33104}, /* OR */
{ CPUFUNC(op_8158_0), 33112}, /* OR */
{ CPUFUNC(op_8160_0), 33120}, /* OR */
{ CPUFUNC(op_8168_0), 33128}, /* OR */
{ CPUFUNC(op_8170_3), 33136 }, /* OR */
{ CPUFUNC(op_8178_0), 33144}, /* OR */
{ CPUFUNC(op_8179_0), 33145}, /* OR */
{ CPUFUNC(op_8190_0), 33168}, /* OR */
{ CPUFUNC(op_8198_0), 33176}, /* OR */
{ CPUFUNC(op_81a0_0), 33184}, /* OR */
{ CPUFUNC(op_81a8_0), 33192}, /* OR */
{ CPUFUNC(op_81b0_3), 33200 }, /* OR */
{ CPUFUNC(op_81b8_0), 33208}, /* OR */
{ CPUFUNC(op_81b9_0), 33209}, /* OR */
{ CPUFUNC(op_81c0_0), 33216}, /* DIVS */
{ CPUFUNC(op_81d0_0), 33232}, /* DIVS */
{ CPUFUNC(op_81d8_0), 33240}, /* DIVS */
{ CPUFUNC(op_81e0_0), 33248}, /* DIVS */
{ CPUFUNC(op_81e8_0), 33256}, /* DIVS */
{ CPUFUNC(op_81f0_3), 33264 }, /* DIVS */
{ CPUFUNC(op_81f8_0), 33272}, /* DIVS */
{ CPUFUNC(op_81f9_0), 33273}, /* DIVS */
{ CPUFUNC(op_81fa_0), 33274}, /* DIVS */
{ CPUFUNC(op_81fb_3), 33275 }, /* DIVS */
{ CPUFUNC(op_81fc_0), 33276}, /* DIVS */
{ CPUFUNC(op_9000_0), 36864}, /* SUB */
{ CPUFUNC(op_9010_0), 36880}, /* SUB */
{ CPUFUNC(op_9018_0), 36888}, /* SUB */
{ CPUFUNC(op_9020_0), 36896}, /* SUB */
{ CPUFUNC(op_9028_0), 36904}, /* SUB */
{ CPUFUNC(op_9030_3), 36912 }, /* SUB */
{ CPUFUNC(op_9038_0), 36920}, /* SUB */
{ CPUFUNC(op_9039_0), 36921}, /* SUB */
{ CPUFUNC(op_903a_0), 36922}, /* SUB */
{ CPUFUNC(op_903b_3), 36923 }, /* SUB */
{ CPUFUNC(op_903c_0), 36924}, /* SUB */
{ CPUFUNC(op_9040_0), 36928}, /* SUB */
{ CPUFUNC(op_9048_0), 36936}, /* SUB */
{ CPUFUNC(op_9050_0), 36944}, /* SUB */
{ CPUFUNC(op_9058_0), 36952}, /* SUB */
{ CPUFUNC(op_9060_0), 36960}, /* SUB */
{ CPUFUNC(op_9068_0), 36968}, /* SUB */
{ CPUFUNC(op_9070_3), 36976 }, /* SUB */
{ CPUFUNC(op_9078_0), 36984}, /* SUB */
{ CPUFUNC(op_9079_0), 36985}, /* SUB */
{ CPUFUNC(op_907a_0), 36986}, /* SUB */
{ CPUFUNC(op_907b_3), 36987 }, /* SUB */
{ CPUFUNC(op_907c_0), 36988}, /* SUB */
{ CPUFUNC(op_9080_0), 36992}, /* SUB */
{ CPUFUNC(op_9088_0), 37000}, /* SUB */
{ CPUFUNC(op_9090_0), 37008}, /* SUB */
{ CPUFUNC(op_9098_0), 37016}, /* SUB */
{ CPUFUNC(op_90a0_0), 37024}, /* SUB */
{ CPUFUNC(op_90a8_0), 37032}, /* SUB */
{ CPUFUNC(op_90b0_3), 37040 }, /* SUB */
{ CPUFUNC(op_90b8_0), 37048}, /* SUB */
{ CPUFUNC(op_90b9_0), 37049}, /* SUB */
{ CPUFUNC(op_90ba_0), 37050}, /* SUB */
{ CPUFUNC(op_90bb_3), 37051 }, /* SUB */
{ CPUFUNC(op_90bc_0), 37052}, /* SUB */
{ CPUFUNC(op_90c0_0), 37056}, /* SUBA */
{ CPUFUNC(op_90c8_0), 37064}, /* SUBA */
{ CPUFUNC(op_90d0_0), 37072}, /* SUBA */
{ CPUFUNC(op_90d8_0), 37080}, /* SUBA */
{ CPUFUNC(op_90e0_0), 37088}, /* SUBA */
{ CPUFUNC(op_90e8_0), 37096}, /* SUBA */
{ CPUFUNC(op_90f0_3), 37104 }, /* SUBA */
{ CPUFUNC(op_90f8_0), 37112}, /* SUBA */
{ CPUFUNC(op_90f9_0), 37113}, /* SUBA */
{ CPUFUNC(op_90fa_0), 37114}, /* SUBA */
{ CPUFUNC(op_90fb_3), 37115 }, /* SUBA */
{ CPUFUNC(op_90fc_0), 37116}, /* SUBA */
{ CPUFUNC(op_9100_0), 37120}, /* SUBX */
{ CPUFUNC(op_9108_0), 37128}, /* SUBX */
{ CPUFUNC(op_9110_0), 37136}, /* SUB */
{ CPUFUNC(op_9118_0), 37144}, /* SUB */
{ CPUFUNC(op_9120_0), 37152}, /* SUB */
{ CPUFUNC(op_9128_0), 37160}, /* SUB */
{ CPUFUNC(op_9130_3), 37168 }, /* SUB */
{ CPUFUNC(op_9138_0), 37176}, /* SUB */
{ CPUFUNC(op_9139_0), 37177}, /* SUB */
{ CPUFUNC(op_9140_0), 37184}, /* SUBX */
{ CPUFUNC(op_9148_0), 37192}, /* SUBX */
{ CPUFUNC(op_9150_0), 37200}, /* SUB */
{ CPUFUNC(op_9158_0), 37208}, /* SUB */
{ CPUFUNC(op_9160_0), 37216}, /* SUB */
{ CPUFUNC(op_9168_0), 37224}, /* SUB */
{ CPUFUNC(op_9170_3), 37232 }, /* SUB */
{ CPUFUNC(op_9178_0), 37240}, /* SUB */
{ CPUFUNC(op_9179_0), 37241}, /* SUB */
{ CPUFUNC(op_9180_0), 37248}, /* SUBX */
{ CPUFUNC(op_9188_0), 37256}, /* SUBX */
{ CPUFUNC(op_9190_0), 37264}, /* SUB */
{ CPUFUNC(op_9198_0), 37272}, /* SUB */
{ CPUFUNC(op_91a0_0), 37280}, /* SUB */
{ CPUFUNC(op_91a8_0), 37288}, /* SUB */
{ CPUFUNC(op_91b0_3), 37296 }, /* SUB */
{ CPUFUNC(op_91b8_0), 37304}, /* SUB */
{ CPUFUNC(op_91b9_0), 37305}, /* SUB */
{ CPUFUNC(op_91c0_0), 37312}, /* SUBA */
{ CPUFUNC(op_91c8_0), 37320}, /* SUBA */
{ CPUFUNC(op_91d0_0), 37328}, /* SUBA */
{ CPUFUNC(op_91d8_0), 37336}, /* SUBA */
{ CPUFUNC(op_91e0_0), 37344}, /* SUBA */
{ CPUFUNC(op_91e8_0), 37352}, /* SUBA */
{ CPUFUNC(op_91f0_3), 37360 }, /* SUBA */
{ CPUFUNC(op_91f8_0), 37368}, /* SUBA */
{ CPUFUNC(op_91f9_0), 37369}, /* SUBA */
{ CPUFUNC(op_91fa_0), 37370}, /* SUBA */
{ CPUFUNC(op_91fb_3), 37371 }, /* SUBA */
{ CPUFUNC(op_91fc_0), 37372}, /* SUBA */
{ CPUFUNC(op_b000_0), 45056}, /* CMP */
{ CPUFUNC(op_b010_0), 45072}, /* CMP */
{ CPUFUNC(op_b018_0), 45080}, /* CMP */
{ CPUFUNC(op_b020_0), 45088}, /* CMP */
{ CPUFUNC(op_b028_0), 45096}, /* CMP */
{ CPUFUNC(op_b030_3), 45104 }, /* CMP */
{ CPUFUNC(op_b038_0), 45112}, /* CMP */
{ CPUFUNC(op_b039_0), 45113}, /* CMP */
{ CPUFUNC(op_b03a_0), 45114}, /* CMP */
{ CPUFUNC(op_b03b_3), 45115 }, /* CMP */
{ CPUFUNC(op_b03c_0), 45116}, /* CMP */
{ CPUFUNC(op_b040_0), 45120}, /* CMP */
{ CPUFUNC(op_b048_0), 45128}, /* CMP */
{ CPUFUNC(op_b050_0), 45136}, /* CMP */
{ CPUFUNC(op_b058_0), 45144}, /* CMP */
{ CPUFUNC(op_b060_0), 45152}, /* CMP */
{ CPUFUNC(op_b068_0), 45160}, /* CMP */
{ CPUFUNC(op_b070_3), 45168 }, /* CMP */
{ CPUFUNC(op_b078_0), 45176}, /* CMP */
{ CPUFUNC(op_b079_0), 45177}, /* CMP */
{ CPUFUNC(op_b07a_0), 45178}, /* CMP */
{ CPUFUNC(op_b07b_3), 45179 }, /* CMP */
{ CPUFUNC(op_b07c_0), 45180}, /* CMP */
{ CPUFUNC(op_b080_0), 45184}, /* CMP */
{ CPUFUNC(op_b088_0), 45192}, /* CMP */
{ CPUFUNC(op_b090_0), 45200}, /* CMP */
{ CPUFUNC(op_b098_0), 45208}, /* CMP */
{ CPUFUNC(op_b0a0_0), 45216}, /* CMP */
{ CPUFUNC(op_b0a8_0), 45224}, /* CMP */
{ CPUFUNC(op_b0b0_3), 45232 }, /* CMP */
{ CPUFUNC(op_b0b8_0), 45240}, /* CMP */
{ CPUFUNC(op_b0b9_0), 45241}, /* CMP */
{ CPUFUNC(op_b0ba_0), 45242}, /* CMP */
{ CPUFUNC(op_b0bb_3), 45243 }, /* CMP */
{ CPUFUNC(op_b0bc_0), 45244}, /* CMP */
{ CPUFUNC(op_b0c0_0), 45248}, /* CMPA */
{ CPUFUNC(op_b0c8_0), 45256}, /* CMPA */
{ CPUFUNC(op_b0d0_0), 45264}, /* CMPA */
{ CPUFUNC(op_b0d8_0), 45272}, /* CMPA */
{ CPUFUNC(op_b0e0_0), 45280}, /* CMPA */
{ CPUFUNC(op_b0e8_0), 45288}, /* CMPA */
{ CPUFUNC(op_b0f0_3), 45296 }, /* CMPA */
{ CPUFUNC(op_b0f8_0), 45304}, /* CMPA */
{ CPUFUNC(op_b0f9_0), 45305}, /* CMPA */
{ CPUFUNC(op_b0fa_0), 45306}, /* CMPA */
{ CPUFUNC(op_b0fb_3), 45307 }, /* CMPA */
{ CPUFUNC(op_b0fc_0), 45308}, /* CMPA */
{ CPUFUNC(op_b100_0), 45312}, /* EOR */
{ CPUFUNC(op_b108_0), 45320}, /* CMPM */
{ CPUFUNC(op_b110_0), 45328}, /* EOR */
{ CPUFUNC(op_b118_0), 45336}, /* EOR */
{ CPUFUNC(op_b120_0), 45344}, /* EOR */
{ CPUFUNC(op_b128_0), 45352}, /* EOR */
{ CPUFUNC(op_b130_3), 45360 }, /* EOR */
{ CPUFUNC(op_b138_0), 45368}, /* EOR */
{ CPUFUNC(op_b139_0), 45369}, /* EOR */
{ CPUFUNC(op_b140_0), 45376}, /* EOR */
{ CPUFUNC(op_b148_0), 45384}, /* CMPM */
{ CPUFUNC(op_b150_0), 45392}, /* EOR */
{ CPUFUNC(op_b158_0), 45400}, /* EOR */
{ CPUFUNC(op_b160_0), 45408}, /* EOR */
{ CPUFUNC(op_b168_0), 45416}, /* EOR */
{ CPUFUNC(op_b170_3), 45424 }, /* EOR */
{ CPUFUNC(op_b178_0), 45432}, /* EOR */
{ CPUFUNC(op_b179_0), 45433}, /* EOR */
{ CPUFUNC(op_b180_0), 45440}, /* EOR */
{ CPUFUNC(op_b188_0), 45448}, /* CMPM */
{ CPUFUNC(op_b190_0), 45456}, /* EOR */
{ CPUFUNC(op_b198_0), 45464}, /* EOR */
{ CPUFUNC(op_b1a0_0), 45472}, /* EOR */
{ CPUFUNC(op_b1a8_0), 45480}, /* EOR */
{ CPUFUNC(op_b1b0_3), 45488 }, /* EOR */
{ CPUFUNC(op_b1b8_0), 45496}, /* EOR */
{ CPUFUNC(op_b1b9_0), 45497}, /* EOR */
{ CPUFUNC(op_b1c0_0), 45504}, /* CMPA */
{ CPUFUNC(op_b1c8_0), 45512}, /* CMPA */
{ CPUFUNC(op_b1d0_0), 45520}, /* CMPA */
{ CPUFUNC(op_b1d8_0), 45528}, /* CMPA */
{ CPUFUNC(op_b1e0_0), 45536}, /* CMPA */
{ CPUFUNC(op_b1e8_0), 45544}, /* CMPA */
{ CPUFUNC(op_b1f0_3), 45552 }, /* CMPA */
{ CPUFUNC(op_b1f8_0), 45560}, /* CMPA */
{ CPUFUNC(op_b1f9_0), 45561}, /* CMPA */
{ CPUFUNC(op_b1fa_0), 45562}, /* CMPA */
{ CPUFUNC(op_b1fb_3), 45563 }, /* CMPA */
{ CPUFUNC(op_b1fc_0), 45564}, /* CMPA */
{ CPUFUNC(op_c000_0), 49152}, /* AND */
{ CPUFUNC(op_c010_0), 49168}, /* AND */
{ CPUFUNC(op_c018_0), 49176}, /* AND */
{ CPUFUNC(op_c020_0), 49184}, /* AND */
{ CPUFUNC(op_c028_0), 49192}, /* AND */
{ CPUFUNC(op_c030_3), 49200 }, /* AND */
{ CPUFUNC(op_c038_0), 49208}, /* AND */
{ CPUFUNC(op_c039_0), 49209}, /* AND */
{ CPUFUNC(op_c03a_0), 49210}, /* AND */
{ CPUFUNC(op_c03b_3), 49211 }, /* AND */
{ CPUFUNC(op_c03c_0), 49212}, /* AND */
{ CPUFUNC(op_c040_0), 49216}, /* AND */
{ CPUFUNC(op_c050_0), 49232}, /* AND */
{ CPUFUNC(op_c058_0), 49240}, /* AND */
{ CPUFUNC(op_c060_0), 49248}, /* AND */
{ CPUFUNC(op_c068_0), 49256}, /* AND */
{ CPUFUNC(op_c070_3), 49264 }, /* AND */
{ CPUFUNC(op_c078_0), 49272}, /* AND */
{ CPUFUNC(op_c079_0), 49273}, /* AND */
{ CPUFUNC(op_c07a_0), 49274}, /* AND */
{ CPUFUNC(op_c07b_3), 49275 }, /* AND */
{ CPUFUNC(op_c07c_0), 49276}, /* AND */
{ CPUFUNC(op_c080_0), 49280}, /* AND */
{ CPUFUNC(op_c090_0), 49296}, /* AND */
{ CPUFUNC(op_c098_0), 49304}, /* AND */
{ CPUFUNC(op_c0a0_0), 49312}, /* AND */
{ CPUFUNC(op_c0a8_0), 49320}, /* AND */
{ CPUFUNC(op_c0b0_3), 49328 }, /* AND */
{ CPUFUNC(op_c0b8_0), 49336}, /* AND */
{ CPUFUNC(op_c0b9_0), 49337}, /* AND */
{ CPUFUNC(op_c0ba_0), 49338}, /* AND */
{ CPUFUNC(op_c0bb_3), 49339 }, /* AND */
{ CPUFUNC(op_c0bc_0), 49340}, /* AND */
{ CPUFUNC(op_c0c0_0), 49344}, /* MULU */
{ CPUFUNC(op_c0d0_0), 49360}, /* MULU */
{ CPUFUNC(op_c0d8_0), 49368}, /* MULU */
{ CPUFUNC(op_c0e0_0), 49376}, /* MULU */
{ CPUFUNC(op_c0e8_0), 49384}, /* MULU */
{ CPUFUNC(op_c0f0_3), 49392 }, /* MULU */
{ CPUFUNC(op_c0f8_0), 49400}, /* MULU */
{ CPUFUNC(op_c0f9_0), 49401}, /* MULU */
{ CPUFUNC(op_c0fa_0), 49402}, /* MULU */
{ CPUFUNC(op_c0fb_3), 49403 }, /* MULU */
{ CPUFUNC(op_c0fc_0), 49404}, /* MULU */
{ CPUFUNC(op_c100_0), 49408}, /* ABCD */
{ CPUFUNC(op_c108_0), 49416}, /* ABCD */
{ CPUFUNC(op_c110_0), 49424}, /* AND */
{ CPUFUNC(op_c118_0), 49432}, /* AND */
{ CPUFUNC(op_c120_0), 49440}, /* AND */
{ CPUFUNC(op_c128_0), 49448}, /* AND */
{ CPUFUNC(op_c130_3), 49456 }, /* AND */
{ CPUFUNC(op_c138_0), 49464}, /* AND */
{ CPUFUNC(op_c139_0), 49465}, /* AND */
{ CPUFUNC(op_c140_0), 49472}, /* EXG */
{ CPUFUNC(op_c148_0), 49480}, /* EXG */
{ CPUFUNC(op_c150_0), 49488}, /* AND */
{ CPUFUNC(op_c158_0), 49496}, /* AND */
{ CPUFUNC(op_c160_0), 49504}, /* AND */
{ CPUFUNC(op_c168_0), 49512}, /* AND */
{ CPUFUNC(op_c170_3), 49520 }, /* AND */
{ CPUFUNC(op_c178_0), 49528}, /* AND */
{ CPUFUNC(op_c179_0), 49529}, /* AND */
{ CPUFUNC(op_c188_0), 49544}, /* EXG */
{ CPUFUNC(op_c190_0), 49552}, /* AND */
{ CPUFUNC(op_c198_0), 49560}, /* AND */
{ CPUFUNC(op_c1a0_0), 49568}, /* AND */
{ CPUFUNC(op_c1a8_0), 49576}, /* AND */
{ CPUFUNC(op_c1b0_3), 49584 }, /* AND */
{ CPUFUNC(op_c1b8_0), 49592}, /* AND */
{ CPUFUNC(op_c1b9_0), 49593}, /* AND */
{ CPUFUNC(op_c1c0_0), 49600}, /* MULS */
{ CPUFUNC(op_c1d0_0), 49616}, /* MULS */
{ CPUFUNC(op_c1d8_0), 49624}, /* MULS */
{ CPUFUNC(op_c1e0_0), 49632}, /* MULS */
{ CPUFUNC(op_c1e8_0), 49640}, /* MULS */
{ CPUFUNC(op_c1f0_3), 49648 }, /* MULS */
{ CPUFUNC(op_c1f8_0), 49656}, /* MULS */
{ CPUFUNC(op_c1f9_0), 49657}, /* MULS */
{ CPUFUNC(op_c1fa_0), 49658}, /* MULS */
{ CPUFUNC(op_c1fb_3), 49659 }, /* MULS */
{ CPUFUNC(op_c1fc_0), 49660}, /* MULS */
{ CPUFUNC(op_d000_0), 53248}, /* ADD */
{ CPUFUNC(op_d010_0), 53264}, /* ADD */
{ CPUFUNC(op_d018_0), 53272}, /* ADD */
{ CPUFUNC(op_d020_0), 53280}, /* ADD */
{ CPUFUNC(op_d028_0), 53288}, /* ADD */
{ CPUFUNC(op_d030_3), 53296 }, /* ADD */
{ CPUFUNC(op_d038_0), 53304}, /* ADD */
{ CPUFUNC(op_d039_0), 53305}, /* ADD */
{ CPUFUNC(op_d03a_0), 53306}, /* ADD */
{ CPUFUNC(op_d03b_3), 53307 }, /* ADD */
{ CPUFUNC(op_d03c_0), 53308}, /* ADD */
{ CPUFUNC(op_d040_0), 53312}, /* ADD */
{ CPUFUNC(op_d048_0), 53320}, /* ADD */
{ CPUFUNC(op_d050_0), 53328}, /* ADD */
{ CPUFUNC(op_d058_0), 53336}, /* ADD */
{ CPUFUNC(op_d060_0), 53344}, /* ADD */
{ CPUFUNC(op_d068_0), 53352}, /* ADD */
{ CPUFUNC(op_d070_3), 53360 }, /* ADD */
{ CPUFUNC(op_d078_0), 53368}, /* ADD */
{ CPUFUNC(op_d079_0), 53369}, /* ADD */
{ CPUFUNC(op_d07a_0), 53370}, /* ADD */
{ CPUFUNC(op_d07b_3), 53371 }, /* ADD */
{ CPUFUNC(op_d07c_0), 53372}, /* ADD */
{ CPUFUNC(op_d080_0), 53376}, /* ADD */
{ CPUFUNC(op_d088_0), 53384}, /* ADD */
{ CPUFUNC(op_d090_0), 53392}, /* ADD */
{ CPUFUNC(op_d098_0), 53400}, /* ADD */
{ CPUFUNC(op_d0a0_0), 53408}, /* ADD */
{ CPUFUNC(op_d0a8_0), 53416}, /* ADD */
{ CPUFUNC(op_d0b0_3), 53424 }, /* ADD */
{ CPUFUNC(op_d0b8_0), 53432}, /* ADD */
{ CPUFUNC(op_d0b9_0), 53433}, /* ADD */
{ CPUFUNC(op_d0ba_0), 53434}, /* ADD */
{ CPUFUNC(op_d0bb_3), 53435 }, /* ADD */
{ CPUFUNC(op_d0bc_0), 53436}, /* ADD */
{ CPUFUNC(op_d0c0_0), 53440}, /* ADDA */
{ CPUFUNC(op_d0c8_0), 53448}, /* ADDA */
{ CPUFUNC(op_d0d0_0), 53456}, /* ADDA */
{ CPUFUNC(op_d0d8_0), 53464}, /* ADDA */
{ CPUFUNC(op_d0e0_0), 53472}, /* ADDA */
{ CPUFUNC(op_d0e8_0), 53480}, /* ADDA */
{ CPUFUNC(op_d0f0_3), 53488 }, /* ADDA */
{ CPUFUNC(op_d0f8_0), 53496}, /* ADDA */
{ CPUFUNC(op_d0f9_0), 53497}, /* ADDA */
{ CPUFUNC(op_d0fa_0), 53498}, /* ADDA */
{ CPUFUNC(op_d0fb_3), 53499 }, /* ADDA */
{ CPUFUNC(op_d0fc_0), 53500}, /* ADDA */
{ CPUFUNC(op_d100_0), 53504}, /* ADDX */
{ CPUFUNC(op_d108_0), 53512}, /* ADDX */
{ CPUFUNC(op_d110_0), 53520}, /* ADD */
{ CPUFUNC(op_d118_0), 53528}, /* ADD */
{ CPUFUNC(op_d120_0), 53536}, /* ADD */
{ CPUFUNC(op_d128_0), 53544}, /* ADD */
{ CPUFUNC(op_d130_3), 53552 }, /* ADD */
{ CPUFUNC(op_d138_0), 53560}, /* ADD */
{ CPUFUNC(op_d139_0), 53561}, /* ADD */
{ CPUFUNC(op_d140_0), 53568}, /* ADDX */
{ CPUFUNC(op_d148_0), 53576}, /* ADDX */
{ CPUFUNC(op_d150_0), 53584}, /* ADD */
{ CPUFUNC(op_d158_0), 53592}, /* ADD */
{ CPUFUNC(op_d160_0), 53600}, /* ADD */
{ CPUFUNC(op_d168_0), 53608}, /* ADD */
{ CPUFUNC(op_d170_3), 53616 }, /* ADD */
{ CPUFUNC(op_d178_0), 53624}, /* ADD */
{ CPUFUNC(op_d179_0), 53625}, /* ADD */
{ CPUFUNC(op_d180_0), 53632}, /* ADDX */
{ CPUFUNC(op_d188_0), 53640}, /* ADDX */
{ CPUFUNC(op_d190_0), 53648}, /* ADD */
{ CPUFUNC(op_d198_0), 53656}, /* ADD */
{ CPUFUNC(op_d1a0_0), 53664}, /* ADD */
{ CPUFUNC(op_d1a8_0), 53672}, /* ADD */
{ CPUFUNC(op_d1b0_3), 53680 }, /* ADD */
{ CPUFUNC(op_d1b8_0), 53688}, /* ADD */
{ CPUFUNC(op_d1b9_0), 53689}, /* ADD */
{ CPUFUNC(op_d1c0_0), 53696}, /* ADDA */
{ CPUFUNC(op_d1c8_0), 53704}, /* ADDA */
{ CPUFUNC(op_d1d0_0), 53712}, /* ADDA */
{ CPUFUNC(op_d1d8_0), 53720}, /* ADDA */
{ CPUFUNC(op_d1e0_0), 53728}, /* ADDA */
{ CPUFUNC(op_d1e8_0), 53736}, /* ADDA */
{ CPUFUNC(op_d1f0_3), 53744 }, /* ADDA */
{ CPUFUNC(op_d1f8_0), 53752}, /* ADDA */
{ CPUFUNC(op_d1f9_0), 53753}, /* ADDA */
{ CPUFUNC(op_d1fa_0), 53754}, /* ADDA */
{ CPUFUNC(op_d1fb_3), 53755 }, /* ADDA */
{ CPUFUNC(op_d1fc_0), 53756}, /* ADDA */
{ CPUFUNC(op_e000_0), 57344}, /* ASR */
{ CPUFUNC(op_e008_0), 57352}, /* LSR */
{ CPUFUNC(op_e010_0), 57360}, /* ROXR */
{ CPUFUNC(op_e018_0), 57368}, /* ROR */
{ CPUFUNC(op_e020_0), 57376}, /* ASR */
{ CPUFUNC(op_e028_0), 57384}, /* LSR */
{ CPUFUNC(op_e030_0), 57392}, /* ROXR */
{ CPUFUNC(op_e038_0), 57400}, /* ROR */
{ CPUFUNC(op_e040_0), 57408}, /* ASR */
{ CPUFUNC(op_e048_0), 57416}, /* LSR */
{ CPUFUNC(op_e050_0), 57424}, /* ROXR */
{ CPUFUNC(op_e058_0), 57432}, /* ROR */
{ CPUFUNC(op_e060_0), 57440}, /* ASR */
{ CPUFUNC(op_e068_0), 57448}, /* LSR */
{ CPUFUNC(op_e070_0), 57456}, /* ROXR */
{ CPUFUNC(op_e078_0), 57464}, /* ROR */
{ CPUFUNC(op_e080_0), 57472}, /* ASR */
{ CPUFUNC(op_e088_0), 57480}, /* LSR */
{ CPUFUNC(op_e090_0), 57488}, /* ROXR */
{ CPUFUNC(op_e098_0), 57496}, /* ROR */
{ CPUFUNC(op_e0a0_0), 57504}, /* ASR */
{ CPUFUNC(op_e0a8_0), 57512}, /* LSR */
{ CPUFUNC(op_e0b0_0), 57520}, /* ROXR */
{ CPUFUNC(op_e0b8_0), 57528}, /* ROR */
{ CPUFUNC(op_e0d0_0), 57552}, /* ASRW */
{ CPUFUNC(op_e0d8_0), 57560}, /* ASRW */
{ CPUFUNC(op_e0e0_0), 57568}, /* ASRW */
{ CPUFUNC(op_e0e8_0), 57576}, /* ASRW */
{ CPUFUNC(op_e0f0_3), 57584 }, /* ASRW */
{ CPUFUNC(op_e0f8_0), 57592}, /* ASRW */
{ CPUFUNC(op_e0f9_0), 57593}, /* ASRW */
{ CPUFUNC(op_e100_0), 57600}, /* ASL */
{ CPUFUNC(op_e108_0), 57608}, /* LSL */
{ CPUFUNC(op_e110_0), 57616}, /* ROXL */
{ CPUFUNC(op_e118_0), 57624}, /* ROL */
{ CPUFUNC(op_e120_0), 57632}, /* ASL */
{ CPUFUNC(op_e128_0), 57640}, /* LSL */
{ CPUFUNC(op_e130_0), 57648}, /* ROXL */
{ CPUFUNC(op_e138_0), 57656}, /* ROL */
{ CPUFUNC(op_e140_0), 57664}, /* ASL */
{ CPUFUNC(op_e148_0), 57672}, /* LSL */
{ CPUFUNC(op_e150_0), 57680}, /* ROXL */
{ CPUFUNC(op_e158_0), 57688}, /* ROL */
{ CPUFUNC(op_e160_0), 57696}, /* ASL */
{ CPUFUNC(op_e168_0), 57704}, /* LSL */
{ CPUFUNC(op_e170_0), 57712}, /* ROXL */
{ CPUFUNC(op_e178_0), 57720}, /* ROL */
{ CPUFUNC(op_e180_0), 57728}, /* ASL */
{ CPUFUNC(op_e188_0), 57736}, /* LSL */
{ CPUFUNC(op_e190_0), 57744}, /* ROXL */
{ CPUFUNC(op_e198_0), 57752}, /* ROL */
{ CPUFUNC(op_e1a0_0), 57760}, /* ASL */
{ CPUFUNC(op_e1a8_0), 57768}, /* LSL */
{ CPUFUNC(op_e1b0_0), 57776}, /* ROXL */
{ CPUFUNC(op_e1b8_0), 57784}, /* ROL */
{ CPUFUNC(op_e1d0_0), 57808}, /* ASLW */
{ CPUFUNC(op_e1d8_0), 57816}, /* ASLW */
{ CPUFUNC(op_e1e0_0), 57824}, /* ASLW */
{ CPUFUNC(op_e1e8_0), 57832}, /* ASLW */
{ CPUFUNC(op_e1f0_3), 57840 }, /* ASLW */
{ CPUFUNC(op_e1f8_0), 57848}, /* ASLW */
{ CPUFUNC(op_e1f9_0), 57849}, /* ASLW */
{ CPUFUNC(op_e2d0_0), 58064}, /* LSRW */
{ CPUFUNC(op_e2d8_0), 58072}, /* LSRW */
{ CPUFUNC(op_e2e0_0), 58080}, /* LSRW */
{ CPUFUNC(op_e2e8_0), 58088}, /* LSRW */
{ CPUFUNC(op_e2f0_3), 58096 }, /* LSRW */
{ CPUFUNC(op_e2f8_0), 58104}, /* LSRW */
{ CPUFUNC(op_e2f9_0), 58105}, /* LSRW */
{ CPUFUNC(op_e3d0_0), 58320}, /* LSLW */
{ CPUFUNC(op_e3d8_0), 58328}, /* LSLW */
{ CPUFUNC(op_e3e0_0), 58336}, /* LSLW */
{ CPUFUNC(op_e3e8_0), 58344}, /* LSLW */
{ CPUFUNC(op_e3f0_3), 58352 }, /* LSLW */
{ CPUFUNC(op_e3f8_0), 58360}, /* LSLW */
{ CPUFUNC(op_e3f9_0), 58361}, /* LSLW */
{ CPUFUNC(op_e4d0_0), 58576}, /* ROXRW */
{ CPUFUNC(op_e4d8_0), 58584}, /* ROXRW */
{ CPUFUNC(op_e4e0_0), 58592}, /* ROXRW */
{ CPUFUNC(op_e4e8_0), 58600}, /* ROXRW */
{ CPUFUNC(op_e4f0_3), 58608 }, /* ROXRW */
{ CPUFUNC(op_e4f8_0), 58616}, /* ROXRW */
{ CPUFUNC(op_e4f9_0), 58617}, /* ROXRW */
{ CPUFUNC(op_e5d0_0), 58832}, /* ROXLW */
{ CPUFUNC(op_e5d8_0), 58840}, /* ROXLW */
{ CPUFUNC(op_e5e0_0), 58848}, /* ROXLW */
{ CPUFUNC(op_e5e8_0), 58856}, /* ROXLW */
{ CPUFUNC(op_e5f0_3), 58864 }, /* ROXLW */
{ CPUFUNC(op_e5f8_0), 58872}, /* ROXLW */
{ CPUFUNC(op_e5f9_0), 58873}, /* ROXLW */
{ CPUFUNC(op_e6d0_0), 59088}, /* RORW */
{ CPUFUNC(op_e6d8_0), 59096}, /* RORW */
{ CPUFUNC(op_e6e0_0), 59104}, /* RORW */
{ CPUFUNC(op_e6e8_0), 59112}, /* RORW */
{ CPUFUNC(op_e6f0_3), 59120 }, /* RORW */
{ CPUFUNC(op_e6f8_0), 59128}, /* RORW */
{ CPUFUNC(op_e6f9_0), 59129}, /* RORW */
{ CPUFUNC(op_e7d0_0), 59344}, /* ROLW */
{ CPUFUNC(op_e7d8_0), 59352}, /* ROLW */
{ CPUFUNC(op_e7e0_0), 59360}, /* ROLW */
{ CPUFUNC(op_e7e8_0), 59368}, /* ROLW */
{ CPUFUNC(op_e7f0_3), 59376 }, /* ROLW */
{ CPUFUNC(op_e7f8_0), 59384}, /* ROLW */
{ CPUFUNC(op_e7f9_0), 59385}, /* ROLW */
{ 0, 0 }};
#endif /* CPUEMU_68000_ONLY */
const struct cputbl CPUFUNC(op_smalltbl_4)[] = {
{ CPUFUNC(op_0000_0), 0}, /* OR */
{ CPUFUNC(op_0010_0), 16}, /* OR */
{ CPUFUNC(op_0018_0), 24}, /* OR */
{ CPUFUNC(op_0020_0), 32}, /* OR */
{ CPUFUNC(op_0028_0), 40}, /* OR */
{ CPUFUNC(op_0030_3), 48}, /* OR */
{ CPUFUNC(op_0038_0), 56}, /* OR */
{ CPUFUNC(op_0039_0), 57}, /* OR */
{ CPUFUNC(op_003c_0), 60}, /* ORSR */
{ CPUFUNC(op_0040_0), 64}, /* OR */
{ CPUFUNC(op_0050_0), 80}, /* OR */
{ CPUFUNC(op_0058_0), 88}, /* OR */
{ CPUFUNC(op_0060_0), 96}, /* OR */
{ CPUFUNC(op_0068_0), 104}, /* OR */
{ CPUFUNC(op_0070_3), 112}, /* OR */
{ CPUFUNC(op_0078_0), 120}, /* OR */
{ CPUFUNC(op_0079_0), 121}, /* OR */
{ CPUFUNC(op_007c_0), 124}, /* ORSR */
{ CPUFUNC(op_0080_0), 128}, /* OR */
{ CPUFUNC(op_0090_0), 144}, /* OR */
{ CPUFUNC(op_0098_0), 152}, /* OR */
{ CPUFUNC(op_00a0_0), 160}, /* OR */
{ CPUFUNC(op_00a8_0), 168}, /* OR */
{ CPUFUNC(op_00b0_3), 176}, /* OR */
{ CPUFUNC(op_00b8_0), 184}, /* OR */
{ CPUFUNC(op_00b9_0), 185}, /* OR */
{ CPUFUNC(op_0100_0), 256}, /* BTST */
{ CPUFUNC(op_0108_0), 264}, /* MVPMR */
{ CPUFUNC(op_0110_0), 272}, /* BTST */
{ CPUFUNC(op_0118_0), 280}, /* BTST */
{ CPUFUNC(op_0120_0), 288}, /* BTST */
{ CPUFUNC(op_0128_0), 296}, /* BTST */
{ CPUFUNC(op_0130_3), 304}, /* BTST */
{ CPUFUNC(op_0138_0), 312}, /* BTST */
{ CPUFUNC(op_0139_0), 313}, /* BTST */
{ CPUFUNC(op_013a_0), 314}, /* BTST */
{ CPUFUNC(op_013b_3), 315}, /* BTST */
{ CPUFUNC(op_013c_0), 316}, /* BTST */
{ CPUFUNC(op_0140_0), 320}, /* BCHG */
{ CPUFUNC(op_0148_0), 328}, /* MVPMR */
{ CPUFUNC(op_0150_0), 336}, /* BCHG */
{ CPUFUNC(op_0158_0), 344}, /* BCHG */
{ CPUFUNC(op_0160_0), 352}, /* BCHG */
{ CPUFUNC(op_0168_0), 360}, /* BCHG */
{ CPUFUNC(op_0170_3), 368}, /* BCHG */
{ CPUFUNC(op_0178_0), 376}, /* BCHG */
{ CPUFUNC(op_0179_0), 377}, /* BCHG */
{ CPUFUNC(op_017a_0), 378}, /* BCHG */
{ CPUFUNC(op_017b_3), 379}, /* BCHG */
{ CPUFUNC(op_0180_0), 384}, /* BCLR */
{ CPUFUNC(op_0188_0), 392}, /* MVPRM */
{ CPUFUNC(op_0190_0), 400}, /* BCLR */
{ CPUFUNC(op_0198_0), 408}, /* BCLR */
{ CPUFUNC(op_01a0_0), 416}, /* BCLR */
{ CPUFUNC(op_01a8_0), 424}, /* BCLR */
{ CPUFUNC(op_01b0_3), 432}, /* BCLR */
{ CPUFUNC(op_01b8_0), 440}, /* BCLR */
{ CPUFUNC(op_01b9_0), 441}, /* BCLR */
{ CPUFUNC(op_01ba_0), 442}, /* BCLR */
{ CPUFUNC(op_01bb_3), 443}, /* BCLR */
{ CPUFUNC(op_01c0_0), 448}, /* BSET */
{ CPUFUNC(op_01c8_0), 456}, /* MVPRM */
{ CPUFUNC(op_01d0_0), 464}, /* BSET */
{ CPUFUNC(op_01d8_0), 472}, /* BSET */
{ CPUFUNC(op_01e0_0), 480}, /* BSET */
{ CPUFUNC(op_01e8_0), 488}, /* BSET */
{ CPUFUNC(op_01f0_3), 496}, /* BSET */
{ CPUFUNC(op_01f8_0), 504}, /* BSET */
{ CPUFUNC(op_01f9_0), 505}, /* BSET */
{ CPUFUNC(op_01fa_0), 506}, /* BSET */
{ CPUFUNC(op_01fb_3), 507}, /* BSET */
{ CPUFUNC(op_0200_0), 512}, /* AND */
{ CPUFUNC(op_0210_0), 528}, /* AND */
{ CPUFUNC(op_0218_0), 536}, /* AND */
{ CPUFUNC(op_0220_0), 544}, /* AND */
{ CPUFUNC(op_0228_0), 552}, /* AND */
{ CPUFUNC(op_0230_3), 560}, /* AND */
{ CPUFUNC(op_0238_0), 568}, /* AND */
{ CPUFUNC(op_0239_0), 569}, /* AND */
{ CPUFUNC(op_023c_0), 572}, /* ANDSR */
{ CPUFUNC(op_0240_0), 576}, /* AND */
{ CPUFUNC(op_0250_0), 592}, /* AND */
{ CPUFUNC(op_0258_0), 600}, /* AND */
{ CPUFUNC(op_0260_0), 608}, /* AND */
{ CPUFUNC(op_0268_0), 616}, /* AND */
{ CPUFUNC(op_0270_3), 624}, /* AND */
{ CPUFUNC(op_0278_0), 632}, /* AND */
{ CPUFUNC(op_0279_0), 633}, /* AND */
{ CPUFUNC(op_027c_0), 636}, /* ANDSR */
{ CPUFUNC(op_0280_0), 640}, /* AND */
{ CPUFUNC(op_0290_0), 656}, /* AND */
{ CPUFUNC(op_0298_0), 664}, /* AND */
{ CPUFUNC(op_02a0_0), 672}, /* AND */
{ CPUFUNC(op_02a8_0), 680}, /* AND */
{ CPUFUNC(op_02b0_3), 688}, /* AND */
{ CPUFUNC(op_02b8_0), 696}, /* AND */
{ CPUFUNC(op_02b9_0), 697}, /* AND */
{ CPUFUNC(op_0400_0), 1024}, /* SUB */
{ CPUFUNC(op_0410_0), 1040}, /* SUB */
{ CPUFUNC(op_0418_0), 1048}, /* SUB */
{ CPUFUNC(op_0420_0), 1056}, /* SUB */
{ CPUFUNC(op_0428_0), 1064}, /* SUB */
{ CPUFUNC(op_0430_3), 1072}, /* SUB */
{ CPUFUNC(op_0438_0), 1080}, /* SUB */
{ CPUFUNC(op_0439_0), 1081}, /* SUB */
{ CPUFUNC(op_0440_0), 1088}, /* SUB */
{ CPUFUNC(op_0450_0), 1104}, /* SUB */
{ CPUFUNC(op_0458_0), 1112}, /* SUB */
{ CPUFUNC(op_0460_0), 1120}, /* SUB */
{ CPUFUNC(op_0468_0), 1128}, /* SUB */
{ CPUFUNC(op_0470_3), 1136}, /* SUB */
{ CPUFUNC(op_0478_0), 1144}, /* SUB */
{ CPUFUNC(op_0479_0), 1145}, /* SUB */
{ CPUFUNC(op_0480_0), 1152}, /* SUB */
{ CPUFUNC(op_0490_0), 1168}, /* SUB */
{ CPUFUNC(op_0498_0), 1176}, /* SUB */
{ CPUFUNC(op_04a0_0), 1184}, /* SUB */
{ CPUFUNC(op_04a8_0), 1192}, /* SUB */
{ CPUFUNC(op_04b0_3), 1200}, /* SUB */
{ CPUFUNC(op_04b8_0), 1208}, /* SUB */
{ CPUFUNC(op_04b9_0), 1209}, /* SUB */
{ CPUFUNC(op_0600_0), 1536}, /* ADD */
{ CPUFUNC(op_0610_0), 1552}, /* ADD */
{ CPUFUNC(op_0618_0), 1560}, /* ADD */
{ CPUFUNC(op_0620_0), 1568}, /* ADD */
{ CPUFUNC(op_0628_0), 1576}, /* ADD */
{ CPUFUNC(op_0630_3), 1584}, /* ADD */
{ CPUFUNC(op_0638_0), 1592}, /* ADD */
{ CPUFUNC(op_0639_0), 1593}, /* ADD */
{ CPUFUNC(op_0640_0), 1600}, /* ADD */
{ CPUFUNC(op_0650_0), 1616}, /* ADD */
{ CPUFUNC(op_0658_0), 1624}, /* ADD */
{ CPUFUNC(op_0660_0), 1632}, /* ADD */
{ CPUFUNC(op_0668_0), 1640}, /* ADD */
{ CPUFUNC(op_0670_3), 1648}, /* ADD */
{ CPUFUNC(op_0678_0), 1656}, /* ADD */
{ CPUFUNC(op_0679_0), 1657}, /* ADD */
{ CPUFUNC(op_0680_0), 1664}, /* ADD */
{ CPUFUNC(op_0690_0), 1680}, /* ADD */
{ CPUFUNC(op_0698_0), 1688}, /* ADD */
{ CPUFUNC(op_06a0_0), 1696}, /* ADD */
{ CPUFUNC(op_06a8_0), 1704}, /* ADD */
{ CPUFUNC(op_06b0_3), 1712}, /* ADD */
{ CPUFUNC(op_06b8_0), 1720}, /* ADD */
{ CPUFUNC(op_06b9_0), 1721}, /* ADD */
{ CPUFUNC(op_0800_0), 2048}, /* BTST */
{ CPUFUNC(op_0810_0), 2064}, /* BTST */
{ CPUFUNC(op_0818_0), 2072}, /* BTST */
{ CPUFUNC(op_0820_0), 2080}, /* BTST */
{ CPUFUNC(op_0828_0), 2088}, /* BTST */
{ CPUFUNC(op_0830_3), 2096}, /* BTST */
{ CPUFUNC(op_0838_0), 2104}, /* BTST */
{ CPUFUNC(op_0839_0), 2105}, /* BTST */
{ CPUFUNC(op_083a_0), 2106}, /* BTST */
{ CPUFUNC(op_083b_3), 2107}, /* BTST */
{ CPUFUNC(op_083c_0), 2108}, /* BTST */
{ CPUFUNC(op_0840_0), 2112}, /* BCHG */
{ CPUFUNC(op_0850_0), 2128}, /* BCHG */
{ CPUFUNC(op_0858_0), 2136}, /* BCHG */
{ CPUFUNC(op_0860_0), 2144}, /* BCHG */
{ CPUFUNC(op_0868_0), 2152}, /* BCHG */
{ CPUFUNC(op_0870_3), 2160}, /* BCHG */
{ CPUFUNC(op_0878_0), 2168}, /* BCHG */
{ CPUFUNC(op_0879_0), 2169}, /* BCHG */
{ CPUFUNC(op_087a_0), 2170}, /* BCHG */
{ CPUFUNC(op_087b_3), 2171}, /* BCHG */
{ CPUFUNC(op_0880_0), 2176}, /* BCLR */
{ CPUFUNC(op_0890_0), 2192}, /* BCLR */
{ CPUFUNC(op_0898_0), 2200}, /* BCLR */
{ CPUFUNC(op_08a0_0), 2208}, /* BCLR */
{ CPUFUNC(op_08a8_0), 2216}, /* BCLR */
{ CPUFUNC(op_08b0_3), 2224}, /* BCLR */
{ CPUFUNC(op_08b8_0), 2232}, /* BCLR */
{ CPUFUNC(op_08b9_0), 2233}, /* BCLR */
{ CPUFUNC(op_08ba_0), 2234}, /* BCLR */
{ CPUFUNC(op_08bb_3), 2235}, /* BCLR */
{ CPUFUNC(op_08c0_0), 2240}, /* BSET */
{ CPUFUNC(op_08d0_0), 2256}, /* BSET */
{ CPUFUNC(op_08d8_0), 2264}, /* BSET */
{ CPUFUNC(op_08e0_0), 2272}, /* BSET */
{ CPUFUNC(op_08e8_0), 2280}, /* BSET */
{ CPUFUNC(op_08f0_3), 2288}, /* BSET */
{ CPUFUNC(op_08f8_0), 2296}, /* BSET */
{ CPUFUNC(op_08f9_0), 2297}, /* BSET */
{ CPUFUNC(op_08fa_0), 2298}, /* BSET */
{ CPUFUNC(op_08fb_3), 2299}, /* BSET */
{ CPUFUNC(op_0a00_0), 2560}, /* EOR */
{ CPUFUNC(op_0a10_0), 2576}, /* EOR */
{ CPUFUNC(op_0a18_0), 2584}, /* EOR */
{ CPUFUNC(op_0a20_0), 2592}, /* EOR */
{ CPUFUNC(op_0a28_0), 2600}, /* EOR */
{ CPUFUNC(op_0a30_3), 2608}, /* EOR */
{ CPUFUNC(op_0a38_0), 2616}, /* EOR */
{ CPUFUNC(op_0a39_0), 2617}, /* EOR */
{ CPUFUNC(op_0a3c_0), 2620}, /* EORSR */
{ CPUFUNC(op_0a40_0), 2624}, /* EOR */
{ CPUFUNC(op_0a50_0), 2640}, /* EOR */
{ CPUFUNC(op_0a58_0), 2648}, /* EOR */
{ CPUFUNC(op_0a60_0), 2656}, /* EOR */
{ CPUFUNC(op_0a68_0), 2664}, /* EOR */
{ CPUFUNC(op_0a70_3), 2672}, /* EOR */
{ CPUFUNC(op_0a78_0), 2680}, /* EOR */
{ CPUFUNC(op_0a79_0), 2681}, /* EOR */
{ CPUFUNC(op_0a7c_0), 2684}, /* EORSR */
{ CPUFUNC(op_0a80_0), 2688}, /* EOR */
{ CPUFUNC(op_0a90_0), 2704}, /* EOR */
{ CPUFUNC(op_0a98_0), 2712}, /* EOR */
{ CPUFUNC(op_0aa0_0), 2720}, /* EOR */
{ CPUFUNC(op_0aa8_0), 2728}, /* EOR */
{ CPUFUNC(op_0ab0_3), 2736}, /* EOR */
{ CPUFUNC(op_0ab8_0), 2744}, /* EOR */
{ CPUFUNC(op_0ab9_0), 2745}, /* EOR */
{ CPUFUNC(op_0c00_0), 3072}, /* CMP */
{ CPUFUNC(op_0c10_0), 3088}, /* CMP */
{ CPUFUNC(op_0c18_0), 3096}, /* CMP */
{ CPUFUNC(op_0c20_0), 3104}, /* CMP */
{ CPUFUNC(op_0c28_0), 3112}, /* CMP */
{ CPUFUNC(op_0c30_3), 3120}, /* CMP */
{ CPUFUNC(op_0c38_0), 3128}, /* CMP */
{ CPUFUNC(op_0c39_0), 3129}, /* CMP */
{ CPUFUNC(op_0c40_0), 3136}, /* CMP */
{ CPUFUNC(op_0c50_0), 3152}, /* CMP */
{ CPUFUNC(op_0c58_0), 3160}, /* CMP */
{ CPUFUNC(op_0c60_0), 3168}, /* CMP */
{ CPUFUNC(op_0c68_0), 3176}, /* CMP */
{ CPUFUNC(op_0c70_3), 3184}, /* CMP */
{ CPUFUNC(op_0c78_0), 3192}, /* CMP */
{ CPUFUNC(op_0c79_0), 3193}, /* CMP */
{ CPUFUNC(op_0c80_0), 3200}, /* CMP */
{ CPUFUNC(op_0c90_0), 3216}, /* CMP */
{ CPUFUNC(op_0c98_0), 3224}, /* CMP */
{ CPUFUNC(op_0ca0_0), 3232}, /* CMP */
{ CPUFUNC(op_0ca8_0), 3240}, /* CMP */
{ CPUFUNC(op_0cb0_3), 3248}, /* CMP */
{ CPUFUNC(op_0cb8_0), 3256}, /* CMP */
{ CPUFUNC(op_0cb9_0), 3257}, /* CMP */
{ CPUFUNC(op_1000_0), 4096}, /* MOVE */
{ CPUFUNC(op_1010_0), 4112}, /* MOVE */
{ CPUFUNC(op_1018_0), 4120}, /* MOVE */
{ CPUFUNC(op_1020_0), 4128}, /* MOVE */
{ CPUFUNC(op_1028_0), 4136}, /* MOVE */
{ CPUFUNC(op_1030_3), 4144}, /* MOVE */
{ CPUFUNC(op_1038_0), 4152}, /* MOVE */
{ CPUFUNC(op_1039_0), 4153}, /* MOVE */
{ CPUFUNC(op_103a_0), 4154}, /* MOVE */
{ CPUFUNC(op_103b_3), 4155}, /* MOVE */
{ CPUFUNC(op_103c_0), 4156}, /* MOVE */
{ CPUFUNC(op_1080_0), 4224}, /* MOVE */
{ CPUFUNC(op_1090_0), 4240}, /* MOVE */
{ CPUFUNC(op_1098_0), 4248}, /* MOVE */
{ CPUFUNC(op_10a0_0), 4256}, /* MOVE */
{ CPUFUNC(op_10a8_0), 4264}, /* MOVE */
{ CPUFUNC(op_10b0_3), 4272}, /* MOVE */
{ CPUFUNC(op_10b8_0), 4280}, /* MOVE */
{ CPUFUNC(op_10b9_0), 4281}, /* MOVE */
{ CPUFUNC(op_10ba_0), 4282}, /* MOVE */
{ CPUFUNC(op_10bb_3), 4283}, /* MOVE */
{ CPUFUNC(op_10bc_0), 4284}, /* MOVE */
{ CPUFUNC(op_10c0_0), 4288}, /* MOVE */
{ CPUFUNC(op_10d0_0), 4304}, /* MOVE */
{ CPUFUNC(op_10d8_0), 4312}, /* MOVE */
{ CPUFUNC(op_10e0_0), 4320}, /* MOVE */
{ CPUFUNC(op_10e8_0), 4328}, /* MOVE */
{ CPUFUNC(op_10f0_3), 4336}, /* MOVE */
{ CPUFUNC(op_10f8_0), 4344}, /* MOVE */
{ CPUFUNC(op_10f9_0), 4345}, /* MOVE */
{ CPUFUNC(op_10fa_0), 4346}, /* MOVE */
{ CPUFUNC(op_10fb_3), 4347}, /* MOVE */
{ CPUFUNC(op_10fc_0), 4348}, /* MOVE */
{ CPUFUNC(op_1100_0), 4352}, /* MOVE */
{ CPUFUNC(op_1110_0), 4368}, /* MOVE */
{ CPUFUNC(op_1118_0), 4376}, /* MOVE */
{ CPUFUNC(op_1120_0), 4384}, /* MOVE */
{ CPUFUNC(op_1128_0), 4392}, /* MOVE */
{ CPUFUNC(op_1130_3), 4400}, /* MOVE */
{ CPUFUNC(op_1138_0), 4408}, /* MOVE */
{ CPUFUNC(op_1139_0), 4409}, /* MOVE */
{ CPUFUNC(op_113a_0), 4410}, /* MOVE */
{ CPUFUNC(op_113b_3), 4411}, /* MOVE */
{ CPUFUNC(op_113c_0), 4412}, /* MOVE */
{ CPUFUNC(op_1140_0), 4416}, /* MOVE */
{ CPUFUNC(op_1150_0), 4432}, /* MOVE */
{ CPUFUNC(op_1158_0), 4440}, /* MOVE */
{ CPUFUNC(op_1160_0), 4448}, /* MOVE */
{ CPUFUNC(op_1168_0), 4456}, /* MOVE */
{ CPUFUNC(op_1170_3), 4464}, /* MOVE */
{ CPUFUNC(op_1178_0), 4472}, /* MOVE */
{ CPUFUNC(op_1179_0), 4473}, /* MOVE */
{ CPUFUNC(op_117a_0), 4474}, /* MOVE */
{ CPUFUNC(op_117b_3), 4475}, /* MOVE */
{ CPUFUNC(op_117c_0), 4476}, /* MOVE */
{ CPUFUNC(op_1180_3), 4480}, /* MOVE */
{ CPUFUNC(op_1190_3), 4496}, /* MOVE */
{ CPUFUNC(op_1198_3), 4504}, /* MOVE */
{ CPUFUNC(op_11a0_3), 4512}, /* MOVE */
{ CPUFUNC(op_11a8_3), 4520}, /* MOVE */
{ CPUFUNC(op_11b0_3), 4528}, /* MOVE */
{ CPUFUNC(op_11b8_3), 4536}, /* MOVE */
{ CPUFUNC(op_11b9_3), 4537}, /* MOVE */
{ CPUFUNC(op_11ba_3), 4538}, /* MOVE */
{ CPUFUNC(op_11bb_3), 4539}, /* MOVE */
{ CPUFUNC(op_11bc_3), 4540}, /* MOVE */
{ CPUFUNC(op_11c0_0), 4544}, /* MOVE */
{ CPUFUNC(op_11d0_0), 4560}, /* MOVE */
{ CPUFUNC(op_11d8_0), 4568}, /* MOVE */
{ CPUFUNC(op_11e0_0), 4576}, /* MOVE */
{ CPUFUNC(op_11e8_0), 4584}, /* MOVE */
{ CPUFUNC(op_11f0_3), 4592}, /* MOVE */
{ CPUFUNC(op_11f8_0), 4600}, /* MOVE */
{ CPUFUNC(op_11f9_0), 4601}, /* MOVE */
{ CPUFUNC(op_11fa_0), 4602}, /* MOVE */
{ CPUFUNC(op_11fb_3), 4603}, /* MOVE */
{ CPUFUNC(op_11fc_0), 4604}, /* MOVE */
{ CPUFUNC(op_13c0_0), 5056}, /* MOVE */
{ CPUFUNC(op_13d0_0), 5072}, /* MOVE */
{ CPUFUNC(op_13d8_0), 5080}, /* MOVE */
{ CPUFUNC(op_13e0_0), 5088}, /* MOVE */
{ CPUFUNC(op_13e8_0), 5096}, /* MOVE */
{ CPUFUNC(op_13f0_3), 5104}, /* MOVE */
{ CPUFUNC(op_13f8_0), 5112}, /* MOVE */
{ CPUFUNC(op_13f9_0), 5113}, /* MOVE */
{ CPUFUNC(op_13fa_0), 5114}, /* MOVE */
{ CPUFUNC(op_13fb_3), 5115}, /* MOVE */
{ CPUFUNC(op_13fc_0), 5116}, /* MOVE */
{ CPUFUNC(op_2000_0), 8192}, /* MOVE */
{ CPUFUNC(op_2008_0), 8200}, /* MOVE */
{ CPUFUNC(op_2010_0), 8208}, /* MOVE */
{ CPUFUNC(op_2018_0), 8216}, /* MOVE */
{ CPUFUNC(op_2020_0), 8224}, /* MOVE */
{ CPUFUNC(op_2028_0), 8232}, /* MOVE */
{ CPUFUNC(op_2030_3), 8240}, /* MOVE */
{ CPUFUNC(op_2038_0), 8248}, /* MOVE */
{ CPUFUNC(op_2039_0), 8249}, /* MOVE */
{ CPUFUNC(op_203a_0), 8250}, /* MOVE */
{ CPUFUNC(op_203b_3), 8251}, /* MOVE */
{ CPUFUNC(op_203c_0), 8252}, /* MOVE */
{ CPUFUNC(op_2040_0), 8256}, /* MOVEA */
{ CPUFUNC(op_2048_0), 8264}, /* MOVEA */
{ CPUFUNC(op_2050_0), 8272}, /* MOVEA */
{ CPUFUNC(op_2058_0), 8280}, /* MOVEA */
{ CPUFUNC(op_2060_0), 8288}, /* MOVEA */
{ CPUFUNC(op_2068_0), 8296}, /* MOVEA */
{ CPUFUNC(op_2070_3), 8304}, /* MOVEA */
{ CPUFUNC(op_2078_0), 8312}, /* MOVEA */
{ CPUFUNC(op_2079_0), 8313}, /* MOVEA */
{ CPUFUNC(op_207a_0), 8314}, /* MOVEA */
{ CPUFUNC(op_207b_3), 8315}, /* MOVEA */
{ CPUFUNC(op_207c_0), 8316}, /* MOVEA */
{ CPUFUNC(op_2080_0), 8320}, /* MOVE */
{ CPUFUNC(op_2088_0), 8328}, /* MOVE */
{ CPUFUNC(op_2090_0), 8336}, /* MOVE */
{ CPUFUNC(op_2098_0), 8344}, /* MOVE */
{ CPUFUNC(op_20a0_0), 8352}, /* MOVE */
{ CPUFUNC(op_20a8_0), 8360}, /* MOVE */
{ CPUFUNC(op_20b0_3), 8368}, /* MOVE */
{ CPUFUNC(op_20b8_0), 8376}, /* MOVE */
{ CPUFUNC(op_20b9_0), 8377}, /* MOVE */
{ CPUFUNC(op_20ba_0), 8378}, /* MOVE */
{ CPUFUNC(op_20bb_3), 8379}, /* MOVE */
{ CPUFUNC(op_20bc_0), 8380}, /* MOVE */
{ CPUFUNC(op_20c0_0), 8384}, /* MOVE */
{ CPUFUNC(op_20c8_0), 8392}, /* MOVE */
{ CPUFUNC(op_20d0_0), 8400}, /* MOVE */
{ CPUFUNC(op_20d8_0), 8408}, /* MOVE */
{ CPUFUNC(op_20e0_0), 8416}, /* MOVE */
{ CPUFUNC(op_20e8_0), 8424}, /* MOVE */
{ CPUFUNC(op_20f0_3), 8432}, /* MOVE */
{ CPUFUNC(op_20f8_0), 8440}, /* MOVE */
{ CPUFUNC(op_20f9_0), 8441}, /* MOVE */
{ CPUFUNC(op_20fa_0), 8442}, /* MOVE */
{ CPUFUNC(op_20fb_3), 8443}, /* MOVE */
{ CPUFUNC(op_20fc_0), 8444}, /* MOVE */
{ CPUFUNC(op_2100_0), 8448}, /* MOVE */
{ CPUFUNC(op_2108_0), 8456}, /* MOVE */
{ CPUFUNC(op_2110_0), 8464}, /* MOVE */
{ CPUFUNC(op_2118_0), 8472}, /* MOVE */
{ CPUFUNC(op_2120_0), 8480}, /* MOVE */
{ CPUFUNC(op_2128_0), 8488}, /* MOVE */
{ CPUFUNC(op_2130_3), 8496}, /* MOVE */
{ CPUFUNC(op_2138_0), 8504}, /* MOVE */
{ CPUFUNC(op_2139_0), 8505}, /* MOVE */
{ CPUFUNC(op_213a_0), 8506}, /* MOVE */
{ CPUFUNC(op_213b_3), 8507}, /* MOVE */
{ CPUFUNC(op_213c_0), 8508}, /* MOVE */
{ CPUFUNC(op_2140_0), 8512}, /* MOVE */
{ CPUFUNC(op_2148_0), 8520}, /* MOVE */
{ CPUFUNC(op_2150_0), 8528}, /* MOVE */
{ CPUFUNC(op_2158_0), 8536}, /* MOVE */
{ CPUFUNC(op_2160_0), 8544}, /* MOVE */
{ CPUFUNC(op_2168_0), 8552}, /* MOVE */
{ CPUFUNC(op_2170_3), 8560}, /* MOVE */
{ CPUFUNC(op_2178_0), 8568}, /* MOVE */
{ CPUFUNC(op_2179_0), 8569}, /* MOVE */
{ CPUFUNC(op_217a_0), 8570}, /* MOVE */
{ CPUFUNC(op_217b_3), 8571}, /* MOVE */
{ CPUFUNC(op_217c_0), 8572}, /* MOVE */
{ CPUFUNC(op_2180_3), 8576}, /* MOVE */
{ CPUFUNC(op_2188_3), 8584}, /* MOVE */
{ CPUFUNC(op_2190_3), 8592}, /* MOVE */
{ CPUFUNC(op_2198_3), 8600}, /* MOVE */
{ CPUFUNC(op_21a0_3), 8608}, /* MOVE */
{ CPUFUNC(op_21a8_3), 8616}, /* MOVE */
{ CPUFUNC(op_21b0_3), 8624}, /* MOVE */
{ CPUFUNC(op_21b8_3), 8632}, /* MOVE */
{ CPUFUNC(op_21b9_3), 8633}, /* MOVE */
{ CPUFUNC(op_21ba_3), 8634}, /* MOVE */
{ CPUFUNC(op_21bb_3), 8635}, /* MOVE */
{ CPUFUNC(op_21bc_3), 8636}, /* MOVE */
{ CPUFUNC(op_21c0_0), 8640}, /* MOVE */
{ CPUFUNC(op_21c8_0), 8648}, /* MOVE */
{ CPUFUNC(op_21d0_0), 8656}, /* MOVE */
{ CPUFUNC(op_21d8_0), 8664}, /* MOVE */
{ CPUFUNC(op_21e0_0), 8672}, /* MOVE */
{ CPUFUNC(op_21e8_0), 8680}, /* MOVE */
{ CPUFUNC(op_21f0_3), 8688}, /* MOVE */
{ CPUFUNC(op_21f8_0), 8696}, /* MOVE */
{ CPUFUNC(op_21f9_0), 8697}, /* MOVE */
{ CPUFUNC(op_21fa_0), 8698}, /* MOVE */
{ CPUFUNC(op_21fb_3), 8699}, /* MOVE */
{ CPUFUNC(op_21fc_0), 8700}, /* MOVE */
{ CPUFUNC(op_23c0_0), 9152}, /* MOVE */
{ CPUFUNC(op_23c8_0), 9160}, /* MOVE */
{ CPUFUNC(op_23d0_0), 9168}, /* MOVE */
{ CPUFUNC(op_23d8_0), 9176}, /* MOVE */
{ CPUFUNC(op_23e0_0), 9184}, /* MOVE */
{ CPUFUNC(op_23e8_0), 9192}, /* MOVE */
{ CPUFUNC(op_23f0_3), 9200}, /* MOVE */
{ CPUFUNC(op_23f8_0), 9208}, /* MOVE */
{ CPUFUNC(op_23f9_0), 9209}, /* MOVE */
{ CPUFUNC(op_23fa_0), 9210}, /* MOVE */
{ CPUFUNC(op_23fb_3), 9211}, /* MOVE */
{ CPUFUNC(op_23fc_0), 9212}, /* MOVE */
{ CPUFUNC(op_3000_0), 12288}, /* MOVE */
{ CPUFUNC(op_3008_0), 12296}, /* MOVE */
{ CPUFUNC(op_3010_0), 12304}, /* MOVE */
{ CPUFUNC(op_3018_0), 12312}, /* MOVE */
{ CPUFUNC(op_3020_0), 12320}, /* MOVE */
{ CPUFUNC(op_3028_0), 12328}, /* MOVE */
{ CPUFUNC(op_3030_3), 12336}, /* MOVE */
{ CPUFUNC(op_3038_0), 12344}, /* MOVE */
{ CPUFUNC(op_3039_0), 12345}, /* MOVE */
{ CPUFUNC(op_303a_0), 12346}, /* MOVE */
{ CPUFUNC(op_303b_3), 12347}, /* MOVE */
{ CPUFUNC(op_303c_0), 12348}, /* MOVE */
{ CPUFUNC(op_3040_0), 12352}, /* MOVEA */
{ CPUFUNC(op_3048_0), 12360}, /* MOVEA */
{ CPUFUNC(op_3050_0), 12368}, /* MOVEA */
{ CPUFUNC(op_3058_0), 12376}, /* MOVEA */
{ CPUFUNC(op_3060_0), 12384}, /* MOVEA */
{ CPUFUNC(op_3068_0), 12392}, /* MOVEA */
{ CPUFUNC(op_3070_3), 12400}, /* MOVEA */
{ CPUFUNC(op_3078_0), 12408}, /* MOVEA */
{ CPUFUNC(op_3079_0), 12409}, /* MOVEA */
{ CPUFUNC(op_307a_0), 12410}, /* MOVEA */
{ CPUFUNC(op_307b_3), 12411}, /* MOVEA */
{ CPUFUNC(op_307c_0), 12412}, /* MOVEA */
{ CPUFUNC(op_3080_0), 12416}, /* MOVE */
{ CPUFUNC(op_3088_0), 12424}, /* MOVE */
{ CPUFUNC(op_3090_0), 12432}, /* MOVE */
{ CPUFUNC(op_3098_0), 12440}, /* MOVE */
{ CPUFUNC(op_30a0_0), 12448}, /* MOVE */
{ CPUFUNC(op_30a8_0), 12456}, /* MOVE */
{ CPUFUNC(op_30b0_3), 12464}, /* MOVE */
{ CPUFUNC(op_30b8_0), 12472}, /* MOVE */
{ CPUFUNC(op_30b9_0), 12473}, /* MOVE */
{ CPUFUNC(op_30ba_0), 12474}, /* MOVE */
{ CPUFUNC(op_30bb_3), 12475}, /* MOVE */
{ CPUFUNC(op_30bc_0), 12476}, /* MOVE */
{ CPUFUNC(op_30c0_0), 12480}, /* MOVE */
{ CPUFUNC(op_30c8_0), 12488}, /* MOVE */
{ CPUFUNC(op_30d0_0), 12496}, /* MOVE */
{ CPUFUNC(op_30d8_0), 12504}, /* MOVE */
{ CPUFUNC(op_30e0_0), 12512}, /* MOVE */
{ CPUFUNC(op_30e8_0), 12520}, /* MOVE */
{ CPUFUNC(op_30f0_3), 12528}, /* MOVE */
{ CPUFUNC(op_30f8_0), 12536}, /* MOVE */
{ CPUFUNC(op_30f9_0), 12537}, /* MOVE */
{ CPUFUNC(op_30fa_0), 12538}, /* MOVE */
{ CPUFUNC(op_30fb_3), 12539}, /* MOVE */
{ CPUFUNC(op_30fc_0), 12540}, /* MOVE */
{ CPUFUNC(op_3100_0), 12544}, /* MOVE */
{ CPUFUNC(op_3108_0), 12552}, /* MOVE */
{ CPUFUNC(op_3110_0), 12560}, /* MOVE */
{ CPUFUNC(op_3118_0), 12568}, /* MOVE */
{ CPUFUNC(op_3120_0), 12576}, /* MOVE */
{ CPUFUNC(op_3128_0), 12584}, /* MOVE */
{ CPUFUNC(op_3130_3), 12592}, /* MOVE */
{ CPUFUNC(op_3138_0), 12600}, /* MOVE */
{ CPUFUNC(op_3139_0), 12601}, /* MOVE */
{ CPUFUNC(op_313a_0), 12602}, /* MOVE */
{ CPUFUNC(op_313b_3), 12603}, /* MOVE */
{ CPUFUNC(op_313c_0), 12604}, /* MOVE */
{ CPUFUNC(op_3140_0), 12608}, /* MOVE */
{ CPUFUNC(op_3148_0), 12616}, /* MOVE */
{ CPUFUNC(op_3150_0), 12624}, /* MOVE */
{ CPUFUNC(op_3158_0), 12632}, /* MOVE */
{ CPUFUNC(op_3160_0), 12640}, /* MOVE */
{ CPUFUNC(op_3168_0), 12648}, /* MOVE */
{ CPUFUNC(op_3170_3), 12656}, /* MOVE */
{ CPUFUNC(op_3178_0), 12664}, /* MOVE */
{ CPUFUNC(op_3179_0), 12665}, /* MOVE */
{ CPUFUNC(op_317a_0), 12666}, /* MOVE */
{ CPUFUNC(op_317b_3), 12667}, /* MOVE */
{ CPUFUNC(op_317c_0), 12668}, /* MOVE */
{ CPUFUNC(op_3180_3), 12672}, /* MOVE */
{ CPUFUNC(op_3188_3), 12680}, /* MOVE */
{ CPUFUNC(op_3190_3), 12688}, /* MOVE */
{ CPUFUNC(op_3198_3), 12696}, /* MOVE */
{ CPUFUNC(op_31a0_3), 12704}, /* MOVE */
{ CPUFUNC(op_31a8_3), 12712}, /* MOVE */
{ CPUFUNC(op_31b0_3), 12720}, /* MOVE */
{ CPUFUNC(op_31b8_3), 12728}, /* MOVE */
{ CPUFUNC(op_31b9_3), 12729}, /* MOVE */
{ CPUFUNC(op_31ba_3), 12730}, /* MOVE */
{ CPUFUNC(op_31bb_3), 12731}, /* MOVE */
{ CPUFUNC(op_31bc_3), 12732}, /* MOVE */
{ CPUFUNC(op_31c0_0), 12736}, /* MOVE */
{ CPUFUNC(op_31c8_0), 12744}, /* MOVE */
{ CPUFUNC(op_31d0_0), 12752}, /* MOVE */
{ CPUFUNC(op_31d8_0), 12760}, /* MOVE */
{ CPUFUNC(op_31e0_0), 12768}, /* MOVE */
{ CPUFUNC(op_31e8_0), 12776}, /* MOVE */
{ CPUFUNC(op_31f0_3), 12784}, /* MOVE */
{ CPUFUNC(op_31f8_0), 12792}, /* MOVE */
{ CPUFUNC(op_31f9_0), 12793}, /* MOVE */
{ CPUFUNC(op_31fa_0), 12794}, /* MOVE */
{ CPUFUNC(op_31fb_3), 12795}, /* MOVE */
{ CPUFUNC(op_31fc_0), 12796}, /* MOVE */
{ CPUFUNC(op_33c0_0), 13248}, /* MOVE */
{ CPUFUNC(op_33c8_0), 13256}, /* MOVE */
{ CPUFUNC(op_33d0_0), 13264}, /* MOVE */
{ CPUFUNC(op_33d8_0), 13272}, /* MOVE */
{ CPUFUNC(op_33e0_0), 13280}, /* MOVE */
{ CPUFUNC(op_33e8_0), 13288}, /* MOVE */
{ CPUFUNC(op_33f0_3), 13296}, /* MOVE */
{ CPUFUNC(op_33f8_0), 13304}, /* MOVE */
{ CPUFUNC(op_33f9_0), 13305}, /* MOVE */
{ CPUFUNC(op_33fa_0), 13306}, /* MOVE */
{ CPUFUNC(op_33fb_3), 13307}, /* MOVE */
{ CPUFUNC(op_33fc_0), 13308}, /* MOVE */
{ CPUFUNC(op_4000_0), 16384}, /* NEGX */
{ CPUFUNC(op_4010_0), 16400}, /* NEGX */
{ CPUFUNC(op_4018_0), 16408}, /* NEGX */
{ CPUFUNC(op_4020_0), 16416}, /* NEGX */
{ CPUFUNC(op_4028_0), 16424}, /* NEGX */
{ CPUFUNC(op_4030_3), 16432}, /* NEGX */
{ CPUFUNC(op_4038_0), 16440}, /* NEGX */
{ CPUFUNC(op_4039_0), 16441}, /* NEGX */
{ CPUFUNC(op_4040_0), 16448}, /* NEGX */
{ CPUFUNC(op_4050_0), 16464}, /* NEGX */
{ CPUFUNC(op_4058_0), 16472}, /* NEGX */
{ CPUFUNC(op_4060_0), 16480}, /* NEGX */
{ CPUFUNC(op_4068_0), 16488}, /* NEGX */
{ CPUFUNC(op_4070_3), 16496}, /* NEGX */
{ CPUFUNC(op_4078_0), 16504}, /* NEGX */
{ CPUFUNC(op_4079_0), 16505}, /* NEGX */
{ CPUFUNC(op_4080_0), 16512}, /* NEGX */
{ CPUFUNC(op_4090_0), 16528}, /* NEGX */
{ CPUFUNC(op_4098_0), 16536}, /* NEGX */
{ CPUFUNC(op_40a0_0), 16544}, /* NEGX */
{ CPUFUNC(op_40a8_0), 16552}, /* NEGX */
{ CPUFUNC(op_40b0_3), 16560}, /* NEGX */
{ CPUFUNC(op_40b8_0), 16568}, /* NEGX */
{ CPUFUNC(op_40b9_0), 16569}, /* NEGX */
{ CPUFUNC(op_40c0_4), 16576 }, /* MVSR2 */
{ CPUFUNC(op_40d0_4), 16592 }, /* MVSR2 */
{ CPUFUNC(op_40d8_4), 16600 }, /* MVSR2 */
{ CPUFUNC(op_40e0_4), 16608 }, /* MVSR2 */
{ CPUFUNC(op_40e8_4), 16616 }, /* MVSR2 */
{ CPUFUNC(op_40f0_4), 16624 }, /* MVSR2 */
{ CPUFUNC(op_40f8_4), 16632 }, /* MVSR2 */
{ CPUFUNC(op_40f9_4), 16633 }, /* MVSR2 */
{ CPUFUNC(op_4100_0), 16640}, /* CHK */
{ CPUFUNC(op_4110_0), 16656}, /* CHK */
{ CPUFUNC(op_4118_0), 16664}, /* CHK */
{ CPUFUNC(op_4120_0), 16672}, /* CHK */
{ CPUFUNC(op_4128_0), 16680}, /* CHK */
{ CPUFUNC(op_4130_3), 16688}, /* CHK */
{ CPUFUNC(op_4138_0), 16696}, /* CHK */
{ CPUFUNC(op_4139_0), 16697}, /* CHK */
{ CPUFUNC(op_413a_0), 16698}, /* CHK */
{ CPUFUNC(op_413b_3), 16699}, /* CHK */
{ CPUFUNC(op_413c_0), 16700}, /* CHK */
{ CPUFUNC(op_4180_0), 16768}, /* CHK */
{ CPUFUNC(op_4190_0), 16784}, /* CHK */
{ CPUFUNC(op_4198_0), 16792}, /* CHK */
{ CPUFUNC(op_41a0_0), 16800}, /* CHK */
{ CPUFUNC(op_41a8_0), 16808}, /* CHK */
{ CPUFUNC(op_41b0_3), 16816}, /* CHK */
{ CPUFUNC(op_41b8_0), 16824}, /* CHK */
{ CPUFUNC(op_41b9_0), 16825}, /* CHK */
{ CPUFUNC(op_41ba_0), 16826}, /* CHK */
{ CPUFUNC(op_41bb_3), 16827}, /* CHK */
{ CPUFUNC(op_41bc_0), 16828}, /* CHK */
{ CPUFUNC(op_41d0_0), 16848}, /* LEA */
{ CPUFUNC(op_41e8_0), 16872}, /* LEA */
{ CPUFUNC(op_41f0_3), 16880}, /* LEA */
{ CPUFUNC(op_41f8_0), 16888}, /* LEA */
{ CPUFUNC(op_41f9_0), 16889}, /* LEA */
{ CPUFUNC(op_41fa_0), 16890}, /* LEA */
{ CPUFUNC(op_41fb_3), 16891}, /* LEA */
{ CPUFUNC(op_4200_0), 16896}, /* CLR */
{ CPUFUNC(op_4210_0), 16912}, /* CLR */
{ CPUFUNC(op_4218_0), 16920}, /* CLR */
{ CPUFUNC(op_4220_0), 16928}, /* CLR */
{ CPUFUNC(op_4228_0), 16936}, /* CLR */
{ CPUFUNC(op_4230_3), 16944}, /* CLR */
{ CPUFUNC(op_4238_0), 16952}, /* CLR */
{ CPUFUNC(op_4239_0), 16953}, /* CLR */
{ CPUFUNC(op_4240_0), 16960}, /* CLR */
{ CPUFUNC(op_4250_0), 16976}, /* CLR */
{ CPUFUNC(op_4258_0), 16984}, /* CLR */
{ CPUFUNC(op_4260_0), 16992}, /* CLR */
{ CPUFUNC(op_4268_0), 17000}, /* CLR */
{ CPUFUNC(op_4270_3), 17008}, /* CLR */
{ CPUFUNC(op_4278_0), 17016}, /* CLR */
{ CPUFUNC(op_4279_0), 17017}, /* CLR */
{ CPUFUNC(op_4280_0), 17024}, /* CLR */
{ CPUFUNC(op_4290_0), 17040}, /* CLR */
{ CPUFUNC(op_4298_0), 17048}, /* CLR */
{ CPUFUNC(op_42a0_0), 17056}, /* CLR */
{ CPUFUNC(op_42a8_0), 17064}, /* CLR */
{ CPUFUNC(op_42b0_3), 17072}, /* CLR */
{ CPUFUNC(op_42b8_0), 17080}, /* CLR */
{ CPUFUNC(op_42b9_0), 17081}, /* CLR */
{ CPUFUNC(op_4400_0), 17408}, /* NEG */
{ CPUFUNC(op_4410_0), 17424}, /* NEG */
{ CPUFUNC(op_4418_0), 17432}, /* NEG */
{ CPUFUNC(op_4420_0), 17440}, /* NEG */
{ CPUFUNC(op_4428_0), 17448}, /* NEG */
{ CPUFUNC(op_4430_3), 17456}, /* NEG */
{ CPUFUNC(op_4438_0), 17464}, /* NEG */
{ CPUFUNC(op_4439_0), 17465}, /* NEG */
{ CPUFUNC(op_4440_0), 17472}, /* NEG */
{ CPUFUNC(op_4450_0), 17488}, /* NEG */
{ CPUFUNC(op_4458_0), 17496}, /* NEG */
{ CPUFUNC(op_4460_0), 17504}, /* NEG */
{ CPUFUNC(op_4468_0), 17512}, /* NEG */
{ CPUFUNC(op_4470_3), 17520}, /* NEG */
{ CPUFUNC(op_4478_0), 17528}, /* NEG */
{ CPUFUNC(op_4479_0), 17529}, /* NEG */
{ CPUFUNC(op_4480_0), 17536}, /* NEG */
{ CPUFUNC(op_4490_0), 17552}, /* NEG */
{ CPUFUNC(op_4498_0), 17560}, /* NEG */
{ CPUFUNC(op_44a0_0), 17568}, /* NEG */
{ CPUFUNC(op_44a8_0), 17576}, /* NEG */
{ CPUFUNC(op_44b0_3), 17584}, /* NEG */
{ CPUFUNC(op_44b8_0), 17592}, /* NEG */
{ CPUFUNC(op_44b9_0), 17593}, /* NEG */
{ CPUFUNC(op_44c0_0), 17600}, /* MV2SR */
{ CPUFUNC(op_44d0_0), 17616}, /* MV2SR */
{ CPUFUNC(op_44d8_0), 17624}, /* MV2SR */
{ CPUFUNC(op_44e0_0), 17632}, /* MV2SR */
{ CPUFUNC(op_44e8_0), 17640}, /* MV2SR */
{ CPUFUNC(op_44f0_3), 17648}, /* MV2SR */
{ CPUFUNC(op_44f8_0), 17656}, /* MV2SR */
{ CPUFUNC(op_44f9_0), 17657}, /* MV2SR */
{ CPUFUNC(op_44fa_0), 17658}, /* MV2SR */
{ CPUFUNC(op_44fb_3), 17659}, /* MV2SR */
{ CPUFUNC(op_44fc_0), 17660}, /* MV2SR */
{ CPUFUNC(op_4600_0), 17920}, /* NOT */
{ CPUFUNC(op_4610_0), 17936}, /* NOT */
{ CPUFUNC(op_4618_0), 17944}, /* NOT */
{ CPUFUNC(op_4620_0), 17952}, /* NOT */
{ CPUFUNC(op_4628_0), 17960}, /* NOT */
{ CPUFUNC(op_4630_3), 17968}, /* NOT */
{ CPUFUNC(op_4638_0), 17976}, /* NOT */
{ CPUFUNC(op_4639_0), 17977}, /* NOT */
{ CPUFUNC(op_4640_0), 17984}, /* NOT */
{ CPUFUNC(op_4650_0), 18000}, /* NOT */
{ CPUFUNC(op_4658_0), 18008}, /* NOT */
{ CPUFUNC(op_4660_0), 18016}, /* NOT */
{ CPUFUNC(op_4668_0), 18024}, /* NOT */
{ CPUFUNC(op_4670_3), 18032}, /* NOT */
{ CPUFUNC(op_4678_0), 18040}, /* NOT */
{ CPUFUNC(op_4679_0), 18041}, /* NOT */
{ CPUFUNC(op_4680_0), 18048}, /* NOT */
{ CPUFUNC(op_4690_0), 18064}, /* NOT */
{ CPUFUNC(op_4698_0), 18072}, /* NOT */
{ CPUFUNC(op_46a0_0), 18080}, /* NOT */
{ CPUFUNC(op_46a8_0), 18088}, /* NOT */
{ CPUFUNC(op_46b0_3), 18096}, /* NOT */
{ CPUFUNC(op_46b8_0), 18104}, /* NOT */
{ CPUFUNC(op_46b9_0), 18105}, /* NOT */
{ CPUFUNC(op_46c0_0), 18112}, /* MV2SR */
{ CPUFUNC(op_46d0_0), 18128}, /* MV2SR */
{ CPUFUNC(op_46d8_0), 18136}, /* MV2SR */
{ CPUFUNC(op_46e0_0), 18144}, /* MV2SR */
{ CPUFUNC(op_46e8_0), 18152}, /* MV2SR */
{ CPUFUNC(op_46f0_3), 18160}, /* MV2SR */
{ CPUFUNC(op_46f8_0), 18168}, /* MV2SR */
{ CPUFUNC(op_46f9_0), 18169}, /* MV2SR */
{ CPUFUNC(op_46fa_0), 18170}, /* MV2SR */
{ CPUFUNC(op_46fb_3), 18171}, /* MV2SR */
{ CPUFUNC(op_46fc_0), 18172}, /* MV2SR */
{ CPUFUNC(op_4800_0), 18432}, /* NBCD */
{ CPUFUNC(op_4810_0), 18448}, /* NBCD */
{ CPUFUNC(op_4818_0), 18456}, /* NBCD */
{ CPUFUNC(op_4820_0), 18464}, /* NBCD */
{ CPUFUNC(op_4828_0), 18472}, /* NBCD */
{ CPUFUNC(op_4830_3), 18480}, /* NBCD */
{ CPUFUNC(op_4838_0), 18488}, /* NBCD */
{ CPUFUNC(op_4839_0), 18489}, /* NBCD */
{ CPUFUNC(op_4840_0), 18496}, /* SWAP */
{ CPUFUNC(op_4850_0), 18512}, /* PEA */
{ CPUFUNC(op_4868_0), 18536}, /* PEA */
{ CPUFUNC(op_4870_3), 18544}, /* PEA */
{ CPUFUNC(op_4878_0), 18552}, /* PEA */
{ CPUFUNC(op_4879_0), 18553}, /* PEA */
{ CPUFUNC(op_487a_0), 18554}, /* PEA */
{ CPUFUNC(op_487b_3), 18555}, /* PEA */
{ CPUFUNC(op_4880_0), 18560}, /* EXT */
{ CPUFUNC(op_4890_0), 18576}, /* MVMLE */
{ CPUFUNC(op_48a0_0), 18592}, /* MVMLE */
{ CPUFUNC(op_48a8_0), 18600}, /* MVMLE */
{ CPUFUNC(op_48b0_3), 18608}, /* MVMLE */
{ CPUFUNC(op_48b8_0), 18616}, /* MVMLE */
{ CPUFUNC(op_48b9_0), 18617}, /* MVMLE */
{ CPUFUNC(op_48c0_0), 18624}, /* EXT */
{ CPUFUNC(op_48d0_0), 18640}, /* MVMLE */
{ CPUFUNC(op_48e0_0), 18656}, /* MVMLE */
{ CPUFUNC(op_48e8_0), 18664}, /* MVMLE */
{ CPUFUNC(op_48f0_3), 18672}, /* MVMLE */
{ CPUFUNC(op_48f8_0), 18680}, /* MVMLE */
{ CPUFUNC(op_48f9_0), 18681}, /* MVMLE */
{ CPUFUNC(op_49c0_0), 18880}, /* EXT */
{ CPUFUNC(op_4a00_0), 18944}, /* TST */
{ CPUFUNC(op_4a10_0), 18960}, /* TST */
{ CPUFUNC(op_4a18_0), 18968}, /* TST */
{ CPUFUNC(op_4a20_0), 18976}, /* TST */
{ CPUFUNC(op_4a28_0), 18984}, /* TST */
{ CPUFUNC(op_4a30_3), 18992}, /* TST */
{ CPUFUNC(op_4a38_0), 19000}, /* TST */
{ CPUFUNC(op_4a39_0), 19001}, /* TST */
{ CPUFUNC(op_4a40_0), 19008}, /* TST */
{ CPUFUNC(op_4a50_0), 19024}, /* TST */
{ CPUFUNC(op_4a58_0), 19032}, /* TST */
{ CPUFUNC(op_4a60_0), 19040}, /* TST */
{ CPUFUNC(op_4a68_0), 19048}, /* TST */
{ CPUFUNC(op_4a70_3), 19056}, /* TST */
{ CPUFUNC(op_4a78_0), 19064}, /* TST */
{ CPUFUNC(op_4a79_0), 19065}, /* TST */
{ CPUFUNC(op_4a80_0), 19072}, /* TST */
{ CPUFUNC(op_4a90_0), 19088}, /* TST */
{ CPUFUNC(op_4a98_0), 19096}, /* TST */
{ CPUFUNC(op_4aa0_0), 19104}, /* TST */
{ CPUFUNC(op_4aa8_0), 19112}, /* TST */
{ CPUFUNC(op_4ab0_3), 19120}, /* TST */
{ CPUFUNC(op_4ab8_0), 19128}, /* TST */
{ CPUFUNC(op_4ab9_0), 19129}, /* TST */
{ CPUFUNC(op_4ac0_0), 19136}, /* TAS */
{ CPUFUNC(op_4ad0_0), 19152}, /* TAS */
{ CPUFUNC(op_4ad8_0), 19160}, /* TAS */
{ CPUFUNC(op_4ae0_0), 19168}, /* TAS */
{ CPUFUNC(op_4ae8_0), 19176}, /* TAS */
{ CPUFUNC(op_4af0_3), 19184}, /* TAS */
{ CPUFUNC(op_4af8_0), 19192}, /* TAS */
{ CPUFUNC(op_4af9_0), 19193}, /* TAS */
{ CPUFUNC(op_4c90_0), 19600}, /* MVMEL */
{ CPUFUNC(op_4c98_0), 19608}, /* MVMEL */
{ CPUFUNC(op_4ca8_0), 19624}, /* MVMEL */
{ CPUFUNC(op_4cb0_3), 19632}, /* MVMEL */
{ CPUFUNC(op_4cb8_0), 19640}, /* MVMEL */
{ CPUFUNC(op_4cb9_0), 19641}, /* MVMEL */
{ CPUFUNC(op_4cba_0), 19642}, /* MVMEL */
{ CPUFUNC(op_4cbb_3), 19643}, /* MVMEL */
{ CPUFUNC(op_4cd0_0), 19664}, /* MVMEL */
{ CPUFUNC(op_4cd8_0), 19672}, /* MVMEL */
{ CPUFUNC(op_4ce8_0), 19688}, /* MVMEL */
{ CPUFUNC(op_4cf0_3), 19696}, /* MVMEL */
{ CPUFUNC(op_4cf8_0), 19704}, /* MVMEL */
{ CPUFUNC(op_4cf9_0), 19705}, /* MVMEL */
{ CPUFUNC(op_4cfa_0), 19706}, /* MVMEL */
{ CPUFUNC(op_4cfb_3), 19707}, /* MVMEL */
{ CPUFUNC(op_4e40_0), 20032}, /* TRAP */
{ CPUFUNC(op_4e50_0), 20048}, /* LINK */
{ CPUFUNC(op_4e58_0), 20056}, /* UNLK */
{ CPUFUNC(op_4e60_0), 20064}, /* MVR2USP */
{ CPUFUNC(op_4e68_0), 20072}, /* MVUSP2R */
{ CPUFUNC(op_4e70_0), 20080}, /* RESET */
{ CPUFUNC(op_4e71_0), 20081}, /* NOP */
{ CPUFUNC(op_4e72_0), 20082}, /* STOP */
{ CPUFUNC(op_4e73_4), 20083 }, /* RTE */
{ CPUFUNC(op_4e74_0), 20084}, /* RTD */
{ CPUFUNC(op_4e75_0), 20085}, /* RTS */
{ CPUFUNC(op_4e76_0), 20086}, /* TRAPV */
{ CPUFUNC(op_4e77_0), 20087}, /* RTR */
{ CPUFUNC(op_4e90_0), 20112}, /* JSR */
{ CPUFUNC(op_4ea8_0), 20136}, /* JSR */
{ CPUFUNC(op_4eb0_3), 20144}, /* JSR */
{ CPUFUNC(op_4eb8_0), 20152}, /* JSR */
{ CPUFUNC(op_4eb9_0), 20153}, /* JSR */
{ CPUFUNC(op_4eba_0), 20154}, /* JSR */
{ CPUFUNC(op_4ebb_3), 20155}, /* JSR */
{ CPUFUNC(op_4ed0_0), 20176}, /* JMP */
{ CPUFUNC(op_4ee8_0), 20200}, /* JMP */
{ CPUFUNC(op_4ef0_3), 20208}, /* JMP */
{ CPUFUNC(op_4ef8_0), 20216}, /* JMP */
{ CPUFUNC(op_4ef9_0), 20217}, /* JMP */
{ CPUFUNC(op_4efa_0), 20218}, /* JMP */
{ CPUFUNC(op_4efb_3), 20219}, /* JMP */
{ CPUFUNC(op_5000_0), 20480}, /* ADD */
{ CPUFUNC(op_5010_0), 20496}, /* ADD */
{ CPUFUNC(op_5018_0), 20504}, /* ADD */
{ CPUFUNC(op_5020_0), 20512}, /* ADD */
{ CPUFUNC(op_5028_0), 20520}, /* ADD */
{ CPUFUNC(op_5030_3), 20528}, /* ADD */
{ CPUFUNC(op_5038_0), 20536}, /* ADD */
{ CPUFUNC(op_5039_0), 20537}, /* ADD */
{ CPUFUNC(op_5040_0), 20544}, /* ADD */
{ CPUFUNC(op_5048_0), 20552}, /* ADDA */
{ CPUFUNC(op_5050_0), 20560}, /* ADD */
{ CPUFUNC(op_5058_0), 20568}, /* ADD */
{ CPUFUNC(op_5060_0), 20576}, /* ADD */
{ CPUFUNC(op_5068_0), 20584}, /* ADD */
{ CPUFUNC(op_5070_3), 20592}, /* ADD */
{ CPUFUNC(op_5078_0), 20600}, /* ADD */
{ CPUFUNC(op_5079_0), 20601}, /* ADD */
{ CPUFUNC(op_5080_0), 20608}, /* ADD */
{ CPUFUNC(op_5088_0), 20616}, /* ADDA */
{ CPUFUNC(op_5090_0), 20624}, /* ADD */
{ CPUFUNC(op_5098_0), 20632}, /* ADD */
{ CPUFUNC(op_50a0_0), 20640}, /* ADD */
{ CPUFUNC(op_50a8_0), 20648}, /* ADD */
{ CPUFUNC(op_50b0_3), 20656}, /* ADD */
{ CPUFUNC(op_50b8_0), 20664}, /* ADD */
{ CPUFUNC(op_50b9_0), 20665}, /* ADD */
{ CPUFUNC(op_50c0_0), 20672}, /* Scc */
{ CPUFUNC(op_50c8_0), 20680}, /* DBcc */
{ CPUFUNC(op_50d0_0), 20688}, /* Scc */
{ CPUFUNC(op_50d8_0), 20696}, /* Scc */
{ CPUFUNC(op_50e0_0), 20704}, /* Scc */
{ CPUFUNC(op_50e8_0), 20712}, /* Scc */
{ CPUFUNC(op_50f0_3), 20720}, /* Scc */
{ CPUFUNC(op_50f8_0), 20728}, /* Scc */
{ CPUFUNC(op_50f9_0), 20729}, /* Scc */
{ CPUFUNC(op_5100_0), 20736}, /* SUB */
{ CPUFUNC(op_5110_0), 20752}, /* SUB */
{ CPUFUNC(op_5118_0), 20760}, /* SUB */
{ CPUFUNC(op_5120_0), 20768}, /* SUB */
{ CPUFUNC(op_5128_0), 20776}, /* SUB */
{ CPUFUNC(op_5130_3), 20784}, /* SUB */
{ CPUFUNC(op_5138_0), 20792}, /* SUB */
{ CPUFUNC(op_5139_0), 20793}, /* SUB */
{ CPUFUNC(op_5140_0), 20800}, /* SUB */
{ CPUFUNC(op_5148_0), 20808}, /* SUBA */
{ CPUFUNC(op_5150_0), 20816}, /* SUB */
{ CPUFUNC(op_5158_0), 20824}, /* SUB */
{ CPUFUNC(op_5160_0), 20832}, /* SUB */
{ CPUFUNC(op_5168_0), 20840}, /* SUB */
{ CPUFUNC(op_5170_3), 20848}, /* SUB */
{ CPUFUNC(op_5178_0), 20856}, /* SUB */
{ CPUFUNC(op_5179_0), 20857}, /* SUB */
{ CPUFUNC(op_5180_0), 20864}, /* SUB */
{ CPUFUNC(op_5188_0), 20872}, /* SUBA */
{ CPUFUNC(op_5190_0), 20880}, /* SUB */
{ CPUFUNC(op_5198_0), 20888}, /* SUB */
{ CPUFUNC(op_51a0_0), 20896}, /* SUB */
{ CPUFUNC(op_51a8_0), 20904}, /* SUB */
{ CPUFUNC(op_51b0_3), 20912}, /* SUB */
{ CPUFUNC(op_51b8_0), 20920}, /* SUB */
{ CPUFUNC(op_51b9_0), 20921}, /* SUB */
{ CPUFUNC(op_51c0_0), 20928}, /* Scc */
{ CPUFUNC(op_51c8_0), 20936}, /* DBcc */
{ CPUFUNC(op_51d0_0), 20944}, /* Scc */
{ CPUFUNC(op_51d8_0), 20952}, /* Scc */
{ CPUFUNC(op_51e0_0), 20960}, /* Scc */
{ CPUFUNC(op_51e8_0), 20968}, /* Scc */
{ CPUFUNC(op_51f0_3), 20976}, /* Scc */
{ CPUFUNC(op_51f8_0), 20984}, /* Scc */
{ CPUFUNC(op_51f9_0), 20985}, /* Scc */
{ CPUFUNC(op_52c0_0), 21184}, /* Scc */
{ CPUFUNC(op_52c8_0), 21192}, /* DBcc */
{ CPUFUNC(op_52d0_0), 21200}, /* Scc */
{ CPUFUNC(op_52d8_0), 21208}, /* Scc */
{ CPUFUNC(op_52e0_0), 21216}, /* Scc */
{ CPUFUNC(op_52e8_0), 21224}, /* Scc */
{ CPUFUNC(op_52f0_3), 21232}, /* Scc */
{ CPUFUNC(op_52f8_0), 21240}, /* Scc */
{ CPUFUNC(op_52f9_0), 21241}, /* Scc */
{ CPUFUNC(op_53c0_0), 21440}, /* Scc */
{ CPUFUNC(op_53c8_0), 21448}, /* DBcc */
{ CPUFUNC(op_53d0_0), 21456}, /* Scc */
{ CPUFUNC(op_53d8_0), 21464}, /* Scc */
{ CPUFUNC(op_53e0_0), 21472}, /* Scc */
{ CPUFUNC(op_53e8_0), 21480}, /* Scc */
{ CPUFUNC(op_53f0_3), 21488}, /* Scc */
{ CPUFUNC(op_53f8_0), 21496}, /* Scc */
{ CPUFUNC(op_53f9_0), 21497}, /* Scc */
{ CPUFUNC(op_54c0_0), 21696}, /* Scc */
{ CPUFUNC(op_54c8_0), 21704}, /* DBcc */
{ CPUFUNC(op_54d0_0), 21712}, /* Scc */
{ CPUFUNC(op_54d8_0), 21720}, /* Scc */
{ CPUFUNC(op_54e0_0), 21728}, /* Scc */
{ CPUFUNC(op_54e8_0), 21736}, /* Scc */
{ CPUFUNC(op_54f0_3), 21744}, /* Scc */
{ CPUFUNC(op_54f8_0), 21752}, /* Scc */
{ CPUFUNC(op_54f9_0), 21753}, /* Scc */
{ CPUFUNC(op_55c0_0), 21952}, /* Scc */
{ CPUFUNC(op_55c8_0), 21960}, /* DBcc */
{ CPUFUNC(op_55d0_0), 21968}, /* Scc */
{ CPUFUNC(op_55d8_0), 21976}, /* Scc */
{ CPUFUNC(op_55e0_0), 21984}, /* Scc */
{ CPUFUNC(op_55e8_0), 21992}, /* Scc */
{ CPUFUNC(op_55f0_3), 22000}, /* Scc */
{ CPUFUNC(op_55f8_0), 22008}, /* Scc */
{ CPUFUNC(op_55f9_0), 22009}, /* Scc */
{ CPUFUNC(op_56c0_0), 22208}, /* Scc */
{ CPUFUNC(op_56c8_0), 22216}, /* DBcc */
{ CPUFUNC(op_56d0_0), 22224}, /* Scc */
{ CPUFUNC(op_56d8_0), 22232}, /* Scc */
{ CPUFUNC(op_56e0_0), 22240}, /* Scc */
{ CPUFUNC(op_56e8_0), 22248}, /* Scc */
{ CPUFUNC(op_56f0_3), 22256}, /* Scc */
{ CPUFUNC(op_56f8_0), 22264}, /* Scc */
{ CPUFUNC(op_56f9_0), 22265}, /* Scc */
{ CPUFUNC(op_57c0_0), 22464}, /* Scc */
{ CPUFUNC(op_57c8_0), 22472}, /* DBcc */
{ CPUFUNC(op_57d0_0), 22480}, /* Scc */
{ CPUFUNC(op_57d8_0), 22488}, /* Scc */
{ CPUFUNC(op_57e0_0), 22496}, /* Scc */
{ CPUFUNC(op_57e8_0), 22504}, /* Scc */
{ CPUFUNC(op_57f0_3), 22512}, /* Scc */
{ CPUFUNC(op_57f8_0), 22520}, /* Scc */
{ CPUFUNC(op_57f9_0), 22521}, /* Scc */
{ CPUFUNC(op_58c0_0), 22720}, /* Scc */
{ CPUFUNC(op_58c8_0), 22728}, /* DBcc */
{ CPUFUNC(op_58d0_0), 22736}, /* Scc */
{ CPUFUNC(op_58d8_0), 22744}, /* Scc */
{ CPUFUNC(op_58e0_0), 22752}, /* Scc */
{ CPUFUNC(op_58e8_0), 22760}, /* Scc */
{ CPUFUNC(op_58f0_3), 22768}, /* Scc */
{ CPUFUNC(op_58f8_0), 22776}, /* Scc */
{ CPUFUNC(op_58f9_0), 22777}, /* Scc */
{ CPUFUNC(op_59c0_0), 22976}, /* Scc */
{ CPUFUNC(op_59c8_0), 22984}, /* DBcc */
{ CPUFUNC(op_59d0_0), 22992}, /* Scc */
{ CPUFUNC(op_59d8_0), 23000}, /* Scc */
{ CPUFUNC(op_59e0_0), 23008}, /* Scc */
{ CPUFUNC(op_59e8_0), 23016}, /* Scc */
{ CPUFUNC(op_59f0_3), 23024}, /* Scc */
{ CPUFUNC(op_59f8_0), 23032}, /* Scc */
{ CPUFUNC(op_59f9_0), 23033}, /* Scc */
{ CPUFUNC(op_5ac0_0), 23232}, /* Scc */
{ CPUFUNC(op_5ac8_0), 23240}, /* DBcc */
{ CPUFUNC(op_5ad0_0), 23248}, /* Scc */
{ CPUFUNC(op_5ad8_0), 23256}, /* Scc */
{ CPUFUNC(op_5ae0_0), 23264}, /* Scc */
{ CPUFUNC(op_5ae8_0), 23272}, /* Scc */
{ CPUFUNC(op_5af0_3), 23280}, /* Scc */
{ CPUFUNC(op_5af8_0), 23288}, /* Scc */
{ CPUFUNC(op_5af9_0), 23289}, /* Scc */
{ CPUFUNC(op_5bc0_0), 23488}, /* Scc */
{ CPUFUNC(op_5bc8_0), 23496}, /* DBcc */
{ CPUFUNC(op_5bd0_0), 23504}, /* Scc */
{ CPUFUNC(op_5bd8_0), 23512}, /* Scc */
{ CPUFUNC(op_5be0_0), 23520}, /* Scc */
{ CPUFUNC(op_5be8_0), 23528}, /* Scc */
{ CPUFUNC(op_5bf0_3), 23536}, /* Scc */
{ CPUFUNC(op_5bf8_0), 23544}, /* Scc */
{ CPUFUNC(op_5bf9_0), 23545}, /* Scc */
{ CPUFUNC(op_5cc0_0), 23744}, /* Scc */
{ CPUFUNC(op_5cc8_0), 23752}, /* DBcc */
{ CPUFUNC(op_5cd0_0), 23760}, /* Scc */
{ CPUFUNC(op_5cd8_0), 23768}, /* Scc */
{ CPUFUNC(op_5ce0_0), 23776}, /* Scc */
{ CPUFUNC(op_5ce8_0), 23784}, /* Scc */
{ CPUFUNC(op_5cf0_3), 23792}, /* Scc */
{ CPUFUNC(op_5cf8_0), 23800}, /* Scc */
{ CPUFUNC(op_5cf9_0), 23801}, /* Scc */
{ CPUFUNC(op_5dc0_0), 24000}, /* Scc */
{ CPUFUNC(op_5dc8_0), 24008}, /* DBcc */
{ CPUFUNC(op_5dd0_0), 24016}, /* Scc */
{ CPUFUNC(op_5dd8_0), 24024}, /* Scc */
{ CPUFUNC(op_5de0_0), 24032}, /* Scc */
{ CPUFUNC(op_5de8_0), 24040}, /* Scc */
{ CPUFUNC(op_5df0_3), 24048}, /* Scc */
{ CPUFUNC(op_5df8_0), 24056}, /* Scc */
{ CPUFUNC(op_5df9_0), 24057}, /* Scc */
{ CPUFUNC(op_5ec0_0), 24256}, /* Scc */
{ CPUFUNC(op_5ec8_0), 24264}, /* DBcc */
{ CPUFUNC(op_5ed0_0), 24272}, /* Scc */
{ CPUFUNC(op_5ed8_0), 24280}, /* Scc */
{ CPUFUNC(op_5ee0_0), 24288}, /* Scc */
{ CPUFUNC(op_5ee8_0), 24296}, /* Scc */
{ CPUFUNC(op_5ef0_3), 24304}, /* Scc */
{ CPUFUNC(op_5ef8_0), 24312}, /* Scc */
{ CPUFUNC(op_5ef9_0), 24313}, /* Scc */
{ CPUFUNC(op_5fc0_0), 24512}, /* Scc */
{ CPUFUNC(op_5fc8_0), 24520}, /* DBcc */
{ CPUFUNC(op_5fd0_0), 24528}, /* Scc */
{ CPUFUNC(op_5fd8_0), 24536}, /* Scc */
{ CPUFUNC(op_5fe0_0), 24544}, /* Scc */
{ CPUFUNC(op_5fe8_0), 24552}, /* Scc */
{ CPUFUNC(op_5ff0_3), 24560}, /* Scc */
{ CPUFUNC(op_5ff8_0), 24568}, /* Scc */
{ CPUFUNC(op_5ff9_0), 24569}, /* Scc */
{ CPUFUNC(op_6000_0), 24576}, /* Bcc */
{ CPUFUNC(op_6001_0), 24577}, /* Bcc */
{ CPUFUNC(op_60ff_3), 24831}, /* Bcc */
{ CPUFUNC(op_6100_0), 24832}, /* BSR */
{ CPUFUNC(op_6101_0), 24833}, /* BSR */
{ CPUFUNC(op_61ff_0), 25087}, /* BSR */
{ CPUFUNC(op_6200_0), 25088}, /* Bcc */
{ CPUFUNC(op_6201_0), 25089}, /* Bcc */
{ CPUFUNC(op_62ff_3), 25343}, /* Bcc */
{ CPUFUNC(op_6300_0), 25344}, /* Bcc */
{ CPUFUNC(op_6301_0), 25345}, /* Bcc */
{ CPUFUNC(op_63ff_3), 25599}, /* Bcc */
{ CPUFUNC(op_6400_0), 25600}, /* Bcc */
{ CPUFUNC(op_6401_0), 25601}, /* Bcc */
{ CPUFUNC(op_64ff_3), 25855}, /* Bcc */
{ CPUFUNC(op_6500_0), 25856}, /* Bcc */
{ CPUFUNC(op_6501_0), 25857}, /* Bcc */
{ CPUFUNC(op_65ff_3), 26111}, /* Bcc */
{ CPUFUNC(op_6600_0), 26112}, /* Bcc */
{ CPUFUNC(op_6601_0), 26113}, /* Bcc */
{ CPUFUNC(op_66ff_3), 26367}, /* Bcc */
{ CPUFUNC(op_6700_0), 26368}, /* Bcc */
{ CPUFUNC(op_6701_0), 26369}, /* Bcc */
{ CPUFUNC(op_67ff_3), 26623}, /* Bcc */
{ CPUFUNC(op_6800_0), 26624}, /* Bcc */
{ CPUFUNC(op_6801_0), 26625}, /* Bcc */
{ CPUFUNC(op_68ff_3), 26879}, /* Bcc */
{ CPUFUNC(op_6900_0), 26880}, /* Bcc */
{ CPUFUNC(op_6901_0), 26881}, /* Bcc */
{ CPUFUNC(op_69ff_3), 27135}, /* Bcc */
{ CPUFUNC(op_6a00_0), 27136}, /* Bcc */
{ CPUFUNC(op_6a01_0), 27137}, /* Bcc */
{ CPUFUNC(op_6aff_3), 27391}, /* Bcc */
{ CPUFUNC(op_6b00_0), 27392}, /* Bcc */
{ CPUFUNC(op_6b01_0), 27393}, /* Bcc */
{ CPUFUNC(op_6bff_3), 27647}, /* Bcc */
{ CPUFUNC(op_6c00_0), 27648}, /* Bcc */
{ CPUFUNC(op_6c01_0), 27649}, /* Bcc */
{ CPUFUNC(op_6cff_3), 27903}, /* Bcc */
{ CPUFUNC(op_6d00_0), 27904}, /* Bcc */
{ CPUFUNC(op_6d01_0), 27905}, /* Bcc */
{ CPUFUNC(op_6dff_3), 28159}, /* Bcc */
{ CPUFUNC(op_6e00_0), 28160}, /* Bcc */
{ CPUFUNC(op_6e01_0), 28161}, /* Bcc */
{ CPUFUNC(op_6eff_3), 28415}, /* Bcc */
{ CPUFUNC(op_6f00_0), 28416}, /* Bcc */
{ CPUFUNC(op_6f01_0), 28417}, /* Bcc */
{ CPUFUNC(op_6fff_3), 28671}, /* Bcc */
{ CPUFUNC(op_7000_0), 28672}, /* MOVE */
{ CPUFUNC(op_8000_0), 32768}, /* OR */
{ CPUFUNC(op_8010_0), 32784}, /* OR */
{ CPUFUNC(op_8018_0), 32792}, /* OR */
{ CPUFUNC(op_8020_0), 32800}, /* OR */
{ CPUFUNC(op_8028_0), 32808}, /* OR */
{ CPUFUNC(op_8030_3), 32816}, /* OR */
{ CPUFUNC(op_8038_0), 32824}, /* OR */
{ CPUFUNC(op_8039_0), 32825}, /* OR */
{ CPUFUNC(op_803a_0), 32826}, /* OR */
{ CPUFUNC(op_803b_3), 32827}, /* OR */
{ CPUFUNC(op_803c_0), 32828}, /* OR */
{ CPUFUNC(op_8040_0), 32832}, /* OR */
{ CPUFUNC(op_8050_0), 32848}, /* OR */
{ CPUFUNC(op_8058_0), 32856}, /* OR */
{ CPUFUNC(op_8060_0), 32864}, /* OR */
{ CPUFUNC(op_8068_0), 32872}, /* OR */
{ CPUFUNC(op_8070_3), 32880}, /* OR */
{ CPUFUNC(op_8078_0), 32888}, /* OR */
{ CPUFUNC(op_8079_0), 32889}, /* OR */
{ CPUFUNC(op_807a_0), 32890}, /* OR */
{ CPUFUNC(op_807b_3), 32891}, /* OR */
{ CPUFUNC(op_807c_0), 32892}, /* OR */
{ CPUFUNC(op_8080_0), 32896}, /* OR */
{ CPUFUNC(op_8090_0), 32912}, /* OR */
{ CPUFUNC(op_8098_0), 32920}, /* OR */
{ CPUFUNC(op_80a0_0), 32928}, /* OR */
{ CPUFUNC(op_80a8_0), 32936}, /* OR */
{ CPUFUNC(op_80b0_3), 32944}, /* OR */
{ CPUFUNC(op_80b8_0), 32952}, /* OR */
{ CPUFUNC(op_80b9_0), 32953}, /* OR */
{ CPUFUNC(op_80ba_0), 32954}, /* OR */
{ CPUFUNC(op_80bb_3), 32955}, /* OR */
{ CPUFUNC(op_80bc_0), 32956}, /* OR */
{ CPUFUNC(op_80c0_0), 32960}, /* DIVU */
{ CPUFUNC(op_80d0_0), 32976}, /* DIVU */
{ CPUFUNC(op_80d8_0), 32984}, /* DIVU */
{ CPUFUNC(op_80e0_0), 32992}, /* DIVU */
{ CPUFUNC(op_80e8_0), 33000}, /* DIVU */
{ CPUFUNC(op_80f0_3), 33008}, /* DIVU */
{ CPUFUNC(op_80f8_0), 33016}, /* DIVU */
{ CPUFUNC(op_80f9_0), 33017}, /* DIVU */
{ CPUFUNC(op_80fa_0), 33018}, /* DIVU */
{ CPUFUNC(op_80fb_3), 33019}, /* DIVU */
{ CPUFUNC(op_80fc_0), 33020}, /* DIVU */
{ CPUFUNC(op_8100_0), 33024}, /* SBCD */
{ CPUFUNC(op_8108_0), 33032}, /* SBCD */
{ CPUFUNC(op_8110_0), 33040}, /* OR */
{ CPUFUNC(op_8118_0), 33048}, /* OR */
{ CPUFUNC(op_8120_0), 33056}, /* OR */
{ CPUFUNC(op_8128_0), 33064}, /* OR */
{ CPUFUNC(op_8130_3), 33072}, /* OR */
{ CPUFUNC(op_8138_0), 33080}, /* OR */
{ CPUFUNC(op_8139_0), 33081}, /* OR */
{ CPUFUNC(op_8150_0), 33104}, /* OR */
{ CPUFUNC(op_8158_0), 33112}, /* OR */
{ CPUFUNC(op_8160_0), 33120}, /* OR */
{ CPUFUNC(op_8168_0), 33128}, /* OR */
{ CPUFUNC(op_8170_3), 33136}, /* OR */
{ CPUFUNC(op_8178_0), 33144}, /* OR */
{ CPUFUNC(op_8179_0), 33145}, /* OR */
{ CPUFUNC(op_8190_0), 33168}, /* OR */
{ CPUFUNC(op_8198_0), 33176}, /* OR */
{ CPUFUNC(op_81a0_0), 33184}, /* OR */
{ CPUFUNC(op_81a8_0), 33192}, /* OR */
{ CPUFUNC(op_81b0_3), 33200}, /* OR */
{ CPUFUNC(op_81b8_0), 33208}, /* OR */
{ CPUFUNC(op_81b9_0), 33209}, /* OR */
{ CPUFUNC(op_81c0_0), 33216}, /* DIVS */
{ CPUFUNC(op_81d0_0), 33232}, /* DIVS */
{ CPUFUNC(op_81d8_0), 33240}, /* DIVS */
{ CPUFUNC(op_81e0_0), 33248}, /* DIVS */
{ CPUFUNC(op_81e8_0), 33256}, /* DIVS */
{ CPUFUNC(op_81f0_3), 33264}, /* DIVS */
{ CPUFUNC(op_81f8_0), 33272}, /* DIVS */
{ CPUFUNC(op_81f9_0), 33273}, /* DIVS */
{ CPUFUNC(op_81fa_0), 33274}, /* DIVS */
{ CPUFUNC(op_81fb_3), 33275}, /* DIVS */
{ CPUFUNC(op_81fc_0), 33276}, /* DIVS */
{ CPUFUNC(op_9000_0), 36864}, /* SUB */
{ CPUFUNC(op_9010_0), 36880}, /* SUB */
{ CPUFUNC(op_9018_0), 36888}, /* SUB */
{ CPUFUNC(op_9020_0), 36896}, /* SUB */
{ CPUFUNC(op_9028_0), 36904}, /* SUB */
{ CPUFUNC(op_9030_3), 36912}, /* SUB */
{ CPUFUNC(op_9038_0), 36920}, /* SUB */
{ CPUFUNC(op_9039_0), 36921}, /* SUB */
{ CPUFUNC(op_903a_0), 36922}, /* SUB */
{ CPUFUNC(op_903b_3), 36923}, /* SUB */
{ CPUFUNC(op_903c_0), 36924}, /* SUB */
{ CPUFUNC(op_9040_0), 36928}, /* SUB */
{ CPUFUNC(op_9048_0), 36936}, /* SUB */
{ CPUFUNC(op_9050_0), 36944}, /* SUB */
{ CPUFUNC(op_9058_0), 36952}, /* SUB */
{ CPUFUNC(op_9060_0), 36960}, /* SUB */
{ CPUFUNC(op_9068_0), 36968}, /* SUB */
{ CPUFUNC(op_9070_3), 36976}, /* SUB */
{ CPUFUNC(op_9078_0), 36984}, /* SUB */
{ CPUFUNC(op_9079_0), 36985}, /* SUB */
{ CPUFUNC(op_907a_0), 36986}, /* SUB */
{ CPUFUNC(op_907b_3), 36987}, /* SUB */
{ CPUFUNC(op_907c_0), 36988}, /* SUB */
{ CPUFUNC(op_9080_0), 36992}, /* SUB */
{ CPUFUNC(op_9088_0), 37000}, /* SUB */
{ CPUFUNC(op_9090_0), 37008}, /* SUB */
{ CPUFUNC(op_9098_0), 37016}, /* SUB */
{ CPUFUNC(op_90a0_0), 37024}, /* SUB */
{ CPUFUNC(op_90a8_0), 37032}, /* SUB */
{ CPUFUNC(op_90b0_3), 37040}, /* SUB */
{ CPUFUNC(op_90b8_0), 37048}, /* SUB */
{ CPUFUNC(op_90b9_0), 37049}, /* SUB */
{ CPUFUNC(op_90ba_0), 37050}, /* SUB */
{ CPUFUNC(op_90bb_3), 37051}, /* SUB */
{ CPUFUNC(op_90bc_0), 37052}, /* SUB */
{ CPUFUNC(op_90c0_0), 37056}, /* SUBA */
{ CPUFUNC(op_90c8_0), 37064}, /* SUBA */
{ CPUFUNC(op_90d0_0), 37072}, /* SUBA */
{ CPUFUNC(op_90d8_0), 37080}, /* SUBA */
{ CPUFUNC(op_90e0_0), 37088}, /* SUBA */
{ CPUFUNC(op_90e8_0), 37096}, /* SUBA */
{ CPUFUNC(op_90f0_3), 37104}, /* SUBA */
{ CPUFUNC(op_90f8_0), 37112}, /* SUBA */
{ CPUFUNC(op_90f9_0), 37113}, /* SUBA */
{ CPUFUNC(op_90fa_0), 37114}, /* SUBA */
{ CPUFUNC(op_90fb_3), 37115}, /* SUBA */
{ CPUFUNC(op_90fc_0), 37116}, /* SUBA */
{ CPUFUNC(op_9100_0), 37120}, /* SUBX */
{ CPUFUNC(op_9108_0), 37128}, /* SUBX */
{ CPUFUNC(op_9110_0), 37136}, /* SUB */
{ CPUFUNC(op_9118_0), 37144}, /* SUB */
{ CPUFUNC(op_9120_0), 37152}, /* SUB */
{ CPUFUNC(op_9128_0), 37160}, /* SUB */
{ CPUFUNC(op_9130_3), 37168}, /* SUB */
{ CPUFUNC(op_9138_0), 37176}, /* SUB */
{ CPUFUNC(op_9139_0), 37177}, /* SUB */
{ CPUFUNC(op_9140_0), 37184}, /* SUBX */
{ CPUFUNC(op_9148_0), 37192}, /* SUBX */
{ CPUFUNC(op_9150_0), 37200}, /* SUB */
{ CPUFUNC(op_9158_0), 37208}, /* SUB */
{ CPUFUNC(op_9160_0), 37216}, /* SUB */
{ CPUFUNC(op_9168_0), 37224}, /* SUB */
{ CPUFUNC(op_9170_3), 37232}, /* SUB */
{ CPUFUNC(op_9178_0), 37240}, /* SUB */
{ CPUFUNC(op_9179_0), 37241}, /* SUB */
{ CPUFUNC(op_9180_0), 37248}, /* SUBX */
{ CPUFUNC(op_9188_0), 37256}, /* SUBX */
{ CPUFUNC(op_9190_0), 37264}, /* SUB */
{ CPUFUNC(op_9198_0), 37272}, /* SUB */
{ CPUFUNC(op_91a0_0), 37280}, /* SUB */
{ CPUFUNC(op_91a8_0), 37288}, /* SUB */
{ CPUFUNC(op_91b0_3), 37296}, /* SUB */
{ CPUFUNC(op_91b8_0), 37304}, /* SUB */
{ CPUFUNC(op_91b9_0), 37305}, /* SUB */
{ CPUFUNC(op_91c0_0), 37312}, /* SUBA */
{ CPUFUNC(op_91c8_0), 37320}, /* SUBA */
{ CPUFUNC(op_91d0_0), 37328}, /* SUBA */
{ CPUFUNC(op_91d8_0), 37336}, /* SUBA */
{ CPUFUNC(op_91e0_0), 37344}, /* SUBA */
{ CPUFUNC(op_91e8_0), 37352}, /* SUBA */
{ CPUFUNC(op_91f0_3), 37360}, /* SUBA */
{ CPUFUNC(op_91f8_0), 37368}, /* SUBA */
{ CPUFUNC(op_91f9_0), 37369}, /* SUBA */
{ CPUFUNC(op_91fa_0), 37370}, /* SUBA */
{ CPUFUNC(op_91fb_3), 37371}, /* SUBA */
{ CPUFUNC(op_91fc_0), 37372}, /* SUBA */
{ CPUFUNC(op_b000_0), 45056}, /* CMP */
{ CPUFUNC(op_b010_0), 45072}, /* CMP */
{ CPUFUNC(op_b018_0), 45080}, /* CMP */
{ CPUFUNC(op_b020_0), 45088}, /* CMP */
{ CPUFUNC(op_b028_0), 45096}, /* CMP */
{ CPUFUNC(op_b030_3), 45104}, /* CMP */
{ CPUFUNC(op_b038_0), 45112}, /* CMP */
{ CPUFUNC(op_b039_0), 45113}, /* CMP */
{ CPUFUNC(op_b03a_0), 45114}, /* CMP */
{ CPUFUNC(op_b03b_3), 45115}, /* CMP */
{ CPUFUNC(op_b03c_0), 45116}, /* CMP */
{ CPUFUNC(op_b040_0), 45120}, /* CMP */
{ CPUFUNC(op_b048_0), 45128}, /* CMP */
{ CPUFUNC(op_b050_0), 45136}, /* CMP */
{ CPUFUNC(op_b058_0), 45144}, /* CMP */
{ CPUFUNC(op_b060_0), 45152}, /* CMP */
{ CPUFUNC(op_b068_0), 45160}, /* CMP */
{ CPUFUNC(op_b070_3), 45168}, /* CMP */
{ CPUFUNC(op_b078_0), 45176}, /* CMP */
{ CPUFUNC(op_b079_0), 45177}, /* CMP */
{ CPUFUNC(op_b07a_0), 45178}, /* CMP */
{ CPUFUNC(op_b07b_3), 45179}, /* CMP */
{ CPUFUNC(op_b07c_0), 45180}, /* CMP */
{ CPUFUNC(op_b080_0), 45184}, /* CMP */
{ CPUFUNC(op_b088_0), 45192}, /* CMP */
{ CPUFUNC(op_b090_0), 45200}, /* CMP */
{ CPUFUNC(op_b098_0), 45208}, /* CMP */
{ CPUFUNC(op_b0a0_0), 45216}, /* CMP */
{ CPUFUNC(op_b0a8_0), 45224}, /* CMP */
{ CPUFUNC(op_b0b0_3), 45232}, /* CMP */
{ CPUFUNC(op_b0b8_0), 45240}, /* CMP */
{ CPUFUNC(op_b0b9_0), 45241}, /* CMP */
{ CPUFUNC(op_b0ba_0), 45242}, /* CMP */
{ CPUFUNC(op_b0bb_3), 45243}, /* CMP */
{ CPUFUNC(op_b0bc_0), 45244}, /* CMP */
{ CPUFUNC(op_b0c0_0), 45248}, /* CMPA */
{ CPUFUNC(op_b0c8_0), 45256}, /* CMPA */
{ CPUFUNC(op_b0d0_0), 45264}, /* CMPA */
{ CPUFUNC(op_b0d8_0), 45272}, /* CMPA */
{ CPUFUNC(op_b0e0_0), 45280}, /* CMPA */
{ CPUFUNC(op_b0e8_0), 45288}, /* CMPA */
{ CPUFUNC(op_b0f0_3), 45296}, /* CMPA */
{ CPUFUNC(op_b0f8_0), 45304}, /* CMPA */
{ CPUFUNC(op_b0f9_0), 45305}, /* CMPA */
{ CPUFUNC(op_b0fa_0), 45306}, /* CMPA */
{ CPUFUNC(op_b0fb_3), 45307}, /* CMPA */
{ CPUFUNC(op_b0fc_0), 45308}, /* CMPA */
{ CPUFUNC(op_b100_0), 45312}, /* EOR */
{ CPUFUNC(op_b108_0), 45320}, /* CMPM */
{ CPUFUNC(op_b110_0), 45328}, /* EOR */
{ CPUFUNC(op_b118_0), 45336}, /* EOR */
{ CPUFUNC(op_b120_0), 45344}, /* EOR */
{ CPUFUNC(op_b128_0), 45352}, /* EOR */
{ CPUFUNC(op_b130_3), 45360}, /* EOR */
{ CPUFUNC(op_b138_0), 45368}, /* EOR */
{ CPUFUNC(op_b139_0), 45369}, /* EOR */
{ CPUFUNC(op_b140_0), 45376}, /* EOR */
{ CPUFUNC(op_b148_0), 45384}, /* CMPM */
{ CPUFUNC(op_b150_0), 45392}, /* EOR */
{ CPUFUNC(op_b158_0), 45400}, /* EOR */
{ CPUFUNC(op_b160_0), 45408}, /* EOR */
{ CPUFUNC(op_b168_0), 45416}, /* EOR */
{ CPUFUNC(op_b170_3), 45424}, /* EOR */
{ CPUFUNC(op_b178_0), 45432}, /* EOR */
{ CPUFUNC(op_b179_0), 45433}, /* EOR */
{ CPUFUNC(op_b180_0), 45440}, /* EOR */
{ CPUFUNC(op_b188_0), 45448}, /* CMPM */
{ CPUFUNC(op_b190_0), 45456}, /* EOR */
{ CPUFUNC(op_b198_0), 45464}, /* EOR */
{ CPUFUNC(op_b1a0_0), 45472}, /* EOR */
{ CPUFUNC(op_b1a8_0), 45480}, /* EOR */
{ CPUFUNC(op_b1b0_3), 45488}, /* EOR */
{ CPUFUNC(op_b1b8_0), 45496}, /* EOR */
{ CPUFUNC(op_b1b9_0), 45497}, /* EOR */
{ CPUFUNC(op_b1c0_0), 45504}, /* CMPA */
{ CPUFUNC(op_b1c8_0), 45512}, /* CMPA */
{ CPUFUNC(op_b1d0_0), 45520}, /* CMPA */
{ CPUFUNC(op_b1d8_0), 45528}, /* CMPA */
{ CPUFUNC(op_b1e0_0), 45536}, /* CMPA */
{ CPUFUNC(op_b1e8_0), 45544}, /* CMPA */
{ CPUFUNC(op_b1f0_3), 45552}, /* CMPA */
{ CPUFUNC(op_b1f8_0), 45560}, /* CMPA */
{ CPUFUNC(op_b1f9_0), 45561}, /* CMPA */
{ CPUFUNC(op_b1fa_0), 45562}, /* CMPA */
{ CPUFUNC(op_b1fb_3), 45563}, /* CMPA */
{ CPUFUNC(op_b1fc_0), 45564}, /* CMPA */
{ CPUFUNC(op_c000_0), 49152}, /* AND */
{ CPUFUNC(op_c010_0), 49168}, /* AND */
{ CPUFUNC(op_c018_0), 49176}, /* AND */
{ CPUFUNC(op_c020_0), 49184}, /* AND */
{ CPUFUNC(op_c028_0), 49192}, /* AND */
{ CPUFUNC(op_c030_3), 49200}, /* AND */
{ CPUFUNC(op_c038_0), 49208}, /* AND */
{ CPUFUNC(op_c039_0), 49209}, /* AND */
{ CPUFUNC(op_c03a_0), 49210}, /* AND */
{ CPUFUNC(op_c03b_3), 49211}, /* AND */
{ CPUFUNC(op_c03c_0), 49212}, /* AND */
{ CPUFUNC(op_c040_0), 49216}, /* AND */
{ CPUFUNC(op_c050_0), 49232}, /* AND */
{ CPUFUNC(op_c058_0), 49240}, /* AND */
{ CPUFUNC(op_c060_0), 49248}, /* AND */
{ CPUFUNC(op_c068_0), 49256}, /* AND */
{ CPUFUNC(op_c070_3), 49264}, /* AND */
{ CPUFUNC(op_c078_0), 49272}, /* AND */
{ CPUFUNC(op_c079_0), 49273}, /* AND */
{ CPUFUNC(op_c07a_0), 49274}, /* AND */
{ CPUFUNC(op_c07b_3), 49275}, /* AND */
{ CPUFUNC(op_c07c_0), 49276}, /* AND */
{ CPUFUNC(op_c080_0), 49280}, /* AND */
{ CPUFUNC(op_c090_0), 49296}, /* AND */
{ CPUFUNC(op_c098_0), 49304}, /* AND */
{ CPUFUNC(op_c0a0_0), 49312}, /* AND */
{ CPUFUNC(op_c0a8_0), 49320}, /* AND */
{ CPUFUNC(op_c0b0_3), 49328}, /* AND */
{ CPUFUNC(op_c0b8_0), 49336}, /* AND */
{ CPUFUNC(op_c0b9_0), 49337}, /* AND */
{ CPUFUNC(op_c0ba_0), 49338}, /* AND */
{ CPUFUNC(op_c0bb_3), 49339}, /* AND */
{ CPUFUNC(op_c0bc_0), 49340}, /* AND */
{ CPUFUNC(op_c0c0_0), 49344}, /* MULU */
{ CPUFUNC(op_c0d0_0), 49360}, /* MULU */
{ CPUFUNC(op_c0d8_0), 49368}, /* MULU */
{ CPUFUNC(op_c0e0_0), 49376}, /* MULU */
{ CPUFUNC(op_c0e8_0), 49384}, /* MULU */
{ CPUFUNC(op_c0f0_3), 49392}, /* MULU */
{ CPUFUNC(op_c0f8_0), 49400}, /* MULU */
{ CPUFUNC(op_c0f9_0), 49401}, /* MULU */
{ CPUFUNC(op_c0fa_0), 49402}, /* MULU */
{ CPUFUNC(op_c0fb_3), 49403}, /* MULU */
{ CPUFUNC(op_c0fc_0), 49404}, /* MULU */
{ CPUFUNC(op_c100_0), 49408}, /* ABCD */
{ CPUFUNC(op_c108_0), 49416}, /* ABCD */
{ CPUFUNC(op_c110_0), 49424}, /* AND */
{ CPUFUNC(op_c118_0), 49432}, /* AND */
{ CPUFUNC(op_c120_0), 49440}, /* AND */
{ CPUFUNC(op_c128_0), 49448}, /* AND */
{ CPUFUNC(op_c130_3), 49456}, /* AND */
{ CPUFUNC(op_c138_0), 49464}, /* AND */
{ CPUFUNC(op_c139_0), 49465}, /* AND */
{ CPUFUNC(op_c140_0), 49472}, /* EXG */
{ CPUFUNC(op_c148_0), 49480}, /* EXG */
{ CPUFUNC(op_c150_0), 49488}, /* AND */
{ CPUFUNC(op_c158_0), 49496}, /* AND */
{ CPUFUNC(op_c160_0), 49504}, /* AND */
{ CPUFUNC(op_c168_0), 49512}, /* AND */
{ CPUFUNC(op_c170_3), 49520}, /* AND */
{ CPUFUNC(op_c178_0), 49528}, /* AND */
{ CPUFUNC(op_c179_0), 49529}, /* AND */
{ CPUFUNC(op_c188_0), 49544}, /* EXG */
{ CPUFUNC(op_c190_0), 49552}, /* AND */
{ CPUFUNC(op_c198_0), 49560}, /* AND */
{ CPUFUNC(op_c1a0_0), 49568}, /* AND */
{ CPUFUNC(op_c1a8_0), 49576}, /* AND */
{ CPUFUNC(op_c1b0_3), 49584}, /* AND */
{ CPUFUNC(op_c1b8_0), 49592}, /* AND */
{ CPUFUNC(op_c1b9_0), 49593}, /* AND */
{ CPUFUNC(op_c1c0_0), 49600}, /* MULS */
{ CPUFUNC(op_c1d0_0), 49616}, /* MULS */
{ CPUFUNC(op_c1d8_0), 49624}, /* MULS */
{ CPUFUNC(op_c1e0_0), 49632}, /* MULS */
{ CPUFUNC(op_c1e8_0), 49640}, /* MULS */
{ CPUFUNC(op_c1f0_3), 49648}, /* MULS */
{ CPUFUNC(op_c1f8_0), 49656}, /* MULS */
{ CPUFUNC(op_c1f9_0), 49657}, /* MULS */
{ CPUFUNC(op_c1fa_0), 49658}, /* MULS */
{ CPUFUNC(op_c1fb_3), 49659}, /* MULS */
{ CPUFUNC(op_c1fc_0), 49660}, /* MULS */
{ CPUFUNC(op_d000_0), 53248}, /* ADD */
{ CPUFUNC(op_d010_0), 53264}, /* ADD */
{ CPUFUNC(op_d018_0), 53272}, /* ADD */
{ CPUFUNC(op_d020_0), 53280}, /* ADD */
{ CPUFUNC(op_d028_0), 53288}, /* ADD */
{ CPUFUNC(op_d030_3), 53296}, /* ADD */
{ CPUFUNC(op_d038_0), 53304}, /* ADD */
{ CPUFUNC(op_d039_0), 53305}, /* ADD */
{ CPUFUNC(op_d03a_0), 53306}, /* ADD */
{ CPUFUNC(op_d03b_3), 53307}, /* ADD */
{ CPUFUNC(op_d03c_0), 53308}, /* ADD */
{ CPUFUNC(op_d040_0), 53312}, /* ADD */
{ CPUFUNC(op_d048_0), 53320}, /* ADD */
{ CPUFUNC(op_d050_0), 53328}, /* ADD */
{ CPUFUNC(op_d058_0), 53336}, /* ADD */
{ CPUFUNC(op_d060_0), 53344}, /* ADD */
{ CPUFUNC(op_d068_0), 53352}, /* ADD */
{ CPUFUNC(op_d070_3), 53360}, /* ADD */
{ CPUFUNC(op_d078_0), 53368}, /* ADD */
{ CPUFUNC(op_d079_0), 53369}, /* ADD */
{ CPUFUNC(op_d07a_0), 53370}, /* ADD */
{ CPUFUNC(op_d07b_3), 53371}, /* ADD */
{ CPUFUNC(op_d07c_0), 53372}, /* ADD */
{ CPUFUNC(op_d080_0), 53376}, /* ADD */
{ CPUFUNC(op_d088_0), 53384}, /* ADD */
{ CPUFUNC(op_d090_0), 53392}, /* ADD */
{ CPUFUNC(op_d098_0), 53400}, /* ADD */
{ CPUFUNC(op_d0a0_0), 53408}, /* ADD */
{ CPUFUNC(op_d0a8_0), 53416}, /* ADD */
{ CPUFUNC(op_d0b0_3), 53424}, /* ADD */
{ CPUFUNC(op_d0b8_0), 53432}, /* ADD */
{ CPUFUNC(op_d0b9_0), 53433}, /* ADD */
{ CPUFUNC(op_d0ba_0), 53434}, /* ADD */
{ CPUFUNC(op_d0bb_3), 53435}, /* ADD */
{ CPUFUNC(op_d0bc_0), 53436}, /* ADD */
{ CPUFUNC(op_d0c0_0), 53440}, /* ADDA */
{ CPUFUNC(op_d0c8_0), 53448}, /* ADDA */
{ CPUFUNC(op_d0d0_0), 53456}, /* ADDA */
{ CPUFUNC(op_d0d8_0), 53464}, /* ADDA */
{ CPUFUNC(op_d0e0_0), 53472}, /* ADDA */
{ CPUFUNC(op_d0e8_0), 53480}, /* ADDA */
{ CPUFUNC(op_d0f0_3), 53488}, /* ADDA */
{ CPUFUNC(op_d0f8_0), 53496}, /* ADDA */
{ CPUFUNC(op_d0f9_0), 53497}, /* ADDA */
{ CPUFUNC(op_d0fa_0), 53498}, /* ADDA */
{ CPUFUNC(op_d0fb_3), 53499}, /* ADDA */
{ CPUFUNC(op_d0fc_0), 53500}, /* ADDA */
{ CPUFUNC(op_d100_0), 53504}, /* ADDX */
{ CPUFUNC(op_d108_0), 53512}, /* ADDX */
{ CPUFUNC(op_d110_0), 53520}, /* ADD */
{ CPUFUNC(op_d118_0), 53528}, /* ADD */
{ CPUFUNC(op_d120_0), 53536}, /* ADD */
{ CPUFUNC(op_d128_0), 53544}, /* ADD */
{ CPUFUNC(op_d130_3), 53552}, /* ADD */
{ CPUFUNC(op_d138_0), 53560}, /* ADD */
{ CPUFUNC(op_d139_0), 53561}, /* ADD */
{ CPUFUNC(op_d140_0), 53568}, /* ADDX */
{ CPUFUNC(op_d148_0), 53576}, /* ADDX */
{ CPUFUNC(op_d150_0), 53584}, /* ADD */
{ CPUFUNC(op_d158_0), 53592}, /* ADD */
{ CPUFUNC(op_d160_0), 53600}, /* ADD */
{ CPUFUNC(op_d168_0), 53608}, /* ADD */
{ CPUFUNC(op_d170_3), 53616}, /* ADD */
{ CPUFUNC(op_d178_0), 53624}, /* ADD */
{ CPUFUNC(op_d179_0), 53625}, /* ADD */
{ CPUFUNC(op_d180_0), 53632}, /* ADDX */
{ CPUFUNC(op_d188_0), 53640}, /* ADDX */
{ CPUFUNC(op_d190_0), 53648}, /* ADD */
{ CPUFUNC(op_d198_0), 53656}, /* ADD */
{ CPUFUNC(op_d1a0_0), 53664}, /* ADD */
{ CPUFUNC(op_d1a8_0), 53672}, /* ADD */
{ CPUFUNC(op_d1b0_3), 53680}, /* ADD */
{ CPUFUNC(op_d1b8_0), 53688}, /* ADD */
{ CPUFUNC(op_d1b9_0), 53689}, /* ADD */
{ CPUFUNC(op_d1c0_0), 53696}, /* ADDA */
{ CPUFUNC(op_d1c8_0), 53704}, /* ADDA */
{ CPUFUNC(op_d1d0_0), 53712}, /* ADDA */
{ CPUFUNC(op_d1d8_0), 53720}, /* ADDA */
{ CPUFUNC(op_d1e0_0), 53728}, /* ADDA */
{ CPUFUNC(op_d1e8_0), 53736}, /* ADDA */
{ CPUFUNC(op_d1f0_3), 53744}, /* ADDA */
{ CPUFUNC(op_d1f8_0), 53752}, /* ADDA */
{ CPUFUNC(op_d1f9_0), 53753}, /* ADDA */
{ CPUFUNC(op_d1fa_0), 53754}, /* ADDA */
{ CPUFUNC(op_d1fb_3), 53755}, /* ADDA */
{ CPUFUNC(op_d1fc_0), 53756}, /* ADDA */
{ CPUFUNC(op_e000_0), 57344}, /* ASR */
{ CPUFUNC(op_e008_0), 57352}, /* LSR */
{ CPUFUNC(op_e010_0), 57360}, /* ROXR */
{ CPUFUNC(op_e018_0), 57368}, /* ROR */
{ CPUFUNC(op_e020_0), 57376}, /* ASR */
{ CPUFUNC(op_e028_0), 57384}, /* LSR */
{ CPUFUNC(op_e030_0), 57392}, /* ROXR */
{ CPUFUNC(op_e038_0), 57400}, /* ROR */
{ CPUFUNC(op_e040_0), 57408}, /* ASR */
{ CPUFUNC(op_e048_0), 57416}, /* LSR */
{ CPUFUNC(op_e050_0), 57424}, /* ROXR */
{ CPUFUNC(op_e058_0), 57432}, /* ROR */
{ CPUFUNC(op_e060_0), 57440}, /* ASR */
{ CPUFUNC(op_e068_0), 57448}, /* LSR */
{ CPUFUNC(op_e070_0), 57456}, /* ROXR */
{ CPUFUNC(op_e078_0), 57464}, /* ROR */
{ CPUFUNC(op_e080_0), 57472}, /* ASR */
{ CPUFUNC(op_e088_0), 57480}, /* LSR */
{ CPUFUNC(op_e090_0), 57488}, /* ROXR */
{ CPUFUNC(op_e098_0), 57496}, /* ROR */
{ CPUFUNC(op_e0a0_0), 57504}, /* ASR */
{ CPUFUNC(op_e0a8_0), 57512}, /* LSR */
{ CPUFUNC(op_e0b0_0), 57520}, /* ROXR */
{ CPUFUNC(op_e0b8_0), 57528}, /* ROR */
{ CPUFUNC(op_e0d0_0), 57552}, /* ASRW */
{ CPUFUNC(op_e0d8_0), 57560}, /* ASRW */
{ CPUFUNC(op_e0e0_0), 57568}, /* ASRW */
{ CPUFUNC(op_e0e8_0), 57576}, /* ASRW */
{ CPUFUNC(op_e0f0_3), 57584}, /* ASRW */
{ CPUFUNC(op_e0f8_0), 57592}, /* ASRW */
{ CPUFUNC(op_e0f9_0), 57593}, /* ASRW */
{ CPUFUNC(op_e100_0), 57600}, /* ASL */
{ CPUFUNC(op_e108_0), 57608}, /* LSL */
{ CPUFUNC(op_e110_0), 57616}, /* ROXL */
{ CPUFUNC(op_e118_0), 57624}, /* ROL */
{ CPUFUNC(op_e120_0), 57632}, /* ASL */
{ CPUFUNC(op_e128_0), 57640}, /* LSL */
{ CPUFUNC(op_e130_0), 57648}, /* ROXL */
{ CPUFUNC(op_e138_0), 57656}, /* ROL */
{ CPUFUNC(op_e140_0), 57664}, /* ASL */
{ CPUFUNC(op_e148_0), 57672}, /* LSL */
{ CPUFUNC(op_e150_0), 57680}, /* ROXL */
{ CPUFUNC(op_e158_0), 57688}, /* ROL */
{ CPUFUNC(op_e160_0), 57696}, /* ASL */
{ CPUFUNC(op_e168_0), 57704}, /* LSL */
{ CPUFUNC(op_e170_0), 57712}, /* ROXL */
{ CPUFUNC(op_e178_0), 57720}, /* ROL */
{ CPUFUNC(op_e180_0), 57728}, /* ASL */
{ CPUFUNC(op_e188_0), 57736}, /* LSL */
{ CPUFUNC(op_e190_0), 57744}, /* ROXL */
{ CPUFUNC(op_e198_0), 57752}, /* ROL */
{ CPUFUNC(op_e1a0_0), 57760}, /* ASL */
{ CPUFUNC(op_e1a8_0), 57768}, /* LSL */
{ CPUFUNC(op_e1b0_0), 57776}, /* ROXL */
{ CPUFUNC(op_e1b8_0), 57784}, /* ROL */
{ CPUFUNC(op_e1d0_0), 57808}, /* ASLW */
{ CPUFUNC(op_e1d8_0), 57816}, /* ASLW */
{ CPUFUNC(op_e1e0_0), 57824}, /* ASLW */
{ CPUFUNC(op_e1e8_0), 57832}, /* ASLW */
{ CPUFUNC(op_e1f0_3), 57840}, /* ASLW */
{ CPUFUNC(op_e1f8_0), 57848}, /* ASLW */
{ CPUFUNC(op_e1f9_0), 57849}, /* ASLW */
{ CPUFUNC(op_e2d0_0), 58064}, /* LSRW */
{ CPUFUNC(op_e2d8_0), 58072}, /* LSRW */
{ CPUFUNC(op_e2e0_0), 58080}, /* LSRW */
{ CPUFUNC(op_e2e8_0), 58088}, /* LSRW */
{ CPUFUNC(op_e2f0_3), 58096}, /* LSRW */
{ CPUFUNC(op_e2f8_0), 58104}, /* LSRW */
{ CPUFUNC(op_e2f9_0), 58105}, /* LSRW */
{ CPUFUNC(op_e3d0_0), 58320}, /* LSLW */
{ CPUFUNC(op_e3d8_0), 58328}, /* LSLW */
{ CPUFUNC(op_e3e0_0), 58336}, /* LSLW */
{ CPUFUNC(op_e3e8_0), 58344}, /* LSLW */
{ CPUFUNC(op_e3f0_3), 58352}, /* LSLW */
{ CPUFUNC(op_e3f8_0), 58360}, /* LSLW */
{ CPUFUNC(op_e3f9_0), 58361}, /* LSLW */
{ CPUFUNC(op_e4d0_0), 58576}, /* ROXRW */
{ CPUFUNC(op_e4d8_0), 58584}, /* ROXRW */
{ CPUFUNC(op_e4e0_0), 58592}, /* ROXRW */
{ CPUFUNC(op_e4e8_0), 58600}, /* ROXRW */
{ CPUFUNC(op_e4f0_3), 58608}, /* ROXRW */
{ CPUFUNC(op_e4f8_0), 58616}, /* ROXRW */
{ CPUFUNC(op_e4f9_0), 58617}, /* ROXRW */
{ CPUFUNC(op_e5d0_0), 58832}, /* ROXLW */
{ CPUFUNC(op_e5d8_0), 58840}, /* ROXLW */
{ CPUFUNC(op_e5e0_0), 58848}, /* ROXLW */
{ CPUFUNC(op_e5e8_0), 58856}, /* ROXLW */
{ CPUFUNC(op_e5f0_3), 58864}, /* ROXLW */
{ CPUFUNC(op_e5f8_0), 58872}, /* ROXLW */
{ CPUFUNC(op_e5f9_0), 58873}, /* ROXLW */
{ CPUFUNC(op_e6d0_0), 59088}, /* RORW */
{ CPUFUNC(op_e6d8_0), 59096}, /* RORW */
{ CPUFUNC(op_e6e0_0), 59104}, /* RORW */
{ CPUFUNC(op_e6e8_0), 59112}, /* RORW */
{ CPUFUNC(op_e6f0_3), 59120}, /* RORW */
{ CPUFUNC(op_e6f8_0), 59128}, /* RORW */
{ CPUFUNC(op_e6f9_0), 59129}, /* RORW */
{ CPUFUNC(op_e7d0_0), 59344}, /* ROLW */
{ CPUFUNC(op_e7d8_0), 59352}, /* ROLW */
{ CPUFUNC(op_e7e0_0), 59360}, /* ROLW */
{ CPUFUNC(op_e7e8_0), 59368}, /* ROLW */
{ CPUFUNC(op_e7f0_3), 59376}, /* ROLW */
{ CPUFUNC(op_e7f8_0), 59384}, /* ROLW */
{ CPUFUNC(op_e7f9_0), 59385}, /* ROLW */
{ 0, 0 }};
#ifdef CPUEMU_5
const struct cputbl CPUFUNC(op_smalltbl_5)[] = {
{ CPUFUNC(op_0000_5), 0 }, /* OR */
{ CPUFUNC(op_0010_5), 16 }, /* OR */
{ CPUFUNC(op_0018_5), 24 }, /* OR */
{ CPUFUNC(op_0020_5), 32 }, /* OR */
{ CPUFUNC(op_0028_5), 40 }, /* OR */
{ CPUFUNC(op_0030_5), 48 }, /* OR */
{ CPUFUNC(op_0038_5), 56 }, /* OR */
{ CPUFUNC(op_0039_5), 57 }, /* OR */
{ CPUFUNC(op_003c_5), 60 }, /* ORSR */
{ CPUFUNC(op_0040_5), 64 }, /* OR */
{ CPUFUNC(op_0050_5), 80 }, /* OR */
{ CPUFUNC(op_0058_5), 88 }, /* OR */
{ CPUFUNC(op_0060_5), 96 }, /* OR */
{ CPUFUNC(op_0068_5), 104 }, /* OR */
{ CPUFUNC(op_0070_5), 112 }, /* OR */
{ CPUFUNC(op_0078_5), 120 }, /* OR */
{ CPUFUNC(op_0079_5), 121 }, /* OR */
{ CPUFUNC(op_007c_5), 124 }, /* ORSR */
{ CPUFUNC(op_0080_5), 128 }, /* OR */
{ CPUFUNC(op_0090_5), 144 }, /* OR */
{ CPUFUNC(op_0098_5), 152 }, /* OR */
{ CPUFUNC(op_00a0_5), 160 }, /* OR */
{ CPUFUNC(op_00a8_5), 168 }, /* OR */
{ CPUFUNC(op_00b0_5), 176 }, /* OR */
{ CPUFUNC(op_00b8_5), 184 }, /* OR */
{ CPUFUNC(op_00b9_5), 185 }, /* OR */
{ CPUFUNC(op_0100_5), 256 }, /* BTST */
{ CPUFUNC(op_0108_5), 264 }, /* MVPMR */
{ CPUFUNC(op_0110_5), 272 }, /* BTST */
{ CPUFUNC(op_0118_5), 280 }, /* BTST */
{ CPUFUNC(op_0120_5), 288 }, /* BTST */
{ CPUFUNC(op_0128_5), 296 }, /* BTST */
{ CPUFUNC(op_0130_5), 304 }, /* BTST */
{ CPUFUNC(op_0138_5), 312 }, /* BTST */
{ CPUFUNC(op_0139_5), 313 }, /* BTST */
{ CPUFUNC(op_013a_5), 314 }, /* BTST */
{ CPUFUNC(op_013b_5), 315 }, /* BTST */
{ CPUFUNC(op_013c_5), 316 }, /* BTST */
{ CPUFUNC(op_0140_5), 320 }, /* BCHG */
{ CPUFUNC(op_0148_5), 328 }, /* MVPMR */
{ CPUFUNC(op_0150_5), 336 }, /* BCHG */
{ CPUFUNC(op_0158_5), 344 }, /* BCHG */
{ CPUFUNC(op_0160_5), 352 }, /* BCHG */
{ CPUFUNC(op_0168_5), 360 }, /* BCHG */
{ CPUFUNC(op_0170_5), 368 }, /* BCHG */
{ CPUFUNC(op_0178_5), 376 }, /* BCHG */
{ CPUFUNC(op_0179_5), 377 }, /* BCHG */
{ CPUFUNC(op_017a_5), 378 }, /* BCHG */
{ CPUFUNC(op_017b_5), 379 }, /* BCHG */
{ CPUFUNC(op_0180_5), 384 }, /* BCLR */
{ CPUFUNC(op_0188_5), 392 }, /* MVPRM */
{ CPUFUNC(op_0190_5), 400 }, /* BCLR */
{ CPUFUNC(op_0198_5), 408 }, /* BCLR */
{ CPUFUNC(op_01a0_5), 416 }, /* BCLR */
{ CPUFUNC(op_01a8_5), 424 }, /* BCLR */
{ CPUFUNC(op_01b0_5), 432 }, /* BCLR */
{ CPUFUNC(op_01b8_5), 440 }, /* BCLR */
{ CPUFUNC(op_01b9_5), 441 }, /* BCLR */
{ CPUFUNC(op_01ba_5), 442 }, /* BCLR */
{ CPUFUNC(op_01bb_5), 443 }, /* BCLR */
{ CPUFUNC(op_01c0_5), 448 }, /* BSET */
{ CPUFUNC(op_01c8_5), 456 }, /* MVPRM */
{ CPUFUNC(op_01d0_5), 464 }, /* BSET */
{ CPUFUNC(op_01d8_5), 472 }, /* BSET */
{ CPUFUNC(op_01e0_5), 480 }, /* BSET */
{ CPUFUNC(op_01e8_5), 488 }, /* BSET */
{ CPUFUNC(op_01f0_5), 496 }, /* BSET */
{ CPUFUNC(op_01f8_5), 504 }, /* BSET */
{ CPUFUNC(op_01f9_5), 505 }, /* BSET */
{ CPUFUNC(op_01fa_5), 506 }, /* BSET */
{ CPUFUNC(op_01fb_5), 507 }, /* BSET */
{ CPUFUNC(op_0200_5), 512 }, /* AND */
{ CPUFUNC(op_0210_5), 528 }, /* AND */
{ CPUFUNC(op_0218_5), 536 }, /* AND */
{ CPUFUNC(op_0220_5), 544 }, /* AND */
{ CPUFUNC(op_0228_5), 552 }, /* AND */
{ CPUFUNC(op_0230_5), 560 }, /* AND */
{ CPUFUNC(op_0238_5), 568 }, /* AND */
{ CPUFUNC(op_0239_5), 569 }, /* AND */
{ CPUFUNC(op_023c_5), 572 }, /* ANDSR */
{ CPUFUNC(op_0240_5), 576 }, /* AND */
{ CPUFUNC(op_0250_5), 592 }, /* AND */
{ CPUFUNC(op_0258_5), 600 }, /* AND */
{ CPUFUNC(op_0260_5), 608 }, /* AND */
{ CPUFUNC(op_0268_5), 616 }, /* AND */
{ CPUFUNC(op_0270_5), 624 }, /* AND */
{ CPUFUNC(op_0278_5), 632 }, /* AND */
{ CPUFUNC(op_0279_5), 633 }, /* AND */
{ CPUFUNC(op_027c_5), 636 }, /* ANDSR */
{ CPUFUNC(op_0280_5), 640 }, /* AND */
{ CPUFUNC(op_0290_5), 656 }, /* AND */
{ CPUFUNC(op_0298_5), 664 }, /* AND */
{ CPUFUNC(op_02a0_5), 672 }, /* AND */
{ CPUFUNC(op_02a8_5), 680 }, /* AND */
{ CPUFUNC(op_02b0_5), 688 }, /* AND */
{ CPUFUNC(op_02b8_5), 696 }, /* AND */
{ CPUFUNC(op_02b9_5), 697 }, /* AND */
{ CPUFUNC(op_0400_5), 1024 }, /* SUB */
{ CPUFUNC(op_0410_5), 1040 }, /* SUB */
{ CPUFUNC(op_0418_5), 1048 }, /* SUB */
{ CPUFUNC(op_0420_5), 1056 }, /* SUB */
{ CPUFUNC(op_0428_5), 1064 }, /* SUB */
{ CPUFUNC(op_0430_5), 1072 }, /* SUB */
{ CPUFUNC(op_0438_5), 1080 }, /* SUB */
{ CPUFUNC(op_0439_5), 1081 }, /* SUB */
{ CPUFUNC(op_0440_5), 1088 }, /* SUB */
{ CPUFUNC(op_0450_5), 1104 }, /* SUB */
{ CPUFUNC(op_0458_5), 1112 }, /* SUB */
{ CPUFUNC(op_0460_5), 1120 }, /* SUB */
{ CPUFUNC(op_0468_5), 1128 }, /* SUB */
{ CPUFUNC(op_0470_5), 1136 }, /* SUB */
{ CPUFUNC(op_0478_5), 1144 }, /* SUB */
{ CPUFUNC(op_0479_5), 1145 }, /* SUB */
{ CPUFUNC(op_0480_5), 1152 }, /* SUB */
{ CPUFUNC(op_0490_5), 1168 }, /* SUB */
{ CPUFUNC(op_0498_5), 1176 }, /* SUB */
{ CPUFUNC(op_04a0_5), 1184 }, /* SUB */
{ CPUFUNC(op_04a8_5), 1192 }, /* SUB */
{ CPUFUNC(op_04b0_5), 1200 }, /* SUB */
{ CPUFUNC(op_04b8_5), 1208 }, /* SUB */
{ CPUFUNC(op_04b9_5), 1209 }, /* SUB */
{ CPUFUNC(op_0600_5), 1536 }, /* ADD */
{ CPUFUNC(op_0610_5), 1552 }, /* ADD */
{ CPUFUNC(op_0618_5), 1560 }, /* ADD */
{ CPUFUNC(op_0620_5), 1568 }, /* ADD */
{ CPUFUNC(op_0628_5), 1576 }, /* ADD */
{ CPUFUNC(op_0630_5), 1584 }, /* ADD */
{ CPUFUNC(op_0638_5), 1592 }, /* ADD */
{ CPUFUNC(op_0639_5), 1593 }, /* ADD */
{ CPUFUNC(op_0640_5), 1600 }, /* ADD */
{ CPUFUNC(op_0650_5), 1616 }, /* ADD */
{ CPUFUNC(op_0658_5), 1624 }, /* ADD */
{ CPUFUNC(op_0660_5), 1632 }, /* ADD */
{ CPUFUNC(op_0668_5), 1640 }, /* ADD */
{ CPUFUNC(op_0670_5), 1648 }, /* ADD */
{ CPUFUNC(op_0678_5), 1656 }, /* ADD */
{ CPUFUNC(op_0679_5), 1657 }, /* ADD */
{ CPUFUNC(op_0680_5), 1664 }, /* ADD */
{ CPUFUNC(op_0690_5), 1680 }, /* ADD */
{ CPUFUNC(op_0698_5), 1688 }, /* ADD */
{ CPUFUNC(op_06a0_5), 1696 }, /* ADD */
{ CPUFUNC(op_06a8_5), 1704 }, /* ADD */
{ CPUFUNC(op_06b0_5), 1712 }, /* ADD */
{ CPUFUNC(op_06b8_5), 1720 }, /* ADD */
{ CPUFUNC(op_06b9_5), 1721 }, /* ADD */
{ CPUFUNC(op_0800_5), 2048 }, /* BTST */
{ CPUFUNC(op_0810_5), 2064 }, /* BTST */
{ CPUFUNC(op_0818_5), 2072 }, /* BTST */
{ CPUFUNC(op_0820_5), 2080 }, /* BTST */
{ CPUFUNC(op_0828_5), 2088 }, /* BTST */
{ CPUFUNC(op_0830_5), 2096 }, /* BTST */
{ CPUFUNC(op_0838_5), 2104 }, /* BTST */
{ CPUFUNC(op_0839_5), 2105 }, /* BTST */
{ CPUFUNC(op_083a_5), 2106 }, /* BTST */
{ CPUFUNC(op_083b_5), 2107 }, /* BTST */
{ CPUFUNC(op_083c_5), 2108 }, /* BTST */
{ CPUFUNC(op_0840_5), 2112 }, /* BCHG */
{ CPUFUNC(op_0850_5), 2128 }, /* BCHG */
{ CPUFUNC(op_0858_5), 2136 }, /* BCHG */
{ CPUFUNC(op_0860_5), 2144 }, /* BCHG */
{ CPUFUNC(op_0868_5), 2152 }, /* BCHG */
{ CPUFUNC(op_0870_5), 2160 }, /* BCHG */
{ CPUFUNC(op_0878_5), 2168 }, /* BCHG */
{ CPUFUNC(op_0879_5), 2169 }, /* BCHG */
{ CPUFUNC(op_087a_5), 2170 }, /* BCHG */
{ CPUFUNC(op_087b_5), 2171 }, /* BCHG */
{ CPUFUNC(op_0880_5), 2176 }, /* BCLR */
{ CPUFUNC(op_0890_5), 2192 }, /* BCLR */
{ CPUFUNC(op_0898_5), 2200 }, /* BCLR */
{ CPUFUNC(op_08a0_5), 2208 }, /* BCLR */
{ CPUFUNC(op_08a8_5), 2216 }, /* BCLR */
{ CPUFUNC(op_08b0_5), 2224 }, /* BCLR */
{ CPUFUNC(op_08b8_5), 2232 }, /* BCLR */
{ CPUFUNC(op_08b9_5), 2233 }, /* BCLR */
{ CPUFUNC(op_08ba_5), 2234 }, /* BCLR */
{ CPUFUNC(op_08bb_5), 2235 }, /* BCLR */
{ CPUFUNC(op_08c0_5), 2240 }, /* BSET */
{ CPUFUNC(op_08d0_5), 2256 }, /* BSET */
{ CPUFUNC(op_08d8_5), 2264 }, /* BSET */
{ CPUFUNC(op_08e0_5), 2272 }, /* BSET */
{ CPUFUNC(op_08e8_5), 2280 }, /* BSET */
{ CPUFUNC(op_08f0_5), 2288 }, /* BSET */
{ CPUFUNC(op_08f8_5), 2296 }, /* BSET */
{ CPUFUNC(op_08f9_5), 2297 }, /* BSET */
{ CPUFUNC(op_08fa_5), 2298 }, /* BSET */
{ CPUFUNC(op_08fb_5), 2299 }, /* BSET */
{ CPUFUNC(op_0a00_5), 2560 }, /* EOR */
{ CPUFUNC(op_0a10_5), 2576 }, /* EOR */
{ CPUFUNC(op_0a18_5), 2584 }, /* EOR */
{ CPUFUNC(op_0a20_5), 2592 }, /* EOR */
{ CPUFUNC(op_0a28_5), 2600 }, /* EOR */
{ CPUFUNC(op_0a30_5), 2608 }, /* EOR */
{ CPUFUNC(op_0a38_5), 2616 }, /* EOR */
{ CPUFUNC(op_0a39_5), 2617 }, /* EOR */
{ CPUFUNC(op_0a3c_5), 2620 }, /* EORSR */
{ CPUFUNC(op_0a40_5), 2624 }, /* EOR */
{ CPUFUNC(op_0a50_5), 2640 }, /* EOR */
{ CPUFUNC(op_0a58_5), 2648 }, /* EOR */
{ CPUFUNC(op_0a60_5), 2656 }, /* EOR */
{ CPUFUNC(op_0a68_5), 2664 }, /* EOR */
{ CPUFUNC(op_0a70_5), 2672 }, /* EOR */
{ CPUFUNC(op_0a78_5), 2680 }, /* EOR */
{ CPUFUNC(op_0a79_5), 2681 }, /* EOR */
{ CPUFUNC(op_0a7c_5), 2684 }, /* EORSR */
{ CPUFUNC(op_0a80_5), 2688 }, /* EOR */
{ CPUFUNC(op_0a90_5), 2704 }, /* EOR */
{ CPUFUNC(op_0a98_5), 2712 }, /* EOR */
{ CPUFUNC(op_0aa0_5), 2720 }, /* EOR */
{ CPUFUNC(op_0aa8_5), 2728 }, /* EOR */
{ CPUFUNC(op_0ab0_5), 2736 }, /* EOR */
{ CPUFUNC(op_0ab8_5), 2744 }, /* EOR */
{ CPUFUNC(op_0ab9_5), 2745 }, /* EOR */
{ CPUFUNC(op_0c00_5), 3072 }, /* CMP */
{ CPUFUNC(op_0c10_5), 3088 }, /* CMP */
{ CPUFUNC(op_0c18_5), 3096 }, /* CMP */
{ CPUFUNC(op_0c20_5), 3104 }, /* CMP */
{ CPUFUNC(op_0c28_5), 3112 }, /* CMP */
{ CPUFUNC(op_0c30_5), 3120 }, /* CMP */
{ CPUFUNC(op_0c38_5), 3128 }, /* CMP */
{ CPUFUNC(op_0c39_5), 3129 }, /* CMP */
{ CPUFUNC(op_0c40_5), 3136 }, /* CMP */
{ CPUFUNC(op_0c50_5), 3152 }, /* CMP */
{ CPUFUNC(op_0c58_5), 3160 }, /* CMP */
{ CPUFUNC(op_0c60_5), 3168 }, /* CMP */
{ CPUFUNC(op_0c68_5), 3176 }, /* CMP */
{ CPUFUNC(op_0c70_5), 3184 }, /* CMP */
{ CPUFUNC(op_0c78_5), 3192 }, /* CMP */
{ CPUFUNC(op_0c79_5), 3193 }, /* CMP */
{ CPUFUNC(op_0c80_5), 3200 }, /* CMP */
{ CPUFUNC(op_0c90_5), 3216 }, /* CMP */
{ CPUFUNC(op_0c98_5), 3224 }, /* CMP */
{ CPUFUNC(op_0ca0_5), 3232 }, /* CMP */
{ CPUFUNC(op_0ca8_5), 3240 }, /* CMP */
{ CPUFUNC(op_0cb0_5), 3248 }, /* CMP */
{ CPUFUNC(op_0cb8_5), 3256 }, /* CMP */
{ CPUFUNC(op_0cb9_5), 3257 }, /* CMP */
{ CPUFUNC(op_1000_5), 4096 }, /* MOVE */
{ CPUFUNC(op_1010_5), 4112 }, /* MOVE */
{ CPUFUNC(op_1018_5), 4120 }, /* MOVE */
{ CPUFUNC(op_1020_5), 4128 }, /* MOVE */
{ CPUFUNC(op_1028_5), 4136 }, /* MOVE */
{ CPUFUNC(op_1030_5), 4144 }, /* MOVE */
{ CPUFUNC(op_1038_5), 4152 }, /* MOVE */
{ CPUFUNC(op_1039_5), 4153 }, /* MOVE */
{ CPUFUNC(op_103a_5), 4154 }, /* MOVE */
{ CPUFUNC(op_103b_5), 4155 }, /* MOVE */
{ CPUFUNC(op_103c_5), 4156 }, /* MOVE */
{ CPUFUNC(op_1080_5), 4224 }, /* MOVE */
{ CPUFUNC(op_1090_5), 4240 }, /* MOVE */
{ CPUFUNC(op_1098_5), 4248 }, /* MOVE */
{ CPUFUNC(op_10a0_5), 4256 }, /* MOVE */
{ CPUFUNC(op_10a8_5), 4264 }, /* MOVE */
{ CPUFUNC(op_10b0_5), 4272 }, /* MOVE */
{ CPUFUNC(op_10b8_5), 4280 }, /* MOVE */
{ CPUFUNC(op_10b9_5), 4281 }, /* MOVE */
{ CPUFUNC(op_10ba_5), 4282 }, /* MOVE */
{ CPUFUNC(op_10bb_5), 4283 }, /* MOVE */
{ CPUFUNC(op_10bc_5), 4284 }, /* MOVE */
{ CPUFUNC(op_10c0_5), 4288 }, /* MOVE */
{ CPUFUNC(op_10d0_5), 4304 }, /* MOVE */
{ CPUFUNC(op_10d8_5), 4312 }, /* MOVE */
{ CPUFUNC(op_10e0_5), 4320 }, /* MOVE */
{ CPUFUNC(op_10e8_5), 4328 }, /* MOVE */
{ CPUFUNC(op_10f0_5), 4336 }, /* MOVE */
{ CPUFUNC(op_10f8_5), 4344 }, /* MOVE */
{ CPUFUNC(op_10f9_5), 4345 }, /* MOVE */
{ CPUFUNC(op_10fa_5), 4346 }, /* MOVE */
{ CPUFUNC(op_10fb_5), 4347 }, /* MOVE */
{ CPUFUNC(op_10fc_5), 4348 }, /* MOVE */
{ CPUFUNC(op_1100_5), 4352 }, /* MOVE */
{ CPUFUNC(op_1110_5), 4368 }, /* MOVE */
{ CPUFUNC(op_1118_5), 4376 }, /* MOVE */
{ CPUFUNC(op_1120_5), 4384 }, /* MOVE */
{ CPUFUNC(op_1128_5), 4392 }, /* MOVE */
{ CPUFUNC(op_1130_5), 4400 }, /* MOVE */
{ CPUFUNC(op_1138_5), 4408 }, /* MOVE */
{ CPUFUNC(op_1139_5), 4409 }, /* MOVE */
{ CPUFUNC(op_113a_5), 4410 }, /* MOVE */
{ CPUFUNC(op_113b_5), 4411 }, /* MOVE */
{ CPUFUNC(op_113c_5), 4412 }, /* MOVE */
{ CPUFUNC(op_1140_5), 4416 }, /* MOVE */
{ CPUFUNC(op_1150_5), 4432 }, /* MOVE */
{ CPUFUNC(op_1158_5), 4440 }, /* MOVE */
{ CPUFUNC(op_1160_5), 4448 }, /* MOVE */
{ CPUFUNC(op_1168_5), 4456 }, /* MOVE */
{ CPUFUNC(op_1170_5), 4464 }, /* MOVE */
{ CPUFUNC(op_1178_5), 4472 }, /* MOVE */
{ CPUFUNC(op_1179_5), 4473 }, /* MOVE */
{ CPUFUNC(op_117a_5), 4474 }, /* MOVE */
{ CPUFUNC(op_117b_5), 4475 }, /* MOVE */
{ CPUFUNC(op_117c_5), 4476 }, /* MOVE */
{ CPUFUNC(op_1180_5), 4480 }, /* MOVE */
{ CPUFUNC(op_1190_5), 4496 }, /* MOVE */
{ CPUFUNC(op_1198_5), 4504 }, /* MOVE */
{ CPUFUNC(op_11a0_5), 4512 }, /* MOVE */
{ CPUFUNC(op_11a8_5), 4520 }, /* MOVE */
{ CPUFUNC(op_11b0_5), 4528 }, /* MOVE */
{ CPUFUNC(op_11b8_5), 4536 }, /* MOVE */
{ CPUFUNC(op_11b9_5), 4537 }, /* MOVE */
{ CPUFUNC(op_11ba_5), 4538 }, /* MOVE */
{ CPUFUNC(op_11bb_5), 4539 }, /* MOVE */
{ CPUFUNC(op_11bc_5), 4540 }, /* MOVE */
{ CPUFUNC(op_11c0_5), 4544 }, /* MOVE */
{ CPUFUNC(op_11d0_5), 4560 }, /* MOVE */
{ CPUFUNC(op_11d8_5), 4568 }, /* MOVE */
{ CPUFUNC(op_11e0_5), 4576 }, /* MOVE */
{ CPUFUNC(op_11e8_5), 4584 }, /* MOVE */
{ CPUFUNC(op_11f0_5), 4592 }, /* MOVE */
{ CPUFUNC(op_11f8_5), 4600 }, /* MOVE */
{ CPUFUNC(op_11f9_5), 4601 }, /* MOVE */
{ CPUFUNC(op_11fa_5), 4602 }, /* MOVE */
{ CPUFUNC(op_11fb_5), 4603 }, /* MOVE */
{ CPUFUNC(op_11fc_5), 4604 }, /* MOVE */
{ CPUFUNC(op_13c0_5), 5056 }, /* MOVE */
{ CPUFUNC(op_13d0_5), 5072 }, /* MOVE */
{ CPUFUNC(op_13d8_5), 5080 }, /* MOVE */
{ CPUFUNC(op_13e0_5), 5088 }, /* MOVE */
{ CPUFUNC(op_13e8_5), 5096 }, /* MOVE */
{ CPUFUNC(op_13f0_5), 5104 }, /* MOVE */
{ CPUFUNC(op_13f8_5), 5112 }, /* MOVE */
{ CPUFUNC(op_13f9_5), 5113 }, /* MOVE */
{ CPUFUNC(op_13fa_5), 5114 }, /* MOVE */
{ CPUFUNC(op_13fb_5), 5115 }, /* MOVE */
{ CPUFUNC(op_13fc_5), 5116 }, /* MOVE */
{ CPUFUNC(op_2000_5), 8192 }, /* MOVE */
{ CPUFUNC(op_2008_5), 8200 }, /* MOVE */
{ CPUFUNC(op_2010_5), 8208 }, /* MOVE */
{ CPUFUNC(op_2018_5), 8216 }, /* MOVE */
{ CPUFUNC(op_2020_5), 8224 }, /* MOVE */
{ CPUFUNC(op_2028_5), 8232 }, /* MOVE */
{ CPUFUNC(op_2030_5), 8240 }, /* MOVE */
{ CPUFUNC(op_2038_5), 8248 }, /* MOVE */
{ CPUFUNC(op_2039_5), 8249 }, /* MOVE */
{ CPUFUNC(op_203a_5), 8250 }, /* MOVE */
{ CPUFUNC(op_203b_5), 8251 }, /* MOVE */
{ CPUFUNC(op_203c_5), 8252 }, /* MOVE */
{ CPUFUNC(op_2040_5), 8256 }, /* MOVEA */
{ CPUFUNC(op_2048_5), 8264 }, /* MOVEA */
{ CPUFUNC(op_2050_5), 8272 }, /* MOVEA */
{ CPUFUNC(op_2058_5), 8280 }, /* MOVEA */
{ CPUFUNC(op_2060_5), 8288 }, /* MOVEA */
{ CPUFUNC(op_2068_5), 8296 }, /* MOVEA */
{ CPUFUNC(op_2070_5), 8304 }, /* MOVEA */
{ CPUFUNC(op_2078_5), 8312 }, /* MOVEA */
{ CPUFUNC(op_2079_5), 8313 }, /* MOVEA */
{ CPUFUNC(op_207a_5), 8314 }, /* MOVEA */
{ CPUFUNC(op_207b_5), 8315 }, /* MOVEA */
{ CPUFUNC(op_207c_5), 8316 }, /* MOVEA */
{ CPUFUNC(op_2080_5), 8320 }, /* MOVE */
{ CPUFUNC(op_2088_5), 8328 }, /* MOVE */
{ CPUFUNC(op_2090_5), 8336 }, /* MOVE */
{ CPUFUNC(op_2098_5), 8344 }, /* MOVE */
{ CPUFUNC(op_20a0_5), 8352 }, /* MOVE */
{ CPUFUNC(op_20a8_5), 8360 }, /* MOVE */
{ CPUFUNC(op_20b0_5), 8368 }, /* MOVE */
{ CPUFUNC(op_20b8_5), 8376 }, /* MOVE */
{ CPUFUNC(op_20b9_5), 8377 }, /* MOVE */
{ CPUFUNC(op_20ba_5), 8378 }, /* MOVE */
{ CPUFUNC(op_20bb_5), 8379 }, /* MOVE */
{ CPUFUNC(op_20bc_5), 8380 }, /* MOVE */
{ CPUFUNC(op_20c0_5), 8384 }, /* MOVE */
{ CPUFUNC(op_20c8_5), 8392 }, /* MOVE */
{ CPUFUNC(op_20d0_5), 8400 }, /* MOVE */
{ CPUFUNC(op_20d8_5), 8408 }, /* MOVE */
{ CPUFUNC(op_20e0_5), 8416 }, /* MOVE */
{ CPUFUNC(op_20e8_5), 8424 }, /* MOVE */
{ CPUFUNC(op_20f0_5), 8432 }, /* MOVE */
{ CPUFUNC(op_20f8_5), 8440 }, /* MOVE */
{ CPUFUNC(op_20f9_5), 8441 }, /* MOVE */
{ CPUFUNC(op_20fa_5), 8442 }, /* MOVE */
{ CPUFUNC(op_20fb_5), 8443 }, /* MOVE */
{ CPUFUNC(op_20fc_5), 8444 }, /* MOVE */
{ CPUFUNC(op_2100_5), 8448 }, /* MOVE */
{ CPUFUNC(op_2108_5), 8456 }, /* MOVE */
{ CPUFUNC(op_2110_5), 8464 }, /* MOVE */
{ CPUFUNC(op_2118_5), 8472 }, /* MOVE */
{ CPUFUNC(op_2120_5), 8480 }, /* MOVE */
{ CPUFUNC(op_2128_5), 8488 }, /* MOVE */
{ CPUFUNC(op_2130_5), 8496 }, /* MOVE */
{ CPUFUNC(op_2138_5), 8504 }, /* MOVE */
{ CPUFUNC(op_2139_5), 8505 }, /* MOVE */
{ CPUFUNC(op_213a_5), 8506 }, /* MOVE */
{ CPUFUNC(op_213b_5), 8507 }, /* MOVE */
{ CPUFUNC(op_213c_5), 8508 }, /* MOVE */
{ CPUFUNC(op_2140_5), 8512 }, /* MOVE */
{ CPUFUNC(op_2148_5), 8520 }, /* MOVE */
{ CPUFUNC(op_2150_5), 8528 }, /* MOVE */
{ CPUFUNC(op_2158_5), 8536 }, /* MOVE */
{ CPUFUNC(op_2160_5), 8544 }, /* MOVE */
{ CPUFUNC(op_2168_5), 8552 }, /* MOVE */
{ CPUFUNC(op_2170_5), 8560 }, /* MOVE */
{ CPUFUNC(op_2178_5), 8568 }, /* MOVE */
{ CPUFUNC(op_2179_5), 8569 }, /* MOVE */
{ CPUFUNC(op_217a_5), 8570 }, /* MOVE */
{ CPUFUNC(op_217b_5), 8571 }, /* MOVE */
{ CPUFUNC(op_217c_5), 8572 }, /* MOVE */
{ CPUFUNC(op_2180_5), 8576 }, /* MOVE */
{ CPUFUNC(op_2188_5), 8584 }, /* MOVE */
{ CPUFUNC(op_2190_5), 8592 }, /* MOVE */
{ CPUFUNC(op_2198_5), 8600 }, /* MOVE */
{ CPUFUNC(op_21a0_5), 8608 }, /* MOVE */
{ CPUFUNC(op_21a8_5), 8616 }, /* MOVE */
{ CPUFUNC(op_21b0_5), 8624 }, /* MOVE */
{ CPUFUNC(op_21b8_5), 8632 }, /* MOVE */
{ CPUFUNC(op_21b9_5), 8633 }, /* MOVE */
{ CPUFUNC(op_21ba_5), 8634 }, /* MOVE */
{ CPUFUNC(op_21bb_5), 8635 }, /* MOVE */
{ CPUFUNC(op_21bc_5), 8636 }, /* MOVE */
{ CPUFUNC(op_21c0_5), 8640 }, /* MOVE */
{ CPUFUNC(op_21c8_5), 8648 }, /* MOVE */
{ CPUFUNC(op_21d0_5), 8656 }, /* MOVE */
{ CPUFUNC(op_21d8_5), 8664 }, /* MOVE */
{ CPUFUNC(op_21e0_5), 8672 }, /* MOVE */
{ CPUFUNC(op_21e8_5), 8680 }, /* MOVE */
{ CPUFUNC(op_21f0_5), 8688 }, /* MOVE */
{ CPUFUNC(op_21f8_5), 8696 }, /* MOVE */
{ CPUFUNC(op_21f9_5), 8697 }, /* MOVE */
{ CPUFUNC(op_21fa_5), 8698 }, /* MOVE */
{ CPUFUNC(op_21fb_5), 8699 }, /* MOVE */
{ CPUFUNC(op_21fc_5), 8700 }, /* MOVE */
{ CPUFUNC(op_23c0_5), 9152 }, /* MOVE */
{ CPUFUNC(op_23c8_5), 9160 }, /* MOVE */
{ CPUFUNC(op_23d0_5), 9168 }, /* MOVE */
{ CPUFUNC(op_23d8_5), 9176 }, /* MOVE */
{ CPUFUNC(op_23e0_5), 9184 }, /* MOVE */
{ CPUFUNC(op_23e8_5), 9192 }, /* MOVE */
{ CPUFUNC(op_23f0_5), 9200 }, /* MOVE */
{ CPUFUNC(op_23f8_5), 9208 }, /* MOVE */
{ CPUFUNC(op_23f9_5), 9209 }, /* MOVE */
{ CPUFUNC(op_23fa_5), 9210 }, /* MOVE */
{ CPUFUNC(op_23fb_5), 9211 }, /* MOVE */
{ CPUFUNC(op_23fc_5), 9212 }, /* MOVE */
{ CPUFUNC(op_3000_5), 12288 }, /* MOVE */
{ CPUFUNC(op_3008_5), 12296 }, /* MOVE */
{ CPUFUNC(op_3010_5), 12304 }, /* MOVE */
{ CPUFUNC(op_3018_5), 12312 }, /* MOVE */
{ CPUFUNC(op_3020_5), 12320 }, /* MOVE */
{ CPUFUNC(op_3028_5), 12328 }, /* MOVE */
{ CPUFUNC(op_3030_5), 12336 }, /* MOVE */
{ CPUFUNC(op_3038_5), 12344 }, /* MOVE */
{ CPUFUNC(op_3039_5), 12345 }, /* MOVE */
{ CPUFUNC(op_303a_5), 12346 }, /* MOVE */
{ CPUFUNC(op_303b_5), 12347 }, /* MOVE */
{ CPUFUNC(op_303c_5), 12348 }, /* MOVE */
{ CPUFUNC(op_3040_5), 12352 }, /* MOVEA */
{ CPUFUNC(op_3048_5), 12360 }, /* MOVEA */
{ CPUFUNC(op_3050_5), 12368 }, /* MOVEA */
{ CPUFUNC(op_3058_5), 12376 }, /* MOVEA */
{ CPUFUNC(op_3060_5), 12384 }, /* MOVEA */
{ CPUFUNC(op_3068_5), 12392 }, /* MOVEA */
{ CPUFUNC(op_3070_5), 12400 }, /* MOVEA */
{ CPUFUNC(op_3078_5), 12408 }, /* MOVEA */
{ CPUFUNC(op_3079_5), 12409 }, /* MOVEA */
{ CPUFUNC(op_307a_5), 12410 }, /* MOVEA */
{ CPUFUNC(op_307b_5), 12411 }, /* MOVEA */
{ CPUFUNC(op_307c_5), 12412 }, /* MOVEA */
{ CPUFUNC(op_3080_5), 12416 }, /* MOVE */
{ CPUFUNC(op_3088_5), 12424 }, /* MOVE */
{ CPUFUNC(op_3090_5), 12432 }, /* MOVE */
{ CPUFUNC(op_3098_5), 12440 }, /* MOVE */
{ CPUFUNC(op_30a0_5), 12448 }, /* MOVE */
{ CPUFUNC(op_30a8_5), 12456 }, /* MOVE */
{ CPUFUNC(op_30b0_5), 12464 }, /* MOVE */
{ CPUFUNC(op_30b8_5), 12472 }, /* MOVE */
{ CPUFUNC(op_30b9_5), 12473 }, /* MOVE */
{ CPUFUNC(op_30ba_5), 12474 }, /* MOVE */
{ CPUFUNC(op_30bb_5), 12475 }, /* MOVE */
{ CPUFUNC(op_30bc_5), 12476 }, /* MOVE */
{ CPUFUNC(op_30c0_5), 12480 }, /* MOVE */
{ CPUFUNC(op_30c8_5), 12488 }, /* MOVE */
{ CPUFUNC(op_30d0_5), 12496 }, /* MOVE */
{ CPUFUNC(op_30d8_5), 12504 }, /* MOVE */
{ CPUFUNC(op_30e0_5), 12512 }, /* MOVE */
{ CPUFUNC(op_30e8_5), 12520 }, /* MOVE */
{ CPUFUNC(op_30f0_5), 12528 }, /* MOVE */
{ CPUFUNC(op_30f8_5), 12536 }, /* MOVE */
{ CPUFUNC(op_30f9_5), 12537 }, /* MOVE */
{ CPUFUNC(op_30fa_5), 12538 }, /* MOVE */
{ CPUFUNC(op_30fb_5), 12539 }, /* MOVE */
{ CPUFUNC(op_30fc_5), 12540 }, /* MOVE */
{ CPUFUNC(op_3100_5), 12544 }, /* MOVE */
{ CPUFUNC(op_3108_5), 12552 }, /* MOVE */
{ CPUFUNC(op_3110_5), 12560 }, /* MOVE */
{ CPUFUNC(op_3118_5), 12568 }, /* MOVE */
{ CPUFUNC(op_3120_5), 12576 }, /* MOVE */
{ CPUFUNC(op_3128_5), 12584 }, /* MOVE */
{ CPUFUNC(op_3130_5), 12592 }, /* MOVE */
{ CPUFUNC(op_3138_5), 12600 }, /* MOVE */
{ CPUFUNC(op_3139_5), 12601 }, /* MOVE */
{ CPUFUNC(op_313a_5), 12602 }, /* MOVE */
{ CPUFUNC(op_313b_5), 12603 }, /* MOVE */
{ CPUFUNC(op_313c_5), 12604 }, /* MOVE */
{ CPUFUNC(op_3140_5), 12608 }, /* MOVE */
{ CPUFUNC(op_3148_5), 12616 }, /* MOVE */
{ CPUFUNC(op_3150_5), 12624 }, /* MOVE */
{ CPUFUNC(op_3158_5), 12632 }, /* MOVE */
{ CPUFUNC(op_3160_5), 12640 }, /* MOVE */
{ CPUFUNC(op_3168_5), 12648 }, /* MOVE */
{ CPUFUNC(op_3170_5), 12656 }, /* MOVE */
{ CPUFUNC(op_3178_5), 12664 }, /* MOVE */
{ CPUFUNC(op_3179_5), 12665 }, /* MOVE */
{ CPUFUNC(op_317a_5), 12666 }, /* MOVE */
{ CPUFUNC(op_317b_5), 12667 }, /* MOVE */
{ CPUFUNC(op_317c_5), 12668 }, /* MOVE */
{ CPUFUNC(op_3180_5), 12672 }, /* MOVE */
{ CPUFUNC(op_3188_5), 12680 }, /* MOVE */
{ CPUFUNC(op_3190_5), 12688 }, /* MOVE */
{ CPUFUNC(op_3198_5), 12696 }, /* MOVE */
{ CPUFUNC(op_31a0_5), 12704 }, /* MOVE */
{ CPUFUNC(op_31a8_5), 12712 }, /* MOVE */
{ CPUFUNC(op_31b0_5), 12720 }, /* MOVE */
{ CPUFUNC(op_31b8_5), 12728 }, /* MOVE */
{ CPUFUNC(op_31b9_5), 12729 }, /* MOVE */
{ CPUFUNC(op_31ba_5), 12730 }, /* MOVE */
{ CPUFUNC(op_31bb_5), 12731 }, /* MOVE */
{ CPUFUNC(op_31bc_5), 12732 }, /* MOVE */
{ CPUFUNC(op_31c0_5), 12736 }, /* MOVE */
{ CPUFUNC(op_31c8_5), 12744 }, /* MOVE */
{ CPUFUNC(op_31d0_5), 12752 }, /* MOVE */
{ CPUFUNC(op_31d8_5), 12760 }, /* MOVE */
{ CPUFUNC(op_31e0_5), 12768 }, /* MOVE */
{ CPUFUNC(op_31e8_5), 12776 }, /* MOVE */
{ CPUFUNC(op_31f0_5), 12784 }, /* MOVE */
{ CPUFUNC(op_31f8_5), 12792 }, /* MOVE */
{ CPUFUNC(op_31f9_5), 12793 }, /* MOVE */
{ CPUFUNC(op_31fa_5), 12794 }, /* MOVE */
{ CPUFUNC(op_31fb_5), 12795 }, /* MOVE */
{ CPUFUNC(op_31fc_5), 12796 }, /* MOVE */
{ CPUFUNC(op_33c0_5), 13248 }, /* MOVE */
{ CPUFUNC(op_33c8_5), 13256 }, /* MOVE */
{ CPUFUNC(op_33d0_5), 13264 }, /* MOVE */
{ CPUFUNC(op_33d8_5), 13272 }, /* MOVE */
{ CPUFUNC(op_33e0_5), 13280 }, /* MOVE */
{ CPUFUNC(op_33e8_5), 13288 }, /* MOVE */
{ CPUFUNC(op_33f0_5), 13296 }, /* MOVE */
{ CPUFUNC(op_33f8_5), 13304 }, /* MOVE */
{ CPUFUNC(op_33f9_5), 13305 }, /* MOVE */
{ CPUFUNC(op_33fa_5), 13306 }, /* MOVE */
{ CPUFUNC(op_33fb_5), 13307 }, /* MOVE */
{ CPUFUNC(op_33fc_5), 13308 }, /* MOVE */
{ CPUFUNC(op_4000_5), 16384 }, /* NEGX */
{ CPUFUNC(op_4010_5), 16400 }, /* NEGX */
{ CPUFUNC(op_4018_5), 16408 }, /* NEGX */
{ CPUFUNC(op_4020_5), 16416 }, /* NEGX */
{ CPUFUNC(op_4028_5), 16424 }, /* NEGX */
{ CPUFUNC(op_4030_5), 16432 }, /* NEGX */
{ CPUFUNC(op_4038_5), 16440 }, /* NEGX */
{ CPUFUNC(op_4039_5), 16441 }, /* NEGX */
{ CPUFUNC(op_4040_5), 16448 }, /* NEGX */
{ CPUFUNC(op_4050_5), 16464 }, /* NEGX */
{ CPUFUNC(op_4058_5), 16472 }, /* NEGX */
{ CPUFUNC(op_4060_5), 16480 }, /* NEGX */
{ CPUFUNC(op_4068_5), 16488 }, /* NEGX */
{ CPUFUNC(op_4070_5), 16496 }, /* NEGX */
{ CPUFUNC(op_4078_5), 16504 }, /* NEGX */
{ CPUFUNC(op_4079_5), 16505 }, /* NEGX */
{ CPUFUNC(op_4080_5), 16512 }, /* NEGX */
{ CPUFUNC(op_4090_5), 16528 }, /* NEGX */
{ CPUFUNC(op_4098_5), 16536 }, /* NEGX */
{ CPUFUNC(op_40a0_5), 16544 }, /* NEGX */
{ CPUFUNC(op_40a8_5), 16552 }, /* NEGX */
{ CPUFUNC(op_40b0_5), 16560 }, /* NEGX */
{ CPUFUNC(op_40b8_5), 16568 }, /* NEGX */
{ CPUFUNC(op_40b9_5), 16569 }, /* NEGX */
{ CPUFUNC(op_40c0_5), 16576 }, /* MVSR2 */
{ CPUFUNC(op_40d0_5), 16592 }, /* MVSR2 */
{ CPUFUNC(op_40d8_5), 16600 }, /* MVSR2 */
{ CPUFUNC(op_40e0_5), 16608 }, /* MVSR2 */
{ CPUFUNC(op_40e8_5), 16616 }, /* MVSR2 */
{ CPUFUNC(op_40f0_5), 16624 }, /* MVSR2 */
{ CPUFUNC(op_40f8_5), 16632 }, /* MVSR2 */
{ CPUFUNC(op_40f9_5), 16633 }, /* MVSR2 */
{ CPUFUNC(op_4100_5), 16640 }, /* CHK */
{ CPUFUNC(op_4110_5), 16656 }, /* CHK */
{ CPUFUNC(op_4118_5), 16664 }, /* CHK */
{ CPUFUNC(op_4120_5), 16672 }, /* CHK */
{ CPUFUNC(op_4128_5), 16680 }, /* CHK */
{ CPUFUNC(op_4130_5), 16688 }, /* CHK */
{ CPUFUNC(op_4138_5), 16696 }, /* CHK */
{ CPUFUNC(op_4139_5), 16697 }, /* CHK */
{ CPUFUNC(op_413a_5), 16698 }, /* CHK */
{ CPUFUNC(op_413b_5), 16699 }, /* CHK */
{ CPUFUNC(op_413c_5), 16700 }, /* CHK */
{ CPUFUNC(op_4180_5), 16768 }, /* CHK */
{ CPUFUNC(op_4190_5), 16784 }, /* CHK */
{ CPUFUNC(op_4198_5), 16792 }, /* CHK */
{ CPUFUNC(op_41a0_5), 16800 }, /* CHK */
{ CPUFUNC(op_41a8_5), 16808 }, /* CHK */
{ CPUFUNC(op_41b0_5), 16816 }, /* CHK */
{ CPUFUNC(op_41b8_5), 16824 }, /* CHK */
{ CPUFUNC(op_41b9_5), 16825 }, /* CHK */
{ CPUFUNC(op_41ba_5), 16826 }, /* CHK */
{ CPUFUNC(op_41bb_5), 16827 }, /* CHK */
{ CPUFUNC(op_41bc_5), 16828 }, /* CHK */
{ CPUFUNC(op_41d0_5), 16848 }, /* LEA */
{ CPUFUNC(op_41e8_5), 16872 }, /* LEA */
{ CPUFUNC(op_41f0_5), 16880 }, /* LEA */
{ CPUFUNC(op_41f8_5), 16888 }, /* LEA */
{ CPUFUNC(op_41f9_5), 16889 }, /* LEA */
{ CPUFUNC(op_41fa_5), 16890 }, /* LEA */
{ CPUFUNC(op_41fb_5), 16891 }, /* LEA */
{ CPUFUNC(op_4200_5), 16896 }, /* CLR */
{ CPUFUNC(op_4210_5), 16912 }, /* CLR */
{ CPUFUNC(op_4218_5), 16920 }, /* CLR */
{ CPUFUNC(op_4220_5), 16928 }, /* CLR */
{ CPUFUNC(op_4228_5), 16936 }, /* CLR */
{ CPUFUNC(op_4230_5), 16944 }, /* CLR */
{ CPUFUNC(op_4238_5), 16952 }, /* CLR */
{ CPUFUNC(op_4239_5), 16953 }, /* CLR */
{ CPUFUNC(op_4240_5), 16960 }, /* CLR */
{ CPUFUNC(op_4250_5), 16976 }, /* CLR */
{ CPUFUNC(op_4258_5), 16984 }, /* CLR */
{ CPUFUNC(op_4260_5), 16992 }, /* CLR */
{ CPUFUNC(op_4268_5), 17000 }, /* CLR */
{ CPUFUNC(op_4270_5), 17008 }, /* CLR */
{ CPUFUNC(op_4278_5), 17016 }, /* CLR */
{ CPUFUNC(op_4279_5), 17017 }, /* CLR */
{ CPUFUNC(op_4280_5), 17024 }, /* CLR */
{ CPUFUNC(op_4290_5), 17040 }, /* CLR */
{ CPUFUNC(op_4298_5), 17048 }, /* CLR */
{ CPUFUNC(op_42a0_5), 17056 }, /* CLR */
{ CPUFUNC(op_42a8_5), 17064 }, /* CLR */
{ CPUFUNC(op_42b0_5), 17072 }, /* CLR */
{ CPUFUNC(op_42b8_5), 17080 }, /* CLR */
{ CPUFUNC(op_42b9_5), 17081 }, /* CLR */
{ CPUFUNC(op_4400_5), 17408 }, /* NEG */
{ CPUFUNC(op_4410_5), 17424 }, /* NEG */
{ CPUFUNC(op_4418_5), 17432 }, /* NEG */
{ CPUFUNC(op_4420_5), 17440 }, /* NEG */
{ CPUFUNC(op_4428_5), 17448 }, /* NEG */
{ CPUFUNC(op_4430_5), 17456 }, /* NEG */
{ CPUFUNC(op_4438_5), 17464 }, /* NEG */
{ CPUFUNC(op_4439_5), 17465 }, /* NEG */
{ CPUFUNC(op_4440_5), 17472 }, /* NEG */
{ CPUFUNC(op_4450_5), 17488 }, /* NEG */
{ CPUFUNC(op_4458_5), 17496 }, /* NEG */
{ CPUFUNC(op_4460_5), 17504 }, /* NEG */
{ CPUFUNC(op_4468_5), 17512 }, /* NEG */
{ CPUFUNC(op_4470_5), 17520 }, /* NEG */
{ CPUFUNC(op_4478_5), 17528 }, /* NEG */
{ CPUFUNC(op_4479_5), 17529 }, /* NEG */
{ CPUFUNC(op_4480_5), 17536 }, /* NEG */
{ CPUFUNC(op_4490_5), 17552 }, /* NEG */
{ CPUFUNC(op_4498_5), 17560 }, /* NEG */
{ CPUFUNC(op_44a0_5), 17568 }, /* NEG */
{ CPUFUNC(op_44a8_5), 17576 }, /* NEG */
{ CPUFUNC(op_44b0_5), 17584 }, /* NEG */
{ CPUFUNC(op_44b8_5), 17592 }, /* NEG */
{ CPUFUNC(op_44b9_5), 17593 }, /* NEG */
{ CPUFUNC(op_44c0_5), 17600 }, /* MV2SR */
{ CPUFUNC(op_44d0_5), 17616 }, /* MV2SR */
{ CPUFUNC(op_44d8_5), 17624 }, /* MV2SR */
{ CPUFUNC(op_44e0_5), 17632 }, /* MV2SR */
{ CPUFUNC(op_44e8_5), 17640 }, /* MV2SR */
{ CPUFUNC(op_44f0_5), 17648 }, /* MV2SR */
{ CPUFUNC(op_44f8_5), 17656 }, /* MV2SR */
{ CPUFUNC(op_44f9_5), 17657 }, /* MV2SR */
{ CPUFUNC(op_44fa_5), 17658 }, /* MV2SR */
{ CPUFUNC(op_44fb_5), 17659 }, /* MV2SR */
{ CPUFUNC(op_44fc_5), 17660 }, /* MV2SR */
{ CPUFUNC(op_4600_5), 17920 }, /* NOT */
{ CPUFUNC(op_4610_5), 17936 }, /* NOT */
{ CPUFUNC(op_4618_5), 17944 }, /* NOT */
{ CPUFUNC(op_4620_5), 17952 }, /* NOT */
{ CPUFUNC(op_4628_5), 17960 }, /* NOT */
{ CPUFUNC(op_4630_5), 17968 }, /* NOT */
{ CPUFUNC(op_4638_5), 17976 }, /* NOT */
{ CPUFUNC(op_4639_5), 17977 }, /* NOT */
{ CPUFUNC(op_4640_5), 17984 }, /* NOT */
{ CPUFUNC(op_4650_5), 18000 }, /* NOT */
{ CPUFUNC(op_4658_5), 18008 }, /* NOT */
{ CPUFUNC(op_4660_5), 18016 }, /* NOT */
{ CPUFUNC(op_4668_5), 18024 }, /* NOT */
{ CPUFUNC(op_4670_5), 18032 }, /* NOT */
{ CPUFUNC(op_4678_5), 18040 }, /* NOT */
{ CPUFUNC(op_4679_5), 18041 }, /* NOT */
{ CPUFUNC(op_4680_5), 18048 }, /* NOT */
{ CPUFUNC(op_4690_5), 18064 }, /* NOT */
{ CPUFUNC(op_4698_5), 18072 }, /* NOT */
{ CPUFUNC(op_46a0_5), 18080 }, /* NOT */
{ CPUFUNC(op_46a8_5), 18088 }, /* NOT */
{ CPUFUNC(op_46b0_5), 18096 }, /* NOT */
{ CPUFUNC(op_46b8_5), 18104 }, /* NOT */
{ CPUFUNC(op_46b9_5), 18105 }, /* NOT */
{ CPUFUNC(op_46c0_5), 18112 }, /* MV2SR */
{ CPUFUNC(op_46d0_5), 18128 }, /* MV2SR */
{ CPUFUNC(op_46d8_5), 18136 }, /* MV2SR */
{ CPUFUNC(op_46e0_5), 18144 }, /* MV2SR */
{ CPUFUNC(op_46e8_5), 18152 }, /* MV2SR */
{ CPUFUNC(op_46f0_5), 18160 }, /* MV2SR */
{ CPUFUNC(op_46f8_5), 18168 }, /* MV2SR */
{ CPUFUNC(op_46f9_5), 18169 }, /* MV2SR */
{ CPUFUNC(op_46fa_5), 18170 }, /* MV2SR */
{ CPUFUNC(op_46fb_5), 18171 }, /* MV2SR */
{ CPUFUNC(op_46fc_5), 18172 }, /* MV2SR */
{ CPUFUNC(op_4800_5), 18432 }, /* NBCD */
{ CPUFUNC(op_4810_5), 18448 }, /* NBCD */
{ CPUFUNC(op_4818_5), 18456 }, /* NBCD */
{ CPUFUNC(op_4820_5), 18464 }, /* NBCD */
{ CPUFUNC(op_4828_5), 18472 }, /* NBCD */
{ CPUFUNC(op_4830_5), 18480 }, /* NBCD */
{ CPUFUNC(op_4838_5), 18488 }, /* NBCD */
{ CPUFUNC(op_4839_5), 18489 }, /* NBCD */
{ CPUFUNC(op_4840_5), 18496 }, /* SWAP */
{ CPUFUNC(op_4850_5), 18512 }, /* PEA */
{ CPUFUNC(op_4868_5), 18536 }, /* PEA */
{ CPUFUNC(op_4870_5), 18544 }, /* PEA */
{ CPUFUNC(op_4878_5), 18552 }, /* PEA */
{ CPUFUNC(op_4879_5), 18553 }, /* PEA */
{ CPUFUNC(op_487a_5), 18554 }, /* PEA */
{ CPUFUNC(op_487b_5), 18555 }, /* PEA */
{ CPUFUNC(op_4880_5), 18560 }, /* EXT */
{ CPUFUNC(op_4890_5), 18576 }, /* MVMLE */
{ CPUFUNC(op_48a0_5), 18592 }, /* MVMLE */
{ CPUFUNC(op_48a8_5), 18600 }, /* MVMLE */
{ CPUFUNC(op_48b0_5), 18608 }, /* MVMLE */
{ CPUFUNC(op_48b8_5), 18616 }, /* MVMLE */
{ CPUFUNC(op_48b9_5), 18617 }, /* MVMLE */
{ CPUFUNC(op_48c0_5), 18624 }, /* EXT */
{ CPUFUNC(op_48d0_5), 18640 }, /* MVMLE */
{ CPUFUNC(op_48e0_5), 18656 }, /* MVMLE */
{ CPUFUNC(op_48e8_5), 18664 }, /* MVMLE */
{ CPUFUNC(op_48f0_5), 18672 }, /* MVMLE */
{ CPUFUNC(op_48f8_5), 18680 }, /* MVMLE */
{ CPUFUNC(op_48f9_5), 18681 }, /* MVMLE */
{ CPUFUNC(op_49c0_5), 18880 }, /* EXT */
{ CPUFUNC(op_4a00_5), 18944 }, /* TST */
{ CPUFUNC(op_4a10_5), 18960 }, /* TST */
{ CPUFUNC(op_4a18_5), 18968 }, /* TST */
{ CPUFUNC(op_4a20_5), 18976 }, /* TST */
{ CPUFUNC(op_4a28_5), 18984 }, /* TST */
{ CPUFUNC(op_4a30_5), 18992 }, /* TST */
{ CPUFUNC(op_4a38_5), 19000 }, /* TST */
{ CPUFUNC(op_4a39_5), 19001 }, /* TST */
{ CPUFUNC(op_4a40_5), 19008 }, /* TST */
{ CPUFUNC(op_4a50_5), 19024 }, /* TST */
{ CPUFUNC(op_4a58_5), 19032 }, /* TST */
{ CPUFUNC(op_4a60_5), 19040 }, /* TST */
{ CPUFUNC(op_4a68_5), 19048 }, /* TST */
{ CPUFUNC(op_4a70_5), 19056 }, /* TST */
{ CPUFUNC(op_4a78_5), 19064 }, /* TST */
{ CPUFUNC(op_4a79_5), 19065 }, /* TST */
{ CPUFUNC(op_4a80_5), 19072 }, /* TST */
{ CPUFUNC(op_4a90_5), 19088 }, /* TST */
{ CPUFUNC(op_4a98_5), 19096 }, /* TST */
{ CPUFUNC(op_4aa0_5), 19104 }, /* TST */
{ CPUFUNC(op_4aa8_5), 19112 }, /* TST */
{ CPUFUNC(op_4ab0_5), 19120 }, /* TST */
{ CPUFUNC(op_4ab8_5), 19128 }, /* TST */
{ CPUFUNC(op_4ab9_5), 19129 }, /* TST */
{ CPUFUNC(op_4ac0_5), 19136 }, /* TAS */
{ CPUFUNC(op_4ad0_5), 19152 }, /* TAS */
{ CPUFUNC(op_4ad8_5), 19160 }, /* TAS */
{ CPUFUNC(op_4ae0_5), 19168 }, /* TAS */
{ CPUFUNC(op_4ae8_5), 19176 }, /* TAS */
{ CPUFUNC(op_4af0_5), 19184 }, /* TAS */
{ CPUFUNC(op_4af8_5), 19192 }, /* TAS */
{ CPUFUNC(op_4af9_5), 19193 }, /* TAS */
{ CPUFUNC(op_4c90_5), 19600 }, /* MVMEL */
{ CPUFUNC(op_4c98_5), 19608 }, /* MVMEL */
{ CPUFUNC(op_4ca8_5), 19624 }, /* MVMEL */
{ CPUFUNC(op_4cb0_5), 19632 }, /* MVMEL */
{ CPUFUNC(op_4cb8_5), 19640 }, /* MVMEL */
{ CPUFUNC(op_4cb9_5), 19641 }, /* MVMEL */
{ CPUFUNC(op_4cba_5), 19642 }, /* MVMEL */
{ CPUFUNC(op_4cbb_5), 19643 }, /* MVMEL */
{ CPUFUNC(op_4cd0_5), 19664 }, /* MVMEL */
{ CPUFUNC(op_4cd8_5), 19672 }, /* MVMEL */
{ CPUFUNC(op_4ce8_5), 19688 }, /* MVMEL */
{ CPUFUNC(op_4cf0_5), 19696 }, /* MVMEL */
{ CPUFUNC(op_4cf8_5), 19704 }, /* MVMEL */
{ CPUFUNC(op_4cf9_5), 19705 }, /* MVMEL */
{ CPUFUNC(op_4cfa_5), 19706 }, /* MVMEL */
{ CPUFUNC(op_4cfb_5), 19707 }, /* MVMEL */
{ CPUFUNC(op_4e40_5), 20032 }, /* TRAP */
{ CPUFUNC(op_4e50_5), 20048 }, /* LINK */
{ CPUFUNC(op_4e58_5), 20056 }, /* UNLK */
{ CPUFUNC(op_4e60_5), 20064 }, /* MVR2USP */
{ CPUFUNC(op_4e68_5), 20072 }, /* MVUSP2R */
{ CPUFUNC(op_4e70_5), 20080 }, /* RESET */
{ CPUFUNC(op_4e71_5), 20081 }, /* NOP */
{ CPUFUNC(op_4e72_5), 20082 }, /* STOP */
{ CPUFUNC(op_4e73_5), 20083 }, /* RTE */
{ CPUFUNC(op_4e74_5), 20084 }, /* RTD */
{ CPUFUNC(op_4e75_5), 20085 }, /* RTS */
{ CPUFUNC(op_4e76_5), 20086 }, /* TRAPV */
{ CPUFUNC(op_4e77_5), 20087 }, /* RTR */
{ CPUFUNC(op_4e90_5), 20112 }, /* JSR */
{ CPUFUNC(op_4ea8_5), 20136 }, /* JSR */
{ CPUFUNC(op_4eb0_5), 20144 }, /* JSR */
{ CPUFUNC(op_4eb8_5), 20152 }, /* JSR */
{ CPUFUNC(op_4eb9_5), 20153 }, /* JSR */
{ CPUFUNC(op_4eba_5), 20154 }, /* JSR */
{ CPUFUNC(op_4ebb_5), 20155 }, /* JSR */
{ CPUFUNC(op_4ed0_5), 20176 }, /* JMP */
{ CPUFUNC(op_4ee8_5), 20200 }, /* JMP */
{ CPUFUNC(op_4ef0_5), 20208 }, /* JMP */
{ CPUFUNC(op_4ef8_5), 20216 }, /* JMP */
{ CPUFUNC(op_4ef9_5), 20217 }, /* JMP */
{ CPUFUNC(op_4efa_5), 20218 }, /* JMP */
{ CPUFUNC(op_4efb_5), 20219 }, /* JMP */
{ CPUFUNC(op_5000_5), 20480 }, /* ADD */
{ CPUFUNC(op_5010_5), 20496 }, /* ADD */
{ CPUFUNC(op_5018_5), 20504 }, /* ADD */
{ CPUFUNC(op_5020_5), 20512 }, /* ADD */
{ CPUFUNC(op_5028_5), 20520 }, /* ADD */
{ CPUFUNC(op_5030_5), 20528 }, /* ADD */
{ CPUFUNC(op_5038_5), 20536 }, /* ADD */
{ CPUFUNC(op_5039_5), 20537 }, /* ADD */
{ CPUFUNC(op_5040_5), 20544 }, /* ADD */
{ CPUFUNC(op_5048_5), 20552 }, /* ADDA */
{ CPUFUNC(op_5050_5), 20560 }, /* ADD */
{ CPUFUNC(op_5058_5), 20568 }, /* ADD */
{ CPUFUNC(op_5060_5), 20576 }, /* ADD */
{ CPUFUNC(op_5068_5), 20584 }, /* ADD */
{ CPUFUNC(op_5070_5), 20592 }, /* ADD */
{ CPUFUNC(op_5078_5), 20600 }, /* ADD */
{ CPUFUNC(op_5079_5), 20601 }, /* ADD */
{ CPUFUNC(op_5080_5), 20608 }, /* ADD */
{ CPUFUNC(op_5088_5), 20616 }, /* ADDA */
{ CPUFUNC(op_5090_5), 20624 }, /* ADD */
{ CPUFUNC(op_5098_5), 20632 }, /* ADD */
{ CPUFUNC(op_50a0_5), 20640 }, /* ADD */
{ CPUFUNC(op_50a8_5), 20648 }, /* ADD */
{ CPUFUNC(op_50b0_5), 20656 }, /* ADD */
{ CPUFUNC(op_50b8_5), 20664 }, /* ADD */
{ CPUFUNC(op_50b9_5), 20665 }, /* ADD */
{ CPUFUNC(op_50c0_5), 20672 }, /* Scc */
{ CPUFUNC(op_50c8_5), 20680 }, /* DBcc */
{ CPUFUNC(op_50d0_5), 20688 }, /* Scc */
{ CPUFUNC(op_50d8_5), 20696 }, /* Scc */
{ CPUFUNC(op_50e0_5), 20704 }, /* Scc */
{ CPUFUNC(op_50e8_5), 20712 }, /* Scc */
{ CPUFUNC(op_50f0_5), 20720 }, /* Scc */
{ CPUFUNC(op_50f8_5), 20728 }, /* Scc */
{ CPUFUNC(op_50f9_5), 20729 }, /* Scc */
{ CPUFUNC(op_5100_5), 20736 }, /* SUB */
{ CPUFUNC(op_5110_5), 20752 }, /* SUB */
{ CPUFUNC(op_5118_5), 20760 }, /* SUB */
{ CPUFUNC(op_5120_5), 20768 }, /* SUB */
{ CPUFUNC(op_5128_5), 20776 }, /* SUB */
{ CPUFUNC(op_5130_5), 20784 }, /* SUB */
{ CPUFUNC(op_5138_5), 20792 }, /* SUB */
{ CPUFUNC(op_5139_5), 20793 }, /* SUB */
{ CPUFUNC(op_5140_5), 20800 }, /* SUB */
{ CPUFUNC(op_5148_5), 20808 }, /* SUBA */
{ CPUFUNC(op_5150_5), 20816 }, /* SUB */
{ CPUFUNC(op_5158_5), 20824 }, /* SUB */
{ CPUFUNC(op_5160_5), 20832 }, /* SUB */
{ CPUFUNC(op_5168_5), 20840 }, /* SUB */
{ CPUFUNC(op_5170_5), 20848 }, /* SUB */
{ CPUFUNC(op_5178_5), 20856 }, /* SUB */
{ CPUFUNC(op_5179_5), 20857 }, /* SUB */
{ CPUFUNC(op_5180_5), 20864 }, /* SUB */
{ CPUFUNC(op_5188_5), 20872 }, /* SUBA */
{ CPUFUNC(op_5190_5), 20880 }, /* SUB */
{ CPUFUNC(op_5198_5), 20888 }, /* SUB */
{ CPUFUNC(op_51a0_5), 20896 }, /* SUB */
{ CPUFUNC(op_51a8_5), 20904 }, /* SUB */
{ CPUFUNC(op_51b0_5), 20912 }, /* SUB */
{ CPUFUNC(op_51b8_5), 20920 }, /* SUB */
{ CPUFUNC(op_51b9_5), 20921 }, /* SUB */
{ CPUFUNC(op_51c0_5), 20928 }, /* Scc */
{ CPUFUNC(op_51c8_5), 20936 }, /* DBcc */
{ CPUFUNC(op_51d0_5), 20944 }, /* Scc */
{ CPUFUNC(op_51d8_5), 20952 }, /* Scc */
{ CPUFUNC(op_51e0_5), 20960 }, /* Scc */
{ CPUFUNC(op_51e8_5), 20968 }, /* Scc */
{ CPUFUNC(op_51f0_5), 20976 }, /* Scc */
{ CPUFUNC(op_51f8_5), 20984 }, /* Scc */
{ CPUFUNC(op_51f9_5), 20985 }, /* Scc */
{ CPUFUNC(op_52c0_5), 21184 }, /* Scc */
{ CPUFUNC(op_52c8_5), 21192 }, /* DBcc */
{ CPUFUNC(op_52d0_5), 21200 }, /* Scc */
{ CPUFUNC(op_52d8_5), 21208 }, /* Scc */
{ CPUFUNC(op_52e0_5), 21216 }, /* Scc */
{ CPUFUNC(op_52e8_5), 21224 }, /* Scc */
{ CPUFUNC(op_52f0_5), 21232 }, /* Scc */
{ CPUFUNC(op_52f8_5), 21240 }, /* Scc */
{ CPUFUNC(op_52f9_5), 21241 }, /* Scc */
{ CPUFUNC(op_53c0_5), 21440 }, /* Scc */
{ CPUFUNC(op_53c8_5), 21448 }, /* DBcc */
{ CPUFUNC(op_53d0_5), 21456 }, /* Scc */
{ CPUFUNC(op_53d8_5), 21464 }, /* Scc */
{ CPUFUNC(op_53e0_5), 21472 }, /* Scc */
{ CPUFUNC(op_53e8_5), 21480 }, /* Scc */
{ CPUFUNC(op_53f0_5), 21488 }, /* Scc */
{ CPUFUNC(op_53f8_5), 21496 }, /* Scc */
{ CPUFUNC(op_53f9_5), 21497 }, /* Scc */
{ CPUFUNC(op_54c0_5), 21696 }, /* Scc */
{ CPUFUNC(op_54c8_5), 21704 }, /* DBcc */
{ CPUFUNC(op_54d0_5), 21712 }, /* Scc */
{ CPUFUNC(op_54d8_5), 21720 }, /* Scc */
{ CPUFUNC(op_54e0_5), 21728 }, /* Scc */
{ CPUFUNC(op_54e8_5), 21736 }, /* Scc */
{ CPUFUNC(op_54f0_5), 21744 }, /* Scc */
{ CPUFUNC(op_54f8_5), 21752 }, /* Scc */
{ CPUFUNC(op_54f9_5), 21753 }, /* Scc */
{ CPUFUNC(op_55c0_5), 21952 }, /* Scc */
{ CPUFUNC(op_55c8_5), 21960 }, /* DBcc */
{ CPUFUNC(op_55d0_5), 21968 }, /* Scc */
{ CPUFUNC(op_55d8_5), 21976 }, /* Scc */
{ CPUFUNC(op_55e0_5), 21984 }, /* Scc */
{ CPUFUNC(op_55e8_5), 21992 }, /* Scc */
{ CPUFUNC(op_55f0_5), 22000 }, /* Scc */
{ CPUFUNC(op_55f8_5), 22008 }, /* Scc */
{ CPUFUNC(op_55f9_5), 22009 }, /* Scc */
{ CPUFUNC(op_56c0_5), 22208 }, /* Scc */
{ CPUFUNC(op_56c8_5), 22216 }, /* DBcc */
{ CPUFUNC(op_56d0_5), 22224 }, /* Scc */
{ CPUFUNC(op_56d8_5), 22232 }, /* Scc */
{ CPUFUNC(op_56e0_5), 22240 }, /* Scc */
{ CPUFUNC(op_56e8_5), 22248 }, /* Scc */
{ CPUFUNC(op_56f0_5), 22256 }, /* Scc */
{ CPUFUNC(op_56f8_5), 22264 }, /* Scc */
{ CPUFUNC(op_56f9_5), 22265 }, /* Scc */
{ CPUFUNC(op_57c0_5), 22464 }, /* Scc */
{ CPUFUNC(op_57c8_5), 22472 }, /* DBcc */
{ CPUFUNC(op_57d0_5), 22480 }, /* Scc */
{ CPUFUNC(op_57d8_5), 22488 }, /* Scc */
{ CPUFUNC(op_57e0_5), 22496 }, /* Scc */
{ CPUFUNC(op_57e8_5), 22504 }, /* Scc */
{ CPUFUNC(op_57f0_5), 22512 }, /* Scc */
{ CPUFUNC(op_57f8_5), 22520 }, /* Scc */
{ CPUFUNC(op_57f9_5), 22521 }, /* Scc */
{ CPUFUNC(op_58c0_5), 22720 }, /* Scc */
{ CPUFUNC(op_58c8_5), 22728 }, /* DBcc */
{ CPUFUNC(op_58d0_5), 22736 }, /* Scc */
{ CPUFUNC(op_58d8_5), 22744 }, /* Scc */
{ CPUFUNC(op_58e0_5), 22752 }, /* Scc */
{ CPUFUNC(op_58e8_5), 22760 }, /* Scc */
{ CPUFUNC(op_58f0_5), 22768 }, /* Scc */
{ CPUFUNC(op_58f8_5), 22776 }, /* Scc */
{ CPUFUNC(op_58f9_5), 22777 }, /* Scc */
{ CPUFUNC(op_59c0_5), 22976 }, /* Scc */
{ CPUFUNC(op_59c8_5), 22984 }, /* DBcc */
{ CPUFUNC(op_59d0_5), 22992 }, /* Scc */
{ CPUFUNC(op_59d8_5), 23000 }, /* Scc */
{ CPUFUNC(op_59e0_5), 23008 }, /* Scc */
{ CPUFUNC(op_59e8_5), 23016 }, /* Scc */
{ CPUFUNC(op_59f0_5), 23024 }, /* Scc */
{ CPUFUNC(op_59f8_5), 23032 }, /* Scc */
{ CPUFUNC(op_59f9_5), 23033 }, /* Scc */
{ CPUFUNC(op_5ac0_5), 23232 }, /* Scc */
{ CPUFUNC(op_5ac8_5), 23240 }, /* DBcc */
{ CPUFUNC(op_5ad0_5), 23248 }, /* Scc */
{ CPUFUNC(op_5ad8_5), 23256 }, /* Scc */
{ CPUFUNC(op_5ae0_5), 23264 }, /* Scc */
{ CPUFUNC(op_5ae8_5), 23272 }, /* Scc */
{ CPUFUNC(op_5af0_5), 23280 }, /* Scc */
{ CPUFUNC(op_5af8_5), 23288 }, /* Scc */
{ CPUFUNC(op_5af9_5), 23289 }, /* Scc */
{ CPUFUNC(op_5bc0_5), 23488 }, /* Scc */
{ CPUFUNC(op_5bc8_5), 23496 }, /* DBcc */
{ CPUFUNC(op_5bd0_5), 23504 }, /* Scc */
{ CPUFUNC(op_5bd8_5), 23512 }, /* Scc */
{ CPUFUNC(op_5be0_5), 23520 }, /* Scc */
{ CPUFUNC(op_5be8_5), 23528 }, /* Scc */
{ CPUFUNC(op_5bf0_5), 23536 }, /* Scc */
{ CPUFUNC(op_5bf8_5), 23544 }, /* Scc */
{ CPUFUNC(op_5bf9_5), 23545 }, /* Scc */
{ CPUFUNC(op_5cc0_5), 23744 }, /* Scc */
{ CPUFUNC(op_5cc8_5), 23752 }, /* DBcc */
{ CPUFUNC(op_5cd0_5), 23760 }, /* Scc */
{ CPUFUNC(op_5cd8_5), 23768 }, /* Scc */
{ CPUFUNC(op_5ce0_5), 23776 }, /* Scc */
{ CPUFUNC(op_5ce8_5), 23784 }, /* Scc */
{ CPUFUNC(op_5cf0_5), 23792 }, /* Scc */
{ CPUFUNC(op_5cf8_5), 23800 }, /* Scc */
{ CPUFUNC(op_5cf9_5), 23801 }, /* Scc */
{ CPUFUNC(op_5dc0_5), 24000 }, /* Scc */
{ CPUFUNC(op_5dc8_5), 24008 }, /* DBcc */
{ CPUFUNC(op_5dd0_5), 24016 }, /* Scc */
{ CPUFUNC(op_5dd8_5), 24024 }, /* Scc */
{ CPUFUNC(op_5de0_5), 24032 }, /* Scc */
{ CPUFUNC(op_5de8_5), 24040 }, /* Scc */
{ CPUFUNC(op_5df0_5), 24048 }, /* Scc */
{ CPUFUNC(op_5df8_5), 24056 }, /* Scc */
{ CPUFUNC(op_5df9_5), 24057 }, /* Scc */
{ CPUFUNC(op_5ec0_5), 24256 }, /* Scc */
{ CPUFUNC(op_5ec8_5), 24264 }, /* DBcc */
{ CPUFUNC(op_5ed0_5), 24272 }, /* Scc */
{ CPUFUNC(op_5ed8_5), 24280 }, /* Scc */
{ CPUFUNC(op_5ee0_5), 24288 }, /* Scc */
{ CPUFUNC(op_5ee8_5), 24296 }, /* Scc */
{ CPUFUNC(op_5ef0_5), 24304 }, /* Scc */
{ CPUFUNC(op_5ef8_5), 24312 }, /* Scc */
{ CPUFUNC(op_5ef9_5), 24313 }, /* Scc */
{ CPUFUNC(op_5fc0_5), 24512 }, /* Scc */
{ CPUFUNC(op_5fc8_5), 24520 }, /* DBcc */
{ CPUFUNC(op_5fd0_5), 24528 }, /* Scc */
{ CPUFUNC(op_5fd8_5), 24536 }, /* Scc */
{ CPUFUNC(op_5fe0_5), 24544 }, /* Scc */
{ CPUFUNC(op_5fe8_5), 24552 }, /* Scc */
{ CPUFUNC(op_5ff0_5), 24560 }, /* Scc */
{ CPUFUNC(op_5ff8_5), 24568 }, /* Scc */
{ CPUFUNC(op_5ff9_5), 24569 }, /* Scc */
{ CPUFUNC(op_6000_5), 24576 }, /* Bcc */
{ CPUFUNC(op_6001_5), 24577 }, /* Bcc */
{ CPUFUNC(op_60ff_5), 24831 }, /* Bcc */
{ CPUFUNC(op_6100_5), 24832 }, /* BSR */
{ CPUFUNC(op_6101_5), 24833 }, /* BSR */
{ CPUFUNC(op_61ff_5), 25087 }, /* BSR */
{ CPUFUNC(op_6200_5), 25088 }, /* Bcc */
{ CPUFUNC(op_6201_5), 25089 }, /* Bcc */
{ CPUFUNC(op_62ff_5), 25343 }, /* Bcc */
{ CPUFUNC(op_6300_5), 25344 }, /* Bcc */
{ CPUFUNC(op_6301_5), 25345 }, /* Bcc */
{ CPUFUNC(op_63ff_5), 25599 }, /* Bcc */
{ CPUFUNC(op_6400_5), 25600 }, /* Bcc */
{ CPUFUNC(op_6401_5), 25601 }, /* Bcc */
{ CPUFUNC(op_64ff_5), 25855 }, /* Bcc */
{ CPUFUNC(op_6500_5), 25856 }, /* Bcc */
{ CPUFUNC(op_6501_5), 25857 }, /* Bcc */
{ CPUFUNC(op_65ff_5), 26111 }, /* Bcc */
{ CPUFUNC(op_6600_5), 26112 }, /* Bcc */
{ CPUFUNC(op_6601_5), 26113 }, /* Bcc */
{ CPUFUNC(op_66ff_5), 26367 }, /* Bcc */
{ CPUFUNC(op_6700_5), 26368 }, /* Bcc */
{ CPUFUNC(op_6701_5), 26369 }, /* Bcc */
{ CPUFUNC(op_67ff_5), 26623 }, /* Bcc */
{ CPUFUNC(op_6800_5), 26624 }, /* Bcc */
{ CPUFUNC(op_6801_5), 26625 }, /* Bcc */
{ CPUFUNC(op_68ff_5), 26879 }, /* Bcc */
{ CPUFUNC(op_6900_5), 26880 }, /* Bcc */
{ CPUFUNC(op_6901_5), 26881 }, /* Bcc */
{ CPUFUNC(op_69ff_5), 27135 }, /* Bcc */
{ CPUFUNC(op_6a00_5), 27136 }, /* Bcc */
{ CPUFUNC(op_6a01_5), 27137 }, /* Bcc */
{ CPUFUNC(op_6aff_5), 27391 }, /* Bcc */
{ CPUFUNC(op_6b00_5), 27392 }, /* Bcc */
{ CPUFUNC(op_6b01_5), 27393 }, /* Bcc */
{ CPUFUNC(op_6bff_5), 27647 }, /* Bcc */
{ CPUFUNC(op_6c00_5), 27648 }, /* Bcc */
{ CPUFUNC(op_6c01_5), 27649 }, /* Bcc */
{ CPUFUNC(op_6cff_5), 27903 }, /* Bcc */
{ CPUFUNC(op_6d00_5), 27904 }, /* Bcc */
{ CPUFUNC(op_6d01_5), 27905 }, /* Bcc */
{ CPUFUNC(op_6dff_5), 28159 }, /* Bcc */
{ CPUFUNC(op_6e00_5), 28160 }, /* Bcc */
{ CPUFUNC(op_6e01_5), 28161 }, /* Bcc */
{ CPUFUNC(op_6eff_5), 28415 }, /* Bcc */
{ CPUFUNC(op_6f00_5), 28416 }, /* Bcc */
{ CPUFUNC(op_6f01_5), 28417 }, /* Bcc */
{ CPUFUNC(op_6fff_5), 28671 }, /* Bcc */
{ CPUFUNC(op_7000_5), 28672 }, /* MOVE */
{ CPUFUNC(op_8000_5), 32768 }, /* OR */
{ CPUFUNC(op_8010_5), 32784 }, /* OR */
{ CPUFUNC(op_8018_5), 32792 }, /* OR */
{ CPUFUNC(op_8020_5), 32800 }, /* OR */
{ CPUFUNC(op_8028_5), 32808 }, /* OR */
{ CPUFUNC(op_8030_5), 32816 }, /* OR */
{ CPUFUNC(op_8038_5), 32824 }, /* OR */
{ CPUFUNC(op_8039_5), 32825 }, /* OR */
{ CPUFUNC(op_803a_5), 32826 }, /* OR */
{ CPUFUNC(op_803b_5), 32827 }, /* OR */
{ CPUFUNC(op_803c_5), 32828 }, /* OR */
{ CPUFUNC(op_8040_5), 32832 }, /* OR */
{ CPUFUNC(op_8050_5), 32848 }, /* OR */
{ CPUFUNC(op_8058_5), 32856 }, /* OR */
{ CPUFUNC(op_8060_5), 32864 }, /* OR */
{ CPUFUNC(op_8068_5), 32872 }, /* OR */
{ CPUFUNC(op_8070_5), 32880 }, /* OR */
{ CPUFUNC(op_8078_5), 32888 }, /* OR */
{ CPUFUNC(op_8079_5), 32889 }, /* OR */
{ CPUFUNC(op_807a_5), 32890 }, /* OR */
{ CPUFUNC(op_807b_5), 32891 }, /* OR */
{ CPUFUNC(op_807c_5), 32892 }, /* OR */
{ CPUFUNC(op_8080_5), 32896 }, /* OR */
{ CPUFUNC(op_8090_5), 32912 }, /* OR */
{ CPUFUNC(op_8098_5), 32920 }, /* OR */
{ CPUFUNC(op_80a0_5), 32928 }, /* OR */
{ CPUFUNC(op_80a8_5), 32936 }, /* OR */
{ CPUFUNC(op_80b0_5), 32944 }, /* OR */
{ CPUFUNC(op_80b8_5), 32952 }, /* OR */
{ CPUFUNC(op_80b9_5), 32953 }, /* OR */
{ CPUFUNC(op_80ba_5), 32954 }, /* OR */
{ CPUFUNC(op_80bb_5), 32955 }, /* OR */
{ CPUFUNC(op_80bc_5), 32956 }, /* OR */
{ CPUFUNC(op_80c0_5), 32960 }, /* DIVU */
{ CPUFUNC(op_80d0_5), 32976 }, /* DIVU */
{ CPUFUNC(op_80d8_5), 32984 }, /* DIVU */
{ CPUFUNC(op_80e0_5), 32992 }, /* DIVU */
{ CPUFUNC(op_80e8_5), 33000 }, /* DIVU */
{ CPUFUNC(op_80f0_5), 33008 }, /* DIVU */
{ CPUFUNC(op_80f8_5), 33016 }, /* DIVU */
{ CPUFUNC(op_80f9_5), 33017 }, /* DIVU */
{ CPUFUNC(op_80fa_5), 33018 }, /* DIVU */
{ CPUFUNC(op_80fb_5), 33019 }, /* DIVU */
{ CPUFUNC(op_80fc_5), 33020 }, /* DIVU */
{ CPUFUNC(op_8100_5), 33024 }, /* SBCD */
{ CPUFUNC(op_8108_5), 33032 }, /* SBCD */
{ CPUFUNC(op_8110_5), 33040 }, /* OR */
{ CPUFUNC(op_8118_5), 33048 }, /* OR */
{ CPUFUNC(op_8120_5), 33056 }, /* OR */
{ CPUFUNC(op_8128_5), 33064 }, /* OR */
{ CPUFUNC(op_8130_5), 33072 }, /* OR */
{ CPUFUNC(op_8138_5), 33080 }, /* OR */
{ CPUFUNC(op_8139_5), 33081 }, /* OR */
{ CPUFUNC(op_8150_5), 33104 }, /* OR */
{ CPUFUNC(op_8158_5), 33112 }, /* OR */
{ CPUFUNC(op_8160_5), 33120 }, /* OR */
{ CPUFUNC(op_8168_5), 33128 }, /* OR */
{ CPUFUNC(op_8170_5), 33136 }, /* OR */
{ CPUFUNC(op_8178_5), 33144 }, /* OR */
{ CPUFUNC(op_8179_5), 33145 }, /* OR */
{ CPUFUNC(op_8190_5), 33168 }, /* OR */
{ CPUFUNC(op_8198_5), 33176 }, /* OR */
{ CPUFUNC(op_81a0_5), 33184 }, /* OR */
{ CPUFUNC(op_81a8_5), 33192 }, /* OR */
{ CPUFUNC(op_81b0_5), 33200 }, /* OR */
{ CPUFUNC(op_81b8_5), 33208 }, /* OR */
{ CPUFUNC(op_81b9_5), 33209 }, /* OR */
{ CPUFUNC(op_81c0_5), 33216 }, /* DIVS */
{ CPUFUNC(op_81d0_5), 33232 }, /* DIVS */
{ CPUFUNC(op_81d8_5), 33240 }, /* DIVS */
{ CPUFUNC(op_81e0_5), 33248 }, /* DIVS */
{ CPUFUNC(op_81e8_5), 33256 }, /* DIVS */
{ CPUFUNC(op_81f0_5), 33264 }, /* DIVS */
{ CPUFUNC(op_81f8_5), 33272 }, /* DIVS */
{ CPUFUNC(op_81f9_5), 33273 }, /* DIVS */
{ CPUFUNC(op_81fa_5), 33274 }, /* DIVS */
{ CPUFUNC(op_81fb_5), 33275 }, /* DIVS */
{ CPUFUNC(op_81fc_5), 33276 }, /* DIVS */
{ CPUFUNC(op_9000_5), 36864 }, /* SUB */
{ CPUFUNC(op_9010_5), 36880 }, /* SUB */
{ CPUFUNC(op_9018_5), 36888 }, /* SUB */
{ CPUFUNC(op_9020_5), 36896 }, /* SUB */
{ CPUFUNC(op_9028_5), 36904 }, /* SUB */
{ CPUFUNC(op_9030_5), 36912 }, /* SUB */
{ CPUFUNC(op_9038_5), 36920 }, /* SUB */
{ CPUFUNC(op_9039_5), 36921 }, /* SUB */
{ CPUFUNC(op_903a_5), 36922 }, /* SUB */
{ CPUFUNC(op_903b_5), 36923 }, /* SUB */
{ CPUFUNC(op_903c_5), 36924 }, /* SUB */
{ CPUFUNC(op_9040_5), 36928 }, /* SUB */
{ CPUFUNC(op_9048_5), 36936 }, /* SUB */
{ CPUFUNC(op_9050_5), 36944 }, /* SUB */
{ CPUFUNC(op_9058_5), 36952 }, /* SUB */
{ CPUFUNC(op_9060_5), 36960 }, /* SUB */
{ CPUFUNC(op_9068_5), 36968 }, /* SUB */
{ CPUFUNC(op_9070_5), 36976 }, /* SUB */
{ CPUFUNC(op_9078_5), 36984 }, /* SUB */
{ CPUFUNC(op_9079_5), 36985 }, /* SUB */
{ CPUFUNC(op_907a_5), 36986 }, /* SUB */
{ CPUFUNC(op_907b_5), 36987 }, /* SUB */
{ CPUFUNC(op_907c_5), 36988 }, /* SUB */
{ CPUFUNC(op_9080_5), 36992 }, /* SUB */
{ CPUFUNC(op_9088_5), 37000 }, /* SUB */
{ CPUFUNC(op_9090_5), 37008 }, /* SUB */
{ CPUFUNC(op_9098_5), 37016 }, /* SUB */
{ CPUFUNC(op_90a0_5), 37024 }, /* SUB */
{ CPUFUNC(op_90a8_5), 37032 }, /* SUB */
{ CPUFUNC(op_90b0_5), 37040 }, /* SUB */
{ CPUFUNC(op_90b8_5), 37048 }, /* SUB */
{ CPUFUNC(op_90b9_5), 37049 }, /* SUB */
{ CPUFUNC(op_90ba_5), 37050 }, /* SUB */
{ CPUFUNC(op_90bb_5), 37051 }, /* SUB */
{ CPUFUNC(op_90bc_5), 37052 }, /* SUB */
{ CPUFUNC(op_90c0_5), 37056 }, /* SUBA */
{ CPUFUNC(op_90c8_5), 37064 }, /* SUBA */
{ CPUFUNC(op_90d0_5), 37072 }, /* SUBA */
{ CPUFUNC(op_90d8_5), 37080 }, /* SUBA */
{ CPUFUNC(op_90e0_5), 37088 }, /* SUBA */
{ CPUFUNC(op_90e8_5), 37096 }, /* SUBA */
{ CPUFUNC(op_90f0_5), 37104 }, /* SUBA */
{ CPUFUNC(op_90f8_5), 37112 }, /* SUBA */
{ CPUFUNC(op_90f9_5), 37113 }, /* SUBA */
{ CPUFUNC(op_90fa_5), 37114 }, /* SUBA */
{ CPUFUNC(op_90fb_5), 37115 }, /* SUBA */
{ CPUFUNC(op_90fc_5), 37116 }, /* SUBA */
{ CPUFUNC(op_9100_5), 37120 }, /* SUBX */
{ CPUFUNC(op_9108_5), 37128 }, /* SUBX */
{ CPUFUNC(op_9110_5), 37136 }, /* SUB */
{ CPUFUNC(op_9118_5), 37144 }, /* SUB */
{ CPUFUNC(op_9120_5), 37152 }, /* SUB */
{ CPUFUNC(op_9128_5), 37160 }, /* SUB */
{ CPUFUNC(op_9130_5), 37168 }, /* SUB */
{ CPUFUNC(op_9138_5), 37176 }, /* SUB */
{ CPUFUNC(op_9139_5), 37177 }, /* SUB */
{ CPUFUNC(op_9140_5), 37184 }, /* SUBX */
{ CPUFUNC(op_9148_5), 37192 }, /* SUBX */
{ CPUFUNC(op_9150_5), 37200 }, /* SUB */
{ CPUFUNC(op_9158_5), 37208 }, /* SUB */
{ CPUFUNC(op_9160_5), 37216 }, /* SUB */
{ CPUFUNC(op_9168_5), 37224 }, /* SUB */
{ CPUFUNC(op_9170_5), 37232 }, /* SUB */
{ CPUFUNC(op_9178_5), 37240 }, /* SUB */
{ CPUFUNC(op_9179_5), 37241 }, /* SUB */
{ CPUFUNC(op_9180_5), 37248 }, /* SUBX */
{ CPUFUNC(op_9188_5), 37256 }, /* SUBX */
{ CPUFUNC(op_9190_5), 37264 }, /* SUB */
{ CPUFUNC(op_9198_5), 37272 }, /* SUB */
{ CPUFUNC(op_91a0_5), 37280 }, /* SUB */
{ CPUFUNC(op_91a8_5), 37288 }, /* SUB */
{ CPUFUNC(op_91b0_5), 37296 }, /* SUB */
{ CPUFUNC(op_91b8_5), 37304 }, /* SUB */
{ CPUFUNC(op_91b9_5), 37305 }, /* SUB */
{ CPUFUNC(op_91c0_5), 37312 }, /* SUBA */
{ CPUFUNC(op_91c8_5), 37320 }, /* SUBA */
{ CPUFUNC(op_91d0_5), 37328 }, /* SUBA */
{ CPUFUNC(op_91d8_5), 37336 }, /* SUBA */
{ CPUFUNC(op_91e0_5), 37344 }, /* SUBA */
{ CPUFUNC(op_91e8_5), 37352 }, /* SUBA */
{ CPUFUNC(op_91f0_5), 37360 }, /* SUBA */
{ CPUFUNC(op_91f8_5), 37368 }, /* SUBA */
{ CPUFUNC(op_91f9_5), 37369 }, /* SUBA */
{ CPUFUNC(op_91fa_5), 37370 }, /* SUBA */
{ CPUFUNC(op_91fb_5), 37371 }, /* SUBA */
{ CPUFUNC(op_91fc_5), 37372 }, /* SUBA */
{ CPUFUNC(op_b000_5), 45056 }, /* CMP */
{ CPUFUNC(op_b010_5), 45072 }, /* CMP */
{ CPUFUNC(op_b018_5), 45080 }, /* CMP */
{ CPUFUNC(op_b020_5), 45088 }, /* CMP */
{ CPUFUNC(op_b028_5), 45096 }, /* CMP */
{ CPUFUNC(op_b030_5), 45104 }, /* CMP */
{ CPUFUNC(op_b038_5), 45112 }, /* CMP */
{ CPUFUNC(op_b039_5), 45113 }, /* CMP */
{ CPUFUNC(op_b03a_5), 45114 }, /* CMP */
{ CPUFUNC(op_b03b_5), 45115 }, /* CMP */
{ CPUFUNC(op_b03c_5), 45116 }, /* CMP */
{ CPUFUNC(op_b040_5), 45120 }, /* CMP */
{ CPUFUNC(op_b048_5), 45128 }, /* CMP */
{ CPUFUNC(op_b050_5), 45136 }, /* CMP */
{ CPUFUNC(op_b058_5), 45144 }, /* CMP */
{ CPUFUNC(op_b060_5), 45152 }, /* CMP */
{ CPUFUNC(op_b068_5), 45160 }, /* CMP */
{ CPUFUNC(op_b070_5), 45168 }, /* CMP */
{ CPUFUNC(op_b078_5), 45176 }, /* CMP */
{ CPUFUNC(op_b079_5), 45177 }, /* CMP */
{ CPUFUNC(op_b07a_5), 45178 }, /* CMP */
{ CPUFUNC(op_b07b_5), 45179 }, /* CMP */
{ CPUFUNC(op_b07c_5), 45180 }, /* CMP */
{ CPUFUNC(op_b080_5), 45184 }, /* CMP */
{ CPUFUNC(op_b088_5), 45192 }, /* CMP */
{ CPUFUNC(op_b090_5), 45200 }, /* CMP */
{ CPUFUNC(op_b098_5), 45208 }, /* CMP */
{ CPUFUNC(op_b0a0_5), 45216 }, /* CMP */
{ CPUFUNC(op_b0a8_5), 45224 }, /* CMP */
{ CPUFUNC(op_b0b0_5), 45232 }, /* CMP */
{ CPUFUNC(op_b0b8_5), 45240 }, /* CMP */
{ CPUFUNC(op_b0b9_5), 45241 }, /* CMP */
{ CPUFUNC(op_b0ba_5), 45242 }, /* CMP */
{ CPUFUNC(op_b0bb_5), 45243 }, /* CMP */
{ CPUFUNC(op_b0bc_5), 45244 }, /* CMP */
{ CPUFUNC(op_b0c0_5), 45248 }, /* CMPA */
{ CPUFUNC(op_b0c8_5), 45256 }, /* CMPA */
{ CPUFUNC(op_b0d0_5), 45264 }, /* CMPA */
{ CPUFUNC(op_b0d8_5), 45272 }, /* CMPA */
{ CPUFUNC(op_b0e0_5), 45280 }, /* CMPA */
{ CPUFUNC(op_b0e8_5), 45288 }, /* CMPA */
{ CPUFUNC(op_b0f0_5), 45296 }, /* CMPA */
{ CPUFUNC(op_b0f8_5), 45304 }, /* CMPA */
{ CPUFUNC(op_b0f9_5), 45305 }, /* CMPA */
{ CPUFUNC(op_b0fa_5), 45306 }, /* CMPA */
{ CPUFUNC(op_b0fb_5), 45307 }, /* CMPA */
{ CPUFUNC(op_b0fc_5), 45308 }, /* CMPA */
{ CPUFUNC(op_b100_5), 45312 }, /* EOR */
{ CPUFUNC(op_b108_5), 45320 }, /* CMPM */
{ CPUFUNC(op_b110_5), 45328 }, /* EOR */
{ CPUFUNC(op_b118_5), 45336 }, /* EOR */
{ CPUFUNC(op_b120_5), 45344 }, /* EOR */
{ CPUFUNC(op_b128_5), 45352 }, /* EOR */
{ CPUFUNC(op_b130_5), 45360 }, /* EOR */
{ CPUFUNC(op_b138_5), 45368 }, /* EOR */
{ CPUFUNC(op_b139_5), 45369 }, /* EOR */
{ CPUFUNC(op_b140_5), 45376 }, /* EOR */
{ CPUFUNC(op_b148_5), 45384 }, /* CMPM */
{ CPUFUNC(op_b150_5), 45392 }, /* EOR */
{ CPUFUNC(op_b158_5), 45400 }, /* EOR */
{ CPUFUNC(op_b160_5), 45408 }, /* EOR */
{ CPUFUNC(op_b168_5), 45416 }, /* EOR */
{ CPUFUNC(op_b170_5), 45424 }, /* EOR */
{ CPUFUNC(op_b178_5), 45432 }, /* EOR */
{ CPUFUNC(op_b179_5), 45433 }, /* EOR */
{ CPUFUNC(op_b180_5), 45440 }, /* EOR */
{ CPUFUNC(op_b188_5), 45448 }, /* CMPM */
{ CPUFUNC(op_b190_5), 45456 }, /* EOR */
{ CPUFUNC(op_b198_5), 45464 }, /* EOR */
{ CPUFUNC(op_b1a0_5), 45472 }, /* EOR */
{ CPUFUNC(op_b1a8_5), 45480 }, /* EOR */
{ CPUFUNC(op_b1b0_5), 45488 }, /* EOR */
{ CPUFUNC(op_b1b8_5), 45496 }, /* EOR */
{ CPUFUNC(op_b1b9_5), 45497 }, /* EOR */
{ CPUFUNC(op_b1c0_5), 45504 }, /* CMPA */
{ CPUFUNC(op_b1c8_5), 45512 }, /* CMPA */
{ CPUFUNC(op_b1d0_5), 45520 }, /* CMPA */
{ CPUFUNC(op_b1d8_5), 45528 }, /* CMPA */
{ CPUFUNC(op_b1e0_5), 45536 }, /* CMPA */
{ CPUFUNC(op_b1e8_5), 45544 }, /* CMPA */
{ CPUFUNC(op_b1f0_5), 45552 }, /* CMPA */
{ CPUFUNC(op_b1f8_5), 45560 }, /* CMPA */
{ CPUFUNC(op_b1f9_5), 45561 }, /* CMPA */
{ CPUFUNC(op_b1fa_5), 45562 }, /* CMPA */
{ CPUFUNC(op_b1fb_5), 45563 }, /* CMPA */
{ CPUFUNC(op_b1fc_5), 45564 }, /* CMPA */
{ CPUFUNC(op_c000_5), 49152 }, /* AND */
{ CPUFUNC(op_c010_5), 49168 }, /* AND */
{ CPUFUNC(op_c018_5), 49176 }, /* AND */
{ CPUFUNC(op_c020_5), 49184 }, /* AND */
{ CPUFUNC(op_c028_5), 49192 }, /* AND */
{ CPUFUNC(op_c030_5), 49200 }, /* AND */
{ CPUFUNC(op_c038_5), 49208 }, /* AND */
{ CPUFUNC(op_c039_5), 49209 }, /* AND */
{ CPUFUNC(op_c03a_5), 49210 }, /* AND */
{ CPUFUNC(op_c03b_5), 49211 }, /* AND */
{ CPUFUNC(op_c03c_5), 49212 }, /* AND */
{ CPUFUNC(op_c040_5), 49216 }, /* AND */
{ CPUFUNC(op_c050_5), 49232 }, /* AND */
{ CPUFUNC(op_c058_5), 49240 }, /* AND */
{ CPUFUNC(op_c060_5), 49248 }, /* AND */
{ CPUFUNC(op_c068_5), 49256 }, /* AND */
{ CPUFUNC(op_c070_5), 49264 }, /* AND */
{ CPUFUNC(op_c078_5), 49272 }, /* AND */
{ CPUFUNC(op_c079_5), 49273 }, /* AND */
{ CPUFUNC(op_c07a_5), 49274 }, /* AND */
{ CPUFUNC(op_c07b_5), 49275 }, /* AND */
{ CPUFUNC(op_c07c_5), 49276 }, /* AND */
{ CPUFUNC(op_c080_5), 49280 }, /* AND */
{ CPUFUNC(op_c090_5), 49296 }, /* AND */
{ CPUFUNC(op_c098_5), 49304 }, /* AND */
{ CPUFUNC(op_c0a0_5), 49312 }, /* AND */
{ CPUFUNC(op_c0a8_5), 49320 }, /* AND */
{ CPUFUNC(op_c0b0_5), 49328 }, /* AND */
{ CPUFUNC(op_c0b8_5), 49336 }, /* AND */
{ CPUFUNC(op_c0b9_5), 49337 }, /* AND */
{ CPUFUNC(op_c0ba_5), 49338 }, /* AND */
{ CPUFUNC(op_c0bb_5), 49339 }, /* AND */
{ CPUFUNC(op_c0bc_5), 49340 }, /* AND */
{ CPUFUNC(op_c0c0_5), 49344 }, /* MULU */
{ CPUFUNC(op_c0d0_5), 49360 }, /* MULU */
{ CPUFUNC(op_c0d8_5), 49368 }, /* MULU */
{ CPUFUNC(op_c0e0_5), 49376 }, /* MULU */
{ CPUFUNC(op_c0e8_5), 49384 }, /* MULU */
{ CPUFUNC(op_c0f0_5), 49392 }, /* MULU */
{ CPUFUNC(op_c0f8_5), 49400 }, /* MULU */
{ CPUFUNC(op_c0f9_5), 49401 }, /* MULU */
{ CPUFUNC(op_c0fa_5), 49402 }, /* MULU */
{ CPUFUNC(op_c0fb_5), 49403 }, /* MULU */
{ CPUFUNC(op_c0fc_5), 49404 }, /* MULU */
{ CPUFUNC(op_c100_5), 49408 }, /* ABCD */
{ CPUFUNC(op_c108_5), 49416 }, /* ABCD */
{ CPUFUNC(op_c110_5), 49424 }, /* AND */
{ CPUFUNC(op_c118_5), 49432 }, /* AND */
{ CPUFUNC(op_c120_5), 49440 }, /* AND */
{ CPUFUNC(op_c128_5), 49448 }, /* AND */
{ CPUFUNC(op_c130_5), 49456 }, /* AND */
{ CPUFUNC(op_c138_5), 49464 }, /* AND */
{ CPUFUNC(op_c139_5), 49465 }, /* AND */
{ CPUFUNC(op_c140_5), 49472 }, /* EXG */
{ CPUFUNC(op_c148_5), 49480 }, /* EXG */
{ CPUFUNC(op_c150_5), 49488 }, /* AND */
{ CPUFUNC(op_c158_5), 49496 }, /* AND */
{ CPUFUNC(op_c160_5), 49504 }, /* AND */
{ CPUFUNC(op_c168_5), 49512 }, /* AND */
{ CPUFUNC(op_c170_5), 49520 }, /* AND */
{ CPUFUNC(op_c178_5), 49528 }, /* AND */
{ CPUFUNC(op_c179_5), 49529 }, /* AND */
{ CPUFUNC(op_c188_5), 49544 }, /* EXG */
{ CPUFUNC(op_c190_5), 49552 }, /* AND */
{ CPUFUNC(op_c198_5), 49560 }, /* AND */
{ CPUFUNC(op_c1a0_5), 49568 }, /* AND */
{ CPUFUNC(op_c1a8_5), 49576 }, /* AND */
{ CPUFUNC(op_c1b0_5), 49584 }, /* AND */
{ CPUFUNC(op_c1b8_5), 49592 }, /* AND */
{ CPUFUNC(op_c1b9_5), 49593 }, /* AND */
{ CPUFUNC(op_c1c0_5), 49600 }, /* MULS */
{ CPUFUNC(op_c1d0_5), 49616 }, /* MULS */
{ CPUFUNC(op_c1d8_5), 49624 }, /* MULS */
{ CPUFUNC(op_c1e0_5), 49632 }, /* MULS */
{ CPUFUNC(op_c1e8_5), 49640 }, /* MULS */
{ CPUFUNC(op_c1f0_5), 49648 }, /* MULS */
{ CPUFUNC(op_c1f8_5), 49656 }, /* MULS */
{ CPUFUNC(op_c1f9_5), 49657 }, /* MULS */
{ CPUFUNC(op_c1fa_5), 49658 }, /* MULS */
{ CPUFUNC(op_c1fb_5), 49659 }, /* MULS */
{ CPUFUNC(op_c1fc_5), 49660 }, /* MULS */
{ CPUFUNC(op_d000_5), 53248 }, /* ADD */
{ CPUFUNC(op_d010_5), 53264 }, /* ADD */
{ CPUFUNC(op_d018_5), 53272 }, /* ADD */
{ CPUFUNC(op_d020_5), 53280 }, /* ADD */
{ CPUFUNC(op_d028_5), 53288 }, /* ADD */
{ CPUFUNC(op_d030_5), 53296 }, /* ADD */
{ CPUFUNC(op_d038_5), 53304 }, /* ADD */
{ CPUFUNC(op_d039_5), 53305 }, /* ADD */
{ CPUFUNC(op_d03a_5), 53306 }, /* ADD */
{ CPUFUNC(op_d03b_5), 53307 }, /* ADD */
{ CPUFUNC(op_d03c_5), 53308 }, /* ADD */
{ CPUFUNC(op_d040_5), 53312 }, /* ADD */
{ CPUFUNC(op_d048_5), 53320 }, /* ADD */
{ CPUFUNC(op_d050_5), 53328 }, /* ADD */
{ CPUFUNC(op_d058_5), 53336 }, /* ADD */
{ CPUFUNC(op_d060_5), 53344 }, /* ADD */
{ CPUFUNC(op_d068_5), 53352 }, /* ADD */
{ CPUFUNC(op_d070_5), 53360 }, /* ADD */
{ CPUFUNC(op_d078_5), 53368 }, /* ADD */
{ CPUFUNC(op_d079_5), 53369 }, /* ADD */
{ CPUFUNC(op_d07a_5), 53370 }, /* ADD */
{ CPUFUNC(op_d07b_5), 53371 }, /* ADD */
{ CPUFUNC(op_d07c_5), 53372 }, /* ADD */
{ CPUFUNC(op_d080_5), 53376 }, /* ADD */
{ CPUFUNC(op_d088_5), 53384 }, /* ADD */
{ CPUFUNC(op_d090_5), 53392 }, /* ADD */
{ CPUFUNC(op_d098_5), 53400 }, /* ADD */
{ CPUFUNC(op_d0a0_5), 53408 }, /* ADD */
{ CPUFUNC(op_d0a8_5), 53416 }, /* ADD */
{ CPUFUNC(op_d0b0_5), 53424 }, /* ADD */
{ CPUFUNC(op_d0b8_5), 53432 }, /* ADD */
{ CPUFUNC(op_d0b9_5), 53433 }, /* ADD */
{ CPUFUNC(op_d0ba_5), 53434 }, /* ADD */
{ CPUFUNC(op_d0bb_5), 53435 }, /* ADD */
{ CPUFUNC(op_d0bc_5), 53436 }, /* ADD */
{ CPUFUNC(op_d0c0_5), 53440 }, /* ADDA */
{ CPUFUNC(op_d0c8_5), 53448 }, /* ADDA */
{ CPUFUNC(op_d0d0_5), 53456 }, /* ADDA */
{ CPUFUNC(op_d0d8_5), 53464 }, /* ADDA */
{ CPUFUNC(op_d0e0_5), 53472 }, /* ADDA */
{ CPUFUNC(op_d0e8_5), 53480 }, /* ADDA */
{ CPUFUNC(op_d0f0_5), 53488 }, /* ADDA */
{ CPUFUNC(op_d0f8_5), 53496 }, /* ADDA */
{ CPUFUNC(op_d0f9_5), 53497 }, /* ADDA */
{ CPUFUNC(op_d0fa_5), 53498 }, /* ADDA */
{ CPUFUNC(op_d0fb_5), 53499 }, /* ADDA */
{ CPUFUNC(op_d0fc_5), 53500 }, /* ADDA */
{ CPUFUNC(op_d100_5), 53504 }, /* ADDX */
{ CPUFUNC(op_d108_5), 53512 }, /* ADDX */
{ CPUFUNC(op_d110_5), 53520 }, /* ADD */
{ CPUFUNC(op_d118_5), 53528 }, /* ADD */
{ CPUFUNC(op_d120_5), 53536 }, /* ADD */
{ CPUFUNC(op_d128_5), 53544 }, /* ADD */
{ CPUFUNC(op_d130_5), 53552 }, /* ADD */
{ CPUFUNC(op_d138_5), 53560 }, /* ADD */
{ CPUFUNC(op_d139_5), 53561 }, /* ADD */
{ CPUFUNC(op_d140_5), 53568 }, /* ADDX */
{ CPUFUNC(op_d148_5), 53576 }, /* ADDX */
{ CPUFUNC(op_d150_5), 53584 }, /* ADD */
{ CPUFUNC(op_d158_5), 53592 }, /* ADD */
{ CPUFUNC(op_d160_5), 53600 }, /* ADD */
{ CPUFUNC(op_d168_5), 53608 }, /* ADD */
{ CPUFUNC(op_d170_5), 53616 }, /* ADD */
{ CPUFUNC(op_d178_5), 53624 }, /* ADD */
{ CPUFUNC(op_d179_5), 53625 }, /* ADD */
{ CPUFUNC(op_d180_5), 53632 }, /* ADDX */
{ CPUFUNC(op_d188_5), 53640 }, /* ADDX */
{ CPUFUNC(op_d190_5), 53648 }, /* ADD */
{ CPUFUNC(op_d198_5), 53656 }, /* ADD */
{ CPUFUNC(op_d1a0_5), 53664 }, /* ADD */
{ CPUFUNC(op_d1a8_5), 53672 }, /* ADD */
{ CPUFUNC(op_d1b0_5), 53680 }, /* ADD */
{ CPUFUNC(op_d1b8_5), 53688 }, /* ADD */
{ CPUFUNC(op_d1b9_5), 53689 }, /* ADD */
{ CPUFUNC(op_d1c0_5), 53696 }, /* ADDA */
{ CPUFUNC(op_d1c8_5), 53704 }, /* ADDA */
{ CPUFUNC(op_d1d0_5), 53712 }, /* ADDA */
{ CPUFUNC(op_d1d8_5), 53720 }, /* ADDA */
{ CPUFUNC(op_d1e0_5), 53728 }, /* ADDA */
{ CPUFUNC(op_d1e8_5), 53736 }, /* ADDA */
{ CPUFUNC(op_d1f0_5), 53744 }, /* ADDA */
{ CPUFUNC(op_d1f8_5), 53752 }, /* ADDA */
{ CPUFUNC(op_d1f9_5), 53753 }, /* ADDA */
{ CPUFUNC(op_d1fa_5), 53754 }, /* ADDA */
{ CPUFUNC(op_d1fb_5), 53755 }, /* ADDA */
{ CPUFUNC(op_d1fc_5), 53756 }, /* ADDA */
{ CPUFUNC(op_e000_5), 57344 }, /* ASR */
{ CPUFUNC(op_e008_5), 57352 }, /* LSR */
{ CPUFUNC(op_e010_5), 57360 }, /* ROXR */
{ CPUFUNC(op_e018_5), 57368 }, /* ROR */
{ CPUFUNC(op_e020_5), 57376 }, /* ASR */
{ CPUFUNC(op_e028_5), 57384 }, /* LSR */
{ CPUFUNC(op_e030_5), 57392 }, /* ROXR */
{ CPUFUNC(op_e038_5), 57400 }, /* ROR */
{ CPUFUNC(op_e040_5), 57408 }, /* ASR */
{ CPUFUNC(op_e048_5), 57416 }, /* LSR */
{ CPUFUNC(op_e050_5), 57424 }, /* ROXR */
{ CPUFUNC(op_e058_5), 57432 }, /* ROR */
{ CPUFUNC(op_e060_5), 57440 }, /* ASR */
{ CPUFUNC(op_e068_5), 57448 }, /* LSR */
{ CPUFUNC(op_e070_5), 57456 }, /* ROXR */
{ CPUFUNC(op_e078_5), 57464 }, /* ROR */
{ CPUFUNC(op_e080_5), 57472 }, /* ASR */
{ CPUFUNC(op_e088_5), 57480 }, /* LSR */
{ CPUFUNC(op_e090_5), 57488 }, /* ROXR */
{ CPUFUNC(op_e098_5), 57496 }, /* ROR */
{ CPUFUNC(op_e0a0_5), 57504 }, /* ASR */
{ CPUFUNC(op_e0a8_5), 57512 }, /* LSR */
{ CPUFUNC(op_e0b0_5), 57520 }, /* ROXR */
{ CPUFUNC(op_e0b8_5), 57528 }, /* ROR */
{ CPUFUNC(op_e0d0_5), 57552 }, /* ASRW */
{ CPUFUNC(op_e0d8_5), 57560 }, /* ASRW */
{ CPUFUNC(op_e0e0_5), 57568 }, /* ASRW */
{ CPUFUNC(op_e0e8_5), 57576 }, /* ASRW */
{ CPUFUNC(op_e0f0_5), 57584 }, /* ASRW */
{ CPUFUNC(op_e0f8_5), 57592 }, /* ASRW */
{ CPUFUNC(op_e0f9_5), 57593 }, /* ASRW */
{ CPUFUNC(op_e100_5), 57600 }, /* ASL */
{ CPUFUNC(op_e108_5), 57608 }, /* LSL */
{ CPUFUNC(op_e110_5), 57616 }, /* ROXL */
{ CPUFUNC(op_e118_5), 57624 }, /* ROL */
{ CPUFUNC(op_e120_5), 57632 }, /* ASL */
{ CPUFUNC(op_e128_5), 57640 }, /* LSL */
{ CPUFUNC(op_e130_5), 57648 }, /* ROXL */
{ CPUFUNC(op_e138_5), 57656 }, /* ROL */
{ CPUFUNC(op_e140_5), 57664 }, /* ASL */
{ CPUFUNC(op_e148_5), 57672 }, /* LSL */
{ CPUFUNC(op_e150_5), 57680 }, /* ROXL */
{ CPUFUNC(op_e158_5), 57688 }, /* ROL */
{ CPUFUNC(op_e160_5), 57696 }, /* ASL */
{ CPUFUNC(op_e168_5), 57704 }, /* LSL */
{ CPUFUNC(op_e170_5), 57712 }, /* ROXL */
{ CPUFUNC(op_e178_5), 57720 }, /* ROL */
{ CPUFUNC(op_e180_5), 57728 }, /* ASL */
{ CPUFUNC(op_e188_5), 57736 }, /* LSL */
{ CPUFUNC(op_e190_5), 57744 }, /* ROXL */
{ CPUFUNC(op_e198_5), 57752 }, /* ROL */
{ CPUFUNC(op_e1a0_5), 57760 }, /* ASL */
{ CPUFUNC(op_e1a8_5), 57768 }, /* LSL */
{ CPUFUNC(op_e1b0_5), 57776 }, /* ROXL */
{ CPUFUNC(op_e1b8_5), 57784 }, /* ROL */
{ CPUFUNC(op_e1d0_5), 57808 }, /* ASLW */
{ CPUFUNC(op_e1d8_5), 57816 }, /* ASLW */
{ CPUFUNC(op_e1e0_5), 57824 }, /* ASLW */
{ CPUFUNC(op_e1e8_5), 57832 }, /* ASLW */
{ CPUFUNC(op_e1f0_5), 57840 }, /* ASLW */
{ CPUFUNC(op_e1f8_5), 57848 }, /* ASLW */
{ CPUFUNC(op_e1f9_5), 57849 }, /* ASLW */
{ CPUFUNC(op_e2d0_5), 58064 }, /* LSRW */
{ CPUFUNC(op_e2d8_5), 58072 }, /* LSRW */
{ CPUFUNC(op_e2e0_5), 58080 }, /* LSRW */
{ CPUFUNC(op_e2e8_5), 58088 }, /* LSRW */
{ CPUFUNC(op_e2f0_5), 58096 }, /* LSRW */
{ CPUFUNC(op_e2f8_5), 58104 }, /* LSRW */
{ CPUFUNC(op_e2f9_5), 58105 }, /* LSRW */
{ CPUFUNC(op_e3d0_5), 58320 }, /* LSLW */
{ CPUFUNC(op_e3d8_5), 58328 }, /* LSLW */
{ CPUFUNC(op_e3e0_5), 58336 }, /* LSLW */
{ CPUFUNC(op_e3e8_5), 58344 }, /* LSLW */
{ CPUFUNC(op_e3f0_5), 58352 }, /* LSLW */
{ CPUFUNC(op_e3f8_5), 58360 }, /* LSLW */
{ CPUFUNC(op_e3f9_5), 58361 }, /* LSLW */
{ CPUFUNC(op_e4d0_5), 58576 }, /* ROXRW */
{ CPUFUNC(op_e4d8_5), 58584 }, /* ROXRW */
{ CPUFUNC(op_e4e0_5), 58592 }, /* ROXRW */
{ CPUFUNC(op_e4e8_5), 58600 }, /* ROXRW */
{ CPUFUNC(op_e4f0_5), 58608 }, /* ROXRW */
{ CPUFUNC(op_e4f8_5), 58616 }, /* ROXRW */
{ CPUFUNC(op_e4f9_5), 58617 }, /* ROXRW */
{ CPUFUNC(op_e5d0_5), 58832 }, /* ROXLW */
{ CPUFUNC(op_e5d8_5), 58840 }, /* ROXLW */
{ CPUFUNC(op_e5e0_5), 58848 }, /* ROXLW */
{ CPUFUNC(op_e5e8_5), 58856 }, /* ROXLW */
{ CPUFUNC(op_e5f0_5), 58864 }, /* ROXLW */
{ CPUFUNC(op_e5f8_5), 58872 }, /* ROXLW */
{ CPUFUNC(op_e5f9_5), 58873 }, /* ROXLW */
{ CPUFUNC(op_e6d0_5), 59088 }, /* RORW */
{ CPUFUNC(op_e6d8_5), 59096 }, /* RORW */
{ CPUFUNC(op_e6e0_5), 59104 }, /* RORW */
{ CPUFUNC(op_e6e8_5), 59112 }, /* RORW */
{ CPUFUNC(op_e6f0_5), 59120 }, /* RORW */
{ CPUFUNC(op_e6f8_5), 59128 }, /* RORW */
{ CPUFUNC(op_e6f9_5), 59129 }, /* RORW */
{ CPUFUNC(op_e7d0_5), 59344 }, /* ROLW */
{ CPUFUNC(op_e7d8_5), 59352 }, /* ROLW */
{ CPUFUNC(op_e7e0_5), 59360 }, /* ROLW */
{ CPUFUNC(op_e7e8_5), 59368 }, /* ROLW */
{ CPUFUNC(op_e7f0_5), 59376 }, /* ROLW */
{ CPUFUNC(op_e7f8_5), 59384 }, /* ROLW */
{ CPUFUNC(op_e7f9_5), 59385 }, /* ROLW */
{ 0, 0 }};
#endif /* CPUEMU_5 */
#ifdef CPUEMU_6
const struct cputbl CPUFUNC(op_smalltbl_6)[] = {
{ (cpuop_func*)CPUFUNC(op_0000_6), 0 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0010_6), 16 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0018_6), 24 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0020_6), 32 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0028_6), 40 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0030_6), 48 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0038_6), 56 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0039_6), 57 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_003c_6), 60 }, /* ORSR */
{ (cpuop_func*)CPUFUNC(op_0040_6), 64 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0050_6), 80 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0058_6), 88 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0060_6), 96 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0068_6), 104 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0070_6), 112 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0078_6), 120 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0079_6), 121 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_007c_6), 124 }, /* ORSR */
{ (cpuop_func*)CPUFUNC(op_0080_6), 128 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0090_6), 144 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0098_6), 152 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_00a0_6), 160 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_00a8_6), 168 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_00b0_6), 176 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_00b8_6), 184 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_00b9_6), 185 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_0100_6), 256 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0108_6), 264 }, /* MVPMR */
{ (cpuop_func*)CPUFUNC(op_0110_6), 272 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0118_6), 280 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0120_6), 288 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0128_6), 296 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0130_6), 304 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0138_6), 312 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0139_6), 313 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_013a_6), 314 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_013b_6), 315 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_013c_6), 316 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0140_6), 320 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0148_6), 328 }, /* MVPMR */
{ (cpuop_func*)CPUFUNC(op_0150_6), 336 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0158_6), 344 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0160_6), 352 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0168_6), 360 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0170_6), 368 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0178_6), 376 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0179_6), 377 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_017a_6), 378 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_017b_6), 379 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0180_6), 384 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_0188_6), 392 }, /* MVPRM */
{ (cpuop_func*)CPUFUNC(op_0190_6), 400 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_0198_6), 408 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01a0_6), 416 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01a8_6), 424 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01b0_6), 432 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01b8_6), 440 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01b9_6), 441 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01ba_6), 442 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01bb_6), 443 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_01c0_6), 448 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01c8_6), 456 }, /* MVPRM */
{ (cpuop_func*)CPUFUNC(op_01d0_6), 464 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01d8_6), 472 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01e0_6), 480 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01e8_6), 488 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01f0_6), 496 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01f8_6), 504 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01f9_6), 505 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01fa_6), 506 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_01fb_6), 507 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_0200_6), 512 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0210_6), 528 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0218_6), 536 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0220_6), 544 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0228_6), 552 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0230_6), 560 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0238_6), 568 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0239_6), 569 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_023c_6), 572 }, /* ANDSR */
{ (cpuop_func*)CPUFUNC(op_0240_6), 576 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0250_6), 592 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0258_6), 600 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0260_6), 608 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0268_6), 616 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0270_6), 624 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0278_6), 632 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0279_6), 633 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_027c_6), 636 }, /* ANDSR */
{ (cpuop_func*)CPUFUNC(op_0280_6), 640 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0290_6), 656 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0298_6), 664 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_02a0_6), 672 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_02a8_6), 680 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_02b0_6), 688 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_02b8_6), 696 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_02b9_6), 697 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_0400_6), 1024 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0410_6), 1040 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0418_6), 1048 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0420_6), 1056 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0428_6), 1064 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0430_6), 1072 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0438_6), 1080 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0439_6), 1081 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0440_6), 1088 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0450_6), 1104 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0458_6), 1112 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0460_6), 1120 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0468_6), 1128 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0470_6), 1136 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0478_6), 1144 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0479_6), 1145 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0480_6), 1152 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0490_6), 1168 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0498_6), 1176 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_04a0_6), 1184 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_04a8_6), 1192 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_04b0_6), 1200 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_04b8_6), 1208 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_04b9_6), 1209 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_0600_6), 1536 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0610_6), 1552 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0618_6), 1560 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0620_6), 1568 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0628_6), 1576 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0630_6), 1584 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0638_6), 1592 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0639_6), 1593 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0640_6), 1600 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0650_6), 1616 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0658_6), 1624 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0660_6), 1632 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0668_6), 1640 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0670_6), 1648 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0678_6), 1656 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0679_6), 1657 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0680_6), 1664 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0690_6), 1680 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0698_6), 1688 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_06a0_6), 1696 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_06a8_6), 1704 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_06b0_6), 1712 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_06b8_6), 1720 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_06b9_6), 1721 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_0800_6), 2048 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0810_6), 2064 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0818_6), 2072 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0820_6), 2080 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0828_6), 2088 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0830_6), 2096 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0838_6), 2104 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0839_6), 2105 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_083a_6), 2106 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_083b_6), 2107 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_083c_6), 2108 }, /* BTST */
{ (cpuop_func*)CPUFUNC(op_0840_6), 2112 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0850_6), 2128 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0858_6), 2136 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0860_6), 2144 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0868_6), 2152 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0870_6), 2160 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0878_6), 2168 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0879_6), 2169 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_087a_6), 2170 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_087b_6), 2171 }, /* BCHG */
{ (cpuop_func*)CPUFUNC(op_0880_6), 2176 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_0890_6), 2192 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_0898_6), 2200 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08a0_6), 2208 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08a8_6), 2216 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08b0_6), 2224 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08b8_6), 2232 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08b9_6), 2233 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08ba_6), 2234 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08bb_6), 2235 }, /* BCLR */
{ (cpuop_func*)CPUFUNC(op_08c0_6), 2240 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08d0_6), 2256 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08d8_6), 2264 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08e0_6), 2272 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08e8_6), 2280 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08f0_6), 2288 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08f8_6), 2296 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08f9_6), 2297 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08fa_6), 2298 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_08fb_6), 2299 }, /* BSET */
{ (cpuop_func*)CPUFUNC(op_0a00_6), 2560 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a10_6), 2576 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a18_6), 2584 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a20_6), 2592 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a28_6), 2600 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a30_6), 2608 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a38_6), 2616 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a39_6), 2617 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a3c_6), 2620 }, /* EORSR */
{ (cpuop_func*)CPUFUNC(op_0a40_6), 2624 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a50_6), 2640 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a58_6), 2648 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a60_6), 2656 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a68_6), 2664 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a70_6), 2672 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a78_6), 2680 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a79_6), 2681 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a7c_6), 2684 }, /* EORSR */
{ (cpuop_func*)CPUFUNC(op_0a80_6), 2688 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a90_6), 2704 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0a98_6), 2712 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0aa0_6), 2720 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0aa8_6), 2728 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0ab0_6), 2736 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0ab8_6), 2744 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0ab9_6), 2745 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_0c00_6), 3072 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c10_6), 3088 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c18_6), 3096 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c20_6), 3104 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c28_6), 3112 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c30_6), 3120 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c38_6), 3128 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c39_6), 3129 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c40_6), 3136 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c50_6), 3152 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c58_6), 3160 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c60_6), 3168 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c68_6), 3176 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c70_6), 3184 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c78_6), 3192 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c79_6), 3193 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c80_6), 3200 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c90_6), 3216 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0c98_6), 3224 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0ca0_6), 3232 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0ca8_6), 3240 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0cb0_6), 3248 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0cb8_6), 3256 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_0cb9_6), 3257 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_1000_6), 4096 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1010_6), 4112 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1018_6), 4120 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1020_6), 4128 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1028_6), 4136 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1030_6), 4144 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1038_6), 4152 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1039_6), 4153 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_103a_6), 4154 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_103b_6), 4155 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_103c_6), 4156 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1080_6), 4224 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1090_6), 4240 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1098_6), 4248 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10a0_6), 4256 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10a8_6), 4264 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10b0_6), 4272 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10b8_6), 4280 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10b9_6), 4281 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10ba_6), 4282 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10bb_6), 4283 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10bc_6), 4284 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10c0_6), 4288 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10d0_6), 4304 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10d8_6), 4312 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10e0_6), 4320 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10e8_6), 4328 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10f0_6), 4336 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10f8_6), 4344 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10f9_6), 4345 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10fa_6), 4346 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10fb_6), 4347 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_10fc_6), 4348 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1100_6), 4352 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1110_6), 4368 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1118_6), 4376 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1120_6), 4384 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1128_6), 4392 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1130_6), 4400 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1138_6), 4408 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1139_6), 4409 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_113a_6), 4410 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_113b_6), 4411 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_113c_6), 4412 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1140_6), 4416 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1150_6), 4432 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1158_6), 4440 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1160_6), 4448 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1168_6), 4456 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1170_6), 4464 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1178_6), 4472 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1179_6), 4473 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_117a_6), 4474 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_117b_6), 4475 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_117c_6), 4476 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1180_6), 4480 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1190_6), 4496 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_1198_6), 4504 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11a0_6), 4512 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11a8_6), 4520 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11b0_6), 4528 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11b8_6), 4536 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11b9_6), 4537 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11ba_6), 4538 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11bb_6), 4539 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11bc_6), 4540 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11c0_6), 4544 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11d0_6), 4560 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11d8_6), 4568 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11e0_6), 4576 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11e8_6), 4584 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11f0_6), 4592 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11f8_6), 4600 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11f9_6), 4601 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11fa_6), 4602 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11fb_6), 4603 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_11fc_6), 4604 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13c0_6), 5056 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13d0_6), 5072 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13d8_6), 5080 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13e0_6), 5088 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13e8_6), 5096 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13f0_6), 5104 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13f8_6), 5112 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13f9_6), 5113 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13fa_6), 5114 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13fb_6), 5115 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_13fc_6), 5116 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2000_6), 8192 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2008_6), 8200 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2010_6), 8208 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2018_6), 8216 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2020_6), 8224 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2028_6), 8232 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2030_6), 8240 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2038_6), 8248 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2039_6), 8249 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_203a_6), 8250 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_203b_6), 8251 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_203c_6), 8252 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2040_6), 8256 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2048_6), 8264 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2050_6), 8272 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2058_6), 8280 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2060_6), 8288 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2068_6), 8296 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2070_6), 8304 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2078_6), 8312 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2079_6), 8313 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_207a_6), 8314 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_207b_6), 8315 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_207c_6), 8316 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_2080_6), 8320 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2088_6), 8328 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2090_6), 8336 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2098_6), 8344 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20a0_6), 8352 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20a8_6), 8360 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20b0_6), 8368 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20b8_6), 8376 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20b9_6), 8377 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20ba_6), 8378 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20bb_6), 8379 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20bc_6), 8380 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20c0_6), 8384 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20c8_6), 8392 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20d0_6), 8400 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20d8_6), 8408 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20e0_6), 8416 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20e8_6), 8424 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20f0_6), 8432 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20f8_6), 8440 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20f9_6), 8441 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20fa_6), 8442 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20fb_6), 8443 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_20fc_6), 8444 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2100_6), 8448 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2108_6), 8456 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2110_6), 8464 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2118_6), 8472 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2120_6), 8480 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2128_6), 8488 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2130_6), 8496 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2138_6), 8504 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2139_6), 8505 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_213a_6), 8506 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_213b_6), 8507 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_213c_6), 8508 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2140_6), 8512 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2148_6), 8520 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2150_6), 8528 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2158_6), 8536 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2160_6), 8544 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2168_6), 8552 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2170_6), 8560 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2178_6), 8568 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2179_6), 8569 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_217a_6), 8570 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_217b_6), 8571 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_217c_6), 8572 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2180_6), 8576 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2188_6), 8584 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2190_6), 8592 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_2198_6), 8600 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21a0_6), 8608 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21a8_6), 8616 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21b0_6), 8624 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21b8_6), 8632 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21b9_6), 8633 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21ba_6), 8634 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21bb_6), 8635 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21bc_6), 8636 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21c0_6), 8640 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21c8_6), 8648 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21d0_6), 8656 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21d8_6), 8664 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21e0_6), 8672 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21e8_6), 8680 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21f0_6), 8688 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21f8_6), 8696 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21f9_6), 8697 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21fa_6), 8698 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21fb_6), 8699 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_21fc_6), 8700 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23c0_6), 9152 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23c8_6), 9160 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23d0_6), 9168 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23d8_6), 9176 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23e0_6), 9184 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23e8_6), 9192 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23f0_6), 9200 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23f8_6), 9208 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23f9_6), 9209 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23fa_6), 9210 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23fb_6), 9211 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_23fc_6), 9212 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3000_6), 12288 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3008_6), 12296 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3010_6), 12304 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3018_6), 12312 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3020_6), 12320 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3028_6), 12328 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3030_6), 12336 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3038_6), 12344 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3039_6), 12345 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_303a_6), 12346 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_303b_6), 12347 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_303c_6), 12348 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3040_6), 12352 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3048_6), 12360 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3050_6), 12368 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3058_6), 12376 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3060_6), 12384 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3068_6), 12392 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3070_6), 12400 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3078_6), 12408 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3079_6), 12409 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_307a_6), 12410 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_307b_6), 12411 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_307c_6), 12412 }, /* MOVEA */
{ (cpuop_func*)CPUFUNC(op_3080_6), 12416 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3088_6), 12424 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3090_6), 12432 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3098_6), 12440 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30a0_6), 12448 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30a8_6), 12456 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30b0_6), 12464 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30b8_6), 12472 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30b9_6), 12473 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30ba_6), 12474 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30bb_6), 12475 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30bc_6), 12476 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30c0_6), 12480 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30c8_6), 12488 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30d0_6), 12496 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30d8_6), 12504 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30e0_6), 12512 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30e8_6), 12520 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30f0_6), 12528 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30f8_6), 12536 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30f9_6), 12537 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30fa_6), 12538 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30fb_6), 12539 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_30fc_6), 12540 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3100_6), 12544 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3108_6), 12552 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3110_6), 12560 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3118_6), 12568 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3120_6), 12576 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3128_6), 12584 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3130_6), 12592 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3138_6), 12600 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3139_6), 12601 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_313a_6), 12602 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_313b_6), 12603 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_313c_6), 12604 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3140_6), 12608 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3148_6), 12616 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3150_6), 12624 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3158_6), 12632 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3160_6), 12640 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3168_6), 12648 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3170_6), 12656 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3178_6), 12664 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3179_6), 12665 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_317a_6), 12666 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_317b_6), 12667 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_317c_6), 12668 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3180_6), 12672 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3188_6), 12680 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3190_6), 12688 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_3198_6), 12696 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31a0_6), 12704 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31a8_6), 12712 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31b0_6), 12720 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31b8_6), 12728 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31b9_6), 12729 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31ba_6), 12730 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31bb_6), 12731 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31bc_6), 12732 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31c0_6), 12736 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31c8_6), 12744 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31d0_6), 12752 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31d8_6), 12760 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31e0_6), 12768 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31e8_6), 12776 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31f0_6), 12784 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31f8_6), 12792 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31f9_6), 12793 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31fa_6), 12794 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31fb_6), 12795 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_31fc_6), 12796 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33c0_6), 13248 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33c8_6), 13256 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33d0_6), 13264 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33d8_6), 13272 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33e0_6), 13280 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33e8_6), 13288 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33f0_6), 13296 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33f8_6), 13304 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33f9_6), 13305 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33fa_6), 13306 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33fb_6), 13307 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_33fc_6), 13308 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_4000_6), 16384 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4010_6), 16400 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4018_6), 16408 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4020_6), 16416 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4028_6), 16424 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4030_6), 16432 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4038_6), 16440 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4039_6), 16441 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4040_6), 16448 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4050_6), 16464 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4058_6), 16472 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4060_6), 16480 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4068_6), 16488 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4070_6), 16496 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4078_6), 16504 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4079_6), 16505 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4080_6), 16512 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4090_6), 16528 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_4098_6), 16536 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40a0_6), 16544 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40a8_6), 16552 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40b0_6), 16560 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40b8_6), 16568 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40b9_6), 16569 }, /* NEGX */
{ (cpuop_func*)CPUFUNC(op_40c0_6), 16576 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40d0_6), 16592 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40d8_6), 16600 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40e0_6), 16608 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40e8_6), 16616 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40f0_6), 16624 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40f8_6), 16632 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_40f9_6), 16633 }, /* MVSR2 */
{ (cpuop_func*)CPUFUNC(op_4100_6), 16640 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4110_6), 16656 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4118_6), 16664 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4120_6), 16672 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4128_6), 16680 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4130_6), 16688 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4138_6), 16696 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4139_6), 16697 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_413a_6), 16698 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_413b_6), 16699 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_413c_6), 16700 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4180_6), 16768 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4190_6), 16784 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_4198_6), 16792 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41a0_6), 16800 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41a8_6), 16808 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41b0_6), 16816 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41b8_6), 16824 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41b9_6), 16825 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41ba_6), 16826 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41bb_6), 16827 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41bc_6), 16828 }, /* CHK */
{ (cpuop_func*)CPUFUNC(op_41d0_6), 16848 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41e8_6), 16872 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41f0_6), 16880 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41f8_6), 16888 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41f9_6), 16889 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41fa_6), 16890 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_41fb_6), 16891 }, /* LEA */
{ (cpuop_func*)CPUFUNC(op_4200_6), 16896 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4210_6), 16912 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4218_6), 16920 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4220_6), 16928 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4228_6), 16936 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4230_6), 16944 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4238_6), 16952 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4239_6), 16953 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4240_6), 16960 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4250_6), 16976 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4258_6), 16984 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4260_6), 16992 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4268_6), 17000 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4270_6), 17008 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4278_6), 17016 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4279_6), 17017 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4280_6), 17024 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4290_6), 17040 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4298_6), 17048 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_42a0_6), 17056 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_42a8_6), 17064 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_42b0_6), 17072 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_42b8_6), 17080 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_42b9_6), 17081 }, /* CLR */
{ (cpuop_func*)CPUFUNC(op_4400_6), 17408 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4410_6), 17424 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4418_6), 17432 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4420_6), 17440 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4428_6), 17448 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4430_6), 17456 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4438_6), 17464 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4439_6), 17465 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4440_6), 17472 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4450_6), 17488 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4458_6), 17496 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4460_6), 17504 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4468_6), 17512 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4470_6), 17520 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4478_6), 17528 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4479_6), 17529 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4480_6), 17536 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4490_6), 17552 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_4498_6), 17560 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44a0_6), 17568 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44a8_6), 17576 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44b0_6), 17584 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44b8_6), 17592 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44b9_6), 17593 }, /* NEG */
{ (cpuop_func*)CPUFUNC(op_44c0_6), 17600 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44d0_6), 17616 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44d8_6), 17624 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44e0_6), 17632 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44e8_6), 17640 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44f0_6), 17648 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44f8_6), 17656 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44f9_6), 17657 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44fa_6), 17658 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44fb_6), 17659 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_44fc_6), 17660 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_4600_6), 17920 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4610_6), 17936 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4618_6), 17944 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4620_6), 17952 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4628_6), 17960 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4630_6), 17968 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4638_6), 17976 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4639_6), 17977 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4640_6), 17984 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4650_6), 18000 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4658_6), 18008 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4660_6), 18016 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4668_6), 18024 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4670_6), 18032 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4678_6), 18040 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4679_6), 18041 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4680_6), 18048 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4690_6), 18064 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_4698_6), 18072 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46a0_6), 18080 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46a8_6), 18088 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46b0_6), 18096 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46b8_6), 18104 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46b9_6), 18105 }, /* NOT */
{ (cpuop_func*)CPUFUNC(op_46c0_6), 18112 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46d0_6), 18128 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46d8_6), 18136 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46e0_6), 18144 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46e8_6), 18152 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46f0_6), 18160 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46f8_6), 18168 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46f9_6), 18169 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46fa_6), 18170 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46fb_6), 18171 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_46fc_6), 18172 }, /* MV2SR */
{ (cpuop_func*)CPUFUNC(op_4800_6), 18432 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4810_6), 18448 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4818_6), 18456 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4820_6), 18464 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4828_6), 18472 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4830_6), 18480 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4838_6), 18488 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4839_6), 18489 }, /* NBCD */
{ (cpuop_func*)CPUFUNC(op_4840_6), 18496 }, /* SWAP */
{ (cpuop_func*)CPUFUNC(op_4850_6), 18512 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_4868_6), 18536 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_4870_6), 18544 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_4878_6), 18552 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_4879_6), 18553 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_487a_6), 18554 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_487b_6), 18555 }, /* PEA */
{ (cpuop_func*)CPUFUNC(op_4880_6), 18560 }, /* EXT */
{ (cpuop_func*)CPUFUNC(op_4890_6), 18576 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48a0_6), 18592 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48a8_6), 18600 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48b0_6), 18608 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48b8_6), 18616 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48b9_6), 18617 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48c0_6), 18624 }, /* EXT */
{ (cpuop_func*)CPUFUNC(op_48d0_6), 18640 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48e0_6), 18656 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48e8_6), 18664 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48f0_6), 18672 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48f8_6), 18680 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_48f9_6), 18681 }, /* MVMLE */
{ (cpuop_func*)CPUFUNC(op_49c0_6), 18880 }, /* EXT */
{ (cpuop_func*)CPUFUNC(op_4a00_6), 18944 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a10_6), 18960 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a18_6), 18968 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a20_6), 18976 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a28_6), 18984 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a30_6), 18992 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a38_6), 19000 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a39_6), 19001 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a40_6), 19008 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a50_6), 19024 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a58_6), 19032 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a60_6), 19040 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a68_6), 19048 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a70_6), 19056 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a78_6), 19064 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a79_6), 19065 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a80_6), 19072 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a90_6), 19088 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4a98_6), 19096 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4aa0_6), 19104 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4aa8_6), 19112 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4ab0_6), 19120 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4ab8_6), 19128 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4ab9_6), 19129 }, /* TST */
{ (cpuop_func*)CPUFUNC(op_4ac0_6), 19136 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4ad0_6), 19152 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4ad8_6), 19160 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4ae0_6), 19168 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4ae8_6), 19176 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4af0_6), 19184 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4af8_6), 19192 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4af9_6), 19193 }, /* TAS */
{ (cpuop_func*)CPUFUNC(op_4c90_6), 19600 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4c98_6), 19608 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4ca8_6), 19624 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cb0_6), 19632 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cb8_6), 19640 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cb9_6), 19641 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cba_6), 19642 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cbb_6), 19643 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cd0_6), 19664 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cd8_6), 19672 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4ce8_6), 19688 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cf0_6), 19696 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cf8_6), 19704 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cf9_6), 19705 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cfa_6), 19706 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4cfb_6), 19707 }, /* MVMEL */
{ (cpuop_func*)CPUFUNC(op_4e40_6), 20032 }, /* TRAP */
{ (cpuop_func*)CPUFUNC(op_4e50_6), 20048 }, /* LINK */
{ (cpuop_func*)CPUFUNC(op_4e58_6), 20056 }, /* UNLK */
{ (cpuop_func*)CPUFUNC(op_4e60_6), 20064 }, /* MVR2USP */
{ (cpuop_func*)CPUFUNC(op_4e68_6), 20072 }, /* MVUSP2R */
{ (cpuop_func*)CPUFUNC(op_4e70_6), 20080 }, /* RESET */
{ (cpuop_func*)CPUFUNC(op_4e71_6), 20081 }, /* NOP */
{ (cpuop_func*)CPUFUNC(op_4e72_6), 20082 }, /* STOP */
{ (cpuop_func*)CPUFUNC(op_4e73_6), 20083 }, /* RTE */
{ (cpuop_func*)CPUFUNC(op_4e74_6), 20084 }, /* RTD */
{ (cpuop_func*)CPUFUNC(op_4e75_6), 20085 }, /* RTS */
{ (cpuop_func*)CPUFUNC(op_4e76_6), 20086 }, /* TRAPV */
{ (cpuop_func*)CPUFUNC(op_4e77_6), 20087 }, /* RTR */
{ (cpuop_func*)CPUFUNC(op_4e90_6), 20112 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4ea8_6), 20136 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4eb0_6), 20144 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4eb8_6), 20152 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4eb9_6), 20153 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4eba_6), 20154 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4ebb_6), 20155 }, /* JSR */
{ (cpuop_func*)CPUFUNC(op_4ed0_6), 20176 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4ee8_6), 20200 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4ef0_6), 20208 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4ef8_6), 20216 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4ef9_6), 20217 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4efa_6), 20218 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_4efb_6), 20219 }, /* JMP */
{ (cpuop_func*)CPUFUNC(op_5000_6), 20480 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5010_6), 20496 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5018_6), 20504 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5020_6), 20512 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5028_6), 20520 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5030_6), 20528 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5038_6), 20536 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5039_6), 20537 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5040_6), 20544 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5048_6), 20552 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_5050_6), 20560 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5058_6), 20568 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5060_6), 20576 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5068_6), 20584 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5070_6), 20592 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5078_6), 20600 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5079_6), 20601 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5080_6), 20608 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5088_6), 20616 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_5090_6), 20624 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_5098_6), 20632 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50a0_6), 20640 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50a8_6), 20648 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50b0_6), 20656 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50b8_6), 20664 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50b9_6), 20665 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_50c0_6), 20672 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50c8_6), 20680 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_50d0_6), 20688 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50d8_6), 20696 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50e0_6), 20704 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50e8_6), 20712 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50f0_6), 20720 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50f8_6), 20728 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_50f9_6), 20729 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5100_6), 20736 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5110_6), 20752 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5118_6), 20760 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5120_6), 20768 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5128_6), 20776 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5130_6), 20784 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5138_6), 20792 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5139_6), 20793 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5140_6), 20800 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5148_6), 20808 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_5150_6), 20816 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5158_6), 20824 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5160_6), 20832 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5168_6), 20840 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5170_6), 20848 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5178_6), 20856 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5179_6), 20857 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5180_6), 20864 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5188_6), 20872 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_5190_6), 20880 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_5198_6), 20888 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51a0_6), 20896 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51a8_6), 20904 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51b0_6), 20912 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51b8_6), 20920 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51b9_6), 20921 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_51c0_6), 20928 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51c8_6), 20936 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_51d0_6), 20944 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51d8_6), 20952 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51e0_6), 20960 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51e8_6), 20968 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51f0_6), 20976 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51f8_6), 20984 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_51f9_6), 20985 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52c0_6), 21184 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52c8_6), 21192 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_52d0_6), 21200 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52d8_6), 21208 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52e0_6), 21216 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52e8_6), 21224 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52f0_6), 21232 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52f8_6), 21240 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_52f9_6), 21241 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53c0_6), 21440 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53c8_6), 21448 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_53d0_6), 21456 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53d8_6), 21464 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53e0_6), 21472 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53e8_6), 21480 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53f0_6), 21488 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53f8_6), 21496 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_53f9_6), 21497 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54c0_6), 21696 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54c8_6), 21704 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_54d0_6), 21712 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54d8_6), 21720 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54e0_6), 21728 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54e8_6), 21736 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54f0_6), 21744 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54f8_6), 21752 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_54f9_6), 21753 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55c0_6), 21952 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55c8_6), 21960 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_55d0_6), 21968 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55d8_6), 21976 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55e0_6), 21984 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55e8_6), 21992 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55f0_6), 22000 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55f8_6), 22008 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_55f9_6), 22009 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56c0_6), 22208 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56c8_6), 22216 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_56d0_6), 22224 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56d8_6), 22232 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56e0_6), 22240 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56e8_6), 22248 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56f0_6), 22256 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56f8_6), 22264 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_56f9_6), 22265 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57c0_6), 22464 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57c8_6), 22472 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_57d0_6), 22480 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57d8_6), 22488 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57e0_6), 22496 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57e8_6), 22504 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57f0_6), 22512 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57f8_6), 22520 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_57f9_6), 22521 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58c0_6), 22720 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58c8_6), 22728 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_58d0_6), 22736 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58d8_6), 22744 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58e0_6), 22752 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58e8_6), 22760 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58f0_6), 22768 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58f8_6), 22776 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_58f9_6), 22777 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59c0_6), 22976 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59c8_6), 22984 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_59d0_6), 22992 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59d8_6), 23000 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59e0_6), 23008 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59e8_6), 23016 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59f0_6), 23024 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59f8_6), 23032 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_59f9_6), 23033 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ac0_6), 23232 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ac8_6), 23240 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5ad0_6), 23248 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ad8_6), 23256 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ae0_6), 23264 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ae8_6), 23272 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5af0_6), 23280 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5af8_6), 23288 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5af9_6), 23289 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bc0_6), 23488 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bc8_6), 23496 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5bd0_6), 23504 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bd8_6), 23512 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5be0_6), 23520 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5be8_6), 23528 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bf0_6), 23536 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bf8_6), 23544 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5bf9_6), 23545 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cc0_6), 23744 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cc8_6), 23752 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5cd0_6), 23760 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cd8_6), 23768 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ce0_6), 23776 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ce8_6), 23784 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cf0_6), 23792 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cf8_6), 23800 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5cf9_6), 23801 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5dc0_6), 24000 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5dc8_6), 24008 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5dd0_6), 24016 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5dd8_6), 24024 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5de0_6), 24032 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5de8_6), 24040 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5df0_6), 24048 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5df8_6), 24056 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5df9_6), 24057 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ec0_6), 24256 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ec8_6), 24264 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5ed0_6), 24272 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ed8_6), 24280 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ee0_6), 24288 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ee8_6), 24296 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ef0_6), 24304 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ef8_6), 24312 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ef9_6), 24313 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5fc0_6), 24512 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5fc8_6), 24520 }, /* DBcc */
{ (cpuop_func*)CPUFUNC(op_5fd0_6), 24528 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5fd8_6), 24536 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5fe0_6), 24544 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5fe8_6), 24552 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ff0_6), 24560 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ff8_6), 24568 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_5ff9_6), 24569 }, /* Scc */
{ (cpuop_func*)CPUFUNC(op_6000_6), 24576 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6001_6), 24577 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_60ff_6), 24831 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6100_6), 24832 }, /* BSR */
{ (cpuop_func*)CPUFUNC(op_6101_6), 24833 }, /* BSR */
{ (cpuop_func*)CPUFUNC(op_61ff_6), 25087 }, /* BSR */
{ (cpuop_func*)CPUFUNC(op_6200_6), 25088 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6201_6), 25089 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_62ff_6), 25343 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6300_6), 25344 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6301_6), 25345 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_63ff_6), 25599 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6400_6), 25600 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6401_6), 25601 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_64ff_6), 25855 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6500_6), 25856 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6501_6), 25857 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_65ff_6), 26111 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6600_6), 26112 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6601_6), 26113 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_66ff_6), 26367 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6700_6), 26368 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6701_6), 26369 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_67ff_6), 26623 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6800_6), 26624 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6801_6), 26625 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_68ff_6), 26879 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6900_6), 26880 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6901_6), 26881 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_69ff_6), 27135 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6a00_6), 27136 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6a01_6), 27137 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6aff_6), 27391 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6b00_6), 27392 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6b01_6), 27393 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6bff_6), 27647 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6c00_6), 27648 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6c01_6), 27649 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6cff_6), 27903 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6d00_6), 27904 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6d01_6), 27905 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6dff_6), 28159 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6e00_6), 28160 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6e01_6), 28161 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6eff_6), 28415 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6f00_6), 28416 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6f01_6), 28417 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_6fff_6), 28671 }, /* Bcc */
{ (cpuop_func*)CPUFUNC(op_7000_6), 28672 }, /* MOVE */
{ (cpuop_func*)CPUFUNC(op_8000_6), 32768 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8010_6), 32784 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8018_6), 32792 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8020_6), 32800 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8028_6), 32808 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8030_6), 32816 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8038_6), 32824 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8039_6), 32825 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_803a_6), 32826 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_803b_6), 32827 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_803c_6), 32828 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8040_6), 32832 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8050_6), 32848 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8058_6), 32856 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8060_6), 32864 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8068_6), 32872 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8070_6), 32880 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8078_6), 32888 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8079_6), 32889 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_807a_6), 32890 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_807b_6), 32891 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_807c_6), 32892 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8080_6), 32896 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8090_6), 32912 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8098_6), 32920 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80a0_6), 32928 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80a8_6), 32936 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80b0_6), 32944 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80b8_6), 32952 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80b9_6), 32953 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80ba_6), 32954 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80bb_6), 32955 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80bc_6), 32956 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_80c0_6), 32960 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80d0_6), 32976 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80d8_6), 32984 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80e0_6), 32992 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80e8_6), 33000 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80f0_6), 33008 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80f8_6), 33016 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80f9_6), 33017 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80fa_6), 33018 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80fb_6), 33019 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_80fc_6), 33020 }, /* DIVU */
{ (cpuop_func*)CPUFUNC(op_8100_6), 33024 }, /* SBCD */
{ (cpuop_func*)CPUFUNC(op_8108_6), 33032 }, /* SBCD */
{ (cpuop_func*)CPUFUNC(op_8110_6), 33040 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8118_6), 33048 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8120_6), 33056 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8128_6), 33064 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8130_6), 33072 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8138_6), 33080 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8139_6), 33081 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8150_6), 33104 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8158_6), 33112 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8160_6), 33120 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8168_6), 33128 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8170_6), 33136 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8178_6), 33144 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8179_6), 33145 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8190_6), 33168 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_8198_6), 33176 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81a0_6), 33184 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81a8_6), 33192 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81b0_6), 33200 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81b8_6), 33208 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81b9_6), 33209 }, /* OR */
{ (cpuop_func*)CPUFUNC(op_81c0_6), 33216 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81d0_6), 33232 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81d8_6), 33240 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81e0_6), 33248 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81e8_6), 33256 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81f0_6), 33264 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81f8_6), 33272 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81f9_6), 33273 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81fa_6), 33274 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81fb_6), 33275 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_81fc_6), 33276 }, /* DIVS */
{ (cpuop_func*)CPUFUNC(op_9000_6), 36864 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9010_6), 36880 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9018_6), 36888 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9020_6), 36896 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9028_6), 36904 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9030_6), 36912 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9038_6), 36920 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9039_6), 36921 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_903a_6), 36922 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_903b_6), 36923 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_903c_6), 36924 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9040_6), 36928 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9048_6), 36936 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9050_6), 36944 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9058_6), 36952 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9060_6), 36960 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9068_6), 36968 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9070_6), 36976 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9078_6), 36984 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9079_6), 36985 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_907a_6), 36986 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_907b_6), 36987 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_907c_6), 36988 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9080_6), 36992 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9088_6), 37000 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9090_6), 37008 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9098_6), 37016 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90a0_6), 37024 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90a8_6), 37032 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90b0_6), 37040 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90b8_6), 37048 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90b9_6), 37049 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90ba_6), 37050 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90bb_6), 37051 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90bc_6), 37052 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_90c0_6), 37056 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90c8_6), 37064 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90d0_6), 37072 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90d8_6), 37080 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90e0_6), 37088 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90e8_6), 37096 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90f0_6), 37104 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90f8_6), 37112 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90f9_6), 37113 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90fa_6), 37114 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90fb_6), 37115 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_90fc_6), 37116 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_9100_6), 37120 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9108_6), 37128 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9110_6), 37136 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9118_6), 37144 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9120_6), 37152 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9128_6), 37160 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9130_6), 37168 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9138_6), 37176 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9139_6), 37177 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9140_6), 37184 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9148_6), 37192 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9150_6), 37200 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9158_6), 37208 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9160_6), 37216 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9168_6), 37224 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9170_6), 37232 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9178_6), 37240 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9179_6), 37241 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9180_6), 37248 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9188_6), 37256 }, /* SUBX */
{ (cpuop_func*)CPUFUNC(op_9190_6), 37264 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_9198_6), 37272 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91a0_6), 37280 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91a8_6), 37288 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91b0_6), 37296 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91b8_6), 37304 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91b9_6), 37305 }, /* SUB */
{ (cpuop_func*)CPUFUNC(op_91c0_6), 37312 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91c8_6), 37320 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91d0_6), 37328 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91d8_6), 37336 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91e0_6), 37344 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91e8_6), 37352 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91f0_6), 37360 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91f8_6), 37368 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91f9_6), 37369 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91fa_6), 37370 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91fb_6), 37371 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_91fc_6), 37372 }, /* SUBA */
{ (cpuop_func*)CPUFUNC(op_b000_6), 45056 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b010_6), 45072 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b018_6), 45080 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b020_6), 45088 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b028_6), 45096 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b030_6), 45104 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b038_6), 45112 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b039_6), 45113 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b03a_6), 45114 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b03b_6), 45115 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b03c_6), 45116 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b040_6), 45120 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b048_6), 45128 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b050_6), 45136 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b058_6), 45144 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b060_6), 45152 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b068_6), 45160 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b070_6), 45168 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b078_6), 45176 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b079_6), 45177 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b07a_6), 45178 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b07b_6), 45179 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b07c_6), 45180 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b080_6), 45184 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b088_6), 45192 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b090_6), 45200 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b098_6), 45208 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0a0_6), 45216 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0a8_6), 45224 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0b0_6), 45232 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0b8_6), 45240 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0b9_6), 45241 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0ba_6), 45242 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0bb_6), 45243 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0bc_6), 45244 }, /* CMP */
{ (cpuop_func*)CPUFUNC(op_b0c0_6), 45248 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0c8_6), 45256 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0d0_6), 45264 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0d8_6), 45272 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0e0_6), 45280 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0e8_6), 45288 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0f0_6), 45296 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0f8_6), 45304 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0f9_6), 45305 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0fa_6), 45306 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0fb_6), 45307 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b0fc_6), 45308 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b100_6), 45312 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b108_6), 45320 }, /* CMPM */
{ (cpuop_func*)CPUFUNC(op_b110_6), 45328 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b118_6), 45336 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b120_6), 45344 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b128_6), 45352 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b130_6), 45360 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b138_6), 45368 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b139_6), 45369 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b140_6), 45376 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b148_6), 45384 }, /* CMPM */
{ (cpuop_func*)CPUFUNC(op_b150_6), 45392 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b158_6), 45400 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b160_6), 45408 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b168_6), 45416 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b170_6), 45424 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b178_6), 45432 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b179_6), 45433 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b180_6), 45440 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b188_6), 45448 }, /* CMPM */
{ (cpuop_func*)CPUFUNC(op_b190_6), 45456 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b198_6), 45464 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1a0_6), 45472 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1a8_6), 45480 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1b0_6), 45488 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1b8_6), 45496 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1b9_6), 45497 }, /* EOR */
{ (cpuop_func*)CPUFUNC(op_b1c0_6), 45504 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1c8_6), 45512 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1d0_6), 45520 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1d8_6), 45528 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1e0_6), 45536 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1e8_6), 45544 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1f0_6), 45552 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1f8_6), 45560 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1f9_6), 45561 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1fa_6), 45562 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1fb_6), 45563 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_b1fc_6), 45564 }, /* CMPA */
{ (cpuop_func*)CPUFUNC(op_c000_6), 49152 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c010_6), 49168 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c018_6), 49176 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c020_6), 49184 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c028_6), 49192 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c030_6), 49200 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c038_6), 49208 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c039_6), 49209 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c03a_6), 49210 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c03b_6), 49211 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c03c_6), 49212 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c040_6), 49216 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c050_6), 49232 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c058_6), 49240 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c060_6), 49248 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c068_6), 49256 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c070_6), 49264 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c078_6), 49272 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c079_6), 49273 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c07a_6), 49274 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c07b_6), 49275 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c07c_6), 49276 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c080_6), 49280 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c090_6), 49296 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c098_6), 49304 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0a0_6), 49312 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0a8_6), 49320 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0b0_6), 49328 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0b8_6), 49336 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0b9_6), 49337 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0ba_6), 49338 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0bb_6), 49339 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0bc_6), 49340 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c0c0_6), 49344 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0d0_6), 49360 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0d8_6), 49368 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0e0_6), 49376 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0e8_6), 49384 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0f0_6), 49392 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0f8_6), 49400 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0f9_6), 49401 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0fa_6), 49402 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0fb_6), 49403 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c0fc_6), 49404 }, /* MULU */
{ (cpuop_func*)CPUFUNC(op_c100_6), 49408 }, /* ABCD */
{ (cpuop_func*)CPUFUNC(op_c108_6), 49416 }, /* ABCD */
{ (cpuop_func*)CPUFUNC(op_c110_6), 49424 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c118_6), 49432 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c120_6), 49440 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c128_6), 49448 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c130_6), 49456 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c138_6), 49464 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c139_6), 49465 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c140_6), 49472 }, /* EXG */
{ (cpuop_func*)CPUFUNC(op_c148_6), 49480 }, /* EXG */
{ (cpuop_func*)CPUFUNC(op_c150_6), 49488 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c158_6), 49496 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c160_6), 49504 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c168_6), 49512 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c170_6), 49520 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c178_6), 49528 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c179_6), 49529 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c188_6), 49544 }, /* EXG */
{ (cpuop_func*)CPUFUNC(op_c190_6), 49552 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c198_6), 49560 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1a0_6), 49568 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1a8_6), 49576 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1b0_6), 49584 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1b8_6), 49592 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1b9_6), 49593 }, /* AND */
{ (cpuop_func*)CPUFUNC(op_c1c0_6), 49600 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1d0_6), 49616 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1d8_6), 49624 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1e0_6), 49632 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1e8_6), 49640 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1f0_6), 49648 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1f8_6), 49656 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1f9_6), 49657 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1fa_6), 49658 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1fb_6), 49659 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_c1fc_6), 49660 }, /* MULS */
{ (cpuop_func*)CPUFUNC(op_d000_6), 53248 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d010_6), 53264 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d018_6), 53272 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d020_6), 53280 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d028_6), 53288 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d030_6), 53296 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d038_6), 53304 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d039_6), 53305 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d03a_6), 53306 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d03b_6), 53307 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d03c_6), 53308 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d040_6), 53312 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d048_6), 53320 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d050_6), 53328 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d058_6), 53336 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d060_6), 53344 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d068_6), 53352 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d070_6), 53360 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d078_6), 53368 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d079_6), 53369 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d07a_6), 53370 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d07b_6), 53371 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d07c_6), 53372 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d080_6), 53376 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d088_6), 53384 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d090_6), 53392 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d098_6), 53400 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0a0_6), 53408 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0a8_6), 53416 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0b0_6), 53424 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0b8_6), 53432 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0b9_6), 53433 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0ba_6), 53434 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0bb_6), 53435 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0bc_6), 53436 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d0c0_6), 53440 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0c8_6), 53448 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0d0_6), 53456 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0d8_6), 53464 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0e0_6), 53472 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0e8_6), 53480 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0f0_6), 53488 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0f8_6), 53496 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0f9_6), 53497 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0fa_6), 53498 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0fb_6), 53499 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d0fc_6), 53500 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d100_6), 53504 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d108_6), 53512 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d110_6), 53520 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d118_6), 53528 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d120_6), 53536 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d128_6), 53544 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d130_6), 53552 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d138_6), 53560 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d139_6), 53561 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d140_6), 53568 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d148_6), 53576 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d150_6), 53584 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d158_6), 53592 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d160_6), 53600 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d168_6), 53608 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d170_6), 53616 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d178_6), 53624 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d179_6), 53625 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d180_6), 53632 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d188_6), 53640 }, /* ADDX */
{ (cpuop_func*)CPUFUNC(op_d190_6), 53648 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d198_6), 53656 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1a0_6), 53664 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1a8_6), 53672 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1b0_6), 53680 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1b8_6), 53688 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1b9_6), 53689 }, /* ADD */
{ (cpuop_func*)CPUFUNC(op_d1c0_6), 53696 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1c8_6), 53704 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1d0_6), 53712 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1d8_6), 53720 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1e0_6), 53728 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1e8_6), 53736 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1f0_6), 53744 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1f8_6), 53752 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1f9_6), 53753 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1fa_6), 53754 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1fb_6), 53755 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_d1fc_6), 53756 }, /* ADDA */
{ (cpuop_func*)CPUFUNC(op_e000_6), 57344 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e008_6), 57352 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e010_6), 57360 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e018_6), 57368 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e020_6), 57376 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e028_6), 57384 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e030_6), 57392 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e038_6), 57400 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e040_6), 57408 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e048_6), 57416 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e050_6), 57424 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e058_6), 57432 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e060_6), 57440 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e068_6), 57448 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e070_6), 57456 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e078_6), 57464 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e080_6), 57472 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e088_6), 57480 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e090_6), 57488 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e098_6), 57496 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e0a0_6), 57504 }, /* ASR */
{ (cpuop_func*)CPUFUNC(op_e0a8_6), 57512 }, /* LSR */
{ (cpuop_func*)CPUFUNC(op_e0b0_6), 57520 }, /* ROXR */
{ (cpuop_func*)CPUFUNC(op_e0b8_6), 57528 }, /* ROR */
{ (cpuop_func*)CPUFUNC(op_e0d0_6), 57552 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0d8_6), 57560 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0e0_6), 57568 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0e8_6), 57576 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0f0_6), 57584 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0f8_6), 57592 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e0f9_6), 57593 }, /* ASRW */
{ (cpuop_func*)CPUFUNC(op_e100_6), 57600 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e108_6), 57608 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e110_6), 57616 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e118_6), 57624 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e120_6), 57632 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e128_6), 57640 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e130_6), 57648 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e138_6), 57656 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e140_6), 57664 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e148_6), 57672 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e150_6), 57680 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e158_6), 57688 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e160_6), 57696 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e168_6), 57704 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e170_6), 57712 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e178_6), 57720 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e180_6), 57728 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e188_6), 57736 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e190_6), 57744 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e198_6), 57752 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e1a0_6), 57760 }, /* ASL */
{ (cpuop_func*)CPUFUNC(op_e1a8_6), 57768 }, /* LSL */
{ (cpuop_func*)CPUFUNC(op_e1b0_6), 57776 }, /* ROXL */
{ (cpuop_func*)CPUFUNC(op_e1b8_6), 57784 }, /* ROL */
{ (cpuop_func*)CPUFUNC(op_e1d0_6), 57808 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1d8_6), 57816 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1e0_6), 57824 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1e8_6), 57832 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1f0_6), 57840 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1f8_6), 57848 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e1f9_6), 57849 }, /* ASLW */
{ (cpuop_func*)CPUFUNC(op_e2d0_6), 58064 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2d8_6), 58072 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2e0_6), 58080 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2e8_6), 58088 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2f0_6), 58096 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2f8_6), 58104 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e2f9_6), 58105 }, /* LSRW */
{ (cpuop_func*)CPUFUNC(op_e3d0_6), 58320 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3d8_6), 58328 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3e0_6), 58336 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3e8_6), 58344 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3f0_6), 58352 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3f8_6), 58360 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e3f9_6), 58361 }, /* LSLW */
{ (cpuop_func*)CPUFUNC(op_e4d0_6), 58576 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4d8_6), 58584 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4e0_6), 58592 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4e8_6), 58600 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4f0_6), 58608 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4f8_6), 58616 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e4f9_6), 58617 }, /* ROXRW */
{ (cpuop_func*)CPUFUNC(op_e5d0_6), 58832 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5d8_6), 58840 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5e0_6), 58848 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5e8_6), 58856 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5f0_6), 58864 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5f8_6), 58872 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e5f9_6), 58873 }, /* ROXLW */
{ (cpuop_func*)CPUFUNC(op_e6d0_6), 59088 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6d8_6), 59096 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6e0_6), 59104 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6e8_6), 59112 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6f0_6), 59120 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6f8_6), 59128 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e6f9_6), 59129 }, /* RORW */
{ (cpuop_func*)CPUFUNC(op_e7d0_6), 59344 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7d8_6), 59352 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7e0_6), 59360 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7e8_6), 59368 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7f0_6), 59376 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7f8_6), 59384 }, /* ROLW */
{ (cpuop_func*)CPUFUNC(op_e7f9_6), 59385 }, /* ROLW */
{ 0, 0 }};
#endif /* CPUEMU_6 */
