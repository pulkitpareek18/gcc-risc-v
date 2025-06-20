/* Generated automatically from machmode.def and config/riscv/riscv-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  E_VOIDmode,              /* machmode.def:194 */
#define HAVE_VOIDmode
#ifdef USE_ENUM_MODES
#define VOIDmode E_VOIDmode
#else
#define VOIDmode ((void) 0, E_VOIDmode)
#endif
  E_BLKmode,               /* machmode.def:198 */
#define HAVE_BLKmode
#ifdef USE_ENUM_MODES
#define BLKmode E_BLKmode
#else
#define BLKmode ((void) 0, E_BLKmode)
#endif
  E_CCmode,                /* machmode.def:236 */
#define HAVE_CCmode
#ifdef USE_ENUM_MODES
#define CCmode E_CCmode
#else
#define CCmode ((void) 0, E_CCmode)
#endif
  E_BImode,                /* machmode.def:201 */
#define HAVE_BImode
#ifdef USE_ENUM_MODES
#define BImode E_BImode
#else
#define BImode (scalar_int_mode ((scalar_int_mode::from_int) E_BImode))
#endif
  E_QImode,                /* machmode.def:209 */
#define HAVE_QImode
#ifdef USE_ENUM_MODES
#define QImode E_QImode
#else
#define QImode (scalar_int_mode ((scalar_int_mode::from_int) E_QImode))
#endif
  E_HImode,                /* machmode.def:210 */
#define HAVE_HImode
#ifdef USE_ENUM_MODES
#define HImode E_HImode
#else
#define HImode (scalar_int_mode ((scalar_int_mode::from_int) E_HImode))
#endif
  E_SImode,                /* machmode.def:211 */
#define HAVE_SImode
#ifdef USE_ENUM_MODES
#define SImode E_SImode
#else
#define SImode (scalar_int_mode ((scalar_int_mode::from_int) E_SImode))
#endif
  E_DImode,                /* machmode.def:212 */
#define HAVE_DImode
#ifdef USE_ENUM_MODES
#define DImode E_DImode
#else
#define DImode (scalar_int_mode ((scalar_int_mode::from_int) E_DImode))
#endif
  E_TImode,                /* machmode.def:213 */
#define HAVE_TImode
#ifdef USE_ENUM_MODES
#define TImode E_TImode
#else
#define TImode (scalar_int_mode ((scalar_int_mode::from_int) E_TImode))
#endif
  E_QQmode,                /* machmode.def:239 */
#define HAVE_QQmode
#ifdef USE_ENUM_MODES
#define QQmode E_QQmode
#else
#define QQmode (scalar_mode ((scalar_mode::from_int) E_QQmode))
#endif
  E_HQmode,                /* machmode.def:240 */
#define HAVE_HQmode
#ifdef USE_ENUM_MODES
#define HQmode E_HQmode
#else
#define HQmode (scalar_mode ((scalar_mode::from_int) E_HQmode))
#endif
  E_SQmode,                /* machmode.def:241 */
#define HAVE_SQmode
#ifdef USE_ENUM_MODES
#define SQmode E_SQmode
#else
#define SQmode (scalar_mode ((scalar_mode::from_int) E_SQmode))
#endif
  E_DQmode,                /* machmode.def:242 */
#define HAVE_DQmode
#ifdef USE_ENUM_MODES
#define DQmode E_DQmode
#else
#define DQmode (scalar_mode ((scalar_mode::from_int) E_DQmode))
#endif
  E_TQmode,                /* machmode.def:243 */
#define HAVE_TQmode
#ifdef USE_ENUM_MODES
#define TQmode E_TQmode
#else
#define TQmode (scalar_mode ((scalar_mode::from_int) E_TQmode))
#endif
  E_UQQmode,               /* machmode.def:245 */
#define HAVE_UQQmode
#ifdef USE_ENUM_MODES
#define UQQmode E_UQQmode
#else
#define UQQmode (scalar_mode ((scalar_mode::from_int) E_UQQmode))
#endif
  E_UHQmode,               /* machmode.def:246 */
#define HAVE_UHQmode
#ifdef USE_ENUM_MODES
#define UHQmode E_UHQmode
#else
#define UHQmode (scalar_mode ((scalar_mode::from_int) E_UHQmode))
#endif
  E_USQmode,               /* machmode.def:247 */
#define HAVE_USQmode
#ifdef USE_ENUM_MODES
#define USQmode E_USQmode
#else
#define USQmode (scalar_mode ((scalar_mode::from_int) E_USQmode))
#endif
  E_UDQmode,               /* machmode.def:248 */
#define HAVE_UDQmode
#ifdef USE_ENUM_MODES
#define UDQmode E_UDQmode
#else
#define UDQmode (scalar_mode ((scalar_mode::from_int) E_UDQmode))
#endif
  E_UTQmode,               /* machmode.def:249 */
#define HAVE_UTQmode
#ifdef USE_ENUM_MODES
#define UTQmode E_UTQmode
#else
#define UTQmode (scalar_mode ((scalar_mode::from_int) E_UTQmode))
#endif
  E_HAmode,                /* machmode.def:251 */
#define HAVE_HAmode
#ifdef USE_ENUM_MODES
#define HAmode E_HAmode
#else
#define HAmode (scalar_mode ((scalar_mode::from_int) E_HAmode))
#endif
  E_SAmode,                /* machmode.def:252 */
#define HAVE_SAmode
#ifdef USE_ENUM_MODES
#define SAmode E_SAmode
#else
#define SAmode (scalar_mode ((scalar_mode::from_int) E_SAmode))
#endif
  E_DAmode,                /* machmode.def:253 */
#define HAVE_DAmode
#ifdef USE_ENUM_MODES
#define DAmode E_DAmode
#else
#define DAmode (scalar_mode ((scalar_mode::from_int) E_DAmode))
#endif
  E_TAmode,                /* machmode.def:254 */
#define HAVE_TAmode
#ifdef USE_ENUM_MODES
#define TAmode E_TAmode
#else
#define TAmode (scalar_mode ((scalar_mode::from_int) E_TAmode))
#endif
  E_UHAmode,               /* machmode.def:256 */
#define HAVE_UHAmode
#ifdef USE_ENUM_MODES
#define UHAmode E_UHAmode
#else
#define UHAmode (scalar_mode ((scalar_mode::from_int) E_UHAmode))
#endif
  E_USAmode,               /* machmode.def:257 */
#define HAVE_USAmode
#ifdef USE_ENUM_MODES
#define USAmode E_USAmode
#else
#define USAmode (scalar_mode ((scalar_mode::from_int) E_USAmode))
#endif
  E_UDAmode,               /* machmode.def:258 */
#define HAVE_UDAmode
#ifdef USE_ENUM_MODES
#define UDAmode E_UDAmode
#else
#define UDAmode (scalar_mode ((scalar_mode::from_int) E_UDAmode))
#endif
  E_UTAmode,               /* machmode.def:259 */
#define HAVE_UTAmode
#ifdef USE_ENUM_MODES
#define UTAmode E_UTAmode
#else
#define UTAmode (scalar_mode ((scalar_mode::from_int) E_UTAmode))
#endif
  E_HFmode,                /* config/riscv/riscv-modes.def:22 */
#define HAVE_HFmode
#ifdef USE_ENUM_MODES
#define HFmode E_HFmode
#else
#define HFmode (scalar_float_mode ((scalar_float_mode::from_int) E_HFmode))
#endif
  E_BFmode,                /* config/riscv/riscv-modes.def:24 */
#define HAVE_BFmode
#ifdef USE_ENUM_MODES
#define BFmode E_BFmode
#else
#define BFmode (scalar_float_mode ((scalar_float_mode::from_int) E_BFmode))
#endif
  E_SFmode,                /* machmode.def:231 */
#define HAVE_SFmode
#ifdef USE_ENUM_MODES
#define SFmode E_SFmode
#else
#define SFmode (scalar_float_mode ((scalar_float_mode::from_int) E_SFmode))
#endif
  E_DFmode,                /* machmode.def:232 */
#define HAVE_DFmode
#ifdef USE_ENUM_MODES
#define DFmode E_DFmode
#else
#define DFmode (scalar_float_mode ((scalar_float_mode::from_int) E_DFmode))
#endif
  E_TFmode,                /* config/riscv/riscv-modes.def:23 */
#define HAVE_TFmode
#ifdef USE_ENUM_MODES
#define TFmode E_TFmode
#else
#define TFmode (scalar_float_mode ((scalar_float_mode::from_int) E_TFmode))
#endif
  E_SDmode,                /* machmode.def:272 */
#define HAVE_SDmode
#ifdef USE_ENUM_MODES
#define SDmode E_SDmode
#else
#define SDmode (scalar_float_mode ((scalar_float_mode::from_int) E_SDmode))
#endif
  E_DDmode,                /* machmode.def:273 */
#define HAVE_DDmode
#ifdef USE_ENUM_MODES
#define DDmode E_DDmode
#else
#define DDmode (scalar_float_mode ((scalar_float_mode::from_int) E_DDmode))
#endif
  E_TDmode,                /* machmode.def:274 */
#define HAVE_TDmode
#ifdef USE_ENUM_MODES
#define TDmode E_TDmode
#else
#define TDmode (scalar_float_mode ((scalar_float_mode::from_int) E_TDmode))
#endif
  E_CQImode,               /* machmode.def:267 */
#define HAVE_CQImode
#ifdef USE_ENUM_MODES
#define CQImode E_CQImode
#else
#define CQImode (complex_mode ((complex_mode::from_int) E_CQImode))
#endif
  E_CHImode,               /* machmode.def:267 */
#define HAVE_CHImode
#ifdef USE_ENUM_MODES
#define CHImode E_CHImode
#else
#define CHImode (complex_mode ((complex_mode::from_int) E_CHImode))
#endif
  E_CSImode,               /* machmode.def:267 */
#define HAVE_CSImode
#ifdef USE_ENUM_MODES
#define CSImode E_CSImode
#else
#define CSImode (complex_mode ((complex_mode::from_int) E_CSImode))
#endif
  E_CDImode,               /* machmode.def:267 */
#define HAVE_CDImode
#ifdef USE_ENUM_MODES
#define CDImode E_CDImode
#else
#define CDImode (complex_mode ((complex_mode::from_int) E_CDImode))
#endif
  E_CTImode,               /* machmode.def:267 */
#define HAVE_CTImode
#ifdef USE_ENUM_MODES
#define CTImode E_CTImode
#else
#define CTImode (complex_mode ((complex_mode::from_int) E_CTImode))
#endif
  E_BCmode,                /* machmode.def:269 */
#define HAVE_BCmode
#ifdef USE_ENUM_MODES
#define BCmode E_BCmode
#else
#define BCmode (complex_mode ((complex_mode::from_int) E_BCmode))
#endif
  E_HCmode,                /* machmode.def:269 */
#define HAVE_HCmode
#ifdef USE_ENUM_MODES
#define HCmode E_HCmode
#else
#define HCmode (complex_mode ((complex_mode::from_int) E_HCmode))
#endif
  E_SCmode,                /* machmode.def:269 */
#define HAVE_SCmode
#ifdef USE_ENUM_MODES
#define SCmode E_SCmode
#else
#define SCmode (complex_mode ((complex_mode::from_int) E_SCmode))
#endif
  E_DCmode,                /* machmode.def:269 */
