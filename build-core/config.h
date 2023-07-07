/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Using a bundled copy of protobuf */
/* #undef BUNDLED_PROTOBUF */

/* options passed to configure script */
#define CONFIGURE_COMMAND " '--build=x86_64-linux-gnu' '--prefix=/usr' '--includedir=${prefix}/include' '--mandir=${prefix}/share/man' '--infodir=${prefix}/share/info' '--sysconfdir=/etc' '--localstatedir=/var' '--disable-option-checking' '--disable-silent-rules' '--libdir=${prefix}/lib/x86_64-linux-gnu' '--runstatedir=/run' '--disable-maintainer-mode' '--disable-dependency-tracking' '--libdir=/usr/lib' '--libexecdir=/usr/lib' '--disable-cloud' '--enable-x86-sse' '--disable-exporting-prometheus-remote-write' '--enable-dbengine' '--enable-https' '--enable-plugin-cups' '--enable-plugin-nfacct' '--with-math' 'build_alias=x86_64-linux-gnu' 'CFLAGS=-g -O2 -ffile-prefix-map=/persistent/home/zrz/Project/deb_pr/new2/pr_table/netdata_1.40.1.orig/netdata-1.40.1=. -fstack-protector-strong -Wformat -Werror=format-security -Wall -O3' 'LDFLAGS=-Wl,-z,relro -Wl,-z,now -Wl,--as-needed' 'CPPFLAGS=-Wdate-time -D_FORTIFY_SOURCE=2' 'CXXFLAGS=-g -O2 -ffile-prefix-map=/persistent/home/zrz/Project/deb_pr/new2/pr_table/netdata_1.40.1.orig/netdata-1.40.1=. -fstack-protector-strong -Wformat -Werror=format-security'"

/* disable netdata cloud functionality */
#define DISABLE_CLOUD 1

/* netdata ACLK */
/* #undef ENABLE_ACLK */

/* apps.plugin */
#define ENABLE_APPS_PLUGIN 1

/* netdata compression usability */
#define ENABLE_COMPRESSION 1

/* netdata dbengine usability */
#define ENABLE_DBENGINE 1

/* debugfs.plugin */
#define ENABLE_DEBUGFS_PLUGIN 1

/* Pub/Sub API usability */
/* #undef ENABLE_EXPORTING_PUBSUB */

/* HTTPD (h2o based web server) */
/* #undef ENABLE_HTTPD */

/* netdata HTTPS usability */
#define ENABLE_HTTPS 1

/* compile and link with jemalloc */
/* #undef ENABLE_JEMALLOC */

/* netdata json-c usability */
#define ENABLE_JSONC 1

/* anomaly detection usability */
/* #undef ENABLE_ML */

/* perf.plugin */
#define ENABLE_PERF_PLUGIN 1

/* Prometheus remote write API usability */
/* #undef ENABLE_PROMETHEUS_REMOTE_WRITE */

/* slabinfo plugin */
#define ENABLE_SLABINFO 1

/* compile and link with tcmalloc */
/* #undef ENABLE_TCMALLOC */

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* backtrace availability */
#define HAVE_BACKTRACE 1

/* libcap usability */
#define HAVE_CAPABILITY 1

/* Define to 1 if the system has the type `clockid_t'. */
#define HAVE_CLOCKID_T 1

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `close_range' function. */
#define HAVE_CLOSE_RANGE 1

/* libcrypto availability */
#define HAVE_CRYPTO 1

/* cups usability */
#define HAVE_CUPS 1

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if glibc mallinfo exists. */
#define HAVE_C_MALLINFO 1

/* Define to 1 if glibc mallopt exists. */
#define HAVE_C_MALLOPT 1

/* Define to 1 if C11-style _Generic works. */
#define HAVE_C__GENERIC 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* dlsym usability */
#define HAVE_DLSYM 1

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* ipmimonitoring usability */
/* #undef HAVE_FREEIPMI */

/* Define to 1 if the system has the `format' function attribute */
#define HAVE_FUNC_ATTRIBUTE_FORMAT 1

/* Define to 1 if the system has the `malloc' function attribute */
#define HAVE_FUNC_ATTRIBUTE_MALLOC 1

