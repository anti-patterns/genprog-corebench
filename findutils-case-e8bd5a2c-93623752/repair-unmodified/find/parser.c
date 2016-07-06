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
typedef long ptrdiff_t;
typedef int wchar_t;
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
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int __gwchar_t;
typedef _Bool boolean;
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer {
   struct re_dfa_t *buffer ;
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
struct buildcmd_state {
   int cmd_argc ;
   char **cmd_argv ;
   int cmd_argv_alloc ;
   char *argbuf ;
   size_t cmd_argv_chars ;
   size_t cmd_initial_argv_chars ;
   void *usercontext ;
   int todo ;
   int dir_fd ;
   int largest_successful_arg_count ;
   int smallest_failed_arg_count ;
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
   int (*exec_callback)(struct buildcmd_control * , void *usercontext , int argc , char **argv ) ;
   long lines_per_exec ;
   long args_per_exec ;
};
enum BC_INIT_STATUS {
    BC_INIT_OK = 0,
    BC_INIT_ENV_TOO_BIG = 1,
    BC_INIT_CANNOT_ACCOMODATE_HEADROOM = 2
} ;
enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    shell_escape_quoting_style = 3,
    shell_escape_always_quoting_style = 4,
    c_quoting_style = 5,
    c_maybe_quoting_style = 6,
    escape_quoting_style = 7,
    locale_quoting_style = 8,
    clocale_quoting_style = 9,
    custom_quoting_style = 10
} ;
struct quoting_options;
struct quoting_options;
struct quoting_options;
typedef void *sharefile_handle;
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
struct samefile_file_id {
   ino_t ino ;
   dev_t dev ;
   int fd ;
};
struct size_val {
   enum comparison_type kind ;
   int blocksize ;
   uintmax_t size ;
};
enum xval {
    XVAL_ATIME = 0,
    XVAL_BIRTHTIME = 1,
    XVAL_CTIME = 2,
    XVAL_MTIME = 3,
    XVAL_TIME = 4
} ;
struct time_val {
   enum xval xval ;
   enum comparison_type kind ;
   struct timespec ts ;
};
struct exec_val {
   boolean multiple ;
   struct buildcmd_control ctl ;
   struct buildcmd_state state ;
   char **replace_vec ;
   int num_args ;
   boolean use_current_dir ;
   boolean close_stdin ;
   int dir_fd ;
   int last_child_status ;
};
enum SegmentKind {
    KIND_PLAIN = 0,
    KIND_STOP = 1,
    KIND_FORMAT = 2
} ;
struct segment {
   enum SegmentKind segkind ;
   char format_char[2] ;
   char *text ;
   int text_len ;
   struct segment *next ;
};
struct format_val {
   struct segment *segment ;
   FILE *stream ;
   char const   *filename ;
   boolean dest_is_tty ;
   struct quoting_options *quote_opts ;
};
struct predicate_performance_info {
   unsigned long visits ;
   unsigned long successes ;
};
enum EvaluationCost {
    NeedsNothing = 0,
    NeedsInodeNumber = 1,
    NeedsType = 2,
    NeedsStatInfo = 3,
    NeedsLinkName = 4,
    NeedsAccessInfo = 5,
    NeedsSyncDiskHit = 6,
    NeedsEventualExec = 7,
    NeedsImmediateExec = 8,
    NeedsUserInteraction = 9,
    NeedsUnknown = 10,
    NumEvaluationCosts = 11
} ;
union __anonunion_args_35 {
   char const   *str ;
   struct re_pattern_buffer *regex ;
   struct exec_val exec_vec ;
   struct long_val numinfo ;
   struct size_val size ;
   uid_t uid ;
   gid_t gid ;
   struct time_val reftime ;
   struct perm_val perm ;
   struct samefile_file_id samefileid ;
   mode_t type ;
   struct format_val printf_vec ;
};
struct parser_table;
struct parser_table;
struct predicate {
   boolean (*pred_func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
   char *p_name ;
   enum predicate_type p_type ;
   enum predicate_precedence p_prec ;
   boolean side_effects ;
   boolean no_default_print ;
   boolean need_stat ;
   boolean need_type ;
   boolean need_inum ;
   enum EvaluationCost p_cost ;
   float est_success_rate ;
   boolean literal_control_chars ;
   boolean artificial ;
   char const   *arg_text ;
   union __anonunion_args_35 args ;
   struct predicate *pred_next ;
   struct predicate *pred_left ;
   struct predicate *pred_right ;
   struct predicate_performance_info perf ;
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
    ARG_SPECIAL_PARSE = 4,
    ARG_PUNCTUATION = 5,
    ARG_ACTION = 6
} ;
struct parser_table;
struct parser_table {
   enum arg_type type ;
   char *parser_name ;
   boolean (*parser_func)(struct parser_table  const  *p , char **argv , int *arg_ptr ) ;
   boolean (*pred_func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
};
typedef boolean PREDICATEFUNCTION(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr );
struct options {
   boolean do_dir_first ;
   boolean explicit_depth ;
   int maxdepth ;
   int mindepth ;
   boolean no_leaf_check ;
   boolean stay_on_filesystem ;
   boolean ignore_readdir_race ;
   boolean literal_control_chars ;
   boolean warnings ;
   boolean posixly_correct ;
   struct timespec start_time ;
   struct timespec cur_day_start ;
   boolean full_days ;
   int output_block_size ;
   unsigned long debug_options ;
   enum SymlinkOption symlink_handling ;
   int (*xstat)(char const   *name , struct stat *statbuf ) ;
   boolean open_nofollow_available ;
   int regex_options ;
   unsigned short optimisation_level ;
   enum quoting_style err_quoting_style ;
};
struct state {
   int curdepth ;
   boolean have_stat ;
   boolean have_type ;
   mode_t type ;
   char *rel_pathname ;
   int cwd_dir_fd ;
   int starting_path_length ;
   boolean stop_at_current_level ;
   int exit_status ;
   boolean execdirs_outstanding ;
   sharefile_handle shared_files ;
};
union __anonunion___u_39 {
   long double __l ;
   int __i[3] ;
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
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat(int __fd , struct stat *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstat64(int __fd , struct stat64 *__statbuf )  __attribute__((__nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat(int __fd , char const   * __restrict  __filename , struct stat * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  fstatat64(int __fd , char const   * __restrict  __filename , struct stat64 * __restrict  __statbuf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat64(char const   * __restrict  __path , struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  mknodat(int __fd , char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes , struct stat *__stat_buf )  __attribute__((__nonnull__(3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xstat(int __ver , char const   *__filename , struct stat *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __lxstat(int __ver , char const   *__filename , struct stat *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes , char const   *__filename , struct stat *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstat64(int __ver , int __fildes , struct stat64 *__stat_buf )  __attribute__((__nonnull__(3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __lxstat64(int __ver , char const   *__filename , struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __fxstatat64(int __ver , int __fildes , char const   *__filename , struct stat64 *__stat_buf , int __flag )  __attribute__((__nonnull__(3,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xmknod(int __ver , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(2,4), __leaf__)) ;
extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd , char const   *__path , __mode_t __mode , __dev_t *__dev )  __attribute__((__nonnull__(3,5), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  stat(char const   * __restrict  __path , struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __xstat(1, (char const   *)__path, (struct stat *)__statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __lxstat(1, (char const   *)__path, (struct stat *)__statbuf);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
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
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
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
extern char *mbsstr(char const   *haystack , char const   *needle )  __attribute__((__pure__, __nonnull__(1,2))) ;
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
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
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
extern int close(int __fd ) ;
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic pop
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
extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax ) ;
extern char const   *re_compile_pattern(char const   *__pattern , size_t __length , struct re_pattern_buffer *__buffer ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern struct timespec  __attribute__((__gnu_inline__)) make_timespec(time_t s , long ns ) 
{ struct timespec r ;

  {
  r.tv_sec = s;
  r.tv_nsec = ns;
  return ((struct timespec  __attribute__((__gnu_inline__)) )r);
}
}
__inline extern int __attribute__((__pure__, __gnu_inline__))  timespec_cmp(struct timespec a , struct timespec b ) 
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
  return ((int __attribute__((__pure__, __gnu_inline__))  )tmp___0);
}
}
__inline extern int __attribute__((__pure__, __gnu_inline__))  timespec_sign(struct timespec a ) 
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
  return ((int __attribute__((__pure__, __gnu_inline__))  )tmp___0);
}
}
__inline extern double __attribute__((__gnu_inline__))  timespectod(struct timespec a ) 
{ 

  {
  return ((double __attribute__((__gnu_inline__))  )((double )a.tv_sec + (double )a.tv_nsec / 1e9));
}
}
#pragma GCC diagnostic pop
extern void bc_push_arg(struct buildcmd_control *ctl , struct buildcmd_state *state , char const   *arg , size_t len , char const   *prefix , size_t pfxlen , int initial_args ) ;
extern void bc_init_state(struct buildcmd_control  const  *ctl , struct buildcmd_state *state , void *usercontext ) ;
extern enum BC_INIT_STATUS bc_init_controlinfo(struct buildcmd_control *ctl , size_t arglen_headroom ) ;
extern void bc_use_sensible_arg_max(struct buildcmd_control *ctl ) ;
extern struct quoting_options *clone_quoting_options(struct quoting_options *o ) ;
extern char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
extern FILE *sharefile_fopen(sharefile_handle  , char const   *filename ) ;
extern int optionl_stat(char const   *name , struct stat *p ) ;
extern int optionp_stat(char const   *name , struct stat *p ) ;
extern int optionh_stat(char const   *name , struct stat *p ) ;
extern int debug_stat(char const   *file , struct stat *bufp ) ;
extern void set_stat_placeholders(struct stat *p ) ;
extern boolean is_fts_enabled(int *ftsoptions ) ;
extern int get_start_dirfd(void) ;
void set_follow_state(enum SymlinkOption opt ) ;
extern char *filesystem_type(struct stat  const  *statp , char const   *path ) ;
struct parser_table  const  *find_parser(char *search_name ) ;
boolean parse_print(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
void check_option_combinations(struct predicate  const  *p ) ;
void parse_begin_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) ;
void parse_end_user_args(char **args , int argno , struct predicate  const  *last , struct predicate  const  *predicates ) ;
boolean parse_openparen(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
boolean parse_closeparen(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
extern PREDICATEFUNCTION pred_amin ;
extern PREDICATEFUNCTION pred_and ;
extern PREDICATEFUNCTION pred_anewer ;
extern PREDICATEFUNCTION pred_atime ;
extern PREDICATEFUNCTION pred_closeparen ;
extern PREDICATEFUNCTION pred_cmin ;
extern PREDICATEFUNCTION pred_cnewer ;
extern PREDICATEFUNCTION pred_comma ;
extern PREDICATEFUNCTION pred_ctime ;
extern PREDICATEFUNCTION pred_delete ;
extern PREDICATEFUNCTION pred_empty ;
extern PREDICATEFUNCTION pred_exec ;
extern PREDICATEFUNCTION pred_execdir ;
extern PREDICATEFUNCTION pred_executable ;
extern PREDICATEFUNCTION pred_false ;
extern PREDICATEFUNCTION pred_fls ;
extern PREDICATEFUNCTION pred_fprint ;
extern PREDICATEFUNCTION pred_fprint0 ;
extern PREDICATEFUNCTION pred_fprintf ;
extern PREDICATEFUNCTION pred_fstype ;
extern PREDICATEFUNCTION pred_gid ;
extern PREDICATEFUNCTION pred_group ;
extern PREDICATEFUNCTION pred_ilname ;
extern PREDICATEFUNCTION pred_iname ;
extern PREDICATEFUNCTION pred_inum ;
extern PREDICATEFUNCTION pred_ipath ;
extern PREDICATEFUNCTION pred_links ;
extern PREDICATEFUNCTION pred_lname ;
extern PREDICATEFUNCTION pred_ls ;
extern PREDICATEFUNCTION pred_mmin ;
extern PREDICATEFUNCTION pred_mtime ;
extern PREDICATEFUNCTION pred_name ;
extern PREDICATEFUNCTION pred_negate ;
extern PREDICATEFUNCTION pred_newer ;
extern PREDICATEFUNCTION pred_newerXY ;
extern PREDICATEFUNCTION pred_nogroup ;
extern PREDICATEFUNCTION pred_nouser ;
extern PREDICATEFUNCTION pred_ok ;
extern PREDICATEFUNCTION pred_okdir ;
extern PREDICATEFUNCTION pred_openparen ;
extern PREDICATEFUNCTION pred_or ;
extern PREDICATEFUNCTION pred_path ;
extern PREDICATEFUNCTION pred_perm ;
extern PREDICATEFUNCTION pred_print ;
extern PREDICATEFUNCTION pred_print0 ;
extern PREDICATEFUNCTION pred_prune ;
extern PREDICATEFUNCTION pred_quit ;
extern PREDICATEFUNCTION pred_readable ;
extern PREDICATEFUNCTION pred_regex ;
extern PREDICATEFUNCTION pred_samefile ;
extern PREDICATEFUNCTION pred_size ;
extern PREDICATEFUNCTION pred_true ;
extern PREDICATEFUNCTION pred_type ;
extern PREDICATEFUNCTION pred_uid ;
extern PREDICATEFUNCTION pred_used ;
extern PREDICATEFUNCTION pred_user ;
extern PREDICATEFUNCTION pred_writable ;
extern PREDICATEFUNCTION pred_xtype ;
extern int launch(struct buildcmd_control *ctl , void *usercontext , int argc , char **argv ) ;
extern boolean matches_start_point(char const   *glob , boolean foldcase ) ;
extern struct predicate *get_new_pred_noarg(struct parser_table  const  *entry ) ;
extern struct predicate *get_new_pred_chk_op(struct parser_table  const  *entry , char const   *arg ) ;
extern struct predicate *insert_primary(struct parser_table  const  *entry , char const   *arg ) ;
extern struct predicate *insert_primary_noarg(struct parser_table  const  *entry ) ;
extern struct predicate *insert_primary_withpred(struct parser_table  const  *entry , boolean (*fptr)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) , char const   *arg ) ;
extern void usage(FILE *fp , int status , char *msg ) ;
extern char const   *safely_quote_err_filename(int n , char const   *arg ) ;
extern  __attribute__((__noreturn__)) void fatal_file_error(char const   *name ) ;
extern struct options options ;
extern struct state state ;
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
extern  __attribute__((__nothrow__)) double modf(double __x , double *__iptr )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbit)(double __x )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitf)(float __x )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitl)(long double __x )  __attribute__((__leaf__, __const__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitf)(float __x )  __attribute__((__leaf__, __const__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitf)(float __x ) 
{ int __m ;

  {
  __asm__  ("pmovmskb %1, %0": "=r" (__m): "x" (__x));
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((__m & 8) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbit)(double __x )  __attribute__((__leaf__, __const__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbit)(double __x ) 
{ int __m ;

  {
  __asm__  ("pmovmskb %1, %0": "=r" (__m): "x" (__x));
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((__m & 128) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitl)(long double __x )  __attribute__((__leaf__, __const__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  ( __attribute__((__always_inline__)) __signbitl)(long double __x ) 
{ union __anonunion___u_39 __u ;

  {
  __u.__l = __x;
  return ((int __attribute__((__leaf__, __gnu_inline__))  )((__u.__i[2] & 32768) != 0));
}
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic pop
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern void endpwent(void) ;
extern struct passwd *getpwnam(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
extern void endgrent(void) ;
extern struct group *getgrnam(char const   *__name ) ;
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
extern struct mode_change *mode_compile(char const   * ) ;
extern mode_t mode_adjust(mode_t  , _Bool  , mode_t  , struct mode_change  const  * , mode_t * ) ;
extern strtol_error xstrtoumax(char const   * , char ** , int  , uintmax_t * , char const   * ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void *xmalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern void *xrealloc(void *p , size_t s )  __attribute__((__alloc_size__(2))) ;
__inline extern void __attribute__((__gnu_inline__))  *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
__inline extern void __attribute__((__gnu_inline__))  *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
__inline extern void __attribute__((__gnu_inline__))  *xnmalloc(size_t n , size_t s ) 
{ int tmp ;
  void *tmp___0 ;

  {
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp = -1;
  } else {
    tmp = -2;
  }
  if ((unsigned long )tmp / s < n) {
    xalloc_die();
  } else {

  }
  tmp___0 = xmalloc(n * s);
  return ((void __attribute__((__gnu_inline__))  *)tmp___0);
}
}
__inline extern void __attribute__((__gnu_inline__))  *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
__inline extern void __attribute__((__gnu_inline__))  *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
__inline extern void __attribute__((__gnu_inline__))  *xnrealloc(void *p , size_t n , size_t s ) 
{ int tmp ;
  void *tmp___0 ;

  {
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp = -1;
  } else {
    tmp = -2;
  }
  if ((unsigned long )tmp / s < n) {
    xalloc_die();
  } else {

  }
  tmp___0 = xrealloc(p, n * s);
  return ((void __attribute__((__gnu_inline__))  *)tmp___0);
}
}
__inline extern void __attribute__((__gnu_inline__))  *x2nrealloc(void *p , size_t *pn , size_t s ) 
{ size_t n ;
  void *tmp ;

  {
  n = *pn;
  if (! p) {
    if (! n) {
      n = 128UL / s;
      n += (unsigned long )(! n);
    } else {

    }
  } else {
    if (0UL / s <= n) {
      xalloc_die();
    } else {

    }
    n += n / 2UL + 1UL;
  }
  *pn = n;
  tmp = xrealloc(p, n * s);
  return ((void __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *xcharalloc(size_t n )  __attribute__((__malloc__, __alloc_size__(1))) ;
__inline extern char __attribute__((__gnu_inline__))  *xcharalloc(size_t n )  __attribute__((__malloc__, __alloc_size__(1))) ;
__inline extern char __attribute__((__gnu_inline__))  *xcharalloc(size_t n ) 
{ void *tmp ;
  void __attribute__((__gnu_inline__))  *tmp___0 ;
  void *tmp___1 ;

  {
  if (sizeof(char ) == 1UL) {
    tmp = xmalloc(n);
    tmp___1 = tmp;
  } else {
    tmp___0 = xnmalloc(n, sizeof(char ));
    tmp___1 = (void *)tmp___0;
  }
  return ((char __attribute__((__gnu_inline__))  *)((char *)tmp___1));
}
}
#pragma GCC diagnostic pop
extern char *next_element(char const   *path , int curdir_ok ) ;
extern int get_regex_type(char const   *s ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern long __attribute__((__pure__, __gnu_inline__))  get_stat_atime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__pure__, __gnu_inline__))  )st->st_atim.tv_nsec);
}
}
__inline extern long __attribute__((__pure__, __gnu_inline__))  get_stat_ctime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__pure__, __gnu_inline__))  )st->st_ctim.tv_nsec);
}
}
__inline extern long __attribute__((__pure__, __gnu_inline__))  get_stat_mtime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__pure__, __gnu_inline__))  )st->st_mtim.tv_nsec);
}
}
__inline extern long __attribute__((__pure__, __gnu_inline__))  get_stat_birthtime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__pure__, __gnu_inline__))  )0);
}
}
__inline extern struct timespec  __attribute__((__pure__, __gnu_inline__)) get_stat_atime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__pure__, __gnu_inline__)) )st->st_atim);
}
}
__inline extern struct timespec  __attribute__((__pure__, __gnu_inline__)) get_stat_ctime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__pure__, __gnu_inline__)) )st->st_ctim);
}
}
__inline extern struct timespec  __attribute__((__pure__, __gnu_inline__)) get_stat_mtime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__pure__, __gnu_inline__)) )st->st_mtim);
}
}
__inline extern struct timespec  __attribute__((__pure__, __gnu_inline__)) get_stat_birthtime(struct stat  const  *st ) 
{ struct timespec t ;

  {
  t.tv_sec = -1L;
  t.tv_nsec = -1L;
  return ((struct timespec  __attribute__((__pure__, __gnu_inline__)) )t);
}
}
#pragma GCC diagnostic pop
extern _Bool xstrtod(char const   *str , char const   **ptr , double *result , double (*convert)(char const   * , char ** ) ) ;
extern _Bool parse_datetime(struct timespec * , char const   * , struct timespec  const  * ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern void display_findutils_version(char const   *official_name ) ;
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
extern char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__format_arg__(2))) ;
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
static boolean parse_newerXY(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
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
static boolean insert_type(char **argv , int *arg_ptr , struct parser_table  const  *entry , boolean (*which_pred)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) ;
static boolean insert_regex(char **argv , int *arg_ptr , struct parser_table  const  *entry , int regex_options ) ;
static boolean insert_fprintf(struct format_val *vec , struct parser_table  const  *entry , boolean (*func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) , char const   *format_const ) ;
static struct segment **make_segment(struct segment **segment , char *format , int len , int kind , char format_char , char aux_format_char , struct predicate *pred ) ;
static boolean insert_exec_ok(char const   *action , struct parser_table  const  *entry , int dir_fd , char **argv , int *arg_ptr ) ;
static boolean get_comp_type(char const   **str , enum comparison_type *comp_type ) ;
static boolean get_relative_timestamp(char const   *str , struct time_val *result , struct timespec origin , double sec_per_unit , char const   *overflowmessage ) ;
static boolean get_num(char const   *str , uintmax_t *num , enum comparison_type *comp_type ) ;
static struct predicate *insert_num(char **argv , int *arg_ptr , struct parser_table  const  *entry ) ;
static void open_output_file(char const   *path , struct format_val *p ) ;
static void open_stdout(struct format_val *p ) ;
static boolean stream_is_tty(FILE *fp ) ;
static boolean parse_noop(struct parser_table  const  *entry , char **argv , int *arg_ptr ) ;
static struct parser_table  const  parse_entry_newerXY  =    {(enum arg_type )4, (char *)"newerXY", & parse_newerXY, & pred_newerXY};
static struct parser_table  const  parse_table[85]  = 
  {      {(enum arg_type )5, (char *)"!", & parse_negate, & pred_negate}, 
        {(enum arg_type )5, (char *)"not", & parse_negate, & pred_negate}, 
        {(enum arg_type )5, (char *)"(", & parse_openparen, & pred_openparen}, 
        {(enum arg_type )5, (char *)")", & parse_closeparen, & pred_closeparen}, 
        {(enum arg_type )5, (char *)",", & parse_comma, & pred_comma}, 
        {(enum arg_type )5, (char *)"a", & parse_and, & pred_and}, 
        {(enum arg_type )3, (char *)"amin", & parse_amin, & pred_amin}, 
        {(enum arg_type )5, (char *)"and", & parse_and, & pred_and}, 
        {(enum arg_type )3, (char *)"anewer", & parse_anewer, & pred_anewer}, 
        {(enum arg_type )3, (char *)"atime", & parse_time, & pred_atime}, 
        {(enum arg_type )3, (char *)"cmin", & parse_cmin, & pred_cmin}, 
        {(enum arg_type )3, (char *)"cnewer", & parse_cnewer, & pred_cnewer}, 
        {(enum arg_type )3, (char *)"ctime", & parse_time, & pred_ctime}, 
        {(enum arg_type )2, (char *)"daystart", & parse_daystart, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )6, (char *)"delete", & parse_delete, & pred_delete}, 
        {(enum arg_type )0, (char *)"d", & parse_d, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)"depth", & parse_depth, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"empty", & parse_empty, & pred_empty}, 
        {(enum arg_type )6, (char *)"exec", & parse_exec, & pred_exec}, 
        {(enum arg_type )3, (char *)"executable", & parse_accesscheck, & pred_executable}, 
        {(enum arg_type )6, (char *)"execdir", & parse_execdir, & pred_execdir}, 
        {(enum arg_type )6, (char *)"fls", & parse_fls, & pred_fls}, 
        {(enum arg_type )2, (char *)"follow", & parse_follow, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )6, (char *)"fprint", & parse_fprint, & pred_fprint}, 
        {(enum arg_type )6, (char *)"fprint0", & parse_fprint0, & pred_fprint0}, 
        {(enum arg_type )6, (char *)"fprintf", & parse_fprintf, & pred_fprintf}, 
        {(enum arg_type )3, (char *)"fstype", & parse_fstype, & pred_fstype}, 
        {(enum arg_type )3, (char *)"gid", & parse_gid, & pred_gid}, 
        {(enum arg_type )3, (char *)"group", & parse_group, & pred_group}, 
        {(enum arg_type )0, (char *)"ignore_readdir_race", & parse_ignore_race, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"ilname", & parse_ilname, & pred_ilname}, 
        {(enum arg_type )3, (char *)"iname", & parse_iname, & pred_iname}, 
        {(enum arg_type )3, (char *)"inum", & parse_inum, & pred_inum}, 
        {(enum arg_type )3, (char *)"ipath", & parse_ipath, & pred_ipath}, 
        {(enum arg_type )3, (char *)"iregex", & parse_iregex, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"iwholename", & parse_iwholename, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"links", & parse_links, & pred_links}, 
        {(enum arg_type )3, (char *)"lname", & parse_lname, & pred_lname}, 
        {(enum arg_type )6, (char *)"ls", & parse_ls, & pred_ls}, 
        {(enum arg_type )0, (char *)"maxdepth", & parse_maxdepth, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)"mindepth", & parse_mindepth, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"mmin", & parse_mmin, & pred_mmin}, 
        {(enum arg_type )0, (char *)"mount", & parse_xdev, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"mtime", & parse_time, & pred_mtime}, 
        {(enum arg_type )3, (char *)"name", & parse_name, & pred_name}, 
        {(enum arg_type )3, (char *)"newer", & parse_newer, & pred_newer}, 
        {(enum arg_type )3, (char *)"atime", & parse_time, & pred_atime}, 
        {(enum arg_type )0, (char *)"noleaf", & parse_noleaf, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"nogroup", & parse_nogroup, & pred_nogroup}, 
        {(enum arg_type )3, (char *)"nouser", & parse_nouser, & pred_nouser}, 
        {(enum arg_type )0, (char *)"noignore_readdir_race", & parse_noignore_race, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )2, (char *)"nowarn", & parse_nowarn, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )5, (char *)"o", & parse_or, & pred_or}, 
        {(enum arg_type )5, (char *)"or", & parse_or, & pred_or}, 
        {(enum arg_type )6, (char *)"ok", & parse_ok, & pred_ok}, 
        {(enum arg_type )6, (char *)"okdir", & parse_okdir, & pred_okdir}, 
        {(enum arg_type )3, (char *)"path", & parse_path, & pred_path}, 
        {(enum arg_type )3, (char *)"perm", & parse_perm, & pred_perm}, 
        {(enum arg_type )6, (char *)"print", & parse_print, & pred_print}, 
        {(enum arg_type )6, (char *)"print0", & parse_print0, & pred_print0}, 
        {(enum arg_type )6, (char *)"printf", & parse_printf, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )6, (char *)"prune", & parse_prune, & pred_prune}, 
        {(enum arg_type )6, (char *)"quit", & parse_quit, & pred_quit}, 
        {(enum arg_type )3, (char *)"readable", & parse_accesscheck, & pred_readable}, 
        {(enum arg_type )3, (char *)"regex", & parse_regex, & pred_regex}, 
        {(enum arg_type )2, (char *)"regextype", & parse_regextype, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"samefile", & parse_samefile, & pred_samefile}, 
        {(enum arg_type )3, (char *)"size", & parse_size, & pred_size}, 
        {(enum arg_type )3, (char *)"type", & parse_type, & pred_type}, 
        {(enum arg_type )3, (char *)"uid", & parse_uid, & pred_uid}, 
        {(enum arg_type )3, (char *)"used", & parse_used, & pred_used}, 
        {(enum arg_type )3, (char *)"user", & parse_user, & pred_user}, 
        {(enum arg_type )0, (char *)"warn", & parse_warn, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"wholename", & parse_wholename, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"writable", & parse_accesscheck, & pred_writable}, 
        {(enum arg_type )0, (char *)"xdev", & parse_xdev, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"xtype", & parse_xtype, & pred_xtype}, 
        {(enum arg_type )3, (char *)"false", & parse_false, & pred_false}, 
        {(enum arg_type )3, (char *)"true", & parse_true, & pred_true}, 
        {(enum arg_type )1, (char *)"noop", (boolean (*)(struct parser_table  const  *p , char **argv , int *arg_ptr ))((void *)0), & pred_true}, 
        {(enum arg_type )3, (char *)"help", & parse_help, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"-help", & parse_help, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"version", & parse_version, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )3, (char *)"-version", & parse_version, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))((void *)0)}, 
        {(enum arg_type )0, (char *)0, (boolean (*)(struct parser_table  const  *p , char **argv , int *arg_ptr ))0, (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))0}};
