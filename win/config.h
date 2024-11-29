/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Executable extension */
#define COB_EXEEXT ""

/* Enable experimemental code (Developers only!) */
/* #undef COB_EXPERIMENTAL */

/* Compile/link option for exporting symbols */
#define COB_EXPORT_DYN "-Wl,--export-dynamic"

/* Extra Compiler Flags */
#define COB_EXTRA_FLAGS ""

/* Can use inline keyword */
#define COB_HAS_INLINE 1

/* long int is long long */
#ifndef _WIN32
#define COB_LI_IS_LL 1
#endif

/* Can not dlopen self */
#ifndef _WIN32
#define COB_NO_SELFOPEN 1
#endif

/* Enable CALL parameter checking */
/* #undef COB_PARAM_CHECK */

/* Compile/link option for PIC code */
#define COB_PIC_FLAGS "-fPIC -DPIC"

/* Compile/link option for shared code */
#define COB_SHARED_OPT "-shared"

/* Can use strftime for timezone */
#ifndef _WIN32
#define COB_STRFTIME 1
#endif

/* Strip command */
#define COB_STRIP_CMD "strip --strip-unneeded"

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
   /* #undef CRAY_STACKSEG_END */

   /* Define to 1 if using `alloca.c'. */
   /* #undef C_ALLOCA */

   /* Define to 1 if translation of program messages to the user's native
	  language is requested. */
#ifndef _WIN32
#define ENABLE_NLS 1
#endif

	  /* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

   /* Has __attribute__((aligned)) */
#define HAVE_ATTRIBUTE_ALIGNED 1

/* curses has color_set function */
#define HAVE_COLOR_SET 1

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define to 1 if you have the <db1/db.h> header file. */
/* #undef HAVE_DB1_DB_H */

/* Define to 1 if you have the <db3/db_185.h> header file. */
/* #undef HAVE_DB3_DB_185_H */

/* Define to 1 if you have the <db4.1/db_185.h> header file. */
/* #undef HAVE_DB4_1_DB_185_H */

/* Define to 1 if you have the <db4.2/db_185.h> header file. */
/* #undef HAVE_DB4_2_DB_185_H */

/* Define to 1 if you have the <db4.3/db_185.h> header file. */
/* #undef HAVE_DB4_3_DB_185_H */

/* Define to 1 if you have the <db4.4/db_185.h> header file. */
/* #undef HAVE_DB4_4_DB_185_H */

/* Define to 1 if you have the <db4.5/db_185.h> header file. */
/* #undef HAVE_DB4_5_DB_185_H */

/* Define to 1 if you have the <db4/db_185.h> header file. */
/* #undef HAVE_DB4_DB_185_H */

/* Define to 1 if you have the <db_185.h> header file. */
/* #undef HAVE_DB_185_H */

/* Define to 1 if you have the <db.h> header file. */
/* #undef HAVE_DB_H */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

   /* Define to 1 if you have the <disam.h> header file. */
   /* #undef HAVE_DISAM_H */

   /* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `fcntl' function. */
#ifndef _WIN32
#define HAVE_FCNTL 1
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#ifndef _WIN32
#define HAVE_FCNTL_H 1
#endif

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <gmp.h> header file. */
#define HAVE_GMP_H 1

/* Define if you have the iconv() function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <isam.h> header file. */
/* #undef HAVE_ISAM_H */

/* Define to 1 if you have the <kpathsea/getopt.h> header file. */
/* #undef HAVE_KPATHSEA_GETOPT_H */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the `curses' library (-lcurses). */
/* #undef HAVE_LIBCURSES */

/* Define to 1 if you have the `disam' library (-ldisam). */
/* #undef HAVE_LIBDISAM */

/* Define to 1 if you have the `gmp' library (-lgmp). */
#define HAVE_LIBGMP 1

/* Define to 1 if you have the `ifisam' library (-lifisam). */
/* #undef HAVE_LIBIFISAM */

/* Define to 1 if you have the `ltdl' library (-lltdl). */
/* #undef HAVE_LIBLTDL */

/* Define to 1 if you have the `ncurses' library (-lncurses). */
/* #undef HAVE_LIBNCURSES */

/* Define to 1 if you have the `pdcurses' library (-lpdcurses). */
#define HAVE_LIBPDCURSES 1

/* Define to 1 if you have the `posix4' library (-lposix4). */
/* #undef HAVE_LIBPOSIX4 */

/* Define to 1 if you have the `rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define to 1 if you have the `vbisam' library (-lvbisam). */
/* #undef HAVE_LIBVBISAM */
#ifndef _WIN32
#define HAVE_LIBVBISAM 1
#endif

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <ltdl.h> header file. */
/* #undef HAVE_LTDL_H */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <ncurses.h> header file. */
/* #undef HAVE_NCURSES_H */

/* Define to 1 if you have the <ncurses/ncurses.h> header file. */
/* #undef HAVE_NCURSES_NCURSES_H */

/* Define to 1 if you have the <pdcurses.h> header file. */
/* #undef HAVE_PDCURSES_H */

/* Has -Wno-pointer-sign */
#define HAVE_PSIGN_OPT 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#ifndef _WIN32
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef _WIN32
#define HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef _WIN32
#define HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Has timezone variable */
/* #undef HAVE_TIMEZONE */

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef _WIN32
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the <vbisam.h> header file. */
#ifndef _WIN32
#define HAVE_VBISAM_H 1
#endif

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Enable UTF-8 support */
/* #undef I18N_UTF8 */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Name of package */
#define PACKAGE "opensource-cobol4j-1.1.4"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "ws-opensource-cobol-contact@osscons.jp"

/* Define to the full name of this package. */
#define PACKAGE_NAME "opensource COBOL 4J"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "opensource COBOL 4J 1.1.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "opensource-cobol4j-1.1.4"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.4"

/* Define a patch level */
#define PATCH_LEVEL 0

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
	/* #undef STACK_DIRECTION */

	/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Use Berkeley DB library new features */
//#define USE_DB41 1

/* Use system dynamic loader */
#ifndef _WIN32
#define USE_LIBDL 1
#endif

/* Version number of package */
#define VERSION "1.1"

/* Use CISAM as ISAM handler */
/* #undef WITH_CISAM */

/* Compile with the Berkeley DB library */
//#define WITH_DB 3

/* Use DISAM as ISAM handler */
/* #undef WITH_DISAM */

/* Compile with an external ISAM handler */
/* #undef WITH_INDEX_EXTFH */

/* Compile with an external SEQ/RAN handler */
/* #undef WITH_SEQRA_EXTFH */

/* Define variable sequential file format */
#define WITH_VARSEQ 0

/* Use VBISAM as ISAM handler */
/* #undef WITH_VBISAM */

#define WITH_VBISAM 1

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
   /* #undef WORDS_BIGENDIAN */

   /* Define to 1 if on HPUX.  */
#ifndef _XOPEN_SOURCE_EXTENDED
/* # undef _XOPEN_SOURCE_EXTENDED */
#endif

/* Compiler optimization */
#define __USE_STRING_INLINES 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
   /* #undef inline */
#endif

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */