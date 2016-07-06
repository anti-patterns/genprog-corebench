typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
typedef long __clock_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __time_t time_t;
typedef unsigned long size_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
union __anonunion___value_15 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_14 {
   int __count ;
   union __anonunion___value_15 __value ;
};
typedef struct __anonstruct___mbstate_t_14 __mbstate_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
struct obstack;
struct obstack;
struct obstack;
typedef long ptrdiff_t;
typedef int wchar_t;
typedef long __jmp_buf[8];
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
typedef __clock_t __sigchld_clock_t;
struct __anonstruct__kill_21 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_22 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_23 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_24 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __sigchld_clock_t si_utime ;
   __sigchld_clock_t si_stime ;
};
struct __anonstruct__sigfault_25 {
   void *si_addr ;
   short si_addr_lsb ;
};
struct __anonstruct__sigpoll_26 {
   long si_band ;
   int si_fd ;
};
struct __anonstruct__sigsys_27 {
   void *_call_addr ;
   int _syscall ;
   unsigned int _arch ;
};
union __anonunion__sifields_20 {
   int _pad[128UL / sizeof(int ) - 4UL] ;
   struct __anonstruct__kill_21 _kill ;
   struct __anonstruct__timer_22 _timer ;
   struct __anonstruct__rt_23 _rt ;
   struct __anonstruct__sigchld_24 _sigchld ;
   struct __anonstruct__sigfault_25 _sigfault ;
   struct __anonstruct__sigpoll_26 _sigpoll ;
   struct __anonstruct__sigsys_27 _sigsys ;
};
struct __anonstruct_siginfo_t_19 {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_20 _sifields ;
};
typedef struct __anonstruct_siginfo_t_19 siginfo_t;
typedef void (*__sighandler_t)(int  );
union __anonunion___sigaction_handler_39 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_39 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
typedef __mbstate_t mbstate_t;
struct tm;
struct tm;
struct tm;
typedef int nl_item;
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int __pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __syscall_slong_t __glibc_reserved[3] ;
};
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef long intmax_t;
typedef unsigned long uintmax_t;
struct dev_ino {
   ino_t st_ino ;
   dev_t st_dev ;
};
struct hash_tuning {
   float shrink_threshold ;
   float shrink_factor ;
   float growth_threshold ;
   float growth_factor ;
   _Bool is_n_buckets ;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
struct _obstack_chunk {
   char *limit ;
   struct _obstack_chunk *prev ;
   char contents[4] ;
};
union __anonunion_temp_63 {
   long tempint ;
   void *tempptr ;
};
struct obstack {
   long chunk_size ;
   struct _obstack_chunk *chunk ;
   char *object_base ;
   char *next_free ;
   char *chunk_limit ;
   union __anonunion_temp_63 temp ;
   int alignment_mask ;
   struct _obstack_chunk *(*chunkfun)(void * , long  ) ;
   void (*freefun)(void * , struct _obstack_chunk * ) ;
   void *extra_arg ;
   unsigned int use_extra_arg : 1 ;
   unsigned int maybe_empty_object : 1 ;
   unsigned int alloc_failed : 1 ;
};
struct quoting_options;
struct quoting_options;
enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    c_quoting_style = 3,
    c_maybe_quoting_style = 4,
    escape_quoting_style = 5,
    locale_quoting_style = 6,
    clocale_quoting_style = 7,
    custom_quoting_style = 8
} ;
struct quoting_options;
enum __anonenum_mbs_align_t_64 {
    MBS_ALIGN_LEFT = 0,
    MBS_ALIGN_RIGHT = 1,
    MBS_ALIGN_CENTER = 2
} ;
typedef enum __anonenum_mbs_align_t_64 mbs_align_t;
enum filetype {
    unknown = 0,
    fifo = 1,
    chardev = 2,
    directory = 3,
    blockdev = 4,
    normal = 5,
    symbolic_link = 6,
    sock = 7,
    whiteout = 8,
    arg_directory = 9
} ;
enum acl_type {
    ACL_T_NONE = 0,
    ACL_T_SELINUX_ONLY = 1,
    ACL_T_YES = 2
} ;
struct fileinfo {
   char *name ;
   char *linkname ;
   struct stat stat ;
   enum filetype filetype ;
   mode_t linkmode ;
   char *scontext ;
   _Bool stat_ok ;
   _Bool linkok ;
   enum acl_type acl_type ;
   _Bool has_capability ;
};
struct bin_str {
   size_t len ;
   char const   *string ;
};
struct pending {
   char *name ;
   char *realname ;
   _Bool command_line_arg ;
   struct pending *next ;
};
enum format {
    long_format = 0,
    one_per_line = 1,
    many_per_line = 2,
    horizontal = 3,
    with_commas = 4
} ;
enum time_style {
    full_iso_time_style = 0,
    long_iso_time_style = 1,
    iso_time_style = 2,
    locale_time_style = 3
} ;
enum time_type {
    time_mtime = 0,
    time_ctime = 1,
    time_atime = 2,
    time_numtypes = 3
} ;
enum sort_type {
    sort_none = -1,
    sort_name = 0,
    sort_extension = 1,
    sort_size = 2,
    sort_version = 3,
    sort_time = 4,
    sort_numtypes = 5
} ;
enum indicator_style {
    none = 0,
    slash = 1,
    file_type = 2,
    classify = 3
} ;
enum color_type {
    color_never = 0,
    color_always = 1,
    color_if_tty = 2
} ;
enum Dereference_symlink {
    DEREF_UNDEFINED = 1,
    DEREF_NEVER = 2,
    DEREF_COMMAND_LINE_ARGUMENTS = 3,
    DEREF_COMMAND_LINE_SYMLINK_TO_DIR = 4,
    DEREF_ALWAYS = 5
} ;
enum indicator_no {
    C_LEFT = 0,
    C_RIGHT = 1,
    C_END = 2,
    C_RESET = 3,
    C_NORM = 4,
    C_FILE = 5,
    C_DIR = 6,
    C_LINK = 7,
    C_FIFO = 8,
    C_SOCK = 9,
    C_BLK = 10,
    C_CHR = 11,
    C_MISSING = 12,
    C_ORPHAN = 13,
    C_EXEC = 14,
    C_DOOR = 15,
    C_SETUID = 16,
    C_SETGID = 17,
    C_STICKY = 18,
    C_OTHER_WRITABLE = 19,
    C_STICKY_OTHER_WRITABLE = 20,
    C_CAP = 21,
    C_MULTIHARDLINK = 22,
    C_CLR_TO_EOL = 23
} ;
struct color_ext_type {
   struct bin_str ext ;
   struct bin_str seq ;
   struct color_ext_type *next ;
};
enum __anonenum_ignore_mode_66 {
    IGNORE_DEFAULT = 0,
    IGNORE_DOT_AND_DOTDOT = 1,
    IGNORE_MINIMAL = 2
} ;
struct ignore_pattern {
   char const   *pattern ;
   struct ignore_pattern *next ;
};
struct column_info {
   _Bool valid_len ;
   size_t line_len ;
   size_t *col_arr ;
};
enum __anonenum_state_72 {
    ST_GND = 0,
    ST_BACKSLASH = 1,
    ST_OCTAL = 2,
    ST_HEX = 3,
    ST_CARET = 4,
    ST_END = 5,
    ST_ERROR = 6
} ;
enum parse_state {
    PS_START = 1,
    PS_2 = 2,
    PS_3 = 3,
    PS_4 = 4,
    PS_DONE = 5,
    PS_FAIL = 6
} ;
typedef void const   *V;
typedef int (*qsortFunc)(V a , V b );
extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) int ioctl(int __fd , unsigned long __request  , ...)  __attribute__((__leaf__)) ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int _setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv , char const   *__shortopts , struct option  const  *__longopts , int *__longind )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig , void (*__handler)(int  ) )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int raise(int __sig )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set , int __signo )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set , int __signo )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int sigprocmask(int __how , sigset_t const   * __restrict  __set , sigset_t * __restrict  __oset )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int sigaction(int __sig , struct sigaction  const  * __restrict  __act , struct sigaction * __restrict  __oact )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
__inline static void freecon(char *con  __attribute__((__unused__)) ) 
{ 

  {
  return;
}
}
__inline static int getfilecon(char const   *file  __attribute__((__unused__)) , char **con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return (-1);
}
}
__inline static int lgetfilecon(char const   *file  __attribute__((__unused__)) , char **con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return (-1);
}
}
extern  __attribute__((__nothrow__)) int mbsinit(mbstate_t const   *__ps )  __attribute__((__pure__, __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t mbrtowc(wchar_t * __restrict  __pwc , char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __p )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int wcwidth(wchar_t __c )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __file , struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__buf )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __file , struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) void *mempcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *stpcpy(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *stpncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__, __leaf__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1), __leaf__)) ;
extern char const   *Version ;
extern int volatile   exit_failure ;
__inline static void initialize_exit_failure(int status ) 
{ 

  {
  if (status != 1) {
    exit_failure = (int volatile   )status;
  } else {

  }
  return;
}
}
extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;
extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern struct dirent *readdir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1), __leaf__)) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__inline int timespec_cmp(struct timespec a , struct timespec b ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (a.tv_sec < b.tv_sec) {
    tmp___0 = -1;
  } else {
    if (a.tv_sec > b.tv_sec) {
      tmp = 1;
    } else {
      tmp = (int )(a.tv_nsec - b.tv_nsec);
    }
    tmp___0 = tmp;
  }
  return (tmp___0);
}
}
__inline int timespec_sign(struct timespec a ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (a.tv_sec < 0L) {
    tmp___0 = -1;
  } else {
    if (a.tv_sec) {
      tmp = 1;
    } else {
      if (a.tv_nsec) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    }
    tmp___0 = tmp;
  }
  return (tmp___0);
}
}
__inline double timespectod(struct timespec a ) 
{ 

  {
  return ((double )a.tv_sec + (double )a.tv_nsec / 1e9);
}
}
extern void gettime(struct timespec * ) ;
#pragma GCC diagnostic pop
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__leaf__, __const__)) ;
__inline static unsigned char to_uchar(char ch ) 
{ 

  {
  return ((unsigned char )ch);
}
}
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__leaf__, __format_arg__(2))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void *xmalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern char *xstrdup(char const   *str )  __attribute__((__malloc__)) ;
extern void *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
extern void *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
extern size_t dir_len(char const   *file )  __attribute__((__pure__)) ;
extern char *last_component(char const   *file )  __attribute__((__pure__)) ;
__inline static _Bool dot_or_dotdot(char const   *file_name ) 
{ char sep ;
  int tmp ;

  {
  if ((int const   )*(file_name + 0) == 46) {
    sep = (char )*(file_name + (((int const   )*(file_name + 1) == 46) + 1));
    if (! sep) {
      tmp = 1;
    } else {
      if ((int )sep == 47) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    }
    return ((_Bool )tmp);
  } else {
    return ((_Bool)0);
  }
}
}
extern void close_stdout(void) ;
extern void version_etc(FILE *stream , char const   *command_name , char const   *package , char const   *version  , ...)  __attribute__((__sentinel__)) ;
extern char const   *program_name ;
extern void set_program_name(char const   *argv0 ) ;
__inline static void emit_size_note(void) 
{ char *tmp ;

  {
  tmp = gettext("\nSIZE is an integer and optional unit (example: 10M is 10*1024*1024).  Units\nare K, M, G, T, P, E, Z, Y (powers of 1024) or KB, MB, ... (powers of 1000).\n");
  fputs_unlocked((char const   */* __restrict  */)tmp, (FILE */* __restrict  */)stdout);
  return;
}
}
__inline static void emit_ancillary_info(void) 
{ char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *lc_messages ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;

  {
  tmp = last_component(program_name);
  tmp___0 = gettext("\nReport %s bugs to %s\n");
  printf((char const   */* __restrict  */)tmp___0, tmp, "bug-coreutils@gnu.org");
  tmp___1 = gettext("%s home page: <%s>\n");
  printf((char const   */* __restrict  */)tmp___1, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
  tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
  tmp___3 = setlocale(5, (char const   *)((void *)0));
  lc_messages = (char const   *)tmp___3;
  if (lc_messages) {
    tmp___6 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);
    if (tmp___6) {
      tmp___4 = last_component(program_name);
      tmp___5 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
      printf((char const   */* __restrict  */)tmp___5, tmp___4);
    } else {

    }
  } else {

  }
  tmp___7 = last_component(program_name);
  tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
  printf((char const   */* __restrict  */)tmp___8, tmp___7);
  return;
}
}
__inline static void emit_try_help(void) 
{ char *tmp ;

  {
  tmp = gettext("Try \'%s --help\' for more information.\n");
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp, program_name);
  return;
}
}
extern char *imaxtostr(intmax_t  , char * )  __attribute__((__warn_unused_result__)) ;
extern char *umaxtostr(uintmax_t  , char * )  __attribute__((__warn_unused_result__)) ;
__inline static char *timetostr(time_t t , char *buf ) 
{ char *tmp ;

  {
  tmp = imaxtostr(t, buf);
  return (tmp);
}
}
__inline static char *bad_cast(char const   *s ) 
{ 

  {
  return ((char *)s);
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
extern int file_has_acl(char const   * , struct stat  const  * ) ;
extern ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist , size_t valsize )  __attribute__((__pure__)) ;
extern void (*argmatch_die)(void) ;
extern void argmatch_invalid(char const   *context , char const   *value , ptrdiff_t problem ) ;
extern ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist , char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern char *file_name_concat(char const   *dir , char const   *base , char **base_in_result ) ;
extern _Bool hard_locale(int  ) ;
extern size_t hash_get_n_entries(Hash_table const   * )  __attribute__((__pure__)) ;
extern Hash_table *hash_initialize(size_t  , Hash_tuning const   * , size_t (*)(void const   * , size_t  ) , _Bool (*)(void const   * , void const   * ) , void (*)(void * ) )  __attribute__((__warn_unused_result__)) ;
extern void hash_free(Hash_table * ) ;
extern void *hash_insert(Hash_table * , void const   * )  __attribute__((__warn_unused_result__)) ;
extern void *hash_delete(Hash_table * , void const   * ) ;
extern strtol_error xstrtoul(char const   * , char ** , int  , unsigned long * , char const   * ) ;
extern  __attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error  , int  , char  , struct option  const  * , char const   * ) ;
extern char *human_readable(uintmax_t  , char * , int  , uintmax_t  , uintmax_t  ) ;
extern enum strtol_error human_options(char const   * , int * , uintmax_t * ) ;
extern void filemodestring(struct stat  const  *statp , char *str ) ;
extern int filevercmp(char const   *s1 , char const   *s2 ) ;
extern char *getuser(uid_t uid ) ;
extern char *getgroup(gid_t gid ) ;
extern int ls_mode ;
extern int gnu_mbswidth(char const   *string , int flags ) ;
extern int mbsnwidth(char const   *buf , size_t nbytes , int flags ) ;
extern void mpsort(void const   ** , size_t  , int (*)(void const   * , void const   * ) ) ;
extern void _obstack_newchunk(struct obstack * , int  ) ;
extern int _obstack_begin(struct obstack * , int  , int  , void *(*)(long  ) , void (*)(void * ) ) ;
extern char const   *quote_n(int n , char const   *name ) ;
extern char const   *quote(char const   *name ) ;
extern char const   * const  quoting_style_args[] ;
extern enum quoting_style  const  quoting_style_vals[] ;
extern struct quoting_options *clone_quoting_options(struct quoting_options *o ) ;
extern enum quoting_style get_quoting_style(struct quoting_options *o ) ;
extern void set_quoting_style(struct quoting_options *o , enum quoting_style s ) ;
extern int set_char_quoting(struct quoting_options *o , char c , int i ) ;
extern size_t quotearg_buffer(char *buffer , size_t buffersize , char const   *arg , size_t argsize , struct quoting_options  const  *o ) ;
extern char *quotearg(char const   *arg ) ;
extern char *quotearg_colon(char const   *arg ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__inline long get_stat_atime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long )st->st_atim.tv_nsec);
}
}
__inline long get_stat_ctime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long )st->st_ctim.tv_nsec);
}
}
__inline long get_stat_mtime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long )st->st_mtim.tv_nsec);
}
}
__inline long get_stat_birthtime_ns(struct stat  const  *st ) 
{ 

  {
  return (0L);
}
}
__inline struct timespec get_stat_atime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_atim);
}
}
__inline struct timespec get_stat_ctime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_ctim);
}
}
__inline struct timespec get_stat_mtime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_mtim);
}
}
__inline struct timespec get_stat_birthtime(struct stat  const  *st ) 
{ struct timespec t ;

  {
  t.tv_sec = -1L;
  t.tv_nsec = -1L;
  return (t);
}
}
#pragma GCC diagnostic pop
extern size_t nstrftime(char * , size_t  , char const   * , struct tm  const  * , int __utc , int __ns ) ;
extern char *areadlink_with_size(char const   *filename , size_t size_hint ) ;
extern size_t mbsalign(char const   *src , char *dest , size_t dest_size , size_t *width , mbs_align_t align , int flags ) ;
static char const   filetype_letter[11]  = 
  {      (char const   )'?',      (char const   )'p',      (char const   )'c',      (char const   )'d', 
        (char const   )'b',      (char const   )'-',      (char const   )'l',      (char const   )'s', 
        (char const   )'w',      (char const   )'d',      (char const   )'\000'};
static size_t quote_name(FILE *out , char const   *name , struct quoting_options  const  *options , size_t *width___0 ) ;
static char *make_link_name(char const   *name , char const   *linkname ) ;
static int decode_switches(int argc , char **argv ) ;
static _Bool file_ignored(char const   *name ) ;
static uintmax_t gobble_file(char const   *name , enum filetype type , ino_t inode , _Bool command_line_arg , char const   *dirname ) ;
static _Bool print_color_indicator(struct fileinfo  const  *f , _Bool symlink_target ) ;
static void put_indicator(struct bin_str  const  *ind ) ;
static void add_ignore_pattern(char const   *pattern ) ;
static void attach(char *dest , char const   *dirname , char const   *name ) ;
static void clear_files(void) ;
static void extract_dirs_from_files(char const   *dirname , _Bool command_line_arg ) ;
static void get_link_name(char const   *filename , struct fileinfo *f , _Bool command_line_arg ) ;
static void indent(size_t from , size_t to ) ;
static size_t calculate_columns(_Bool by_columns ) ;
static void print_current_files(void) ;
static void print_dir(char const   *name , char const   *realname , _Bool command_line_arg ) ;
static size_t print_file_name_and_frills(struct fileinfo  const  *f , size_t start_col ) ;
static void print_horizontal(void) ;
static int format_user_width(uid_t u ) ;
static int format_group_width(gid_t g ) ;
static void print_long_format(struct fileinfo  const  *f ) ;
static void print_many_per_line(void) ;
static size_t print_name_with_quoting(struct fileinfo  const  *f , _Bool symlink_target , struct obstack *stack , size_t start_col ) ;
static void prep_non_filename_text(void) ;
static _Bool print_type_indicator(_Bool stat_ok , mode_t mode , enum filetype type ) ;
static void print_with_commas(void) ;
static void queue_directory(char const   *name , char const   *realname , _Bool command_line_arg ) ;
static void sort_files(void) ;
static void parse_ls_color(void) ;
static Hash_table *active_dir_set  ;
static struct fileinfo *cwd_file  ;
static size_t cwd_n_alloc  ;
static size_t cwd_n_used  ;
static void **sorted_file  ;
static size_t sorted_file_alloc  ;
static _Bool color_symlink_as_referent  ;
static struct pending *pending_dirs  ;
static struct timespec current_time  ;
static _Bool print_scontext  ;
static char UNKNOWN_SECURITY_CONTEXT[2]  = {      (char )'?',      (char )'\000'};
static _Bool any_has_acl  ;
static int inode_number_width  ;
static int block_size_width  ;
static int nlink_width  ;
static int scontext_width  ;
static int owner_width  ;
static int group_width  ;
static int author_width  ;
static int major_device_number_width  ;
static int minor_device_number_width  ;
static int file_size_width  ;
static enum format format  ;
static char const   * const  time_style_args[5]  = {      (char const   */* const  */)"full-iso",      (char const   */* const  */)"long-iso",      (char const   */* const  */)"iso",      (char const   */* const  */)"locale", 
        (char const   */* const  */)((void *)0)};
static enum time_style  const  time_style_types[4]  = {      (enum time_style  const  )0,      (enum time_style  const  )1,      (enum time_style  const  )2,      (enum time_style  const  )3};
static enum time_type time_type  ;
static enum sort_type sort_type  ;
static _Bool sort_reverse  ;
static _Bool print_owner  =    (_Bool)1;
static _Bool print_author  ;
static _Bool print_group  =    (_Bool)1;
static _Bool numeric_ids  ;
static _Bool print_block_size  ;
static int human_output_opts  ;
static uintmax_t output_block_size  ;
static int file_human_output_opts  ;
static uintmax_t file_output_block_size  =    1UL;
static _Bool dired  ;
static enum indicator_style indicator_style  ;
static char const   * const  indicator_style_args[5]  = {      (char const   */* const  */)"none",      (char const   */* const  */)"slash",      (char const   */* const  */)"file-type",      (char const   */* const  */)"classify", 
        (char const   */* const  */)((void *)0)};