#define HAVE_DCmode
#ifdef USE_ENUM_MODES
#define DCmode E_DCmode
#else
#define DCmode (complex_mode ((complex_mode::from_int) E_DCmode))
#endif
  E_TCmode,                /* machmode.def:269 */
#define HAVE_TCmode
#ifdef USE_ENUM_MODES
#define TCmode E_TCmode
#else
#define TCmode (complex_mode ((complex_mode::from_int) E_TCmode))
#endif
  E_RVVMF8BImode,          /* config/riscv/riscv-modes.def:47 */
#define HAVE_RVVMF8BImode
#ifdef USE_ENUM_MODES
#define RVVMF8BImode E_RVVMF8BImode
#else
#define RVVMF8BImode ((void) 0, E_RVVMF8BImode)
#endif
  E_RVVMF16BImode,         /* config/riscv/riscv-modes.def:48 */
#define HAVE_RVVMF16BImode
#ifdef USE_ENUM_MODES
#define RVVMF16BImode E_RVVMF16BImode
#else
#define RVVMF16BImode ((void) 0, E_RVVMF16BImode)
#endif
  E_RVVMF32BImode,         /* config/riscv/riscv-modes.def:49 */
#define HAVE_RVVMF32BImode
#ifdef USE_ENUM_MODES
#define RVVMF32BImode E_RVVMF32BImode
#else
#define RVVMF32BImode ((void) 0, E_RVVMF32BImode)
#endif
  E_RVVMF64BImode,         /* config/riscv/riscv-modes.def:50 */
#define HAVE_RVVMF64BImode
#ifdef USE_ENUM_MODES
#define RVVMF64BImode E_RVVMF64BImode
#else
#define RVVMF64BImode ((void) 0, E_RVVMF64BImode)
#endif
  E_V1BImode,              /* config/riscv/riscv-modes.def:350 */
#define HAVE_V1BImode
#ifdef USE_ENUM_MODES
#define V1BImode E_V1BImode
#else
#define V1BImode ((void) 0, E_V1BImode)
#endif
  E_V2BImode,              /* config/riscv/riscv-modes.def:351 */
#define HAVE_V2BImode
#ifdef USE_ENUM_MODES
#define V2BImode E_V2BImode
#else
#define V2BImode ((void) 0, E_V2BImode)
#endif
  E_V4BImode,              /* config/riscv/riscv-modes.def:352 */
#define HAVE_V4BImode
#ifdef USE_ENUM_MODES
#define V4BImode E_V4BImode
#else
#define V4BImode ((void) 0, E_V4BImode)
#endif
  E_V8BImode,              /* config/riscv/riscv-modes.def:353 */
#define HAVE_V8BImode
#ifdef USE_ENUM_MODES
#define V8BImode E_V8BImode
#else
#define V8BImode ((void) 0, E_V8BImode)
#endif
  E_RVVMF4BImode,          /* config/riscv/riscv-modes.def:46 */
#define HAVE_RVVMF4BImode
#ifdef USE_ENUM_MODES
#define RVVMF4BImode E_RVVMF4BImode
#else
#define RVVMF4BImode ((void) 0, E_RVVMF4BImode)
#endif
  E_V16BImode,             /* config/riscv/riscv-modes.def:354 */
#define HAVE_V16BImode
#ifdef USE_ENUM_MODES
#define V16BImode E_V16BImode
#else
#define V16BImode ((void) 0, E_V16BImode)
#endif
  E_RVVMF2BImode,          /* config/riscv/riscv-modes.def:45 */
#define HAVE_RVVMF2BImode
#ifdef USE_ENUM_MODES
#define RVVMF2BImode E_RVVMF2BImode
#else
#define RVVMF2BImode ((void) 0, E_RVVMF2BImode)
#endif
  E_V32BImode,             /* config/riscv/riscv-modes.def:355 */
#define HAVE_V32BImode
#ifdef USE_ENUM_MODES
#define V32BImode E_V32BImode
#else
#define V32BImode ((void) 0, E_V32BImode)
#endif
  E_RVVM1BImode,           /* config/riscv/riscv-modes.def:44 */
#define HAVE_RVVM1BImode
#ifdef USE_ENUM_MODES
#define RVVM1BImode E_RVVM1BImode
#else
#define RVVM1BImode ((void) 0, E_RVVM1BImode)
#endif
  E_V64BImode,             /* config/riscv/riscv-modes.def:356 */
#define HAVE_V64BImode
#ifdef USE_ENUM_MODES
#define V64BImode E_V64BImode
#else
#define V64BImode ((void) 0, E_V64BImode)
#endif
  E_V128BImode,            /* config/riscv/riscv-modes.def:357 */
#define HAVE_V128BImode
#ifdef USE_ENUM_MODES
#define V128BImode E_V128BImode
#else
#define V128BImode ((void) 0, E_V128BImode)
#endif
  E_V256BImode,            /* config/riscv/riscv-modes.def:358 */
#define HAVE_V256BImode
#ifdef USE_ENUM_MODES
#define V256BImode E_V256BImode
#else
#define V256BImode ((void) 0, E_V256BImode)
#endif
  E_V512BImode,            /* config/riscv/riscv-modes.def:359 */
#define HAVE_V512BImode
#ifdef USE_ENUM_MODES
#define V512BImode E_V512BImode
#else
#define V512BImode ((void) 0, E_V512BImode)
#endif
  E_V1024BImode,           /* config/riscv/riscv-modes.def:360 */
#define HAVE_V1024BImode
#ifdef USE_ENUM_MODES
#define V1024BImode E_V1024BImode
#else
#define V1024BImode ((void) 0, E_V1024BImode)
#endif
  E_V2048BImode,           /* config/riscv/riscv-modes.def:361 */
#define HAVE_V2048BImode
#ifdef USE_ENUM_MODES
#define V2048BImode E_V2048BImode
#else
#define V2048BImode ((void) 0, E_V2048BImode)
#endif
  E_V4096BImode,           /* config/riscv/riscv-modes.def:362 */
#define HAVE_V4096BImode
#ifdef USE_ENUM_MODES
#define V4096BImode E_V4096BImode
#else
#define V4096BImode ((void) 0, E_V4096BImode)
#endif
  E_RVVM1QImode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1QImode
#ifdef USE_ENUM_MODES
#define RVVM1QImode E_RVVM1QImode
#else
#define RVVM1QImode ((void) 0, E_RVVM1QImode)
#endif
  E_RVVM2QImode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2QImode
#ifdef USE_ENUM_MODES
#define RVVM2QImode E_RVVM2QImode
#else
#define RVVM2QImode ((void) 0, E_RVVM2QImode)
#endif
  E_RVVMF2QImode,          /* config/riscv/riscv-modes.def:157 */
#define HAVE_RVVMF2QImode
#ifdef USE_ENUM_MODES
#define RVVMF2QImode E_RVVMF2QImode
#else
#define RVVMF2QImode ((void) 0, E_RVVMF2QImode)
#endif
  E_RVVM1HImode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1HImode
#ifdef USE_ENUM_MODES
#define RVVM1HImode E_RVVM1HImode
#else
#define RVVM1HImode ((void) 0, E_RVVM1HImode)
#endif
  E_RVVM4QImode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4QImode
#ifdef USE_ENUM_MODES
#define RVVM4QImode E_RVVM4QImode
#else
#define RVVM4QImode ((void) 0, E_RVVM4QImode)
#endif
  E_RVVMF4QImode,          /* config/riscv/riscv-modes.def:158 */
#define HAVE_RVVMF4QImode
#ifdef USE_ENUM_MODES
#define RVVMF4QImode E_RVVMF4QImode
#else
#define RVVMF4QImode ((void) 0, E_RVVMF4QImode)
#endif
  E_RVVM2HImode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2HImode
#ifdef USE_ENUM_MODES
#define RVVM2HImode E_RVVM2HImode
#else
#define RVVM2HImode ((void) 0, E_RVVM2HImode)
#endif
  E_RVVMF2HImode,          /* config/riscv/riscv-modes.def:160 */
#define HAVE_RVVMF2HImode
#ifdef USE_ENUM_MODES
#define RVVMF2HImode E_RVVMF2HImode
#else
#define RVVMF2HImode ((void) 0, E_RVVMF2HImode)
#endif
  E_RVVM1SImode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1SImode
#ifdef USE_ENUM_MODES
#define RVVM1SImode E_RVVM1SImode
#else
#define RVVM1SImode ((void) 0, E_RVVM1SImode)
#endif
  E_RVVM8QImode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8QImode
#ifdef USE_ENUM_MODES
#define RVVM8QImode E_RVVM8QImode
#else
#define RVVM8QImode ((void) 0, E_RVVM8QImode)
#endif
  E_RVVMF8QImode,          /* config/riscv/riscv-modes.def:159 */
#define HAVE_RVVMF8QImode
#ifdef USE_ENUM_MODES
#define RVVMF8QImode E_RVVMF8QImode
#else
#define RVVMF8QImode ((void) 0, E_RVVMF8QImode)
#endif
  E_RVVM4HImode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4HImode
#ifdef USE_ENUM_MODES
#define RVVM4HImode E_RVVM4HImode
#else
#define RVVM4HImode ((void) 0, E_RVVM4HImode)
#endif
  E_RVVMF4HImode,          /* config/riscv/riscv-modes.def:161 */
#define HAVE_RVVMF4HImode
#ifdef USE_ENUM_MODES
#define RVVMF4HImode E_RVVMF4HImode
#else
#define RVVMF4HImode ((void) 0, E_RVVMF4HImode)
#endif
  E_RVVM2SImode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2SImode
#ifdef USE_ENUM_MODES
#define RVVM2SImode E_RVVM2SImode
#else
#define RVVM2SImode ((void) 0, E_RVVM2SImode)
#endif
  E_RVVMF2SImode,          /* config/riscv/riscv-modes.def:166 */
#define HAVE_RVVMF2SImode
#ifdef USE_ENUM_MODES
#define RVVMF2SImode E_RVVMF2SImode
#else
#define RVVMF2SImode ((void) 0, E_RVVMF2SImode)
#endif
  E_RVVM1DImode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1DImode
#ifdef USE_ENUM_MODES
#define RVVM1DImode E_RVVM1DImode
#else
#define RVVM1DImode ((void) 0, E_RVVM1DImode)
#endif
  E_RVVM8HImode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8HImode
#ifdef USE_ENUM_MODES
#define RVVM8HImode E_RVVM8HImode
#else
#define RVVM8HImode ((void) 0, E_RVVM8HImode)
#endif
  E_RVVM4SImode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4SImode
#ifdef USE_ENUM_MODES
#define RVVM4SImode E_RVVM4SImode
#else
#define RVVM4SImode ((void) 0, E_RVVM4SImode)
#endif
  E_RVVM2DImode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2DImode
#ifdef USE_ENUM_MODES
#define RVVM2DImode E_RVVM2DImode
#else
#define RVVM2DImode ((void) 0, E_RVVM2DImode)
#endif
  E_RVVM8SImode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8SImode
#ifdef USE_ENUM_MODES
#define RVVM8SImode E_RVVM8SImode
#else
#define RVVM8SImode ((void) 0, E_RVVM8SImode)
#endif
  E_RVVM4DImode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4DImode
#ifdef USE_ENUM_MODES
#define RVVM4DImode E_RVVM4DImode
#else
#define RVVM4DImode ((void) 0, E_RVVM4DImode)
#endif
  E_RVVM8DImode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8DImode