static char const   *first_nonoption_arg  =    (char const   *)((void *)0);
static struct parser_table  const  *noop  =    (struct parser_table  const  *)((void *)0);
void check_option_combinations(struct predicate  const  *p ) 
{ unsigned int predicates ;
  char *tmp ;

  {
  predicates = 0U;
  while (p) {
    if ((unsigned long )p->pred_func == (unsigned long )(& pred_delete)) {
      predicates |= 1U;
    } else {
      if ((unsigned long )p->pred_func == (unsigned long )(& pred_prune)) {
        predicates |= 2U;
      } else {

      }
    }
    p = (struct predicate  const  *)p->pred_next;
  }
  if (predicates & 2U) {
    if (predicates & 1U) {
      if (! options.explicit_depth) {
        tmp = dcgettext((char const   *)((void *)0), "The -delete action atomatically turns on -depth, but -prune does nothing when -depth is in effect.  If you want to carry on anyway, just explicitly use the -depth option.", 5);
        error(1, 0, (char const   *)tmp);
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
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
static int get_stat_Ytime(struct stat  const  *p , char what , struct timespec *ret ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___1 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___2 ;

  {
  switch ((int )what) {
  case 97: 
  tmp = get_stat_atime(p);
  *ret = (struct timespec )tmp;
  return (1);
  case 66: 
  tmp___0 = get_stat_birthtime(p);
  *ret = (struct timespec )tmp___0;
  return (ret->tv_nsec >= 0L);
  case 99: 
  tmp___1 = get_stat_ctime(p);
  *ret = (struct timespec )tmp___1;
  return (1);
  case 109: 
  tmp___2 = get_stat_mtime(p);
  *ret = (struct timespec )tmp___2;
  return (1);
  default: 
  __assert_fail("0", "parser.c", 432U, "get_stat_Ytime");
  abort();
  }
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
struct parser_table  const  *found_parser(char const   *original_arg , struct parser_table  const  *entry ) 
{ char *tmp ;

  {
  if ((unsigned int const   )entry->type != 2U) {
    if ((unsigned int const   )entry->type == 0U) {
      if ((unsigned long )first_nonoption_arg != (unsigned long )((void *)0)) {
        if (options.warnings) {
          tmp = dcgettext((char const   *)((void *)0), "warning: you have specified the %s option after a non-option argument %s, but options are not positional (%s affects tests specified before it as well as those specified after it).  Please specify options before other arguments.\n", 5);
          error(0, 0, (char const   *)tmp, original_arg, first_nonoption_arg, original_arg);
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
  return (entry);
}
}
struct parser_table  const  *find_parser(char *search_name ) 
{ int i ;
  char const   *original_arg ;
  struct parser_table  const  *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___3 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  size_t tmp___13 ;
  struct parser_table  const  *tmp___14 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___16 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;

  {
  original_arg = (char const   *)search_name;
  if (0) {
    if (0) {
      __s1_len = __builtin_strlen("-newer");
      __s2_len = __builtin_strlen((char const   *)search_name);
      if (! ((unsigned long )((void const   *)("-newer" + 1)) - (unsigned long )((void const   *)"-newer") == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)(search_name + 1)) - (unsigned long )((void const   *)search_name) == 1UL)) {
            tmp___8 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
          }
        } else {
          tmp___8 = 0;
        }
      }
      if (tmp___8) {
        tmp___3 = __builtin_strcmp("-newer", (char const   *)search_name);
        tmp___7 = tmp___3;
      } else {
        tmp___6 = __builtin_strcmp("-newer", (char const   *)search_name);
        tmp___7 = tmp___6;
      }
    } else {
      tmp___6 = __builtin_strcmp("-newer", (char const   *)search_name);
      tmp___7 = tmp___6;
    }
    tmp___10 = tmp___7;
  } else {
    tmp___9 = strncmp("-newer", (char const   *)search_name, 6UL);
    tmp___10 = tmp___9;
  }
  if (0 == tmp___10) {
    tmp___13 = strlen((char const   *)search_name);
    if (8UL == tmp___13) {
      tmp = found_parser(original_arg, & parse_entry_newerXY);
      return (tmp);
    } else {

    }
  } else {

  }
  if ((int )*search_name == 45) {
    search_name ++;
  } else {

  }
  i = 0;
  while ((unsigned long )parse_table[i].parser_name != (unsigned long )((char */* const  */)0)) {
    if (0) {
      __s1_len___0 = __builtin_strlen((char const   *)parse_table[i].parser_name);
      __s2_len___0 = __builtin_strlen((char const   *)search_name);
      if (! ((unsigned long )((void const   *)(parse_table[i].parser_name + 1)) - (unsigned long )((void const   *)parse_table[i].parser_name) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2: 
          if (! ((unsigned long )((void const   *)(search_name + 1)) - (unsigned long )((void const   *)search_name) == 1UL)) {
            tmp___21 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___21 = 1;
            } else {
              tmp___21 = 0;
            }
          }
        } else {
          tmp___21 = 0;
        }
      }
      if (tmp___21) {
        tmp___16 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
        tmp___20 = tmp___16;
      } else {
        tmp___19 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
        tmp___20 = tmp___19;
      }
    } else {
      tmp___19 = __builtin_strcmp((char const   *)parse_table[i].parser_name, (char const   *)search_name);
      tmp___20 = tmp___19;
    }
    if (tmp___20 == 0) {
      tmp___14 = found_parser(original_arg, & parse_table[i]);
      return (tmp___14);
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
  num_days = (int )((options.cur_day_start.tv_sec - when) / 86400L);
  tmp = estimate_file_age_success_rate((float )num_days);
  return (tmp);
}
}
static boolean collect_arg(char **argv , int *arg_ptr , char const   **collected_arg ) 
{ 

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    *collected_arg = (char const   *)((void *)0);
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      *collected_arg = (char const   *)((void *)0);
      return ((_Bool)0);
    } else {
      *collected_arg = (char const   *)*(argv + *arg_ptr);
      (*arg_ptr) ++;
      return ((_Bool)1);
    }
  }
}
}
static boolean collect_arg_stat_info(char **argv , int *arg_ptr , struct stat *p , char const   **argument ) 
{ char const   *filename ;
  int tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = collect_arg(argv, arg_ptr, & filename);
  if (tmp___0) {
    *argument = filename;
    tmp = (*(options.xstat))(filename, p);
    if (0 == tmp) {
      return ((_Bool)1);
    } else {
      fatal_file_error(filename);
    }
  } else {
    *argument = (char const   *)((void *)0);
    return ((_Bool)0);
  }
}
}
static boolean parse_and(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_noarg(entry);
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
{ struct stat stat_newer ;
  char const   *arg ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  boolean tmp___1 ;

  {
  set_stat_placeholders(& stat_newer);
  tmp___1 = collect_arg_stat_info(argv, arg_ptr, & stat_newer, & arg);
  if (tmp___1) {
    tmp = insert_primary(entry, arg);
    our_pred = tmp;
    our_pred->args.reftime.xval = (enum xval )0;
    tmp___0 = get_stat_mtime((struct stat  const  *)(& stat_newer));
    our_pred->args.reftime.ts = (struct timespec )tmp___0;
    our_pred->args.reftime.kind = (enum comparison_type )0;
    our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
boolean parse_closeparen(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_noarg(entry);
  our_pred->pred_func = & pred_closeparen;
  our_pred->p_type = (enum predicate_type )5;
  our_pred->p_prec = (enum predicate_precedence )0;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean parse_cnewer(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct stat stat_newer ;
  char const   *arg ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  boolean tmp___1 ;

  {
  set_stat_placeholders(& stat_newer);
  tmp___1 = collect_arg_stat_info(argv, arg_ptr, & stat_newer, & arg);
  if (tmp___1) {
    tmp = insert_primary(entry, arg);
    our_pred = tmp;
    our_pred->args.reftime.xval = (enum xval )2;
    tmp___0 = get_stat_mtime((struct stat  const  *)(& stat_newer));
    our_pred->args.reftime.ts = (struct timespec )tmp___0;
    our_pred->args.reftime.kind = (enum comparison_type )0;
    our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_comma(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_noarg(entry);
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
    options.cur_day_start.tv_sec += 86400L;
    options.cur_day_start.tv_nsec = 0L;
    local = localtime((time_t const   *)(& options.cur_day_start.tv_sec));
    if (local) {
      tmp = (long )((local->tm_sec + local->tm_min * 60) + local->tm_hour * 3600);
    } else {
      tmp = options.cur_day_start.tv_sec % 86400L;
    }
    options.cur_day_start.tv_sec -= tmp;
    options.full_days = (_Bool)1;
  } else {

  }
  return ((_Bool)1);
}
}
static boolean parse_delete(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary_noarg(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  options.do_dir_first = (_Bool)0;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_depth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  options.do_dir_first = (_Bool)0;
  options.explicit_depth = (_Bool)1;
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
    error(0, 0, (char const   *)tmp);
  } else {

  }
  tmp___0 = parse_depth(entry, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_empty(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  our_pred = insert_primary_noarg(entry);
  our_pred->est_success_rate = 0.01f;
  return ((_Bool)1);
}
}
static boolean parse_exec(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int tmp ;
  boolean tmp___0 ;

  {
  tmp = get_start_dirfd();
  tmp___0 = insert_exec_ok("-exec", entry, tmp, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_execdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-execdir", entry, -1, argv, arg_ptr);
  return (tmp);
}
}
static boolean parse_false(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary_noarg(entry);
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
static boolean insert_fls(struct parser_table  const  *entry , char const   *filename ) 
{ struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;

  {
  tmp = insert_primary_noarg(entry);
  our_pred = tmp;
  if (filename) {
    open_output_file(filename, & our_pred->args.printf_vec);
  } else {
    open_stdout(& our_pred->args.printf_vec);
  }
  tmp___0 = (_Bool)1;
  our_pred->no_default_print = tmp___0;
  our_pred->side_effects = tmp___0;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_fls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *filename ;
  boolean tmp ;
  boolean tmp___0 ;
  int tmp___1 ;

  {
  tmp = collect_arg(argv, arg_ptr, & filename);
  if (tmp) {
    tmp___0 = insert_fls(entry, filename);
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  return ((_Bool )tmp___1);
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
  char const   *filename ;
  boolean tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  tmp___1 = collect_arg(argv, arg_ptr, & filename);
  if (tmp___1) {
    our_pred = insert_primary(entry, filename);
    open_output_file(filename, & our_pred->args.printf_vec);
    tmp = (_Bool)1;
    our_pred->no_default_print = tmp;
    our_pred->side_effects = tmp;
    tmp___0 = (_Bool)0;
    our_pred->need_type = tmp___0;
    our_pred->need_stat = tmp___0;
    our_pred->est_success_rate = 1.0f;
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static boolean insert_fprint(struct parser_table  const  *entry , char const   *filename ) 
{ struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  tmp = insert_primary(entry, filename);
  our_pred = tmp;
  if (filename) {
    open_output_file(filename, & our_pred->args.printf_vec);
  } else {
    open_stdout(& our_pred->args.printf_vec);
  }
  tmp___0 = (_Bool)1;
  our_pred->no_default_print = tmp___0;
  our_pred->side_effects = tmp___0;
  tmp___1 = (_Bool)0;
  our_pred->need_type = tmp___1;
  our_pred->need_stat = tmp___1;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_fprint0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *filename ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = collect_arg(argv, arg_ptr, & filename);
  if (tmp___0) {
    tmp = insert_fprint(entry, filename);
    return (tmp);
  } else {
    return ((_Bool)0);
  }
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
{ char const   *typename ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = collect_arg(argv, arg_ptr, & typename);
  if (tmp___0) {
    tmp = insert_primary(entry, typename);
    our_pred = tmp;
    our_pred->args.str = typename;
    our_pred->est_success_rate = estimate_fstype_success_rate(typename);
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static boolean parse_gid(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  if (p) {
    if (p->args.numinfo.l_val < 100UL) {
      p->est_success_rate = (float )0.99;
    } else {
      p->est_success_rate = (float )0.2;
    }
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static int safe_atoi(char const   *s ) 
{ long lval ;
  char *end ;
  int *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int *tmp___10 ;

  {
  tmp = __errno_location();
  *tmp = 0;
  lval = strtol((char const   */* __restrict  */)s, (char **/* __restrict  */)(& end), 10);
  if (9223372036854775807L == lval) {
    goto _L;
  } else {
    if ((-0x7FFFFFFFFFFFFFFF-1) == lval) {
      _L: 
      tmp___2 = __errno_location();
      if (*tmp___2 == 34) {
        tmp___0 = __errno_location();
        error(1, *tmp___0, "%s", s);
      } else {
        tmp___1 = __errno_location();
        error(1, *tmp___1, "%s", s);
      }
    } else {

    }
  }
  if (lval > 2147483647L) {
    tmp___3 = __errno_location();
    *tmp___3 = 34;
    tmp___4 = __errno_location();
    error(1, *tmp___4, "%s", s);
  } else {
    if (lval < (-0x7FFFFFFF-1)) {
      tmp___3 = __errno_location();
      *tmp___3 = 34;
      tmp___4 = __errno_location();
      error(1, *tmp___4, "%s", s);
    } else {
      if (*end) {
        tmp___5 = quotearg_n_style(1, options.err_quoting_style, s);
        tmp___6 = quotearg_n_style(0, options.err_quoting_style, (char const   *)end);
        tmp___7 = dcgettext((char const   *)((void *)0), "Unexpected suffix %s on %s", 5);
        tmp___8 = __errno_location();
        error(1, *tmp___8, (char const   *)tmp___7, tmp___6, tmp___5);
      } else {
        if ((unsigned long )end == (unsigned long )s) {
          tmp___9 = quotearg_n_style(0, options.err_quoting_style, s);
          tmp___10 = __errno_location();
          error(1, *tmp___10, "Expected an integer: %s", tmp___9);
        } else {

        }
      }
    }
  }
  return ((int )lval);
}
}
static boolean parse_group(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *groupname ;
  gid_t gid ;
  struct predicate *our_pred ;
  struct group *cur_gr ;
  struct group *tmp ;
  int gid_len ;
  unsigned long tmp___9 ;
  int tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  boolean tmp___17 ;

  {
  tmp___17 = collect_arg(argv, arg_ptr, & groupname);
  if (tmp___17) {
    tmp = getgrnam(groupname);
    cur_gr = tmp;
    endgrent();
    if (cur_gr) {
      gid = cur_gr->gr_gid;
    } else {
      tmp___9 = __builtin_strspn(groupname, "0123456789");
      gid_len = (int )tmp___9;
      if (gid_len) {
        if ((int const   )*(groupname + gid_len) == 0) {
          tmp___10 = safe_atoi(groupname);
          gid = (unsigned int )tmp___10;
        } else {
          tmp___11 = quotearg_n_style(1, options.err_quoting_style, groupname + gid_len);
          tmp___12 = quotearg_n_style(0, options.err_quoting_style, groupname);
          tmp___13 = dcgettext((char const   *)((void *)0), "%s is not the name of an existing group and it does not look like a numeric group ID because it has the unexpected suffix %s", 5);
          error(1, 0, (char const   *)tmp___13, tmp___12, tmp___11);
          return ((_Bool)0);
        }
      } else {
        if (*groupname) {
          tmp___14 = quotearg_n_style(0, options.err_quoting_style, groupname);
          tmp___15 = dcgettext((char const   *)((void *)0), "%s is not the name of an existing group", 5);
          error(1, 0, (char const   *)tmp___15, tmp___14);
        } else {
          tmp___16 = dcgettext((char const   *)((void *)0), "argument to -group is empty, but should be a group name", 5);
          error(1, 0, (char const   *)tmp___16);
        }
        return ((_Bool)0);
      }
    }
    our_pred = insert_primary(entry, groupname);
    our_pred->args.gid = gid;
    if (our_pred->args.numinfo.l_val < 100UL) {
      our_pred->est_success_rate = (float )0.99;
    } else {
      our_pred->est_success_rate = (float )0.2;
    }
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
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
{ char const   *name ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  float tmp___0 ;
  boolean tmp___1 ;

  {
  tmp___1 = collect_arg(argv, arg_ptr, & name);
  if (tmp___1) {
    tmp = insert_primary(entry, name);
    our_pred = tmp;
    our_pred->args.str = name;
    tmp___0 = estimate_pattern_match_rate(name, 0);
    our_pred->est_success_rate = (float )(0.1 * (double )tmp___0);
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static boolean fnmatch_sanitycheck(void) ;
static boolean checked  =    (_Bool)0;
static boolean fnmatch_sanitycheck(void) 
{ char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  if (! checked) {
    tmp___0 = fnmatch("foo", "foo", 0);
    if (0 != tmp___0) {
      tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
      error(1, 0, (char const   *)tmp);
      return ((_Bool)0);
    } else {
      tmp___1 = fnmatch("Foo", "foo", 0);
      if (0 == tmp___1) {
        tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
        error(1, 0, (char const   *)tmp);
        return ((_Bool)0);
      } else {
        tmp___2 = fnmatch("Foo", "foo", 1 << 4);
        if (0 != tmp___2) {
          tmp = dcgettext((char const   *)((void *)0), "sanity check of the fnmatch() library function failed.", 5);
          error(1, 0, (char const   *)tmp);
          return ((_Bool)0);
        } else {

        }
      }
    }
    checked = (_Bool)1;
  } else {

  }
  return (checked);
}
}
static boolean check_name_arg(char const   *pred , char const   *arg ) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___3 ;

  {
  if (options.warnings) {
    tmp___3 = __builtin_strchr((char *)arg, '/');
    if (tmp___3) {
      tmp = safely_quote_err_filename(1, arg);
      tmp___0 = safely_quote_err_filename(0, arg);
      tmp___1 = dcgettext((char const   *)((void *)0), "warning: Unix filenames usually don\'t contain slashes (though pathnames do).  That means that \'%s %s\' will probably evaluate to false all the time on this system.  You might find the \'-wholename\' test more useful, or perhaps \'-samefile\'.  Alternatively, if you are using GNU grep, you could use \'find ... -print0 | grep -FzZ %s\'.", 5);
      error(0, 0, (char const   *)tmp___1, pred, tmp___0, tmp);
    } else {

    }
  } else {

  }
  return ((_Bool)1);
}
}
static boolean parse_iname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *name ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;
  boolean tmp___2 ;

  {
  fnmatch_sanitycheck();
  tmp___2 = collect_arg(argv, arg_ptr, & name);
  if (tmp___2) {
    tmp___1 = check_name_arg("-iname", name);
    if (tmp___1) {
      tmp = insert_primary(entry, name);
      our_pred = tmp;
      tmp___0 = (_Bool)0;
      our_pred->need_type = tmp___0;
      our_pred->need_stat = tmp___0;
      our_pred->args.str = name;
      our_pred->est_success_rate = estimate_pattern_match_rate(name, 0);
      return ((_Bool)1);
    } else {

    }
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_inum(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *p ;
  struct predicate *tmp ;

  {
  tmp = insert_num(argv, arg_ptr, entry);
  p = tmp;
  if (p) {
    p->est_success_rate = (float )1e-6;
    p->need_inum = (_Bool)1;
    p->need_stat = (_Bool)0;
    p->need_type = (_Bool)0;
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
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
  if (p) {
    if (p->args.numinfo.l_val == 1UL) {
      p->est_success_rate = (float )0.99;
    } else {
      if (p->args.numinfo.l_val == 2UL) {
        p->est_success_rate = (float )0.01;
      } else {
        p->est_success_rate = (float )1e-3;
      }
    }
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static boolean parse_lname(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *name ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  float tmp___0 ;
  boolean tmp___1 ;

  {
  fnmatch_sanitycheck();
  tmp___1 = collect_arg(argv, arg_ptr, & name);
  if (tmp___1) {
    tmp = insert_primary(entry, name);
    our_pred = tmp;
    our_pred->args.str = name;
    tmp___0 = estimate_pattern_match_rate(name, 0);
    our_pred->est_success_rate = (float )(0.1 * (double )tmp___0);
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_ls(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_fls(entry, (char const   *)((void *)0));
  return (tmp);
}
}
static boolean insert_depthspec(struct parser_table  const  *entry , char **argv , int *arg_ptr , int *limitptr ) 
{ char const   *depthstr ;
  int depth_len ;
  char const   *predicate ;
  unsigned long tmp___8 ;
  boolean tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  boolean tmp___12 ;

  {
  predicate = (char const   *)*(argv + (*arg_ptr - 1));
  tmp___12 = collect_arg(argv, arg_ptr, & depthstr);
  if (tmp___12) {
    tmp___8 = __builtin_strspn(depthstr, "0123456789");
    depth_len = (int )tmp___8;
    if (depth_len > 0) {
      if ((int const   )*(depthstr + depth_len) == 0) {
        *limitptr = safe_atoi(depthstr);
        if (*limitptr >= 0) {
          tmp___9 = parse_noop(entry, argv, arg_ptr);
          return (tmp___9);
        } else {

        }
      } else {

      }
    } else {

    }
    tmp___10 = quotearg_n_style(0, options.err_quoting_style, depthstr);
    tmp___11 = dcgettext((char const   *)((void *)0), "Expected a positive decimal integer argument to %s, but got %s", 5);
    error(1, 0, (char const   *)tmp___11, predicate, tmp___10);
    return ((_Bool)0);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_maxdepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_depthspec(entry, argv, arg_ptr, & options.maxdepth);
  return (tmp);
}
}
static boolean parse_mindepth(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_depthspec(entry, argv, arg_ptr, & options.mindepth);
  return (tmp);
}
}
static boolean do_parse_xmin(struct parser_table  const  *entry , char **argv , int *arg_ptr , enum xval xv ) 
{ char const   *minutes ;
  struct time_val tval ;
  struct timespec origin ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  tmp___1 = collect_arg(argv, arg_ptr, & minutes);
  if (tmp___1) {
    origin = options.cur_day_start;
    tval.xval = xv;
    origin.tv_sec += 86400L;
    tmp___0 = get_relative_timestamp(minutes, & tval, origin, (double )60, "arithmetic overflow while converting %s minutes to a number of seconds");
    if (tmp___0) {
      tmp = insert_primary(entry, minutes);
      our_pred = tmp;
      our_pred->args.reftime = tval;
      our_pred->est_success_rate = estimate_timestamp_success_rate(tval.ts.tv_sec);
      return ((_Bool)1);
    } else {

    }
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_amin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = do_parse_xmin(entry, argv, arg_ptr, (enum xval )0);
  return (tmp);
}
}
static boolean parse_cmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = do_parse_xmin(entry, argv, arg_ptr, (enum xval )2);
  return (tmp);
}
}
static boolean parse_mmin(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = do_parse_xmin(entry, argv, arg_ptr, (enum xval )3);
  return (tmp);
}
}
static boolean parse_name(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *name ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;
  boolean tmp___2 ;

  {
  tmp___2 = collect_arg(argv, arg_ptr, & name);
  if (tmp___2) {
    fnmatch_sanitycheck();
    tmp___1 = check_name_arg("-name", name);
    if (tmp___1) {
      tmp = insert_primary(entry, name);
      our_pred = tmp;
      tmp___0 = (_Bool)0;
      our_pred->need_type = tmp___0;
      our_pred->need_stat = tmp___0;
      our_pred->args.str = name;
      our_pred->est_success_rate = estimate_pattern_match_rate(name, 0);
      return ((_Bool)1);
    } else {

    }
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_negate(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_chk_op(entry, (char const   *)((void *)0));
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
  char const   *arg ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  boolean tmp___0 ;

  {
  set_stat_placeholders(& stat_newer);
  tmp___0 = collect_arg_stat_info(argv, arg_ptr, & stat_newer, & arg);
  if (tmp___0) {
    our_pred = insert_primary(entry, arg);
    tmp = get_stat_mtime((struct stat  const  *)(& stat_newer));
    our_pred->args.reftime.ts = (struct timespec )tmp;
    our_pred->args.reftime.xval = (enum xval )3;
    our_pred->args.reftime.kind = (enum comparison_type )0;
    our_pred->est_success_rate = estimate_timestamp_success_rate(stat_newer.st_mtim.tv_sec);
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_newerXY(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char x ;
  char y ;
  char validchars[6] ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  char *tmp___12 ;
  struct predicate *our_pred ;
  char *tmp___13 ;
  char *tmp___14 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  _Bool tmp___19 ;
  struct stat stat_newer ;
  int tmp___20 ;
  char const   *tmp___21 ;
  char *tmp___22 ;
  int tmp___23 ;
  char *tmp___25 ;
  char *tmp___27 ;
  size_t tmp___28 ;

  {
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {
      tmp___28 = strlen((char const   *)*(argv + *arg_ptr));
      if (8UL != tmp___28) {
        return ((_Bool)0);
      } else {
        validchars[0] = (char )'a';
        validchars[1] = (char )'B';
        validchars[2] = (char )'c';
        validchars[3] = (char )'m';
        validchars[4] = (char )'t';
        validchars[5] = (char )'\000';
        if (0) {
          if (0) {
            __s1_len = __builtin_strlen("-newer");
            __s2_len = __builtin_strlen((char const   *)*(argv + *arg_ptr));
            if (! ((unsigned long )((void const   *)("-newer" + 1)) - (unsigned long )((void const   *)"-newer") == 1UL)) {
              goto _L___0;
            } else {
              if (__s1_len >= 4UL) {
                _L___0: 
                if (! ((unsigned long )((void const   *)(*(argv + *arg_ptr) + 1)) - (unsigned long )((void const   *)*(argv + *arg_ptr)) == 1UL)) {
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
              tmp___2 = __builtin_strcmp("-newer", (char const   *)*(argv + *arg_ptr));
              tmp___6 = tmp___2;
            } else {
              tmp___5 = __builtin_strcmp("-newer", (char const   *)*(argv + *arg_ptr));
              tmp___6 = tmp___5;
            }
          } else {
            tmp___5 = __builtin_strcmp("-newer", (char const   *)*(argv + *arg_ptr));
            tmp___6 = tmp___5;
          }
          tmp___9 = tmp___6;
        } else {
          tmp___8 = strncmp("-newer", (char const   *)*(argv + *arg_ptr), 6UL);
          tmp___9 = tmp___8;
        }
        if (! (0 == tmp___9)) {
          __assert_fail("0 == (__extension__ (__builtin_constant_p (6) && ((__builtin_constant_p (\"-newer\") && strlen (\"-newer\") < ((size_t) (6))) || (__builtin_constant_p (argv[*arg_ptr]) && strlen (argv[*arg_ptr]) < ((size_t) (6)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (\"-newer\") && __builtin_constant_p (argv[*arg_ptr]) && (__s1_len = __builtin_strlen (\"-newer\"), __s2_len = __builtin_strlen (argv[*arg_ptr]), (!((size_t)(const void *)((\"-newer\") + 1) - (size_t)(const void *)(\"-newer\") == 1) || __s1_len >= 4) && (!((size_t)(const void *)((argv[*arg_ptr]) + 1) - (size_t)(const void *)(argv[*arg_ptr]) == 1) || __s2_len >= 4)) ? __builtin_strcmp (\"-newer\", argv[*arg_ptr]) : (__builtin_constant_p (\"-newer\") && ((size_t)(const void *)((\"-newer\") + 1) - (size_t)(const void *)(\"-newer\") == 1) && (__s1_len = __builtin_strlen (\"-newer\"), __s1_len < 4) ? (__builtin_constant_p (argv[*arg_ptr]) && ((size_t)(const void *)((argv[*arg_ptr]) + 1) - (size_t)(const void *)(argv[*arg_ptr]) == 1) ? __builtin_strcmp (\"-newer\", argv[*arg_ptr]) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (argv[*arg_ptr]); int __result = (((const unsigned char *) (const char *) (\"-newer\"))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (\"-newer\"))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (\"-newer\"))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (\"-newer\"))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (argv[*arg_ptr]) && ((size_t)(const void *)((argv[*arg_ptr]) + 1) - (size_t)(const void *)(argv[*arg_ptr]) == 1) && (__s2_len = __builtin_strlen (argv[*arg_ptr]), __s2_len < 4) ? (__builtin_constant_p (\"-newer\") && ((size_t)(const void *)((\"-newer\") + 1) - (size_t)(const void *)(\"-newer\") == 1) ? __builtin_strcmp (\"-newer\", argv[*arg_ptr]) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (\"-newer\"); int __result = (((const unsigned char *) (const char *) (argv[*arg_ptr]))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[*arg_ptr]))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (argv[*arg_ptr]))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (argv[*arg_ptr]))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (\"-newer\", argv[*arg_ptr])))); }) : strncmp (\"-newer\", argv[*arg_ptr], 6)))", "parser.c", 1476U, "parse_newerXY");
        } else {

        }
        x = *(*(argv + *arg_ptr) + 6);
        y = *(*(argv + *arg_ptr) + 7);
        if (66 == (int )x) {
          tmp___12 = dcgettext((char const   *)((void *)0), "This system does not provide a way to find the birth time of a file.", 5);
          error(0, 0, (char const   *)tmp___12);
          return ((_Bool)0);
        } else {
          if (66 == (int )y) {
            tmp___12 = dcgettext((char const   *)((void *)0), "This system does not provide a way to find the birth time of a file.", 5);
            error(0, 0, (char const   *)tmp___12);
            return ((_Bool)0);
          } else {

          }
        }
        if ((int )x == 116) {
          return ((_Bool)0);
        } else {
          tmp___25 = __builtin_strchr(validchars, (int )x);
          if ((unsigned long )((char *)0) == (unsigned long )tmp___25) {
            return ((_Bool)0);
          } else {
            tmp___27 = __builtin_strchr(validchars, (int )y);
            if ((unsigned long )((char *)0) == (unsigned long )tmp___27) {
              return ((_Bool)0);
            } else {
              if ((unsigned long )*(argv + (1 + *arg_ptr)) == (unsigned long )((void *)0)) {
                tmp___13 = quotearg_n_style(0, options.err_quoting_style, (char const   *)*(argv + *arg_ptr));
                tmp___14 = dcgettext((char const   *)((void *)0), "The %s test needs an argument", 5);
                error(1, 0, (char const   *)tmp___14, tmp___13);
              } else {
                (*arg_ptr) ++;
              }
              our_pred = insert_primary(entry, (char const   *)*(argv + *arg_ptr));
              switch ((int )x) {
              case 97: 
              our_pred->args.reftime.xval = (enum xval )0;
              break;
              case 66: 
              our_pred->args.reftime.xval = (enum xval )1;
              break;
              case 99: 
              our_pred->args.reftime.xval = (enum xval )2;
              break;
              case 109: 
              our_pred->args.reftime.xval = (enum xval )3;
              break;
              default: 
              tmp___16 = __builtin_strchr(validchars, (int )x);
              if (! tmp___16) {
                __assert_fail("(__extension__ (__builtin_constant_p (x) && !__builtin_constant_p (validchars) && (x) == \'\\0\' ? (char *) __rawmemchr (validchars, x) : __builtin_strchr (validchars, x)))", "parser.c", 1532U, "parse_newerXY");
              } else {

              }
              __assert_fail("0", "parser.c", 1533U, "parse_newerXY");
              }
              if (116 == (int )y) {
                tmp___19 = parse_datetime(& our_pred->args.reftime.ts, (char const   *)*(argv + *arg_ptr), (struct timespec  const  *)(& options.start_time));
                if (! tmp___19) {
                  tmp___17 = quotearg_n_style(0, options.err_quoting_style, (char const   *)*(argv + *arg_ptr));
                  tmp___18 = dcgettext((char const   *)((void *)0), "I cannot figure out how to interpret %s as a date or time", 5);
                  error(1, 0, (char const   *)tmp___18, tmp___17);
                } else {

                }
              } else {
                set_stat_placeholders(& stat_newer);
                tmp___20 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & stat_newer);
                if (tmp___20) {
                  fatal_file_error((char const   *)*(argv + *arg_ptr));
                } else {

                }
                tmp___23 = get_stat_Ytime((struct stat  const  *)(& stat_newer), y, & our_pred->args.reftime.ts);
                if (! tmp___23) {
                  tmp___21 = safely_quote_err_filename(0, (char const   *)*(argv + *arg_ptr));
                  tmp___22 = dcgettext((char const   *)((void *)0), "Cannot obtain birth time of file %s", 5);
                  error(1, 0, (char const   *)tmp___22, tmp___21);
                } else {

                }
              }
              our_pred->args.reftime.kind = (enum comparison_type )0;
              our_pred->est_success_rate = estimate_timestamp_success_rate(our_pred->args.reftime.ts.tv_sec);
              (*arg_ptr) ++;
              if (! ((unsigned long )our_pred->pred_func != (unsigned long )((void *)0))) {
                __assert_fail("our_pred->pred_func != ((void *)0)", "parser.c", 1567U, "parse_newerXY");
              } else {

              }
              if (! ((unsigned long )our_pred->pred_func == (unsigned long )(& pred_newerXY))) {
                __assert_fail("our_pred->pred_func == pred_newerXY", "parser.c", 1568U, "parse_newerXY");
              } else {

              }
              if (! our_pred->need_stat) {
                __assert_fail("our_pred->need_stat", "parser.c", 1569U, "parse_newerXY");
              } else {

              }
              return ((_Bool)1);
            }
          }
        }
      }
    }
  }
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
  our_pred = insert_primary(entry, (char const   *)((void *)0));
  our_pred->est_success_rate = (float )1e-4;
  return ((_Bool)1);
}
}
static boolean parse_nouser(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;

  {
  our_pred = insert_primary_noarg(entry);
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
{ int tmp ;
  boolean tmp___0 ;

  {
  tmp = get_start_dirfd();
  tmp___0 = insert_exec_ok("-ok", entry, tmp, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_okdir(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_exec_ok("-okdir", entry, -1, argv, arg_ptr);
  return (tmp);
}
}
boolean parse_openparen(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = get_new_pred_chk_op(entry, (char const   *)((void *)0));
  our_pred->pred_func = & pred_openparen;
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
  our_pred = get_new_pred_noarg(entry);
  our_pred->pred_func = & pred_or;
  our_pred->p_type = (enum predicate_type )3;
  our_pred->p_prec = (enum predicate_precedence )2;
  tmp = (_Bool)0;
  our_pred->need_type = tmp;
  our_pred->need_stat = tmp;
  return ((_Bool)1);
}
}
static boolean is_feasible_path_argument(char const   *arg , boolean foldcase ) 
{ char const   *last ;
  char *tmp ;
  boolean tmp___0 ;

  {
  tmp = strrchr(arg, '/');
  last = (char const   *)tmp;
  if (last) {
    if (! *(last + 1)) {
      tmp___0 = matches_start_point(arg, foldcase);
      if (tmp___0) {
        return ((_Bool)1);
      } else {
        return ((_Bool)0);
      }
    } else {

    }
  } else {

  }
  return ((_Bool)1);
}
}
static boolean insert_path_check(struct parser_table  const  *entry , char **argv , int *arg_ptr , char const   *pred_name___0 , PREDICATEFUNCTION *pred ) 
{ char const   *name ;
  boolean foldcase ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  char *tmp___1 ;
  boolean tmp___2 ;
  boolean tmp___3 ;

  {
  foldcase = (_Bool)0;
  if ((unsigned long )pred == (unsigned long )(& pred_ipath)) {
    foldcase = (_Bool)1;
  } else {

  }
  fnmatch_sanitycheck();
  tmp___3 = collect_arg(argv, arg_ptr, & name);
  if (tmp___3) {
    tmp = insert_primary_withpred(entry, pred, name);
    our_pred = tmp;
    tmp___0 = (_Bool)0;
    our_pred->need_type = tmp___0;
    our_pred->need_stat = tmp___0;
    our_pred->args.str = name;
    our_pred->est_success_rate = estimate_pattern_match_rate(name, 0);
    if (! options.posixly_correct) {
      tmp___2 = is_feasible_path_argument(name, foldcase);
      if (! tmp___2) {
        tmp___1 = dcgettext((char const   *)((void *)0), "warning: -%s %s will not match anything because it ends with /.", 5);
        error(0, 0, (char const   *)tmp___1, pred_name___0, name);
        our_pred->est_success_rate = (float )1.0e-8;
      } else {

      }
    } else {

    }
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_path(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_path_check(entry, argv, arg_ptr, "path", & pred_path);
  return (tmp);
}
}
static boolean parse_wholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_path_check(entry, argv, arg_ptr, "wholename", & pred_path);
  return (tmp);
}
}
static boolean parse_ipath(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_path_check(entry, argv, arg_ptr, "ipath", & pred_ipath);
  return (tmp);
}
}
static boolean parse_iwholename(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_path_check(entry, argv, arg_ptr, "iwholename", & pred_ipath);
  return (tmp);
}
}
static void non_posix_mode(char const   *mode ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  if (options.posixly_correct) {
    tmp = quotearg_n_style(0, options.err_quoting_style, mode);
    tmp___0 = dcgettext((char const   *)((void *)0), "Mode %s is not valid when POSIXLY_CORRECT is on.", 5);
    error(1, 0, (char const   *)tmp___0, tmp);
  } else {

  }
  return;
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
  char const   *perm_expr ;
  boolean tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;

  {
  mode_start = 0;
  havekind = (_Bool)0;
  kind = (enum permissions_type )2;
  change = (struct mode_change *)((void *)0);
  tmp = collect_arg(argv, arg_ptr, & perm_expr);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  switch ((int )*(perm_expr + 0)) {
  case 45: 
  mode_start = 1;
  kind = (enum permissions_type )0;
  havekind = (_Bool)1;
  rate = (float )0.2;
  break;
  case 43: 
  change = mode_compile(perm_expr);
  if ((unsigned long )((void *)0) == (unsigned long )change) {
    non_posix_mode(perm_expr);
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
  non_posix_mode(perm_expr);
  mode_start = 1;
  kind = (enum permissions_type )1;
  havekind = (_Bool)1;
  rate = (float )0.3;
  break;
  default: 
  mode_start = 0;
  kind = (enum permissions_type )2;
  havekind = (_Bool)1;
  rate = (float )0.01;
  break;
  }
  if ((unsigned long )((void *)0) == (unsigned long )change) {
    change = mode_compile(perm_expr + mode_start);
    if ((unsigned long )((void *)0) == (unsigned long )change) {
      tmp___0 = quotearg_n_style(0, options.err_quoting_style, perm_expr);
      tmp___1 = dcgettext((char const   *)((void *)0), "invalid mode %s", 5);
      error(1, 0, (char const   *)tmp___1, tmp___0);
    } else {

    }
  } else {

  }
  perm_val[0] = mode_adjust(0U, (_Bool)0, 0U, (struct mode_change  const  *)change, (mode_t *)((void *)0));
  perm_val[1] = mode_adjust(0U, (_Bool)1, 0U, (struct mode_change  const  *)change, (mode_t *)((void *)0));
  free((void *)change);
  if (47 == (int )*(perm_expr + 0)) {
    if (0U == perm_val[0]) {
      if (0U == perm_val[1]) {
        tmp___2 = dcgettext((char const   *)((void *)0), "warning: you have specified a mode pattern %s (which is equivalent to /000). The meaning of -perm /000 has now been changed to be consistent with -perm -000; that is, while it used to match no files, it now matches all files.", 5);
        error(0, 0, (char const   *)tmp___2, perm_expr);
        kind = (enum permissions_type )0;
        havekind = (_Bool)1;
        rate = (float )0.9986;
      } else {

      }
    } else {

    }
  } else {

  }
  our_pred = insert_primary(entry, perm_expr);
  our_pred->est_success_rate = rate;
  if (havekind) {
    our_pred->args.perm.kind = kind;
  } else {
    switch ((int )*(perm_expr + 0)) {
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
  memcpy((void */* __restrict  */)(our_pred->args.perm.val), (void const   */* __restrict  */)(perm_val), sizeof(perm_val));
  return ((_Bool)1);
}
}
boolean parse_print(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary_noarg(entry);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  open_stdout(& our_pred->args.printf_vec);
  return ((_Bool)1);
}
}
static boolean parse_print0(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = insert_fprint(entry, (char const   *)((void *)0));
  return (tmp);
}
}
static boolean parse_printf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *format ;
  struct format_val fmt ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = collect_arg(argv, arg_ptr, & format);
  if (tmp___0) {
    open_stdout(& fmt);
    tmp = insert_fprintf(& fmt, entry, & pred_fprintf, format);
    return (tmp);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_fprintf(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *format ;
  char const   *filename ;
  struct format_val fmt ;
  boolean tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  tmp___1 = collect_arg(argv, arg_ptr, & filename);
  if (tmp___1) {
    tmp___0 = collect_arg(argv, arg_ptr, & format);
    if (tmp___0) {
      open_output_file(filename, & fmt);
      tmp = insert_fprintf(& fmt, entry, & pred_fprintf, format);
      return (tmp);
    } else {

    }
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_prune(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary_noarg(entry);
  if ((int )options.do_dir_first == 0) {
    tmp = (_Bool)0;
    our_pred->need_type = tmp;
    our_pred->need_stat = tmp;
  } else {

  }
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
  tmp = insert_primary_noarg(entry);
  our_pred = tmp;
  tmp___0 = (_Bool)0;
  our_pred->need_type = tmp___0;
  our_pred->need_stat = tmp___0;
  our_pred->side_effects = (_Bool)1;
  our_pred->no_default_print = (_Bool)0;
  our_pred->est_success_rate = 1.0f;
  return ((_Bool)1);
}
}
static boolean parse_regextype(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *type_name ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = collect_arg(argv, arg_ptr, & type_name);
  if (tmp___0) {
    options.regex_options = get_regex_type(type_name);
    tmp = parse_noop(entry, argv, arg_ptr);
    return (tmp);
  } else {

  }
  return ((_Bool)0);
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
{ char const   *rx ;
  struct re_pattern_buffer *re ;
  char const   *error_message ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  boolean tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  boolean tmp___4 ;

  {
  tmp___4 = collect_arg(argv, arg_ptr, & rx);
  if (tmp___4) {
    tmp = insert_primary_withpred(entry, & pred_regex, rx);
    our_pred = tmp;
    tmp___0 = (_Bool)0;
    our_pred->need_type = tmp___0;
    our_pred->need_stat = tmp___0;
    tmp___1 = xmalloc(sizeof(struct re_pattern_buffer ));
    re = (struct re_pattern_buffer *)tmp___1;
    our_pred->args.regex = re;
    re->allocated = 100UL;
    tmp___2 = xmalloc(re->allocated);
    re->buffer = (struct re_dfa_t *)tmp___2;
    re->fastmap = (char *)((void *)0);
    re_set_syntax((unsigned long )regex_options);
    re->syntax = (unsigned long )regex_options;
    re->translate = (unsigned char *)((void *)0);
    tmp___3 = strlen(rx);
    error_message = re_compile_pattern(rx, tmp___3, re);
    if (error_message) {
      error(1, 0, "%s", error_message);
    } else {

    }
    our_pred->est_success_rate = estimate_pattern_match_rate(rx, 1);
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_size(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  char *arg ;
  uintmax_t num ;
  char suffix ;
  enum comparison_type c_type ;
  int blksize ;
  int len ;
  size_t tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  boolean tmp___3 ;

  {
  blksize = 512;
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  arg = *(argv + *arg_ptr);
  tmp = strlen((char const   *)arg);
  len = (int )tmp;
  if (len == 0) {
    tmp___0 = dcgettext((char const   *)((void *)0), "invalid null argument to -size", 5);
    error(1, 0, (char const   *)tmp___0);
  } else {

  }
  suffix = *(arg + (len - 1));
  switch ((int )suffix) {
  case 98: 
  blksize = 512;
  *(arg + (len - 1)) = (char )'\000';
  break;
  case 99: 
  blksize = 1;
  *(arg + (len - 1)) = (char )'\000';
  break;
  case 107: 
  blksize = 1024;
  *(arg + (len - 1)) = (char )'\000';
  break;
  case 77: 
  blksize = 1048576;
  *(arg + (len - 1)) = (char )'\000';
  break;
  case 71: 
  blksize = 1073741824;
  *(arg + (len - 1)) = (char )'\000';
  break;
  case 119: 
  blksize = 2;
  *(arg + (len - 1)) = (char )'\000';
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
  error(1, 0, (char const   *)tmp___1, *(*(argv + *arg_ptr) + (len - 1)));
  }
  tmp___3 = get_num((char const   *)arg, & num, & c_type);
  if (! tmp___3) {
    tmp___2 = dcgettext((char const   *)((void *)0), "Invalid argument `%s%c\' to -size", 5);
    error(1, 0, (char const   *)tmp___2, arg, (int )suffix);
    return ((_Bool)0);
  } else {

  }
  our_pred = insert_primary(entry, (char const   *)arg);
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
  struct stat fst ;
  int fd ;
  int openflags ;
  char const   *filename ;
  boolean tmp ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___0 ;
  int tmp___1 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___2 ;

  {
  set_stat_placeholders(& st);
  tmp = collect_arg_stat_info(argv, arg_ptr, & st, & filename);
  if (! tmp) {
    return ((_Bool)0);
  } else {

  }
  set_stat_placeholders(& fst);
  fd = -3;
  openflags = 0;
  if ((unsigned int )options.symlink_handling == 0U) {
    if (options.open_nofollow_available) {
      openflags |= 131072;
      fd = -1;
    } else {
      if ((st.st_mode & 61440U) == 40960U) {
        fd = -2;
      } else {
        fd = -1;
      }
    }
  } else {
    fd = -1;
  }
  if (! (fd != -3)) {
    __assert_fail("fd != -3", "parser.c", 2259U, "parse_samefile");
  } else {

  }
  if (fd == -1) {
    tmp___0 = open((char const   *)*(argv + *arg_ptr), openflags);
    fd = (int )tmp___0;
    if (fd >= 0) {
      tmp___2 = fstat(fd, & fst);
      if (0 != (int )tmp___2) {
        fatal_file_error((char const   *)*(argv + *arg_ptr));
      } else {
        tmp___1 = (*(options.xstat))((char const   *)*(argv + *arg_ptr), & st);
        if (tmp___1) {
          fatal_file_error((char const   *)*(argv + *arg_ptr));
        } else {

        }
        if ((unsigned int )options.symlink_handling == 0U) {
          if (! options.open_nofollow_available) {
            if ((st.st_mode & 61440U) == 40960U) {
              close(fd);
              fd = -1;
            } else {
              if (st.st_dev == fst.st_dev) {
                if (! (st.st_ino == fst.st_ino)) {
                  close(fd);
                  fd = -1;
                } else {

                }
              } else {
                close(fd);
                fd = -1;
              }
            }
          } else {
            st = fst;
          }
        } else {
          st = fst;
        }
      }
    } else {

    }
  } else {

  }
  our_pred = insert_primary(entry, filename);
  our_pred->args.samefileid.ino = st.st_ino;
  our_pred->args.samefileid.dev = st.st_dev;
  our_pred->args.samefileid.fd = fd;
  our_pred->need_type = (_Bool)0;
  our_pred->need_stat = (_Bool)1;
  our_pred->est_success_rate = 0.01f;
  return ((_Bool)1);
}
}
static boolean parse_true(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;

  {
  our_pred = insert_primary_noarg(entry);
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

  {
  tmp = get_noop();
  tmp___0 = parse_true(tmp, argv, arg_ptr);
  return (tmp___0);
}
}
static boolean parse_accesscheck(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  boolean tmp ;
  boolean tmp___0 ;

  {
  our_pred = insert_primary_noarg(entry);
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
  if (p) {
    if (p->args.numinfo.l_val < 100UL) {
      p->est_success_rate = (float )0.99;
    } else {
      p->est_success_rate = (float )0.2;
    }
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
static boolean parse_used(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct time_val tval ;
  char const   *offset_str ;
  char const   *errmsg ;
  struct timespec zero ;
  char *tmp ;
  boolean tmp___0 ;
  boolean tmp___1 ;

  {
  errmsg = "arithmetic overflow while converting %s days to a number of seconds";
  tmp___1 = collect_arg(argv, arg_ptr, & offset_str);
  if (tmp___1) {
    zero.tv_sec = 0L;
    zero.tv_nsec = 0L;
    tmp___0 = get_relative_timestamp(offset_str, & tval, zero, (double )86400, errmsg);
    if (tmp___0) {
      our_pred = insert_primary(entry, offset_str);
      our_pred->args.reftime = tval;
      our_pred->est_success_rate = estimate_file_age_success_rate((float )(tval.ts.tv_sec / 86400L));
      return ((_Bool)1);
    } else {
      tmp = dcgettext((char const   *)((void *)0), "Invalid argument %s to -used", 5);
      error(1, 0, (char const   *)tmp, offset_str);
      return ((_Bool)0);
    }
  } else {
    return ((_Bool)0);
  }
}
}
static boolean parse_user(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ char const   *username ;
  struct predicate *our_pred ;
  uid_t uid ;
  struct passwd *cur_pwd ;
  struct passwd *tmp ;
  size_t uid_len ;
  unsigned long tmp___9 ;
  int tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  boolean tmp___14 ;

  {
  tmp___14 = collect_arg(argv, arg_ptr, & username);
  if (tmp___14) {
    tmp = getpwnam(username);
    cur_pwd = tmp;
    endpwent();
    if ((unsigned long )cur_pwd != (unsigned long )((void *)0)) {
      uid = cur_pwd->pw_uid;
    } else {
      tmp___9 = __builtin_strspn(username, "0123456789");
      uid_len = tmp___9;
      if (uid_len) {
        if ((int const   )*(username + uid_len) == 0) {
          tmp___10 = safe_atoi(username);
          uid = (unsigned int )tmp___10;
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (*(username + 0)) {
          tmp___11 = quotearg_n_style(0, options.err_quoting_style, username);
          tmp___12 = dcgettext((char const   *)((void *)0), "%s is not the name of a known user", 5);
          error(1, 0, (char const   *)tmp___12, tmp___11);
        } else {
          tmp___13 = dcgettext((char const   *)((void *)0), "The argument to -user should not be empty", 5);
          error(1, 0, (char const   *)tmp___13);
        }
        return ((_Bool)0);
      }
    }
    our_pred = insert_primary(entry, username);
    our_pred->args.uid = uid;
    if (our_pred->args.uid < 100U) {
      our_pred->est_success_rate = (float )0.99;
    } else {
      our_pred->est_success_rate = (float )0.2;
    }
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
static boolean parse_version(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ int features ;
  int flags ;
  char *tmp ;
  char const   *tmp___0 ;
  int nflags ;
  boolean tmp___1 ;

  {
  features = 0;
  display_findutils_version("find");
  tmp = dcgettext((char const   *)((void *)0), "Features enabled: ", 5);
  printf((char const   */* __restrict  */)tmp);
  printf((char const   */* __restrict  */)"D_TYPE ");
  features ++;
  if (options.open_nofollow_available) {
    tmp___0 = "enabled";
  } else {
    tmp___0 = "disabled";
  }
  printf((char const   */* __restrict  */)"O_NOFOLLOW(%s) ", tmp___0);
  features ++;
  printf((char const   */* __restrict  */)"LEAF_OPTIMISATION ");
  features ++;
  flags = 0;
  tmp___1 = is_fts_enabled(& flags);
  if (tmp___1) {
    nflags = 0;
    printf((char const   */* __restrict  */)"FTS(");
    features ++;
    if (flags & 512) {
      if (nflags) {
        printf((char const   */* __restrict  */)",");
      } else {

      }
      printf((char const   */* __restrict  */)"FTS_CWDFD");
      nflags ++;
    } else {

    }
    printf((char const   */* __restrict  */)") ");
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
static boolean insert_type(char **argv , int *arg_ptr , struct parser_table  const  *entry , boolean (*which_pred)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) 
{ mode_t type_cell ;
  struct predicate *our_pred ;
  float rate ;
  char const   *typeletter ;
  char *tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;
  boolean tmp___2 ;

  {
  rate = (float )0.5;
  tmp___2 = collect_arg(argv, arg_ptr, & typeletter);
  if (tmp___2) {
    tmp___0 = strlen(typeletter);
    if (tmp___0 != 1UL) {
      tmp = dcgettext((char const   *)((void *)0), "Arguments to -type should contain only one letter", 5);
      error(1, 0, (char const   *)tmp);
      return ((_Bool)0);
    } else {

    }
    switch ((int )*(typeletter + 0)) {
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
    default: 
    tmp___1 = dcgettext((char const   *)((void *)0), "Unknown argument to -type: %c", 5);
    error(1, 0, (char const   *)tmp___1, *typeletter);
    return ((_Bool)0);
    }
    our_pred = insert_primary_withpred(entry, which_pred, typeletter);
    our_pred->est_success_rate = rate;
    if ((unsigned long )which_pred == (unsigned long )(& pred_xtype)) {
      our_pred->need_stat = (_Bool)1;
      our_pred->need_type = (_Bool)0;
    } else {
      our_pred->need_stat = (_Bool)0;
      our_pred->need_type = (_Bool)1;
    }
    our_pred->args.type = type_cell;
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
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
static boolean insert_fprintf(struct format_val *vec , struct parser_table  const  *entry , boolean (*func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) , char const   *format_const ) 
{ char *format ;
  register char *scan ;
  register char *scan2 ;
  struct segment **segmentp ;
  struct predicate *our_pred ;
  boolean tmp ;
  register int n ;
  register int i ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___3 ;
  unsigned short const   **tmp___4 ;
  unsigned short const   **tmp___5 ;
  char *tmp___6 ;
  char *tmp___8 ;
  char *tmp___10 ;

  {
  format = (char *)format_const;
  our_pred = insert_primary_withpred(entry, func, format_const);
  tmp = (_Bool)1;
  our_pred->no_default_print = tmp;
  our_pred->side_effects = tmp;
  our_pred->args.printf_vec = *vec;
  our_pred->need_type = (_Bool)0;
  our_pred->need_stat = (_Bool)0;
  our_pred->p_cost = (enum EvaluationCost )0;
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
        make_segment(segmentp, format, scan - format, 1, (char)0, (char)0, our_pred);
        if (our_pred->need_stat) {
          if ((unsigned int )our_pred->p_cost < 3U) {
            our_pred->p_cost = (enum EvaluationCost )3;
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
        tmp___0 = dcgettext((char const   *)((void *)0), "warning: unrecognized escape `\\%c\'", 5);
        error(0, 0, (char const   *)tmp___0, *scan2);
        scan ++;
        goto __Cont;
        }
      }
      segmentp = make_segment(segmentp, format, (scan - format) + 1, 0, (char)0, (char)0, our_pred);
      format = scan2 + 1;
      scan = scan2;
    } else {
      if ((int )*scan == 37) {
        if ((int )*(scan + 1) == 0) {
          tmp___1 = dcgettext((char const   *)((void *)0), "error: %s at end of format string", 5);
          error(1, 0, (char const   *)tmp___1, scan);
        } else {
          if ((int )*(scan + 1) == 37) {
            segmentp = make_segment(segmentp, format, (scan - format) + 1, 0, (char)0, (char)0, our_pred);
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
            tmp___3 = __builtin_strchr((char *)"-+ #", (int )*scan2);
            if (! tmp___3) {
              break;
            } else {

            }
          } else {
            break;
          }
        }
        while (1) {
          tmp___4 = __ctype_b_loc();
          if (! ((int const   )*(*tmp___4 + (int )((unsigned char )*scan2)) & 2048)) {
            break;
          } else {

          }
          scan2 ++;
        }
        if ((int )*scan2 == 46) {
          scan2 ++;
          while (1) {
            tmp___5 = __ctype_b_loc();
            if (! ((int const   )*(*tmp___5 + (int )((unsigned char )*scan2)) & 2048)) {
              break;
            } else {

            }
            scan2 ++;
          }
        } else {

        }
        tmp___10 = __builtin_strchr((char *)"abcdDfFgGhHiklmMnpPsStuUyY", (int )*scan2);
        if (tmp___10) {
          segmentp = make_segment(segmentp, format, scan2 - format, 2, *scan2, (char)0, our_pred);
          scan = scan2;
          format = scan + 1;
        } else {
          tmp___8 = __builtin_strchr((char *)"ABCT", (int )*scan2);
          if (tmp___8) {
            if (*(scan2 + 1)) {
              segmentp = make_segment(segmentp, format, scan2 - format, 2, *(scan2 + 0), *(scan2 + 1), our_pred);
              scan = scan2 + 1;
              format = scan + 1;
              goto __Cont;
            } else {
              tmp___6 = dcgettext((char const   *)((void *)0), "warning: unrecognized format directive `%%%c\'", 5);
              error(0, 0, (char const   *)tmp___6, *scan2);
              segmentp = make_segment(segmentp, format, scan - format, 0, (char)0, (char)0, our_pred);
              format = scan + 1;
              goto __Cont;
            }
          } else {
            tmp___6 = dcgettext((char const   *)((void *)0), "warning: unrecognized format directive `%%%c\'", 5);
            error(0, 0, (char const   *)tmp___6, *scan2);
            segmentp = make_segment(segmentp, format, scan - format, 0, (char)0, (char)0, our_pred);
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
    make_segment(segmentp, format, scan - format, 0, (char)0, (char)0, our_pred);
  } else {

  }
  return ((_Bool)1);
}
}
static struct segment **make_segment(struct segment **segment , char *format , int len , int kind , char format_char , char aux_format_char , struct predicate *pred ) 
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
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;

  {
  mycost = (enum EvaluationCost )0;
  tmp = xmalloc(sizeof(struct segment ));
  *segment = (struct segment *)tmp;
  (*segment)->segkind = (enum SegmentKind )kind;
  (*segment)->format_char[0] = format_char;
  (*segment)->format_char[1] = aux_format_char;
  (*segment)->next = (struct segment *)((void *)0);
  (*segment)->text_len = len;
  tmp___1 = xmalloc((unsigned long )len + sizeof("d"));
  tmp___0 = (char *)tmp___1;
  (*segment)->text = tmp___0;
  fmt = tmp___0;
  strncpy((char */* __restrict  */)fmt, (char const   */* __restrict  */)format, (unsigned long )len);
  fmt += len;
  switch (kind) {
  case 0: 
  case 1: 
  if (! (0 == (int )format_char)) {
    __assert_fail("0 == format_char", "parser.c", 2923U, "make_segment");
  } else {

  }
  if (! (0 == (int )aux_format_char)) {
    __assert_fail("0 == aux_format_char", "parser.c", 2924U, "make_segment");
  } else {

  }
  *fmt = (char )'\000';
  if ((unsigned int )mycost > (unsigned int )pred->p_cost) {
    pred->p_cost = (enum EvaluationCost )0;
  } else {

  }
  return (& (*segment)->next);
  break;
  }
  if (! (kind == 2)) {
    __assert_fail("kind == KIND_FORMAT", "parser.c", 2932U, "make_segment");
  } else {

  }
  switch ((int )format_char) {
  case 108: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )4;
  tmp___2 = fmt;
  fmt ++;
  *tmp___2 = (char )'s';
  break;
  case 121: 
  pred->need_type = (_Bool)1;
  mycost = (enum EvaluationCost )2;
  tmp___3 = fmt;
  fmt ++;
  *tmp___3 = (char )'s';
  break;
  case 105: 
  pred->need_inum = (_Bool)1;
  mycost = (enum EvaluationCost )1;
  tmp___4 = fmt;
  fmt ++;
  *tmp___4 = (char )'s';
  break;
  case 97: 
  case 65: 
  case 66: 
  case 99: 
  case 67: 
  case 70: 
  case 103: 
  case 77: 
  case 115: 
  case 116: 
  case 84: 
  case 117: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )3;
  tmp___5 = fmt;
  fmt ++;
  *tmp___5 = (char )'s';
  break;
  case 83: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )3;
  tmp___6 = fmt;
  fmt ++;
  *tmp___6 = (char )'g';
  break;
  case 89: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )2;
  tmp___7 = fmt;
  fmt ++;
  *tmp___7 = (char )'s';
  break;
  case 102: 
  case 104: 
  case 112: 
  case 80: 
  tmp___8 = fmt;
  fmt ++;
  *tmp___8 = (char )'s';
  break;
  case 72: 
  tmp___9 = fmt;
  fmt ++;
  *tmp___9 = (char )'s';
  break;
  case 71: 
  case 85: 
  case 98: 
  case 68: 
  case 107: 
  case 110: 
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )3;
  tmp___10 = fmt;
  fmt ++;
  *tmp___10 = (char )'s';
  break;
  case 100: 
  tmp___11 = fmt;
  fmt ++;
  *tmp___11 = (char )'d';
  break;
  case 109: 
  tmp___12 = fmt;
  fmt ++;
  *tmp___12 = (char )'o';
  pred->need_stat = (_Bool)1;
  mycost = (enum EvaluationCost )3;
  break;
  case 123: 
  case 91: 
  case 40: 
  tmp___13 = dcgettext((char const   *)((void *)0), "error: the format directive `%%%c\' is reserved for future use", 5);
  error(1, 0, (char const   *)tmp___13, kind);
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
static void check_path_safety(char const   *action , char **argv ) 
{ char *s ;
  char const   *path ;
  char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  tmp = getenv("PATH");
  path = (char const   *)tmp;
  if ((unsigned long )((void *)0) == (unsigned long )path) {
    return;
  } else {

  }
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
            tmp___9 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___9 = 1;
            } else {
              tmp___9 = 0;
            }
          }
        } else {
          tmp___9 = 0;
        }
      }
      if (tmp___9) {
        tmp___4 = __builtin_strcmp((char const   *)s, ".");
        tmp___8 = tmp___4;
      } else {
        tmp___7 = __builtin_strcmp((char const   *)s, ".");
        tmp___8 = tmp___7;
      }
    } else {
      tmp___7 = __builtin_strcmp((char const   *)s, ".");
      tmp___8 = tmp___7;
    }
    if (0 == tmp___8) {
      tmp___0 = dcgettext((char const   *)((void *)0), "The current directory is included in the PATH environment variable, which is insecure in combination with the %s action of find.  Please remove the current directory from your $PATH (that is, remove \".\" or leading or trailing colons)", 5);
      error(1, 0, (char const   *)tmp___0, action);
    } else {
      if (47 != (int )*(s + 0)) {
        tmp___1 = safely_quote_err_filename(0, (char const   *)s);
        tmp___2 = dcgettext((char const   *)((void *)0), "The relative path %s is included in the PATH environment variable, which is insecure in combination with the %s action of find.  Please remove that entry from $PATH", 5);
        error(1, 0, (char const   *)tmp___2, tmp___1, action);
      } else {

      }
    }
  }
  return;
}
}
static boolean new_insert_exec_ok(char const   *action , struct parser_table  const  *entry , int dir_fd , char **argv , int *arg_ptr ) 
{ int start ;
  int end ;
  int i ;
  int saw_braces ;
  boolean allow_plus ;
  int brace_count ;
  boolean (*func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
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
  func = (boolean (*)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ))entry->pred_func;
  if ((unsigned long )argv == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    if ((unsigned long )*(argv + *arg_ptr) == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    } else {

    }
  }
  our_pred = insert_primary_withpred(entry, func, "(some -exec* arguments)");
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
    check_path_safety(action, argv);
    execp->use_current_dir = (_Bool)1;
  } else {
    if ((unsigned long )func == (unsigned long )(& pred_okdir)) {
      options.ignore_readdir_race = (_Bool)0;
      check_path_safety(action, argv);
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
    tmp___2 = mbsstr((char const   *)*(argv + end), "{}");
    if (tmp___2) {
      saw_braces = 1;
      brace_count ++;
      if (0 == end) {
        if ((unsigned long )func == (unsigned long )(& pred_execdir)) {
          tmp___1 = dcgettext((char const   *)((void *)0), "You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem.", 5);
          error(1, 0, (char const   *)tmp___1);
        } else {
          if ((unsigned long )func == (unsigned long )(& pred_okdir)) {
            tmp___1 = dcgettext((char const   *)((void *)0), "You may not use {} within the utility name for -execdir and -okdir, because this is a potential security problem.", 5);
            error(1, 0, (char const   *)tmp___1);
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
      error(1, 0, (char const   *)tmp___3, suffix);
    } else {

    }
  } else {

  }
  bcstatus = bc_init_controlinfo(& execp->ctl, 2048UL);
  switch ((int )bcstatus) {
  case 1: 
  case 2: 
  tmp___4 = dcgettext((char const   *)((void *)0), "The environment is too large for exec().", 5);
  error(1, 0, (char const   *)tmp___4);
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
      bc_push_arg(& execp->ctl, & execp->state, (char const   *)*(argv + i), tmp___5 + 1UL, (char const   *)((void *)0), 0UL, 1);
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
static boolean insert_exec_ok(char const   *action , struct parser_table  const  *entry , int dir_fd , char **argv , int *arg_ptr ) 
{ boolean tmp ;

  {
  tmp = new_insert_exec_ok(action, entry, dir_fd, argv, arg_ptr);
  return (tmp);
}
}
static long const   nanosec_per_sec  =    (long const   )1000000000;
static boolean get_relative_timestamp(char const   *str , struct time_val *result , struct timespec origin , double sec_per_unit , char const   *overflowmessage ) 
{ double offset ;
  double seconds ;
  double nanosec ;
  _Bool tmp ;
  boolean tmp___0 ;

  {
  tmp___0 = get_comp_type(& str, & result->kind);
  if (tmp___0) {
    switch ((int )result->kind) {
    case 1: 
    result->kind = (enum comparison_type )0;
    break;
    case 0: 
    result->kind = (enum comparison_type )1;
    break;
    default: ;
    break;
    }
    tmp = xstrtod(str, (char const   **)((void *)0), & offset, (double (*)(char const   * , char ** ))(& strtod));
    if (tmp) {
      nanosec = modf(offset * sec_per_unit, & seconds);
      nanosec *= 1.0e9;
      if (! (nanosec < (double )nanosec_per_sec)) {
        __assert_fail("nanosec < nanosec_per_sec", "parser.c", 3338U, "get_relative_timestamp");
      } else {

      }
      result->ts.tv_sec = (long )((double )origin.tv_sec - seconds);
      if ((origin.tv_sec < result->ts.tv_sec) != (seconds < (double )0)) {
        error(1, 0, overflowmessage, str);
      } else {

      }
      result->ts.tv_nsec = (long )((double )origin.tv_nsec - nanosec);
      if ((double )origin.tv_nsec < nanosec) {
        result->ts.tv_nsec += (long )nanosec_per_sec;
        (result->ts.tv_sec) --;
      } else {

      }
      return ((_Bool)1);
    } else {
      return ((_Bool)0);
    }
  } else {
    return ((_Bool)0);
  }
}
}
static boolean parse_time(struct parser_table  const  *entry , char **argv , int *arg_ptr ) 
{ struct predicate *our_pred ;
  struct time_val tval ;
  enum comparison_type comp ;
  char const   *timearg ;
  char const   *orig_timearg ;
  char const   *errmsg ;
  char *tmp ;
  struct timespec origin ;
  boolean tmp___0 ;
  uintmax_t expected ;
  char *tmp___1 ;
  boolean tmp___2 ;
  boolean tmp___3 ;
  time_t t ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;

  {
  tmp = dcgettext((char const   *)((void *)0), "arithmetic overflow while converting %s days to a number of seconds", 5);
  errmsg = (char const   *)tmp;
  __repair_del_2410__9: /* CIL Label */ 
  {

  }
  if (! tmp___0) {
    return ((_Bool)0);
  } else {

  }
  orig_timearg = timearg;
  origin = options.cur_day_start;
  tmp___2 = get_comp_type(& timearg, & comp);
  if (tmp___2) {
    if (1U == (unsigned int )comp) {
      expected = (unsigned long )(origin.tv_sec + 86399L);
      origin.tv_sec += 86399L;
      if ((unsigned long )origin.tv_sec != expected) {
        tmp___1 = dcgettext((char const   *)((void *)0), "arithmetic overflow when trying to calculate the end of today", 5);
        error(1, 0, (char const   *)tmp___1);
      } else {

      }
    } else {

    }
  } else {

  }
  timearg = orig_timearg;
  tmp___3 = get_relative_timestamp(timearg, & tval, origin, (double )86400, errmsg);
  if (! tmp___3) {
    return ((_Bool)0);
  } else {

  }
  our_pred = insert_primary(entry, orig_timearg);
  our_pred->args.reftime = tval;
  our_pred->est_success_rate = estimate_timestamp_success_rate(tval.ts.tv_sec);
  if (options.debug_options & 1UL) {
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"inserting %s\n", our_pred->p_name);
    if ((unsigned int )tval.kind == 0U) {
      tmp___6 = " >";
    } else {
      if ((unsigned int )tval.kind == 1U) {
        tmp___5 = " <";
      } else {
        if ((unsigned int )tval.kind == 2U) {
          tmp___4 = ">=";
        } else {
          tmp___4 = " ?";
        }
        tmp___5 = tmp___4;
      }
      tmp___6 = tmp___5;
    }
    if ((unsigned int )tval.kind == 0U) {
      tmp___9 = "gt";
    } else {
      if ((unsigned int )tval.kind == 1U) {
        tmp___8 = "lt";
      } else {
        if ((unsigned int )tval.kind == 2U) {
          tmp___7 = "eq";
        } else {
          tmp___7 = "?";
        }
        tmp___8 = tmp___7;
      }
      tmp___9 = tmp___8;
    }
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"    type: %s    %s  ", tmp___9, tmp___6);
    t = our_pred->args.reftime.ts.tv_sec;
    tmp___10 = ctime((time_t const   *)(& t));
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%ju %s", (unsigned long )our_pred->args.reftime.ts.tv_sec, tmp___10);
    if ((unsigned int )tval.kind == 2U) {
      t = our_pred->args.reftime.ts.tv_sec + 86400L;
      tmp___11 = ctime((time_t const   *)(& t));
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"                 <  %ju %s", (unsigned long )t, tmp___11);
    } else {

    }
  } else {

  }
  return ((_Bool)1);
}
}
static boolean get_comp_type(char const   **str , enum comparison_type *comp_type ) 
{ 

  {
  switch ((int )*(*str)) {
  case 43: 
  *comp_type = (enum comparison_type )0;
  (*str) ++;
  break;
  case 45: 
  *comp_type = (enum comparison_type )1;
  (*str) ++;
  break;
  default: 
  *comp_type = (enum comparison_type )2;
  break;
  }
  return ((_Bool)1);
}
}
static boolean get_num(char const   *str , uintmax_t *num , enum comparison_type *comp_type ) 
{ char *pend ;
  boolean tmp ;
  strtol_error tmp___0 ;

  {
  if ((unsigned long )str == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {

  }
  if (comp_type) {
    tmp = get_comp_type(& str, comp_type);
    if (! tmp) {
      return ((_Bool)0);
    } else {

    }
  } else {

  }
  tmp___0 = xstrtoumax(str, & pend, 10, num, "");
  return ((_Bool )((unsigned int )tmp___0 == 0U));
}
}
static struct predicate *insert_num(char **argv , int *arg_ptr , struct parser_table  const  *entry ) 
{ char const   *numstr ;
  uintmax_t num ;
  enum comparison_type c_type ;
  struct predicate *our_pred ;
  struct predicate *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  boolean tmp___6 ;
  boolean tmp___7 ;

  {
  tmp___7 = collect_arg(argv, arg_ptr, & numstr);
  if (tmp___7) {
    tmp___6 = get_num(numstr, & num, & c_type);
    if (tmp___6) {
      tmp = insert_primary(entry, numstr);
      our_pred = tmp;
      our_pred->args.numinfo.kind = c_type;
      our_pred->args.numinfo.l_val = num;
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
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%ju\n", our_pred->args.numinfo.l_val);
      } else {

      }
      return (our_pred);
    } else {

    }
  } else {

  }
  return ((struct predicate *)((void *)0));
}
}
static void open_output_file(char const   *path , struct format_val *p ) 
{ char *tmp ;
  char *tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___9 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  p->segment = (struct segment *)((void *)0);
  p->quote_opts = clone_quoting_options((struct quoting_options *)((void *)0));
  if (0) {
    __s1_len___0 = __builtin_strlen(path);
    __s2_len___0 = __builtin_strlen("/dev/stderr");
    if (! ((unsigned long )((void const   *)(path + 1)) - (unsigned long )((void const   *)path) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2: 
        if (! ((unsigned long )((void const   *)("/dev/stderr" + 1)) - (unsigned long )((void const   *)"/dev/stderr") == 1UL)) {
          tmp___14 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___14 = 1;
          } else {
            tmp___14 = 0;
          }
        }
      } else {
        tmp___14 = 0;
      }
    }
    if (tmp___14) {
      tmp___9 = __builtin_strcmp(path, "/dev/stderr");
      tmp___13 = tmp___9;
    } else {
      tmp___12 = __builtin_strcmp(path, "/dev/stderr");
      tmp___13 = tmp___12;
    }
  } else {
    tmp___12 = __builtin_strcmp(path, "/dev/stderr");
    tmp___13 = tmp___12;
  }
  if (tmp___13) {
    if (0) {
      __s1_len = __builtin_strlen(path);
      __s2_len = __builtin_strlen("/dev/stdout");
      if (! ((unsigned long )((void const   *)(path + 1)) - (unsigned long )((void const   *)path) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)("/dev/stdout" + 1)) - (unsigned long )((void const   *)"/dev/stdout") == 1UL)) {
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
        tmp___2 = __builtin_strcmp(path, "/dev/stdout");
        tmp___6 = tmp___2;
      } else {
        tmp___5 = __builtin_strcmp(path, "/dev/stdout");
        tmp___6 = tmp___5;
      }
    } else {
      tmp___5 = __builtin_strcmp(path, "/dev/stdout");
      tmp___6 = tmp___5;
    }
    if (tmp___6) {
      p->stream = sharefile_fopen(state.shared_files, path);
      p->filename = path;
      if ((unsigned long )p->stream == (unsigned long )((void *)0)) {
        fatal_file_error(path);
      } else {

      }
    } else {
      p->stream = stdout;
      tmp___0 = dcgettext((char const   *)((void *)0), "standard output", 5);
      p->filename = (char const   *)tmp___0;
    }
  } else {
    p->stream = stderr;
    tmp = dcgettext((char const   *)((void *)0), "standard error", 5);
    p->filename = (char const   *)tmp;
  }
  p->dest_is_tty = stream_is_tty(p->stream);
  return;
}
}
static void open_stdout(struct format_val *p ) 
{ 

  {
  open_output_file("/dev/stdout", p);
  return;
}
}
