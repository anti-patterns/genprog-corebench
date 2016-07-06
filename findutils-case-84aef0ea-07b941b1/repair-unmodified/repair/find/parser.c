typedef int __int32_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;
typedef unsigned long size_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
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
struct stat64 {
   __dev_t st_dev ;
   __ino64_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int __pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __syscall_slong_t __glibc_reserved[3] ;
};
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list __gnuc_va_list;
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
typedef struct _IO_FILE _IO_FILE;
struct obstack;
struct obstack;
struct obstack;
typedef int wchar_t;
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
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int __gwchar_t;
typedef size_t __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_pattern_buffer {
   unsigned char *buffer ;
   __re_long_size_t allocated ;
   __re_long_size_t used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   unsigned char *translate ;
   size_t re_nsub ;
   unsigned int can_be_null : 1 ;
   unsigned int regs_allocated : 2 ;
   unsigned int fastmap_accurate : 1 ;
   unsigned int no_sub : 1 ;
   unsigned int not_bol : 1 ;
   unsigned int not_eol : 1 ;
   unsigned int newline_anchor : 1 ;
};
typedef _Bool boolean;
struct predicate;
struct predicate;
struct predicate;
struct options;
struct options;
struct options;
enum comparison_type {
    COMP_GT = 0,
    COMP_LT = 1,
    COMP_EQ = 2
} ;
enum permissions_type {
    PERM_AT_LEAST = 0,
    PERM_ANY = 1,
    PERM_EXACT = 2
} ;
enum predicate_type {
    NO_TYPE = 0,
    PRIMARY_TYPE = 1,
    UNI_OP = 2,
    BI_OP = 3,
    OPEN_PAREN = 4,
    CLOSE_PAREN = 5
} ;
enum predicate_precedence {
    NO_PREC = 0,
    COMMA_PREC = 1,
    OR_PREC = 2,
    AND_PREC = 3,
    NEGATE_PREC = 4,
    MAX_PREC = 5
} ;
struct long_val {
   enum comparison_type kind ;
   boolean negative ;
   uintmax_t l_val ;
};
struct perm_val {
   enum permissions_type kind ;
   mode_t val[2] ;
};
struct dir_id {
   ino_t ino ;
   dev_t dev ;
};
struct size_val {
   enum comparison_type kind ;
   int blocksize ;
   uintmax_t size ;
};
struct buildcmd_state {
   int cmd_argc ;
   char **cmd_argv ;
   int cmd_argv_alloc ;
   char *argbuf ;
   size_t cmd_argv_chars ;
   size_t cmd_initial_argv_chars ;
   void *usercontext ;
   int todo ;
};
struct buildcmd_control {
   int exit_if_size_exceeded ;
   size_t posix_arg_size_max ;
   size_t posix_arg_size_min ;
   size_t arg_max ;
   long max_arg_count ;
   size_t rplen ;
   char *replace_pat ;
   int initial_argc ;
   int (*exec_callback)(struct buildcmd_control  const  * , struct buildcmd_state * ) ;
   long lines_per_exec ;
   long args_per_exec ;
};
enum BC_INIT_STATUS {
    BC_INIT_OK = 0,
    BC_INIT_ENV_TOO_BIG = 1
} ;
struct exec_val {
   boolean multiple ;
   struct buildcmd_control ctl ;
   struct buildcmd_state state ;
   char **replace_vec ;
   int num_args ;
   boolean use_current_dir ;
   boolean close_stdin ;
};
struct segment {
   int kind ;
   char *text ;
   int text_len ;
   struct segment *next ;
};
struct quoting_options;
struct quoting_options;
struct format_val {
   struct segment *segment ;
   FILE *stream ;
   boolean dest_is_tty ;
   struct quoting_options *quote_opts ;
};
enum EvaluationCost {
    NeedsNothing = 0,
    NeedsType = 1,
    NeedsStatInfo = 2,
    NeedsLinkName = 3,
    NeedsAccessInfo = 4,
    NeedsSyncDiskHit = 5,
    NeedsEventualExec = 6,
    NeedsImmediateExec = 7,
    NeedsUserInteraction = 8,
    NeedsUnknown = 9,
    NumEvaluationCosts = 10
} ;
union __anonunion_args_32 {
   char *str ;
   struct re_pattern_buffer *regex ;
   struct exec_val exec_vec ;
   struct long_val info ;
   struct size_val size ;
   uid_t uid ;
   gid_t gid ;
   time_t time ;
   struct perm_val perm ;
   struct dir_id fileid ;
   mode_t type ;
   FILE *stream ;
   struct format_val printf_vec ;
};
struct parser_table;
struct parser_table;
struct predicate {
   boolean (*pred_func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
   char *p_name ;
   enum predicate_type p_type ;
   enum predicate_precedence p_prec ;
   boolean side_effects ;
   boolean no_default_print ;
   boolean need_stat ;
   boolean need_type ;
   enum EvaluationCost p_cost ;
   float est_success_rate ;
   boolean literal_control_chars ;
   boolean artificial ;
   char *arg_text ;
   union __anonunion_args_32 args ;
   struct predicate *pred_next ;
   struct predicate *pred_left ;
   struct predicate *pred_right ;
   struct parser_table  const  *parser_entry ;
};
enum SymlinkOption {
    SYMLINK_NEVER_DEREF = 0,
    SYMLINK_ALWAYS_DEREF = 1,
    SYMLINK_DEREF_ARGSONLY = 2
} ;
enum arg_type {
    ARG_OPTION = 0,
    ARG_NOOP = 1,
    ARG_POSITIONAL_OPTION = 2,
    ARG_TEST = 3,
    ARG_PUNCTUATION = 4,
    ARG_ACTION = 5
} ;
struct parser_table;
struct parser_table {
   enum arg_type type ;
   char *parser_name ;
   boolean (*parser_func)(struct parser_table  const  *p , char **argv , int *arg_ptr ) ;
   boolean (*pred_func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
};
struct options {
   boolean do_dir_first ;
   int maxdepth ;
   int mindepth ;
   boolean no_leaf_check ;
   boolean stay_on_filesystem ;
   boolean ignore_readdir_race ;
   boolean literal_control_chars ;
   boolean warnings ;
   time_t start_time ;
   time_t cur_day_start ;
   boolean full_days ;
   int output_block_size ;
   unsigned long debug_options ;
   enum SymlinkOption symlink_handling ;
   int (*xstat)(char const   *name , struct stat *statbuf ) ;
   boolean open_nofollow_available ;
   int regex_options ;
   unsigned short optimisation_level ;
};
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
};
struct mode_change;
struct mode_change;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
struct quoting_options;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_major(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_minor(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__leaf__, __gnu_inline__))  gnu_dev_makedev(unsigned int __major , unsigned int __minor )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_major(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
__inline extern unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_major(unsigned long long __dev ) 
{ 

  {
  return ((unsigned int __attribute__((__leaf__, __gnu_inline__))  )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_minor(unsigned long long __dev )  __attribute__((__leaf__, __const__)) ;
__inline extern unsigned int __attribute__((__leaf__, __gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
  return ((unsigned int __attribute__((__leaf__, __gnu_inline__))  )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__leaf__, __gnu_inline__))  gnu_dev_makedev(unsigned int __major , unsigned int __minor )  __attribute__((__leaf__, __const__)) ;
__inline extern unsigned long long __attribute__((__leaf__, __gnu_inline__))  gnu_dev_makedev(unsigned int __major , unsigned int __minor ) 
{ 

  {
  return ((unsigned long long __attribute__((__leaf__, __gnu_inline__))  )(((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32)));
}
}
extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat64(int __fd , struct stat64 *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes , struct stat *__stat_buf )  __attribute__((__nonnull__(3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes , char const   *__filename , struct stat *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstat64(int __ver , int __fildes , struct stat64 *__stat_buf )  __attribute__((__nonnull__(3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __lxstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstatat64(int __ver , int __fildes , char const   *__filename , struct stat64 *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xmknod(int __ver , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(2,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(3,5), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  fstat(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  tmp = __fxstat(1, __fd, __statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag ) 
{ int tmp ;

  {
  tmp = __fxstatat(1, __fd, (char const   *)__filename, (struct stat *)__statbuf, __flag);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  mknod(char const   *__path , __mode_t __mode , __dev_t __dev ) 
{ int tmp ;

  {
  tmp = __xmknod(0, __path, __mode, & __dev);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev ) 
{ int tmp ;

  {
  tmp = __xmknodat(0, __fd, __path, __mode, & __dev);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __xstat64(1, (char const   *)__path, (struct stat64 *)__statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __lxstat64(1, (char const   *)__path, (struct stat64 *)__statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat64(int __fd , struct stat64 *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  fstat64(int __fd , struct stat64 *__statbuf ) 
{ int tmp ;

  {
  tmp = __fxstat64(1, __fd, __statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag ) 
{ int tmp ;

  {
  tmp = __fxstatat64(1, __fd, (char const   *)__filename, (struct stat64 *)__statbuf, __flag);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fflush(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fprintf)(FILE * __restrict  __stream , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) printf)(char const   * __restrict  __fmt  , ...) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) sprintf)(char * __restrict  __s , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vfprintf)(FILE * __restrict  __stream , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vprintf)(char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsprintf)(char * __restrict  __s , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) snprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt  , ...) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsnprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vasprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt , __gnuc_va_list __ap )  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) __asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...)  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...)  __attribute__((__warn_unused_result__)) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vdprintf)(int __fd , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) dprintf)(int __fd , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__gnu_inline__))  getchar(void) ;
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) ;
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) ;
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) ;
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c , FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c , FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets)(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets_unlocked)(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n , int __delimiter , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern int puts(char const   *__s ) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread_unlocked)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  feof_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ferror_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_printf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt  , ...) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_vprintf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__))  getchar(void) 
{ int tmp ;

  {
  tmp = _IO_getc(stdin);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) 
{ int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end), 0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) 
{ int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end), 0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) 
{ int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned long )stdin->_IO_read_ptr >= (unsigned long )stdin->_IO_read_end), 0L);
  if (tmp___3) {
    tmp___0 = __uflow(stdin);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = stdin->_IO_read_ptr;
    (stdin->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) 
{ int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c , FILE *__stream ) 
{ int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end), 0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c , FILE *__stream ) 
{ int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end), 0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) 
{ int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned long )stdout->_IO_write_ptr >= (unsigned long )stdout->_IO_write_end), 0L);
  if (tmp___4) {
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = stdout->_IO_write_ptr;
    (stdout->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr , size_t * __restrict  __n , FILE * __restrict  __stream ) 
{ __ssize_t tmp ;

  {
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  return ((long __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  feof_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  feof_unlocked(FILE *__stream ) 
{ 

  {
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((__stream->_flags & 16) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ferror_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  ferror_unlocked(FILE *__stream ) 
{ 

  {
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((__stream->_flags & 32) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) sprintf)(char * __restrict  __s , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) sprintf)(char * __restrict  __s , char const   * __restrict  __fmt  , ...) 
{ unsigned long tmp ;
  int tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__s, 1);
  tmp___0 = __builtin___sprintf_chk((char *)__s, 1, tmp, (char const   *)__fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsprintf)(char * __restrict  __s , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsprintf)(char * __restrict  __s , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ unsigned long tmp ;
  int tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__s, 1);
  tmp___0 = __builtin___vsprintf_chk((char *)__s, 1, tmp, (char const   *)__fmt, __ap);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) snprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) snprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt  , ...) 
{ unsigned long tmp ;
  int tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__s, 1);
  tmp___0 = __builtin___snprintf_chk((char *)__s, __n, 1, tmp, (char const   *)__fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsnprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vsnprintf)(char * __restrict  __s , size_t __n , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ unsigned long tmp ;
  int tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__s, 1);
  tmp___0 = __builtin___vsnprintf_chk((char *)__s, __n, 1, tmp, (char const   *)__fmt, __ap);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
}
}
extern int __fprintf_chk(FILE * __restrict  __stream , int __flag , char const   * __restrict  __format  , ...) ;
extern int __printf_chk(int __flag , char const   * __restrict  __format  , ...) ;
extern int __vfprintf_chk(FILE * __restrict  __stream , int __flag , char const   * __restrict  __format , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fprintf)(FILE * __restrict  __stream , char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __fprintf_chk(__stream, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) printf)(char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __printf_chk(1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vprintf)(char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vfprintf_chk((FILE */* __restrict  */)stdout, 1, __fmt, __ap);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vfprintf)(FILE * __restrict  __stream , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vfprintf_chk(__stream, 1, __fmt, __ap);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
extern int __dprintf_chk(int __fd , int __flag , char const   * __restrict  __fmt  , ...) ;
extern int __vdprintf_chk(int __fd , int __flag , char const   * __restrict  __fmt , __gnuc_va_list __arg ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) dprintf)(int __fd , char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __dprintf_chk(__fd, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vdprintf)(int __fd , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vdprintf_chk(__fd, 1, __fmt, __ap);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) int __asprintf_chk(char ** __restrict  __ptr , int __flag , char const   * __restrict  __fmt  , ...)  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int __vasprintf_chk(char ** __restrict  __ptr , int __flag , char const   * __restrict  __fmt , __gnuc_va_list __arg )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int __obstack_printf_chk(struct obstack * __restrict  __obstack , int __flag , char const   * __restrict  __format  , ...)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int __obstack_vprintf_chk(struct obstack * __restrict  __obstack , int __flag , char const   * __restrict  __format , __gnuc_va_list __args )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...)  __attribute__((__warn_unused_result__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __asprintf_chk(__ptr, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) __asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...)  __attribute__((__warn_unused_result__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) __asprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __asprintf_chk(__ptr, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_printf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_printf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __obstack_printf_chk(__obstack, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vasprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt , __gnuc_va_list __ap )  __attribute__((__warn_unused_result__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vasprintf)(char ** __restrict  __ptr , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vasprintf_chk(__ptr, 1, __fmt, __ap);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_vprintf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) obstack_vprintf)(struct obstack * __restrict  __obstack , char const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __obstack_vprintf_chk(__obstack, 1, __fmt, __ap);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp);
}
}
extern char *__fgets_chk(char * __restrict  __s , size_t __size , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern char *__fgets_alias(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __asm__("fgets") __attribute__((__warn_unused_result__)) ;
extern char *__fgets_chk_warn(char * __restrict  __s , size_t __size , int __n , FILE * __restrict  __stream )  __asm__("__fgets_chk") __attribute__((__warning__("fgets called with bigger size than length of destination buffer"), __warn_unused_result__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets)(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets)(char * __restrict  __s , int __n , FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  char *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __fgets_chk(__s, tmp, __n, __stream);
    return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s, 1);
    if ((unsigned long )__n > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__s, 1);
      tmp___2 = __fgets_chk_warn(__s, tmp___1, __n, __stream);
      return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __fgets_alias(__s, __n, __stream);
  return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___5);
}
}
extern size_t __fread_chk(void * __restrict  __ptr , size_t __ptrlen , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern size_t __fread_alias(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __asm__("fread") __attribute__((__warn_unused_result__)) ;
extern size_t __fread_chk_warn(void * __restrict  __ptr , size_t __ptrlen , size_t __size , size_t __n , FILE * __restrict  __stream )  __asm__("__fread_chk") __attribute__((__warning__("fread called with bigger size * nmemb than length of destination buffer"), __warn_unused_result__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  size_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__ptr, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__ptr, 0);
    tmp___0 = __fread_chk(__ptr, tmp, __size, __n, __stream);
    return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__ptr, 0);
    if (__size * __n > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__ptr, 0);
      tmp___2 = __fread_chk_warn(__ptr, tmp___1, __size, __n, __stream);
      return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __fread_alias(__ptr, __size, __n, __stream);
  return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern char *__fgets_unlocked_chk(char * __restrict  __s , size_t __size , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern char *__fgets_unlocked_alias(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __asm__("fgets_unlocked") __attribute__((__warn_unused_result__)) ;
extern char *__fgets_unlocked_chk_warn(char * __restrict  __s , size_t __size , int __n , FILE * __restrict  __stream )  __asm__("__fgets_unlocked_chk") __attribute__((__warning__("fgets_unlocked called with bigger size than length of destination buffer"), __warn_unused_result__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets_unlocked)(char * __restrict  __s , int __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgets_unlocked)(char * __restrict  __s , int __n , FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  char *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __fgets_unlocked_chk(__s, tmp, __n, __stream);
    return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s, 1);
    if ((unsigned long )__n > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__s, 1);
      tmp___2 = __fgets_unlocked_chk_warn(__s, tmp___1, __n, __stream);
      return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __fgets_unlocked_alias(__s, __n, __stream);
  return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___5);
}
}
extern size_t __fread_unlocked_chk(void * __restrict  __ptr , size_t __ptrlen , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern size_t __fread_unlocked_alias(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __asm__("fread_unlocked") __attribute__((__warn_unused_result__)) ;
extern size_t __fread_unlocked_chk_warn(void * __restrict  __ptr , size_t __ptrlen , size_t __size , size_t __n , FILE * __restrict  __stream )  __asm__("__fread_unlocked_chk") __attribute__((__warning__("fread_unlocked called with bigger size * nmemb than length of destination buffer"), __warn_unused_result__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread_unlocked)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread_unlocked)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  size_t tmp___11 ;

  {
  tmp___4 = __builtin_object_size((void *)__ptr, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__ptr, 0);
    tmp___0 = __fread_unlocked_chk(__ptr, tmp, __size, __n, __stream);
    return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__ptr, 0);
    if (__size * __n > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__ptr, 0);
      tmp___2 = __fread_unlocked_chk_warn(__ptr, tmp___1, __size, __n, __stream);
      return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___11 = __fread_unlocked_alias(__ptr, __size, __n, __stream);
  return ((unsigned long __attribute__((__gnu_inline__, __artificial__))  )tmp___11);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) mempcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bcopy)(void const   *__src , void *__dest , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bzero)(void *__dest , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s , int __reject ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s , int __reject ) 
{ size_t __result ;

  {
  __result = 0UL;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if (! ((int const   )*(__s + __result) != (int const   )__reject)) {
        break;
      } else {

      }
    } else {
      break;
    }
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s , int __reject1 , int __reject2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s , int __reject1 , int __reject2 ) 
{ size_t __result ;

  {
  __result = 0UL;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if (! ((int const   )*(__s + __result) != (int const   )__reject2)) {
          break;
        } else {

        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s , int __reject1 , int __reject2 , int __reject3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s , int __reject1 , int __reject2 , int __reject3 ) 
{ size_t __result ;

  {
  __result = 0UL;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          if (! ((int const   )*(__s + __result) != (int const   )__reject3)) {
            break;
          } else {

          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s , int __accept ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s , int __accept ) 
{ size_t __result ;

  {
  __result = 0UL;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s , int __accept1 , int __accept2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s , int __accept1 , int __accept2 ) 
{ size_t __result ;

  {
  __result = 0UL;
  while (1) {
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        break;
      } else {

      }
    } else {

    }
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) 
{ size_t __result ;

  {
  __result = 0UL;
  while (1) {
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        if (! ((int const   )*(__s + __result) == (int const   )__accept3)) {
          break;
        } else {

        }
      } else {

      }
    } else {

    }
    __result ++;
  }
  return ((unsigned long __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s , int __accept1 , int __accept2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s , int __accept1 , int __accept2 ) 
{ char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if (! ((int const   )*__s != (int const   )__accept2)) {
          break;
        } else {

        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((unsigned long )__s);
  }
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s , int __accept1 , int __accept2 , int __accept3 ) 
{ char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {
          if (! ((int const   )*__s != (int const   )__accept3)) {
            break;
          } else {

          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((unsigned long )__s);
  }
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  if ((unsigned long )__s == (unsigned long )((void *)0)) {
    __s = *__nextp;
  } else {

  }
  while ((int )*__s == (int )__sep) {
    __s ++;
  }
  __result = (char *)((void *)0);
  if ((int )*__s != 0) {
    tmp = __s;
    __s ++;
    __result = tmp;
    while ((int )*__s != 0) {
      tmp___0 = __s;
      __s ++;
      if ((int )*tmp___0 == (int )__sep) {
        *(__s + -1) = (char )'\000';
        break;
      } else {

      }
    }
  } else {

  }
  *__nextp = __s;
  return ((char __attribute__((__gnu_inline__))  *)__result);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s , char __reject ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s , char __reject ) 
{ char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___2 ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    tmp___0 = tmp___2;
    *__s = tmp___0;
    if ((unsigned long )tmp___0 != (unsigned long )((void *)0)) {
      tmp = *__s;
      (*__s) ++;
      *tmp = (char )'\000';
    } else {

    }
  } else {

  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ char *__retval ;
  char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        } else {

        }
      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 ) 
{ char *__retval ;
  char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        } else {
          if ((int )*__cp == (int )__reject3) {
            tmp = __cp;
            __cp ++;
            *tmp = (char )'\000';
            break;
          } else {

          }
        }
      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  void *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 0);
  tmp___0 = __builtin___memcpy_chk((void *)__dest, (void const   *)__src, __len, tmp);
  return ((void __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len ) 
{ unsigned long tmp ;
  void *tmp___0 ;

  {
  tmp = __builtin_object_size(__dest, 0);
  tmp___0 = __builtin___memmove_chk(__dest, __src, __len, tmp);
  return ((void __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) mempcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) mempcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  void *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 0);
  tmp___0 = __builtin___mempcpy_chk((void *)__dest, (void const   *)__src, __len, tmp);
  return ((void __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len ) 
{ unsigned long tmp ;
  void *tmp___0 ;

  {
  tmp = __builtin_object_size(__dest, 0);
  tmp___0 = __builtin___memset_chk(__dest, __ch, __len, tmp);
  return ((void __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bcopy)(void const   *__src , void *__dest , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bcopy)(void const   *__src , void *__dest , size_t __len ) 
{ unsigned long tmp ;

  {
  tmp = __builtin_object_size(__dest, 0);
  __builtin___memmove_chk(__dest, __src, __len, tmp);
  return;
}
}
__inline extern  __attribute__((__nothrow__)) void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bzero)(void *__dest , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern void __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) bzero)(void *__dest , size_t __len ) 
{ unsigned long tmp ;

  {
  tmp = __builtin_object_size(__dest, 0);
  __builtin___memset_chk(__dest, '\000', __len, tmp);
  return;
}
}
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src ) 
{ unsigned long tmp ;
  char *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 1);
  tmp___0 = __builtin___strcpy_chk((char *)__dest, (char const   *)__src, tmp);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpcpy)(char * __restrict  __dest , char const   * __restrict  __src ) 
{ unsigned long tmp ;
  char *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 1);
  tmp___0 = __builtin___stpcpy_chk((char *)__dest, (char const   *)__src, tmp);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  char *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 1);
  tmp___0 = __builtin___strncpy_chk((char *)__dest, (char const   *)__src, __len, tmp);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
extern  __attribute__((__nothrow__)) char *__stpncpy_chk(char *__dest , char const   *__src , size_t __n , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *__stpncpy_alias(char *__dest , char const   *__src , size_t __n )  __asm__("stpncpy") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) stpncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __n ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___3 ;

  {
  tmp___1 = __builtin_object_size((void *)__dest, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __stpncpy_chk((char *)__dest, (char const   *)__src, __n, tmp);
    return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___3 = __stpncpy_alias((char *)__dest, (char const   *)__src, __n);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___3);
}
}
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src ) 
{ unsigned long tmp ;
  char *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 1);
  tmp___0 = __builtin___strcat_chk((char *)__dest, (char const   *)__src, tmp);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  char *tmp___0 ;

  {
  tmp = __builtin_object_size((void *)__dest, 1);
  tmp___0 = __builtin___strncat_chk((char *)__dest, (char const   *)__src, __len, tmp);
  return ((char __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
}
}
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) double __attribute__((__leaf__, __gnu_inline__))  atof(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  atoi(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  atol(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__leaf__, __gnu_inline__))  atoll(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr , char ** __restrict  __endptr )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  atoi(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  atoi(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((int )tmp));
}
}
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  atol(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern long __attribute__((__leaf__, __gnu_inline__))  atol(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__leaf__, __gnu_inline__))  atoll(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern long long __attribute__((__leaf__, __gnu_inline__))  atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((long long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) realpath)(char const   * __restrict  __name , char * __restrict  __resolved )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern void __attribute__((__gnu_inline__))  *bsearch(void const   *__key , void const   *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__warn_unused_result__, __nonnull__(1,2,5))) ;
__inline extern void __attribute__((__gnu_inline__))  *bsearch(void const   *__key , void const   *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__warn_unused_result__, __nonnull__(1,2,5))) ;
__inline extern void __attribute__((__gnu_inline__))  *bsearch(void const   *__key , void const   *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) ) 
{ size_t __l ;
  size_t __u ;
  size_t __idx ;
  void const   *__p ;
  int __comparison ;

  {
  __l = 0UL;
  __u = __nmemb;
  while (__l < __u) {
    __idx = (__l + __u) / 2UL;
    __p = (void const   *)((void *)((char const   *)__base + __idx * __size));
    __comparison = (*__compar)(__key, __p);
    if (__comparison < 0) {
      __u = __idx;
    } else {
      if (__comparison > 0) {
        __l = __idx + 1UL;
      } else {
        return ((void __attribute__((__gnu_inline__))  *)((void *)__p));
      }
    }
  }
  return ((void __attribute__((__gnu_inline__))  *)((void *)0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wctomb)(char *__s , wchar_t __wchar )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbstowcs)(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcstombs)(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ptsname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) double __attribute__((__leaf__, __gnu_inline__))  atof(char const   *__nptr )  __attribute__((__warn_unused_result__, __pure__, __nonnull__(1), __leaf__)) ;
__inline extern double __attribute__((__leaf__, __gnu_inline__))  atof(char const   *__nptr ) 
{ double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr, (char **/* __restrict  */)((char **)((void *)0)));
  return ((double __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) char *__realpath_chk(char const   * __restrict  __name , char * __restrict  __resolved , size_t __resolvedlen )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) char *__realpath_alias(char const   * __restrict  __name , char * __restrict  __resolved )  __asm__("realpath") __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) realpath)(char const   * __restrict  __name , char * __restrict  __resolved )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) realpath)(char const   * __restrict  __name , char * __restrict  __resolved ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__resolved, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__resolved, 1);
    tmp___0 = __realpath_chk(__name, __resolved, tmp);
    return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __realpath_alias(__name, __resolved);
  return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) int __ptsname_r_chk(int __fd , char *__buf , size_t __buflen , size_t __nreal )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __ptsname_r_alias(int __fd , char *__buf , size_t __buflen )  __asm__("ptsname_r") __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __ptsname_r_chk_warn(int __fd , char *__buf , size_t __buflen , size_t __nreal )  __asm__("__ptsname_r_chk") __attribute__((__warning__("ptsname_r called with buflen bigger than size of buf"), __nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ptsname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ptsname_r)(int __fd , char *__buf , size_t __buflen ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __ptsname_r_chk(__fd, __buf, __buflen, tmp);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__buflen > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __ptsname_r_chk_warn(__fd, __buf, __buflen, tmp___1);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __ptsname_r_alias(__fd, __buf, __buflen);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int __wctomb_chk(char *__s , wchar_t __wchar , size_t __buflen )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int __wctomb_alias(char *__s , wchar_t __wchar )  __asm__("wctomb") __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wctomb)(char *__s , wchar_t __wchar )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wctomb)(char *__s , wchar_t __wchar ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  unsigned long tmp___2 ;
  int tmp___3 ;

  {
  tmp___1 = __builtin_object_size((void *)__s, 1);
  if (tmp___1 != 4294967295UL) {
    tmp___2 = __builtin_object_size((void *)__s, 1);
    if (16UL > tmp___2) {
      tmp = __builtin_object_size((void *)__s, 1);
      tmp___0 = __wctomb_chk(__s, __wchar, tmp);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    } else {

    }
  } else {

  }
  tmp___3 = __wctomb_alias(__s, __wchar);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___3);
}
}
extern  __attribute__((__nothrow__)) size_t __mbstowcs_chk(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbstowcs_alias(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len )  __asm__("mbstowcs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbstowcs_chk_warn(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len , size_t __dstlen )  __asm__("__mbstowcs_chk") __attribute__((__warning__("mbstowcs called with dst buffer smaller than len * sizeof (wchar_t)"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbstowcs)(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbstowcs)(wchar_t * __restrict  __dst , char const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  size_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__dst, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dst, 1);
    tmp___0 = __mbstowcs_chk(__dst, __src, __len, tmp / sizeof(wchar_t ));
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __mbstowcs_chk_warn(__dst, __src, __len, tmp___1 / sizeof(wchar_t ));
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __mbstowcs_alias(__dst, __src, __len);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) size_t __wcstombs_chk(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcstombs_alias(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len )  __asm__("wcstombs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcstombs_chk_warn(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len , size_t __dstlen )  __asm__("__wcstombs_chk") __attribute__((__warning__("wcstombs called with dst buffer smaller than len"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcstombs)(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcstombs)(char * __restrict  __dst , wchar_t const   * __restrict  __src , size_t __len ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  size_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__dst, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dst, 1);
    tmp___0 = __wcstombs_chk(__dst, __src, __len, tmp);
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __wcstombs_chk_warn(__dst, __src, __len, tmp___1);
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wcstombs_alias(__dst, __src, __len);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) read)(int __fd , void *__buf , size_t __nbytes )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread)(int __fd , void *__buf , size_t __nbytes , __off_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread64)(int __fd , void *__buf , size_t __nbytes , __off64_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getcwd)(char *__buf , size_t __size )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getwd)(char *__buf )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__, __deprecated__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) confstr)(int __name , char *__buf , size_t __len )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getgroups)(int __size , __gid_t *__list )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ttyname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlink)(char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlinkat)(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getlogin_r)(char *__buf , size_t __buflen )  __attribute__((__nonnull__(1))) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) gethostname)(char *__buf , size_t __buflen )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getdomainname)(char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
extern ssize_t __read_chk(int __fd , void *__buf , size_t __nbytes , size_t __buflen )  __attribute__((__warn_unused_result__)) ;
extern ssize_t __read_alias(int __fd , void *__buf , size_t __nbytes )  __asm__("read") __attribute__((__warn_unused_result__)) ;
extern ssize_t __read_chk_warn(int __fd , void *__buf , size_t __nbytes , size_t __buflen )  __asm__("__read_chk") __attribute__((__warning__("read called with bigger length than size of the destination buffer"), __warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) read)(int __fd , void *__buf , size_t __nbytes )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) read)(int __fd , void *__buf , size_t __nbytes ) 
{ unsigned long tmp ;
  ssize_t tmp___0 ;
  unsigned long tmp___1 ;
  ssize_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  ssize_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size(__buf, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size(__buf, 0);
    tmp___0 = __read_chk(__fd, __buf, __nbytes, tmp);
    return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size(__buf, 0);
    if (__nbytes > tmp___3) {
      tmp___1 = __builtin_object_size(__buf, 0);
      tmp___2 = __read_chk_warn(__fd, __buf, __nbytes, tmp___1);
      return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __read_alias(__fd, __buf, __nbytes);
  return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern ssize_t __pread_chk(int __fd , void *__buf , size_t __nbytes , __off_t __offset , size_t __bufsize )  __attribute__((__warn_unused_result__)) ;
extern ssize_t __pread64_chk(int __fd , void *__buf , size_t __nbytes , __off64_t __offset , size_t __bufsize )  __attribute__((__warn_unused_result__)) ;
extern ssize_t __pread_alias(int __fd , void *__buf , size_t __nbytes , __off_t __offset )  __asm__("pread") __attribute__((__warn_unused_result__)) ;
extern ssize_t __pread64_alias(int __fd , void *__buf , size_t __nbytes , __off64_t __offset )  __asm__("pread64") __attribute__((__warn_unused_result__)) ;
extern ssize_t __pread_chk_warn(int __fd , void *__buf , size_t __nbytes , __off_t __offset , size_t __bufsize )  __asm__("__pread_chk") __attribute__((__warning__("pread called with bigger length than size of the destination buffer"), __warn_unused_result__)) ;
extern ssize_t __pread64_chk_warn(int __fd , void *__buf , size_t __nbytes , __off64_t __offset , size_t __bufsize )  __asm__("__pread64_chk") __attribute__((__warning__("pread64 called with bigger length than size of the destination buffer"), __warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread)(int __fd , void *__buf , size_t __nbytes , __off_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread)(int __fd , void *__buf , size_t __nbytes , __off_t __offset ) 
{ unsigned long tmp ;
  ssize_t tmp___0 ;
  unsigned long tmp___1 ;
  ssize_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  ssize_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size(__buf, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size(__buf, 0);
    tmp___0 = __pread_chk(__fd, __buf, __nbytes, __offset, tmp);
    return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size(__buf, 0);
    if (__nbytes > tmp___3) {
      tmp___1 = __builtin_object_size(__buf, 0);
      tmp___2 = __pread_chk_warn(__fd, __buf, __nbytes, __offset, tmp___1);
      return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __pread_alias(__fd, __buf, __nbytes, __offset);
  return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread64)(int __fd , void *__buf , size_t __nbytes , __off64_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread64)(int __fd , void *__buf , size_t __nbytes , __off64_t __offset ) 
{ unsigned long tmp ;
  ssize_t tmp___0 ;
  unsigned long tmp___1 ;
  ssize_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  ssize_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size(__buf, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size(__buf, 0);
    tmp___0 = __pread64_chk(__fd, __buf, __nbytes, __offset, tmp);
    return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size(__buf, 0);
    if (__nbytes > tmp___3) {
      tmp___1 = __builtin_object_size(__buf, 0);
      tmp___2 = __pread64_chk_warn(__fd, __buf, __nbytes, __offset, tmp___1);
      return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __pread64_alias(__fd, __buf, __nbytes, __offset);
  return ((long __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) ssize_t __readlink_chk(char const   * __restrict  __path , char * __restrict  __buf , size_t __len , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) ssize_t __readlink_alias(char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __asm__("readlink") __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) ssize_t __readlink_chk_warn(char const   * __restrict  __path , char * __restrict  __buf , size_t __len , size_t __buflen )  __asm__("__readlink_chk") __attribute__((__warning__("readlink called with bigger length than size of destination buffer"), __warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlink)(char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlink)(char const   * __restrict  __path , char * __restrict  __buf , size_t __len ) 
{ unsigned long tmp ;
  ssize_t tmp___0 ;
  unsigned long tmp___1 ;
  ssize_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  ssize_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __readlink_chk(__path, __buf, __len, tmp);
    return ((long __attribute__((__nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__len > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __readlink_chk_warn(__path, __buf, __len, tmp___1);
      return ((long __attribute__((__nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __readlink_alias(__path, __buf, __len);
  return ((long __attribute__((__nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) ssize_t __readlinkat_chk(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) ssize_t __readlinkat_alias(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __asm__("readlinkat") __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) ssize_t __readlinkat_chk_warn(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len , size_t __buflen )  __asm__("__readlinkat_chk") __attribute__((__warning__("readlinkat called with bigger length than size of destination buffer"), __warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlinkat)(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlinkat)(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len ) 
{ unsigned long tmp ;
  ssize_t tmp___0 ;
  unsigned long tmp___1 ;
  ssize_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  ssize_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __readlinkat_chk(__fd, __path, __buf, __len, tmp);
    return ((long __attribute__((__nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__len > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __readlinkat_chk_warn(__fd, __path, __buf, __len, tmp___1);
      return ((long __attribute__((__nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __readlinkat_alias(__fd, __path, __buf, __len);
  return ((long __attribute__((__nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) char *__getcwd_chk(char *__buf , size_t __size , size_t __buflen )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) char *__getcwd_alias(char *__buf , size_t __size )  __asm__("getcwd") __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) char *__getcwd_chk_warn(char *__buf , size_t __size , size_t __buflen )  __asm__("__getcwd_chk") __attribute__((__warning__("getcwd caller with bigger length than size of destination buffer"), __warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getcwd)(char *__buf , size_t __size )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getcwd)(char *__buf , size_t __size ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  char *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __getcwd_chk(__buf, __size, tmp);
    return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__size > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __getcwd_chk_warn(__buf, __size, tmp___1);
      return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __getcwd_alias(__buf, __size);
  return ((char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) char *__getwd_chk(char *__buf , size_t buflen )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *__getwd_warn(char *__buf )  __asm__("getwd") __attribute__((__warning__("please use getcwd instead, as getwd doesn\'t specify buffer size"), __warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getwd)(char *__buf )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__, __deprecated__)) ;
__inline extern char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getwd)(char *__buf ) 
{ unsigned long tmp ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__buf, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __getwd_chk(__buf, tmp);
    return ((char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __getwd_warn(__buf);
  return ((char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) size_t __confstr_chk(int __name , char *__buf , size_t __len , size_t __buflen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __confstr_alias(int __name , char *__buf , size_t __len )  __asm__("confstr") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __confstr_chk_warn(int __name , char *__buf , size_t __len , size_t __buflen )  __asm__("__confstr_chk") __attribute__((__warning__("confstr called with bigger length than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) confstr)(int __name , char *__buf , size_t __len )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) confstr)(int __name , char *__buf , size_t __len ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  size_t tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __confstr_chk(__name, __buf, __len, tmp);
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (tmp___3 < __len) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __confstr_chk_warn(__name, __buf, __len, tmp___1);
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __confstr_alias(__name, __buf, __len);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int __getgroups_chk(int __size , __gid_t *__list , size_t __listlen )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int __getgroups_alias(int __size , __gid_t *__list )  __asm__("getgroups") __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) int __getgroups_chk_warn(int __size , __gid_t *__list , size_t __listlen )  __asm__("__getgroups_chk") __attribute__((__warning__("getgroups called with bigger group count than what can fit into destination buffer"), __warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getgroups)(int __size , __gid_t *__list )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getgroups)(int __size , __gid_t *__list ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__list, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__list, 1);
    tmp___0 = __getgroups_chk(__size, __list, tmp);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__list, 1);
    if ((unsigned long )__size * sizeof(__gid_t ) > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__list, 1);
      tmp___2 = __getgroups_chk_warn(__size, __list, tmp___1);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __getgroups_alias(__size, __list);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int __ttyname_r_chk(int __fd , char *__buf , size_t __buflen , size_t __nreal )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __ttyname_r_alias(int __fd , char *__buf , size_t __buflen )  __asm__("ttyname_r") __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __ttyname_r_chk_warn(int __fd , char *__buf , size_t __buflen , size_t __nreal )  __asm__("__ttyname_r_chk") __attribute__((__warning__("ttyname_r called with bigger buflen than size of destination buffer"), __nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ttyname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ttyname_r)(int __fd , char *__buf , size_t __buflen ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __ttyname_r_chk(__fd, __buf, __buflen, tmp);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__buflen > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __ttyname_r_chk_warn(__fd, __buf, __buflen, tmp___1);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __ttyname_r_alias(__fd, __buf, __buflen);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern int __getlogin_r_chk(char *__buf , size_t __buflen , size_t __nreal )  __attribute__((__nonnull__(1))) ;
extern int __getlogin_r_alias(char *__buf , size_t __buflen )  __asm__("getlogin_r") __attribute__((__nonnull__(1))) ;
extern int __getlogin_r_chk_warn(char *__buf , size_t __buflen , size_t __nreal )  __asm__("__getlogin_r_chk") __attribute__((__warning__("getlogin_r called with bigger buflen than size of destination buffer"), __nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getlogin_r)(char *__buf , size_t __buflen )  __attribute__((__nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getlogin_r)(char *__buf , size_t __buflen ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __getlogin_r_chk(__buf, __buflen, tmp);
    return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__buflen > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __getlogin_r_chk_warn(__buf, __buflen, tmp___1);
      return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __getlogin_r_alias(__buf, __buflen);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int __gethostname_chk(char *__buf , size_t __buflen , size_t __nreal )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __gethostname_alias(char *__buf , size_t __buflen )  __asm__("gethostname") __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __gethostname_chk_warn(char *__buf , size_t __buflen , size_t __nreal )  __asm__("__gethostname_chk") __attribute__((__warning__("gethostname called with bigger buflen than size of destination buffer"), __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) gethostname)(char *__buf , size_t __buflen )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) gethostname)(char *__buf , size_t __buflen ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __gethostname_chk(__buf, __buflen, tmp);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__buflen > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __gethostname_chk_warn(__buf, __buflen, tmp___1);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __gethostname_alias(__buf, __buflen);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int __getdomainname_chk(char *__buf , size_t __buflen , size_t __nreal )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __getdomainname_alias(char *__buf , size_t __buflen )  __asm__("getdomainname") __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __getdomainname_chk_warn(char *__buf , size_t __buflen , size_t __nreal )  __asm__("__getdomainname_chk") __attribute__((__warning__("getdomainname called with bigger buflen than size of destination buffer"), __warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getdomainname)(char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getdomainname)(char *__buf , size_t __buflen ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  int tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__buf, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__buf, 1);
    tmp___0 = __getdomainname_chk(__buf, __buflen, tmp);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__buf, 1);
    if (__buflen > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__buf, 1);
      tmp___2 = __getdomainname_chk_warn(__buf, __buflen, tmp___1);
      return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __getdomainname_alias(__buf, __buflen);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) long __strtol_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern intmax_t __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ long tmp ;

  {
  tmp = __strtol_internal(nptr, endptr, base, 0);
  return ((long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern uintmax_t __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ unsigned long tmp ;

  {
  tmp = __strtoul_internal(nptr, endptr, base, 0);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) long __wcstol_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) intmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern intmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ long tmp ;

  {
  tmp = __wcstol_internal(nptr, endptr, base, 0);
  return ((long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long __wcstoul_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) uintmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern uintmax_t __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ unsigned long tmp ;

  {
  tmp = __wcstoul_internal(nptr, endptr, base, 0);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern reg_syntax_t rpl_re_set_syntax(reg_syntax_t __syntax ) ;
extern char const   *rpl_re_compile_pattern(char const   *__pattern , size_t __length , struct re_pattern_buffer *__buffer ) ;
extern int optionl_stat(char const   *name , struct stat *p ) ;
extern int optionp_stat(char const   *name , struct stat *p ) ;
extern int optionh_stat(char const   *name , struct stat *p ) ;
extern int debug_stat(char const   *file , struct stat *bufp ) ;
extern void bc_push_arg(struct buildcmd_control  const  *ctl , struct buildcmd_state *state , char const   *arg , size_t len , char const   *prefix , size_t pfxlen , int initial_args ) ;
extern void bc_init_state(struct buildcmd_control  const  *ctl , struct buildcmd_state *state , void *usercontext ) ;
extern enum BC_INIT_STATUS bc_init_controlinfo(struct buildcmd_control *ctl ) ;
extern void bc_use_sensible_arg_max(struct buildcmd_control *ctl ) ;
extern boolean is_fts_enabled() ;
extern void error(int status , int errnum , char *message  , ...) ;
void set_follow_state(enum SymlinkOption opt ) ;
extern char *filesystem_type(struct stat  const  *statp , char const   *path ) ;
struct parser_table  const  *find_parser(char *search_name ) ;
boolean parse_open(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
boolean parse_close(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
boolean parse_print(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
void parse_begin_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) ;
void parse_end_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) ;
extern boolean pred_amin(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_and(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_anewer(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_atime(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_close(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_cmin(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_cnewer(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_comma(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_ctime(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_delete(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_empty(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_exec(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_execdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_executable(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_false(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_fls(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_fprint(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_fprint0(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_fprintf(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_fstype(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_gid(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_group(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_ilname(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_iname(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_inum(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_ipath(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_links(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_lname(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_ls(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_mmin(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_mtime(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_name(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_negate(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_newer(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_nogroup(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_nouser(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_ok(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_okdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_open(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_or(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_path(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_perm(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_print(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_print0(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_prune(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_quit(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_readable(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_regex(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_samefile(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_size(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_true(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_type(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_uid(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_used(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_user(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_writable(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_xtype(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern int launch(struct buildcmd_control  const  *ctl , struct buildcmd_state *buildstate ) ;
extern struct predicate *get_new_pred(struct parser_table  const  *entry ) ;
extern struct predicate *get_new_pred_chk_op(struct parser_table  const  *entry ) ;
extern struct predicate *insert_primary(struct parser_table  const  *entry ) ;
extern struct predicate *insert_primary_withpred(struct parser_table  const  *entry , boolean (*fptr)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) ;
extern void usage(FILE *fp , int status , char *msg ) ;
extern struct options options ;
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  tolower(int __c )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  toupper(int __c )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  tolower(int __c )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  tolower(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_tolower_loc();
      tmp___0 = (int )*(*tmp + __c);
    } else {
      tmp___0 = (int )((int const   )__c);
    }
  } else {
    tmp___0 = (int )((int const   )__c);
  }
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp___0);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  toupper(int __c )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  toupper(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp = __ctype_toupper_loc();
      tmp___0 = (int )*(*tmp + __c);
    } else {
      tmp___0 = (int )((int const   )__c);
    }
  } else {
    tmp___0 = (int )((int const   )__c);
  }
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp___0);
}
}
extern void endpwent(void) ;
extern struct passwd *getpwnam(char const   *__name ) ;
extern void endgrent(void) ;
extern struct group *getgrnam(char const   *__name ) ;
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
extern struct mode_change *mode_compile(char const   * ) ;
extern mode_t mode_adjust(mode_t  , _Bool  , mode_t  , struct mode_change  const  * , mode_t * ) ;
extern strtol_error xstrtoumax(char const   * , char ** , int  , uintmax_t * , char const   * ) ;
extern void *xmalloc(size_t s ) ;
extern struct quoting_options *clone_quoting_options(struct quoting_options *o ) ;
extern char *next_element(char const   *path , int curdir_ok ) ;
extern FILE *fopen_safer(char const   * , char const   * ) ;
extern int get_regex_type(char const   *s ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open)(char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open64)(char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat)(int __fd , char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(2))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat64)(int __fd , char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(2))) ;
extern int __open_2(char const   *__path , int __oflag )  __attribute__((__nonnull__(1))) ;
extern int __open_alias(char const   *__path , int __oflag  , ...)  __asm__("open") __attribute__((__nonnull__(1))) ;
extern void __open_too_many_args(void)  __attribute__((__error__("open can be called either with 2 or 3 arguments, not more"))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open)(char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open)(char const   *__path , int __oflag  , ...) 
{ int tmp ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp = __builtin_va_arg_pack_len();
  if (tmp > 1) {
    __open_too_many_args();
  } else {

  }
  tmp___4 = __builtin_va_arg_pack_len();
  if (tmp___4 < 1) {
    tmp___3 = __open_2(__path, __oflag);
    return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___3);
  } else {

  }
  tmp___5 = __open_alias(__path, __oflag, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern int __open64_2(char const   *__path , int __oflag )  __attribute__((__nonnull__(1))) ;
extern int __open64_alias(char const   *__path , int __oflag  , ...)  __asm__("open64") __attribute__((__nonnull__(1))) ;
extern void __open64_too_many_args(void)  __attribute__((__error__("open64 can be called either with 2 or 3 arguments, not more"))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open64)(char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) open64)(char const   *__path , int __oflag  , ...) 
{ int tmp ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp = __builtin_va_arg_pack_len();
  if (tmp > 1) {
    __open64_too_many_args();
  } else {

  }
  tmp___4 = __builtin_va_arg_pack_len();
  if (tmp___4 < 1) {
    tmp___3 = __open64_2(__path, __oflag);
    return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___3);
  } else {

  }
  tmp___5 = __open64_alias(__path, __oflag, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern int __openat_2(int __fd , char const   *__path , int __oflag )  __attribute__((__nonnull__(2))) ;
extern int __openat_alias(int __fd , char const   *__path , int __oflag  , ...)  __asm__("openat") __attribute__((__nonnull__(2))) ;
extern void __openat_too_many_args(void)  __attribute__((__error__("openat can be called either with 3 or 4 arguments, not more"))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat)(int __fd , char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(2))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat)(int __fd , char const   *__path , int __oflag  , ...) 
{ int tmp ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp = __builtin_va_arg_pack_len();
  if (tmp > 1) {
    __openat_too_many_args();
  } else {

  }
  tmp___4 = __builtin_va_arg_pack_len();
  if (tmp___4 < 1) {
    tmp___3 = __openat_2(__fd, __path, __oflag);
    return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___3);
  } else {

  }
  tmp___5 = __openat_alias(__fd, __path, __oflag, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern int __openat64_2(int __fd , char const   *__path , int __oflag )  __attribute__((__nonnull__(2))) ;
extern int __openat64_alias(int __fd , char const   *__path , int __oflag  , ...)  __asm__("openat64") __attribute__((__nonnull__(2))) ;
extern void __openat64_too_many_args(void)  __attribute__((__error__("openat64 can be called either with 3 or 4 arguments, not more"))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat64)(int __fd , char const   *__path , int __oflag  , ...)  __attribute__((__nonnull__(2))) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) openat64)(int __fd , char const   *__path , int __oflag  , ...) 
{ int tmp ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp = __builtin_va_arg_pack_len();
  if (tmp > 1) {
    __openat64_too_many_args();
  } else {

  }
  tmp___4 = __builtin_va_arg_pack_len();
  if (tmp___4 < 1) {
    tmp___3 = __openat64_2(__fd, __path, __oflag);
    return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___3);
  } else {

  }
  tmp___5 = __openat64_alias(__fd, __path, __oflag, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__leaf__, __format_arg__(2))) ;
static boolean parse_accesscheck(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_amin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_and(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_anewer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_cmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_cnewer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_comma(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_daystart(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_delete(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_d(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_depth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_empty(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_exec(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_execdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_false(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_fls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_fprintf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_follow(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_fprint(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_fprint0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_fstype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_gid(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_group(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_help(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_ilname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_iname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_inum(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_ipath(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_iregex(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_iwholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_links(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_lname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_ls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_maxdepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_mindepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_mmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_name(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_negate(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_newer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_noleaf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_nogroup(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_nouser(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_nowarn(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_ok(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_okdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_or(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_path(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_perm(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_print0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_printf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_prune(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_regex(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_regextype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_samefile(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_size(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_time(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_true(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_type(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_uid(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_used(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_user(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_version(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_wholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_xdev(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_ignore_race(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_noignore_race(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_warn(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_xtype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean parse_quit(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean insert_type(char **argv , int *arg_ptr , struct parser_table  const  *entry , boolean (*which_pred)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) ;
static boolean insert_regex(char **argv , int *arg_ptr , struct parser_table  const  *entry , int regex_options ) ;
static boolean insert_fprintf(FILE *fp , struct parser_table  const  *entry , boolean (*func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) , char **argv , int *arg_ptr ) ;
static struct segment **make_segment(struct segment **segment , char *format , int len , int kind , struct predicate *pred ) ;
static boolean insert_exec_ok(char const   *action , struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static boolean get_num_days(char *str , uintmax_t *num_days , enum comparison_type *comp_type ) ;
static boolean get_num(char *str , uintmax_t *num , enum comparison_type *comp_type ) ;
static struct predicate *insert_num(char **argv , int *arg_ptr , struct parser_table  const  *entry ) ;
static FILE *open_output_file(char *path ) ;
static boolean stream_is_tty(FILE *fp ) ;
static boolean parse_noop(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static struct parser_table  const  parse_table[84]  = 
  {      {(enum arg_type )4, (char *)"!", & parse_negate, & pred_negate}, 
        {(enum arg_type )4, (char *)"not", & parse_negate, & pred_negate}, 
        {(enum arg_type )4, (char *)"(", & parse_open, & pred_open}, 
        {(enum arg_type )4, (char *)")", & parse_close, & pred_close}, 
        {(enum arg_type )4, (char *)",", & parse_comma, & pred_comma}, 
        {(enum arg_type )4, (char *)"a", & parse_and, & pred_and}, 
        {(enum arg_type )3, (char *)"amin", & parse_amin, & pred_amin}, 
        {(enum arg_type )4, (char *)"and", & parse_and, & pred_and}, 
        {(enum arg_type )3, (char *)"anewer", & parse_anewer, & pred_anewer}, 
        {(enum arg_type )3, (char *)"atime", & parse_time, & pred_atime}, 
        {(enum arg_type )3, (char *)"cmin", & parse_cmin, & pred_cmin}, 
        {(enum arg_type )3, (char *)"cnewer", & parse_cnewer, & pred_cnewer}, 
        {(enum arg_type )3, (char *)"ctime", & parse_time, & pred_ctime}, 
        {(enum arg_type )2, (char *)"daystart", & parse_daystart, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )5, (char *)"delete", & parse_delete, & pred_delete}, 
        {(enum arg_type )0, (char *)"d", & parse_d, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)"depth", & parse_depth, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"empty", & parse_empty, & pred_empty}, 
        {(enum arg_type )5, (char *)"exec", & parse_exec, & pred_exec}, 
        {(enum arg_type )3, (char *)"executable", & parse_accesscheck, & pred_executable}, 
        {(enum arg_type )5, (char *)"execdir", & parse_execdir, & pred_execdir}, 
        {(enum arg_type )5, (char *)"fls", & parse_fls, & pred_fls}, 
        {(enum arg_type )2, (char *)"follow", & parse_follow, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )5, (char *)"fprint", & parse_fprint, & pred_fprint}, 
        {(enum arg_type )5, (char *)"fprint0", & parse_fprint0, & pred_fprint0}, 
        {(enum arg_type )5, (char *)"fprintf", & parse_fprintf, & pred_fprintf}, 
        {(enum arg_type )3, (char *)"fstype", & parse_fstype, & pred_fstype}, 
        {(enum arg_type )3, (char *)"gid", & parse_gid, & pred_gid}, 
        {(enum arg_type )3, (char *)"group", & parse_group, & pred_group}, 
        {(enum arg_type )0, (char *)"ignore_readdir_race", & parse_ignore_race, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"ilname", & parse_ilname, & pred_ilname}, 
        {(enum arg_type )3, (char *)"iname", & parse_iname, & pred_iname}, 
        {(enum arg_type )3, (char *)"inum", & parse_inum, & pred_inum}, 
        {(enum arg_type )3, (char *)"ipath", & parse_ipath, & pred_ipath}, 
        {(enum arg_type )3, (char *)"iregex", & parse_iregex, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"iwholename", & parse_iwholename, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"links", & parse_links, & pred_links}, 
        {(enum arg_type )3, (char *)"lname", & parse_lname, & pred_lname}, 
        {(enum arg_type )5, (char *)"ls", & parse_ls, & pred_ls}, 
        {(enum arg_type )0, (char *)"maxdepth", & parse_maxdepth, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)"mindepth", & parse_mindepth, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"mmin", & parse_mmin, & pred_mmin}, 
        {(enum arg_type )0, (char *)"mount", & parse_xdev, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"mtime", & parse_time, & pred_mtime}, 
        {(enum arg_type )3, (char *)"name", & parse_name, & pred_name}, 
        {(enum arg_type )3, (char *)"newer", & parse_newer, & pred_newer}, 
        {(enum arg_type )0, (char *)"noleaf", & parse_noleaf, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"nogroup", & parse_nogroup, & pred_nogroup}, 
        {(enum arg_type )3, (char *)"nouser", & parse_nouser, & pred_nouser}, 
        {(enum arg_type )0, (char *)"noignore_readdir_race", & parse_noignore_race, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )2, (char *)"nowarn", & parse_nowarn, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )4, (char *)"o", & parse_or, & pred_or}, 
        {(enum arg_type )4, (char *)"or", & parse_or, & pred_or}, 
        {(enum arg_type )5, (char *)"ok", & parse_ok, & pred_ok}, 
        {(enum arg_type )5, (char *)"okdir", & parse_okdir, & pred_okdir}, 
        {(enum arg_type )3, (char *)"path", & parse_path, & pred_path}, 
        {(enum arg_type )3, (char *)"perm", & parse_perm, & pred_perm}, 
        {(enum arg_type )5, (char *)"print", & parse_print, & pred_print}, 
        {(enum arg_type )5, (char *)"print0", & parse_print0, & pred_print0}, 
        {(enum arg_type )5, (char *)"printf", & parse_printf, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )5, (char *)"prune", & parse_prune, & pred_prune}, 
        {(enum arg_type )5, (char *)"quit", & parse_quit, & pred_quit}, 
        {(enum arg_type )3, (char *)"readable", & parse_accesscheck, & pred_readable}, 
        {(enum arg_type )3, (char *)"regex", & parse_regex, & pred_regex}, 
        {(enum arg_type )0, (char *)"regextype", & parse_regextype, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"samefile", & parse_samefile, & pred_samefile}, 
        {(enum arg_type )3, (char *)"size", & parse_size, & pred_size}, 
        {(enum arg_type )3, (char *)"type", & parse_type, & pred_type}, 
        {(enum arg_type )3, (char *)"uid", & parse_uid, & pred_uid}, 
        {(enum arg_type )3, (char *)"used", & parse_used, & pred_used}, 
        {(enum arg_type )3, (char *)"user", & parse_user, & pred_user}, 
        {(enum arg_type )0, (char *)"warn", & parse_warn, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"wholename", & parse_wholename, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"writable", & parse_accesscheck, & pred_writable}, 
        {(enum arg_type )0, (char *)"xdev", & parse_xdev, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"xtype", & parse_xtype, & pred_xtype}, 
        {(enum arg_type )3, (char *)"false", & parse_false, & pred_false}, 
        {(enum arg_type )3, (char *)"true", & parse_true, & pred_true}, 
        {(enum arg_type )1, (char *)"noop", (boolean (*)(struct parser_table  const  *p , char **argv , int *arg_ptr ))((void *)0), & pred_true}, 
        {(enum arg_type )3, (char *)"help", & parse_help, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"-help", & parse_help, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"version", & parse_version, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"-version", & parse_version, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)0, (boolean (*)(struct parser_table  const  *p , char **argv , int *arg_ptr ))0, (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))0}};
static char const   *first_nonoption_arg  =    (char const   *)((void *)0);
static struct parser_table  const  *noop  =    (struct parser_table  const  *)((void *)0);
static struct parser_table  const  *get_noop(void) 
{ int i ;

  {
  if ((unsigned long )((void *)0) == (unsigned long )noop) {
    i = 0;
    while ((unsigned long )parse_table[i].parser_name != (unsigned long )((char */* const  */)0)) {
      if (1U == (unsigned int )((unsigned int const   )parse_table[i].type)) {
        noop = & parse_table[i];
        break;
      } else {

      }
      i ++;
    }
  } else {

  }
  return (noop);
}
}
void set_follow_state(enum SymlinkOption opt ) 
{ 

  {
  if (options.debug_options & 2UL) {
    options.xstat = & debug_stat;
  } else {
    switch ((int )opt) {
    case 1: 
    options.xstat = & optionl_stat;
    options.no_leaf_check = (_Bool)1;
    break;
    case 0: 
    options.xstat = & optionp_stat;
    break;
    case 2: 
    options.xstat = & optionh_stat;
    options.no_leaf_check = (_Bool)1;
    }
  }
  options.symlink_handling = opt;
  return;
}
}
void parse_begin_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) 
{ 

  {
  first_nonoption_arg = (char const   *)((void *)0);
  return;
}
}
void parse_end_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) 
{ 

  {
  return;
}
}
struct parser_table  const  *find_parser(char *search_name ) 
{ int i ;
  char const   *original_arg ;
  char *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___1 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  original_arg = (char const   *)search_name;
  if ((int )*search_name == 45) {
    search_name ++;
  } else {

  }
  i = 0;
  while ((unsigned long )parse_table[i].parser_name != (unsigned long )((char */* const  */)0)) {
    if (0) {
      __s1_len = __builtin_strlen((char const   *)parse_table[i].parser_name);
      __s2_len = __builtin_strlen((char const   *)search_name);
      if (! ((unsigned long )((void const   *)(parse_table[i].parser_name + 1)) - (unsigned long )((void const   *)parse_table[i].parser_name) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)(search_name + 1)) - (unsigned long )((void const   *)search_name) == 1UL)) {
            tmp___6 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___6 = 1;
            } else {
              tmp___6 = 0;
            }
          }
        } else {
          tmp___6 = 0;
        }
      }
      if (tmp___6) {
        tmp___1 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
        tmp___5 = tmp___1;
      } else {
        tmp___4 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
        tmp___5 = tmp___4;
      }
    } else {
      tmp___4 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
      tmp___5 = tmp___4;
    }
    if (tmp___5 == 0) {
      if ((unsigned int const   )parse_table[i].type != 2U) {
        if ((unsigned int const   )parse_table[i].type == 0U) {
          if ((unsigned long )first_nonoption_arg != (unsigned long )((void *)0)) {
            if (options.warnings) {
              tmp = dcgettext((char const   *)((void *)0), "warning: you have specified the %s option after a non-option argument %s, but options are not positional (%s affects tests specified before it as well as those specified after it).  Please specify options before other arguments.\n", 5);
              error(0, 0, tmp, original_arg, first_nonoption_arg, original_arg);
            } else {

            }
          } else {

          }
        } else {
          if ((unsigned long )first_nonoption_arg == (unsigned long )((void *)0)) {
            first_nonoption_arg = original_arg;
          } else {

          }
        }
      } else {

      }
      return (& parse_table[i]);
    } else {

    }
    i ++;
  }
  return ((struct parser_table  const  *)((void *)0));
}
}
static float estimate_file_age_success_rate(float num_days ) 
{ 

  {
  if ((double )num_days < 0.1) {
    return (0.01f);
  } else {
    if (num_days < (float )1) {
      return (0.3f);
    } else {
      if (num_days > (float )100) {
        return (0.3f);
      } else {
        return (0.39f);
      }
    }
  }
}
}
static float estimate_timestamp_success_rate(time_t when ) 
{ int num_days ;
  float tmp ;

  {
  num_days = (int )((when - options.cur_day_start) / 86400L);
  tmp = estimate_file_age_success_rate((float )num_days);
  return (tmp);
}
}
static boolean parse_amin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num ;
  enum comparison_type c_type ;
  time_t t ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = get_num_days(*(argv + *arg_ptr), & num, & c_type);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  t = (long )((unsigned long )(options.cur_day_start + 86400L) - num * 60UL);
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.negative = (_Bool )(t < 0L);
  our_pred->args.info.l_val = (unsigned long )t;
  our_pred->est_success_rate = estimate_file_age_success_rate((float )num);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_and(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred(entry);
  our_pred->pred_func = & pred_and;
  our_pred->p_type = (enum predicate_type )3;
  our_pred->p_prec = (enum predicate_precedence )3;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_anewer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct stat stat_newer ;
  int *tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___0 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & stat_newer);
  if (tmp___0) {
    tmp = __errno_location();
    error(1, *tmp, (char *)"%s", *(argv + *arg_ptr));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.time = stat_newer.st_mtim.tv_sec;
  our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
boolean parse_close(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred(entry);
  our_pred->pred_func = & pred_close;
  our_pred->p_type = (enum predicate_type )5;
  our_pred->p_prec = (enum predicate_precedence )0;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_cmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num ;
  enum comparison_type c_type ;
  time_t t ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = get_num_days(*(argv + *arg_ptr), & num, & c_type);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  t = (long )((unsigned long )(options.cur_day_start + 86400L) - num * 60UL);
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.negative = (_Bool )(t < 0L);
  our_pred->args.info.l_val = (unsigned long )t;
  our_pred->est_success_rate = estimate_file_age_success_rate((float )num);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_cnewer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct stat stat_newer ;
  int *tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___0 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & stat_newer);
  if (tmp___0) {
    tmp = __errno_location();
    error(1, *tmp, (char *)"%s", *(argv + *arg_ptr));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.time = stat_newer.st_mtim.tv_sec;
  our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_comma(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred(entry);
  our_pred->pred_func = & pred_comma;
  our_pred->p_type = (enum predicate_type )3;
  our_pred->p_prec = (enum predicate_precedence )1;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_daystart(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct tm *local ;
  long tmp ;

  {
  if ((int )options.full_days == 0) {
    options.cur_day_start += 86400L;
    local = localtime((time_t const   *)(& options.cur_day_start));
    if (local) {
      tmp = (long )((local->tm_sec + local->tm_min * 60) + local->tm_hour * 3600);
    } else {
      tmp = options.cur_day_start % 86400L;
    }
    options.cur_day_start -= tmp;
    options.full_days = (_Bool)1;
  } else {

  }
  return ((_Bool)1);
}
}
static boolean parse_delete(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  options.do_dir_first = (_Bool)0;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_depth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.do_dir_first = (_Bool)0;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_d(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char *tmp ;
  boolean tmp___0 ;

  {
  if (options.warnings) {
    tmp = dcgettext((char const   *)((void *)0), "warning: the -d option is deprecated; please use -depth instead, because the latter is a POSIX-compliant feature.", 5);
    error(0, 0, tmp);
  } else {

  }
  tmp___0 = parse_depth(entry, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_empty(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  our_pred = insert_primary(entry);
  our_pred->est_success_rate = 0.01f;
  return ((_Bool)1);
}
}
static boolean parse_exec(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-exec", entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_execdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-execdir", entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_false(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  tmp___0 = (_Bool)0;
  our_pred->no_default_print = tmp___0;
  our_pred->side_effects = tmp___0;
  our_pred->est_success_rate = 0.0f;
  return ((_Bool)1);
}
}
static boolean parse_fls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary(entry);
  our_pred->args.stream = open_output_file(*(argv + *arg_ptr));
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  our_pred->est_success_rate = 1.0f;
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_fprintf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ FILE *fp ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  if ((unsigned long )*(argv + (*arg_ptr + 1)) == (unsigned long )((void *)0)) {
    (*arg_ptr) ++;
    return ((_Bool)0);
  } else {

  }
  fp = open_output_file(*(argv + *arg_ptr));
  (*arg_ptr) ++;
  tmp = insert_fprintf(fp, entry, & pred_fprintf, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_follow(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  set_follow_state((enum SymlinkOption )1);
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_fprint(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary(entry);
  our_pred->args.printf_vec.segment = (struct segment *)((void *)0);
  our_pred->args.printf_vec.stream = open_output_file(*(argv + *arg_ptr));
  our_pred->args.printf_vec.dest_is_tty = stream_is_tty(our_pred->args.printf_vec.stream);
  our_pred->args.printf_vec.quote_opts = clone_quoting_options((struct quoting_options *)((void *)0));
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->est_success_rate = 1.0f;
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_fprint0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary(entry);
  our_pred->args.stream = open_output_file(*(argv + *arg_ptr));
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->est_success_rate = 1.0f;
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static float estimate_fstype_success_rate(char const   *fsname ) 
{ struct stat dir_stat ;
  char const   *dir ;
  char const   *fstype ;
  char *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___1 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___7 ;

  {
  dir = "/";
  tmp___7 = stat((char const   */* __restrict  */)dir, (struct stat */* __restrict  */)(& dir_stat));
  if (0 == (int )tmp___7) {
    tmp = filesystem_type((struct stat  const  *)(& dir_stat), dir);
    fstype = (char const   *)tmp;
    if (0) {
      __s1_len = __builtin_strlen(fsname);
      __s2_len = __builtin_strlen(fstype);
      if (! ((unsigned long )((void const   *)(fsname + 1)) - (unsigned long )((void const   *)fsname) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)(fstype + 1)) - (unsigned long )((void const   *)fstype) == 1UL)) {
            tmp___6 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___6 = 1;
            } else {
              tmp___6 = 0;
            }
          }
        } else {
          tmp___6 = 0;
        }
      }
      if (tmp___6) {
        tmp___1 = __builtin_strcmp(fsname, fstype);
        tmp___5 = tmp___1;
      } else {
        tmp___4 = __builtin_strcmp(fsname, fstype);
        tmp___5 = tmp___4;
      }
    } else {
      tmp___4 = __builtin_strcmp(fsname, fstype);
      tmp___5 = tmp___4;
    }
    if (0 == tmp___5) {
      return (0.7f);
    } else {
      return (0.3f);
    }
  } else {

  }
  return (1.0f);
}
}
static boolean parse_fstype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary(entry);
  our_pred->args.str = *(argv + *arg_ptr);
  our_pred->est_success_rate = estimate_fstype_success_rate((char const   *)*(argv + *arg_ptr));
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_gid(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  if (p->args.info.l_val < 100UL) {
    p->est_success_rate = (float )0.99;
  } else {
    p->est_success_rate = (float )0.2;
  }
  return ((_Bool )p);
}
}
static boolean parse_group(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct group *cur_gr ;
  struct predicate *our_pred ;
  gid_t gid ;
  int gid_len ;
  unsigned long tmp___8 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___9 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  cur_gr = getgrnam((char const   *)*(argv + *arg_ptr));
  endgrent();
  if ((unsigned long )cur_gr != (unsigned long )((void *)0)) {
    gid = cur_gr->gr_gid;
  } else {
    tmp___8 = __builtin_strspn((char const   *)*(argv + *arg_ptr), "0123456789");
    gid_len = (int )tmp___8;
    if (gid_len == 0) {
      return ((_Bool)0);
    } else {
      if ((int )*(*(argv + *arg_ptr) + gid_len) != 0) {
        return ((_Bool)0);
      } else {

      }
    }
    tmp___9 = atoi((char const   *)*(argv + *arg_ptr));
    gid = (unsigned int )tmp___9;
  }
  our_pred = insert_primary(entry);
  our_pred->args.gid = gid;
  if (our_pred->args.info.l_val < 100UL) {
    our_pred->est_success_rate = (float )0.99;
  } else {
    our_pred->est_success_rate = (float )0.2;
  }
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_help(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;

  {
  usage(stdout, 0, (char *)((void *)0));
  tmp = dcgettext((char const   *)((void *)0), "\ndefault path is the current directory; default expression is -print\nexpression may consist of: operators, options, tests, and actions:\n", 5);
  puts((char const   *)tmp);
  tmp___0 = dcgettext((char const   *)((void *)0), "operators (decreasing precedence; -and is implicit where no others are given):\n      ( EXPR )   ! EXPR   -not EXPR   EXPR1 -a EXPR2   EXPR1 -and EXPR2\n      EXPR1 -o EXPR2   EXPR1 -or EXPR2   EXPR1 , EXPR2\n", 5);
  puts((char const   *)tmp___0);
  tmp___1 = dcgettext((char const   *)((void *)0), "positional options (always true): -daystart -follow -regextype\n\nnormal options (always true, specified before other expressions):\n      -depth --help -maxdepth LEVELS -mindepth LEVELS -mount -noleaf\n      --version -xdev -ignore_readdir_race -noignore_readdir_race\n", 5);
  puts((char const   *)tmp___1);
  tmp___2 = dcgettext((char const   *)((void *)0), "tests (N can be +N or -N or N): -amin N -anewer FILE -atime N -cmin N\n      -cnewer FILE -ctime N -empty -false -fstype TYPE -gid N -group NAME\n      -ilname PATTERN -iname PATTERN -inum N -iwholename PATTERN -iregex PATTERN\n      -links N -lname PATTERN -mmin N -mtime N -name PATTERN -newer FILE", 5);
  puts((char const   *)tmp___2);
  tmp___3 = dcgettext((char const   *)((void *)0), "      -nouser -nogroup -path PATTERN -perm [+-]MODE -regex PATTERN\n      -readable -writable -executable\n      -wholename PATTERN -size N[bcwkMG] -true -type [bcdpflsD] -uid N\n      -used N -user NAME -xtype [bcdpfls]\n", 5);
  puts((char const   *)tmp___3);
  tmp___4 = dcgettext((char const   *)((void *)0), "actions: -delete -print0 -printf FORMAT -fprintf FILE FORMAT -print \n      -fprint0 FILE -fprint FILE -ls -fls FILE -prune -quit\n      -exec COMMAND ; -exec COMMAND {} + -ok COMMAND ;\n      -execdir COMMAND ; -execdir COMMAND {} + -okdir COMMAND ;\n", 5);
  puts((char const   *)tmp___4);
  tmp___5 = dcgettext((char const   *)((void *)0), "Report (and track progress on fixing) bugs via the findutils bug-reporting\npage at http://savannah.gnu.org/ or, if you have no web access, by sending\nemail to <bug-findutils@gnu.org>.", 5);
  puts((char const   *)tmp___5);
  exit(0);
}
}
static float estimate_pattern_match_rate(char const   *pattern , int is_regex ) 
{ char *tmp___8 ;
  char *tmp___18 ;

  {
  tmp___8 = __builtin_strpbrk(pattern, "*?[");
  if ((char __attribute__((__gnu_inline__))  *)tmp___8) {
    return (0.8f);
  } else {
    if (is_regex) {
      tmp___18 = __builtin_strpbrk(pattern, ".");
      if ((char __attribute__((__gnu_inline__))  *)tmp___18) {
        return (0.8f);
      } else {
        return (0.1f);
      }
    } else {
      return (0.1f);
    }
  }
}
}
static boolean parse_ilname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  float tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary(entry);
  our_pred->args.str = *(argv + *arg_ptr);
  tmp = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  our_pred->est_success_rate = (float )(0.1 * (double )tmp);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean fnmatch_sanitycheck(void) 
{ char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp___0 = fnmatch("foo", "foo", 0);
  if (0 != tmp___0) {
    tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
    error(1, 0, tmp);
    return ((_Bool)0);
  } else {
    tmp___1 = fnmatch("Foo", "foo", 0);
    if (0 == tmp___1) {
      tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
      error(1, 0, tmp);
      return ((_Bool)0);
    } else {
      tmp___2 = fnmatch("Foo", "foo", 1 << 4);
      if (0 != tmp___2) {
        tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
        error(1, 0, tmp);
        return ((_Bool)0);
      } else {

      }
    }
  }
  return ((_Bool)1);
}
}
static boolean check_name_arg(char const   *pred , char const   *arg ) 
{ char *tmp ;
  char *tmp___1 ;

  {
  tmp___1 = __builtin_strchr((char *)arg, '/');
  if (tmp___1) {
    tmp = dcgettext((char const   *)((void *)0), "warning: Unix filenames usually don\'t contain slashes (though pathnames do).  That means that \'%s %s\' will probably evaluate to false all the time on this system.  You might find the \'-wholename\' test more useful, or perhaps \'-samefile\'.  Alternatively, if you are using GNU grep, you could use \'find ... -print0 | grep -FzZ %s\'.", 5);
    error(0, 0, tmp, pred, arg, arg);
  } else {

  }
  return ((_Bool)1);
}
}
static boolean parse_iname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = check_name_arg("-iname", (char const   *)*(argv + *arg_ptr));
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  fnmatch_sanitycheck();
  our_pred = insert_primary(entry);
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->args.str = *(argv + *arg_ptr);
  our_pred->est_success_rate = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_inum(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  p->est_success_rate = (float )1e-6;
  return ((_Bool )p);
}
}
static boolean parse_ipath(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char *tmp ;
  boolean tmp___0 ;

  {
  tmp = dcgettext((char const   *)((void *)0), "warning: the predicate -ipath is deprecated; please use -iwholename instead.", 5);
  error(0, 0, tmp);
  tmp___0 = parse_iwholename(entry, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_iwholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  fnmatch_sanitycheck();
  our_pred = insert_primary_withpred(entry, & pred_ipath);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  our_pred->args.str = *(argv + *arg_ptr);
  our_pred->est_success_rate = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_iregex(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_regex(argv, arg_ptr, entry, (int )(((((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (unsigned long )options.regex_options));
  return (tmp);
}
}
static boolean parse_links(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  if (p->args.info.l_val == 1UL) {
    p->est_success_rate = (float )0.99;
  } else {
    if (p->args.info.l_val == 2UL) {
      p->est_success_rate = (float )0.01;
    } else {
      p->est_success_rate = (float )1e-3;
    }
  }
  return ((_Bool )p);
}
}
static boolean parse_lname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  float tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  fnmatch_sanitycheck();
  our_pred = insert_primary(entry);
  our_pred->args.str = *(argv + *arg_ptr);
  tmp = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  our_pred->est_success_rate = (float )(0.1 * (double )tmp);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_ls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  return ((_Bool)1);
}
}
static boolean parse_maxdepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int depth_len ;
  unsigned long tmp___8 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___9 ;
  boolean tmp___10 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___8 = __builtin_strspn((char const   *)*(argv + *arg_ptr), "0123456789");
  depth_len = (int )tmp___8;
  if (depth_len == 0) {
    return ((_Bool)0);
  } else {
    if ((int )*(*(argv + *arg_ptr) + depth_len) != 0) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___9 = atoi((char const   *)*(argv + *arg_ptr));
  options.maxdepth = (int )tmp___9;
  if (options.maxdepth < 0) {
    return ((_Bool)0);
  } else {

  }
  (*arg_ptr) ++;
  tmp___10 = parse_noop(entry, argv, arg_ptr);
  return (tmp___10);
}
}
static boolean parse_mindepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int depth_len ;
  unsigned long tmp___8 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___9 ;
  boolean tmp___10 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___8 = __builtin_strspn((char const   *)*(argv + *arg_ptr), "0123456789");
  depth_len = (int )tmp___8;
  if (depth_len == 0) {
    return ((_Bool)0);
  } else {
    if ((int )*(*(argv + *arg_ptr) + depth_len) != 0) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___9 = atoi((char const   *)*(argv + *arg_ptr));
  options.mindepth = (int )tmp___9;
  if (options.mindepth < 0) {
    return ((_Bool)0);
  } else {

  }
  (*arg_ptr) ++;
  tmp___10 = parse_noop(entry, argv, arg_ptr);
  return (tmp___10);
}
}
static boolean parse_mmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num ;
  enum comparison_type c_type ;
  time_t t ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = get_num_days(*(argv + *arg_ptr), & num, & c_type);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  t = (long )((unsigned long )(options.cur_day_start + 86400L) - num * 60UL);
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.negative = (_Bool )(t < 0L);
  our_pred->args.info.l_val = (unsigned long )t;
  our_pred->est_success_rate = estimate_file_age_success_rate((float )num);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_name(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = check_name_arg("-name", (char const   *)*(argv + *arg_ptr));
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  fnmatch_sanitycheck();
  our_pred = insert_primary(entry);
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->args.str = *(argv + *arg_ptr);
  our_pred->est_success_rate = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_negate(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_chk_op(entry);
  our_pred->pred_func = & pred_negate;
  our_pred->p_type = (enum predicate_type )2;
  our_pred->p_prec = (enum predicate_precedence )4;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_newer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct stat stat_newer ;
  int *tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___0 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & stat_newer);
  if (tmp___0) {
    tmp = __errno_location();
    error(1, *tmp, (char *)"%s", *(argv + *arg_ptr));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.time = stat_newer.st_mtim.tv_sec;
  our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_noleaf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.no_leaf_check = (_Bool)1;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_nogroup(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  our_pred = insert_primary(entry);
  our_pred->est_success_rate = (float )1e-4;
  return ((_Bool)1);
}
}
static boolean parse_nouser(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  our_pred = insert_primary(entry);
  our_pred->est_success_rate = (float )1e-3;
  return ((_Bool)1);
}
}
static boolean parse_nowarn(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.warnings = (_Bool)0;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_ok(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-ok", entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_okdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-okdir", entry, argv, arg_ptr);
  return (tmp);
}
}
boolean parse_open(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_chk_op(entry);
  our_pred->pred_func = & pred_open;
  our_pred->p_type = (enum predicate_type )4;
  our_pred->p_prec = (enum predicate_precedence )0;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_or(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred(entry);
  our_pred->pred_func = & pred_or;
  our_pred->p_type = (enum predicate_type )3;
  our_pred->p_prec = (enum predicate_precedence )2;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_path(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = parse_wholename(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_wholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary_withpred(entry, & pred_path);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  our_pred->args.str = *(argv + *arg_ptr);
  our_pred->est_success_rate = estimate_pattern_match_rate((char const   *)our_pred->args.str, 0);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_perm(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ mode_t perm_val[2] ;
  float rate ;
  int mode_start ;
  boolean havekind ;
  enum permissions_type kind ;
  struct mode_change *change ;
  struct predicate *our_pred ;
  char *tmp ;
  char *tmp___0 ;

  {
  mode_start = 0;
  havekind = (_Bool)0;
  kind = (enum permissions_type )2;
  change = (struct mode_change *)((void *)0);
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  switch ((int )*(*(argv + *arg_ptr) + 0)) {
  case 45: 
  mode_start = 1;
  kind = (enum permissions_type )0;
  havekind = (_Bool)1;
  rate = (float )0.2;
  break;
  case 43: 
  change = mode_compile((char const   *)*(argv + *arg_ptr));
  if ((unsigned long )((void *)0) == (unsigned long )change) {
    mode_start = 1;
    kind = (enum permissions_type )1;
    rate = (float )0.3;
  } else {
    mode_start = 0;
    kind = (enum permissions_type )2;
    rate = (float )0.1;
  }
  havekind = (_Bool)1;
  break;
  case 47: 
  mode_start = 1;
  kind = (enum permissions_type )1;
  havekind = (_Bool)1;
  rate = (float )0.3;
  break;
  default: 
  rate = (float )0.01;
  break;
  }
  if ((unsigned long )((void *)0) == (unsigned long )change) {
    change = mode_compile((char const   *)(*(argv + *arg_ptr) + mode_start));
    if ((unsigned long )((void *)0) == (unsigned long )change) {
      tmp = dcgettext((char const   *)((void *)0), "invalid mode `%s\'", 5);
      error(1, 0, tmp, *(argv + *arg_ptr));
    } else {

    }
  } else {

  }
  perm_val[0] = mode_adjust(0U, (_Bool)0, 0U, (struct mode_change  const  *)change, (mode_t *)((void *)0));
  perm_val[1] = mode_adjust(0U, (_Bool)1, 0U, (struct mode_change  const  *)change, (mode_t *)((void *)0));
  free((void *)change);
  our_pred = insert_primary(entry);
  our_pred->est_success_rate = rate;
  if (havekind) {
    our_pred->args.perm.kind = kind;
  } else {
    switch ((int )*(*(argv + *arg_ptr) + 0)) {
    case 45: 
    our_pred->args.perm.kind = (enum permissions_type )0;
    break;
    case 43: 
    our_pred->args.perm.kind = (enum permissions_type )1;
    break;
    default: 
    our_pred->args.perm.kind = (enum permissions_type )2;
    break;
    }
  }
  if (47 == (int )*(*(argv + *arg_ptr) + 0)) {
    if (0U == perm_val[0]) {
      if (0U == perm_val[1]) {
        tmp___0 = dcgettext((char const   *)((void *)0), "warning: you have specified a mode pattern %s which is equivalent to 000. The meaning of -perm /000 will soon be changed to be consistent with -perm -000; that is, at the moment it matches no files but it will soon be changed to match all files.", 5);
        error(0, 0, tmp___0, *(argv + *arg_ptr));
      } else {

      }
    } else {

    }
  } else {

  }
  memcpy((void */* __restrict  */)(our_pred->args.perm.val), (void const   */* __restrict  */)(perm_val), sizeof(perm_val));
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
boolean parse_print(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->args.printf_vec.segment = (struct segment *)((void *)0);
  our_pred->args.printf_vec.stream = stdout;
  our_pred->args.printf_vec.dest_is_tty = stream_is_tty(stdout);
  our_pred->args.printf_vec.quote_opts = clone_quoting_options((struct quoting_options *)((void *)0));
  return ((_Bool)1);
}
}
static boolean parse_print0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  return ((_Bool)1);
}
}
static boolean parse_printf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = insert_fprintf(stdout, entry, & pred_fprintf, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_prune(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  our_pred->side_effects = (_Bool)1;
  our_pred->no_default_print = (_Bool)0;
  return ((_Bool)1);
}
}
static boolean parse_quit(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;

  {
  tmp = insert_primary(entry);
  our_pred = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->side_effects = (_Bool)1;
  our_pred->no_default_print = (_Bool)0;
  our_pred->est_success_rate = (float )1e-6;
  return ((_Bool)1);
}
}
static boolean parse_regextype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  options.regex_options = get_regex_type((char const   *)*(argv + *arg_ptr));
  (*arg_ptr) ++;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_regex(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_regex(argv, arg_ptr, entry, options.regex_options);
  return (tmp);
}
}
static boolean insert_regex(char **argv , int *arg_ptr , struct parser_table  const  *entry , int regex_options ) 
{ struct predicate *our_pred ;
  struct re_pattern_buffer *re ;
  char const   *error_message ;
  boolean tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary_withpred(entry, & pred_regex);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  tmp___0 = xmalloc(sizeof(struct re_pattern_buffer ));
  re = (struct re_pattern_buffer *)tmp___0;
  our_pred->args.regex = re;
  re->allocated = 100UL;
  tmp___1 = xmalloc(re->allocated);
  re->buffer = (unsigned char *)tmp___1;
  re->fastmap = (char *)((void *)0);
  rpl_re_set_syntax((unsigned long )regex_options);
  re->syntax = (unsigned long )regex_options;
  re->translate = (unsigned char *)((void *)0);
  tmp___2 = strlen((char const   *)*(argv + *arg_ptr));
  error_message = rpl_re_compile_pattern((char const   *)*(argv + *arg_ptr), tmp___2, re);
  if (error_message) {
    error(1, 0, (char *)"%s", error_message);
  } else {

  }
  (*arg_ptr) ++;
  our_pred->est_success_rate = estimate_pattern_match_rate((char const   *)*(argv + *arg_ptr), 1);
  return ((_Bool)1);
}
}
static boolean parse_size(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num ;
  enum comparison_type c_type ;
  int blksize ;
  int len ;
  float rate ;
  size_t tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  boolean tmp___2 ;

  {
  blksize = 512;
  rate = (float )1.0;
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = strlen((char const   *)*(argv + *arg_ptr));
  len = (int )tmp;
  if (len == 0) {
    tmp___0 = dcgettext((char const   *)((void *)0), "invalid null argument to -size", 5);
    error(1, 0, tmp___0);
  } else {

  }
  switch ((int )*(*(argv + *arg_ptr) + (len - 1))) {
  case 98: 
  blksize = 512;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
  case 99: 
  blksize = 1;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
  case 107: 
  blksize = 1024;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
  case 77: 
  blksize = 1048576;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
  case 71: 
  blksize = 1073741824;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
  case 119: 
  blksize = 2;
  *(*(argv + *arg_ptr) + (len - 1)) = (char )'\000';
  break;
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
  break;
  default: 
  tmp___1 = dcgettext((char const   *)((void *)0), "invalid -size type `%c\'", 5);
  error(1, 0, tmp___1, *(*(argv + *arg_ptr) + (len - 1)));
  }
  tmp___2 = get_num(*(argv + *arg_ptr), & num, & c_type);
  if (! tmp___2) {
    return ((_Bool)0);
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.size.kind = c_type;
  our_pred->args.size.blocksize = blksize;
  our_pred->args.size.size = num;
  our_pred->need_stat = (_Bool)1;
  our_pred->need_type = (_Bool)0;
  if (0U == (unsigned int )c_type) {
    if (num * (unsigned long )blksize > 20480UL) {
      our_pred->est_success_rate = (float )0.1;
    } else {
      our_pred->est_success_rate = (float )0.9;
    }
  } else {
    if (1U == (unsigned int )c_type) {
      if (num * (unsigned long )blksize > 20480UL) {
        our_pred->est_success_rate = (float )0.9;
      } else {
        our_pred->est_success_rate = (float )0.1;
      }
    } else {
      our_pred->est_success_rate = (float )0.01;
    }
  }
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_samefile(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct stat st ;
  int *tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp___0 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & st);
  if (tmp___0) {
    tmp = __errno_location();
    error(1, *tmp, (char *)"%s", *(argv + *arg_ptr));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.fileid.ino = st.st_ino;
  our_pred->args.fileid.dev = st.st_dev;
  our_pred->need_type = (_Bool)0;
  our_pred->need_stat = (_Bool)1;
  our_pred->est_success_rate = 0.01f;
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_true(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_noop(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct parser_table  const  *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  tmp = get_noop();
  tmp___1 = parse_true(tmp, argv, arg_ptr);
  __repair_del_1509__0: /* CIL Label */ 
  {

  }
}
}
static boolean parse_accesscheck(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary(entry);
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  tmp___0 = (_Bool)0;
  our_pred->no_default_print = tmp___0;
  our_pred->side_effects = tmp___0;
  if ((unsigned long )our_pred->pred_func == (unsigned long )(& pred_executable)) {
    our_pred->est_success_rate = (float )0.2;
  } else {
    our_pred->est_success_rate = (float )0.9;
  }
  return ((_Bool)1);
}
}
static boolean parse_type(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_type(argv, arg_ptr, entry, & pred_type);
  return (tmp);
}
}
static boolean parse_uid(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  if (p->args.info.l_val < 100UL) {
    p->est_success_rate = (float )0.99;
  } else {
    p->est_success_rate = (float )0.2;
  }
  return ((_Bool )p);
}
}
static boolean parse_used(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num_days ;
  enum comparison_type c_type ;
  time_t t ;
  boolean tmp ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = get_num(*(argv + *arg_ptr), & num_days, & c_type);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  t = (long )(num_days * 86400UL);
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.negative = (_Bool )(t < 0L);
  our_pred->args.info.l_val = (unsigned long )t;
  our_pred->est_success_rate = estimate_file_age_success_rate((float )num_days);
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean parse_user(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct passwd *cur_pwd ;
  struct predicate *our_pred ;
  uid_t uid ;
  int uid_len ;
  unsigned long tmp___8 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___9 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  cur_pwd = getpwnam((char const   *)*(argv + *arg_ptr));
  endpwent();
  if ((unsigned long )cur_pwd != (unsigned long )((void *)0)) {
    uid = cur_pwd->pw_uid;
  } else {
    tmp___8 = __builtin_strspn((char const   *)*(argv + *arg_ptr), "0123456789");
    uid_len = (int )tmp___8;
    if (uid_len == 0) {
      return ((_Bool)0);
    } else {
      if ((int )*(*(argv + *arg_ptr) + uid_len) != 0) {
        return ((_Bool)0);
      } else {

      }
    }
    tmp___9 = atoi((char const   *)*(argv + *arg_ptr));
    uid = (unsigned int )tmp___9;
  }
  our_pred = insert_primary(entry);
  our_pred->args.uid = uid;
  if (our_pred->args.uid < 100U) {
    our_pred->est_success_rate = (float )0.99;
  } else {
    our_pred->est_success_rate = (float )0.2;
  }
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
extern char *version_string ;
static boolean parse_version(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int features ;
  char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  boolean tmp___2 ;

  {
  features = 0;
  fflush(stderr);
  tmp = dcgettext((char const   *)((void *)0), "GNU find version %s\n", 5);
  printf((char const   */* __restrict  */)tmp, version_string);
  tmp___0 = dcgettext((char const   *)((void *)0), "Features enabled: ", 5);
  printf((char const   */* __restrict  */)tmp___0);
  printf((char const   */* __restrict  */)"D_TYPE ");
  features ++;
  if (options.open_nofollow_available) {
    tmp___1 = "enabled";
  } else {
    tmp___1 = "disabled";
  }
  printf((char const   */* __restrict  */)"O_NOFOLLOW(%s) ", tmp___1);
  features ++;
  printf((char const   */* __restrict  */)"LEAF_OPTIMISATION ");
  features ++;
  tmp___2 = is_fts_enabled();
  if (tmp___2) {
    printf((char const   */* __restrict  */)"FTS ");
    features ++;
  } else {

  }
  printf((char const   */* __restrict  */)"CBO(level=%d) ", (int )options.optimisation_level);
  features ++;
  if (0 == features) {
    printf((char const   */* __restrict  */)"none");
  } else {

  }
  printf((char const   */* __restrict  */)"\n");
  exit(0);
}
}
static boolean parse_xdev(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.stay_on_filesystem = (_Bool)1;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_ignore_race(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.ignore_readdir_race = (_Bool)1;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_noignore_race(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.ignore_readdir_race = (_Bool)0;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_warn(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.warnings = (_Bool)1;
  tmp = parse_noop(entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_xtype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_type(argv, arg_ptr, entry, & pred_xtype);
  return (tmp);
}
}
static boolean insert_type(char **argv , int *arg_ptr , struct parser_table  const  *entry , boolean (*which_pred)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) 
{ mode_t type_cell ;
  struct predicate *our_pred ;
  float rate ;
  size_t tmp ;

  {
  rate = (float )0.5;
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {
      tmp = strlen((char const   *)*(argv + *arg_ptr));
      if (tmp != 1UL) {
        return ((_Bool)0);
      } else {

      }
    }
  }
  switch ((int )*(*(argv + *arg_ptr) + 0)) {
  case 98: 
  type_cell = 24576U;
  rate = 0.01f;
  break;
  case 99: 
  type_cell = 8192U;
  rate = 0.01f;
  break;
  case 100: 
  type_cell = 16384U;
  rate = 0.4f;
  break;
  case 102: 
  type_cell = 32768U;
  rate = 0.95f;
  break;
  case 108: 
  type_cell = 40960U;
  rate = 0.1f;
  break;
  case 112: 
  type_cell = 4096U;
  rate = 0.01f;
  break;
  case 115: 
  type_cell = 49152U;
  rate = 0.01f;
  break;
  default: ;
  return ((_Bool)0);
  }
  our_pred = insert_primary_withpred(entry, which_pred);
  our_pred->est_success_rate = rate;
  if ((unsigned long )which_pred == (unsigned long )(& pred_xtype)) {
    our_pred->need_stat = (_Bool)1;
    our_pred->need_type = (_Bool)0;
  } else {
    our_pred->need_stat = (_Bool)0;
    our_pred->need_type = (_Bool)1;
  }
  our_pred->args.type = type_cell;
  (*arg_ptr) ++;
  return ((_Bool)1);
}
}
static boolean stream_is_tty(FILE *fp ) 
{ int fd ;
  int tmp ;
  int tmp___1 ;
  int tmp___2 ;

  {
  tmp = fileno(fp);
  fd = tmp;
  if (-1 == fd) {
    return ((_Bool)0);
  } else {
    tmp___2 = isatty(fd);
    if (tmp___2) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    return ((_Bool )tmp___1);
  }
}
}
static boolean insert_fprintf(FILE *fp , struct parser_table  const  *entry , boolean (*func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) , char **argv , int *arg_ptr ) 
{ char *format ;
  register char *scan ;
  register char *scan2 ;
  struct segment **segmentp ;
  struct predicate *our_pred ;
  int tmp ;
  boolean tmp___0 ;
  register int n ;
  register int i ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  char *tmp___7 ;
  char *tmp___9 ;
  char *tmp___11 ;

  {
  tmp = *arg_ptr;
  (*arg_ptr) ++;
  format = *(argv + tmp);
  our_pred = insert_primary_withpred(entry, func);
  tmp___0 = (_Bool)1;
  our_pred->no_default_print = tmp___0;
  our_pred->side_effects = tmp___0;
  our_pred->args.printf_vec.stream = fp;
  our_pred->args.printf_vec.dest_is_tty = stream_is_tty(fp);
  our_pred->args.printf_vec.quote_opts = clone_quoting_options((struct quoting_options *)((void *)0));
  our_pred->need_type = (_Bool)0;
  our_pred->need_stat = (_Bool)0;
  segmentp = & our_pred->args.printf_vec.segment;
  *segmentp = (struct segment *)((void *)0);
  scan = format;
  while (*scan) {
    if ((int )*scan == 92) {
      scan2 = scan + 1;
      if ((int )*scan2 >= 48) {
        if ((int )*scan2 <= 55) {
          n = 0;
          i = n;
          while (1) {
            if (i < 3) {
              if ((int )*scan2 >= 48) {
                if (! ((int )*scan2 <= 55)) {
                  break;
                } else {

                }
              } else {
                break;
              }
            } else {
              break;
            }
            n = (8 * n + (int )*scan2) - 48;
            i ++;
            scan2 ++;
          }
          scan2 --;
          *scan = (char )n;
        } else {
          goto _L;
        }
      } else {
        _L: 
        switch ((int )*scan2) {
        case 97: 
        *scan = (char)7;
        break;
        case 98: 
        *scan = (char )'\b';
        break;
        case 99: 
        make_segment(segmentp, format, scan - format, 1, our_pred);
        if (our_pred->need_stat) {
          if ((unsigned int )our_pred->p_cost < 2U) {
            our_pred->p_cost = (enum EvaluationCost )2;
          } else {

          }
        } else {

        }
        return ((_Bool)1);
        case 102: 
        *scan = (char )'\f';
        break;
        case 110: 
        *scan = (char )'\n';
        break;
        case 114: 
        *scan = (char )'\r';
        break;
        case 116: 
        *scan = (char )'\t';
        break;
        case 118: 
        *scan = (char )'\v';
        break;
        case 92: 
        break;
        default: 
        tmp___1 = dcgettext((char const   *)((void *)0), "warning: unrecognized escape `\\%c\'", 5);
        error(0, 0, tmp___1, *scan2);
        scan ++;
        goto __Cont;
        }
      }
      segmentp = make_segment(segmentp, format, (scan - format) + 1, 0, our_pred);
      format = scan2 + 1;
      scan = scan2;
    } else {
      if ((int )*scan == 37) {
        if ((int )*(scan + 1) == 0) {
          tmp___2 = dcgettext((char const   *)((void *)0), "error: %s at end of format string", 5);
          error(1, 0, tmp___2, scan);
        } else {
          if ((int )*(scan + 1) == 37) {
            segmentp = make_segment(segmentp, format, (scan - format) + 1, 0, our_pred);
            scan ++;
            format = scan + 1;
            goto __Cont;
          } else {

          }
        }
        scan2 = scan;
        while (1) {
          scan2 ++;
          if (*scan2) {
            tmp___4 = __builtin_strchr((char *)"-+ #", (int )*scan2);
            if (! tmp___4) {
              break;
            } else {

            }
          } else {
            break;
          }
        }
        while (1) {
          tmp___5 = __ctype_b_loc();
          if (! ((int const   )*(*tmp___5 + (int )((unsigned char )*scan2)) & 2048)) {
            break;
          } else {

          }
          scan2 ++;
        }
        if ((int )*scan2 == 46) {
          scan2 ++;
          while (1) {
            tmp___6 = __ctype_b_loc();
            if (! ((int const   )*(*tmp___6 + (int )((unsigned char )*scan2)) & 2048)) {
              break;
            } else {

            }
            scan2 ++;
          }
        } else {

        }
        tmp___11 = __builtin_strchr((char *)"abcdDfFgGhHiklmMnpPstuUyY", (int )*scan2);
        if (tmp___11) {
          segmentp = make_segment(segmentp, format, scan2 - format, (int )*scan2, our_pred);
          scan = scan2;
          format = scan + 1;
        } else {
          tmp___9 = __builtin_strchr((char *)"ACT", (int )*scan2);
          if (tmp___9) {
            if (*(scan2 + 1)) {
              segmentp = make_segment(segmentp, format, scan2 - format, (int )*scan2 | ((int )*(scan2 + 1) << 8), our_pred);
              scan = scan2 + 1;
              format = scan + 1;
              goto __Cont;
            } else {
              tmp___7 = dcgettext((char const   *)((void *)0), "warning: unrecognized format directive `%%%c\'", 5);
              error(0, 0, tmp___7, *scan2);
              segmentp = make_segment(segmentp, format, scan - format, 0, our_pred);
              format = scan + 1;
              goto __Cont;
            }
          } else {
            tmp___7 = dcgettext((char const   *)((void *)0), "warning: unrecognized format directive `%%%c\'", 5);
            error(0, 0, tmp___7, *scan2);
            segmentp = make_segment(segmentp, format, scan - format, 0, our_pred);
            format = scan + 1;
            goto __Cont;
          }
        }
      } else {

      }
    }
    __Cont: 
    scan ++;
  }
  if ((unsigned long )scan > (unsigned long )format) {
    make_segment(segmentp, format, scan - format, 0, our_pred);
  } else {

  }
  return ((_Bool)1);
}
}
static struct segment **make_segment(struct segment **segment , char *format , int len , int kind , struct predicate *pred ) 
{ enum EvaluationCost mycost ;
  char *fmt ;
  void *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;

  {
  mycost = (enum EvaluationCost )0;
  tmp = xmalloc(sizeof(struct segment ));
  *segment = (struct segment *)tmp;
  (*segment)->kind = kind;
  (*segment)->next = (struct segment *)((void *)0);
  (*segment)->text_len = len;
  tmp___1 = xmalloc((unsigned long )len + sizeof("d"));
  tmp___0 = (char *)tmp___1;
  (*segment)->text = tmp___0;
  fmt = tmp___0;
  strncpy((char */* __restrict  */)fmt, (char const   */* __restrict  */)format, (unsigned long )len);
  fmt += len;
  switch (kind & 255) {
  case 0: 
  case 1: 
  break;
  case 108: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )3;
  tmp___2 = fmt;
  fmt ++;
  *tmp___2 = (char )'s';
  break;
  case 121: 
  pred->need_type = (_Bool)1;
  mycost = (enum EvaluationCost )1;
  tmp___3 = fmt;
  fmt ++;
  *tmp___3 = (char )'s';
  break;
  case 97: 
  case 65: 
  case 99: 
  case 67: 
  case 70: 
  case 103: 
  case 105: 
  case 77: 
  case 115: 
  case 116: 
  case 84: 
  case 117: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )2;
  tmp___4 = fmt;
  fmt ++;
  *tmp___4 = (char )'s';
  break;
  case 89: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )1;
  tmp___5 = fmt;
  fmt ++;
  *tmp___5 = (char )'s';
  break;
  case 102: 
  case 104: 
  case 72: 
  case 112: 
  case 80: 
  tmp___6 = fmt;
  fmt ++;
  *tmp___6 = (char )'s';
  break;
  case 71: 
  case 85: 
  case 98: 
  case 68: 
  case 107: 
  case 110: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )2;
  tmp___7 = fmt;
  fmt ++;
  *tmp___7 = (char )'s';
  break;
  case 100: 
  tmp___8 = fmt;
  fmt ++;
  *tmp___8 = (char )'d';
  break;
  case 109: 
  tmp___9 = fmt;
  fmt ++;
  *tmp___9 = (char )'o';
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )2;
  break;
  }
  *fmt = (char )'\000';
  if ((unsigned int )mycost > (unsigned int )pred->p_cost) {
    pred->p_cost = mycost;
  } else {

  }
  return (& (*segment)->next);
}
}
static void check_path_safety(char const   *action ) 
{ char const   *path ;
  char *tmp ;
  char *s ;
  char *tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  tmp = getenv("PATH");
  path = (char const   *)tmp;
  s = next_element(path, 1);
  while (1) {
    s = next_element((char const   *)((char *)((void *)0)), 1);
    if (! ((unsigned long )s != (unsigned long )((void *)0))) {
      break;
    } else {

    }
    if (0) {
      __s1_len = __builtin_strlen((char const   *)s);
      __s2_len = __builtin_strlen(".");
      if (! ((unsigned long )((void const   *)(s + 1)) - (unsigned long )((void const   *)s) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
            tmp___7 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___7 = 1;
            } else {
              tmp___7 = 0;
            }
          }
        } else {
          tmp___7 = 0;
        }
      }
      if (tmp___7) {
        tmp___2 = __builtin_strcmp((char const   *)s, ".");
        tmp___6 = tmp___2;
      } else {
        tmp___5 = __builtin_strcmp((char const   *)s, ".");
        tmp___6 = tmp___5;
      }
    } else {
      tmp___5 = __builtin_strcmp((char const   *)s, ".");
      tmp___6 = tmp___5;
    }
    if (0 == tmp___6) {
      tmp___0 = dcgettext((char const   *)((void *)0), "The current directory is included in the PATH environment variable, which is insecure in combination with the %s action of find.  Please remove the current directory from your $PATH (that is, remove \".\" or leading or trailing colons)", 5);
      error(1, 0, tmp___0, action);
    } else {

    }
  }
  return;
}
}
static boolean new_insert_exec_ok(char const   *action , struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int start ;
  int end ;
  int i ;
  int saw_braces ;
  boolean allow_plus ;
  int brace_count ;
  boolean (*func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
  enum BC_INIT_STATUS bcstatus ;
  struct predicate *our_pred ;
  struct exec_val *execp ;
  boolean tmp ;
  boolean tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *suffix ;
  char *tmp___3 ;
  char *tmp___4 ;
  size_t tmp___5 ;
  void *tmp___6 ;

  {
  func = (boolean (*)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))entry->pred_func;
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary_withpred(entry, func);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_stat = tmp___0;
  our_pred->need_type = tmp___0;
  execp = & our_pred->args.exec_vec;
  if ((unsigned long )func != (unsigned long )(& pred_okdir)) {
    if ((unsigned long )func != (unsigned long )(& pred_ok)) {
      allow_plus = (_Bool)1;
      execp->close_stdin = (_Bool)0;
    } else {
      allow_plus = (_Bool)0;
      execp->close_stdin = (_Bool)1;
    }
  } else {
    allow_plus = (_Bool)0;
    execp->close_stdin = (_Bool)1;
  }
  if ((unsigned long )func == (unsigned long )(& pred_execdir)) {
    options.ignore_readdir_race = (_Bool)0;
    check_path_safety(action);
    execp->use_current_dir = (_Bool)1;
  } else {
    if ((unsigned long )func == (unsigned long )(& pred_okdir)) {
      options.ignore_readdir_race = (_Bool)0;
      check_path_safety(action);
      execp->use_current_dir = (_Bool)1;
    } else {
      execp->use_current_dir = (_Bool)0;
    }
  }
  our_pred->args.exec_vec.multiple = (_Bool)0;
  start = *arg_ptr;
  end = start;
  saw_braces = 0;
  brace_count = 0;
  while (1) {
    if ((unsigned long )*(argv + end) != (unsigned long )((void *)0)) {
      if (! ((int )*(*(argv + end) + 0) != 59)) {
        if (! ((int )*(*(argv + end) + 1) != 0)) {
          break;
        } else {

        }
      } else {

      }
    } else {
      break;
    }
    if (allow_plus) {
      if ((int )*(*(argv + end) + 0) == 43) {
        if ((int )*(*(argv + end) + 1) == 0) {
          if (saw_braces) {
            our_pred->args.exec_vec.multiple = (_Bool)1;
            break;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    saw_braces = 0;
    tmp___2 = strstr((char const   *)*(argv + end), "{}");
    if (tmp___2) {
      saw_braces = 1;
      brace_count ++;
      if (0 == end) {
        if ((unsigned long )func == (unsigned long )(& pred_execdir)) {
          tmp___1 = dcgettext((char const   *)((void *)0), "You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem.", 5);
          error(1, 0, tmp___1);
        } else {
          if ((unsigned long )func == (unsigned long )(& pred_okdir)) {
            tmp___1 = dcgettext((char const   *)((void *)0), "You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem.", 5);
            error(1, 0, tmp___1);
          } else {

          }
        }
      } else {

      }
    } else {

    }
    end ++;
  }
  if (end == start) {
    *arg_ptr = end;
    free((void *)our_pred);
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + end) == (unsigned long )((void *)0)) {
      *arg_ptr = end;
      free((void *)our_pred);
      return ((_Bool)0);
    } else {

    }
  }
  if (our_pred->args.exec_vec.multiple) {
    if (brace_count > 1) {
      if ((unsigned long )func == (unsigned long )(& pred_execdir)) {
        suffix = "dir";
      } else {
        suffix = "";
      }
      tmp___3 = dcgettext((char const   *)((void *)0), "Only one instance of {} is supported with -exec%s ... +", 5);
      error(1, 0, tmp___3, suffix);
    } else {

    }
  } else {

  }
  bcstatus = bc_init_controlinfo(& execp->ctl);
  switch ((int )bcstatus) {
  case 1: 
  tmp___4 = dcgettext((char const   *)((void *)0), "The environment is too large for exec().", 5);
  error(1, 0, tmp___4);
  break;
  case 0: 
  break;
  }
  bc_use_sensible_arg_max(& execp->ctl);
  execp->ctl.exec_callback = & launch;
  if (our_pred->args.exec_vec.multiple) {
    execp->replace_vec = (char **)((void *)0);
    execp->ctl.replace_pat = (char *)((void *)0);
    execp->ctl.rplen = 0UL;
    execp->ctl.lines_per_exec = 0L;
    execp->ctl.args_per_exec = 0L;
    execp->ctl.initial_argc = (end - start) - 1;
    bc_init_state((struct buildcmd_control  const  *)(& execp->ctl), & execp->state, (void *)execp);
    i = start;
    while (i < end - 1) {
      tmp___5 = strlen((char const   *)*(argv + i));
      bc_push_arg((struct buildcmd_control  const  *)(& execp->ctl), & execp->state, (char const   *)*(argv + i), tmp___5 + 1UL, (char const   *)((void *)0), 0UL, 1);
      i ++;
    }
  } else {
    execp->num_args = end - start;
    execp->ctl.replace_pat = (char *)"{}";
    execp->ctl.rplen = strlen((char const   *)execp->ctl.replace_pat);
    execp->ctl.lines_per_exec = 0L;
    execp->ctl.args_per_exec = 0L;
    tmp___6 = xmalloc(sizeof(char *) * (unsigned long )execp->num_args);
    execp->replace_vec = (char **)tmp___6;
    bc_init_state((struct buildcmd_control  const  *)(& execp->ctl), & execp->state, (void *)execp);
    i = 0;
    while (i < execp->num_args) {
      *(execp->replace_vec + i) = *(argv + (i + start));
      i ++;
    }
  }
  if ((unsigned long )*(argv + end) == (unsigned long )((void *)0)) {
    *arg_ptr = end;
  } else {
    *arg_ptr = end + 1;
  }
  return ((_Bool)1);
}
}
static boolean insert_exec_ok(char const   *action , struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = new_insert_exec_ok(action, entry, argv, arg_ptr);
  return (tmp);
}
}
static boolean get_num_days(char *str , uintmax_t *num_days , enum comparison_type *comp_type ) 
{ boolean r ;
  boolean tmp ;

  {
  tmp = get_num(str, num_days, comp_type);
  r = tmp;
  if (r) {
    switch ((int )*comp_type) {
    case 1: 
    *comp_type = (enum comparison_type )0;
    break;
    case 0: 
    *comp_type = (enum comparison_type )1;
    break;
    default: ;
    break;
    }
  } else {

  }
  return (r);
}
}
static boolean parse_time(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  uintmax_t num_days ;
  enum comparison_type c_type ;
  time_t t ;
  boolean tmp ;
  int tmp___0 ;
  intmax_t val ;
  int tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  tmp = get_num_days(*(argv + *arg_ptr), & num_days, & c_type);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  if ((unsigned int )c_type == 0U) {
    tmp___0 = 86399;
  } else {
    tmp___0 = 0;
  }
  t = (long )(((unsigned long )options.cur_day_start - num_days * 86400UL) + (unsigned long )tmp___0);
  if ((unsigned int )c_type == 0U) {
    tmp___1 = 86399;
  } else {
    tmp___1 = 0;
  }
  val = (long )(((unsigned long )options.cur_day_start - num_days * 86400UL) + (unsigned long )tmp___1);
  t = val;
  if (t != val) {
    error(1, 0, (char *)"arithmetic overflow while converting %s days to a number of seconds", *(argv + *arg_ptr));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.negative = (_Bool )(t < 0L);
  our_pred->args.info.l_val = (unsigned long )t;
  our_pred->est_success_rate = estimate_file_age_success_rate((float )num_days);
  (*arg_ptr) ++;
  if (options.debug_options & 1UL) {
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"inserting %s\n", our_pred->p_name);
    if ((unsigned int )c_type == 0U) {
      tmp___4 = " >";
    } else {
      if ((unsigned int )c_type == 1U) {
        tmp___3 = " <";
      } else {
        if ((unsigned int )c_type == 2U) {
          tmp___2 = ">=";
        } else {
          tmp___2 = " ?";
        }
        tmp___3 = tmp___2;
      }
      tmp___4 = tmp___3;
    }
    if ((unsigned int )c_type == 0U) {
      tmp___7 = "gt";
    } else {
      if ((unsigned int )c_type == 1U) {
        tmp___6 = "lt";
      } else {
        if ((unsigned int )c_type == 2U) {
          tmp___5 = "eq";
        } else {
          tmp___5 = "?";
        }
        tmp___6 = tmp___5;
      }
      tmp___7 = tmp___6;
    }
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"    type: %s    %s  ", tmp___7, tmp___4);
    t = (long )our_pred->args.info.l_val;
    tmp___8 = ctime((time_t const   *)(& t));
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%ju %s", our_pred->args.info.l_val, tmp___8);
    if ((unsigned int )c_type == 2U) {
      our_pred->args.info.l_val += 86400UL;
      t = (long )our_pred->args.info.l_val;
      tmp___9 = ctime((time_t const   *)(& t));
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"                 <  %ju %s", our_pred->args.info.l_val, tmp___9);
      our_pred->args.info.l_val -= 86400UL;
    } else {

    }
  } else {

  }
  return ((_Bool)1);
}
}
static boolean get_num(char *str , uintmax_t *num , enum comparison_type *comp_type ) 
{ strtol_error tmp ;

  {
  if ((unsigned long )str == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {

  }
  switch ((int )*(str + 0)) {
  case 43: 
  *comp_type = (enum comparison_type )0;
  str ++;
  break;
  case 45: 
  *comp_type = (enum comparison_type )1;
  str ++;
  break;
  default: 
  *comp_type = (enum comparison_type )2;
  break;
  }
  tmp = xstrtoumax((char const   *)str, (char **)((void *)0), 10, num, "");
  return ((_Bool )((unsigned int )tmp == 0U));
}
}
static struct predicate *insert_num(char **argv , int *arg_ptr , struct parser_table  const  *entry ) 
{ struct predicate *our_pred ;
  uintmax_t num ;
  enum comparison_type c_type ;
  boolean tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((struct predicate *)((void *)0));
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((struct predicate *)((void *)0));
    } else {

    }
  }
  tmp = get_num(*(argv + *arg_ptr), & num, & c_type);
  if (! tmp) {
    return ((struct predicate *)((void *)0));
  } else {

  }
  our_pred = insert_primary(entry);
  our_pred->args.info.kind = c_type;
  our_pred->args.info.l_val = num;
  (*arg_ptr) ++;
  if (options.debug_options & 1UL) {
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"inserting %s\n", our_pred->p_name);
    if ((unsigned int )c_type == 0U) {
      tmp___2 = " >";
    } else {
      if ((unsigned int )c_type == 1U) {
        tmp___1 = " <";
      } else {
        if ((unsigned int )c_type == 2U) {
          tmp___0 = " =";
        } else {
          tmp___0 = " ?";
        }
        tmp___1 = tmp___0;
      }
      tmp___2 = tmp___1;
    }
    if ((unsigned int )c_type == 0U) {
      tmp___5 = "gt";
    } else {
      if ((unsigned int )c_type == 1U) {
        tmp___4 = "lt";
      } else {
        if ((unsigned int )c_type == 2U) {
          tmp___3 = "eq";
        } else {
          tmp___3 = "?";
        }
        tmp___4 = tmp___3;
      }
      tmp___5 = tmp___4;
    }
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"    type: %s    %s  ", tmp___5, tmp___2);
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%ju\n", our_pred->args.info.l_val);
  } else {

  }
  return (our_pred);
}
}
static FILE *open_output_file(char *path ) 
{ FILE *f ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___0 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___7 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int *tmp___13 ;

  {
  if (0) {
    __s1_len___0 = __builtin_strlen((char const   *)path);
    __s2_len___0 = __builtin_strlen("/dev/stderr");
    if (! ((unsigned long )((void const   *)(path + 1)) - (unsigned long )((void const   *)path) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2: 
        if (! ((unsigned long )((void const   *)("/dev/stderr" + 1)) - (unsigned long )((void const   *)"/dev/stderr") == 1UL)) {
          tmp___12 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___12 = 1;
          } else {
            tmp___12 = 0;
          }
        }
      } else {
        tmp___12 = 0;
      }
    }
    if (tmp___12) {
      tmp___7 = __builtin_strcmp((char const   *)path, "/dev/stderr");
      tmp___11 = tmp___7;
    } else {
      tmp___10 = __builtin_strcmp((char const   *)path, "/dev/stderr");
      tmp___11 = tmp___10;
    }
  } else {
    tmp___10 = __builtin_strcmp((char const   *)path, "/dev/stderr");
    tmp___11 = tmp___10;
  }
  if (tmp___11) {
    if (0) {
      __s1_len = __builtin_strlen((char const   *)path);
      __s2_len = __builtin_strlen("/dev/stdout");
      if (! ((unsigned long )((void const   *)(path + 1)) - (unsigned long )((void const   *)path) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)("/dev/stdout" + 1)) - (unsigned long )((void const   *)"/dev/stdout") == 1UL)) {
            tmp___5 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___5 = 1;
            } else {
              tmp___5 = 0;
            }
          }
        } else {
          tmp___5 = 0;
        }
      }
      if (tmp___5) {
        tmp___0 = __builtin_strcmp((char const   *)path, "/dev/stdout");
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp((char const   *)path, "/dev/stdout");
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp((char const   *)path, "/dev/stdout");
      tmp___4 = tmp___3;
    }
    if (! tmp___4) {
      return (stdout);
    } else {

    }
  } else {
    return (stderr);
  }
  f = fopen_safer((char const   *)path, "w");
  if ((unsigned long )f == (unsigned long )((void *)0)) {
    tmp___13 = __errno_location();
    error(1, *tmp___13, (char *)"%s", path);
  } else {

  }
  return (f);
}
}