#ifdef USE_ENUM_MODES
#define RVVM8DImode E_RVVM8DImode
#else
#define RVVM8DImode ((void) 0, E_RVVM8DImode)
#endif
  E_V1QImode,              /* config/riscv/riscv-modes.def:401 */
#define HAVE_V1QImode
#ifdef USE_ENUM_MODES
#define V1QImode E_V1QImode
#else
#define V1QImode ((void) 0, E_V1QImode)
#endif
  E_RVVMF8x2QImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF8x2QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x2QImode E_RVVMF8x2QImode
#else
#define RVVMF8x2QImode ((void) 0, E_RVVMF8x2QImode)
#endif
  E_RVVMF4x2QImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF4x2QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x2QImode E_RVVMF4x2QImode
#else
#define RVVMF4x2QImode ((void) 0, E_RVVMF4x2QImode)
#endif
  E_RVVMF2x2QImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x2QImode E_RVVMF2x2QImode
#else
#define RVVMF2x2QImode ((void) 0, E_RVVMF2x2QImode)
#endif
  E_RVVM1x2QImode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2QImode
#ifdef USE_ENUM_MODES
#define RVVM1x2QImode E_RVVM1x2QImode
#else
#define RVVM1x2QImode ((void) 0, E_RVVM1x2QImode)
#endif
  E_RVVM2x2QImode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2QImode
#ifdef USE_ENUM_MODES
#define RVVM2x2QImode E_RVVM2x2QImode
#else
#define RVVM2x2QImode ((void) 0, E_RVVM2x2QImode)
#endif
  E_RVVM4x2QImode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2QImode
#ifdef USE_ENUM_MODES
#define RVVM4x2QImode E_RVVM4x2QImode
#else
#define RVVM4x2QImode ((void) 0, E_RVVM4x2QImode)
#endif
  E_V2QImode,              /* config/riscv/riscv-modes.def:408 */
#define HAVE_V2QImode
#ifdef USE_ENUM_MODES
#define V2QImode E_V2QImode
#else
#define V2QImode ((void) 0, E_V2QImode)
#endif
  E_V1HImode,              /* config/riscv/riscv-modes.def:402 */
#define HAVE_V1HImode
#ifdef USE_ENUM_MODES
#define V1HImode E_V1HImode
#else
#define V1HImode ((void) 0, E_V1HImode)
#endif
  E_RVVMF8x3QImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF8x3QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x3QImode E_RVVMF8x3QImode
#else
#define RVVMF8x3QImode ((void) 0, E_RVVMF8x3QImode)
#endif
  E_RVVMF4x3QImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF4x3QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x3QImode E_RVVMF4x3QImode
#else
#define RVVMF4x3QImode ((void) 0, E_RVVMF4x3QImode)
#endif
  E_RVVMF2x3QImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x3QImode E_RVVMF2x3QImode
#else
#define RVVMF2x3QImode ((void) 0, E_RVVMF2x3QImode)
#endif
  E_RVVM1x3QImode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3QImode
#ifdef USE_ENUM_MODES
#define RVVM1x3QImode E_RVVM1x3QImode
#else
#define RVVM1x3QImode ((void) 0, E_RVVM1x3QImode)
#endif
  E_RVVM2x3QImode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3QImode
#ifdef USE_ENUM_MODES
#define RVVM2x3QImode E_RVVM2x3QImode
#else
#define RVVM2x3QImode ((void) 0, E_RVVM2x3QImode)
#endif
  E_RVVMF8x4QImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF8x4QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x4QImode E_RVVMF8x4QImode
#else
#define RVVMF8x4QImode ((void) 0, E_RVVMF8x4QImode)
#endif
  E_RVVMF4x4QImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF4x4QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x4QImode E_RVVMF4x4QImode
#else
#define RVVMF4x4QImode ((void) 0, E_RVVMF4x4QImode)
#endif
  E_RVVMF2x4QImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x4QImode E_RVVMF2x4QImode
#else
#define RVVMF2x4QImode ((void) 0, E_RVVMF2x4QImode)
#endif
  E_RVVM1x4QImode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4QImode
#ifdef USE_ENUM_MODES
#define RVVM1x4QImode E_RVVM1x4QImode
#else
#define RVVM1x4QImode ((void) 0, E_RVVM1x4QImode)
#endif
  E_RVVM2x4QImode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4QImode
#ifdef USE_ENUM_MODES
#define RVVM2x4QImode E_RVVM2x4QImode
#else
#define RVVM2x4QImode ((void) 0, E_RVVM2x4QImode)
#endif
  E_V4QImode,              /* config/riscv/riscv-modes.def:409 */
#define HAVE_V4QImode
#ifdef USE_ENUM_MODES
#define V4QImode E_V4QImode
#else
#define V4QImode ((void) 0, E_V4QImode)
#endif
  E_RVVMF4x2HImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF4x2HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x2HImode E_RVVMF4x2HImode
#else
#define RVVMF4x2HImode ((void) 0, E_RVVMF4x2HImode)
#endif
  E_RVVMF2x2HImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x2HImode E_RVVMF2x2HImode
#else
#define RVVMF2x2HImode ((void) 0, E_RVVMF2x2HImode)
#endif
  E_RVVM1x2HImode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2HImode
#ifdef USE_ENUM_MODES
#define RVVM1x2HImode E_RVVM1x2HImode
#else
#define RVVM1x2HImode ((void) 0, E_RVVM1x2HImode)
#endif
  E_RVVM2x2HImode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2HImode
#ifdef USE_ENUM_MODES
#define RVVM2x2HImode E_RVVM2x2HImode
#else
#define RVVM2x2HImode ((void) 0, E_RVVM2x2HImode)
#endif
  E_RVVM4x2HImode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2HImode
#ifdef USE_ENUM_MODES
#define RVVM4x2HImode E_RVVM4x2HImode
#else
#define RVVM4x2HImode ((void) 0, E_RVVM4x2HImode)
#endif
  E_V2HImode,              /* config/riscv/riscv-modes.def:411 */
#define HAVE_V2HImode
#ifdef USE_ENUM_MODES
#define V2HImode E_V2HImode
#else
#define V2HImode ((void) 0, E_V2HImode)
#endif
  E_V1SImode,              /* config/riscv/riscv-modes.def:403 */
#define HAVE_V1SImode
#ifdef USE_ENUM_MODES
#define V1SImode E_V1SImode
#else
#define V1SImode ((void) 0, E_V1SImode)
#endif
  E_RVVMF8x5QImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF8x5QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x5QImode E_RVVMF8x5QImode
#else
#define RVVMF8x5QImode ((void) 0, E_RVVMF8x5QImode)
#endif
  E_RVVMF4x5QImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF4x5QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x5QImode E_RVVMF4x5QImode
#else
#define RVVMF4x5QImode ((void) 0, E_RVVMF4x5QImode)
#endif
  E_RVVMF2x5QImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x5QImode E_RVVMF2x5QImode
#else
#define RVVMF2x5QImode ((void) 0, E_RVVMF2x5QImode)
#endif
  E_RVVM1x5QImode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5QImode
#ifdef USE_ENUM_MODES
#define RVVM1x5QImode E_RVVM1x5QImode
#else
#define RVVM1x5QImode ((void) 0, E_RVVM1x5QImode)
#endif
  E_RVVMF8x6QImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF8x6QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x6QImode E_RVVMF8x6QImode
#else
#define RVVMF8x6QImode ((void) 0, E_RVVMF8x6QImode)
#endif
  E_RVVMF4x6QImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF4x6QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x6QImode E_RVVMF4x6QImode
#else
#define RVVMF4x6QImode ((void) 0, E_RVVMF4x6QImode)
#endif
  E_RVVMF2x6QImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x6QImode E_RVVMF2x6QImode
#else
#define RVVMF2x6QImode ((void) 0, E_RVVMF2x6QImode)
#endif
  E_RVVM1x6QImode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6QImode
#ifdef USE_ENUM_MODES
#define RVVM1x6QImode E_RVVM1x6QImode
#else
#define RVVM1x6QImode ((void) 0, E_RVVM1x6QImode)
#endif
  E_RVVMF4x3HImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF4x3HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x3HImode E_RVVMF4x3HImode
#else
#define RVVMF4x3HImode ((void) 0, E_RVVMF4x3HImode)
#endif
  E_RVVMF2x3HImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x3HImode E_RVVMF2x3HImode
#else
#define RVVMF2x3HImode ((void) 0, E_RVVMF2x3HImode)
#endif
  E_RVVM1x3HImode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3HImode
#ifdef USE_ENUM_MODES
#define RVVM1x3HImode E_RVVM1x3HImode
#else
#define RVVM1x3HImode ((void) 0, E_RVVM1x3HImode)
#endif
  E_RVVM2x3HImode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3HImode
#ifdef USE_ENUM_MODES
#define RVVM2x3HImode E_RVVM2x3HImode
#else
#define RVVM2x3HImode ((void) 0, E_RVVM2x3HImode)
#endif
  E_RVVMF8x7QImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF8x7QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x7QImode E_RVVMF8x7QImode
#else
#define RVVMF8x7QImode ((void) 0, E_RVVMF8x7QImode)
#endif
  E_RVVMF4x7QImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF4x7QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x7QImode E_RVVMF4x7QImode
#else
#define RVVMF4x7QImode ((void) 0, E_RVVMF4x7QImode)
#endif
  E_RVVMF2x7QImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x7QImode E_RVVMF2x7QImode
#else
#define RVVMF2x7QImode ((void) 0, E_RVVMF2x7QImode)
#endif
  E_RVVM1x7QImode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7QImode
#ifdef USE_ENUM_MODES
#define RVVM1x7QImode E_RVVM1x7QImode
#else
#define RVVM1x7QImode ((void) 0, E_RVVM1x7QImode)
#endif
  E_RVVMF8x8QImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF8x8QImode
#ifdef USE_ENUM_MODES
#define RVVMF8x8QImode E_RVVMF8x8QImode
#else
#define RVVMF8x8QImode ((void) 0, E_RVVMF8x8QImode)
#endif
  E_RVVMF4x8QImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF4x8QImode
#ifdef USE_ENUM_MODES
#define RVVMF4x8QImode E_RVVMF4x8QImode
#else
#define RVVMF4x8QImode ((void) 0, E_RVVMF4x8QImode)
#endif
  E_RVVMF2x8QImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8QImode
#ifdef USE_ENUM_MODES
#define RVVMF2x8QImode E_RVVMF2x8QImode
#else
#define RVVMF2x8QImode ((void) 0, E_RVVMF2x8QImode)
#endif
  E_RVVM1x8QImode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8QImode
#ifdef USE_ENUM_MODES
#define RVVM1x8QImode E_RVVM1x8QImode
#else
#define RVVM1x8QImode ((void) 0, E_RVVM1x8QImode)
#endif
  E_V8QImode,              /* config/riscv/riscv-modes.def:410 */
#define HAVE_V8QImode
#ifdef USE_ENUM_MODES
#define V8QImode E_V8QImode
#else
#define V8QImode ((void) 0, E_V8QImode)
#endif
  E_RVVMF4x4HImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF4x4HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x4HImode E_RVVMF4x4HImode
#else
#define RVVMF4x4HImode ((void) 0, E_RVVMF4x4HImode)
#endif
  E_RVVMF2x4HImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x4HImode E_RVVMF2x4HImode