static enum indicator_style  const  indicator_style_types[4]  = {      (enum indicator_style  const  )0,      (enum indicator_style  const  )1,      (enum indicator_style  const  )2,      (enum indicator_style  const  )3};
static _Bool print_with_color  ;
static _Bool used_color  =    (_Bool)0;
static char const   * const  indicator_name[25]  = 
  {      (char const   */* const  */)"lc",      (char const   */* const  */)"rc",      (char const   */* const  */)"ec",      (char const   */* const  */)"rs", 
        (char const   */* const  */)"no",      (char const   */* const  */)"fi",      (char const   */* const  */)"di",      (char const   */* const  */)"ln", 
        (char const   */* const  */)"pi",      (char const   */* const  */)"so",      (char const   */* const  */)"bd",      (char const   */* const  */)"cd", 
        (char const   */* const  */)"mi",      (char const   */* const  */)"or",      (char const   */* const  */)"ex",      (char const   */* const  */)"do", 
        (char const   */* const  */)"su",      (char const   */* const  */)"sg",      (char const   */* const  */)"st",      (char const   */* const  */)"ow", 
        (char const   */* const  */)"tw",      (char const   */* const  */)"ca",      (char const   */* const  */)"mh",      (char const   */* const  */)"cl", 
        (char const   */* const  */)((void *)0)};
static struct bin_str color_indicator[24]  = 
  {      {sizeof("\033[") - 1UL, "\033["}, 
        {sizeof("m") - 1UL, "m"}, 
        {0UL, (char const   *)((void *)0)}, 
        {sizeof("0") - 1UL, "0"}, 
        {0UL, (char const   *)((void *)0)}, 
        {0UL, (char const   *)((void *)0)}, 
        {sizeof("01;34") - 1UL, "01;34"}, 
        {sizeof("01;36") - 1UL, "01;36"}, 
        {sizeof("33") - 1UL, "33"}, 
        {sizeof("01;35") - 1UL, "01;35"}, 
        {sizeof("01;33") - 1UL, "01;33"}, 
        {sizeof("01;33") - 1UL, "01;33"}, 
        {0UL, (char const   *)((void *)0)}, 
        {0UL, (char const   *)((void *)0)}, 
        {sizeof("01;32") - 1UL, "01;32"}, 
        {sizeof("01;35") - 1UL, "01;35"}, 
        {sizeof("37;41") - 1UL, "37;41"}, 
        {sizeof("30;43") - 1UL, "30;43"}, 
        {sizeof("37;44") - 1UL, "37;44"}, 
        {sizeof("34;42") - 1UL, "34;42"}, 
        {sizeof("30;42") - 1UL, "30;42"}, 
        {sizeof("30;41") - 1UL, "30;41"}, 
        {0UL, (char const   *)((void *)0)}, 
        {sizeof("\033[K") - 1UL, "\033[K"}};
static struct color_ext_type *color_ext_list  =    (struct color_ext_type *)((void *)0);
static char *color_buf  ;
static _Bool check_symlink_color  ;
static _Bool print_inode  ;
static enum Dereference_symlink dereference  ;
static _Bool recursive  ;
static _Bool immediate_dirs  ;
static _Bool directories_first  ;
static enum __anonenum_ignore_mode_66 ignore_mode  ;
static struct ignore_pattern *ignore_patterns  ;
static struct ignore_pattern *hide_patterns  ;
static _Bool qmark_funny_chars  ;
static struct quoting_options *filename_quoting_options  ;
static struct quoting_options *dirname_quoting_options  ;
static size_t tabsize  ;
static _Bool print_dir_name  ;
static size_t line_length  ;
static _Bool format_needs_stat  ;
static _Bool format_needs_type  ;
static char const   *long_time_format[2]  = {      "%b %e  %Y",      "%b %e %H:%M"};
static sigset_t caught_signals  ;
static sig_atomic_t volatile   interrupt_signal  ;
static sig_atomic_t volatile   stop_signal_count  ;
static int exit_status  ;
static struct option  const  long_options[43]  = 
  {      {"all", 0, (int *)((void *)0), 'a'}, 
        {"escape", 0, (int *)((void *)0), 'b'}, 
        {"directory", 0, (int *)((void *)0), 'd'}, 
        {"dired", 0, (int *)((void *)0), 'D'}, 
        {"full-time", 0, (int *)((void *)0), 134}, 
        {"group-directories-first", 0, (int *)((void *)0), 135}, 
        {"human-readable", 0, (int *)((void *)0), 'h'}, 
        {"inode", 0, (int *)((void *)0), 'i'}, 
        {"kibibytes", 0, (int *)((void *)0), 'k'}, 
        {"numeric-uid-gid", 0, (int *)((void *)0), 'n'}, 
        {"no-group", 0, (int *)((void *)0), 'G'}, 
        {"hide-control-chars", 0, (int *)((void *)0), 'q'}, 
        {"reverse", 0, (int *)((void *)0), 'r'}, 
        {"size", 0, (int *)((void *)0), 's'}, 
        {"width", 1, (int *)((void *)0), 'w'}, 
        {"almost-all", 0, (int *)((void *)0), 'A'}, 
        {"ignore-backups", 0, (int *)((void *)0), 'B'}, 
        {"classify", 0, (int *)((void *)0), 'F'}, 
        {"file-type", 0, (int *)((void *)0), 132}, 
        {"si", 0, (int *)((void *)0), 140}, 
        {"dereference-command-line", 0, (int *)((void *)0), 'H'}, 
        {"dereference-command-line-symlink-to-dir", 0, (int *)((void *)0), 131}, 
        {"hide", 1, (int *)((void *)0), 136}, 
        {"ignore", 1, (int *)((void *)0), 'I'}, 
        {"indicator-style", 1, (int *)((void *)0), 137}, 
        {"dereference", 0, (int *)((void *)0), 'L'}, 
        {"literal", 0, (int *)((void *)0), 'N'}, 
        {"quote-name", 0, (int *)((void *)0), 'Q'}, 
        {"quoting-style", 1, (int *)((void *)0), 138}, 
        {"recursive", 0, (int *)((void *)0), 'R'}, 
        {"format", 1, (int *)((void *)0), 133}, 
        {"show-control-chars", 0, (int *)((void *)0), 139}, 
        {"sort", 1, (int *)((void *)0), 141}, 
        {"tabsize", 1, (int *)((void *)0), 'T'}, 
        {"time", 1, (int *)((void *)0), 142}, 
        {"time-style", 1, (int *)((void *)0), 143}, 
        {"color", 2, (int *)((void *)0), 130}, 
        {"block-size", 1, (int *)((void *)0), 129}, 
        {"context", 0, (int *)0, 'Z'}, 
        {"author", 0, (int *)((void *)0), 128}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static char const   * const  format_args[8]  = 
  {      (char const   */* const  */)"verbose",      (char const   */* const  */)"long",      (char const   */* const  */)"commas",      (char const   */* const  */)"horizontal", 
        (char const   */* const  */)"across",      (char const   */* const  */)"vertical",      (char const   */* const  */)"single-column",      (char const   */* const  */)((void *)0)};
static enum format  const  format_types[7]  = {      (enum format  const  )0,      (enum format  const  )0,      (enum format  const  )4,      (enum format  const  )3, 
        (enum format  const  )3,      (enum format  const  )2,      (enum format  const  )1};
static char const   * const  sort_args[6]  = {      (char const   */* const  */)"none",      (char const   */* const  */)"time",      (char const   */* const  */)"size",      (char const   */* const  */)"extension", 
        (char const   */* const  */)"version",      (char const   */* const  */)((void *)0)};
static enum sort_type  const  sort_types[5]  = {      (enum sort_type  const  )-1,      (enum sort_type  const  )4,      (enum sort_type  const  )2,      (enum sort_type  const  )1, 
        (enum sort_type  const  )3};
static char const   * const  time_args[6]  = {      (char const   */* const  */)"atime",      (char const   */* const  */)"access",      (char const   */* const  */)"use",      (char const   */* const  */)"ctime", 
        (char const   */* const  */)"status",      (char const   */* const  */)((void *)0)};
static enum time_type  const  time_types[5]  = {      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )1, 
        (enum time_type  const  )1};
static char const   * const  color_args[10]  = 
  {      (char const   */* const  */)"always",      (char const   */* const  */)"yes",      (char const   */* const  */)"force",      (char const   */* const  */)"never", 
        (char const   */* const  */)"no",      (char const   */* const  */)"none",      (char const   */* const  */)"auto",      (char const   */* const  */)"tty", 
        (char const   */* const  */)"if-tty",      (char const   */* const  */)((void *)0)};
static enum color_type  const  color_types[9]  = 
  {      (enum color_type  const  )1,      (enum color_type  const  )1,      (enum color_type  const  )1,      (enum color_type  const  )0, 
        (enum color_type  const  )0,      (enum color_type  const  )0,      (enum color_type  const  )2,      (enum color_type  const  )2, 
        (enum color_type  const  )2};
static struct column_info *column_info  ;
static size_t max_idx  ;
static size_t dired_pos  ;
static struct obstack dired_obstack  ;
static struct obstack subdired_obstack  ;
static struct obstack dev_ino_obstack  ;
static struct dev_ino dev_ino_pop(void) 
{ struct obstack  const  *__o ;
  struct obstack *__o___0 ;
  int __len ;

  {
  __o = (struct obstack  const  *)(& dev_ino_obstack);
  if (! (sizeof(struct dev_ino ) <= (unsigned long )((unsigned int )(__o->next_free - __o->object_base)))) {
    __assert_fail("sizeof (struct dev_ino) <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (unsigned) (__o->next_free - __o->object_base); })", "src/ls.c", 981U, "dev_ino_pop");
  } else {

  }
  __o___0 = & dev_ino_obstack;
  __len = - ((int )sizeof(struct dev_ino ));
  if (__o___0->chunk_limit - __o___0->next_free < __len) {
    _obstack_newchunk(__o___0, __len);
  } else {

  }
  __o___0->next_free += __len;
  return (*((struct dev_ino *)dev_ino_obstack.next_free));
}
}
static void dired_dump_obstack(char const   *prefix , struct obstack *os ) 
{ size_t n_pos ;
  struct obstack  const  *__o ;
  size_t i ;
  size_t *pos ;
  struct obstack *__o1 ;
  void *__value ;
  char *tmp ;
  char *tmp___0 ;

  {
  __o = (struct obstack  const  *)os;
  n_pos = (unsigned long )((unsigned int )(__o->next_free - __o->object_base)) / sizeof(dired_pos);
  if (n_pos > 0UL) {
    __o1 = os;
    __value = (void *)__o1->object_base;
    if ((unsigned long )__o1->next_free == (unsigned long )__value) {
      __o1->maybe_empty_object = 1U;
    } else {

    }
    if (sizeof(long ) < sizeof(void *)) {
      tmp = __o1->object_base;
    } else {
      tmp = (char *)0;
    }
    if (sizeof(long ) < sizeof(void *)) {
      tmp___0 = __o1->object_base;
    } else {
      tmp___0 = (char *)0;
    }
    __o1->next_free = tmp + (((__o1->next_free - tmp___0) + __o1->alignment_mask) & ~ __o1->alignment_mask);
    if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
      __o1->next_free = __o1->chunk_limit;
    } else {

    }
    __o1->object_base = __o1->next_free;
    pos = (size_t *)__value;
    fputs_unlocked((char const   */* __restrict  */)prefix, (FILE */* __restrict  */)stdout);
    i = 0UL;
    while (i < n_pos) {
      printf((char const   */* __restrict  */)" %lu", *(pos + i));
      i ++;
    }
    putchar_unlocked('\n');
  } else {

  }
  return;
}
}
static char abmon[12][161]  ;
static size_t required_mon_width  ;
static size_t abmon_init(void) 
{ size_t curr_max_width ;
  int i ;
  size_t width ;
  size_t req ;
  char *tmp ;
  size_t tmp___0 ;

  {
  required_mon_width = 5UL;
  while (1) {
    curr_max_width = required_mon_width;
    required_mon_width = 0UL;
    i = 0;
    while (i < 12) {
      width = curr_max_width;
      tmp = nl_langinfo(131086 + i);
      tmp___0 = mbsalign((char const   *)tmp, abmon[i], sizeof(abmon[i]), & width, (enum __anonenum_mbs_align_t_64 )0, 0);
      req = tmp___0;
      if (req == 4294967295UL) {
        required_mon_width = 0UL;
        return (required_mon_width);
      } else {
        if (req >= sizeof(abmon[i])) {
          required_mon_width = 0UL;
          return (required_mon_width);
        } else {

        }
      }
      if (required_mon_width > width) {
        required_mon_width = required_mon_width;
      } else {
        required_mon_width = width;
      }
      i ++;
    }
    if (! (curr_max_width > required_mon_width)) {
      break;
    } else {

    }
  }
  return (required_mon_width);
}
}
static size_t dev_ino_hash(void const   *x , size_t table_size ) 
{ struct dev_ino  const  *p ;

  {
  p = (struct dev_ino  const  *)x;
  return ((unsigned long )p->st_ino % table_size);
}
}
static _Bool dev_ino_compare(void const   *x , void const   *y ) 
{ struct dev_ino  const  *a ;
  struct dev_ino  const  *b ;
  int tmp ;

  {
  a = (struct dev_ino  const  *)x;
  b = (struct dev_ino  const  *)y;
  if (a->st_ino == b->st_ino) {
    if (a->st_dev == b->st_dev) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return ((_Bool )tmp);
}
}
static void dev_ino_free(void *x ) 
{ 

  {
  free(x);
  return;
}
}
static _Bool visit_dir(dev_t dev , ino_t ino ) 
{ struct dev_ino *ent ;
  struct dev_ino *ent_from_table ;
  _Bool found_match ;
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = xmalloc(sizeof(*ent));
  ent = (struct dev_ino *)tmp;
  ent->st_ino = ino;
  ent->st_dev = dev;
  tmp___0 = hash_insert(active_dir_set, (void const   *)ent);
  ent_from_table = (struct dev_ino *)tmp___0;
  if ((unsigned long )ent_from_table == (unsigned long )((void *)0)) {
    xalloc_die();
  } else {

  }
  found_match = (_Bool )((unsigned long )ent_from_table != (unsigned long )ent);
  if (found_match) {
    free((void *)ent);
  } else {

  }
  return (found_match);
}
}
static void free_pending_ent(struct pending *p ) 
{ 

  {
  free((void *)p->name);
  free((void *)p->realname);
  free((void *)p);
  return;
}
}
static _Bool is_colored(enum indicator_no type ) 
{ size_t len ;
  char const   *s ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  len = color_indicator[type].len;
  s = color_indicator[type].string;
  if (len == 0UL) {
    tmp___1 = 0;
  } else {
    if (len == 1UL) {
      tmp = strncmp(s, "0", sizeof("0") - 1UL);
      if (tmp == 0) {
        tmp___1 = 0;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if (len == 2UL) {
        tmp___0 = strncmp(s, "00", sizeof("00") - 1UL);
        if (tmp___0 == 0) {
          tmp___1 = 0;
        } else {
          tmp___1 = 1;
        }
      } else {
        tmp___1 = 1;
      }
    }
  }
  return ((_Bool )tmp___1);
}
}
static void restore_default_color(void) 
{ 

  {
  put_indicator((struct bin_str  const  *)(& color_indicator[0]));
  put_indicator((struct bin_str  const  *)(& color_indicator[1]));
  return;
}
}
static void set_normal_color(void) 
{ _Bool tmp ;

  {
  if (print_with_color) {
    tmp = is_colored((enum indicator_no )4);
    if (tmp) {
      put_indicator((struct bin_str  const  *)(& color_indicator[0]));
      put_indicator((struct bin_str  const  *)(& color_indicator[4]));
      put_indicator((struct bin_str  const  *)(& color_indicator[1]));
    } else {

    }
  } else {

  }
  return;
}
}
static void sighandler(int sig ) 
{ 

  {
  if (! interrupt_signal) {
    interrupt_signal = (int volatile   )sig;
  } else {

  }
  return;
}
}
static void stophandler(int sig ) 
{ 

  {
  if (! interrupt_signal) {
    stop_signal_count += (int volatile   )1;
  } else {

  }
  return;
}
}
static void process_signals(void) 
{ int sig ;
  int stops ;
  sigset_t oldset ;

  {
  while (1) {
    if (! interrupt_signal) {
      if (! stop_signal_count) {
        break;
      } else {

      }
    } else {

    }
    if (used_color) {
      restore_default_color();
    } else {

    }
    fflush_unlocked(stdout);
    sigprocmask(0, (sigset_t const   */* __restrict  */)(& caught_signals), (sigset_t */* __restrict  */)(& oldset));
    sig = (int )interrupt_signal;
    stops = (int )stop_signal_count;
    if (stops) {
      stop_signal_count = (int volatile   )(stops - 1);
      sig = 19;
    } else {
      signal(sig, (void (*)(int  ))0);
    }
    raise(sig);
    sigprocmask(2, (sigset_t const   */* __restrict  */)(& oldset), (sigset_t */* __restrict  */)((void *)0));
  }
  return;
}
}
int main(int argc , char **argv ) ;
static int const   sig[12]  = 
  {      (int const   )20,      (int const   )14,      (int const   )1,      (int const   )2, 
        (int const   )13,      (int const   )3,      (int const   )15,      (int const   )29, 
        (int const   )27,      (int const   )26,      (int const   )24,      (int const   )25};