/* Define to 1 if the system has the `noinline' function attribute */
#define HAVE_FUNC_ATTRIBUTE_NOINLINE 1

/* Define to 1 if the system has the `noreturn' function attribute */
#define HAVE_FUNC_ATTRIBUTE_NORETURN 1

/* Define to 1 if the system has the `returns_nonnull' function attribute */
#define HAVE_FUNC_ATTRIBUTE_RETURNS_NONNULL 1

/* Define to 1 if the system has the `warn_unused_result' function attribute
   */
#define HAVE_FUNC_ATTRIBUTE_WARN_UNUSED_RESULT 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isfinite' function. */
/* #undef HAVE_ISFINITE */

/* Define to 1 if you have the <jemalloc/jemalloc.h> header file. */
/* #undef HAVE_JEMALLOC_JEMALLOC_H */

/* libaws-cpp-sdk-kinesis usability */
/* #undef HAVE_KINESIS */

/* libbpf usability */
/* #undef HAVE_LIBBPF */

/* libdatachannel usability */
/* #undef HAVE_LIBDATACHANNEL */

/* libxenstat usability */
/* #undef HAVE_LIBXENSTAT */

/* Define to 1 if you have the <linux/magic.h> header file. */
#define HAVE_LINUX_MAGIC_H 1

/* Define to 1 if -flto works. */
/* #undef HAVE_LTO */

/* Define to 1 if you have the `malloc_usable_size' function. */
#define HAVE_MALLOC_USABLE_SIZE 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* libmongoc usability */
/* #undef HAVE_MONGOC */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* netfilter accounting usability */
#define HAVE_NFACCT 1

/* Define to 1 if you have the `nice' function. */
#define HAVE_NICE 1

/* Protobuf is available */
#define HAVE_PROTOBUF 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Is set if pthread_getname_np is available */
#define HAVE_PTHREAD_GETNAME_NP 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the `recvmmsg' function. */
#define HAVE_RECVMMSG 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define to 1 if you have the `sched_getparam' function. */
#define HAVE_SCHED_GETPARAM 1

/* Define to 1 if you have the `sched_getscheduler' function. */
#define HAVE_SCHED_GETSCHEDULER 1

/* Define to 1 if you have the `sched_get_priority_max' function. */
#define HAVE_SCHED_GET_PRIORITY_MAX 1

/* Define to 1 if you have the `sched_get_priority_min' function. */
#define HAVE_SCHED_GET_PRIORITY_MIN 1

/* Define to 1 if you have the `sched_setscheduler' function. */
#define HAVE_SCHED_SETSCHEDULER 1

/* Define 1 if you have setns() function */
#define HAVE_SETNS 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define if you have `strerror_r'. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* ssl host validation */
#define HAVE_X509_VERIFY_PARAM_set1_host 1

/* xenstat_vbd_error usability */
/* #undef HAVE_XENSTAT_VBD_ERROR */

/* static json-c should be used */
/* #undef LINK_STATIC_JSONC */

/* static yaml should be used */
/* #undef LINK_STATIC_YAML */

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
/* #undef MAJOR_IN_MKDEV */

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#define MAJOR_IN_SYSMACROS 1

/* ACLK SSL allow debugging */
/* #undef MQTT_WSS_DEBUG */

/* use this user to drop privileged */
#define NETDATA_USER "nobody"

/* Name of package */
#define PACKAGE "netdata"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "netdata"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "netdata v1.40.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "netdata"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "v1.40.1"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* math usability */
#define STORAGE_WITH_MATH 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "v1.40.1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* dummy unused attribute */
#define __always_unused __attribute__((unused))

/* dummy unused attribute */
#define __maybe_unused __attribute__((unused))

/* Link/compile against jemalloc */
/* #undef has_jemalloc */

/* Link/compile against tcmalloc */
/* #undef has_tcmalloc */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* gcc branch optimization */
#define likely(x) __builtin_expect(!!(x), 1)

/* jemalloc prefix */
#define prefix_jemalloc 

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* gcc branch optimization */
#define unlikely(x) __builtin_expect(!!(x), 0)