#else
#define RVVMF2x4HImode ((void) 0, E_RVVMF2x4HImode)
#endif
  E_RVVM1x4HImode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4HImode
#ifdef USE_ENUM_MODES
#define RVVM1x4HImode E_RVVM1x4HImode
#else
#define RVVM1x4HImode ((void) 0, E_RVVM1x4HImode)
#endif
  E_RVVM2x4HImode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4HImode
#ifdef USE_ENUM_MODES
#define RVVM2x4HImode E_RVVM2x4HImode
#else
#define RVVM2x4HImode ((void) 0, E_RVVM2x4HImode)
#endif
  E_V4HImode,              /* config/riscv/riscv-modes.def:412 */
#define HAVE_V4HImode
#ifdef USE_ENUM_MODES
#define V4HImode E_V4HImode
#else
#define V4HImode ((void) 0, E_V4HImode)
#endif
  E_RVVMF2x2SImode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x2SImode E_RVVMF2x2SImode
#else
#define RVVMF2x2SImode ((void) 0, E_RVVMF2x2SImode)
#endif
  E_RVVM1x2SImode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2SImode
#ifdef USE_ENUM_MODES
#define RVVM1x2SImode E_RVVM1x2SImode
#else
#define RVVM1x2SImode ((void) 0, E_RVVM1x2SImode)
#endif
  E_RVVM2x2SImode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2SImode
#ifdef USE_ENUM_MODES
#define RVVM2x2SImode E_RVVM2x2SImode
#else
#define RVVM2x2SImode ((void) 0, E_RVVM2x2SImode)
#endif
  E_RVVM4x2SImode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2SImode
#ifdef USE_ENUM_MODES
#define RVVM4x2SImode E_RVVM4x2SImode
#else
#define RVVM4x2SImode ((void) 0, E_RVVM4x2SImode)
#endif
  E_V2SImode,              /* config/riscv/riscv-modes.def:415 */
#define HAVE_V2SImode
#ifdef USE_ENUM_MODES
#define V2SImode E_V2SImode
#else
#define V2SImode ((void) 0, E_V2SImode)
#endif
  E_V1DImode,              /* config/riscv/riscv-modes.def:404 */
#define HAVE_V1DImode
#ifdef USE_ENUM_MODES
#define V1DImode E_V1DImode
#else
#define V1DImode ((void) 0, E_V1DImode)
#endif
  E_RVVMF4x5HImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF4x5HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x5HImode E_RVVMF4x5HImode
#else
#define RVVMF4x5HImode ((void) 0, E_RVVMF4x5HImode)
#endif
  E_RVVMF2x5HImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x5HImode E_RVVMF2x5HImode
#else
#define RVVMF2x5HImode ((void) 0, E_RVVMF2x5HImode)
#endif
  E_RVVM1x5HImode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5HImode
#ifdef USE_ENUM_MODES
#define RVVM1x5HImode E_RVVM1x5HImode
#else
#define RVVM1x5HImode ((void) 0, E_RVVM1x5HImode)
#endif
  E_RVVMF4x6HImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF4x6HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x6HImode E_RVVMF4x6HImode
#else
#define RVVMF4x6HImode ((void) 0, E_RVVMF4x6HImode)
#endif
  E_RVVMF2x6HImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x6HImode E_RVVMF2x6HImode
#else
#define RVVMF2x6HImode ((void) 0, E_RVVMF2x6HImode)
#endif
  E_RVVM1x6HImode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6HImode
#ifdef USE_ENUM_MODES
#define RVVM1x6HImode E_RVVM1x6HImode
#else
#define RVVM1x6HImode ((void) 0, E_RVVM1x6HImode)
#endif
  E_RVVMF2x3SImode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x3SImode E_RVVMF2x3SImode
#else
#define RVVMF2x3SImode ((void) 0, E_RVVMF2x3SImode)
#endif
  E_RVVM1x3SImode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3SImode
#ifdef USE_ENUM_MODES
#define RVVM1x3SImode E_RVVM1x3SImode
#else
#define RVVM1x3SImode ((void) 0, E_RVVM1x3SImode)
#endif
  E_RVVM2x3SImode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3SImode
#ifdef USE_ENUM_MODES
#define RVVM2x3SImode E_RVVM2x3SImode
#else
#define RVVM2x3SImode ((void) 0, E_RVVM2x3SImode)
#endif
  E_RVVMF4x7HImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF4x7HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x7HImode E_RVVMF4x7HImode
#else
#define RVVMF4x7HImode ((void) 0, E_RVVMF4x7HImode)
#endif
  E_RVVMF2x7HImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x7HImode E_RVVMF2x7HImode
#else
#define RVVMF2x7HImode ((void) 0, E_RVVMF2x7HImode)
#endif
  E_RVVM1x7HImode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7HImode
#ifdef USE_ENUM_MODES
#define RVVM1x7HImode E_RVVM1x7HImode
#else
#define RVVM1x7HImode ((void) 0, E_RVVM1x7HImode)
#endif
  E_V16QImode,             /* config/riscv/riscv-modes.def:417 */
#define HAVE_V16QImode
#ifdef USE_ENUM_MODES
#define V16QImode E_V16QImode
#else
#define V16QImode ((void) 0, E_V16QImode)
#endif
  E_RVVMF4x8HImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF4x8HImode
#ifdef USE_ENUM_MODES
#define RVVMF4x8HImode E_RVVMF4x8HImode
#else
#define RVVMF4x8HImode ((void) 0, E_RVVMF4x8HImode)
#endif
  E_RVVMF2x8HImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8HImode
#ifdef USE_ENUM_MODES
#define RVVMF2x8HImode E_RVVMF2x8HImode
#else
#define RVVMF2x8HImode ((void) 0, E_RVVMF2x8HImode)
#endif
  E_RVVM1x8HImode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8HImode
#ifdef USE_ENUM_MODES
#define RVVM1x8HImode E_RVVM1x8HImode
#else
#define RVVM1x8HImode ((void) 0, E_RVVM1x8HImode)
#endif
  E_V8HImode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V8HImode
#ifdef USE_ENUM_MODES
#define V8HImode E_V8HImode
#else
#define V8HImode ((void) 0, E_V8HImode)
#endif
  E_RVVMF2x4SImode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x4SImode E_RVVMF2x4SImode
#else
#define RVVMF2x4SImode ((void) 0, E_RVVMF2x4SImode)
#endif
  E_RVVM1x4SImode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4SImode
#ifdef USE_ENUM_MODES
#define RVVM1x4SImode E_RVVM1x4SImode
#else
#define RVVM1x4SImode ((void) 0, E_RVVM1x4SImode)
#endif
  E_RVVM2x4SImode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4SImode
#ifdef USE_ENUM_MODES
#define RVVM2x4SImode E_RVVM2x4SImode
#else
#define RVVM2x4SImode ((void) 0, E_RVVM2x4SImode)
#endif
  E_V4SImode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V4SImode
#ifdef USE_ENUM_MODES
#define V4SImode E_V4SImode
#else
#define V4SImode ((void) 0, E_V4SImode)
#endif
  E_RVVM1x2DImode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2DImode
#ifdef USE_ENUM_MODES
#define RVVM1x2DImode E_RVVM1x2DImode
#else
#define RVVM1x2DImode ((void) 0, E_RVVM1x2DImode)
#endif
  E_RVVM2x2DImode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2DImode
#ifdef USE_ENUM_MODES
#define RVVM2x2DImode E_RVVM2x2DImode
#else
#define RVVM2x2DImode ((void) 0, E_RVVM2x2DImode)
#endif
  E_RVVM4x2DImode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2DImode
#ifdef USE_ENUM_MODES
#define RVVM4x2DImode E_RVVM4x2DImode
#else
#define RVVM4x2DImode ((void) 0, E_RVVM4x2DImode)
#endif
  E_V2DImode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V2DImode
#ifdef USE_ENUM_MODES
#define V2DImode E_V2DImode
#else
#define V2DImode ((void) 0, E_V2DImode)
#endif
  E_RVVMF2x5SImode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x5SImode E_RVVMF2x5SImode
#else
#define RVVMF2x5SImode ((void) 0, E_RVVMF2x5SImode)
#endif
  E_RVVM1x5SImode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5SImode
#ifdef USE_ENUM_MODES
#define RVVM1x5SImode E_RVVM1x5SImode
#else
#define RVVM1x5SImode ((void) 0, E_RVVM1x5SImode)
#endif
  E_RVVMF2x6SImode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x6SImode E_RVVMF2x6SImode
#else
#define RVVMF2x6SImode ((void) 0, E_RVVMF2x6SImode)
#endif
  E_RVVM1x6SImode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6SImode
#ifdef USE_ENUM_MODES
#define RVVM1x6SImode E_RVVM1x6SImode
#else
#define RVVM1x6SImode ((void) 0, E_RVVM1x6SImode)
#endif
  E_RVVM1x3DImode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3DImode
#ifdef USE_ENUM_MODES
#define RVVM1x3DImode E_RVVM1x3DImode
#else
#define RVVM1x3DImode ((void) 0, E_RVVM1x3DImode)
#endif
  E_RVVM2x3DImode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3DImode
#ifdef USE_ENUM_MODES
#define RVVM2x3DImode E_RVVM2x3DImode
#else
#define RVVM2x3DImode ((void) 0, E_RVVM2x3DImode)
#endif
  E_RVVMF2x7SImode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x7SImode E_RVVMF2x7SImode
#else
#define RVVMF2x7SImode ((void) 0, E_RVVMF2x7SImode)
#endif
  E_RVVM1x7SImode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7SImode
#ifdef USE_ENUM_MODES
#define RVVM1x7SImode E_RVVM1x7SImode
#else
#define RVVM1x7SImode ((void) 0, E_RVVM1x7SImode)
#endif
  E_V32QImode,             /* config/riscv/riscv-modes.def:418 */
#define HAVE_V32QImode
#ifdef USE_ENUM_MODES
#define V32QImode E_V32QImode
#else
#define V32QImode ((void) 0, E_V32QImode)
#endif
  E_V16HImode,             /* config/riscv/riscv-modes.def:418 */
#define HAVE_V16HImode
#ifdef USE_ENUM_MODES
#define V16HImode E_V16HImode
#else
#define V16HImode ((void) 0, E_V16HImode)
#endif
  E_RVVMF2x8SImode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8SImode
#ifdef USE_ENUM_MODES
#define RVVMF2x8SImode E_RVVMF2x8SImode
#else
#define RVVMF2x8SImode ((void) 0, E_RVVMF2x8SImode)
#endif
  E_RVVM1x8SImode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8SImode
#ifdef USE_ENUM_MODES
#define RVVM1x8SImode E_RVVM1x8SImode
#else
#define RVVM1x8SImode ((void) 0, E_RVVM1x8SImode)
#endif
  E_V8SImode,              /* config/riscv/riscv-modes.def:418 */
#define HAVE_V8SImode
#ifdef USE_ENUM_MODES
#define V8SImode E_V8SImode
#else
#define V8SImode ((void) 0, E_V8SImode)
#endif
  E_RVVM1x4DImode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4DImode
#ifdef USE_ENUM_MODES
#define RVVM1x4DImode E_RVVM1x4DImode
#else
#define RVVM1x4DImode ((void) 0, E_RVVM1x4DImode)
#endif
  E_RVVM2x4DImode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4DImode