int main(int argc , char **argv ) 
{ int i ;
  struct pending *thispend ;
  int n_files ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  int j ;
  struct sigaction act ;
  int tmp___2 ;
  __pid_t tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void *tmp___6 ;
  int tmp___7 ;
  struct dev_ino di ;
  struct dev_ino tmp___8 ;
  struct dev_ino *found ;
  void *tmp___9 ;
  int j___0 ;
  int tmp___10 ;
  int tmp___11 ;
  enum quoting_style tmp___12 ;
  size_t tmp___13 ;

  {
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  initialize_exit_failure(2);
  atexit(& close_stdout);
  if (! (sizeof(color_indicator) / sizeof(color_indicator[0]) + 1UL == sizeof(indicator_name) / sizeof(indicator_name[0]))) {
    __assert_fail("(sizeof (color_indicator) / sizeof *(color_indicator)) + 1 == (sizeof (indicator_name) / sizeof *(indicator_name))", "src/ls.c", 1278U, "main");
  } else {

  }
  exit_status = 0;
  print_dir_name = (_Bool)1;
  pending_dirs = (struct pending *)((void *)0);
  current_time.tv_sec = ~ (((1L << (sizeof(time_t ) * 8UL - 2UL)) - 1L) * 2L + 1L);
  current_time.tv_nsec = -1L;
  i = decode_switches(argc, argv);
  if (print_with_color) {
    parse_ls_color();
  } else {

  }
  if (print_with_color) {
    tmp = is_colored((enum indicator_no )13);
    if (tmp) {
      check_symlink_color = (_Bool)1;
    } else {
      tmp___0 = is_colored((enum indicator_no )14);
      if (tmp___0) {
        if (color_symlink_as_referent) {
          check_symlink_color = (_Bool)1;
        } else {
          goto _L;
        }
      } else {
        _L: 
        tmp___1 = is_colored((enum indicator_no )12);
        if (tmp___1) {
          if ((unsigned int )format == 0U) {
            check_symlink_color = (_Bool)1;
          } else {

          }
        } else {

        }
      }
    }
    tmp___3 = tcgetpgrp(1);
    if (0 <= tmp___3) {
      sigemptyset(& caught_signals);
      j = 0;
      while (j < 12) {
        sigaction((int )sig[j], (struct sigaction  const  */* __restrict  */)((void *)0), (struct sigaction */* __restrict  */)(& act));
        if ((unsigned long )act.__sigaction_handler.sa_handler != (unsigned long )((void (*)(int  ))1)) {
          sigaddset(& caught_signals, (int )sig[j]);
        } else {

        }
        j ++;
      }
      act.sa_mask = caught_signals;
      act.sa_flags = 268435456;
      j = 0;
      while (j < 12) {
        tmp___2 = sigismember((sigset_t const   *)(& caught_signals), (int )sig[j]);
        if (tmp___2) {
          if (sig[j] == 20) {
            act.__sigaction_handler.sa_handler = & stophandler;
          } else {
            act.__sigaction_handler.sa_handler = & sighandler;
          }
          sigaction((int )sig[j], (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
        } else {

        }
        j ++;
      }
    } else {

    }
  } else {

  }
  if ((unsigned int )dereference == 1U) {
    if (immediate_dirs) {
      dereference = (enum Dereference_symlink )2;
    } else {
      if ((unsigned int )indicator_style == 3U) {
        dereference = (enum Dereference_symlink )2;
      } else {
        if ((unsigned int )format == 0U) {
          dereference = (enum Dereference_symlink )2;
        } else {
          dereference = (enum Dereference_symlink )4;
        }
      }
    }
  } else {

  }
  if (recursive) {
    active_dir_set = hash_initialize(30UL, (Hash_tuning const   *)((void *)0), & dev_ino_hash, & dev_ino_compare, & dev_ino_free);
    if ((unsigned long )active_dir_set == (unsigned long )((void *)0)) {
      xalloc_die();
    } else {

    }
    _obstack_begin(& dev_ino_obstack, 0, 0, (void *(*)(long  ))(& malloc), & free);
  } else {

  }
  if ((int )sort_type == 4) {
    tmp___4 = 1;
  } else {
    if ((int )sort_type == 2) {
      tmp___4 = 1;
    } else {
      if ((unsigned int )format == 0U) {
        tmp___4 = 1;
      } else {
        if (print_scontext) {
          tmp___4 = 1;
        } else {
          if (print_block_size) {
            tmp___4 = 1;
          } else {
            tmp___4 = 0;
          }
        }
      }
    }
  }
  format_needs_stat = (_Bool )tmp___4;
  if (! format_needs_stat) {
    if (recursive) {
      tmp___5 = 1;
    } else {
      if (print_with_color) {
        tmp___5 = 1;
      } else {
        if ((unsigned int )indicator_style != 0U) {
          tmp___5 = 1;
        } else {
          if (directories_first) {
            tmp___5 = 1;
          } else {
            tmp___5 = 0;
          }
        }
      }
    }
  } else {
    tmp___5 = 0;
  }
  format_needs_type = (_Bool )tmp___5;
  if (dired) {
    _obstack_begin(& dired_obstack, 0, 0, (void *(*)(long  ))(& malloc), & free);
    _obstack_begin(& subdired_obstack, 0, 0, (void *(*)(long  ))(& malloc), & free);
  } else {

  }
  cwd_n_alloc = 100UL;
  tmp___6 = xnmalloc(cwd_n_alloc, sizeof(*cwd_file));
  cwd_file = (struct fileinfo *)tmp___6;
  cwd_n_used = 0UL;
  clear_files();
  n_files = argc - i;
  if (n_files <= 0) {
    if (immediate_dirs) {
      gobble_file(".", (enum filetype )3, 0UL, (_Bool)1, "");
    } else {
      queue_directory(".", (char const   *)((void *)0), (_Bool)1);
    }
  } else {
    while (1) {
      tmp___7 = i;
      i ++;
      gobble_file((char const   *)*(argv + tmp___7), (enum filetype )0, 0UL, (_Bool)1, "");
      if (! (i < argc)) {
        break;
      } else {

      }
    }
  }
  if (cwd_n_used) {
    sort_files();
    if (! immediate_dirs) {
      extract_dirs_from_files((char const   *)((void *)0), (_Bool)1);
    } else {

    }
  } else {

  }
  if (cwd_n_used) {
    print_current_files();
    if (pending_dirs) {
      while (1) {
        putchar_unlocked('\n');
        dired_pos ++;
        break;
      }
    } else {

    }
  } else {
    if (n_files <= 1) {
      if (pending_dirs) {
        if ((unsigned long )pending_dirs->next == (unsigned long )((struct pending *)0)) {
          print_dir_name = (_Bool)0;
        } else {

        }
      } else {

      }
    } else {

    }
  }
  while (pending_dirs) {
    thispend = pending_dirs;
    pending_dirs = pending_dirs->next;
    if (! (! active_dir_set)) {
      if ((unsigned long )thispend->name == (unsigned long )((void *)0)) {
        tmp___8 = dev_ino_pop();
        di = tmp___8;
        tmp___9 = hash_delete(active_dir_set, (void const   *)(& di));
        found = (struct dev_ino *)tmp___9;
        if (! found) {
          __assert_fail("found", "src/ls.c", 1437U, "main");
        } else {

        }
        dev_ino_free((void *)found);
        free_pending_ent(thispend);
        continue;
      } else {

      }
    } else {

    }
    print_dir((char const   *)thispend->name, (char const   *)thispend->realname, thispend->command_line_arg);
    free_pending_ent(thispend);
    print_dir_name = (_Bool)1;
  }
  if (print_with_color) {
    if (used_color) {
      if (color_indicator[0].len == 2UL) {
        tmp___10 = memcmp((void const   *)color_indicator[0].string, (void const   *)"\033[", 2UL);
        if (tmp___10 == 0) {
          if (color_indicator[1].len == 1UL) {
            if (! ((int const   )*(color_indicator[1].string + 0) == 109)) {
              restore_default_color();
            } else {

            }
          } else {
            restore_default_color();
          }
        } else {
          restore_default_color();
        }
      } else {
        restore_default_color();
      }
    } else {

    }
    fflush_unlocked(stdout);
    j___0 = 0;
    while (j___0 < 12) {
      tmp___11 = sigismember((sigset_t const   *)(& caught_signals), (int )sig[j___0]);
      if (tmp___11) {
        signal((int )sig[j___0], (void (*)(int  ))0);
      } else {

      }
      j___0 ++;
    }
    j___0 = (int )stop_signal_count;
    while (j___0) {
      raise(19);
      j___0 --;
    }
    j___0 = (int )interrupt_signal;
    if (j___0) {
      raise(j___0);
    } else {

    }
  } else {

  }
  if (dired) {
    dired_dump_obstack("//DIRED//", & dired_obstack);
    dired_dump_obstack("//SUBDIRED//", & subdired_obstack);
    tmp___12 = get_quoting_style(filename_quoting_options);
    printf((char const   */* __restrict  */)"//DIRED-OPTIONS// --quoting-style=%s\n", quoting_style_args[tmp___12]);
  } else {

  }
  if (! (! active_dir_set)) {
    tmp___13 = hash_get_n_entries((Hash_table const   *)active_dir_set);
    if (! (tmp___13 == 0UL)) {
      __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 1500U, "main");
    } else {

    }
    hash_free(active_dir_set);
  } else {

  }
  exit(exit_status);
}
}
static char const   posix_prefix[7]  = {      (char const   )'p',      (char const   )'o',      (char const   )'s',      (char const   )'i', 
        (char const   )'x',      (char const   )'-',      (char const   )'\000'};
static int decode_switches(int argc , char **argv ) 
{ char *time_style_option ;
  _Bool sort_type_specified ;
  _Bool kibibytes_specified ;
  int tmp ;
  char const   *q_style ;
  char *tmp___0 ;
  int i ;
  ptrdiff_t tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char const   *p ;
  char *tmp___4 ;
  unsigned long tmp_ulong ;
  char *tmp___5 ;
  char *tmp___6 ;
  strtol_error tmp___7 ;
  struct winsize ws ;
  int tmp___8 ;
  char const   *p___0 ;
  char *tmp___9 ;
  unsigned long tmp_ulong___0 ;
  char *tmp___10 ;
  char *tmp___11 ;
  strtol_error tmp___12 ;
  int oi ;
  int c ;
  int tmp___13 ;
  int tmp___15 ;
  unsigned long tmp_ulong___1 ;
  char *tmp___16 ;
  char *tmp___17 ;
  strtol_error tmp___18 ;
  unsigned long tmp_ulong___2 ;
  char *tmp___19 ;
  char *tmp___20 ;
  strtol_error tmp___21 ;
  struct ignore_pattern *hide ;
  void *tmp___22 ;
  ptrdiff_t tmp___23 ;
  ptrdiff_t tmp___24 ;
  ptrdiff_t tmp___25 ;
  int i___0 ;
  ptrdiff_t tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  ptrdiff_t tmp___29 ;
  ptrdiff_t tmp___30 ;
  enum strtol_error e ;
  enum strtol_error tmp___31 ;
  char const   *tmp___32 ;
  char const   *tmp___33 ;
  char const   *ls_block_size ;
  char *tmp___34 ;
  char *tmp___35 ;
  enum quoting_style tmp___36 ;
  char const   *p___1 ;
  char *style ;
  _Bool tmp___37 ;
  int tmp___38 ;
  char *p0 ;
  char *p1 ;
  char *tmp___39 ;
  char const   *tmp___40 ;
  char *tmp___41 ;
  char *tmp___42 ;
  char *tmp___43 ;
  ptrdiff_t res ;
  ptrdiff_t tmp___44 ;
  char *tmp___45 ;
  char const   * const  *p___2 ;
  char const   * const  *tmp___46 ;
  char *tmp___47 ;
  int i___1 ;
  char *tmp___48 ;
  _Bool tmp___49 ;
  char *tmp___50 ;
  size_t tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;

  {
  time_style_option = (char *)((void *)0);
  sort_type_specified = (_Bool)0;
  kibibytes_specified = (_Bool)0;
  qmark_funny_chars = (_Bool)0;
  switch (ls_mode) {
  case 2: 
  format = (enum format )2;
  set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )5);
  break;
  case 3: 
  format = (enum format )0;
  set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )5);
  break;
  case 1: 
  tmp = isatty(1);
  if (tmp) {
    format = (enum format )2;
    qmark_funny_chars = (_Bool)1;
  } else {
    format = (enum format )1;
    qmark_funny_chars = (_Bool)0;
  }
  break;
  default: 
  abort();
  }
  time_type = (enum time_type )0;
  sort_type = (enum sort_type )0;
  sort_reverse = (_Bool)0;
  numeric_ids = (_Bool)0;
  print_block_size = (_Bool)0;
  indicator_style = (enum indicator_style )0;
  print_inode = (_Bool)0;
  dereference = (enum Dereference_symlink )1;
  recursive = (_Bool)0;
  immediate_dirs = (_Bool)0;
  ignore_mode = (enum __anonenum_ignore_mode_66 )0;
  ignore_patterns = (struct ignore_pattern *)((void *)0);
  hide_patterns = (struct ignore_pattern *)((void *)0);
  print_scontext = (_Bool)0;
  tmp___0 = getenv("QUOTING_STYLE");
  q_style = (char const   *)tmp___0;
  if (q_style) {
    tmp___1 = argmatch(q_style, quoting_style_args, (char const   *)(quoting_style_vals), sizeof(quoting_style_vals[0]));
    i = (int )tmp___1;
    if (0 <= i) {
      set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )quoting_style_vals[i]);
    } else {
      tmp___2 = quotearg(q_style);
      tmp___3 = gettext("ignoring invalid value of environment variable QUOTING_STYLE: %s");
      error(0, 0, (char const   *)tmp___3, tmp___2);
    }
  } else {

  }
  line_length = 80UL;
  tmp___4 = getenv("COLUMNS");
  p = (char const   *)tmp___4;
  if (p) {
    if (*p) {
      tmp___7 = xstrtoul(p, (char **)((void *)0), 0, & tmp_ulong, (char const   *)((void *)0));
      if ((unsigned int )tmp___7 == 0U) {
        if (0UL < tmp_ulong) {
          if (tmp_ulong <= ((1UL << 63) - 1UL) * 2UL + 1UL) {
            line_length = tmp_ulong;
          } else {
            tmp___5 = quotearg(p);
            tmp___6 = gettext("ignoring invalid width in environment variable COLUMNS: %s");
            error(0, 0, (char const   *)tmp___6, tmp___5);
          }
        } else {
          tmp___5 = quotearg(p);
          tmp___6 = gettext("ignoring invalid width in environment variable COLUMNS: %s");
          error(0, 0, (char const   *)tmp___6, tmp___5);
        }
      } else {
        tmp___5 = quotearg(p);
        tmp___6 = gettext("ignoring invalid width in environment variable COLUMNS: %s");
        error(0, 0, (char const   *)tmp___6, tmp___5);
      }
    } else {

    }
  } else {

  }
  tmp___8 = ioctl(1, 21523UL, & ws);
  if (tmp___8 != -1) {
    if (0 < (int )ws.ws_col) {
      if ((unsigned long )ws.ws_col == (unsigned long )ws.ws_col) {
        line_length = (unsigned long )ws.ws_col;
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___9 = getenv("TABSIZE");
  p___0 = (char const   *)tmp___9;
  tabsize = 8UL;
  if (p___0) {
    tmp___12 = xstrtoul(p___0, (char **)((void *)0), 0, & tmp_ulong___0, (char const   *)((void *)0));
    if ((unsigned int )tmp___12 == 0U) {
      if (tmp_ulong___0 <= ((1UL << 63) - 1UL) * 2UL + 1UL) {
        tabsize = tmp_ulong___0;
      } else {
        tmp___10 = quotearg(p___0);
        tmp___11 = gettext("ignoring invalid tab size in environment variable TABSIZE: %s");
        error(0, 0, (char const   *)tmp___11, tmp___10);
      }
    } else {
      tmp___10 = quotearg(p___0);
      tmp___11 = gettext("ignoring invalid tab size in environment variable TABSIZE: %s");
      error(0, 0, (char const   *)tmp___11, tmp___10);
    }
  } else {

  }
  while (1) {
    oi = -1;
    tmp___13 = getopt_long(argc, (char * const  *)argv, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", long_options, & oi);
    c = tmp___13;
    if (c == -1) {
      break;
    } else {

    }
    switch (c) {
    case 97: 
    ignore_mode = (enum __anonenum_ignore_mode_66 )2;
    break;
    case 98: 
    set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )5);
    break;
    case 99: 
    time_type = (enum time_type )1;
    break;
    case 100: 
    immediate_dirs = (_Bool)1;
    break;
    case 102: 
    ignore_mode = (enum __anonenum_ignore_mode_66 )2;
    sort_type = (enum sort_type )-1;
    sort_type_specified = (_Bool)1;
    if ((unsigned int )format == 0U) {
      tmp___15 = isatty(1);
      if (tmp___15) {
        format = (enum format )2;
      } else {
        format = (enum format )1;
      }
    } else {

    }
    print_block_size = (_Bool)0;
    print_with_color = (_Bool)0;
    break;
    case 132: 
    indicator_style = (enum indicator_style )2;
    break;
    case 103: 
    format = (enum format )0;
    print_owner = (_Bool)0;
    break;
    case 104: 
    human_output_opts = 176;
    file_human_output_opts = human_output_opts;
    output_block_size = 1UL;
    file_output_block_size = output_block_size;
    break;
    case 105: 
    print_inode = (_Bool)1;
    break;
    case 107: 
    kibibytes_specified = (_Bool)1;
    break;
    case 108: 
    format = (enum format )0;
    break;
    case 109: 
    format = (enum format )4;
    break;
    case 110: 
    numeric_ids = (_Bool)1;
    format = (enum format )0;
    break;
    case 111: 
    format = (enum format )0;
    print_group = (_Bool)0;
    break;
    case 112: 
    indicator_style = (enum indicator_style )1;
    break;
    case 113: 
    qmark_funny_chars = (_Bool)1;
    break;
    case 114: 
    sort_reverse = (_Bool)1;
    break;
    case 115: 
    print_block_size = (_Bool)1;
    break;
    case 116: 
    sort_type = (enum sort_type )4;
    sort_type_specified = (_Bool)1;
    break;
    case 117: 
    time_type = (enum time_type )2;
    break;
    case 118: 
    sort_type = (enum sort_type )3;
    sort_type_specified = (_Bool)1;
    break;
    case 119: 
    tmp___18 = xstrtoul((char const   *)optarg, (char **)((void *)0), 0, & tmp_ulong___1, (char const   *)((void *)0));
    if ((unsigned int )tmp___18 != 0U) {
      tmp___16 = quotearg((char const   *)optarg);
      tmp___17 = gettext("invalid line width: %s");
      error(2, 0, (char const   *)tmp___17, tmp___16);
    } else {
      if (0UL < tmp_ulong___1) {
        if (! (tmp_ulong___1 <= ((1UL << 63) - 1UL) * 2UL + 1UL)) {
          tmp___16 = quotearg((char const   *)optarg);
          tmp___17 = gettext("invalid line width: %s");
          error(2, 0, (char const   *)tmp___17, tmp___16);
        } else {

        }
      } else {
        tmp___16 = quotearg((char const   *)optarg);
        tmp___17 = gettext("invalid line width: %s");
        error(2, 0, (char const   *)tmp___17, tmp___16);
      }
    }
    line_length = tmp_ulong___1;
    break;
    case 120: 
    format = (enum format )3;
    break;
    case 65: 
    if ((unsigned int )ignore_mode == 0U) {
      ignore_mode = (enum __anonenum_ignore_mode_66 )1;
    } else {

    }
    break;
    case 66: 
    add_ignore_pattern("*~");
    add_ignore_pattern(".*~");
    break;
    case 67: 
    format = (enum format )2;
    break;
    case 68: 
    dired = (_Bool)1;
    break;
    case 70: 
    indicator_style = (enum indicator_style )3;
    break;
    case 71: 
    print_group = (_Bool)0;
    break;
    case 72: 
    dereference = (enum Dereference_symlink )3;
    break;
    case 131: 
    dereference = (enum Dereference_symlink )4;
    break;
    case 73: 
    add_ignore_pattern((char const   *)optarg);
    break;
    case 76: 
    dereference = (enum Dereference_symlink )5;
    break;
    case 78: 
    set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )0);
    break;
    case 81: 
    set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )3);
    break;
    case 82: 
    recursive = (_Bool)1;
    break;
    case 83: 
    sort_type = (enum sort_type )2;
    sort_type_specified = (_Bool)1;
    break;
    case 84: 
    tmp___21 = xstrtoul((char const   *)optarg, (char **)((void *)0), 0, & tmp_ulong___2, (char const   *)((void *)0));
    if ((unsigned int )tmp___21 != 0U) {
      tmp___19 = quotearg((char const   *)optarg);
      tmp___20 = gettext("invalid tab size: %s");
      error(2, 0, (char const   *)tmp___20, tmp___19);
    } else {
      if (((1UL << 63) - 1UL) * 2UL + 1UL < tmp_ulong___2) {
        tmp___19 = quotearg((char const   *)optarg);
        tmp___20 = gettext("invalid tab size: %s");
        error(2, 0, (char const   *)tmp___20, tmp___19);
      } else {

      }
    }
    tabsize = tmp_ulong___2;
    break;
    case 85: 
    sort_type = (enum sort_type )-1;
    sort_type_specified = (_Bool)1;
    break;
    case 88: 
    sort_type = (enum sort_type )1;
    sort_type_specified = (_Bool)1;
    break;
    case 49: 
    if ((unsigned int )format != 0U) {
      format = (enum format )1;
    } else {

    }
    break;
    case 128: 
    print_author = (_Bool)1;
    break;
    case 136: 
    tmp___22 = xmalloc(sizeof(*hide));
    hide = (struct ignore_pattern *)tmp___22;
    hide->pattern = (char const   *)optarg;
    hide->next = hide_patterns;
    hide_patterns = hide;
    break;
    case 141: 
    tmp___23 = __xargmatch_internal("--sort", (char const   *)optarg, sort_args, (char const   *)(sort_types), sizeof(sort_types[0]), argmatch_die);
    sort_type = (enum sort_type )sort_types[tmp___23];
    sort_type_specified = (_Bool)1;
    break;
    case 135: 
    directories_first = (_Bool)1;
    break;
    case 142: 
    tmp___24 = __xargmatch_internal("--time", (char const   *)optarg, time_args, (char const   *)(time_types), sizeof(time_types[0]), argmatch_die);
    time_type = (enum time_type )time_types[tmp___24];
    break;
    case 133: 
    tmp___25 = __xargmatch_internal("--format", (char const   *)optarg, format_args, (char const   *)(format_types), sizeof(format_types[0]), argmatch_die);
    format = (enum format )format_types[tmp___25];
    break;
    case 134: 
    format = (enum format )0;
    time_style_option = bad_cast("full-iso");
    break;
    case 130: 
    if (optarg) {
      tmp___26 = __xargmatch_internal("--color", (char const   *)optarg, color_args, (char const   *)(color_types), sizeof(color_types[0]), argmatch_die);
      i___0 = (int )color_types[tmp___26];
    } else {
      i___0 = 1;
    }
    if (i___0 == 1) {
      tmp___28 = 1;
    } else {
      if (i___0 == 2) {
        tmp___27 = isatty(1);
        if (tmp___27) {
          tmp___28 = 1;
        } else {
          tmp___28 = 0;
        }
      } else {
        tmp___28 = 0;
      }
    }
    print_with_color = (_Bool )tmp___28;
    if (print_with_color) {
      tabsize = 0UL;
    } else {

    }
    break;
    case 137: 
    tmp___29 = __xargmatch_internal("--indicator-style", (char const   *)optarg, indicator_style_args, (char const   *)(indicator_style_types), sizeof(indicator_style_types[0]), argmatch_die);
    indicator_style = (enum indicator_style )indicator_style_types[tmp___29];
    break;
    case 138: 
    tmp___30 = __xargmatch_internal("--quoting-style", (char const   *)optarg, quoting_style_args, (char const   *)(quoting_style_vals), sizeof(quoting_style_vals[0]), argmatch_die);
    set_quoting_style((struct quoting_options *)((void *)0), (enum quoting_style )quoting_style_vals[tmp___30]);
    break;
    case 143: 
    time_style_option = optarg;
    break;
    case 139: 
    qmark_funny_chars = (_Bool)0;
    break;
    case 129: 
    tmp___31 = human_options((char const   *)optarg, & human_output_opts, & output_block_size);
    e = tmp___31;
    if ((unsigned int )e != 0U) {
      xstrtol_fatal(e, oi, (char)0, long_options, (char const   *)optarg);
    } else {

    }
    file_human_output_opts = human_output_opts;
    file_output_block_size = output_block_size;
    break;
    case 140: 
    human_output_opts = 144;
    file_human_output_opts = human_output_opts;
    output_block_size = 1UL;
    file_output_block_size = output_block_size;
    break;
    case 90: 
    print_scontext = (_Bool)1;
    break;
    case -130: 
    usage(0);
    break;
    case -131: 
    if (ls_mode == 1) {
      tmp___33 = "ls";
    } else {
      if (ls_mode == 2) {
        tmp___32 = "dir";
      } else {
        tmp___32 = "vdir";
      }
      tmp___33 = tmp___32;
    }
    version_etc(stdout, tmp___33, "GNU coreutils", Version, "Richard M. Stallman", "David MacKenzie", (char *)((void *)0));
    exit(0);
    break;
    default: 
    usage(2);
    }
  }
  if (! output_block_size) {
    tmp___34 = getenv("LS_BLOCK_SIZE");
    ls_block_size = (char const   *)tmp___34;
    human_options(ls_block_size, & human_output_opts, & output_block_size);
    if (ls_block_size) {
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
    } else {
      tmp___35 = getenv("BLOCK_SIZE");
      if (tmp___35) {
        file_human_output_opts = human_output_opts;
        file_output_block_size = output_block_size;
      } else {

      }
    }
    if (kibibytes_specified) {
      human_output_opts = 0;
      output_block_size = 1024UL;
    } else {

    }
  } else {

  }
  if (1UL > line_length / 3UL) {
    max_idx = 1UL;
  } else {
    max_idx = line_length / 3UL;
  }
  filename_quoting_options = clone_quoting_options((struct quoting_options *)((void *)0));
  tmp___36 = get_quoting_style(filename_quoting_options);
  if ((unsigned int )tmp___36 == 5U) {
    set_char_quoting(filename_quoting_options, (char )' ', 1);
  } else {

  }
  if (2U <= (unsigned int )indicator_style) {
    p___1 = ("*=>@|" + (unsigned int )indicator_style) - 2;
    while (*p___1) {
      set_char_quoting(filename_quoting_options, (char )*p___1, 1);
      p___1 ++;
    }
  } else {

  }
  dirname_quoting_options = clone_quoting_options((struct quoting_options *)((void *)0));
  set_char_quoting(dirname_quoting_options, (char )':', 1);
  if (dired) {
    if ((unsigned int )format != 0U) {
      dired = (_Bool)0;
    } else {

    }
  } else {

  }
  if ((unsigned int )time_type == 1U) {
    goto _L;
  } else {
    if ((unsigned int )time_type == 2U) {
      _L: 
      if (! sort_type_specified) {
        if ((unsigned int )format != 0U) {
          sort_type = (enum sort_type )4;
        } else {

        }
      } else {

      }
    } else {

    }
  }
  if ((unsigned int )format == 0U) {
    style = time_style_option;
    if (! style) {
      style = getenv("TIME_STYLE");
      if (! style) {
        style = bad_cast("locale");
      } else {

      }
    } else {

    }
    while (1) {
      tmp___38 = strncmp((char const   *)style, posix_prefix, sizeof(posix_prefix) - 1UL);
      if (! (tmp___38 == 0)) {
        break;
      } else {

      }
      tmp___37 = hard_locale(2);
      if (! tmp___37) {
        return (optind);
      } else {

      }
      style += sizeof(posix_prefix) - 1UL;
    }
    if ((int )*style == 43) {
      p0 = style + 1;
      tmp___39 = strchr((char const   *)p0, '\n');
      p1 = tmp___39;
      if (! p1) {
        p1 = p0;
      } else {
        tmp___42 = strchr((char const   *)(p1 + 1), '\n');
        if (tmp___42) {
          tmp___40 = quote((char const   *)p0);
          tmp___41 = gettext("invalid time style format %s");
          error(2, 0, (char const   *)tmp___41, tmp___40);
        } else {

        }
        tmp___43 = p1;
        p1 ++;
        *tmp___43 = (char )'\000';
      }
      long_time_format[0] = (char const   *)p0;
      long_time_format[1] = (char const   *)p1;
    } else {
      tmp___44 = argmatch((char const   *)style, time_style_args, (char const   *)(time_style_types), sizeof(time_style_types[0]));
      res = tmp___44;
      if (res < 0L) {
        argmatch_invalid("time style", (char const   *)style, res);
        tmp___45 = gettext("Valid arguments are:\n");
        fputs_unlocked((char const   */* __restrict  */)tmp___45, (FILE */* __restrict  */)stderr);
        p___2 = time_style_args;
        while (*p___2) {
          tmp___46 = p___2;
          p___2 ++;
          fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"  - [posix-]%s\n", *tmp___46);
        }
        tmp___47 = gettext("  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n");
        fputs_unlocked((char const   */* __restrict  */)tmp___47, (FILE */* __restrict  */)stderr);
        usage(2);
      } else {

      }
      switch ((int )res) {
      case 0: 
      long_time_format[1] = "%Y-%m-%d %H:%M:%S.%N %z";
      long_time_format[0] = long_time_format[1];
      break;
      case 1: 
      long_time_format[1] = "%Y-%m-%d %H:%M";
      long_time_format[0] = long_time_format[1];
      break;
      case 2: 
      long_time_format[0] = "%Y-%m-%d ";
      long_time_format[1] = "%m-%d %H:%M";
      break;
      case 3: 
      tmp___49 = hard_locale(2);
      if (tmp___49) {
        i___1 = 0;
        while (i___1 < 2) {
          tmp___48 = dcgettext((char const   *)((void *)0), long_time_format[i___1], 2);
          long_time_format[i___1] = (char const   *)tmp___48;
          i___1 ++;
        }
      } else {

      }
      }
    }
    tmp___52 = strstr(long_time_format[0], "%b");
    if (tmp___52) {
      goto _L___0;
    } else {
      tmp___53 = strstr(long_time_format[1], "%b");
      if (tmp___53) {
        _L___0: 
        tmp___51 = abmon_init();
        if (! tmp___51) {
          tmp___50 = gettext("error initializing month strings");
          error(0, 0, (char const   *)tmp___50);
        } else {

        }
      } else {

      }
    }
  } else {

  }
  return (optind);
}
}
static _Bool get_funky_string(char **dest , char const   **src , _Bool equals_end , size_t *output_count ) 
{ char num ;
  size_t count ;
  enum __anonenum_state_72 state ;
  char const   *p ;
  char *q ;
  char *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;

  {
  p = *src;
  q = *dest;
  count = 0UL;
  num = (char)0;
  state = (enum __anonenum_state_72 )0;
  while ((unsigned int )state < 5U) {
    switch ((int )state) {
    case 0: 
    switch ((int )*p) {
    case 58: 
    case 0: 
    state = (enum __anonenum_state_72 )5;
    break;
    case 92: 
    state = (enum __anonenum_state_72 )1;
    p ++;
    break;
    case 94: 
    state = (enum __anonenum_state_72 )4;
    p ++;
    break;
    case 61: 
    if (equals_end) {
      state = (enum __anonenum_state_72 )5;
      break;
    } else {

    }
    default: 
    tmp = q;
    q ++;
    tmp___0 = p;
    p ++;
    *tmp = (char )*tmp___0;
    count ++;
    break;
    }
    break;
    case 1: 
    switch ((int )*p) {
    case 48: 
    case 49: 
    case 50: 
    case 51: 
    case 52: 
    case 53: 
    case 54: 
    case 55: 
    state = (enum __anonenum_state_72 )2;
    num = (char )((int const   )*p - 48);
    break;
    case 120: 
    case 88: 
    state = (enum __anonenum_state_72 )3;
    num = (char)0;
    break;
    case 97: 
    num = (char )'\a';
    break;
    case 98: 
    num = (char )'\b';
    break;
    case 101: 
    num = (char)27;
    break;
    case 102: 
    num = (char )'\f';
    break;
    case 110: 
    num = (char )'\n';
    break;
    case 114: 
    num = (char )'\r';
    break;
    case 116: 
    num = (char )'\t';
    break;
    case 118: 
    num = (char )'\v';
    break;
    case 63: 
    num = (char)127;
    break;
    case 95: 
    num = (char )' ';
    break;
    case 0: 
    state = (enum __anonenum_state_72 )6;
    break;
    default: 
    num = (char )*p;
    break;
    }
    if ((unsigned int )state == 1U) {
      tmp___1 = q;
      q ++;
      *tmp___1 = num;
      count ++;
      state = (enum __anonenum_state_72 )0;
    } else {

    }
    p ++;
    break;
    case 2: 
    if ((int const   )*p < 48) {
      tmp___2 = q;
      q ++;
      *tmp___2 = num;
      count ++;
      state = (enum __anonenum_state_72 )0;
    } else {
      if ((int const   )*p > 55) {
        tmp___2 = q;
        q ++;
        *tmp___2 = num;
        count ++;
        state = (enum __anonenum_state_72 )0;
      } else {
        tmp___3 = p;
        p ++;
        num = (char )(((int )num << 3) + (int )((int const   )*tmp___3 - 48));
      }
    }
    break;
    case 3: 
    switch ((int )*p) {
    case 48: 
    case 49: 
    case 50: 
    case 51: 
    case 52: 
    case 53: 
    case 54: 
    case 55: 
    case 56: 
    case 57: 
    tmp___4 = p;
    p ++;
    num = (char )(((int )num << 4) + (int )((int const   )*tmp___4 - 48));
    break;
    case 97: 
    case 98: 
    case 99: 
    case 100: 
    case 101: 
    case 102: 
    tmp___5 = p;
    p ++;
    num = (char )((((int )num << 4) + (int )((int const   )*tmp___5 - 97)) + 10);
    break;
    case 65: 
    case 66: 
    case 67: 
    case 68: 
    case 69: 
    case 70: 
    tmp___6 = p;
    p ++;
    num = (char )((((int )num << 4) + (int )((int const   )*tmp___6 - 65)) + 10);
    break;
    default: 
    tmp___7 = q;
    q ++;
    *tmp___7 = num;
    count ++;
    state = (enum __anonenum_state_72 )0;
    break;
    }
    break;
    case 4: 
    state = (enum __anonenum_state_72 )0;
    if ((int const   )*p >= 64) {
      if ((int const   )*p <= 126) {
        tmp___8 = q;
        q ++;
        tmp___9 = p;
        p ++;
        *tmp___8 = (char )((int const   )*tmp___9 & 31);
        count ++;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if ((int const   )*p == 63) {
        tmp___10 = q;
        q ++;
        *tmp___10 = (char)127;
        count ++;
      } else {
        state = (enum __anonenum_state_72 )6;
      }
    }
    break;
    default: 
    abort();
    }
  }
  *dest = q;
  *src = p;
  *output_count = count;
  return ((_Bool )((unsigned int )state != 6U));
}
}
static void parse_ls_color(void) 
{ char const   *p ;
  char *buf ;
  int ind_no ;
  char label[3] ;
  struct color_ext_type *ext ;
  char *tmp ;
  enum parse_state state ;
  void *tmp___0 ;
  _Bool tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  _Bool tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  _Bool tmp___12 ;
  char const   *tmp___13 ;
  struct color_ext_type *e ;
  struct color_ext_type *e2 ;
  char *tmp___14 ;
  int tmp___15 ;

  {
  tmp = getenv("LS_COLORS");
  p = (char const   *)tmp;
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    return;
  } else {
    if ((int const   )*p == 0) {
      return;
    } else {

    }
  }
  ext = (struct color_ext_type *)((void *)0);
  strcpy((char */* __restrict  */)(label), (char const   */* __restrict  */)"??");
  color_buf = xstrdup(p);
  buf = color_buf;
  state = (enum parse_state )1;
  while (1) {
    switch ((int )state) {
    case 1: 
    switch ((int )*p) {
    case 58: 
    p ++;
    break;
    case 42: 
    tmp___0 = xmalloc(sizeof(*ext));
    ext = (struct color_ext_type *)tmp___0;
    ext->next = color_ext_list;
    color_ext_list = ext;
    p ++;
    ext->ext.string = (char const   *)buf;
    tmp___2 = get_funky_string(& buf, & p, (_Bool)1, & ext->ext.len);
    if (tmp___2) {
      state = (enum parse_state )4;
    } else {
      state = (enum parse_state )6;
    }
    break;
    case 0: 
    state = (enum parse_state )5;
    goto done;
    default: 
    tmp___3 = p;
    p ++;
    label[0] = (char )*tmp___3;
    state = (enum parse_state )2;
    break;
    }
    break;
    case 2: 
    if (*p) {
      tmp___4 = p;
      p ++;
      label[1] = (char )*tmp___4;
      state = (enum parse_state )3;
    } else {
      state = (enum parse_state )6;
    }
    break;
    case 3: 
    state = (enum parse_state )6;
    tmp___10 = p;
    p ++;
    if ((int const   )*tmp___10 == 61) {
      ind_no = 0;
      while ((unsigned long )indicator_name[ind_no] != (unsigned long )((void *)0)) {
        tmp___7 = strcmp((char const   *)(label), (char const   *)indicator_name[ind_no]);
        if (tmp___7 == 0) {
          color_indicator[ind_no].string = (char const   *)buf;
          tmp___6 = get_funky_string(& buf, & p, (_Bool)0, & color_indicator[ind_no].len);
          if (tmp___6) {
            state = (enum parse_state )1;
          } else {
            state = (enum parse_state )6;
          }
          break;
        } else {

        }
        ind_no ++;
      }
      if ((unsigned int )state == 6U) {
        tmp___8 = quotearg((char const   *)(label));
        tmp___9 = gettext("unrecognized prefix: %s");
        error(0, 0, (char const   *)tmp___9, tmp___8);
      } else {

      }
    } else {

    }
    break;
    case 4: 
    tmp___13 = p;
    p ++;
    if ((int const   )*tmp___13 == 61) {
      ext->seq.string = (char const   *)buf;
      tmp___12 = get_funky_string(& buf, & p, (_Bool)0, & ext->seq.len);
      if (tmp___12) {
        state = (enum parse_state )1;
      } else {
        state = (enum parse_state )6;
      }
    } else {
      state = (enum parse_state )6;
    }
    break;
    case 6: 
    goto done;
    default: 
    abort();
    }
  }
  done: 
  if ((unsigned int )state == 6U) {
    tmp___14 = gettext("unparsable value for LS_COLORS environment variable");
    error(0, 0, (char const   *)tmp___14);
    free((void *)color_buf);
    e = color_ext_list;
    while ((unsigned long )e != (unsigned long )((void *)0)) {
      e2 = e;
      e = e->next;
      free((void *)e2);
    }
    print_with_color = (_Bool)0;
  } else {

  }
  if (color_indicator[7].len == 6UL) {
    tmp___15 = strncmp(color_indicator[7].string, "target", sizeof("target") - 1UL);
    if (! tmp___15) {
      color_symlink_as_referent = (_Bool)1;
    } else {

    }
  } else {

  }
  return;
}
}
static void set_exit_status(_Bool serious ) 
{ 

  {
  if (serious) {
    exit_status = 2;
  } else {
    if (exit_status == 0) {
      exit_status = 1;
    } else {

    }
  }
  return;
}
}
static void file_failure(_Bool serious , char const   *message , char const   *file ) 
{ char *tmp ;
  int *tmp___0 ;

  {
  tmp = quotearg_colon(file);
  tmp___0 = __errno_location();
  error(0, *tmp___0, message, tmp);
  set_exit_status(serious);
  return;
}
}
static void queue_directory(char const   *name , char const   *realname , _Bool command_line_arg ) 
{ struct pending *new ;
  void *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = xmalloc(sizeof(*new));
  new = (struct pending *)tmp;
  if (realname) {
    tmp___0 = xstrdup(realname);
    new->realname = tmp___0;
  } else {
    new->realname = (char *)((void *)0);
  }
  if (name) {
    tmp___1 = xstrdup(name);
    new->name = tmp___1;
  } else {
    new->name = (char *)((void *)0);
  }
  new->command_line_arg = command_line_arg;
  new->next = pending_dirs;
  pending_dirs = new;
  return;
}
}
static _Bool first  =    (_Bool)1;
static void print_dir(char const   *name , char const   *realname , _Bool command_line_arg ) 
{ DIR *dirp ;
  struct dirent *next ;
  uintmax_t total_blocks ;
  int *tmp ;
  char *tmp___0 ;
  struct stat dir_stat ;
  int fd ;
  int tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  _Bool tmp___8 ;
  struct dev_ino *di ;
  struct obstack *__o ;
  int __len ;
  struct obstack *__o___0 ;
  int __len___0 ;
  char const   *tmp___9 ;
  size_t tmp___10 ;
  struct obstack *__o___1 ;
  int __len___1 ;
  int *tmp___11 ;
  enum filetype type ;
  uintmax_t tmp___12 ;
  _Bool tmp___13 ;
  char *tmp___14 ;
  int *tmp___15 ;
  int *tmp___16 ;
  char *tmp___17 ;
  int tmp___18 ;
  char const   *p ;
  char buf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp___19 ;
  size_t tmp___20 ;
  char *tmp___21 ;
  size_t tmp___22 ;

  {
  total_blocks = 0UL;
  tmp = __errno_location();
  *tmp = 0;
  dirp = opendir(name);
  if (! dirp) {
    tmp___0 = gettext("cannot open directory %s");
    file_failure(command_line_arg, (char const   *)tmp___0, name);
    return;
  } else {

  }
  if (! (! active_dir_set)) {
    tmp___1 = dirfd(dirp);
    fd = tmp___1;
    if (0 <= fd) {
      tmp___3 = fstat(fd, & dir_stat);
      tmp___5 = tmp___3;
    } else {
      tmp___4 = stat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)(& dir_stat));
      tmp___5 = tmp___4;
    }
    if (tmp___5 < 0) {
      tmp___2 = gettext("cannot determine device and inode of %s");
      file_failure(command_line_arg, (char const   *)tmp___2, name);
      closedir(dirp);
      return;
    } else {

    }
    tmp___8 = visit_dir(dir_stat.st_dev, dir_stat.st_ino);
    if (tmp___8) {
      tmp___6 = quotearg_colon(name);
      tmp___7 = gettext("%s: not listing already-listed directory");
      error(0, 0, (char const   *)tmp___7, tmp___6);
      closedir(dirp);
      set_exit_status((_Bool)1);
      return;
    } else {

    }
    while (1) {
      __o = & dev_ino_obstack;
      __len = (int )sizeof(struct dev_ino );
      if (__o->chunk_limit - __o->next_free < __len) {
        _obstack_newchunk(__o, __len);
      } else {

      }
      __o->next_free += __len;
      di = (struct dev_ino *)dev_ino_obstack.next_free + -1;
      di->st_dev = dir_stat.st_dev;
      di->st_ino = dir_stat.st_ino;
      break;
    }
  } else {

  }
  if (recursive) {
    goto _L;
  } else {
    if (print_dir_name) {
      _L: 
      if (! first) {
        while (1) {
          putchar_unlocked('\n');
          dired_pos ++;
          break;
        }
      } else {

      }
      first = (_Bool)0;
      while (1) {
        if (dired) {
          while (1) {
            fputs_unlocked((char const   */* __restrict  */)"  ", (FILE */* __restrict  */)stdout);
            dired_pos += sizeof("  ") - 1UL;
            break;
          }
        } else {

        }
        break;
      }
      while (1) {
        if (dired) {
          __o___0 = & subdired_obstack;
          __len___0 = (int )sizeof(dired_pos);
          if ((unsigned long )(__o___0->next_free + __len___0) > (unsigned long )__o___0->chunk_limit) {
            _obstack_newchunk(__o___0, __len___0);
          } else {

          }
          memcpy((void */* __restrict  */)__o___0->next_free, (void const   */* __restrict  */)(& dired_pos), (unsigned long )__len___0);
          __o___0->next_free += __len___0;
        } else {

        }
        break;
      }
      if (realname) {
        tmp___9 = realname;
      } else {
        tmp___9 = name;
      }
      tmp___10 = quote_name(stdout, tmp___9, (struct quoting_options  const  *)dirname_quoting_options, (size_t *)((void *)0));
      dired_pos += tmp___10;
      while (1) {
        if (dired) {
          __o___1 = & subdired_obstack;
          __len___1 = (int )sizeof(dired_pos);
          if ((unsigned long )(__o___1->next_free + __len___1) > (unsigned long )__o___1->chunk_limit) {
            _obstack_newchunk(__o___1, __len___1);
          } else {

          }
          memcpy((void */* __restrict  */)__o___1->next_free, (void const   */* __restrict  */)(& dired_pos), (unsigned long )__len___1);
          __o___1->next_free += __len___1;
        } else {

        }
        break;
      }
      while (1) {
        fputs_unlocked((char const   */* __restrict  */)":\n", (FILE */* __restrict  */)stdout);
        dired_pos += sizeof(":\n") - 1UL;
        break;
      }
    } else {

    }
  }
  clear_files();
  while (1) {
    tmp___11 = __errno_location();
    *tmp___11 = 0;
    next = readdir(dirp);
    if (next) {
      tmp___13 = file_ignored((char const   *)(next->d_name));
      if (! tmp___13) {
        type = (enum filetype )0;
        switch ((int )next->d_type) {
        case 6: 
        type = (enum filetype )4;
        break;
        case 2: 
        type = (enum filetype )2;
        break;
        case 4: 
        type = (enum filetype )3;
        break;
        case 1: 
        type = (enum filetype )1;
        break;
        case 10: 
        type = (enum filetype )6;
        break;
        case 8: 
        type = (enum filetype )5;
        break;
        case 12: 
        type = (enum filetype )7;
        break;
        case 14: 
        type = (enum filetype )8;
        break;
        }
        tmp___12 = gobble_file((char const   *)(next->d_name), type, 0UL, (_Bool)0, name);
        total_blocks += tmp___12;
        if ((unsigned int )format == 1U) {
          if ((int )sort_type == -1) {
            if (! print_block_size) {
              if (! recursive) {
                sort_files();
                print_current_files();
                clear_files();
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
    } else {
      tmp___16 = __errno_location();
      if (*tmp___16 != 0) {
        tmp___14 = gettext("reading directory %s");
        file_failure(command_line_arg, (char const   *)tmp___14, name);
        tmp___15 = __errno_location();
        if (*tmp___15 != 75) {
          break;
        } else {

        }
      } else {
        break;
      }
    }
    process_signals();
  }
  tmp___18 = closedir(dirp);
  if (tmp___18 != 0) {
    tmp___17 = gettext("closing directory %s");
    file_failure(command_line_arg, (char const   *)tmp___17, name);
  } else {

  }
  sort_files();
  if (recursive) {
    extract_dirs_from_files(name, command_line_arg);
  } else {

  }
  if ((unsigned int )format == 0U) {
    goto _L___0;
  } else {
    if (print_block_size) {
      _L___0: 
      while (1) {
        if (dired) {
          while (1) {
            fputs_unlocked((char const   */* __restrict  */)"  ", (FILE */* __restrict  */)stdout);
            dired_pos += sizeof("  ") - 1UL;
            break;
          }
        } else {

        }
        break;
      }
      tmp___19 = gettext("total");
      p = (char const   *)tmp___19;
      while (1) {
        fputs_unlocked((char const   */* __restrict  */)p, (FILE */* __restrict  */)stdout);
        tmp___20 = strlen(p);
        dired_pos += tmp___20;
        break;
      }
      while (1) {
        putchar_unlocked(' ');
        dired_pos ++;
        break;
      }
      tmp___21 = human_readable(total_blocks, buf, human_output_opts, 512UL, output_block_size);
      p = (char const   *)tmp___21;
      while (1) {
        fputs_unlocked((char const   */* __restrict  */)p, (FILE */* __restrict  */)stdout);
        tmp___22 = strlen(p);
        dired_pos += tmp___22;
        break;
      }
      while (1) {
        putchar_unlocked('\n');
        dired_pos ++;
        break;
      }
    } else {

    }
  }
  if (cwd_n_used) {
    print_current_files();
  } else {

  }
  return;
}
}
static void add_ignore_pattern(char const   *pattern ) 
{ struct ignore_pattern *ignore ;
  void *tmp ;

  {
  tmp = xmalloc(sizeof(*ignore));
  ignore = (struct ignore_pattern *)tmp;
  ignore->pattern = pattern;
  ignore->next = ignore_patterns;
  ignore_patterns = ignore;
  return;
}
}
static _Bool patterns_match(struct ignore_pattern  const  *patterns , char const   *file ) 
{ struct ignore_pattern  const  *p ;
  int tmp ;

  {
  p = patterns;
  while (p) {
    tmp = fnmatch((char const   *)p->pattern, file, 1 << 2);
    if (tmp == 0) {
      return ((_Bool)1);
    } else {

    }
    p = (struct ignore_pattern  const  *)p->next;
  }
  return ((_Bool)0);
}
}
static _Bool file_ignored(char const   *name ) 
{ _Bool tmp ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  if ((unsigned int )ignore_mode != 2U) {
    if ((int const   )*(name + 0) == 46) {
      if ((unsigned int )ignore_mode == 0U) {
        tmp___1 = 1;
      } else {
        if (! *(name + (1 + ((int const   )*(name + 1) == 46)))) {
          tmp___1 = 1;
        } else {
          goto _L___1;
        }
      }
    } else {
      goto _L___1;
    }
  } else {
    _L___1: 
    if ((unsigned int )ignore_mode == 0U) {
      tmp = patterns_match((struct ignore_pattern  const  *)hide_patterns, name);
      if (tmp) {
        tmp___1 = 1;
      } else {
        goto _L;
      }
    } else {
      _L: 
      tmp___0 = patterns_match((struct ignore_pattern  const  *)ignore_patterns, name);
      if (tmp___0) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    }
  }
  return ((_Bool )tmp___1);
}
}
static uintmax_t unsigned_file_size(off_t size ) 
{ 

  {
  return ((unsigned long )size + (unsigned long )(size < 0L) * (((unsigned long )(((1L << (sizeof(off_t ) * 8UL - 2UL)) - 1L) * 2L + 1L) - (unsigned long )(~ (((1L << (sizeof(off_t ) * 8UL - 2UL)) - 1L) * 2L + 1L))) + 1UL));
}
}
static _Bool has_capability(char const   *name  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((_Bool)0);
}
}
static void free_ent(struct fileinfo *f ) 
{ 

  {
  free((void *)f->name);
  free((void *)f->linkname);
  if ((unsigned long )f->scontext != (unsigned long )(UNKNOWN_SECURITY_CONTEXT)) {
    freecon(f->scontext);
  } else {

  }
  return;
}
}
static void clear_files(void) 
{ size_t i ;
  struct fileinfo *f ;

  {
  i = 0UL;
  while (i < cwd_n_used) {
    f = (struct fileinfo *)*(sorted_file + i);
    free_ent(f);
    i ++;
  }
  cwd_n_used = 0UL;
  any_has_acl = (_Bool)0;
  inode_number_width = 0;
  block_size_width = 0;
  nlink_width = 0;
  owner_width = 0;
  group_width = 0;
  author_width = 0;
  scontext_width = 0;
  major_device_number_width = 0;
  minor_device_number_width = 0;
  file_size_width = 0;
  return;
}
}
static _Bool errno_unsupported(int err ) 
{ int tmp ;

  {
  if (err == 22) {
    tmp = 1;
  } else {
    if (err == 38) {
      tmp = 1;
    } else {
      if (err == 95) {
        tmp = 1;
      } else {
        if (err == 95) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      }
    }
  }
  return ((_Bool )tmp);
}
}
static dev_t unsupported_device  ;
static int getfilecon_cache(char const   *file , struct fileinfo *f , _Bool deref ) 
{ int *tmp ;
  int r ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  _Bool tmp___4 ;

  {
  if (f->stat.st_dev == unsupported_device) {
    tmp = __errno_location();
    *tmp = 95;
    return (-1);
  } else {

  }
  if (deref) {
    tmp___0 = getfilecon(file, & f->scontext);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = lgetfilecon(file, & f->scontext);
    tmp___2 = tmp___1;
  }
  r = tmp___2;
  if (r < 0) {
    tmp___3 = __errno_location();
    tmp___4 = errno_unsupported(*tmp___3);
    if (tmp___4) {
      unsupported_device = f->stat.st_dev;
    } else {

    }
  } else {

  }
  return (r);
}
}
static dev_t unsupported_device___0  ;
static int file_has_acl_cache(char const   *file , struct fileinfo *f ) 
{ int *tmp ;
  int *tmp___0 ;
  int n ;
  int tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;

  {
  if (f->stat.st_dev == unsupported_device___0) {
    tmp = __errno_location();
    *tmp = 95;
    return (0);
  } else {

  }
  tmp___0 = __errno_location();
  *tmp___0 = 0;
  tmp___1 = file_has_acl(file, (struct stat  const  *)(& f->stat));
  n = tmp___1;
  if (n <= 0) {
    tmp___2 = __errno_location();
    tmp___3 = errno_unsupported(*tmp___2);
    if (tmp___3) {
      unsupported_device___0 = f->stat.st_dev;
    } else {

    }
  } else {

  }
  return (n);
}
}
static dev_t unsupported_device___1  ;
static _Bool has_capability_cache(char const   *file , struct fileinfo *f ) 
{ int *tmp ;
  _Bool b ;
  _Bool tmp___0 ;
  int *tmp___1 ;
  _Bool tmp___2 ;

  {
  if (f->stat.st_dev == unsupported_device___1) {
    tmp = __errno_location();
    *tmp = 95;
    return ((_Bool)0);
  } else {

  }
  tmp___0 = has_capability(file);
  b = tmp___0;
  if (! b) {
    tmp___1 = __errno_location();
    tmp___2 = errno_unsupported(*tmp___1);
    if (tmp___2) {
      unsupported_device___1 = f->stat.st_dev;
    } else {

    }
  } else {

  }
  return (b);
}
}
static uintmax_t gobble_file(char const   *name , enum filetype type , ino_t inode , _Bool command_line_arg , char const   *dirname ) 
{ uintmax_t blocks ;
  struct fileinfo *f ;
  void *tmp ;
  char *absolute_name ;
  _Bool do_deref ;
  int err ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  _Bool need_lstat ;
  int *tmp___3 ;
  char *tmp___4 ;
  _Bool tmp___5 ;
  _Bool have_selinux ;
  _Bool have_acl ;
  int attr_len ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  int n ;
  int tmp___12 ;
  int tmp___13 ;
  char *tmp___14 ;
  int *tmp___15 ;
  struct stat linkstats ;
  char *linkname ;
  char *tmp___16 ;
  int tmp___17 ;
  char buf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  int len ;
  char *tmp___18 ;
  int tmp___19 ;
  int len___0 ;
  int tmp___20 ;
  int len___1 ;
  int tmp___21 ;
  int len___2 ;
  int tmp___22 ;
  int len___3 ;
  size_t tmp___23 ;
  char b[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  int b_len ;
  char *tmp___24 ;
  size_t tmp___25 ;
  char buf___0[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  int len___4 ;
  unsigned int tmp___26 ;
  char *tmp___27 ;
  size_t tmp___28 ;
  unsigned int tmp___29 ;
  char *tmp___30 ;
  size_t tmp___31 ;
  char buf___1[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  uintmax_t size ;
  uintmax_t tmp___32 ;
  int len___5 ;
  char *tmp___33 ;
  int tmp___34 ;
  _Bool tmp___35 ;
  _Bool tmp___36 ;
  _Bool tmp___37 ;
  _Bool tmp___38 ;
  _Bool tmp___39 ;
  _Bool tmp___40 ;
  _Bool tmp___41 ;
  char buf___2[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  int len___6 ;
  char *tmp___42 ;
  size_t tmp___43 ;

  {
  blocks = 0UL;
  if (! (! command_line_arg)) {
    if (! (inode == 0UL)) {
      __assert_fail("! command_line_arg || inode == NOT_AN_INODE_NUMBER", "src/ls.c", 2874U, "gobble_file");
    } else {

    }
  } else {

  }
  if (cwd_n_used == cwd_n_alloc) {
    tmp = xnrealloc((void *)cwd_file, cwd_n_alloc, 2UL * sizeof(*cwd_file));
    cwd_file = (struct fileinfo *)tmp;
    cwd_n_alloc *= 2UL;
  } else {

  }
  f = cwd_file + cwd_n_used;
  memset((void *)f, '\000', sizeof(*f));
  f->stat.st_ino = inode;
  f->filetype = type;
  if (command_line_arg) {
    goto _L___9;
  } else {
    if (format_needs_stat) {
      goto _L___9;
    } else {
      if ((unsigned int )type == 3U) {
        if (print_with_color) {
          tmp___35 = is_colored((enum indicator_no )19);
          if (tmp___35) {
            goto _L___9;
          } else {
            tmp___36 = is_colored((enum indicator_no )18);
            if (tmp___36) {
              goto _L___9;
            } else {
              tmp___37 = is_colored((enum indicator_no )20);
              if (tmp___37) {
                goto _L___9;
              } else {
                goto _L___17;
              }
            }
          }
        } else {
          goto _L___17;
        }
      } else {
        _L___17: 
        if (print_inode) {
          goto _L___15;
        } else {
          if (format_needs_type) {
            _L___15: 
            if ((unsigned int )type == 6U) {
              goto _L___14;
            } else {
              if ((unsigned int )type == 0U) {
                _L___14: 
                if ((unsigned int )dereference == 5U) {
                  goto _L___9;
                } else {
                  if (command_line_arg) {
                    if ((unsigned int )dereference != 2U) {
                      goto _L___9;
                    } else {
                      goto _L___12;
                    }
                  } else {
                    _L___12: 
                    if (color_symlink_as_referent) {
                      goto _L___9;
                    } else {
                      if (check_symlink_color) {
                        goto _L___9;
                      } else {
                        goto _L___13;
                      }
                    }
                  }
                }
              } else {
                goto _L___13;
              }
            }
          } else {
            _L___13: 
            if (print_inode) {
              if (inode == 0UL) {
                goto _L___9;
              } else {
                goto _L___10;
              }
            } else {
              _L___10: 
              if (format_needs_type) {
                if ((unsigned int )type == 0U) {
                  goto _L___9;
                } else {
                  if (command_line_arg) {
                    goto _L___9;
                  } else {
                    if ((unsigned int )type == 5U) {
                      if ((unsigned int )indicator_style == 3U) {
                        goto _L___9;
                      } else {
                        if (print_with_color) {
                          tmp___38 = is_colored((enum indicator_no )14);
                          if (tmp___38) {
                            goto _L___9;
                          } else {
                            tmp___39 = is_colored((enum indicator_no )16);
                            if (tmp___39) {
                              goto _L___9;
                            } else {
                              tmp___40 = is_colored((enum indicator_no )17);
                              if (tmp___40) {
                                goto _L___9;
                              } else {
                                tmp___41 = is_colored((enum indicator_no )21);
                                if (tmp___41) {
                                  _L___9: 
                                  if ((int const   )*(name + 0) == 47) {
                                    absolute_name = (char *)name;
                                  } else {
                                    if ((int const   )*(dirname + 0) == 0) {
                                      absolute_name = (char *)name;
                                    } else {
                                      tmp___0 = strlen(name);
                                      tmp___1 = strlen(dirname);
                                      tmp___2 = __builtin_alloca((tmp___0 + tmp___1) + 2UL);
                                      absolute_name = (char *)tmp___2;
                                      attach(absolute_name, dirname, name);
                                    }
                                  }
                                  switch ((int )dereference) {
                                  case 5: 
                                  err = stat((char const   */* __restrict  */)absolute_name, (struct stat */* __restrict  */)(& f->stat));
                                  do_deref = (_Bool)1;
                                  break;
                                  case 3: 
                                  case 4: 
                                  if (command_line_arg) {
                                    err = stat((char const   */* __restrict  */)absolute_name, (struct stat */* __restrict  */)(& f->stat));
                                    do_deref = (_Bool)1;
                                    if ((unsigned int )dereference == 3U) {
                                      break;
                                    } else {

                                    }
                                    if (err < 0) {
                                      tmp___3 = __errno_location();
                                      need_lstat = (_Bool )(*tmp___3 == 2);
                                    } else {
                                      need_lstat = (_Bool )(! ((f->stat.st_mode & 61440U) == 16384U));
                                    }
                                    if (! need_lstat) {
                                      break;
                                    } else {

                                    }
                                  } else {

                                  }
                                  default: 
                                  err = lstat((char const   */* __restrict  */)absolute_name, (struct stat */* __restrict  */)(& f->stat));
                                  do_deref = (_Bool)0;
                                  break;
                                  }
                                  if (err != 0) {
                                    tmp___4 = gettext("cannot access %s");
                                    file_failure(command_line_arg, (char const   *)tmp___4, (char const   *)absolute_name);
                                    if (command_line_arg) {
                                      return (0UL);
                                    } else {

                                    }
                                    f->name = xstrdup(name);
                                    cwd_n_used ++;
                                    return (0UL);
                                  } else {

                                  }
                                  f->stat_ok = (_Bool)1;
                                  if ((unsigned int )type == 5U) {
                                    goto _L;
                                  } else {
                                    if ((f->stat.st_mode & 61440U) == 32768U) {
                                      _L: 
                                      if (print_with_color) {
                                        tmp___5 = is_colored((enum indicator_no )21);
                                        if (tmp___5) {
                                          f->has_capability = has_capability_cache((char const   *)absolute_name, f);
                                        } else {

                                        }
                                      } else {

                                      }
                                    } else {

                                    }
                                  }
                                  if ((unsigned int )format == 0U) {
                                    goto _L___1;
                                  } else {
                                    if (print_scontext) {
                                      _L___1: 
                                      have_selinux = (_Bool)0;
                                      have_acl = (_Bool)0;
                                      tmp___6 = getfilecon_cache((char const   *)absolute_name, f, do_deref);
                                      attr_len = tmp___6;
                                      err = attr_len < 0;
                                      if (err == 0) {
                                        tmp___7 = strcmp("unlabeled", (char const   *)f->scontext);
                                        if (tmp___7 == 0) {
                                          tmp___8 = 0;
                                        } else {
                                          tmp___8 = 1;
                                        }
                                        have_selinux = (_Bool )tmp___8;
                                      } else {
                                        f->scontext = UNKNOWN_SECURITY_CONTEXT;
                                        tmp___9 = __errno_location();
                                        if (*tmp___9 == 95) {
                                          err = 0;
                                        } else {
                                          tmp___10 = __errno_location();
                                          if (*tmp___10 == 95) {
                                            err = 0;
                                          } else {
                                            tmp___11 = __errno_location();
                                            if (*tmp___11 == 61) {
                                              err = 0;
                                            } else {

                                            }
                                          }
                                        }
                                      }
                                      if (err == 0) {
                                        if ((unsigned int )format == 0U) {
                                          tmp___12 = file_has_acl_cache((char const   *)absolute_name, f);
                                          n = tmp___12;
                                          err = n < 0;
                                          have_acl = (_Bool )(0 < n);
                                        } else {

                                        }
                                      } else {

                                      }
                                      if (! have_selinux) {
                                        if (! have_acl) {
                                          f->acl_type = (enum acl_type )0;
                                        } else {
                                          goto _L___0;
                                        }
                                      } else {
                                        _L___0: 
                                        if (have_selinux) {
                                          if (! have_acl) {
                                            tmp___13 = 1;
                                          } else {
                                            tmp___13 = 2;
                                          }
                                        } else {
                                          tmp___13 = 2;
                                        }
                                        f->acl_type = (enum acl_type )tmp___13;
                                      }
                                      any_has_acl = (_Bool )((int )any_has_acl | ((unsigned int )f->acl_type != 0U));
                                      if (err) {
                                        tmp___14 = quotearg_colon((char const   *)absolute_name);
                                        tmp___15 = __errno_location();
                                        error(0, *tmp___15, "%s", tmp___14);
                                      } else {

                                      }
                                    } else {

                                    }
                                  }
                                  if ((f->stat.st_mode & 61440U) == 40960U) {
                                    if ((unsigned int )format == 0U) {
                                      goto _L___3;
                                    } else {
                                      if (check_symlink_color) {
                                        _L___3: 
                                        get_link_name((char const   *)absolute_name, f, command_line_arg);
                                        tmp___16 = make_link_name((char const   *)absolute_name, (char const   *)f->linkname);
                                        linkname = tmp___16;
                                        if (linkname) {
                                          if (2U <= (unsigned int )indicator_style) {
                                            goto _L___2;
                                          } else {
                                            if (check_symlink_color) {
                                              _L___2: 
                                              tmp___17 = stat((char const   */* __restrict  */)linkname, (struct stat */* __restrict  */)(& linkstats));
                                              if (tmp___17 == 0) {
                                                f->linkok = (_Bool)1;
                                                if (! command_line_arg) {
                                                  f->linkmode = linkstats.st_mode;
                                                } else {
                                                  if ((unsigned int )format == 0U) {
                                                    f->linkmode = linkstats.st_mode;
                                                  } else {
                                                    if (! ((linkstats.st_mode & 61440U) == 16384U)) {
                                                      f->linkmode = linkstats.st_mode;
                                                    } else {

                                                    }
                                                  }
                                                }
                                              } else {

                                              }
                                            } else {

                                            }
                                          }
                                        } else {

                                        }
                                        free((void *)linkname);
                                      } else {

                                      }
                                    }
                                  } else {

                                  }
                                  if ((f->stat.st_mode & 61440U) == 40960U) {
                                    if (! check_symlink_color) {
                                      f->linkok = (_Bool)1;
                                    } else {

                                    }
                                  } else {

                                  }
                                  if ((f->stat.st_mode & 61440U) == 40960U) {
                                    f->filetype = (enum filetype )6;
                                  } else {
                                    if ((f->stat.st_mode & 61440U) == 16384U) {
                                      if (command_line_arg) {
                                        if (! immediate_dirs) {
                                          f->filetype = (enum filetype )9;
                                        } else {
                                          f->filetype = (enum filetype )3;
                                        }
                                      } else {
                                        f->filetype = (enum filetype )3;
                                      }
                                    } else {
                                      f->filetype = (enum filetype )5;
                                    }
                                  }
                                  blocks = (unsigned long )f->stat.st_blocks;
                                  if ((unsigned int )format == 0U) {
                                    goto _L___4;
                                  } else {
                                    if (print_block_size) {
                                      _L___4: 
                                      tmp___18 = human_readable(blocks, buf, human_output_opts, 512UL, output_block_size);
                                      tmp___19 = gnu_mbswidth((char const   *)tmp___18, 0);
                                      len = tmp___19;
                                      if (block_size_width < len) {
                                        block_size_width = len;
                                      } else {

                                      }
                                    } else {

                                    }
                                  }
                                  if ((unsigned int )format == 0U) {
                                    if (print_owner) {
                                      tmp___20 = format_user_width(f->stat.st_uid);
                                      len___0 = tmp___20;
                                      if (owner_width < len___0) {
                                        owner_width = len___0;
                                      } else {

                                      }
                                    } else {

                                    }
                                    if (print_group) {
                                      tmp___21 = format_group_width(f->stat.st_gid);
                                      len___1 = tmp___21;
                                      if (group_width < len___1) {
                                        group_width = len___1;
                                      } else {

                                      }
                                    } else {

                                    }
                                    if (print_author) {
                                      tmp___22 = format_user_width(f->stat.st_uid);
                                      len___2 = tmp___22;
                                      if (author_width < len___2) {
                                        author_width = len___2;
                                      } else {

                                      }
                                    } else {

                                    }
                                  } else {

                                  }
                                  if (print_scontext) {
                                    tmp___23 = strlen((char const   *)f->scontext);
                                    len___3 = (int )tmp___23;
                                    if (scontext_width < len___3) {
                                      scontext_width = len___3;
                                    } else {

                                    }
                                  } else {

                                  }
                                  if ((unsigned int )format == 0U) {
                                    tmp___24 = umaxtostr(f->stat.st_nlink, b);
                                    tmp___25 = strlen((char const   *)tmp___24);
                                    b_len = (int )tmp___25;
                                    if (nlink_width < b_len) {
                                      nlink_width = b_len;
                                    } else {

                                    }
                                    if ((f->stat.st_mode & 61440U) == 8192U) {
                                      goto _L___5;
                                    } else {
                                      if ((f->stat.st_mode & 61440U) == 24576U) {
                                        _L___5: 
                                        tmp___26 = gnu_dev_major((unsigned long long )f->stat.st_rdev);
                                        tmp___27 = umaxtostr((unsigned long )tmp___26, buf___0);
                                        tmp___28 = strlen((char const   *)tmp___27);
                                        len___4 = (int )tmp___28;
                                        if (major_device_number_width < len___4) {
                                          major_device_number_width = len___4;
                                        } else {

                                        }
                                        tmp___29 = gnu_dev_minor((unsigned long long )f->stat.st_rdev);
                                        tmp___30 = umaxtostr((unsigned long )tmp___29, buf___0);
                                        tmp___31 = strlen((char const   *)tmp___30);
                                        len___4 = (int )tmp___31;
                                        if (minor_device_number_width < len___4) {
                                          minor_device_number_width = len___4;
                                        } else {

                                        }
                                        len___4 = (major_device_number_width + 2) + minor_device_number_width;
                                        if (file_size_width < len___4) {
                                          file_size_width = len___4;
                                        } else {

                                        }
                                      } else {
                                        tmp___32 = unsigned_file_size(f->stat.st_size);
                                        size = tmp___32;
                                        tmp___33 = human_readable(size, buf___1, file_human_output_opts, 1UL, file_output_block_size);
                                        tmp___34 = gnu_mbswidth((char const   *)tmp___33, 0);
                                        len___5 = tmp___34;
                                        if (file_size_width < len___5) {
                                          file_size_width = len___5;
                                        } else {

                                        }
                                      }
                                    }
                                  } else {

                                  }
                                } else {

                                }
                              }
                            }
                          }
                        } else {

                        }
                      }
                    } else {

                    }
                  }
                }
              } else {

              }
            }
          }
        }
      }
    }
  }
  if (print_inode) {
    tmp___42 = umaxtostr(f->stat.st_ino, buf___2);
    tmp___43 = strlen((char const   *)tmp___42);
    len___6 = (int )tmp___43;
    if (inode_number_width < len___6) {
      inode_number_width = len___6;
    } else {

    }
  } else {

  }
  f->name = xstrdup(name);
  cwd_n_used ++;
  return (blocks);
}
}
static _Bool is_directory(struct fileinfo  const  *f ) 
{ int tmp ;

  {
  if ((unsigned int const   )f->filetype == 3U) {
    tmp = 1;
  } else {
    if ((unsigned int const   )f->filetype == 9U) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  }
  return ((_Bool )tmp);
}
}
static void get_link_name(char const   *filename , struct fileinfo *f , _Bool command_line_arg ) 
{ char *tmp ;

  {
  f->linkname = areadlink_with_size(filename, (unsigned long )f->stat.st_size);
  if ((unsigned long )f->linkname == (unsigned long )((void *)0)) {
    tmp = gettext("cannot read symbolic link %s");
    file_failure(command_line_arg, (char const   *)tmp, filename);
  } else {

  }
  return;
}
}
static char *make_link_name(char const   *name , char const   *linkname ) 
{ char *tmp ;
  size_t prefix_len ;
  size_t tmp___0 ;
  char *tmp___1 ;
  char *p ;
  size_t tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;

  {
  if (! linkname) {
    return ((char *)((void *)0));
  } else {

  }
  if ((int const   )*(linkname + 0) == 47) {
    tmp = xstrdup(linkname);
    return (tmp);
  } else {

  }
  tmp___0 = dir_len(name);
  prefix_len = tmp___0;
  if (prefix_len == 0UL) {
    tmp___1 = xstrdup(linkname);
    return (tmp___1);
  } else {

  }
  tmp___2 = strlen(linkname);
  tmp___3 = xmalloc(((prefix_len + 1UL) + tmp___2) + 1UL);
  p = (char *)tmp___3;
  if (! ((int const   )*(name + (prefix_len - 1UL)) == 47)) {
    prefix_len ++;
  } else {

  }
  tmp___4 = stpncpy((char */* __restrict  */)p, (char const   */* __restrict  */)name, prefix_len);
  stpcpy((char */* __restrict  */)tmp___4, (char const   */* __restrict  */)linkname);
  return (p);
}
}
static _Bool basename_is_dot_or_dotdot(char const   *name ) 
{ char const   *base ;
  char *tmp ;
  _Bool tmp___0 ;

  {
  tmp = last_component(name);
  base = (char const   *)tmp;
  tmp___0 = dot_or_dotdot(base);
  return (tmp___0);
}
}
static void extract_dirs_from_files(char const   *dirname , _Bool command_line_arg ) 
{ size_t i ;
  size_t j ;
  _Bool ignore_dot_and_dot_dot ;
  struct fileinfo *f ;
  char *name ;
  char *tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  size_t tmp___2 ;
  struct fileinfo *f___0 ;

  {
  ignore_dot_and_dot_dot = (_Bool )((unsigned long )dirname != (unsigned long )((void *)0));
  if (dirname) {
    if (! (! active_dir_set)) {
      queue_directory((char const   *)((void *)0), dirname, (_Bool)0);
    } else {

    }
  } else {

  }
  i = cwd_n_used;
  while (1) {
    tmp___2 = i;
    i --;
    if (! (tmp___2 != 0UL)) {
      break;
    } else {

    }
    f = (struct fileinfo *)*(sorted_file + i);
    tmp___0 = is_directory((struct fileinfo  const  *)f);
    if (tmp___0) {
      if (! ignore_dot_and_dot_dot) {
        goto _L;
      } else {
        tmp___1 = basename_is_dot_or_dotdot((char const   *)f->name);
        if (! tmp___1) {
          _L: 
          if (! dirname) {
            queue_directory((char const   *)f->name, (char const   *)f->linkname, command_line_arg);
          } else {
            if ((int )*(f->name + 0) == 47) {
              queue_directory((char const   *)f->name, (char const   *)f->linkname, command_line_arg);
            } else {
              tmp = file_name_concat(dirname, (char const   *)f->name, (char **)((void *)0));
              name = tmp;
              queue_directory((char const   *)name, (char const   *)f->linkname, command_line_arg);
              free((void *)name);
            }
          }
          if ((unsigned int )f->filetype == 9U) {
            free_ent(f);
          } else {

          }
        } else {

        }
      }
    } else {

    }
  }
  i = 0UL;
  j = 0UL;
  while (i < cwd_n_used) {
    f___0 = (struct fileinfo *)*(sorted_file + i);
    *(sorted_file + j) = (void *)f___0;
    j += (unsigned long )((unsigned int )f___0->filetype != 9U);
    i ++;
  }
  cwd_n_used = j;
  return;
}
}
static jmp_buf failed_strcoll  ;
static int xstrcoll(char const   *a , char const   *b ) 
{ int diff ;
  int *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;

  {
  tmp = __errno_location();
  *tmp = 0;
  diff = strcoll(a, b);
  tmp___4 = __errno_location();
  if (*tmp___4) {
    tmp___0 = quote_n(1, b);
    tmp___1 = quote_n(0, a);
    tmp___2 = gettext("cannot compare file names %s and %s");
    tmp___3 = __errno_location();
    error(0, *tmp___3, (char const   *)tmp___2, tmp___1, tmp___0);
    set_exit_status((_Bool)0);
    longjmp(failed_strcoll, 1);
  } else {

  }
  return (diff);
}
}
__inline static int cmp_ctime(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ int diff ;
  struct timespec tmp ;
  struct timespec tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = get_stat_ctime(& a->stat);
  tmp___0 = get_stat_ctime(& b->stat);
  tmp___1 = timespec_cmp(tmp___0, tmp);
  diff = tmp___1;
  if (diff) {
    tmp___3 = diff;
  } else {
    tmp___2 = (*cmp)((char const   *)a->name, (char const   *)b->name);
    tmp___3 = tmp___2;
  }
  return (tmp___3);
}
}
__inline static int cmp_mtime(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ int diff ;
  struct timespec tmp ;
  struct timespec tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = get_stat_mtime(& a->stat);
  tmp___0 = get_stat_mtime(& b->stat);
  tmp___1 = timespec_cmp(tmp___0, tmp);
  diff = tmp___1;
  if (diff) {
    tmp___3 = diff;
  } else {
    tmp___2 = (*cmp)((char const   *)a->name, (char const   *)b->name);
    tmp___3 = tmp___2;
  }
  return (tmp___3);
}
}
__inline static int cmp_atime(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ int diff ;
  struct timespec tmp ;
  struct timespec tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  tmp = get_stat_atime(& a->stat);
  tmp___0 = get_stat_atime(& b->stat);
  tmp___1 = timespec_cmp(tmp___0, tmp);
  diff = tmp___1;
  if (diff) {
    tmp___3 = diff;
  } else {
    tmp___2 = (*cmp)((char const   *)a->name, (char const   *)b->name);
    tmp___3 = tmp___2;
  }
  return (tmp___3);
}
}
__inline static int cmp_size(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ int diff ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (b->stat.st_size < a->stat.st_size) {
    tmp = -1;
  } else {
    tmp = b->stat.st_size > a->stat.st_size;
  }
  diff = tmp;
  if (diff) {
    tmp___1 = diff;
  } else {
    tmp___0 = (*cmp)((char const   *)a->name, (char const   *)b->name);
    tmp___1 = tmp___0;
  }
  return (tmp___1);
}
}
__inline static int cmp_name(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ int tmp ;

  {
  tmp = (*cmp)((char const   *)a->name, (char const   *)b->name);
  return (tmp);
}
}
__inline static int cmp_extension(struct fileinfo  const  *a , struct fileinfo  const  *b , int (*cmp)(char const   * , char const   * ) ) 
{ char const   *base1 ;
  char *tmp ;
  char const   *base2 ;
  char *tmp___0 ;
  int diff ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp = strrchr((char const   *)a->name, '.');
  base1 = (char const   *)tmp;
  tmp___0 = strrchr((char const   *)b->name, '.');
  base2 = (char const   *)tmp___0;
  if (base2) {
    tmp___1 = base2;
  } else {
    tmp___1 = "";
  }
  if (base1) {
    tmp___2 = base1;
  } else {
    tmp___2 = "";
  }
  tmp___3 = (*cmp)(tmp___2, tmp___1);
  diff = tmp___3;
  if (diff) {
    tmp___5 = diff;
  } else {
    tmp___4 = (*cmp)((char const   *)a->name, (char const   *)b->name);
    tmp___5 = tmp___4;
  }
  return (tmp___5);
}
}
static int xstrcoll_ctime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_ctime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_ctime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_ctime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_ctime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_ctime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_ctime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_ctime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_ctime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_ctime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_ctime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_ctime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_ctime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_ctime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_ctime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_ctime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
static int xstrcoll_mtime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_mtime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_mtime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_mtime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_mtime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_mtime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_mtime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_mtime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_mtime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_mtime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_mtime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_mtime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_mtime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_mtime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_mtime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_mtime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
static int xstrcoll_atime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_atime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_atime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_atime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_atime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_atime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_atime(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_atime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_atime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_atime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_atime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_atime((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_atime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_atime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_atime(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_atime((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
static int xstrcoll_size(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_size((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_size(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_size((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_size(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_size((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_size(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_size((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_size(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_size((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_size(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_size((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_size(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_size((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_size(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_size((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
static int xstrcoll_name(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_name((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_name(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_name((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_name(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_name((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_name(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_name((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_name(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_name((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_name(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_name((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_name(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_name((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_name(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_name((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
static int xstrcoll_extension(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_extension((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp);
}
}
static int strcmp_extension(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_extension((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp);
}
}
static int rev_xstrcoll_extension(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_extension((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp);
}
}
static int rev_strcmp_extension(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_extension((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp);
}
}
static int xstrcoll_df_extension(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_extension((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & xstrcoll);
  return (tmp___1);
}
}
static int strcmp_df_extension(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_extension((struct fileinfo  const  *)a, (struct fileinfo  const  *)b, & strcmp);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_extension(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_extension((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & xstrcoll);
  return (tmp___1);
}
}
static int rev_strcmp_df_extension(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_extension((struct fileinfo  const  *)b, (struct fileinfo  const  *)a, & strcmp);
  return (tmp___1);
}
}
__inline static int cmp_version(struct fileinfo  const  *a , struct fileinfo  const  *b ) 
{ int tmp ;

  {
  tmp = filevercmp((char const   *)a->name, (char const   *)b->name);
  return (tmp);
}
}
static int xstrcoll_version(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_version((struct fileinfo  const  *)a, (struct fileinfo  const  *)b);
  return (tmp);
}
}
static int rev_xstrcoll_version(V a , V b ) 
{ int tmp ;

  {
  tmp = cmp_version((struct fileinfo  const  *)b, (struct fileinfo  const  *)a);
  return (tmp);
}
}
static int xstrcoll_df_version(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_version((struct fileinfo  const  *)a, (struct fileinfo  const  *)b);
  return (tmp___1);
}
}
static int rev_xstrcoll_df_version(V a , V b ) 
{ _Bool a_is_dir ;
  _Bool tmp ;
  _Bool b_is_dir ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  while (1) {
    tmp = is_directory((struct fileinfo  const  *)a);
    a_is_dir = tmp;
    tmp___0 = is_directory((struct fileinfo  const  *)b);
    b_is_dir = tmp___0;
    if (a_is_dir) {
      if (! b_is_dir) {
        return (-1);
      } else {

      }
    } else {

    }
    if (! a_is_dir) {
      if (b_is_dir) {
        return (1);
      } else {

      }
    } else {

    }
    break;
  }
  tmp___1 = cmp_version((struct fileinfo  const  *)b, (struct fileinfo  const  *)a);
  return (tmp___1);
}
}
static qsortFunc const   sort_functions[7][2][2][2]  = { { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_name),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_name)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_name),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_name)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_name),            (int (*/* const  */)(V a , V b ))(& strcmp_df_name)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_name),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_name)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_extension),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_extension)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_extension),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_extension)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_extension),            (int (*/* const  */)(V a , V b ))(& strcmp_df_extension)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_extension),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_extension)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_size),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_size)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_size),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_size)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_size),            (int (*/* const  */)(V a , V b ))(& strcmp_df_size)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_size),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_size)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_version),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_version)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_version),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_version)}}, 
     { {            (int (*/* const  */)(V a , V b ))((void *)0),            (int (*/* const  */)(V a , V b ))((void *)0)}, 
       {            (int (*/* const  */)(V a , V b ))((void *)0),            (int (*/* const  */)(V a , V b ))((void *)0)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_mtime),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_mtime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_mtime),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_mtime)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_mtime),            (int (*/* const  */)(V a , V b ))(& strcmp_df_mtime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_mtime),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_mtime)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_ctime),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_ctime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_ctime),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_ctime)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_ctime),            (int (*/* const  */)(V a , V b ))(& strcmp_df_ctime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_ctime),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_ctime)}}}, 
   { { {            (int (*/* const  */)(V a , V b ))(& xstrcoll_atime),            (int (*/* const  */)(V a , V b ))(& xstrcoll_df_atime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_atime),            (int (*/* const  */)(V a , V b ))(& rev_xstrcoll_df_atime)}}, 
     { {            (int (*/* const  */)(V a , V b ))(& strcmp_atime),            (int (*/* const  */)(V a , V b ))(& strcmp_df_atime)}, 
       {            (int (*/* const  */)(V a , V b ))(& rev_strcmp_atime),            (int (*/* const  */)(V a , V b ))(& rev_strcmp_df_atime)}}}};
static void initialize_ordering_vector(void) 
{ size_t i ;

  {
  i = 0UL;
  while (i < cwd_n_used) {
    *(sorted_file + i) = (void *)(cwd_file + i);
    i ++;
  }
  return;
}
}
static void sort_files(void) 
{ _Bool use_strcmp ;
  void *tmp ;
  int tmp___0 ;
  unsigned int tmp___1 ;

  {
  if (sorted_file_alloc < cwd_n_used + cwd_n_used / 2UL) {
    free((void *)sorted_file);
    tmp = xnmalloc(cwd_n_used, 3UL * sizeof(*sorted_file));
    sorted_file = (void **)tmp;
    sorted_file_alloc = 3UL * cwd_n_used;
  } else {

  }
  initialize_ordering_vector();
  if ((int )sort_type == -1) {
    return;
  } else {

  }
  tmp___0 = _setjmp(failed_strcoll);
  if (tmp___0) {
    use_strcmp = (_Bool)1;
    if (! ((int )sort_type != 3)) {
      __assert_fail("sort_type != sort_version", "src/ls.c", 3553U, "sort_files");
    } else {

    }
    initialize_ordering_vector();
  } else {
    use_strcmp = (_Bool)0;
  }
  if ((int )sort_type == 4) {
    tmp___1 = (unsigned int )time_type;
  } else {
    tmp___1 = 0U;
  }
  mpsort((void const   **)sorted_file, cwd_n_used, (int (*)(void const   * , void const   * ))sort_functions[(unsigned int )sort_type + tmp___1][use_strcmp][sort_reverse][directories_first]);
  return;
}
}
static void print_current_files(void) 
{ size_t i ;

  {
  switch ((int )format) {
  case 1: 
  i = 0UL;
  while (i < cwd_n_used) {
    print_file_name_and_frills((struct fileinfo  const  *)*(sorted_file + i), 0UL);
    putchar_unlocked('\n');
    i ++;
  }
  break;
  case 2: 
  print_many_per_line();
  break;
  case 3: 
  print_horizontal();
  break;
  case 4: 
  print_with_commas();
  break;
  case 0: 
  i = 0UL;
  while (i < cwd_n_used) {
    set_normal_color();
    print_long_format((struct fileinfo  const  *)*(sorted_file + i));
    while (1) {
      putchar_unlocked('\n');
      dired_pos ++;
      break;
    }
    i ++;
  }
  break;
  }
  return;
}
}
static size_t align_nstrftime(char *buf , size_t size , char const   *fmt , struct tm  const  *tm , int __utc , int __ns ) 
{ char const   *nfmt ;
  char rpl_fmt[sizeof(abmon[0]) + 100UL] ;
  char const   *pb ;
  char *pfmt ;
  void *tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;
  size_t ret ;
  size_t tmp___2 ;

  {
  nfmt = fmt;
  if (required_mon_width) {
    tmp___1 = strstr(fmt, "%b");
    pb = (char const   *)tmp___1;
    if (pb) {
      tmp___0 = strlen(fmt);
      if (tmp___0 < (sizeof(rpl_fmt) - sizeof(abmon[0])) + 2UL) {
        pfmt = rpl_fmt;
        nfmt = (char const   *)(rpl_fmt);
        tmp = mempcpy((void */* __restrict  */)pfmt, (void const   */* __restrict  */)fmt, (unsigned long )(pb - fmt));
        pfmt = (char *)tmp;
        pfmt = stpcpy((char */* __restrict  */)pfmt, (char const   */* __restrict  */)(abmon[tm->tm_mon]));
        strcpy((char */* __restrict  */)pfmt, (char const   */* __restrict  */)(pb + 2));
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___2 = nstrftime(buf, size, nfmt, tm, __utc, __ns);
  ret = tmp___2;
  return (ret);
}
}
static int long_time_expected_width(void) ;
static int width  =    -1;
static int long_time_expected_width(void) 
{ time_t epoch ;
  struct tm  const  *tm ;
  struct tm *tmp ;
  char buf[1001] ;
  size_t len ;
  size_t tmp___0 ;

  {
  if (width < 0) {
    epoch = 0L;
    tmp = localtime((time_t const   *)(& epoch));
    tm = (struct tm  const  *)tmp;
    if (tm) {
      tmp___0 = align_nstrftime(buf, sizeof(buf), long_time_format[0], tm, 0, 0);
      len = tmp___0;
      if (len != 0UL) {
        width = mbsnwidth((char const   *)(buf), len, 0);
      } else {

      }
    } else {

    }
    if (width < 0) {
      width = 0;
    } else {

    }
  } else {

  }
  return (width);
}
}
static void format_user_or_group(char const   *name , unsigned long id , int width___0 ) 
{ size_t len ;
  int width_gap ;
  int tmp ;
  int pad ;
  int tmp___0 ;
  size_t tmp___1 ;
  int tmp___2 ;

  {
  if (name) {
    tmp = gnu_mbswidth(name, 0);
    width_gap = width___0 - tmp;
    if (0 > width_gap) {
      tmp___0 = 0;
    } else {
      tmp___0 = width_gap;
    }
    pad = tmp___0;
    fputs_unlocked((char const   */* __restrict  */)name, (FILE */* __restrict  */)stdout);
    tmp___1 = strlen(name);
    len = tmp___1 + (unsigned long )pad;
    while (1) {
      putchar_unlocked(' ');
      tmp___2 = pad;
      pad --;
      if (! tmp___2) {
        break;
      } else {

      }
    }
  } else {
    printf((char const   */* __restrict  */)"%*lu ", width___0, id);
    len = (unsigned long )width___0;
  }
  dired_pos += len + 1UL;
  return;
}
}
static void format_user(uid_t u , int width___0 , _Bool stat_ok ) 
{ char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;

  {
  if (! stat_ok) {
    tmp___1 = "?";
  } else {
    if (numeric_ids) {
      tmp___0 = (char *)((void *)0);
    } else {
      tmp = getuser(u);
      tmp___0 = tmp;
    }
    tmp___1 = (char const   *)tmp___0;
  }
  format_user_or_group(tmp___1, (unsigned long )u, width___0);
  return;
}
}
static void format_group(gid_t g , int width___0 , _Bool stat_ok ) 
{ char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;

  {
  if (! stat_ok) {
    tmp___1 = "?";
  } else {
    if (numeric_ids) {
      tmp___0 = (char *)((void *)0);
    } else {
      tmp = getgroup(g);
      tmp___0 = tmp;
    }
    tmp___1 = (char const   *)tmp___0;
  }
  format_user_or_group(tmp___1, (unsigned long )g, width___0);
  return;
}
}
static int format_user_or_group_width(char const   *name , unsigned long id ) 
{ int len ;
  int tmp ;
  int tmp___0 ;
  char buf[((sizeof(id) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  size_t tmp___1 ;

  {
  if (name) {
    tmp = gnu_mbswidth(name, 0);
    len = tmp;
    if (0 > len) {
      tmp___0 = 0;
    } else {
      tmp___0 = len;
    }
    return (tmp___0);
  } else {
    sprintf((char */* __restrict  */)(buf), (char const   */* __restrict  */)"%lu", id);
    tmp___1 = strlen((char const   *)(buf));
    return ((int )tmp___1);
  }
}
}
static int format_user_width(uid_t u ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  if (numeric_ids) {
    tmp___0 = (char *)((void *)0);
  } else {
    tmp = getuser(u);
    tmp___0 = tmp;
  }
  tmp___1 = format_user_or_group_width((char const   *)tmp___0, (unsigned long )u);
  return (tmp___1);
}
}
static int format_group_width(gid_t g ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  if (numeric_ids) {
    tmp___0 = (char *)((void *)0);
  } else {
    tmp = getgroup(g);
    tmp___0 = tmp;
  }
  tmp___1 = format_user_or_group_width((char const   *)tmp___0, (unsigned long )g);
  return (tmp___1);
}
}
static char *format_inode(char *buf , size_t buflen , struct fileinfo  const  *f ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  if (! (((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL <= buflen)) {
    __assert_fail("(((((sizeof (uintmax_t) * 8 - (! ((__typeof__ (uintmax_t)) 0 < (__typeof__ (uintmax_t)) -1))) * 146 + 484) / 485) + (! ((__typeof__ (uintmax_t)) 0 < (__typeof__ (uintmax_t)) -1))) + 1) <= buflen", "src/ls.c", 3756U, "format_inode");
  } else {

  }
  if (f->stat_ok) {
    if (f->stat.st_ino != 0UL) {
      tmp = umaxtostr((unsigned long )f->stat.st_ino, buf);
      tmp___0 = tmp;
    } else {
      tmp___0 = (char *)"?";
    }
  } else {
    tmp___0 = (char *)"?";
  }
  return (tmp___0);
}
}
static void print_long_format(struct fileinfo  const  *f ) 
{ char modebuf[12] ;
  char buf[(((((((((((((((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL) + (((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL)) + 1UL) + sizeof(modebuf)) - 1UL) + 1UL) + (((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL)) + (((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL)) + 2UL) + (((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL)) + 1UL) + 1000UL) + 1UL] ;
  size_t s ;
  char *p ;
  struct timespec when_timespec ;
  struct tm *when_local ;
  char hbuf[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  char *tmp ;
  size_t tmp___0 ;
  char hbuf___0[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char const   *blocks ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  int pad ;
  int tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char tmp___6 ;
  char const   *tmp___7 ;
  char hbuf___1[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  size_t tmp___10 ;
  char majorbuf[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  char minorbuf[((sizeof(uintmax_t ) * 8UL - 0UL) * 146UL + 484UL) / 485UL + 1UL] ;
  int blanks_width ;
  unsigned int tmp___11 ;
  char *tmp___12 ;
  unsigned int tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;
  char hbuf___2[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char const   *size ;
  uintmax_t tmp___16 ;
  char *tmp___17 ;
  char const   *tmp___18 ;
  int pad___0 ;
  int tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char tmp___22 ;
  char const   *tmp___23 ;
  struct timespec six_months_ago ;
  _Bool recent ;
  char const   *fmt ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  char *tmp___28 ;
  char hbuf___3[(((sizeof(intmax_t ) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL] ;
  char *tmp___29 ;
  char const   *tmp___30 ;
  int tmp___31 ;
  size_t tmp___32 ;
  size_t w ;
  size_t tmp___33 ;

  {
  if (f->stat_ok) {
    filemodestring(& f->stat, modebuf);
  } else {
    modebuf[0] = (char )filetype_letter[f->filetype];
    memset((void *)(modebuf + 1), '?', 10UL);
    modebuf[11] = (char )'\000';
  }
  if (! any_has_acl) {
    modebuf[10] = (char )'\000';
  } else {
    if ((unsigned int const   )f->acl_type == 1U) {
      modebuf[10] = (char )'.';
    } else {
      if ((unsigned int const   )f->acl_type == 2U) {
        modebuf[10] = (char )'+';
      } else {

      }
    }
  }
  switch ((int )time_type) {
  case 1: 
  when_timespec = get_stat_ctime(& f->stat);
  break;
  case 0: 
  when_timespec = get_stat_mtime(& f->stat);
  break;
  case 2: 
  when_timespec = get_stat_atime(& f->stat);
  break;
  default: 
  abort();
  }
  p = buf;
  if (print_inode) {
    tmp = format_inode(hbuf, sizeof(hbuf), f);
    sprintf((char */* __restrict  */)p, (char const   */* __restrict  */)"%*s ", inode_number_width, tmp);
    tmp___0 = strlen((char const   *)p);
    p += tmp___0;
  } else {

  }
  if (print_block_size) {
    if (! f->stat_ok) {
      tmp___2 = "?";
    } else {
      tmp___1 = human_readable((unsigned long )f->stat.st_blocks, hbuf___0, human_output_opts, 512UL, output_block_size);
      tmp___2 = (char const   *)tmp___1;
    }
    blocks = tmp___2;
    tmp___3 = gnu_mbswidth(blocks, 0);
    pad = block_size_width - tmp___3;
    while (0 < pad) {
      tmp___4 = p;
      p ++;
      *tmp___4 = (char )' ';
      pad --;
    }
    while (1) {
      tmp___5 = p;
      p ++;
      tmp___7 = blocks;
      blocks ++;
      tmp___6 = (char )*tmp___7;
      *tmp___5 = tmp___6;
      if (! tmp___6) {
        break;
      } else {

      }
      continue;
    }
    *(p + -1) = (char )' ';
  } else {

  }
  if (! f->stat_ok) {
    tmp___9 = "?";
  } else {
    tmp___8 = umaxtostr((unsigned long )f->stat.st_nlink, hbuf___1);
    tmp___9 = (char const   *)tmp___8;
  }
  sprintf((char */* __restrict  */)p, (char const   */* __restrict  */)"%s %*s ", modebuf, nlink_width, tmp___9);
  tmp___10 = strlen((char const   *)p);
  p += tmp___10;
  while (1) {
    if (dired) {
      while (1) {
        fputs_unlocked((char const   */* __restrict  */)"  ", (FILE */* __restrict  */)stdout);
        dired_pos += sizeof("  ") - 1UL;
        break;
      }
    } else {

    }
    break;
  }
  if (print_owner) {
    goto _L;
  } else {
    if (print_group) {
      goto _L;
    } else {
      if (print_author) {
        goto _L;
      } else {
        if (print_scontext) {
          _L: 
          while (1) {
            fputs_unlocked((char const   */* __restrict  */)(buf), (FILE */* __restrict  */)stdout);
            dired_pos += (unsigned long )(p - buf);
            break;
          }
          if (print_owner) {
            format_user((unsigned int )f->stat.st_uid, owner_width, (_Bool )f->stat_ok);
          } else {

          }
          if (print_group) {
            format_group((unsigned int )f->stat.st_gid, group_width, (_Bool )f->stat_ok);
          } else {

          }
          if (print_author) {
            format_user((unsigned int )f->stat.st_uid, author_width, (_Bool )f->stat_ok);
          } else {

          }
          if (print_scontext) {
            format_user_or_group((char const   *)f->scontext, 0UL, scontext_width);
          } else {

          }
          p = buf;
        } else {

        }
      }
    }
  }
  if (f->stat_ok) {
    if ((f->stat.st_mode & 61440U) == 8192U) {
      goto _L___1;
    } else {
      if ((f->stat.st_mode & 61440U) == 24576U) {
        _L___1: 
        blanks_width = file_size_width - ((major_device_number_width + 2) + minor_device_number_width);
        tmp___11 = gnu_dev_minor((unsigned long long )f->stat.st_rdev);
        tmp___12 = umaxtostr((unsigned long )tmp___11, minorbuf);
        tmp___13 = gnu_dev_major((unsigned long long )f->stat.st_rdev);
        tmp___14 = umaxtostr((unsigned long )tmp___13, majorbuf);
        if (0 > blanks_width) {
          tmp___15 = 0;
        } else {
          tmp___15 = blanks_width;
        }
        sprintf((char */* __restrict  */)p, (char const   */* __restrict  */)"%*s, %*s ", major_device_number_width + tmp___15, tmp___14, minor_device_number_width, tmp___12);
        p += file_size_width + 1;
      } else {
        goto _L___0;
      }
    }
  } else {
    _L___0: 
    if (! f->stat_ok) {
      tmp___18 = "?";
    } else {
      tmp___16 = unsigned_file_size((long )f->stat.st_size);
      tmp___17 = human_readable(tmp___16, hbuf___2, file_human_output_opts, 1UL, file_output_block_size);
      tmp___18 = (char const   *)tmp___17;
    }
    size = tmp___18;
    tmp___19 = gnu_mbswidth(size, 0);
    pad___0 = file_size_width - tmp___19;
    while (0 < pad___0) {
      tmp___20 = p;
      p ++;
      *tmp___20 = (char )' ';
      pad___0 --;
    }
    while (1) {
      tmp___21 = p;
      p ++;
      tmp___23 = size;
      size ++;
      tmp___22 = (char )*tmp___23;
      *tmp___21 = tmp___22;
      if (! tmp___22) {
        break;
      } else {

      }
      continue;
    }
    *(p + -1) = (char )' ';
  }
  when_local = localtime((time_t const   *)(& when_timespec.tv_sec));
  s = 0UL;
  *p = (char )'\001';
  if (f->stat_ok) {
    if (when_local) {
      tmp___24 = timespec_cmp(current_time, when_timespec);
      if (tmp___24 < 0) {
        gettime(& current_time);
      } else {

      }
      six_months_ago.tv_sec = current_time.tv_sec - 15778476L;
      six_months_ago.tv_nsec = current_time.tv_nsec;
      tmp___25 = timespec_cmp(six_months_ago, when_timespec);
      if (tmp___25 < 0) {
        tmp___26 = timespec_cmp(when_timespec, current_time);
        if (tmp___26 < 0) {
          tmp___27 = 1;
        } else {
          tmp___27 = 0;
        }
      } else {
        tmp___27 = 0;
      }
      recent = (_Bool )tmp___27;
      fmt = long_time_format[recent];
      s = align_nstrftime(p, 1001UL, fmt, (struct tm  const  *)when_local, 0, (int )when_timespec.tv_nsec);
    } else {

    }
  } else {

  }
  if (s) {
    p += s;
    tmp___28 = p;
    p ++;
    *tmp___28 = (char )' ';
    *p = (char )'\000';
  } else {
    if (! *p) {
      p += s;
      tmp___28 = p;
      p ++;
      *tmp___28 = (char )' ';
      *p = (char )'\000';
    } else {
      if (! f->stat_ok) {
        tmp___30 = "?";
      } else {
        tmp___29 = timetostr(when_timespec.tv_sec, hbuf___3);
        tmp___30 = (char const   *)tmp___29;
      }
      tmp___31 = long_time_expected_width();
      sprintf((char */* __restrict  */)p, (char const   */* __restrict  */)"%*s ", tmp___31, tmp___30);
      tmp___32 = strlen((char const   *)p);
      p += tmp___32;
    }
  }
  while (1) {
    fputs_unlocked((char const   */* __restrict  */)(buf), (FILE */* __restrict  */)stdout);
    dired_pos += (unsigned long )(p - buf);
    break;
  }
  tmp___33 = print_name_with_quoting(f, (_Bool)0, & dired_obstack, (unsigned long )(p - buf));
  w = tmp___33;
  if ((unsigned int const   )f->filetype == 6U) {
    if (f->linkname) {
      while (1) {
        fputs_unlocked((char const   */* __restrict  */)" -> ", (FILE */* __restrict  */)stdout);
        dired_pos += sizeof(" -> ") - 1UL;
        break;
      }
      print_name_with_quoting(f, (_Bool)1, (struct obstack *)((void *)0), ((unsigned long )(p - buf) + w) + 4UL);
      if ((unsigned int )indicator_style != 0U) {
        print_type_indicator((_Bool)1, (unsigned int )f->linkmode, (enum filetype )0);
      } else {

      }
    } else {

    }
  } else {
    if ((unsigned int )indicator_style != 0U) {
      print_type_indicator((_Bool )f->stat_ok, (unsigned int )f->stat.st_mode, (enum filetype )f->filetype);
    } else {

    }
  }
  return;
}
}
static size_t quote_name(FILE *out , char const   *name , struct quoting_options  const  *options , size_t *width___0 ) 
{ char smallbuf[8192] ;
  size_t len ;
  size_t tmp ;
  char *buf ;
  size_t displayed_width ;
  void *tmp___0 ;
  char const   *p ;
  char const   *plimit ;
  char *q ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  mbstate_t mbstate ;
  wchar_t wc ;
  size_t bytes ;
  int w ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int tmp___8 ;
  char *p___0 ;
  char const   *plimit___0 ;
  unsigned short const   **tmp___9 ;
  unsigned char tmp___10 ;
  size_t tmp___11 ;
  int tmp___12 ;
  char const   *p___1 ;
  char const   *plimit___1 ;
  unsigned short const   **tmp___13 ;
  unsigned char tmp___14 ;
  size_t tmp___15 ;

  {
  tmp = quotearg_buffer(smallbuf, sizeof(smallbuf), name, 4294967295UL, options);
  len = tmp;
  displayed_width = 0UL;
  if (len < sizeof(smallbuf)) {
    buf = smallbuf;
  } else {
    tmp___0 = __builtin_alloca(len + 1UL);
    buf = (char *)tmp___0;
    quotearg_buffer(buf, len + 1UL, name, 4294967295UL, options);
  }
  if (qmark_funny_chars) {
    tmp___11 = __ctype_get_mb_cur_max();
    if (tmp___11 > 1UL) {
      p = (char const   *)buf;
      plimit = (char const   *)(buf + len);
      q = buf;
      displayed_width = 0UL;
      while ((unsigned long )p < (unsigned long )plimit) {
        switch ((int )*p) {
        case 32: 
        case 33: 
        case 34: 
        case 35: 
        case 37: 
        case 38: 
        case 39: 
        case 40: 
        case 41: 
        case 42: 
        case 43: 
        case 44: 
        case 45: 
        case 46: 
        case 47: 
        case 48: 
        case 49: 
        case 50: 
        case 51: 
        case 52: 
        case 53: 
        case 54: 
        case 55: 
        case 56: 
        case 57: 
        case 58: 
        case 59: 
        case 60: 
        case 61: 
        case 62: 
        case 63: 
        case 65: 
        case 66: 
        case 67: 
        case 68: 
        case 69: 
        case 70: 
        case 71: 
        case 72: 
        case 73: 
        case 74: 
        case 75: 
        case 76: 
        case 77: 
        case 78: 
        case 79: 
        case 80: 
        case 81: 
        case 82: 
        case 83: 
        case 84: 
        case 85: 
        case 86: 
        case 87: 
        case 88: 
        case 89: 
        case 90: 
        case 91: 
        case 92: 
        case 93: 
        case 94: 
        case 95: 
        case 97: 
        case 98: 
        case 99: 
        case 100: 
        case 101: 
        case 102: 
        case 103: 
        case 104: 
        case 105: 
        case 106: 
        case 107: 
        case 108: 
        case 109: 
        case 110: 
        case 111: 
        case 112: 
        case 113: 
        case 114: 
        case 115: 
        case 116: 
        case 117: 
        case 118: 
        case 119: 
        case 120: 
        case 121: 
        case 122: 
        case 123: 
        case 124: 
        case 125: 
        case 126: 
        tmp___1 = q;
        q ++;
        tmp___2 = p;
        p ++;
        *tmp___1 = (char )*tmp___2;
        displayed_width ++;
        break;
        default: 
        mbstate.__count = 0;
        mbstate.__value.__wch = 0U;
        while (1) {
          bytes = mbrtowc((wchar_t */* __restrict  */)(& wc), (char const   */* __restrict  */)p, (unsigned long )(plimit - p), (mbstate_t */* __restrict  */)(& mbstate));
          if (bytes == 4294967295UL) {
            p ++;
            tmp___3 = q;
            q ++;
            *tmp___3 = (char )'?';
            displayed_width ++;
            break;
          } else {

          }
          if (bytes == 4294967294UL) {
            p = plimit;
            tmp___4 = q;
            q ++;
            *tmp___4 = (char )'?';
            displayed_width ++;
            break;
          } else {

          }
          if (bytes == 0UL) {
            bytes = 1UL;
          } else {

          }
          w = wcwidth(wc);
          if (w >= 0) {
            while (bytes > 0UL) {
              tmp___5 = q;
              q ++;
              tmp___6 = p;
              p ++;
              *tmp___5 = (char )*tmp___6;
              bytes --;
            }
            displayed_width += (unsigned long )w;
          } else {
            p += bytes;
            tmp___7 = q;
            q ++;
            *tmp___7 = (char )'?';
            displayed_width ++;
          }
          tmp___8 = mbsinit((mbstate_t const   *)(& mbstate));
          if (tmp___8) {
            break;
          } else {

          }
        }
        break;
        }
      }
      len = (unsigned long )(q - buf);
    } else {
      p___0 = buf;
      plimit___0 = (char const   *)(buf + len);
      while ((unsigned long )p___0 < (unsigned long )plimit___0) {
        tmp___9 = __ctype_b_loc();
        tmp___10 = to_uchar(*p___0);
        if (! ((int const   )*(*tmp___9 + (int )tmp___10) & 16384)) {
          *p___0 = (char )'?';
        } else {

        }
        p___0 ++;
      }
      displayed_width = len;
    }
  } else {
    if ((unsigned long )width___0 != (unsigned long )((void *)0)) {
      tmp___15 = __ctype_get_mb_cur_max();
      if (tmp___15 > 1UL) {
        tmp___12 = mbsnwidth((char const   *)buf, len, 0);
        displayed_width = (unsigned long )tmp___12;
      } else {
        p___1 = (char const   *)buf;
        plimit___1 = (char const   *)(buf + len);
        displayed_width = 0UL;
        while ((unsigned long )p___1 < (unsigned long )plimit___1) {
          tmp___13 = __ctype_b_loc();
          tmp___14 = to_uchar((char )*p___1);
          if ((int const   )*(*tmp___13 + (int )tmp___14) & 16384) {
            displayed_width ++;
          } else {

          }
          p___1 ++;
        }
      }
    } else {

    }
  }
  if ((unsigned long )out != (unsigned long )((void *)0)) {
    fwrite_unlocked((void const   */* __restrict  */)buf, 1UL, len, (FILE */* __restrict  */)out);
  } else {

  }
  if ((unsigned long )width___0 != (unsigned long )((void *)0)) {
    *width___0 = displayed_width;
  } else {

  }
  return (len);
}
}
static size_t print_name_with_quoting(struct fileinfo  const  *f , _Bool symlink_target , struct obstack *stack , size_t start_col ) 
{ char const   *name ;
  char *tmp ;
  _Bool used_color_this_time ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  int tmp___2 ;
  struct obstack *__o ;
  int __len ;
  size_t width___0 ;
  size_t tmp___3 ;
  struct obstack *__o___0 ;
  int __len___0 ;

  {
  if (symlink_target) {
    tmp = (char *)f->linkname;
  } else {
    tmp = (char *)f->name;
  }
  name = (char const   *)tmp;
  if (print_with_color) {
    tmp___0 = print_color_indicator(f, symlink_target);
    if (tmp___0) {
      tmp___2 = 1;
    } else {
      tmp___1 = is_colored((enum indicator_no )4);
      if (tmp___1) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    }
  } else {
    tmp___2 = 0;
  }
  used_color_this_time = (_Bool )tmp___2;
  if (stack) {
    while (1) {
      if (dired) {
        __o = stack;
        __len = (int )sizeof(dired_pos);
        if ((unsigned long )(__o->next_free + __len) > (unsigned long )__o->chunk_limit) {
          _obstack_newchunk(__o, __len);
        } else {

        }
        memcpy((void */* __restrict  */)__o->next_free, (void const   */* __restrict  */)(& dired_pos), (unsigned long )__len);
        __o->next_free += __len;
      } else {

      }
      break;
    }
  } else {

  }
  tmp___3 = quote_name(stdout, name, (struct quoting_options  const  *)filename_quoting_options, (size_t *)((void *)0));
  width___0 = tmp___3;
  dired_pos += width___0;
  if (stack) {
    while (1) {
      if (dired) {
        __o___0 = stack;
        __len___0 = (int )sizeof(dired_pos);
        if ((unsigned long )(__o___0->next_free + __len___0) > (unsigned long )__o___0->chunk_limit) {
          _obstack_newchunk(__o___0, __len___0);
        } else {

        }
        memcpy((void */* __restrict  */)__o___0->next_free, (void const   */* __restrict  */)(& dired_pos), (unsigned long )__len___0);
        __o___0->next_free += __len___0;
      } else {

      }
      break;
    }
  } else {

  }
  process_signals();
  if (used_color_this_time) {
    prep_non_filename_text();
    if (start_col / line_length != ((start_col + width___0) - 1UL) / line_length) {
      put_indicator((struct bin_str  const  *)(& color_indicator[23]));
    } else {

    }
  } else {

  }
  return (width___0);
}
}
static void prep_non_filename_text(void) 
{ 

  {
  if ((unsigned long )color_indicator[2].string != (unsigned long )((void *)0)) {
    put_indicator((struct bin_str  const  *)(& color_indicator[2]));
  } else {
    put_indicator((struct bin_str  const  *)(& color_indicator[0]));
    put_indicator((struct bin_str  const  *)(& color_indicator[3]));
    put_indicator((struct bin_str  const  *)(& color_indicator[1]));
  }
  return;
}
}
static size_t print_file_name_and_frills(struct fileinfo  const  *f , size_t start_col ) 
{ char buf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  size_t width___0 ;
  size_t tmp___5 ;
  _Bool tmp___6 ;

  {
  set_normal_color();
  if (print_inode) {
    tmp = format_inode(buf, sizeof(buf), f);
    if ((unsigned int )format == 4U) {
      tmp___0 = 0;
    } else {
      tmp___0 = inode_number_width;
    }
    printf((char const   */* __restrict  */)"%*s ", tmp___0, tmp);
  } else {

  }
  if (print_block_size) {
    if (! f->stat_ok) {
      tmp___2 = "?";
    } else {
      tmp___1 = human_readable((unsigned long )f->stat.st_blocks, buf, human_output_opts, 512UL, output_block_size);
      tmp___2 = (char const   *)tmp___1;
    }
    if ((unsigned int )format == 4U) {
      tmp___3 = 0;
    } else {
      tmp___3 = block_size_width;
    }
    printf((char const   */* __restrict  */)"%*s ", tmp___3, tmp___2);
  } else {

  }
  if (print_scontext) {
    if ((unsigned int )format == 4U) {
      tmp___4 = 0;
    } else {
      tmp___4 = scontext_width;
    }
    printf((char const   */* __restrict  */)"%*s ", tmp___4, f->scontext);
  } else {

  }
  tmp___5 = print_name_with_quoting(f, (_Bool)0, (struct obstack *)((void *)0), start_col);
  width___0 = tmp___5;
  if ((unsigned int )indicator_style != 0U) {
    tmp___6 = print_type_indicator((_Bool )f->stat_ok, (unsigned int )f->stat.st_mode, (enum filetype )f->filetype);
    width___0 += (unsigned long )tmp___6;
  } else {

  }
  return (width___0);
}
}
static char get_type_indicator(_Bool stat_ok , mode_t mode , enum filetype type ) 
{ char c ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  if (stat_ok) {
    tmp___4 = (mode & 61440U) == 32768U;
  } else {
    tmp___4 = (unsigned int )type == 5U;
  }
  if (tmp___4) {
    if (stat_ok) {
      if ((unsigned int )indicator_style == 3U) {
        if (mode & (unsigned int )((64 | (64 >> 3)) | ((64 >> 3) >> 3))) {
          c = (char )'*';
        } else {
          c = (char)0;
        }
      } else {
        c = (char)0;
      }
    } else {
      c = (char)0;
    }
  } else {
    if (stat_ok) {
      tmp___3 = (mode & 61440U) == 16384U;
    } else {
      if ((unsigned int )type == 3U) {
        tmp___2 = 1;
      } else {
        if ((unsigned int )type == 9U) {
          tmp___2 = 1;
        } else {
          tmp___2 = 0;
        }
      }
      tmp___3 = tmp___2;
    }
    if (tmp___3) {
      c = (char )'/';
    } else {
      if ((unsigned int )indicator_style == 1U) {
        c = (char)0;
      } else {
        if (stat_ok) {
          tmp___1 = (mode & 61440U) == 40960U;
        } else {
          tmp___1 = (unsigned int )type == 6U;
        }
        if (tmp___1) {
          c = (char )'@';
        } else {
          if (stat_ok) {
            tmp___0 = (mode & 61440U) == 4096U;
          } else {
            tmp___0 = (unsigned int )type == 1U;
          }
          if (tmp___0) {
            c = (char )'|';
          } else {
            if (stat_ok) {
              tmp = (mode & 61440U) == 49152U;
            } else {
              tmp = (unsigned int )type == 7U;
            }
            if (tmp) {
              c = (char )'=';
            } else {
              if (stat_ok) {
                c = (char)0;
              } else {
                c = (char)0;
              }
            }
          }
        }
      }
    }
  }
  return (c);
}
}
static _Bool print_type_indicator(_Bool stat_ok , mode_t mode , enum filetype type ) 
{ char c ;
  char tmp ;

  {
  tmp = get_type_indicator(stat_ok, mode, type);
  c = tmp;
  if (c) {
    while (1) {
      putchar_unlocked((int )c);
      dired_pos ++;
      break;
    }
  } else {

  }
  return ((_Bool )(! (! c)));
}
}
static enum indicator_no filetype_indicator[10]  = 
  {      (enum indicator_no )13,      (enum indicator_no )8,      (enum indicator_no )11,      (enum indicator_no )6, 
        (enum indicator_no )10,      (enum indicator_no )5,      (enum indicator_no )7,      (enum indicator_no )9, 
        (enum indicator_no )5,      (enum indicator_no )6};
static _Bool print_color_indicator(struct fileinfo  const  *f , _Bool symlink_target ) 
{ enum indicator_no type ;
  struct color_ext_type *ext ;
  size_t len ;
  char const   *name ;
  mode_t mode ;
  int linkok ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;
  _Bool tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;
  _Bool tmp___6 ;
  int tmp___7 ;
  struct bin_str  const  *s ;
  struct bin_str *tmp___8 ;
  _Bool tmp___9 ;

  {
  if (symlink_target) {
    name = (char const   *)f->linkname;
    mode = (unsigned int )f->linkmode;
    if (f->linkok) {
      linkok = 0;
    } else {
      linkok = -1;
    }
  } else {
    name = (char const   *)f->name;
    if (color_symlink_as_referent) {
      if (f->linkok) {
        mode = (unsigned int )f->linkmode;
      } else {
        mode = (unsigned int )f->stat.st_mode;
      }
    } else {
      mode = (unsigned int )f->stat.st_mode;
    }
    linkok = (int )f->linkok;
  }
  if (linkok == -1) {
    if ((unsigned long )color_indicator[12].string != (unsigned long )((void *)0)) {
      type = (enum indicator_no )12;
    } else {
      goto _L___6;
    }
  } else {
    _L___6: 
    if (! f->stat_ok) {
      type = filetype_indicator[f->filetype];
    } else {
      if ((mode & 61440U) == 32768U) {
        type = (enum indicator_no )5;
        if ((mode & 2048U) != 0U) {
          tmp___3 = is_colored((enum indicator_no )16);
          if (tmp___3) {
            type = (enum indicator_no )16;
          } else {
            goto _L___2;
          }
        } else {
          _L___2: 
          if ((mode & 1024U) != 0U) {
            tmp___2 = is_colored((enum indicator_no )17);
            if (tmp___2) {
              type = (enum indicator_no )17;
            } else {
              goto _L___1;
            }
          } else {
            _L___1: 
            tmp___1 = is_colored((enum indicator_no )21);
            if (tmp___1) {
              if (f->has_capability) {
                type = (enum indicator_no )21;
              } else {
                goto _L___0;
              }
            } else {
              _L___0: 
              if ((mode & (unsigned int )((64 | (64 >> 3)) | ((64 >> 3) >> 3))) != 0U) {
                tmp___0 = is_colored((enum indicator_no )14);
                if (tmp___0) {
                  type = (enum indicator_no )14;
                } else {
                  goto _L;
                }
              } else {
                _L: 
                if (1UL < (unsigned long )f->stat.st_nlink) {
                  tmp = is_colored((enum indicator_no )22);
                  if (tmp) {
                    type = (enum indicator_no )22;
                  } else {

                  }
                } else {

                }
              }
            }
          }
        }
      } else {
        if ((mode & 61440U) == 16384U) {
          type = (enum indicator_no )6;
          if (mode & 512U) {
            if (mode & (unsigned int )((128 >> 3) >> 3)) {
              tmp___6 = is_colored((enum indicator_no )20);
              if (tmp___6) {
                type = (enum indicator_no )20;
              } else {
                goto _L___5;
              }
            } else {
              goto _L___5;
            }
          } else {
            _L___5: 
            if ((mode & (unsigned int )((128 >> 3) >> 3)) != 0U) {
              tmp___5 = is_colored((enum indicator_no )19);
              if (tmp___5) {
                type = (enum indicator_no )19;
              } else {
                goto _L___3;
              }
            } else {
              _L___3: 
              if ((mode & 512U) != 0U) {
                tmp___4 = is_colored((enum indicator_no )18);
                if (tmp___4) {
                  type = (enum indicator_no )18;
                } else {

                }
              } else {

              }
            }
          }
        } else {
          if ((mode & 61440U) == 40960U) {
            type = (enum indicator_no )7;
          } else {
            if ((mode & 61440U) == 4096U) {
              type = (enum indicator_no )8;
            } else {
              if ((mode & 61440U) == 49152U) {
                type = (enum indicator_no )9;
              } else {
                if ((mode & 61440U) == 24576U) {
                  type = (enum indicator_no )10;
                } else {
                  if ((mode & 61440U) == 8192U) {
                    type = (enum indicator_no )11;
                  } else {
                    type = (enum indicator_no )13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ext = (struct color_ext_type *)((void *)0);
  if ((unsigned int )type == 5U) {
    len = strlen(name);
    name += len;
    ext = color_ext_list;
    while ((unsigned long )ext != (unsigned long )((void *)0)) {
      if (ext->ext.len <= len) {
        tmp___7 = strncmp(name - ext->ext.len, ext->ext.string, ext->ext.len);
        if (tmp___7 == 0) {
          break;
        } else {

        }
      } else {

      }
      ext = ext->next;
    }
  } else {

  }
  __repair_del_2959__6: /* CIL Label */ 
  {

  }
  if (ext) {
    tmp___8 = & ext->seq;
  } else {
    tmp___8 = & color_indicator[type];
  }
  s = (struct bin_str  const  *)tmp___8;
  if ((unsigned long )s->string != (unsigned long )((void *)0)) {
    tmp___9 = is_colored((enum indicator_no )4);
    if (tmp___9) {
      restore_default_color();
    } else {

    }
    put_indicator((struct bin_str  const  *)(& color_indicator[0]));
    put_indicator(s);
    put_indicator((struct bin_str  const  *)(& color_indicator[1]));
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static void put_indicator(struct bin_str  const  *ind ) 
{ 

  {
  if (! used_color) {
    used_color = (_Bool)1;
    prep_non_filename_text();
  } else {

  }
  fwrite_unlocked((void const   */* __restrict  */)ind->string, (unsigned long )ind->len, 1UL, (FILE */* __restrict  */)stdout);
  return;
}
}
static size_t length_of_file_name_and_frills(struct fileinfo  const  *f ) 
{ size_t len ;
  size_t name_width ;
  char buf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  char c ;
  char tmp___8 ;

  {
  len = 0UL;
  if (print_inode) {
    if ((unsigned int )format == 4U) {
      tmp = umaxtostr((unsigned long )f->stat.st_ino, buf);
      tmp___0 = strlen((char const   *)tmp);
      tmp___1 = tmp___0;
    } else {
      tmp___1 = (unsigned long )inode_number_width;
    }
    len += 1UL + tmp___1;
  } else {

  }
  if (print_block_size) {
    if ((unsigned int )format == 4U) {
      if (! f->stat_ok) {
        tmp___3 = "?";
      } else {
        tmp___2 = human_readable((unsigned long )f->stat.st_blocks, buf, human_output_opts, 512UL, output_block_size);
        tmp___3 = (char const   *)tmp___2;
      }
      tmp___4 = strlen(tmp___3);
      tmp___5 = tmp___4;
    } else {
      tmp___5 = (unsigned long )block_size_width;
    }
    len += 1UL + tmp___5;
  } else {

  }
  if (print_scontext) {
    if ((unsigned int )format == 4U) {
      tmp___6 = strlen((char const   *)f->scontext);
      tmp___7 = tmp___6;
    } else {
      tmp___7 = (unsigned long )scontext_width;
    }
    len += 1UL + tmp___7;
  } else {

  }
  quote_name((FILE *)((void *)0), (char const   *)f->name, (struct quoting_options  const  *)filename_quoting_options, & name_width);
  len += name_width;
  if ((unsigned int )indicator_style != 0U) {
    tmp___8 = get_type_indicator((_Bool )f->stat_ok, (unsigned int )f->stat.st_mode, (enum filetype )f->filetype);
    c = tmp___8;
    len += (unsigned long )((int )c != 0);
  } else {

  }
  return (len);
}
}
static void print_many_per_line(void) 
{ size_t row ;
  size_t cols ;
  size_t tmp ;
  struct column_info  const  *line_fmt ;
  size_t rows ;
  size_t col ;
  size_t filesno ;
  size_t pos ;
  struct fileinfo  const  *f ;
  size_t name_length ;
  size_t tmp___0 ;
  size_t max_name_length ;
  size_t tmp___1 ;

  {
  tmp = calculate_columns((_Bool)1);
  cols = tmp;
  line_fmt = (struct column_info  const  *)(column_info + (cols - 1UL));
  rows = cwd_n_used / cols + (unsigned long )(cwd_n_used % cols != 0UL);
  row = 0UL;
  while (row < rows) {
    col = 0UL;
    filesno = row;
    pos = 0UL;
    while (1) {
      f = (struct fileinfo  const  *)*(sorted_file + filesno);
      tmp___0 = length_of_file_name_and_frills(f);
      name_length = tmp___0;
      tmp___1 = col;
      col ++;
      max_name_length = *(line_fmt->col_arr + tmp___1);
      print_file_name_and_frills(f, pos);
      filesno += rows;
      if (filesno >= cwd_n_used) {
        break;
      } else {

      }
      indent(pos + name_length, pos + max_name_length);
      pos += max_name_length;
    }
    putchar_unlocked('\n');
    row ++;
  }
  return;
}
}
static void print_horizontal(void) 
{ size_t filesno ;
  size_t pos ;
  size_t cols ;
  size_t tmp ;
  struct column_info  const  *line_fmt ;
  struct fileinfo  const  *f ;
  size_t name_length ;
  size_t tmp___0 ;
  size_t max_name_length ;
  size_t col ;

  {
  pos = 0UL;
  tmp = calculate_columns((_Bool)0);
  cols = tmp;
  line_fmt = (struct column_info  const  *)(column_info + (cols - 1UL));
  f = (struct fileinfo  const  *)*(sorted_file + 0);
  tmp___0 = length_of_file_name_and_frills(f);
  name_length = tmp___0;
  max_name_length = *(line_fmt->col_arr + 0);
  print_file_name_and_frills(f, 0UL);
  filesno = 1UL;
  while (filesno < cwd_n_used) {
    col = filesno % cols;
    if (col == 0UL) {
      putchar_unlocked('\n');
      pos = 0UL;
    } else {
      indent(pos + name_length, pos + max_name_length);
      pos += max_name_length;
    }
    f = (struct fileinfo  const  *)*(sorted_file + filesno);
    print_file_name_and_frills(f, pos);
    name_length = length_of_file_name_and_frills(f);
    max_name_length = *(line_fmt->col_arr + col);
    filesno ++;
  }
  putchar_unlocked('\n');
  return;
}
}
static void print_with_commas(void) 
{ size_t filesno ;
  size_t pos ;
  struct fileinfo  const  *f ;
  size_t len ;
  size_t tmp ;
  char separator ;

  {
  pos = 0UL;
  filesno = 0UL;
  while (filesno < cwd_n_used) {
    f = (struct fileinfo  const  *)*(sorted_file + filesno);
    tmp = length_of_file_name_and_frills(f);
    len = tmp;
    if (filesno != 0UL) {
      if ((pos + len) + 2UL < line_length) {
        pos += 2UL;
        separator = (char )' ';
      } else {
        pos = 0UL;
        separator = (char )'\n';
      }
      putchar_unlocked(',');
      putchar_unlocked((int )separator);
    } else {

    }
    print_file_name_and_frills(f, pos);
    pos += len;
    filesno ++;
  }
  putchar_unlocked('\n');
  return;
}
}
static void indent(size_t from , size_t to ) 
{ 

  {
  while (from < to) {
    if (tabsize != 0UL) {
      if (to / tabsize > (from + 1UL) / tabsize) {
        putchar_unlocked('\t');
        from += tabsize - from % tabsize;
      } else {
        putchar_unlocked(' ');
        from ++;
      }
    } else {
      putchar_unlocked(' ');
      from ++;
    }
  }
  return;
}
}
static void attach(char *dest , char const   *dirname , char const   *name ) 
{ char const   *dirnamep ;
  char *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;

  {
  dirnamep = dirname;
  if ((int const   )*(dirname + 0) != 46) {
    goto _L;
  } else {
    if ((int const   )*(dirname + 1) != 0) {
      _L: 
      while (*dirnamep) {
        tmp = dest;
        dest ++;
        tmp___0 = dirnamep;
        dirnamep ++;
        *tmp = (char )*tmp___0;
      }
      if ((unsigned long )dirnamep > (unsigned long )dirname) {
        if ((int const   )*(dirnamep + -1) != 47) {
          tmp___1 = dest;
          dest ++;
          *tmp___1 = (char )'/';
        } else {

        }
      } else {

      }
    } else {

    }
  }
  while (*name) {
    tmp___2 = dest;
    dest ++;
    tmp___3 = name;
    name ++;
    *tmp___2 = (char )*tmp___3;
  }
  *dest = (char)0;
  return;
}
}
static size_t column_info_alloc  ;
static void init_column_info(void) 
{ size_t i ;
  size_t max_cols ;
  size_t tmp ;
  size_t new_column_info_alloc ;
  size_t *p ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t column_info_growth ;
  size_t s ;
  size_t t ;
  void *tmp___2 ;
  size_t j ;

  {
  if (max_idx < cwd_n_used) {
    tmp = max_idx;
  } else {
    tmp = cwd_n_used;
  }
  max_cols = tmp;
  if (column_info_alloc < max_cols) {
    if (max_cols < max_idx / 2UL) {
      tmp___0 = xnrealloc((void *)column_info, max_cols, 2UL * sizeof(*column_info));
      column_info = (struct column_info *)tmp___0;
      new_column_info_alloc = 2UL * max_cols;
    } else {
      tmp___1 = xnrealloc((void *)column_info, max_idx, sizeof(*column_info));
      column_info = (struct column_info *)tmp___1;
      new_column_info_alloc = max_idx;
    }
    column_info_growth = new_column_info_alloc - column_info_alloc;
    s = (column_info_alloc + 1UL) + new_column_info_alloc;
    t = s * column_info_growth;
    if (s < new_column_info_alloc) {
      xalloc_die();
    } else {
      if (t / column_info_growth != s) {
        xalloc_die();
      } else {

      }
    }
    tmp___2 = xnmalloc(t / 2UL, sizeof(*p));
    p = (size_t *)tmp___2;
    i = column_info_alloc;
    while (i < new_column_info_alloc) {
      (column_info + i)->col_arr = p;
      p += i + 1UL;
      i ++;
    }
    column_info_alloc = new_column_info_alloc;
  } else {

  }
  i = 0UL;
  while (i < max_cols) {
    (column_info + i)->valid_len = (_Bool)1;
    (column_info + i)->line_len = (i + 1UL) * 3UL;
    j = 0UL;
    while (j <= i) {
      *((column_info + i)->col_arr + j) = 3UL;
      j ++;
    }
    i ++;
  }
  return;
}
}
static size_t calculate_columns(_Bool by_columns ) 
{ size_t filesno ;
  size_t cols ;
  size_t max_cols ;
  size_t tmp ;
  struct fileinfo  const  *f ;
  size_t name_length ;
  size_t tmp___0 ;
  size_t i ;
  size_t idx ;
  size_t tmp___1 ;
  size_t real_length ;
  int tmp___2 ;

  {
  if (max_idx < cwd_n_used) {
    tmp = max_idx;
  } else {
    tmp = cwd_n_used;
  }
  max_cols = tmp;
  init_column_info();
  filesno = 0UL;
  while (filesno < cwd_n_used) {
    f = (struct fileinfo  const  *)*(sorted_file + filesno);
    tmp___0 = length_of_file_name_and_frills(f);
    name_length = tmp___0;
    i = 0UL;
    while (i < max_cols) {
      if ((column_info + i)->valid_len) {
        if (by_columns) {
          tmp___1 = filesno / ((cwd_n_used + i) / (i + 1UL));
        } else {
          tmp___1 = filesno % (i + 1UL);
        }
        idx = tmp___1;
        if (idx == i) {
          tmp___2 = 0;
        } else {
          tmp___2 = 2;
        }
        real_length = name_length + (unsigned long )tmp___2;
        if (*((column_info + i)->col_arr + idx) < real_length) {
          (column_info + i)->line_len += real_length - *((column_info + i)->col_arr + idx);
          *((column_info + i)->col_arr + idx) = real_length;
          (column_info + i)->valid_len = (_Bool )((column_info + i)->line_len < line_length);
        } else {

        }
      } else {

      }
      i ++;
    }
    filesno ++;
  }
  cols = max_cols;
  while (1UL < cols) {
    if ((column_info + (cols - 1UL))->valid_len) {
      break;
    } else {

    }
    cols --;
  }
  return (cols);
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
void usage(int status ) 
{ char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;

  {
  if (status != 0) {
    emit_try_help();
  } else {
    tmp = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf((char const   */* __restrict  */)tmp, program_name);
    tmp___0 = gettext("List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___0, (FILE */* __restrict  */)stdout);
    tmp___1 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("      --block-size=SIZE      scale sizes by SIZE before printing them.  E.g.,\n                               \'--block-size=M\' prints sizes in units of\n                               1,048,576 bytes.  See SIZE format below.\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime, newest first\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -C                         list entries by columns\n      --color[=WHEN]         colorize the output.  WHEN defaults to \'always\'\n                               or can be \'never\' or \'auto\'.  More info below\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs\' dired mode\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append \'*\'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -g                         like -l, but do not list owner\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --group-directories-first\n                             group directories before files.\n                               augment with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("  -G, --no-group             in a long listing, don\'t print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___8, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k, --kibibytes            use 1024-byte blocks\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___10, (FILE */* __restrict  */)stdout);
    tmp___11 = gettext("  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___11, (FILE */* __restrict  */)stdout);
    tmp___12 = gettext("  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don\'t treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___12, (FILE */* __restrict  */)stdout);
    tmp___13 = gettext("  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is \'ls\' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___13, (FILE */* __restrict  */)stdout);
    tmp___14 = gettext("  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___14, (FILE */* __restrict  */)stdout);
    tmp___15 = gettext("  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___15, (FILE */* __restrict  */)stdout);
    tmp___16 = gettext("      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like \'date\'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with \'posix-\', STYLE\n                             takes effect only outside the POSIX locale\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___16, (FILE */* __restrict  */)stdout);
    tmp___17 = gettext("  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___17, (FILE */* __restrict  */)stdout);
    tmp___18 = gettext("  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___18, (FILE */* __restrict  */)stdout);
    tmp___19 = gettext("  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___19, (FILE */* __restrict  */)stdout);
    tmp___20 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___20, (FILE */* __restrict  */)stdout);
    tmp___21 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___21, (FILE */* __restrict  */)stdout);
    emit_size_note();
    tmp___22 = gettext("\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___22, (FILE */* __restrict  */)stdout);
    tmp___23 = gettext("\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___23, (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
  }
  exit(status);
}
}