#ifdef USE_ENUM_MODES
#define RVVM2x4DImode E_RVVM2x4DImode
#else
#define RVVM2x4DImode ((void) 0, E_RVVM2x4DImode)
#endif
  E_V4DImode,              /* config/riscv/riscv-modes.def:418 */
#define HAVE_V4DImode
#ifdef USE_ENUM_MODES
#define V4DImode E_V4DImode
#else
#define V4DImode ((void) 0, E_V4DImode)
#endif
  E_RVVM1x5DImode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5DImode
#ifdef USE_ENUM_MODES
#define RVVM1x5DImode E_RVVM1x5DImode
#else
#define RVVM1x5DImode ((void) 0, E_RVVM1x5DImode)
#endif
  E_RVVM1x6DImode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6DImode
#ifdef USE_ENUM_MODES
#define RVVM1x6DImode E_RVVM1x6DImode
#else
#define RVVM1x6DImode ((void) 0, E_RVVM1x6DImode)
#endif
  E_RVVM1x7DImode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7DImode
#ifdef USE_ENUM_MODES
#define RVVM1x7DImode E_RVVM1x7DImode
#else
#define RVVM1x7DImode ((void) 0, E_RVVM1x7DImode)
#endif
  E_V64QImode,             /* config/riscv/riscv-modes.def:419 */
#define HAVE_V64QImode
#ifdef USE_ENUM_MODES
#define V64QImode E_V64QImode
#else
#define V64QImode ((void) 0, E_V64QImode)
#endif
  E_V32HImode,             /* config/riscv/riscv-modes.def:419 */
#define HAVE_V32HImode
#ifdef USE_ENUM_MODES
#define V32HImode E_V32HImode
#else
#define V32HImode ((void) 0, E_V32HImode)
#endif
  E_V16SImode,             /* config/riscv/riscv-modes.def:419 */
#define HAVE_V16SImode
#ifdef USE_ENUM_MODES
#define V16SImode E_V16SImode
#else
#define V16SImode ((void) 0, E_V16SImode)
#endif
  E_RVVM1x8DImode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8DImode
#ifdef USE_ENUM_MODES
#define RVVM1x8DImode E_RVVM1x8DImode
#else
#define RVVM1x8DImode ((void) 0, E_RVVM1x8DImode)
#endif
  E_V8DImode,              /* config/riscv/riscv-modes.def:419 */
#define HAVE_V8DImode
#ifdef USE_ENUM_MODES
#define V8DImode E_V8DImode
#else
#define V8DImode ((void) 0, E_V8DImode)
#endif
  E_V128QImode,            /* config/riscv/riscv-modes.def:420 */
#define HAVE_V128QImode
#ifdef USE_ENUM_MODES
#define V128QImode E_V128QImode
#else
#define V128QImode ((void) 0, E_V128QImode)
#endif
  E_V64HImode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V64HImode
#ifdef USE_ENUM_MODES
#define V64HImode E_V64HImode
#else
#define V64HImode ((void) 0, E_V64HImode)
#endif
  E_V32SImode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V32SImode
#ifdef USE_ENUM_MODES
#define V32SImode E_V32SImode
#else
#define V32SImode ((void) 0, E_V32SImode)
#endif
  E_V16DImode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V16DImode
#ifdef USE_ENUM_MODES
#define V16DImode E_V16DImode
#else
#define V16DImode ((void) 0, E_V16DImode)
#endif
  E_V256QImode,            /* config/riscv/riscv-modes.def:421 */
#define HAVE_V256QImode
#ifdef USE_ENUM_MODES
#define V256QImode E_V256QImode
#else
#define V256QImode ((void) 0, E_V256QImode)
#endif
  E_V128HImode,            /* config/riscv/riscv-modes.def:421 */
#define HAVE_V128HImode
#ifdef USE_ENUM_MODES
#define V128HImode E_V128HImode
#else
#define V128HImode ((void) 0, E_V128HImode)
#endif
  E_V64SImode,             /* config/riscv/riscv-modes.def:421 */
#define HAVE_V64SImode
#ifdef USE_ENUM_MODES
#define V64SImode E_V64SImode
#else
#define V64SImode ((void) 0, E_V64SImode)
#endif
  E_V32DImode,             /* config/riscv/riscv-modes.def:421 */
#define HAVE_V32DImode
#ifdef USE_ENUM_MODES
#define V32DImode E_V32DImode
#else
#define V32DImode ((void) 0, E_V32DImode)
#endif
  E_V512QImode,            /* config/riscv/riscv-modes.def:422 */
#define HAVE_V512QImode
#ifdef USE_ENUM_MODES
#define V512QImode E_V512QImode
#else
#define V512QImode ((void) 0, E_V512QImode)
#endif
  E_V256HImode,            /* config/riscv/riscv-modes.def:422 */
#define HAVE_V256HImode
#ifdef USE_ENUM_MODES
#define V256HImode E_V256HImode
#else
#define V256HImode ((void) 0, E_V256HImode)
#endif
  E_V128SImode,            /* config/riscv/riscv-modes.def:422 */
#define HAVE_V128SImode
#ifdef USE_ENUM_MODES
#define V128SImode E_V128SImode
#else
#define V128SImode ((void) 0, E_V128SImode)
#endif
  E_V64DImode,             /* config/riscv/riscv-modes.def:422 */
#define HAVE_V64DImode
#ifdef USE_ENUM_MODES
#define V64DImode E_V64DImode
#else
#define V64DImode ((void) 0, E_V64DImode)
#endif
  E_V1024QImode,           /* config/riscv/riscv-modes.def:423 */
#define HAVE_V1024QImode
#ifdef USE_ENUM_MODES
#define V1024QImode E_V1024QImode
#else
#define V1024QImode ((void) 0, E_V1024QImode)
#endif
  E_V512HImode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V512HImode
#ifdef USE_ENUM_MODES
#define V512HImode E_V512HImode
#else
#define V512HImode ((void) 0, E_V512HImode)
#endif
  E_V256SImode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V256SImode
#ifdef USE_ENUM_MODES
#define V256SImode E_V256SImode
#else
#define V256SImode ((void) 0, E_V256SImode)
#endif
  E_V128DImode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V128DImode
#ifdef USE_ENUM_MODES
#define V128DImode E_V128DImode
#else
#define V128DImode ((void) 0, E_V128DImode)
#endif
  E_V2048QImode,           /* config/riscv/riscv-modes.def:424 */
#define HAVE_V2048QImode
#ifdef USE_ENUM_MODES
#define V2048QImode E_V2048QImode
#else
#define V2048QImode ((void) 0, E_V2048QImode)
#endif
  E_V1024HImode,           /* config/riscv/riscv-modes.def:424 */
#define HAVE_V1024HImode
#ifdef USE_ENUM_MODES
#define V1024HImode E_V1024HImode
#else
#define V1024HImode ((void) 0, E_V1024HImode)
#endif
  E_V512SImode,            /* config/riscv/riscv-modes.def:424 */
#define HAVE_V512SImode
#ifdef USE_ENUM_MODES
#define V512SImode E_V512SImode
#else
#define V512SImode ((void) 0, E_V512SImode)
#endif
  E_V256DImode,            /* config/riscv/riscv-modes.def:424 */
#define HAVE_V256DImode
#ifdef USE_ENUM_MODES
#define V256DImode E_V256DImode
#else
#define V256DImode ((void) 0, E_V256DImode)
#endif
  E_V4096QImode,           /* config/riscv/riscv-modes.def:425 */
#define HAVE_V4096QImode
#ifdef USE_ENUM_MODES
#define V4096QImode E_V4096QImode
#else
#define V4096QImode ((void) 0, E_V4096QImode)
#endif
  E_V2048HImode,           /* config/riscv/riscv-modes.def:425 */
#define HAVE_V2048HImode
#ifdef USE_ENUM_MODES
#define V2048HImode E_V2048HImode
#else
#define V2048HImode ((void) 0, E_V2048HImode)
#endif
  E_V1024SImode,           /* config/riscv/riscv-modes.def:425 */
#define HAVE_V1024SImode
#ifdef USE_ENUM_MODES
#define V1024SImode E_V1024SImode
#else
#define V1024SImode ((void) 0, E_V1024SImode)
#endif
  E_V512DImode,            /* config/riscv/riscv-modes.def:425 */
#define HAVE_V512DImode
#ifdef USE_ENUM_MODES
#define V512DImode E_V512DImode
#else
#define V512DImode ((void) 0, E_V512DImode)
#endif
  E_RVVM1BFmode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1BFmode
#ifdef USE_ENUM_MODES
#define RVVM1BFmode E_RVVM1BFmode
#else
#define RVVM1BFmode ((void) 0, E_RVVM1BFmode)
#endif
  E_RVVM1HFmode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1HFmode
#ifdef USE_ENUM_MODES
#define RVVM1HFmode E_RVVM1HFmode
#else
#define RVVM1HFmode ((void) 0, E_RVVM1HFmode)
#endif
  E_RVVM2BFmode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2BFmode
#ifdef USE_ENUM_MODES
#define RVVM2BFmode E_RVVM2BFmode
#else
#define RVVM2BFmode ((void) 0, E_RVVM2BFmode)
#endif
  E_RVVM2HFmode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2HFmode
#ifdef USE_ENUM_MODES
#define RVVM2HFmode E_RVVM2HFmode
#else
#define RVVM2HFmode ((void) 0, E_RVVM2HFmode)
#endif
  E_RVVMF2BFmode,          /* config/riscv/riscv-modes.def:162 */
#define HAVE_RVVMF2BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2BFmode E_RVVMF2BFmode
#else
#define RVVMF2BFmode ((void) 0, E_RVVMF2BFmode)
#endif
  E_RVVMF2HFmode,          /* config/riscv/riscv-modes.def:164 */
#define HAVE_RVVMF2HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2HFmode E_RVVMF2HFmode
#else
#define RVVMF2HFmode ((void) 0, E_RVVMF2HFmode)
#endif
  E_RVVM1SFmode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1SFmode
#ifdef USE_ENUM_MODES
#define RVVM1SFmode E_RVVM1SFmode
#else
#define RVVM1SFmode ((void) 0, E_RVVM1SFmode)
#endif
  E_RVVM4BFmode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4BFmode
#ifdef USE_ENUM_MODES
#define RVVM4BFmode E_RVVM4BFmode
#else
#define RVVM4BFmode ((void) 0, E_RVVM4BFmode)
#endif
  E_RVVM4HFmode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4HFmode
#ifdef USE_ENUM_MODES
#define RVVM4HFmode E_RVVM4HFmode
#else
#define RVVM4HFmode ((void) 0, E_RVVM4HFmode)
#endif
  E_RVVMF4BFmode,          /* config/riscv/riscv-modes.def:163 */
#define HAVE_RVVMF4BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4BFmode E_RVVMF4BFmode
#else
#define RVVMF4BFmode ((void) 0, E_RVVMF4BFmode)
#endif
  E_RVVMF4HFmode,          /* config/riscv/riscv-modes.def:165 */
#define HAVE_RVVMF4HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4HFmode E_RVVMF4HFmode
#else
#define RVVMF4HFmode ((void) 0, E_RVVMF4HFmode)
#endif
  E_RVVM2SFmode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2SFmode
#ifdef USE_ENUM_MODES
#define RVVM2SFmode E_RVVM2SFmode
#else
#define RVVM2SFmode ((void) 0, E_RVVM2SFmode)
#endif
  E_RVVMF2SFmode,          /* config/riscv/riscv-modes.def:167 */
#define HAVE_RVVMF2SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2SFmode E_RVVMF2SFmode
#else
#define RVVMF2SFmode ((void) 0, E_RVVMF2SFmode)
#endif
  E_RVVM1DFmode,           /* config/riscv/riscv-modes.def:144 */
#define HAVE_RVVM1DFmode
#ifdef USE_ENUM_MODES
#define RVVM1DFmode E_RVVM1DFmode
#else
#define RVVM1DFmode ((void) 0, E_RVVM1DFmode)
#endif
  E_RVVM8BFmode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8BFmode
#ifdef USE_ENUM_MODES
#define RVVM8BFmode E_RVVM8BFmode
#else
#define RVVM8BFmode ((void) 0, E_RVVM8BFmode)
#endif
  E_RVVM8HFmode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8HFmode
#ifdef USE_ENUM_MODES
#define RVVM8HFmode E_RVVM8HFmode
#else
#define RVVM8HFmode ((void) 0, E_RVVM8HFmode)
#endif
  E_RVVM4SFmode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4SFmode
#ifdef USE_ENUM_MODES
#define RVVM4SFmode E_RVVM4SFmode
#else
#define RVVM4SFmode ((void) 0, E_RVVM4SFmode)
#endif
  E_RVVM2DFmode,           /* config/riscv/riscv-modes.def:145 */
#define HAVE_RVVM2DFmode
#ifdef USE_ENUM_MODES
#define RVVM2DFmode E_RVVM2DFmode
#else
#define RVVM2DFmode ((void) 0, E_RVVM2DFmode)
#endif
  E_RVVM8SFmode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8SFmode
#ifdef USE_ENUM_MODES
#define RVVM8SFmode E_RVVM8SFmode
#else
#define RVVM8SFmode ((void) 0, E_RVVM8SFmode)
#endif
  E_RVVM4DFmode,           /* config/riscv/riscv-modes.def:146 */
#define HAVE_RVVM4DFmode
#ifdef USE_ENUM_MODES
#define RVVM4DFmode E_RVVM4DFmode
#else
#define RVVM4DFmode ((void) 0, E_RVVM4DFmode)
#endif
  E_RVVM8DFmode,           /* config/riscv/riscv-modes.def:147 */
#define HAVE_RVVM8DFmode
#ifdef USE_ENUM_MODES
#define RVVM8DFmode E_RVVM8DFmode
#else
#define RVVM8DFmode ((void) 0, E_RVVM8DFmode)
#endif
  E_V1HFmode,              /* config/riscv/riscv-modes.def:405 */
#define HAVE_V1HFmode
#ifdef USE_ENUM_MODES
#define V1HFmode E_V1HFmode
#else
#define V1HFmode ((void) 0, E_V1HFmode)
#endif
  E_RVVMF4x2BFmode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF4x2BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x2BFmode E_RVVMF4x2BFmode
#else
#define RVVMF4x2BFmode ((void) 0, E_RVVMF4x2BFmode)
#endif
  E_RVVMF2x2BFmode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x2BFmode E_RVVMF2x2BFmode
#else
#define RVVMF2x2BFmode ((void) 0, E_RVVMF2x2BFmode)
#endif
  E_RVVM1x2BFmode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x2BFmode E_RVVM1x2BFmode
#else
#define RVVM1x2BFmode ((void) 0, E_RVVM1x2BFmode)
#endif
  E_RVVMF4x2HFmode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF4x2HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x2HFmode E_RVVMF4x2HFmode
#else
#define RVVMF4x2HFmode ((void) 0, E_RVVMF4x2HFmode)
#endif
  E_RVVMF2x2HFmode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x2HFmode E_RVVMF2x2HFmode
#else
#define RVVMF2x2HFmode ((void) 0, E_RVVMF2x2HFmode)
#endif
  E_RVVM1x2HFmode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x2HFmode E_RVVM1x2HFmode
#else
#define RVVM1x2HFmode ((void) 0, E_RVVM1x2HFmode)
#endif
  E_RVVM2x2BFmode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2BFmode
#ifdef USE_ENUM_MODES
#define RVVM2x2BFmode E_RVVM2x2BFmode
#else
#define RVVM2x2BFmode ((void) 0, E_RVVM2x2BFmode)
#endif
  E_RVVM2x2HFmode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2HFmode
#ifdef USE_ENUM_MODES
#define RVVM2x2HFmode E_RVVM2x2HFmode
#else
#define RVVM2x2HFmode ((void) 0, E_RVVM2x2HFmode)
#endif
  E_RVVM4x2BFmode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2BFmode
#ifdef USE_ENUM_MODES
#define RVVM4x2BFmode E_RVVM4x2BFmode
#else
#define RVVM4x2BFmode ((void) 0, E_RVVM4x2BFmode)
#endif
  E_RVVM4x2HFmode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2HFmode
#ifdef USE_ENUM_MODES
#define RVVM4x2HFmode E_RVVM4x2HFmode
#else
#define RVVM4x2HFmode ((void) 0, E_RVVM4x2HFmode)
#endif
  E_V2HFmode,              /* config/riscv/riscv-modes.def:413 */
#define HAVE_V2HFmode
#ifdef USE_ENUM_MODES
#define V2HFmode E_V2HFmode
#else
#define V2HFmode ((void) 0, E_V2HFmode)
#endif
  E_V1SFmode,              /* config/riscv/riscv-modes.def:406 */
#define HAVE_V1SFmode
#ifdef USE_ENUM_MODES
#define V1SFmode E_V1SFmode
#else
#define V1SFmode ((void) 0, E_V1SFmode)
#endif
  E_RVVMF4x3BFmode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF4x3BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x3BFmode E_RVVMF4x3BFmode
#else
#define RVVMF4x3BFmode ((void) 0, E_RVVMF4x3BFmode)
#endif
  E_RVVMF2x3BFmode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x3BFmode E_RVVMF2x3BFmode
#else
#define RVVMF2x3BFmode ((void) 0, E_RVVMF2x3BFmode)
#endif
  E_RVVM1x3BFmode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x3BFmode E_RVVM1x3BFmode
#else
#define RVVM1x3BFmode ((void) 0, E_RVVM1x3BFmode)
#endif
  E_RVVMF4x3HFmode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF4x3HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x3HFmode E_RVVMF4x3HFmode
#else
#define RVVMF4x3HFmode ((void) 0, E_RVVMF4x3HFmode)
#endif
  E_RVVMF2x3HFmode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x3HFmode E_RVVMF2x3HFmode
#else
#define RVVMF2x3HFmode ((void) 0, E_RVVMF2x3HFmode)
#endif
  E_RVVM1x3HFmode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x3HFmode E_RVVM1x3HFmode
#else
#define RVVM1x3HFmode ((void) 0, E_RVVM1x3HFmode)
#endif
  E_RVVM2x3BFmode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3BFmode
#ifdef USE_ENUM_MODES
#define RVVM2x3BFmode E_RVVM2x3BFmode
#else
#define RVVM2x3BFmode ((void) 0, E_RVVM2x3BFmode)
#endif
  E_RVVM2x3HFmode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3HFmode
#ifdef USE_ENUM_MODES
#define RVVM2x3HFmode E_RVVM2x3HFmode
#else
#define RVVM2x3HFmode ((void) 0, E_RVVM2x3HFmode)
#endif
  E_RVVMF4x4BFmode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF4x4BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x4BFmode E_RVVMF4x4BFmode
#else
#define RVVMF4x4BFmode ((void) 0, E_RVVMF4x4BFmode)
#endif
  E_RVVMF2x4BFmode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x4BFmode E_RVVMF2x4BFmode
#else
#define RVVMF2x4BFmode ((void) 0, E_RVVMF2x4BFmode)
#endif
  E_RVVM1x4BFmode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x4BFmode E_RVVM1x4BFmode
#else
#define RVVM1x4BFmode ((void) 0, E_RVVM1x4BFmode)
#endif
  E_RVVMF4x4HFmode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF4x4HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x4HFmode E_RVVMF4x4HFmode
#else
#define RVVMF4x4HFmode ((void) 0, E_RVVMF4x4HFmode)
#endif
  E_RVVMF2x4HFmode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x4HFmode E_RVVMF2x4HFmode
#else
#define RVVMF2x4HFmode ((void) 0, E_RVVMF2x4HFmode)
#endif
  E_RVVM1x4HFmode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x4HFmode E_RVVM1x4HFmode
#else
#define RVVM1x4HFmode ((void) 0, E_RVVM1x4HFmode)
#endif
  E_RVVM2x4BFmode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4BFmode
#ifdef USE_ENUM_MODES
#define RVVM2x4BFmode E_RVVM2x4BFmode
#else
#define RVVM2x4BFmode ((void) 0, E_RVVM2x4BFmode)
#endif
  E_RVVM2x4HFmode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4HFmode
#ifdef USE_ENUM_MODES
#define RVVM2x4HFmode E_RVVM2x4HFmode
#else
#define RVVM2x4HFmode ((void) 0, E_RVVM2x4HFmode)
#endif
  E_V4HFmode,              /* config/riscv/riscv-modes.def:414 */
#define HAVE_V4HFmode
#ifdef USE_ENUM_MODES
#define V4HFmode E_V4HFmode
#else
#define V4HFmode ((void) 0, E_V4HFmode)
#endif
  E_RVVMF2x2SFmode,        /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVMF2x2SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x2SFmode E_RVVMF2x2SFmode
#else
#define RVVMF2x2SFmode ((void) 0, E_RVVMF2x2SFmode)
#endif
  E_RVVM1x2SFmode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x2SFmode E_RVVM1x2SFmode
#else
#define RVVM1x2SFmode ((void) 0, E_RVVM1x2SFmode)
#endif
  E_RVVM2x2SFmode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2SFmode
#ifdef USE_ENUM_MODES
#define RVVM2x2SFmode E_RVVM2x2SFmode
#else
#define RVVM2x2SFmode ((void) 0, E_RVVM2x2SFmode)
#endif
  E_RVVM4x2SFmode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2SFmode
#ifdef USE_ENUM_MODES
#define RVVM4x2SFmode E_RVVM4x2SFmode
#else
#define RVVM4x2SFmode ((void) 0, E_RVVM4x2SFmode)
#endif
  E_V2SFmode,              /* config/riscv/riscv-modes.def:416 */
#define HAVE_V2SFmode
#ifdef USE_ENUM_MODES
#define V2SFmode E_V2SFmode
#else
#define V2SFmode ((void) 0, E_V2SFmode)
#endif
  E_V1DFmode,              /* config/riscv/riscv-modes.def:407 */
#define HAVE_V1DFmode
#ifdef USE_ENUM_MODES
#define V1DFmode E_V1DFmode
#else
#define V1DFmode ((void) 0, E_V1DFmode)
#endif
  E_RVVMF4x5BFmode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF4x5BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x5BFmode E_RVVMF4x5BFmode
#else
#define RVVMF4x5BFmode ((void) 0, E_RVVMF4x5BFmode)
#endif
  E_RVVMF2x5BFmode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x5BFmode E_RVVMF2x5BFmode
#else
#define RVVMF2x5BFmode ((void) 0, E_RVVMF2x5BFmode)
#endif
  E_RVVM1x5BFmode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x5BFmode E_RVVM1x5BFmode
#else
#define RVVM1x5BFmode ((void) 0, E_RVVM1x5BFmode)
#endif
  E_RVVMF4x5HFmode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF4x5HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x5HFmode E_RVVMF4x5HFmode
#else
#define RVVMF4x5HFmode ((void) 0, E_RVVMF4x5HFmode)
#endif
  E_RVVMF2x5HFmode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x5HFmode E_RVVMF2x5HFmode
#else
#define RVVMF2x5HFmode ((void) 0, E_RVVMF2x5HFmode)
#endif
  E_RVVM1x5HFmode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x5HFmode E_RVVM1x5HFmode
#else
#define RVVM1x5HFmode ((void) 0, E_RVVM1x5HFmode)
#endif
  E_RVVMF4x6BFmode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF4x6BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x6BFmode E_RVVMF4x6BFmode
#else
#define RVVMF4x6BFmode ((void) 0, E_RVVMF4x6BFmode)
#endif
  E_RVVMF2x6BFmode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x6BFmode E_RVVMF2x6BFmode
#else
#define RVVMF2x6BFmode ((void) 0, E_RVVMF2x6BFmode)
#endif
  E_RVVM1x6BFmode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x6BFmode E_RVVM1x6BFmode
#else
#define RVVM1x6BFmode ((void) 0, E_RVVM1x6BFmode)
#endif
  E_RVVMF4x6HFmode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF4x6HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x6HFmode E_RVVMF4x6HFmode
#else
#define RVVMF4x6HFmode ((void) 0, E_RVVMF4x6HFmode)
#endif
  E_RVVMF2x6HFmode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x6HFmode E_RVVMF2x6HFmode
#else
#define RVVMF2x6HFmode ((void) 0, E_RVVMF2x6HFmode)
#endif
  E_RVVM1x6HFmode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x6HFmode E_RVVM1x6HFmode
#else
#define RVVM1x6HFmode ((void) 0, E_RVVM1x6HFmode)
#endif
  E_RVVMF2x3SFmode,        /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVMF2x3SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x3SFmode E_RVVMF2x3SFmode
#else
#define RVVMF2x3SFmode ((void) 0, E_RVVMF2x3SFmode)
#endif
  E_RVVM1x3SFmode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x3SFmode E_RVVM1x3SFmode
#else
#define RVVM1x3SFmode ((void) 0, E_RVVM1x3SFmode)
#endif
  E_RVVM2x3SFmode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3SFmode
#ifdef USE_ENUM_MODES
#define RVVM2x3SFmode E_RVVM2x3SFmode
#else
#define RVVM2x3SFmode ((void) 0, E_RVVM2x3SFmode)
#endif
  E_RVVMF4x7BFmode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF4x7BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x7BFmode E_RVVMF4x7BFmode
#else
#define RVVMF4x7BFmode ((void) 0, E_RVVMF4x7BFmode)
#endif
  E_RVVMF2x7BFmode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x7BFmode E_RVVMF2x7BFmode
#else
#define RVVMF2x7BFmode ((void) 0, E_RVVMF2x7BFmode)
#endif
  E_RVVM1x7BFmode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x7BFmode E_RVVM1x7BFmode
#else
#define RVVM1x7BFmode ((void) 0, E_RVVM1x7BFmode)
#endif
  E_RVVMF4x7HFmode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF4x7HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x7HFmode E_RVVMF4x7HFmode
#else
#define RVVMF4x7HFmode ((void) 0, E_RVVMF4x7HFmode)
#endif
  E_RVVMF2x7HFmode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x7HFmode E_RVVMF2x7HFmode
#else
#define RVVMF2x7HFmode ((void) 0, E_RVVMF2x7HFmode)
#endif
  E_RVVM1x7HFmode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x7HFmode E_RVVM1x7HFmode
#else
#define RVVM1x7HFmode ((void) 0, E_RVVM1x7HFmode)
#endif
  E_RVVMF4x8BFmode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF4x8BFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x8BFmode E_RVVMF4x8BFmode
#else
#define RVVMF4x8BFmode ((void) 0, E_RVVMF4x8BFmode)
#endif
  E_RVVMF2x8BFmode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8BFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x8BFmode E_RVVMF2x8BFmode
#else
#define RVVMF2x8BFmode ((void) 0, E_RVVMF2x8BFmode)
#endif
  E_RVVM1x8BFmode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8BFmode
#ifdef USE_ENUM_MODES
#define RVVM1x8BFmode E_RVVM1x8BFmode
#else
#define RVVM1x8BFmode ((void) 0, E_RVVM1x8BFmode)
#endif
  E_RVVMF4x8HFmode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF4x8HFmode
#ifdef USE_ENUM_MODES
#define RVVMF4x8HFmode E_RVVMF4x8HFmode
#else
#define RVVMF4x8HFmode ((void) 0, E_RVVMF4x8HFmode)
#endif
  E_RVVMF2x8HFmode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8HFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x8HFmode E_RVVMF2x8HFmode
#else
#define RVVMF2x8HFmode ((void) 0, E_RVVMF2x8HFmode)
#endif
  E_RVVM1x8HFmode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8HFmode
#ifdef USE_ENUM_MODES
#define RVVM1x8HFmode E_RVVM1x8HFmode
#else
#define RVVM1x8HFmode ((void) 0, E_RVVM1x8HFmode)
#endif
  E_V8HFmode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V8HFmode
#ifdef USE_ENUM_MODES
#define V8HFmode E_V8HFmode
#else
#define V8HFmode ((void) 0, E_V8HFmode)
#endif
  E_RVVMF2x4SFmode,        /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVMF2x4SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x4SFmode E_RVVMF2x4SFmode
#else
#define RVVMF2x4SFmode ((void) 0, E_RVVMF2x4SFmode)
#endif
  E_RVVM1x4SFmode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x4SFmode E_RVVM1x4SFmode
#else
#define RVVM1x4SFmode ((void) 0, E_RVVM1x4SFmode)
#endif
  E_RVVM2x4SFmode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4SFmode
#ifdef USE_ENUM_MODES
#define RVVM2x4SFmode E_RVVM2x4SFmode
#else
#define RVVM2x4SFmode ((void) 0, E_RVVM2x4SFmode)
#endif
  E_V4SFmode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V4SFmode
#ifdef USE_ENUM_MODES
#define V4SFmode E_V4SFmode
#else
#define V4SFmode ((void) 0, E_V4SFmode)
#endif
  E_RVVM1x2DFmode,         /* config/riscv/riscv-modes.def:263 */
#define HAVE_RVVM1x2DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x2DFmode E_RVVM1x2DFmode
#else
#define RVVM1x2DFmode ((void) 0, E_RVVM1x2DFmode)
#endif
  E_RVVM2x2DFmode,         /* config/riscv/riscv-modes.def:301 */
#define HAVE_RVVM2x2DFmode
#ifdef USE_ENUM_MODES
#define RVVM2x2DFmode E_RVVM2x2DFmode
#else
#define RVVM2x2DFmode ((void) 0, E_RVVM2x2DFmode)
#endif
  E_RVVM4x2DFmode,         /* config/riscv/riscv-modes.def:341 */
#define HAVE_RVVM4x2DFmode
#ifdef USE_ENUM_MODES
#define RVVM4x2DFmode E_RVVM4x2DFmode
#else
#define RVVM4x2DFmode ((void) 0, E_RVVM4x2DFmode)
#endif
  E_V2DFmode,              /* config/riscv/riscv-modes.def:417 */
#define HAVE_V2DFmode
#ifdef USE_ENUM_MODES
#define V2DFmode E_V2DFmode
#else
#define V2DFmode ((void) 0, E_V2DFmode)
#endif
  E_RVVMF2x5SFmode,        /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVMF2x5SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x5SFmode E_RVVMF2x5SFmode
#else
#define RVVMF2x5SFmode ((void) 0, E_RVVMF2x5SFmode)
#endif
  E_RVVM1x5SFmode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x5SFmode E_RVVM1x5SFmode
#else
#define RVVM1x5SFmode ((void) 0, E_RVVM1x5SFmode)
#endif
  E_RVVMF2x6SFmode,        /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVMF2x6SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x6SFmode E_RVVMF2x6SFmode
#else
#define RVVMF2x6SFmode ((void) 0, E_RVVMF2x6SFmode)
#endif
  E_RVVM1x6SFmode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x6SFmode E_RVVM1x6SFmode
#else
#define RVVM1x6SFmode ((void) 0, E_RVVM1x6SFmode)
#endif
  E_RVVM1x3DFmode,         /* config/riscv/riscv-modes.def:262 */
#define HAVE_RVVM1x3DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x3DFmode E_RVVM1x3DFmode
#else
#define RVVM1x3DFmode ((void) 0, E_RVVM1x3DFmode)
#endif
  E_RVVM2x3DFmode,         /* config/riscv/riscv-modes.def:302 */
#define HAVE_RVVM2x3DFmode
#ifdef USE_ENUM_MODES
#define RVVM2x3DFmode E_RVVM2x3DFmode
#else
#define RVVM2x3DFmode ((void) 0, E_RVVM2x3DFmode)
#endif
  E_RVVMF2x7SFmode,        /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVMF2x7SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x7SFmode E_RVVMF2x7SFmode
#else
#define RVVMF2x7SFmode ((void) 0, E_RVVMF2x7SFmode)
#endif
  E_RVVM1x7SFmode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x7SFmode E_RVVM1x7SFmode
#else
#define RVVM1x7SFmode ((void) 0, E_RVVM1x7SFmode)
#endif
  E_V16HFmode,             /* config/riscv/riscv-modes.def:418 */
#define HAVE_V16HFmode
#ifdef USE_ENUM_MODES
#define V16HFmode E_V16HFmode
#else
#define V16HFmode ((void) 0, E_V16HFmode)
#endif
  E_RVVMF2x8SFmode,        /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVMF2x8SFmode
#ifdef USE_ENUM_MODES
#define RVVMF2x8SFmode E_RVVMF2x8SFmode
#else
#define RVVMF2x8SFmode ((void) 0, E_RVVMF2x8SFmode)
#endif
  E_RVVM1x8SFmode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8SFmode
#ifdef USE_ENUM_MODES
#define RVVM1x8SFmode E_RVVM1x8SFmode
#else
#define RVVM1x8SFmode ((void) 0, E_RVVM1x8SFmode)
#endif
  E_V8SFmode,              /* config/riscv/riscv-modes.def:418 */
#define HAVE_V8SFmode
#ifdef USE_ENUM_MODES
#define V8SFmode E_V8SFmode
#else
#define V8SFmode ((void) 0, E_V8SFmode)
#endif
  E_RVVM1x4DFmode,         /* config/riscv/riscv-modes.def:261 */
#define HAVE_RVVM1x4DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x4DFmode E_RVVM1x4DFmode
#else
#define RVVM1x4DFmode ((void) 0, E_RVVM1x4DFmode)
#endif
  E_RVVM2x4DFmode,         /* config/riscv/riscv-modes.def:303 */
#define HAVE_RVVM2x4DFmode
#ifdef USE_ENUM_MODES
#define RVVM2x4DFmode E_RVVM2x4DFmode
#else
#define RVVM2x4DFmode ((void) 0, E_RVVM2x4DFmode)
#endif
  E_V4DFmode,              /* config/riscv/riscv-modes.def:418 */
#define HAVE_V4DFmode
#ifdef USE_ENUM_MODES
#define V4DFmode E_V4DFmode
#else
#define V4DFmode ((void) 0, E_V4DFmode)
#endif
  E_RVVM1x5DFmode,         /* config/riscv/riscv-modes.def:260 */
#define HAVE_RVVM1x5DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x5DFmode E_RVVM1x5DFmode
#else
#define RVVM1x5DFmode ((void) 0, E_RVVM1x5DFmode)
#endif
  E_RVVM1x6DFmode,         /* config/riscv/riscv-modes.def:259 */
#define HAVE_RVVM1x6DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x6DFmode E_RVVM1x6DFmode
#else
#define RVVM1x6DFmode ((void) 0, E_RVVM1x6DFmode)
#endif
  E_RVVM1x7DFmode,         /* config/riscv/riscv-modes.def:258 */
#define HAVE_RVVM1x7DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x7DFmode E_RVVM1x7DFmode
#else
#define RVVM1x7DFmode ((void) 0, E_RVVM1x7DFmode)
#endif
  E_V32HFmode,             /* config/riscv/riscv-modes.def:419 */
#define HAVE_V32HFmode
#ifdef USE_ENUM_MODES
#define V32HFmode E_V32HFmode
#else
#define V32HFmode ((void) 0, E_V32HFmode)
#endif
  E_V16SFmode,             /* config/riscv/riscv-modes.def:419 */
#define HAVE_V16SFmode
#ifdef USE_ENUM_MODES
#define V16SFmode E_V16SFmode
#else
#define V16SFmode ((void) 0, E_V16SFmode)
#endif
  E_RVVM1x8DFmode,         /* config/riscv/riscv-modes.def:257 */
#define HAVE_RVVM1x8DFmode
#ifdef USE_ENUM_MODES
#define RVVM1x8DFmode E_RVVM1x8DFmode
#else
#define RVVM1x8DFmode ((void) 0, E_RVVM1x8DFmode)
#endif
  E_V8DFmode,              /* config/riscv/riscv-modes.def:419 */
#define HAVE_V8DFmode
#ifdef USE_ENUM_MODES
#define V8DFmode E_V8DFmode
#else
#define V8DFmode ((void) 0, E_V8DFmode)
#endif
  E_V64HFmode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V64HFmode
#ifdef USE_ENUM_MODES
#define V64HFmode E_V64HFmode
#else
#define V64HFmode ((void) 0, E_V64HFmode)
#endif
  E_V32SFmode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V32SFmode
#ifdef USE_ENUM_MODES
#define V32SFmode E_V32SFmode
#else
#define V32SFmode ((void) 0, E_V32SFmode)
#endif
  E_V16DFmode,             /* config/riscv/riscv-modes.def:420 */
#define HAVE_V16DFmode
#ifdef USE_ENUM_MODES
#define V16DFmode E_V16DFmode
#else
#define V16DFmode ((void) 0, E_V16DFmode)
#endif
  E_V128HFmode,            /* config/riscv/riscv-modes.def:421 */
#define HAVE_V128HFmode
#ifdef USE_ENUM_MODES
#define V128HFmode E_V128HFmode
#else
#define V128HFmode ((void) 0, E_V128HFmode)
#endif
  E_V64SFmode,             /* config/riscv/riscv-modes.def:421 */
#define HAVE_V64SFmode
#ifdef USE_ENUM_MODES
#define V64SFmode E_V64SFmode
#else
#define V64SFmode ((void) 0, E_V64SFmode)
#endif
  E_V32DFmode,             /* config/riscv/riscv-modes.def:421 */
#define HAVE_V32DFmode
#ifdef USE_ENUM_MODES
#define V32DFmode E_V32DFmode
#else
#define V32DFmode ((void) 0, E_V32DFmode)
#endif
  E_V256HFmode,            /* config/riscv/riscv-modes.def:422 */
#define HAVE_V256HFmode
#ifdef USE_ENUM_MODES
#define V256HFmode E_V256HFmode
#else
#define V256HFmode ((void) 0, E_V256HFmode)
#endif
  E_V128SFmode,            /* config/riscv/riscv-modes.def:422 */
#define HAVE_V128SFmode
#ifdef USE_ENUM_MODES
#define V128SFmode E_V128SFmode
#else
#define V128SFmode ((void) 0, E_V128SFmode)
#endif
  E_V64DFmode,             /* config/riscv/riscv-modes.def:422 */
#define HAVE_V64DFmode
#ifdef USE_ENUM_MODES
#define V64DFmode E_V64DFmode
#else
#define V64DFmode ((void) 0, E_V64DFmode)
#endif
  E_V512HFmode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V512HFmode
#ifdef USE_ENUM_MODES
#define V512HFmode E_V512HFmode
#else
#define V512HFmode ((void) 0, E_V512HFmode)
#endif
  E_V256SFmode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V256SFmode
#ifdef USE_ENUM_MODES
#define V256SFmode E_V256SFmode
#else
#define V256SFmode ((void) 0, E_V256SFmode)
#endif
  E_V128DFmode,            /* config/riscv/riscv-modes.def:423 */
#define HAVE_V128DFmode
#ifdef USE_ENUM_MODES
#define V128DFmode E_V128DFmode
#else
#define V128DFmode ((void) 0, E_V128DFmode)
#endif
  E_V1024HFmode,           /* config/riscv/riscv-modes.def:424 */
#define HAVE_V1024HFmode
#ifdef USE_ENUM_MODES
#define V1024HFmode E_V1024HFmode
#else
#define V1024HFmode ((void) 0, E_V1024HFmode)
#endif
  E_V512SFmode,            /* config/riscv/riscv-modes.def:424 */
#define HAVE_V512SFmode
#ifdef USE_ENUM_MODES
#define V512SFmode E_V512SFmode
#else
#define V512SFmode ((void) 0, E_V512SFmode)
#endif
  E_V256DFmode,            /* config/riscv/riscv-modes.def:424 */
#define HAVE_V256DFmode
#ifdef USE_ENUM_MODES
#define V256DFmode E_V256DFmode
#else
#define V256DFmode ((void) 0, E_V256DFmode)
#endif
  E_V2048HFmode,           /* config/riscv/riscv-modes.def:425 */
#define HAVE_V2048HFmode
#ifdef USE_ENUM_MODES
#define V2048HFmode E_V2048HFmode
#else
#define V2048HFmode ((void) 0, E_V2048HFmode)
#endif
  E_V1024SFmode,           /* config/riscv/riscv-modes.def:425 */
#define HAVE_V1024SFmode
#ifdef USE_ENUM_MODES
#define V1024SFmode E_V1024SFmode
#else
#define V1024SFmode ((void) 0, E_V1024SFmode)
#endif
  E_V512DFmode,            /* config/riscv/riscv-modes.def:425 */
#define HAVE_V512DFmode
#ifdef USE_ENUM_MODES
#define V512DFmode E_V512DFmode
#else
#define V512DFmode ((void) 0, E_V512DFmode)
#endif
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = E_VOIDmode,
  MAX_MODE_RANDOM = E_BLKmode,

  MIN_MODE_CC = E_CCmode,
  MAX_MODE_CC = E_CCmode,

  MIN_MODE_BOOL = E_BImode,
  MAX_MODE_BOOL = E_BImode,

  MIN_MODE_INT = E_QImode,
  MAX_MODE_INT = E_TImode,

  MIN_MODE_PARTIAL_INT = E_VOIDmode,
  MAX_MODE_PARTIAL_INT = E_VOIDmode,

  MIN_MODE_FRACT = E_QQmode,
  MAX_MODE_FRACT = E_TQmode,

  MIN_MODE_UFRACT = E_UQQmode,
  MAX_MODE_UFRACT = E_UTQmode,

  MIN_MODE_ACCUM = E_HAmode,
  MAX_MODE_ACCUM = E_TAmode,

  MIN_MODE_UACCUM = E_UHAmode,
  MAX_MODE_UACCUM = E_UTAmode,

  MIN_MODE_FLOAT = E_HFmode,
  MAX_MODE_FLOAT = E_TFmode,

  MIN_MODE_DECIMAL_FLOAT = E_SDmode,
  MAX_MODE_DECIMAL_FLOAT = E_TDmode,

  MIN_MODE_COMPLEX_INT = E_CQImode,
  MAX_MODE_COMPLEX_INT = E_CTImode,

  MIN_MODE_COMPLEX_FLOAT = E_BCmode,
  MAX_MODE_COMPLEX_FLOAT = E_TCmode,

  MIN_MODE_VECTOR_BOOL = E_RVVMF8BImode,
  MAX_MODE_VECTOR_BOOL = E_V4096BImode,

  MIN_MODE_VECTOR_INT = E_RVVM1QImode,
  MAX_MODE_VECTOR_INT = E_V512DImode,

  MIN_MODE_VECTOR_FRACT = E_VOIDmode,
  MAX_MODE_VECTOR_FRACT = E_VOIDmode,

  MIN_MODE_VECTOR_UFRACT = E_VOIDmode,
  MAX_MODE_VECTOR_UFRACT = E_VOIDmode,

  MIN_MODE_VECTOR_ACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_ACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_UACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_UACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_FLOAT = E_RVVM1BFmode,
  MAX_MODE_VECTOR_FLOAT = E_V512DFmode,

  MIN_MODE_OPAQUE = E_VOIDmode,
  MAX_MODE_OPAQUE = E_VOIDmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define NUM_MODE_RANDOM (MAX_MODE_RANDOM - MIN_MODE_RANDOM + 1)
#define NUM_MODE_CC (MAX_MODE_CC - MIN_MODE_CC + 1)
#define NUM_MODE_INT (MAX_MODE_INT - MIN_MODE_INT + 1)
#define NUM_MODE_PARTIAL_INT 0
#define NUM_MODE_FRACT (MAX_MODE_FRACT - MIN_MODE_FRACT + 1)
#define NUM_MODE_UFRACT (MAX_MODE_UFRACT - MIN_MODE_UFRACT + 1)
#define NUM_MODE_ACCUM (MAX_MODE_ACCUM - MIN_MODE_ACCUM + 1)
#define NUM_MODE_UACCUM (MAX_MODE_UACCUM - MIN_MODE_UACCUM + 1)
#define NUM_MODE_FLOAT (MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1)
#define NUM_MODE_DECIMAL_FLOAT (MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1)
#define NUM_MODE_COMPLEX_INT (MAX_MODE_COMPLEX_INT - MIN_MODE_COMPLEX_INT + 1)
#define NUM_MODE_COMPLEX_FLOAT (MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT + 1)
#define NUM_MODE_VECTOR_BOOL (MAX_MODE_VECTOR_BOOL - MIN_MODE_VECTOR_BOOL + 1)
#define NUM_MODE_VECTOR_INT (MAX_MODE_VECTOR_INT - MIN_MODE_VECTOR_INT + 1)
#define NUM_MODE_VECTOR_FRACT 0
#define NUM_MODE_VECTOR_UFRACT 0
#define NUM_MODE_VECTOR_ACCUM 0
#define NUM_MODE_VECTOR_UACCUM 0
#define NUM_MODE_VECTOR_FLOAT (MAX_MODE_VECTOR_FLOAT - MIN_MODE_VECTOR_FLOAT + 1)
#define NUM_MODE_OPAQUE 0

#define CONST_MODE_NUNITS
#define CONST_MODE_PRECISION
#define CONST_MODE_SIZE
#define CONST_MODE_UNIT_SIZE
#define CONST_MODE_BASE_ALIGN
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const
#define CONST_MODE_MASK

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (16*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE 32768
#define NUM_INT_N_ENTS 1
#define NUM_POLY_INT_COEFFS 2

#endif /* insn-modes.h */
