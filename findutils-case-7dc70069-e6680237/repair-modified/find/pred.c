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
typedef int __pid_t;
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
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;
typedef unsigned long size_t;
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
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
typedef __gnuc_va_list va_list;
struct obstack;
struct obstack;
struct obstack;
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int __gwchar_t;
typedef unsigned short security_class_t;
typedef char *security_context_t;
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
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
typedef int regoff_t;
struct re_registers {
   __re_size_t num_regs ;
   regoff_t *start ;
   regoff_t *end ;
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
   _Bool negative ;
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
struct saved_cwd;
struct saved_cwd;
struct exec_val {
   _Bool multiple ;
   struct buildcmd_control ctl ;
   struct buildcmd_state state ;
   char **replace_vec ;
   int num_args ;
   _Bool close_stdin ;
   struct saved_cwd *wd_for_exec ;
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
   _Bool dest_is_tty ;
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
   security_context_t scontext ;
};
struct parser_table;
struct parser_table;
struct predicate {
   _Bool (*pred_func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
   char *p_name ;
   enum predicate_type p_type ;
   enum predicate_precedence p_prec ;
   _Bool side_effects ;
   _Bool no_default_print ;
   _Bool need_stat ;
   _Bool need_type ;
   _Bool need_inum ;
   enum EvaluationCost p_cost ;
   float est_success_rate ;
   _Bool literal_control_chars ;
   _Bool artificial ;
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
   _Bool (*parser_func)(struct parser_table  const  *p , char **argv , int *arg_ptr ) ;
   _Bool (*pred_func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
};
struct options {
   _Bool do_dir_first ;
   _Bool explicit_depth ;
   int maxdepth ;
   int mindepth ;
   _Bool no_leaf_check ;
   _Bool stay_on_filesystem ;
   _Bool ignore_readdir_race ;
   _Bool literal_control_chars ;
   _Bool warnings ;
   _Bool posixly_correct ;
   struct timespec start_time ;
   struct timespec cur_day_start ;
   _Bool full_days ;
   int output_block_size ;
   unsigned long debug_options ;
   enum SymlinkOption symlink_handling ;
   int (*xstat)(char const   *name , struct stat *statbuf ) ;
   _Bool open_nofollow_available ;
   int regex_options ;
   int (*x_getfilecon)(int  , char const   * , security_context_t * ) ;
   unsigned short optimisation_level ;
   enum quoting_style err_quoting_style ;
};
struct state {
   int curdepth ;
   _Bool have_stat ;
   _Bool have_type ;
   mode_t type ;
   char *rel_pathname ;
   int cwd_dir_fd ;
   int starting_path_length ;
   _Bool stop_at_current_level ;
   int exit_status ;
   _Bool execdirs_outstanding ;
   sharefile_handle shared_files ;
   _Bool already_issued_stat_error_msg ;
};
typedef void (*__sighandler_t)(int  );
union __anonunion___u_63 {
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
struct saved_cwd;
struct saved_cwd {
   int desc ;
   char *name ;
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
union __anonunion_68 {
   int __in ;
   int __i ;
};
union __anonunion_69 {
   int __in ;
   int __i ;
};
union __anonunion_70 {
   int __in ;
   int __i ;
};
union __anonunion_71 {
   int __in ;
   int __i ;
};
union __anonunion_72 {
   int __in ;
   int __i ;
};
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
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 , time_t __time0 )  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s , size_t __maxsize , char const   * __restrict  __format , struct tm  const  * __restrict  __tp )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer )  __attribute__((__leaf__)) ;
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
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __s ) ;
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread_unlocked)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  feof_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  ferror_unlocked(FILE *__stream )  __attribute__((__warn_unused_result__, __leaf__)) ;
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
extern int rpl_fflush(FILE *gl_stream ) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__, __leaf__)) ;
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
extern  __attribute__((__nothrow__)) int faccessat(int __fd , char const   *__file , int __type , int __flag )  __attribute__((__warn_unused_result__, __nonnull__(2), __leaf__)) ;
extern int close(int __fd ) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) read)(int __fd , void *__buf , size_t __nbytes )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread)(int __fd , void *__buf , size_t __nbytes , __off_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern ssize_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) pread64)(int __fd , void *__buf , size_t __nbytes , __off64_t __offset )  __attribute__((__warn_unused_result__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getcwd)(char *__buf , size_t __size )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getwd)(char *__buf )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__, __deprecated__)) ;
extern  __attribute__((__nothrow__)) int execvp(char const   *__file , char * const  *__argv )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) confstr)(int __name , char *__buf , size_t __len )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getgroups)(int __size , __gid_t *__list )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ttyname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlink)(char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) ssize_t __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) readlinkat)(int __fd , char const   * __restrict  __path , char * __restrict  __buf , size_t __len )  __attribute__((__warn_unused_result__, __nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int unlinkat(int __fd , char const   *__name , int __flag )  __attribute__((__nonnull__(2), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern int __attribute__((__gnu_inline__))  getcon(security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern void __attribute__((__gnu_inline__))  freecon(security_context_t con  __attribute__((__unused__)) ) 
{ 

  {
  return;
}
}
__inline extern int __attribute__((__gnu_inline__))  getfscreatecon(security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  setfscreatecon(security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  matchpathcon(char const   *file  __attribute__((__unused__)) , mode_t m  __attribute__((__unused__)) , security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  getfilecon(char const   *file  __attribute__((__unused__)) , security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  lgetfilecon(char const   *file  __attribute__((__unused__)) , security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  fgetfilecon(int fd , security_context_t *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  setfilecon(char const   *file  __attribute__((__unused__)) , security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  lsetfilecon(char const   *file  __attribute__((__unused__)) , security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  fsetfilecon(int fd  __attribute__((__unused__)) , security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  security_check_context(security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  security_check_context_raw(security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  setexeccon(security_context_t con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern int __attribute__((__gnu_inline__))  security_compute_create(security_context_t scon  __attribute__((__unused__)) , security_context_t tcon  __attribute__((__unused__)) , security_class_t tclass  __attribute__((__unused__)) , security_context_t *newcon  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
__inline extern security_class_t __attribute__((__gnu_inline__))  string_to_security_class(char const   *name ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((unsigned short __attribute__((__gnu_inline__))  )0);
}
}
__inline extern int __attribute__((__gnu_inline__))  matchpathcon_init_prefix(char const   *path  __attribute__((__unused__)) , char const   *prefix  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return ((int __attribute__((__gnu_inline__))  )-1);
}
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern regoff_t re_match(struct re_pattern_buffer *__buffer , char const   *__string , __re_idx_t __length , __re_idx_t __start , struct re_registers *__regs ) ;
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
extern void bc_do_insert(struct buildcmd_control *ctl , struct buildcmd_state *state , char *arg , size_t arglen , char const   *prefix , size_t pfxlen , char const   *linebuf , size_t lblen , int initial_args ) ;
extern void bc_do_exec(struct buildcmd_control *ctl , struct buildcmd_state *state ) ;
extern void bc_push_arg(struct buildcmd_control *ctl , struct buildcmd_state *state , char const   *arg , size_t len , char const   *prefix , size_t pfxlen , int initial_args ) ;
extern _Bool bc_args_exceed_testing_limit(char const   **argv ) ;
extern char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
extern int optionl_stat(char const   *name , struct stat *p ) ;
extern int optionp_stat(char const   *name , struct stat *p ) ;
extern void set_stat_placeholders(struct stat *p ) ;
extern int get_statinfo(char const   *pathname , char const   *name , struct stat *p ) ;
extern void cleanup(void) ;
extern char *filesystem_type(struct stat  const  *statp , char const   *path ) ;
void pred_sanity_check(struct predicate  const  *predicates ) ;
_Bool pred_amin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_and(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_anewer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_atime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_closeparen(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_cmin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_cnewer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_comma(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_ctime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_delete(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_empty(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_exec(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_execdir(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_executable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_false(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_fls(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_fprint(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_fprint0(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_fprintf(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_fstype(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_gid(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_group(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_ilname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_iname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_inum(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_ipath(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_links(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_lname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_ls(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_mmin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_mtime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_name(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_negate(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_newer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_newerXY(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_nogroup(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_nouser(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_ok(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_okdir(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_openparen(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_or(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_path(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_perm(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_print(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_print0(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_prune(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_quit(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_readable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_regex(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_samefile(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_size(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_true(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_type(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_uid(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_used(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_user(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_writable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_xtype(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
_Bool pred_context(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
int launch(struct buildcmd_control *ctl , void *usercontext , int argc , char **argv ) ;
extern void print_predicate(FILE *fp , struct predicate  const  *p ) ;
void print_list(FILE *fp , struct predicate *node ) ;
void print_optlist(FILE *fp , struct predicate  const  *p ) ;
void show_success_rates(struct predicate  const  *p ) ;
extern _Bool fd_leak_check_is_enabled(void) ;
extern char const   *safely_quote_err_filename(int n , char const   *arg ) ;
extern _Bool is_exec_in_local_dir(_Bool (*pred_func)(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ) ;
extern void nonfatal_target_file_error(int errno_value , char const   *name ) ;
extern void nonfatal_nontarget_file_error(int errno_value , char const   *name ) ;
extern _Bool apply_predicate(char const   *pathname , struct stat *stat_buf , struct predicate *p ) ;
extern _Bool following_links(void) ;
extern struct options options ;
extern struct state state ;
extern struct saved_cwd *initial_wd ;
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigismember(__sigset_t const   *__set , int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigaddset(__sigset_t *__set , int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigdelset(__sigset_t *__set , int __sig ) ;
__inline extern int __attribute__((__gnu_inline__))  __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
  if (__set->__val[__word] & __mask) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
  __set->__val[__word] |= __mask;
  return ((int __attribute__((__gnu_inline__))  )0);
}
}
__inline extern int __attribute__((__gnu_inline__))  __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
  __set->__val[__word] &= ~ __mask;
  return ((int __attribute__((__gnu_inline__))  )0);
}
}
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig , void (*__handler)(int  ) )  __attribute__((__leaf__)) ;
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
{ union __anonunion___u_63 __u ;

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
extern struct passwd *getpwuid(__uid_t __uid ) ;
extern struct group *getgrgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
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
extern char *base_name(char const   *file ) ;
extern char *mdir_name(char const   *file ) ;
extern _Bool strip_trailing_slashes(char *file ) ;
extern char *human_readable(uintmax_t  , char * , int  , uintmax_t  , uintmax_t  ) ;
extern void filemodestring(struct stat  const  *statp , char *str ) ;
extern int print_quoted(FILE *fp , struct quoting_options  const  *qopts , _Bool dest_is_tty , char const   *format , char const   *s ) ;
extern _Bool yesno(void) ;
extern void list_file(char const   *name , int dir_fd , char *relname , struct stat  const  *statp , time_t current_time , int output_block_size , int literal_control_chars , FILE *stream ) ;
extern size_t file_blocksize(struct stat  const  *p ) ;
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
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern void complain_about_leaky_fds(void) ;
extern char *areadlinkat(int fd , char const   *filename ) ;
extern int set_cloexec_flag(int desc , _Bool value ) ;
extern int restore_cwd(struct saved_cwd  const  *cwd ) ;
extern  __attribute__((__nothrow__)) char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__leaf__, __format_arg__(2))) ;
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
extern DIR *fdopendir(int __fd ) ;
extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
extern struct dirent *readdir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
static _Bool match_lname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr , _Bool ignore_case ) ;
static char *format_date(struct timespec ts , int kind ) ;
static char *ctime_format(struct timespec ts ) ;
static double ts_difference(struct timespec ts1 , struct timespec ts2 ) 
{ double d ;
  double tmp ;

  {
  tmp = difftime(ts1.tv_sec, ts2.tv_sec);
  d = tmp + 1.0e-9 * (double )(ts1.tv_nsec - ts2.tv_nsec);
  return (d);
}
}
static int compare_ts(struct timespec ts1 , struct timespec ts2 ) 
{ double diff ;
  double tmp ;
  int tmp___0 ;

  {
  if (ts1.tv_sec == ts2.tv_sec) {
    if (ts1.tv_nsec == ts2.tv_nsec) {
      return (0);
    } else {
      goto _L;
    }
  } else {
    _L: 
    tmp = ts_difference(ts1, ts2);
    diff = tmp;
    if (diff < 0.0) {
      tmp___0 = -1;
    } else {
      tmp___0 = 1;
    }
    return (tmp___0);
  }
}
}
static _Bool pred_timewindow(struct timespec ts , struct predicate  const  *pred_ptr , int window ) 
{ int tmp ;
  int tmp___0 ;
  double delta ;
  double tmp___1 ;
  int tmp___2 ;

  {
  switch ((int )pred_ptr->args.reftime.kind) {
  case 0: 
  tmp = compare_ts(ts, (struct timespec )pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp > 0));
  case 1: 
  tmp___0 = compare_ts(ts, (struct timespec )pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp___0 < 0));
  case 2: 
  tmp___1 = ts_difference(ts, (struct timespec )pred_ptr->args.reftime.ts);
  delta = tmp___1;
  if (delta > 0.0) {
    if (delta <= (double )window) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
  } else {
    tmp___2 = 0;
  }
  return ((_Bool )tmp___2);
  }
  __assert_fail("0", "pred.c", 316U, "pred_timewindow");
  abort();
}
}
_Bool pred_amin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_atime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 60);
  return (tmp___0);
}
}
_Bool pred_and(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;
  _Bool tmp___0 ;

  {
  if ((unsigned long )pred_ptr->pred_left == (unsigned long )((void *)0)) {
    tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
    return (tmp);
  } else {
    tmp___0 = apply_predicate(pathname, stat_buf, pred_ptr->pred_left);
    if (tmp___0) {
      tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
      return (tmp);
    } else {
      return ((_Bool)0);
    }
  }
}
}
_Bool pred_anewer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  int tmp___0 ;

  {
  if (! (0U == (unsigned int )pred_ptr->args.reftime.kind)) {
    __assert_fail("COMP_GT == pred_ptr->args.reftime.kind", "pred.c", 344U, "pred_anewer");
  } else {

  }
  tmp = get_stat_atime((struct stat  const  *)stat_buf);
  tmp___0 = compare_ts((struct timespec )tmp, pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp___0 > 0));
}
}
_Bool pred_atime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_atime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 86400);
  return (tmp___0);
}
}
_Bool pred_closeparen(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  return ((_Bool)1);
}
}
_Bool pred_cmin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_ctime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 60);
  return (tmp___0);
}
}
_Bool pred_cnewer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  int tmp___0 ;

  {
  if (! (0U == (unsigned int )pred_ptr->args.reftime.kind)) {
    __assert_fail("COMP_GT == pred_ptr->args.reftime.kind", "pred.c", 377U, "pred_cnewer");
  } else {

  }
  tmp = get_stat_ctime((struct stat  const  *)stat_buf);
  tmp___0 = compare_ts((struct timespec )tmp, pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp___0 > 0));
}
}
_Bool pred_comma(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  if ((unsigned long )pred_ptr->pred_left != (unsigned long )((void *)0)) {
    apply_predicate(pathname, stat_buf, pred_ptr->pred_left);
  } else {

  }
  tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
  return (tmp);
}
}
_Bool pred_ctime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_ctime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 86400);
  return (tmp___0);
}
}
static _Bool perform_delete(int flags ) 
{ int tmp ;

  {
  tmp = unlinkat(state.cwd_dir_fd, (char const   *)state.rel_pathname, flags);
  return ((_Bool )(0 == tmp));
}
}
_Bool pred_delete(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int flags ;
  _Bool tmp ;
  int *tmp___0 ;
  _Bool tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___6 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  if (0) {
    __s1_len = __builtin_strlen((char const   *)state.rel_pathname);
    __s2_len = __builtin_strlen(".");
    if (! ((unsigned long )((void const   *)(state.rel_pathname + 1)) - (unsigned long )((void const   *)state.rel_pathname) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0: 
        if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
          tmp___11 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___11 = 1;
          } else {
            tmp___11 = 0;
          }
        }
      } else {
        tmp___11 = 0;
      }
    }
    if (tmp___11) {
      tmp___6 = __builtin_strcmp((char const   *)state.rel_pathname, ".");
      tmp___10 = tmp___6;
    } else {
      tmp___9 = __builtin_strcmp((char const   *)state.rel_pathname, ".");
      tmp___10 = tmp___9;
    }
  } else {
    tmp___9 = __builtin_strcmp((char const   *)state.rel_pathname, ".");
    tmp___10 = tmp___9;
  }
  if (tmp___10) {
    flags = 0;
    if (state.have_stat) {
      if ((stat_buf->st_mode & 61440U) == 16384U) {
        flags |= 512;
      } else {

      }
    } else {

    }
    tmp___1 = perform_delete(flags);
    if (tmp___1) {
      return ((_Bool)1);
    } else {
      tmp___0 = __errno_location();
      if (21 == *tmp___0) {
        if ((flags & 512) == 0) {
          flags |= 512;
          tmp = perform_delete(flags);
          if (tmp) {
            return ((_Bool)1);
          } else {

          }
        } else {

        }
      } else {

      }
    }
    tmp___2 = safely_quote_err_filename(0, pathname);
    tmp___3 = dcgettext((char const   *)((void *)0), "cannot delete %s", 5);
    tmp___4 = __errno_location();
    error(0, *tmp___4, (char const   *)tmp___3, tmp___2);
    state.exit_status = 1;
    return ((_Bool)0);
  } else {
    return ((_Bool)1);
  }
}
}
_Bool pred_empty(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int fd ;
  DIR *d ;
  struct dirent *dp ;
  _Bool empty ;
  int *tmp ;
  char const   *tmp___0 ;
  int *tmp___1 ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___2 ;
  char const   *tmp___3 ;
  int *tmp___4 ;
  char const   *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  if ((stat_buf->st_mode & 61440U) == 16384U) {
    empty = (_Bool)1;
    tmp = __errno_location();
    *tmp = 0;
    tmp___2 = openat(state.cwd_dir_fd, (char const   *)state.rel_pathname, 0);
    fd = (int )tmp___2;
    if (fd < 0) {
      tmp___0 = safely_quote_err_filename(0, pathname);
      tmp___1 = __errno_location();
      error(0, *tmp___1, "%s", tmp___0);
      state.exit_status = 1;
      return ((_Bool)0);
    } else {

    }
    d = fdopendir(fd);
    if ((unsigned long )d == (unsigned long )((void *)0)) {
      tmp___3 = safely_quote_err_filename(0, pathname);
      tmp___4 = __errno_location();
      error(0, *tmp___4, "%s", tmp___3);
      state.exit_status = 1;
      return ((_Bool)0);
    } else {

    }
    dp = readdir(d);
    while (dp) {
      if ((int )dp->d_name[0] != 46) {
        empty = (_Bool)0;
        break;
      } else {
        if ((int )dp->d_name[1] != 0) {
          if ((int )dp->d_name[1] != 46) {
            empty = (_Bool)0;
            break;
          } else {
            if ((int )dp->d_name[2] != 0) {
              empty = (_Bool)0;
              break;
            } else {

            }
          }
        } else {

        }
      }
      dp = readdir(d);
    }
    tmp___7 = closedir(d);
    if (tmp___7) {
      tmp___5 = safely_quote_err_filename(0, pathname);
      tmp___6 = __errno_location();
      error(0, *tmp___6, "%s", tmp___5);
      state.exit_status = 1;
      return ((_Bool)0);
    } else {

    }
    return (empty);
  } else {
    if ((stat_buf->st_mode & 61440U) == 32768U) {
      return ((_Bool )(stat_buf->st_size == 0L));
    } else {
      return ((_Bool)0);
    }
  }
}
}
static _Bool initialise_wd_for_exec(struct exec_val *execp , int cwd_fd , char const   *dir ) 
{ void *tmp ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___0 ;

  {
  tmp = xmalloc(sizeof(*(execp->wd_for_exec)));
  execp->wd_for_exec = (struct saved_cwd *)tmp;
  (execp->wd_for_exec)->name = (char *)((void *)0);
  tmp___0 = openat(cwd_fd, dir, 0);
  (execp->wd_for_exec)->desc = (int )tmp___0;
  if ((execp->wd_for_exec)->desc < 0) {
    return ((_Bool)0);
  } else {

  }
  set_cloexec_flag((execp->wd_for_exec)->desc, (_Bool)1);
  return ((_Bool)1);
}
}
static _Bool record_exec_dir(struct exec_val *execp ) 
{ char *dir ;
  char *tmp ;
  _Bool result ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  char *tmp___3 ;

  {
  __repair_app_1002__758: /* CIL Label */ 
  {
  if (! execp->wd_for_exec) {
    if (! (! execp->state.todo)) {
      __assert_fail("!execp->state.todo", "pred.c", 536U, "record_exec_dir");
    } else {

    }
    tmp___3 = __builtin_strchr(state.rel_pathname, '/');
    if (tmp___3) {
      tmp = mdir_name((char const   *)state.rel_pathname);
      dir = tmp;
      tmp___0 = initialise_wd_for_exec(execp, state.cwd_dir_fd, (char const   *)dir);
      result = tmp___0;
      free((void *)dir);
      return (result);
    } else {
      tmp___1 = initialise_wd_for_exec(execp, state.cwd_dir_fd, ".");
      return (tmp___1);
    }
  } else {

  }
  tmp___1 = initialise_wd_for_exec(execp, state.cwd_dir_fd, ".");
  }
  return ((_Bool)1);
}
}
static _Bool impl_pred_exec(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct exec_val *execp ;
  char *target ;
  _Bool result ;
  _Bool local ;
  _Bool tmp ;
  char *prefix ;
  size_t pfxlen ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;
  size_t tmp___4 ;
  int i ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  union __anonunion_68 __constr_expr_0 ;
  union __anonunion_69 __constr_expr_1 ;

  {
  execp = & pred_ptr->args.exec_vec;
  tmp = is_exec_in_local_dir(pred_ptr->pred_func);
  local = tmp;
  if (local) {
    tmp___3 = record_exec_dir(execp);
    if (! tmp___3) {
      tmp___0 = safely_quote_err_filename(0, pathname);
      tmp___1 = dcgettext((char const   *)((void *)0), "Failed to save working directory in order to run a command on %s", 5);
      tmp___2 = __errno_location();
      error(1, *tmp___2, (char const   *)tmp___1, tmp___0);
    } else {

    }
    target = base_name((char const   *)state.rel_pathname);
    if (47 == (int )*(target + 0)) {
      prefix = (char *)((void *)0);
      pfxlen = 0UL;
    } else {
      prefix = (char *)"./";
      pfxlen = 2UL;
    }
  } else {
    if (! ((unsigned long )execp->wd_for_exec == (unsigned long )initial_wd)) {
      __assert_fail("execp->wd_for_exec == initial_wd", "pred.c", 610U, "impl_pred_exec");
    } else {

    }
    target = (char *)pathname;
    prefix = (char *)((void *)0);
    pfxlen = 0UL;
  }
  if (execp->multiple) {
    tmp___4 = strlen((char const   *)target);
    bc_push_arg(& execp->ctl, & execp->state, (char const   *)target, tmp___4 + 1UL, (char const   *)prefix, pfxlen, 0);
    state.execdirs_outstanding = (_Bool)1;
    result = (_Bool)1;
  } else {
    i = 0;
    while (i < execp->num_args) {
      tmp___5 = strlen((char const   *)target);
      tmp___6 = strlen((char const   *)*(execp->replace_vec + i));
      bc_do_insert(& execp->ctl, & execp->state, *(execp->replace_vec + i), tmp___6, (char const   *)prefix, pfxlen, (char const   *)target, tmp___5, 0);
      i ++;
    }
    bc_do_exec(& execp->ctl, & execp->state);
    __constr_expr_1.__in = execp->last_child_status;
    if ((__constr_expr_1.__i & 127) == 0) {
      __constr_expr_0.__in = execp->last_child_status;
      if (0 == (__constr_expr_0.__i & 65280) >> 8) {
        result = (_Bool)1;
      } else {
        result = (_Bool)0;
      }
    } else {
      result = (_Bool)0;
    }
  }
  if ((unsigned long )target != (unsigned long )pathname) {
    if (! local) {
      __assert_fail("local", "pred.c", 667U, "impl_pred_exec");
    } else {

    }
    free((void *)target);
  } else {

  }
  return (result);
}
}
_Bool pred_exec(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = impl_pred_exec(pathname, stat_buf, pred_ptr);
  return (tmp);
}
}
_Bool pred_execdir(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = impl_pred_exec((char const   *)state.rel_pathname, stat_buf, pred_ptr);
  return (tmp);
}
}
_Bool pred_false(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  return ((_Bool)0);
}
}
_Bool pred_fls(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ FILE *stream ;

  {
  stream = pred_ptr->args.printf_vec.stream;
  list_file(pathname, state.cwd_dir_fd, state.rel_pathname, (struct stat  const  *)stat_buf, options.start_time.tv_sec, options.output_block_size, (int )pred_ptr->literal_control_chars, stream);
  return ((_Bool)1);
}
}
_Bool pred_fprint(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  print_quoted(pred_ptr->args.printf_vec.stream, (struct quoting_options  const  *)pred_ptr->args.printf_vec.quote_opts, pred_ptr->args.printf_vec.dest_is_tty, "%s\n", pathname);
  return ((_Bool)1);
}
}
_Bool pred_fprint0(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ FILE *fp ;

  {
  fp = pred_ptr->args.printf_vec.stream;
  fputs((char const   */* __restrict  */)pathname, (FILE */* __restrict  */)fp);
  _IO_putc(0, fp);
  return ((_Bool)1);
}
}
static char *mode_to_filetype(mode_t m ) 
{ 

  {
  if (m == 32768U) {
    return ((char *)"f");
  } else {

  }
  if (m == 16384U) {
    return ((char *)"d");
  } else {

  }
  if (m == 40960U) {
    return ((char *)"l");
  } else {

  }
  if (m == 49152U) {
    return ((char *)"s");
  } else {

  }
  if (m == 24576U) {
    return ((char *)"b");
  } else {

  }
  if (m == 8192U) {
    return ((char *)"c");
  } else {

  }
  if (m == 4096U) {
    return ((char *)"p");
  } else {

  }
  return ((char *)"U");
}
}
static double file_sparseness(struct stat  const  *p ) 
{ double tmp ;
  double tmp___0 ;
  double tmp___1 ;
  double blklen ;
  size_t tmp___2 ;

  {
  if (0L == (long )p->st_size) {
    if (0L == (long )p->st_blocks) {
      return (1.0);
    } else {
      if (p->st_blocks < 0L) {
        tmp = __builtin_huge_val();
        tmp___1 = - tmp;
      } else {
        tmp___0 = __builtin_huge_val();
        tmp___1 = tmp___0;
      }
      return (tmp___1);
    }
  } else {
    tmp___2 = file_blocksize(p);
    blklen = (double )tmp___2 * (double )p->st_blocks;
    return (blklen / (double )p->st_size);
  }
}
}
static void checked_fprintf(struct format_val *dest , char const   *fmt  , ...) 
{ int rv ;
  va_list ap ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp ;
  int *tmp___0 ;

  {
  __builtin_va_start(ap, fmt);
  tmp = vfprintf((FILE */* __restrict  */)dest->stream, (char const   */* __restrict  */)fmt, ap);
  rv = (int )tmp;
  if (rv < 0) {
    tmp___0 = __errno_location();
    nonfatal_nontarget_file_error(*tmp___0, dest->filename);
  } else {

  }
  return;
}
}
static void checked_print_quoted(struct format_val *dest , char const   *format , char const   *s ) 
{ int rv ;
  int tmp ;
  int *tmp___0 ;

  {
  tmp = print_quoted(dest->stream, (struct quoting_options  const  *)dest->quote_opts, dest->dest_is_tty, format, s);
  rv = tmp;
  if (rv < 0) {
    tmp___0 = __errno_location();
    nonfatal_nontarget_file_error(*tmp___0, dest->filename);
  } else {

  }
  return;
}
}
static void checked_fwrite(void *p , size_t siz , size_t nmemb , struct format_val *dest ) 
{ int items_written ;
  size_t tmp ;
  int *tmp___0 ;

  {
  tmp = fwrite((void const   */* __restrict  */)p, siz, nmemb, (FILE */* __restrict  */)dest->stream);
  items_written = (int )tmp;
  if ((unsigned long )items_written < nmemb) {
    tmp___0 = __errno_location();
    nonfatal_nontarget_file_error(*tmp___0, dest->filename);
  } else {

  }
  return;
}
}
static void checked_fflush(struct format_val *dest ) 
{ int *tmp ;
  int tmp___0 ;

  {
  tmp___0 = rpl_fflush(dest->stream);
  if (0 != tmp___0) {
    tmp = __errno_location();
    nonfatal_nontarget_file_error(*tmp, dest->filename);
  } else {

  }
  return;
}
}
static void do_fprintf(struct format_val *dest , struct segment *segment , char const   *pathname , struct stat  const  *stat_buf ) 
{ char hbuf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char const   *cp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  char *tmp___0 ;
  __blkcnt_t tmp___1 ;
  char *tmp___2 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *base ;
  char *tmp___6 ;
  char *tmp___7 ;
  struct group *g ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *s ;
  char *tmp___15 ;
  char *s___0 ;
  void *tmp___16 ;
  char *tmp___17 ;
  __blkcnt_t tmp___18 ;
  char *tmp___19 ;
  char *linkname ;
  int *tmp___20 ;
  char modestring[16] ;
  mode_t m ;
  _Bool traditional_numbering_scheme ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  unsigned int tmp___34 ;
  char *tmp___35 ;
  char *tmp___36 ;
  double tmp___37 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___38 ;
  char *tmp___39 ;
  struct passwd *p ;
  char *tmp___40 ;
  struct stat sbuf ;
  char const   *tmp___41 ;
  int *tmp___42 ;
  int *tmp___43 ;
  int *tmp___44 ;
  int (*tmp___46)(char const   *name , struct stat *p ) ;
  _Bool tmp___47 ;
  int tmp___48 ;
  char *tmp___49 ;
  char *tmp___50 ;
  char *tmp___51 ;
  security_context_t scontext ;
  int rv ;
  int tmp___52 ;
  char const   *tmp___53 ;
  char *tmp___54 ;
  int *tmp___55 ;

  {
  switch ((int )segment->segkind) {
  case 0: 
  checked_fwrite((void *)segment->text, 1UL, (unsigned long )segment->text_len, dest);
  break;
  case 1: 
  checked_fwrite((void *)segment->text, 1UL, (unsigned long )segment->text_len, dest);
  checked_fflush(dest);
  break;
  case 2: 
  switch ((int )segment->format_char[0]) {
  case 97: 
  tmp = get_stat_atime(stat_buf);
  tmp___0 = ctime_format((struct timespec )tmp);
  checked_fprintf(dest, (char const   *)segment->text, tmp___0);
  break;
  case 98: 
  if ((stat_buf->st_mode & 61440U) == 32768U) {
    tmp___1 = (long )stat_buf->st_blocks;
  } else {
    if ((stat_buf->st_mode & 61440U) == 16384U) {
      tmp___1 = (long )stat_buf->st_blocks;
    } else {
      tmp___1 = (long )((long const   )0);
    }
  }
  tmp___2 = human_readable((unsigned long )tmp___1, hbuf, 0, 512UL, 512UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___2);
  break;
  case 99: 
  tmp___3 = get_stat_ctime(stat_buf);
  tmp___4 = ctime_format((struct timespec )tmp___3);
  checked_fprintf(dest, (char const   *)segment->text, tmp___4);
  break;
  case 100: 
  checked_fprintf(dest, (char const   *)segment->text, state.curdepth);
  break;
  case 68: 
  tmp___5 = human_readable((unsigned long )stat_buf->st_dev, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___5);
  break;
  case 102: 
  tmp___6 = base_name(pathname);
  base = tmp___6;
  checked_print_quoted(dest, (char const   *)segment->text, (char const   *)base);
  free((void *)base);
  break;
  case 70: 
  tmp___7 = filesystem_type(stat_buf, pathname);
  checked_print_quoted(dest, (char const   *)segment->text, (char const   *)tmp___7);
  break;
  case 103: 
  g = getgrgid((unsigned int )stat_buf->st_gid);
  if (g) {
    *(segment->text + segment->text_len) = (char )'s';
    checked_fprintf(dest, (char const   *)segment->text, g->gr_name);
    break;
  } else {

  }
  case 71: 
  tmp___8 = human_readable((unsigned long )stat_buf->st_gid, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___8);
  break;
  case 104: 
  tmp___9 = strrchr(pathname, '/');
  cp = (char const   *)tmp___9;
  if ((unsigned long )cp == (unsigned long )((void *)0)) {
    checked_print_quoted(dest, (char const   *)segment->text, ".");
  } else {
    tmp___15 = __strdup(pathname);
    s = tmp___15;
    *(s + (cp - pathname)) = (char)0;
    checked_print_quoted(dest, (char const   *)segment->text, (char const   *)s);
    free((void *)s);
  }
  break;
  case 72: 
  tmp___16 = xmalloc((unsigned long )(state.starting_path_length + 1));
  s___0 = (char *)tmp___16;
  memcpy((void */* __restrict  */)s___0, (void const   */* __restrict  */)pathname, (unsigned long )state.starting_path_length);
  *(s___0 + state.starting_path_length) = (char)0;
  checked_fprintf(dest, (char const   *)segment->text, s___0);
  free((void *)s___0);
  break;
  case 105: 
  tmp___17 = human_readable((unsigned long )stat_buf->st_ino, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___17);
  break;
  case 107: 
  if ((stat_buf->st_mode & 61440U) == 32768U) {
    tmp___18 = (long )stat_buf->st_blocks;
  } else {
    if ((stat_buf->st_mode & 61440U) == 16384U) {
      tmp___18 = (long )stat_buf->st_blocks;
    } else {
      tmp___18 = (long )((long const   )0);
    }
  }
  tmp___19 = human_readable((unsigned long )tmp___18, hbuf, 0, 512UL, 1024UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___19);
  break;
  case 108: 
  linkname = (char *)0;
  if ((stat_buf->st_mode & 61440U) == 40960U) {
    linkname = areadlinkat(state.cwd_dir_fd, (char const   *)state.rel_pathname);
    if ((unsigned long )linkname == (unsigned long )((void *)0)) {
      tmp___20 = __errno_location();
      nonfatal_target_file_error(*tmp___20, pathname);
      state.exit_status = 1;
    } else {

    }
  } else {

  }
  if (linkname) {
    checked_print_quoted(dest, (char const   *)segment->text, (char const   *)linkname);
  } else {
    checked_print_quoted(dest, (char const   *)segment->text, "");
  }
  free((void *)linkname);
  break;
  case 77: 
  filemodestring(stat_buf, modestring);
  modestring[10] = (char )'\000';
  checked_fprintf(dest, (char const   *)segment->text, modestring);
  break;
  case 109: 
  m = (unsigned int )stat_buf->st_mode;
  if (256 >> 3 == 32) {
    if (128 >> 3 == 16) {
      if (64 >> 3 == 8) {
        if ((256 >> 3) >> 3 == 4) {
          if ((128 >> 3) >> 3 == 2) {
            if ((64 >> 3) >> 3 == 1) {
              tmp___21 = 1;
            } else {
              tmp___21 = 0;
            }
          } else {
            tmp___21 = 0;
          }
        } else {
          tmp___21 = 0;
        }
      } else {
        tmp___21 = 0;
      }
    } else {
      tmp___21 = 0;
    }
  } else {
    tmp___21 = 0;
  }
  traditional_numbering_scheme = (_Bool )tmp___21;
  if (traditional_numbering_scheme) {
    tmp___34 = m & (unsigned int )(3584 | (((64 | (64 >> 3)) | ((64 >> 3) >> 3)) | (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) | ((256 | (256 >> 3)) | ((256 >> 3) >> 3)))));
  } else {
    if (m & 2048U) {
      tmp___22 = 2048;
    } else {
      tmp___22 = 0;
    }
    if (m & 1024U) {
      tmp___23 = 1024;
    } else {
      tmp___23 = 0;
    }
    if (m & 512U) {
      tmp___24 = 512;
    } else {
      tmp___24 = 0;
    }
    if (m & 256U) {
      tmp___25 = 256;
    } else {
      tmp___25 = 0;
    }
    if (m & 128U) {
      tmp___26 = 128;
    } else {
      tmp___26 = 0;
    }
    if (m & 64U) {
      tmp___27 = 64;
    } else {
      tmp___27 = 0;
    }
    if (m & (unsigned int )(256 >> 3)) {
      tmp___28 = 32;
    } else {
      tmp___28 = 0;
    }
    if (m & (unsigned int )(128 >> 3)) {
      tmp___29 = 16;
    } else {
      tmp___29 = 0;
    }
    if (m & (unsigned int )(64 >> 3)) {
      tmp___30 = 8;
    } else {
      tmp___30 = 0;
    }
    if (m & (unsigned int )((256 >> 3) >> 3)) {
      tmp___31 = 4;
    } else {
      tmp___31 = 0;
    }
    if (m & (unsigned int )((128 >> 3) >> 3)) {
      tmp___32 = 2;
    } else {
      tmp___32 = 0;
    }
    if (m & (unsigned int )((64 >> 3) >> 3)) {
      tmp___33 = 1;
    } else {
      tmp___33 = 0;
    }
    tmp___34 = (unsigned int )(((((((((((tmp___22 | tmp___23) | tmp___24) | tmp___25) | tmp___26) | tmp___27) | tmp___28) | tmp___29) | tmp___30) | tmp___31) | tmp___32) | tmp___33);
  }
  checked_fprintf(dest, (char const   *)segment->text, tmp___34);
  break;
  case 110: 
  tmp___35 = human_readable((unsigned long )stat_buf->st_nlink, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___35);
  break;
  case 112: 
  checked_print_quoted(dest, (char const   *)segment->text, pathname);
  break;
  case 80: 
  if (state.curdepth > 0) {
    cp = pathname + state.starting_path_length;
    if ((int const   )*cp == 47) {
      cp ++;
    } else {

    }
  } else {
    cp = "";
  }
  checked_print_quoted(dest, (char const   *)segment->text, cp);
  break;
  case 115: 
  tmp___36 = human_readable((unsigned long )stat_buf->st_size, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___36);
  break;
  case 83: 
  tmp___37 = file_sparseness(stat_buf);
  checked_fprintf(dest, (char const   *)segment->text, tmp___37);
  break;
  case 116: 
  tmp___38 = get_stat_mtime(stat_buf);
  tmp___39 = ctime_format((struct timespec )tmp___38);
  checked_fprintf(dest, (char const   *)segment->text, tmp___39);
  break;
  case 117: 
  p = getpwuid((unsigned int )stat_buf->st_uid);
  if (p) {
    *(segment->text + segment->text_len) = (char )'s';
    checked_fprintf(dest, (char const   *)segment->text, p->pw_name);
    break;
  } else {

  }
  case 85: 
  tmp___40 = human_readable((unsigned long )stat_buf->st_uid, hbuf, 0, 1UL, 1UL);
  checked_fprintf(dest, (char const   *)segment->text, tmp___40);
  break;
  case 89: 
  if ((stat_buf->st_mode & 61440U) == 40960U) {
    tmp___47 = following_links();
    if (tmp___47) {
      tmp___46 = & optionp_stat;
    } else {
      tmp___46 = & optionl_stat;
    }
    tmp___48 = (*tmp___46)((char const   *)state.rel_pathname, & sbuf);
    if (tmp___48 != 0) {
      tmp___44 = __errno_location();
      if (*tmp___44 == 2) {
        checked_fprintf(dest, (char const   *)segment->text, "N");
        break;
      } else {
        tmp___43 = __errno_location();
        if (*tmp___43 == 40) {
          checked_fprintf(dest, (char const   *)segment->text, "L");
          break;
        } else {
          checked_fprintf(dest, (char const   *)segment->text, "?");
          tmp___41 = safely_quote_err_filename(0, pathname);
          tmp___42 = __errno_location();
          error(0, *tmp___42, "%s", tmp___41);
          break;
        }
      }
    } else {

    }
    tmp___49 = mode_to_filetype(sbuf.st_mode & 61440U);
    checked_fprintf(dest, (char const   *)segment->text, tmp___49);
  } else {
    tmp___50 = mode_to_filetype((unsigned int )(stat_buf->st_mode & 61440U));
    checked_fprintf(dest, (char const   *)segment->text, tmp___50);
  }
  break;
  case 121: 
  tmp___51 = mode_to_filetype((unsigned int )(stat_buf->st_mode & 61440U));
  checked_fprintf(dest, (char const   *)segment->text, tmp___51);
  break;
  case 90: 
  tmp___52 = (*(options.x_getfilecon))(state.cwd_dir_fd, (char const   *)state.rel_pathname, & scontext);
  rv = tmp___52;
  if (rv < 0) {
    checked_fprintf(dest, (char const   *)segment->text, "");
    tmp___53 = safely_quote_err_filename(0, pathname);
    tmp___54 = dcgettext((char const   *)((void *)0), "getfilecon failed: %s", 5);
    tmp___55 = __errno_location();
    error(0, *tmp___55, (char const   *)tmp___54, tmp___53);
    state.exit_status = 1;
  } else {
    checked_fprintf(dest, (char const   *)segment->text, scontext);
    freecon(scontext);
  }
  break;
  }
  break;
  }
  return;
}
}
_Bool pred_fprintf(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct format_val *dest ;
  struct segment *segment ;
  struct timespec ts ;
  int valid ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___1 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___2 ;
  char *tmp___3 ;

  {
  dest = & pred_ptr->args.printf_vec;
  segment = dest->segment;
  while (segment) {
    if (2U == (unsigned int )segment->segkind) {
      if (segment->format_char[1]) {
        valid = 0;
        switch ((int )segment->format_char[0]) {
        case 65: 
        tmp = get_stat_atime((struct stat  const  *)stat_buf);
        ts = (struct timespec )tmp;
        valid = 1;
        break;
        case 66: 
        tmp___0 = get_stat_birthtime((struct stat  const  *)stat_buf);
        ts = (struct timespec )tmp___0;
        if (64 == (int )segment->format_char[1]) {
          valid = 1;
        } else {
          valid = ts.tv_nsec >= 0L;
        }
        break;
        case 67: 
        tmp___1 = get_stat_ctime((struct stat  const  *)stat_buf);
        ts = (struct timespec )tmp___1;
        valid = 1;
        break;
        case 84: 
        tmp___2 = get_stat_mtime((struct stat  const  *)stat_buf);
        ts = (struct timespec )tmp___2;
        valid = 1;
        break;
        default: 
        __assert_fail("0", "pred.c", 1240U, "pred_fprintf");
        abort();
        }
        if (valid) {
          tmp___3 = format_date(ts, (int )segment->format_char[1]);
          checked_fprintf(dest, (char const   *)segment->text, tmp___3);
        } else {
          checked_fprintf(dest, (char const   *)segment->text, "");
        }
      } else {
        do_fprintf(dest, segment, pathname, (struct stat  const  *)stat_buf);
      }
    } else {
      do_fprintf(dest, segment, pathname, (struct stat  const  *)stat_buf);
    }
    segment = segment->next;
  }
  return ((_Bool)1);
}
}
_Bool pred_fstype(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ size_t __s1_len ;
  size_t __s2_len ;
  char *tmp___4 ;
  int tmp___5 ;
  char *tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  char *tmp___26 ;
  char *tmp___27 ;
  char *tmp___28 ;
  int tmp___29 ;

  {
  if (0) {
    tmp___26 = filesystem_type((struct stat  const  *)stat_buf, pathname);
    __s1_len = __builtin_strlen((char const   *)tmp___26);
    __s2_len = __builtin_strlen(pred_ptr->args.str);
    tmp___27 = filesystem_type((struct stat  const  *)stat_buf, pathname);
    tmp___28 = filesystem_type((struct stat  const  *)stat_buf, pathname);
    if ((unsigned long )((void const   *)(tmp___27 + 1)) - (unsigned long )((void const   *)tmp___28) == 1UL) {
      if (__s1_len >= 4UL) {
        _L___0: 
        if (! ((unsigned long )((void const   *)(pred_ptr->args.str + 1)) - (unsigned long )((void const   *)pred_ptr->args.str) == 1UL)) {
          tmp___29 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___29 = 1;
          } else {
            tmp___29 = 0;
          }
        }
      } else {
        tmp___29 = 0;
      }
    } else {
      goto _L___0;
    }
    if (tmp___29) {
      tmp___4 = filesystem_type((struct stat  const  *)stat_buf, pathname);
      tmp___5 = __builtin_strcmp((char const   *)tmp___4, pred_ptr->args.str);
      tmp___24 = tmp___5;
    } else {
      tmp___22 = filesystem_type((struct stat  const  *)stat_buf, pathname);
      tmp___23 = __builtin_strcmp((char const   *)tmp___22, pred_ptr->args.str);
      tmp___24 = tmp___23;
    }
  } else {
    tmp___22 = filesystem_type((struct stat  const  *)stat_buf, pathname);
    tmp___23 = __builtin_strcmp((char const   *)tmp___22, pred_ptr->args.str);
    tmp___24 = tmp___23;
  }
  if (tmp___24 == 0) {
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_gid(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  switch ((int )pred_ptr->args.numinfo.kind) {
  case 0: 
  if ((unsigned long )stat_buf->st_gid > pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 1: 
  if ((unsigned long )stat_buf->st_gid < pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 2: 
  if ((unsigned long )stat_buf->st_gid == pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_group(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  if (pred_ptr->args.gid == stat_buf->st_gid) {
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_ilname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = match_lname(pathname, stat_buf, pred_ptr, (_Bool)1);
  return (tmp);
}
}
static _Bool pred_name_common(char const   *pathname , char const   *str , int flags ) 
{ _Bool b ;
  char *base ;
  char *tmp ;
  int tmp___0 ;

  {
  tmp = base_name(pathname);
  base = tmp;
  strip_trailing_slashes(base);
  tmp___0 = fnmatch(str, (char const   *)base, flags);
  b = (_Bool )(tmp___0 == 0);
  free((void *)base);
  return (b);
}
}
_Bool pred_iname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = pred_name_common(pathname, pred_ptr->args.str, 1 << 4);
  return (tmp);
}
}
_Bool pred_inum(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  if (! (stat_buf->st_ino != 0UL)) {
    __assert_fail("stat_buf->st_ino != 0", "pred.c", 1361U, "pred_inum");
  } else {

  }
  switch ((int )pred_ptr->args.numinfo.kind) {
  case 0: 
  if (stat_buf->st_ino > pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 1: 
  if (stat_buf->st_ino < pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 2: 
  if (stat_buf->st_ino == pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_ipath(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;

  {
  tmp = fnmatch(pred_ptr->args.str, pathname, 1 << 4);
  if (tmp == 0) {
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
_Bool pred_links(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  switch ((int )pred_ptr->args.numinfo.kind) {
  case 0: 
  if (stat_buf->st_nlink > pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 1: 
  if (stat_buf->st_nlink < pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 2: 
  if (stat_buf->st_nlink == pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_lname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = match_lname(pathname, stat_buf, pred_ptr, (_Bool)0);
  return (tmp);
}
}
static _Bool match_lname(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr , _Bool ignore_case ) 
{ _Bool ret ;
  char *linkname ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;

  {
  ret = (_Bool)0;
  if ((stat_buf->st_mode & 61440U) == 40960U) {
    tmp = areadlinkat(state.cwd_dir_fd, (char const   *)state.rel_pathname);
    linkname = tmp;
    if (linkname) {
      if (ignore_case) {
        tmp___0 = 1 << 4;
      } else {
        tmp___0 = 0;
      }
      tmp___1 = fnmatch(pred_ptr->args.str, (char const   *)linkname, tmp___0);
      if (tmp___1 == 0) {
        ret = (_Bool)1;
      } else {

      }
    } else {
      tmp___2 = __errno_location();
      nonfatal_target_file_error(*tmp___2, pathname);
      state.exit_status = 1;
    }
    free((void *)linkname);
  } else {

  }
  return (ret);
}
}
_Bool pred_ls(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = pred_fls(pathname, stat_buf, pred_ptr);
  return (tmp);
}
}
_Bool pred_mmin(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_mtime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 60);
  return (tmp___0);
}
}
_Bool pred_mtime(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  _Bool tmp___0 ;

  {
  tmp = get_stat_mtime((struct stat  const  *)stat_buf);
  tmp___0 = pred_timewindow((struct timespec )tmp, (struct predicate  const  *)pred_ptr, 86400);
  return (tmp___0);
}
}
_Bool pred_name(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = pred_name_common(pathname, pred_ptr->args.str, 0);
  return (tmp);
}
}
_Bool pred_negate(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;
  int tmp___0 ;

  {
  tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  return ((_Bool )tmp___0);
}
}
_Bool pred_newer(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  int tmp___0 ;

  {
  if (! (0U == (unsigned int )pred_ptr->args.reftime.kind)) {
    __assert_fail("COMP_GT == pred_ptr->args.reftime.kind", "pred.c", 1483U, "pred_newer");
  } else {

  }
  tmp = get_stat_mtime((struct stat  const  *)stat_buf);
  tmp___0 = compare_ts((struct timespec )tmp, pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp___0 > 0));
}
}
_Bool pred_newerXY(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec ts ;
  _Bool collected ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___3 ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___4 ;
  int tmp___5 ;

  {
  collected = (_Bool)0;
  if (! (0U == (unsigned int )pred_ptr->args.reftime.kind)) {
    __assert_fail("COMP_GT == pred_ptr->args.reftime.kind", "pred.c", 1493U, "pred_newerXY");
  } else {

  }
  switch ((int )pred_ptr->args.reftime.xval) {
  case 4: 
  if (! ((unsigned int )pred_ptr->args.reftime.xval != 4U)) {
    __assert_fail("pred_ptr->args.reftime.xval != XVAL_TIME", "pred.c", 1498U, "pred_newerXY");
  } else {

  }
  return ((_Bool)0);
  case 0: 
  tmp = get_stat_atime((struct stat  const  *)stat_buf);
  ts = (struct timespec )tmp;
  collected = (_Bool)1;
  break;
  case 1: 
  tmp___0 = get_stat_birthtime((struct stat  const  *)stat_buf);
  ts = (struct timespec )tmp___0;
  collected = (_Bool)1;
  if (ts.tv_nsec < 0L) {

  } else {

  }
  tmp___1 = safely_quote_err_filename(0, pathname);
  tmp___2 = dcgettext((char const   *)((void *)0), "WARNING: cannot determine birth time of file %s", 5);
  error(0, 0, (char const   *)tmp___2, tmp___1);
  return ((_Bool)0);
  break;
  case 2: 
  tmp___3 = get_stat_ctime((struct stat  const  *)stat_buf);
  ts = (struct timespec )tmp___3;
  collected = (_Bool)1;
  break;
  case 3: 
  tmp___4 = get_stat_mtime((struct stat  const  *)stat_buf);
  ts = (struct timespec )tmp___4;
  collected = (_Bool)1;
  break;
  }
  if (! collected) {
    __assert_fail("collected", "pred.c", 1529U, "pred_newerXY");
  } else {

  }
  tmp___5 = compare_ts(ts, pred_ptr->args.reftime.ts);
  return ((_Bool )(tmp___5 > 0));
}
}
_Bool pred_nogroup(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct group *tmp ;

  {
  tmp = getgrgid(stat_buf->st_gid);
  return ((_Bool )((unsigned long )tmp == (unsigned long )((void *)0)));
}
}
_Bool pred_nouser(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct passwd *tmp ;

  {
  tmp = getpwuid(stat_buf->st_uid);
  return ((_Bool )((unsigned long )tmp == (unsigned long )((void *)0)));
}
}
static _Bool is_ok(char const   *program , char const   *arg ) 
{ char *tmp ;
  _Bool tmp___0 ;

  {
  rpl_fflush(stdout);
  tmp = dcgettext((char const   *)((void *)0), "< %s ... %s > ? ", 5);
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp, program, arg);
  rpl_fflush(stderr);
  tmp___0 = yesno();
  return (tmp___0);
}
}
_Bool pred_ok(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;
  _Bool tmp___0 ;

  {
  tmp___0 = is_ok((char const   *)*(pred_ptr->args.exec_vec.replace_vec + 0), pathname);
  if (tmp___0) {
    tmp = impl_pred_exec(pathname, stat_buf, pred_ptr);
    return (tmp);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_okdir(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;
  _Bool tmp___0 ;

  {
  tmp___0 = is_ok((char const   *)*(pred_ptr->args.exec_vec.replace_vec + 0), pathname);
  if (tmp___0) {
    tmp = impl_pred_exec((char const   *)state.rel_pathname, stat_buf, pred_ptr);
    return (tmp);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_openparen(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  return ((_Bool)1);
}
}
_Bool pred_or(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;
  _Bool tmp___0 ;

  {
  if ((unsigned long )pred_ptr->pred_left == (unsigned long )((void *)0)) {
    tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
    return (tmp);
  } else {
    tmp___0 = apply_predicate(pathname, stat_buf, pred_ptr->pred_left);
    if (tmp___0) {
      return ((_Bool)1);
    } else {
      tmp = apply_predicate(pathname, stat_buf, pred_ptr->pred_right);
      return (tmp);
    }
  }
}
}
_Bool pred_path(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;

  {
  tmp = fnmatch(pred_ptr->args.str, pathname, 0);
  if (tmp == 0) {
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
_Bool pred_perm(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ mode_t mode ;
  mode_t perm_val ;

  {
  mode = stat_buf->st_mode;
  perm_val = pred_ptr->args.perm.val[((mode & 61440U) == 16384U) != 0];
  switch ((int )pred_ptr->args.perm.kind) {
  case 0: 
  return ((_Bool )((mode & perm_val) == perm_val));
  break;
  case 1: 
  if (0U == perm_val) {
    return ((_Bool)1);
  } else {
    return ((_Bool )((mode & perm_val) != 0U));
  }
  break;
  case 2: 
  return ((_Bool )((mode & (unsigned int )(3584 | (((64 | (64 >> 3)) | ((64 >> 3) >> 3)) | (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) | ((256 | (256 >> 3)) | ((256 >> 3) >> 3)))))) == perm_val));
  break;
  default: 
  abort();
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_executable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;

  {
  tmp = faccessat(state.cwd_dir_fd, (char const   *)state.rel_pathname, 1, 0);
  return ((_Bool )(0 == tmp));
}
}
_Bool pred_readable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;

  {
  tmp = faccessat(state.cwd_dir_fd, (char const   *)state.rel_pathname, 4, 0);
  return ((_Bool )(0 == tmp));
}
}
_Bool pred_writable(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;

  {
  tmp = faccessat(state.cwd_dir_fd, (char const   *)state.rel_pathname, 2, 0);
  return ((_Bool )(0 == tmp));
}
}
_Bool pred_print(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  print_quoted(pred_ptr->args.printf_vec.stream, (struct quoting_options  const  *)pred_ptr->args.printf_vec.quote_opts, pred_ptr->args.printf_vec.dest_is_tty, "%s\n", pathname);
  return ((_Bool)1);
}
}
_Bool pred_print0(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ _Bool tmp ;

  {
  tmp = pred_fprint0(pathname, stat_buf, pred_ptr);
  return (tmp);
}
}
_Bool pred_prune(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  if ((int )options.do_dir_first == 1) {
    if (! state.have_stat) {
      __assert_fail("state.have_stat", "pred.c", 1728U, "pred_prune");
    } else {

    }
    if ((unsigned long )stat_buf != (unsigned long )((void *)0)) {
      if ((stat_buf->st_mode & 61440U) == 16384U) {
        state.stop_at_current_level = (_Bool)1;
      } else {

      }
    } else {

    }
  } else {

  }
  return ((_Bool)1);
}
}
_Bool pred_quit(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  cleanup();
  exit(state.exit_status);
}
}
_Bool pred_regex(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int len ;
  size_t tmp ;
  regoff_t tmp___0 ;

  {
  tmp = strlen(pathname);
  len = (int )tmp;
  tmp___0 = re_match(pred_ptr->args.regex, pathname, len, 0, (struct re_registers *)((void *)0));
  if (tmp___0 == len) {
    return ((_Bool)1);
  } else {

  }
  return ((_Bool)0);
}
}
_Bool pred_size(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ uintmax_t f_val ;

  {
  f_val = (unsigned long )(stat_buf->st_size / (long )pred_ptr->args.size.blocksize + (long )(stat_buf->st_size % (long )pred_ptr->args.size.blocksize != 0L));
  switch ((int )pred_ptr->args.size.kind) {
  case 0: 
  if (f_val > pred_ptr->args.size.size) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 1: 
  if (f_val < pred_ptr->args.size.size) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 2: 
  if (f_val == pred_ptr->args.size.size) {
    return ((_Bool)1);
  } else {

  }
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_samefile(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (stat_buf->st_ino) {
    if (stat_buf->st_ino != pred_ptr->args.samefileid.ino) {
      return ((_Bool)0);
    } else {

    }
  } else {

  }
  tmp___0 = get_statinfo(pathname, (char const   *)state.rel_pathname, stat_buf);
  if (0 == tmp___0) {
    if (stat_buf->st_ino == pred_ptr->args.samefileid.ino) {
      if (stat_buf->st_dev == pred_ptr->args.samefileid.dev) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
    return ((_Bool )tmp);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_true(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  return ((_Bool)1);
}
}
_Bool pred_type(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ mode_t mode ;
  mode_t type ;

  {
  type = pred_ptr->args.type;
  if (! state.have_type) {
    __assert_fail("state.have_type", "pred.c", 1852U, "pred_type");
  } else {

  }
  if (0U == state.type) {
    return ((_Bool)0);
  } else {

  }
  if (state.have_stat) {
    mode = stat_buf->st_mode;
  } else {
    mode = state.type;
  }
  if ((mode & 61440U) == type) {
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_uid(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  switch ((int )pred_ptr->args.numinfo.kind) {
  case 0: 
  if ((unsigned long )stat_buf->st_uid > pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 1: 
  if ((unsigned long )stat_buf->st_uid < pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  case 2: 
  if ((unsigned long )stat_buf->st_uid == pred_ptr->args.numinfo.l_val) {
    return ((_Bool)1);
  } else {

  }
  break;
  }
  return ((_Bool)0);
}
}
_Bool pred_used(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct timespec delta ;
  struct timespec at ;
  struct timespec ct ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp ;
  struct timespec  __attribute__((__pure__, __gnu_inline__)) tmp___0 ;
  _Bool tmp___1 ;

  {
  tmp = get_stat_atime((struct stat  const  *)stat_buf);
  at = (struct timespec )tmp;
  tmp___0 = get_stat_ctime((struct stat  const  *)stat_buf);
  ct = (struct timespec )tmp___0;
  delta.tv_sec = at.tv_sec - ct.tv_sec;
  delta.tv_nsec = at.tv_nsec - ct.tv_nsec;
  if (delta.tv_nsec < 0L) {
    delta.tv_nsec += 1000000000L;
    (delta.tv_sec) --;
  } else {

  }
  tmp___1 = pred_timewindow(delta, (struct predicate  const  *)pred_ptr, 86400);
  return (tmp___1);
}
}
_Bool pred_user(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ 

  {
  if (pred_ptr->args.uid == stat_buf->st_uid) {
    return ((_Bool)1);
  } else {
    return ((_Bool)0);
  }
}
}
_Bool pred_xtype(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ struct stat sbuf ;
  int (*ystat)(char const   * , struct stat *p ) ;
  _Bool tmp ;
  _Bool tmp___0 ;
  char const   *tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  _Bool tmp___6 ;

  {
  tmp = following_links();
  if (tmp) {
    ystat = & optionp_stat;
  } else {
    ystat = & optionl_stat;
  }
  set_stat_placeholders(& sbuf);
  tmp___5 = (*ystat)((char const   *)state.rel_pathname, & sbuf);
  if (tmp___5 != 0) {
    tmp___3 = following_links();
    if (tmp___3) {
      tmp___4 = __errno_location();
      if (*tmp___4 == 2) {
        tmp___0 = pred_type(pathname, stat_buf, pred_ptr);
        return (tmp___0);
      } else {
        tmp___1 = safely_quote_err_filename(0, pathname);
        tmp___2 = __errno_location();
        error(0, *tmp___2, "%s", tmp___1);
        state.exit_status = 1;
      }
    } else {
      tmp___1 = safely_quote_err_filename(0, pathname);
      tmp___2 = __errno_location();
      error(0, *tmp___2, "%s", tmp___1);
      state.exit_status = 1;
    }
    return ((_Bool)0);
  } else {

  }
  tmp___6 = pred_type(pathname, & sbuf, pred_ptr);
  return (tmp___6);
}
}
_Bool pred_context(char const   *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) 
{ security_context_t scontext ;
  int rv ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;

  {
  tmp = (*(options.x_getfilecon))(state.cwd_dir_fd, (char const   *)state.rel_pathname, & scontext);
  rv = tmp;
  if (rv < 0) {
    tmp___0 = safely_quote_err_filename(0, pathname);
    tmp___1 = dcgettext((char const   *)((void *)0), "getfilecon failed: %s", 5);
    tmp___2 = __errno_location();
    error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
    return ((_Bool)0);
  } else {

  }
  tmp___3 = fnmatch((char const   *)pred_ptr->args.scontext, (char const   *)scontext, 0);
  rv = tmp___3 == 0;
  freecon(scontext);
  return ((_Bool )rv);
}
}
static _Bool prep_child_for_exec(_Bool close_stdin , struct saved_cwd  const  *wd ) 
{ _Bool ok ;
  char inputfile[10] ;
  char *tmp ;
  int *tmp___0 ;
  char const   *tmp___1 ;
  int *tmp___2 ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  ok = (_Bool)1;
  if (close_stdin) {
    inputfile[0] = (char )'/';
    inputfile[1] = (char )'d';
    inputfile[2] = (char )'e';
    inputfile[3] = (char )'v';
    inputfile[4] = (char )'/';
    inputfile[5] = (char )'n';
    inputfile[6] = (char )'u';
    inputfile[7] = (char )'l';
    inputfile[8] = (char )'l';
    inputfile[9] = (char )'\000';
    tmp___4 = close(0);
    if (tmp___4 < 0) {
      tmp = dcgettext((char const   *)((void *)0), "Cannot close standard input", 5);
      tmp___0 = __errno_location();
      error(0, *tmp___0, (char const   *)tmp);
      ok = (_Bool)0;
    } else {
      tmp___3 = open((char const   *)(inputfile), 0);
      if (tmp___3 < (int __attribute__((__gnu_inline__, __artificial__))  )0) {
        tmp___1 = safely_quote_err_filename(0, (char const   *)(inputfile));
        tmp___2 = __errno_location();
        error(0, *tmp___2, "%s", tmp___1);
      } else {

      }
    }
  } else {

  }
  tmp___7 = restore_cwd(wd);
  if (0 != tmp___7) {
    tmp___5 = dcgettext((char const   *)((void *)0), "Failed to change directory", 5);
    tmp___6 = __errno_location();
    error(0, *tmp___6, (char const   *)tmp___5);
    ok = (_Bool)0;
  } else {

  }
  return (ok);
}
}
static int first_time  =    1;
int launch(struct buildcmd_control *ctl , void *usercontext , int argc , char **argv ) 
{ pid_t child_pid ;
  struct exec_val *execp ;
  char *tmp ;
  int *tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;
  int *tmp___3 ;
  _Bool tmp___4 ;
  char const   *tmp___5 ;
  int *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  int *tmp___9 ;
  int *tmp___10 ;
  __pid_t tmp___11 ;
  union __anonunion_70 __constr_expr_0 ;
  char *tmp___12 ;
  char *tmp___13 ;
  union __anonunion_71 __constr_expr_1 ;
  union __anonunion_72 __constr_expr_2 ;

  {
  execp = (struct exec_val *)usercontext;
  rpl_fflush(stdout);
  rpl_fflush(stderr);
  if (first_time) {
    first_time = 0;
    signal(17, (void (*)(int  ))0);
  } else {

  }
  child_pid = fork();
  if (child_pid == -1) {
    tmp = dcgettext((char const   *)((void *)0), "cannot fork", 5);
    tmp___0 = __errno_location();
    error(1, *tmp___0, (char const   *)tmp);
  } else {

  }
  if (child_pid == 0) {
    if (! ((unsigned long )((void *)0) != (unsigned long )execp->wd_for_exec)) {
      __assert_fail("((void *)0) != execp->wd_for_exec", "pred.c", 2101U, "launch");
    } else {

    }
    tmp___2 = prep_child_for_exec(execp->close_stdin, (struct saved_cwd  const  *)execp->wd_for_exec);
    if (tmp___2) {
      tmp___1 = fd_leak_check_is_enabled();
      if (tmp___1) {
        complain_about_leaky_fds();
      } else {

      }
    } else {
      _exit(1);
    }
    tmp___4 = bc_args_exceed_testing_limit((char const   **)argv);
    if (tmp___4) {
      tmp___3 = __errno_location();
      *tmp___3 = 7;
    } else {
      execvp((char const   *)*(argv + 0), (char * const  *)argv);
    }
    tmp___5 = safely_quote_err_filename(0, (char const   *)*(argv + 0));
    tmp___6 = __errno_location();
    error(0, *tmp___6, "%s", tmp___5);
    _exit(1);
  } else {

  }
  while (1) {
    tmp___11 = waitpid(child_pid, & execp->last_child_status, 0);
    if (! (tmp___11 == -1)) {
      break;
    } else {

    }
    tmp___10 = __errno_location();
    if (*tmp___10 != 4) {
      tmp___7 = safely_quote_err_filename(0, (char const   *)*(argv + 0));
      tmp___8 = dcgettext((char const   *)((void *)0), "error waiting for %s", 5);
      tmp___9 = __errno_location();
      error(0, *tmp___9, (char const   *)tmp___8, tmp___7);
      state.exit_status = 1;
      return (0);
    } else {

    }
  }
  __constr_expr_1.__in = execp->last_child_status;
  if ((int )((signed char )((__constr_expr_1.__i & 127) + 1)) >> 1 > 0) {
    __constr_expr_0.__in = execp->last_child_status;
    tmp___12 = quotearg_n_style(0, options.err_quoting_style, (char const   *)*(argv + 0));
    tmp___13 = dcgettext((char const   *)((void *)0), "%s terminated by signal %d", 5);
    error(0, 0, (char const   *)tmp___13, tmp___12, __constr_expr_0.__i & 127);
    if (execp->multiple) {
      state.exit_status = 1;
    } else {

    }
    return (1);
  } else {

  }
  __constr_expr_2.__in = execp->last_child_status;
  if (0 == (__constr_expr_2.__i & 65280) >> 8) {
    return (1);
  } else {
    if (execp->multiple) {
      state.exit_status = 1;
    } else {

    }
    return (1);
  }
}
}
static _Bool scan_for_digit_differences(char const   *p , char const   *q , size_t *first , size_t *n ) 
{ _Bool seen ;
  size_t i ;
  unsigned short const   **tmp ;
  unsigned short const   **tmp___0 ;

  {
  seen = (_Bool)0;
  i = 0UL;
  while (1) {
    if (*(p + i)) {
      if (! *(q + i)) {
        break;
      } else {

      }
    } else {
      break;
    }
    if ((int const   )*(p + i) != (int const   )*(q + i)) {
      tmp = __ctype_b_loc();
      if ((int const   )*(*tmp + (int )((unsigned char )*(q + i))) & 2048) {
        tmp___0 = __ctype_b_loc();
        if (! ((int const   )*(*tmp___0 + (int )((unsigned char )*(q + i))) & 2048)) {
          return ((_Bool)0);
        } else {

        }
      } else {
        return ((_Bool)0);
      }
      if (! seen) {
        *first = i;
        *n = 1UL;
        seen = (_Bool)1;
      } else {
        if (i - *first == *n) {
          (*n) ++;
        } else {
          return ((_Bool)0);
        }
      }
    } else {

    }
    i ++;
  }
  if (*(p + i)) {
    return ((_Bool)0);
  } else {
    if (*(q + i)) {
      return ((_Bool)0);
    } else {

    }
  }
  return ((_Bool)1);
}
}
static char *do_time_format(char const   *fmt , struct tm  const  *p , char const   *ns , size_t ns_size ) ;
static char *buf  =    (char *)((void *)0);
static size_t buf_size  ;
static char *do_time_format(char const   *fmt , struct tm  const  *p , char const   *ns , size_t ns_size ) 
{ char *timefmt ;
  struct tm altered_time ;
  size_t tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t buf_used ;
  size_t tmp___2 ;
  char *altbuf ;
  size_t i ;
  size_t n ;
  size_t final_len ;
  void *tmp___3 ;
  void *tmp___4 ;
  size_t end_of_seconds ;
  size_t suffix_len ;
  _Bool tmp___5 ;
  unsigned short const   **tmp___6 ;
  void __attribute__((__gnu_inline__))  *tmp___7 ;

  {
  timefmt = (char *)((void *)0);
  tmp = strlen(fmt);
  tmp___0 = xmalloc(tmp + 2UL);
  timefmt = (char *)tmp___0;
  sprintf((char */* __restrict  */)timefmt, (char const   */* __restrict  */)"_%s", fmt);
  altered_time = (struct tm )*p;
  if (altered_time.tm_sec >= 11) {
    altered_time.tm_sec -= 11;
  } else {
    altered_time.tm_sec += 11;
  }
  buf_size = 1UL;
  tmp___1 = xmalloc(buf_size);
  buf = (char *)tmp___1;
  while (1) {
    tmp___2 = strftime((char */* __restrict  */)buf, buf_size, (char const   */* __restrict  */)timefmt, (struct tm  const  */* __restrict  */)p);
    buf_used = tmp___2;
    if (buf_used) {
      if (buf_used < buf_size) {
        i = 0UL;
        n = 0UL;
        final_len = (buf_used + 1UL) + ns_size;
        tmp___3 = xrealloc((void *)buf, final_len);
        buf = (char *)tmp___3;
        tmp___4 = xmalloc(final_len);
        altbuf = (char *)tmp___4;
        strftime((char */* __restrict  */)altbuf, buf_size, (char const   */* __restrict  */)timefmt, (struct tm  const  */* __restrict  */)(& altered_time));
        tmp___5 = scan_for_digit_differences((char const   *)buf, (char const   *)altbuf, & i, & n);
        if (tmp___5) {
          if (2UL == n) {
            tmp___6 = __ctype_b_loc();
            if (! ((int const   )*(*tmp___6 + (int )((unsigned char )*(buf + (i + n)))) & 2048)) {
              end_of_seconds = i + n;
              suffix_len = (buf_used - end_of_seconds) + 1UL;
              if (! ((end_of_seconds + ns_size) + suffix_len == final_len)) {
                __assert_fail("end_of_seconds + ns_size + suffix_len == final_len", "pred.c", 2289U, "do_time_format");
              } else {

              }
              memmove((void *)((buf + end_of_seconds) + ns_size), (void const   *)(buf + end_of_seconds), suffix_len);
              memcpy((void */* __restrict  */)((buf + i) + n), (void const   */* __restrict  */)ns, ns_size);
            } else {

            }
          } else {

          }
        } else {

        }
        free((void *)timefmt);
        return (buf + 1);
      } else {
        tmp___7 = x2nrealloc((void *)buf, & buf_size, 2UL);
        buf = (char *)tmp___7;
      }
    } else {
      tmp___7 = x2nrealloc((void *)buf, & buf_size, 2UL);
      buf = (char *)tmp___7;
    }
  }
}
}
static char buf___0[791UL]  ;
static char *format_date(struct timespec ts , int kind ) 
{ char ns_buf[32] ;
  int charsprinted ;
  int need_ns_suffix ;
  struct tm *tm ;
  char fmt[6] ;
  int __attribute__((__leaf__, __gnu_inline__, __artificial__))  tmp ;
  char *s ;
  char *tmp___0 ;
  uintmax_t w ;
  size_t used ;
  size_t len ;
  size_t remaining ;
  char *p ;
  uintmax_t tmp___1 ;
  char *tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;

  {
  charsprinted = 0;
  need_ns_suffix = 0;
  if (kind == 43) {
    strcpy((char */* __restrict  */)(fmt), (char const   */* __restrict  */)"%F+%T");
    need_ns_suffix = 1;
  } else {
    fmt[0] = (char )'%';
    fmt[1] = (char )kind;
    fmt[2] = (char )'\000';
    switch (kind) {
    case 83: 
    case 84: 
    case 88: 
    case 64: 
    need_ns_suffix = 1;
    break;
    default: 
    need_ns_suffix = 0;
    break;
    }
  }
  if (need_ns_suffix) {
    tmp = snprintf((char */* __restrict  */)(ns_buf), 32UL, (char const   */* __restrict  */)".%09ld0", ts.tv_nsec);
    charsprinted = (int )tmp;
    if (! (charsprinted < 32)) {
      __assert_fail("charsprinted < NS_BUF_LEN", "pred.c", 2402U, "format_date");
    } else {

    }
  } else {
    charsprinted = 0;
    ns_buf[0] = (char)0;
  }
  if (kind != 64) {
    tm = localtime((time_t const   *)(& ts.tv_sec));
    if (tm) {
      tmp___0 = do_time_format((char const   *)(fmt), (struct tm  const  *)tm, (char const   *)(ns_buf), (unsigned long )charsprinted);
      s = tmp___0;
      if (s) {
        return (s);
      } else {

      }
    } else {

    }
  } else {

  }
  w = (unsigned long )ts.tv_sec;
  if (ts.tv_sec < 0L) {
    tmp___1 = - w;
  } else {
    tmp___1 = w;
  }
  tmp___2 = human_readable(tmp___1, buf___0 + 1, 0, 1UL, 1UL);
  p = tmp___2;
  if (! ((unsigned long )p > (unsigned long )(buf___0))) {
    __assert_fail("p > buf", "pred.c", 2434U, "format_date");
  } else {

  }
  if (! ((unsigned long )p < (unsigned long )(buf___0 + sizeof(buf___0)))) {
    __assert_fail("p < (buf + (sizeof buf))", "pred.c", 2435U, "format_date");
  } else {

  }
  if (ts.tv_sec < 0L) {
    p --;
    *p = (char )'-';
  } else {

  }
  if (need_ns_suffix) {
    len = strlen((char const   *)p);
    used = (unsigned long )(p - buf___0) + len;
    if (! (sizeof(buf___0) > used)) {
      __assert_fail("sizeof buf > used", "pred.c", 2448U, "format_date");
    } else {

    }
    remaining = (sizeof(buf___0) - used) - 1UL;
    tmp___3 = strlen((char const   *)(ns_buf));
    if (tmp___3 >= remaining) {
      error(0, 0, "charsprinted=%ld but remaining=%lu: ns_buf=%s", (long )charsprinted, remaining, ns_buf);
    } else {

    }
    tmp___4 = strlen((char const   *)(ns_buf));
    if (! (tmp___4 < remaining)) {
      __assert_fail("strlen (ns_buf) < remaining", "pred.c", 2457U, "format_date");
    } else {

    }
    strcat((char */* __restrict  */)p, (char const   */* __restrict  */)(ns_buf));
  } else {

  }
  return (p);
}
}
static char const   *weekdays[7]  = {      "Sun",      "Mon",      "Tue",      "Wed", 
        "Thu",      "Fri",      "Sat"};
static char *months[12]  = 
  {      (char *)"Jan",      (char *)"Feb",      (char *)"Mar",      (char *)"Apr", 
        (char *)"May",      (char *)"Jun",      (char *)"Jul",      (char *)"Aug", 
        (char *)"Sep",      (char *)"Oct",      (char *)"Nov",      (char *)"Dec"};
static char resultbuf[1024U]  ;
static char *ctime_format(struct timespec ts ) 
{ struct tm  const  *ptm ;
  int nout ;
  struct tm *tmp ;
  int __attribute__((__leaf__, __gnu_inline__, __artificial__))  tmp___0 ;
  char *tmp___1 ;

  {
  tmp = localtime((time_t const   *)(& ts.tv_sec));
  ptm = (struct tm  const  *)tmp;
  if (ptm) {
    if (! (ptm->tm_wday >= 0)) {
      __assert_fail("ptm->tm_wday >= 0", "pred.c", 2486U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_wday < 7)) {
      __assert_fail("ptm->tm_wday < 7", "pred.c", 2487U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_mon >= 0)) {
      __assert_fail("ptm->tm_mon >= 0", "pred.c", 2488U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_mon < 12)) {
      __assert_fail("ptm->tm_mon < 12", "pred.c", 2489U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_hour >= 0)) {
      __assert_fail("ptm->tm_hour >= 0", "pred.c", 2490U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_hour < 24)) {
      __assert_fail("ptm->tm_hour < 24", "pred.c", 2491U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_min < 60)) {
      __assert_fail("ptm->tm_min < 60", "pred.c", 2492U, "ctime_format");
    } else {

    }
    if (! (ptm->tm_sec <= 61)) {
      __assert_fail("ptm->tm_sec <= 61", "pred.c", 2493U, "ctime_format");
    } else {

    }
    tmp___0 = snprintf((char */* __restrict  */)(resultbuf), 1024UL, (char const   */* __restrict  */)"%3s %3s %2d %02d:%02d:%02d.%010ld %04d", weekdays[ptm->tm_wday], months[ptm->tm_mon], ptm->tm_mday, ptm->tm_hour, ptm->tm_min, ptm->tm_sec, ts.tv_nsec, 1900 + (int )ptm->tm_year);
    nout = (int )tmp___0;
    if (! ((unsigned int )nout < 1024U)) {
      __assert_fail("nout < 1024u", "pred.c", 2507U, "ctime_format");
    } else {

    }
    return (resultbuf);
  } else {
    tmp___1 = format_date(ts, '@');
    return (tmp___1);
  }
}
}
static char *blank_rtrim(char *str , char *buf___1 ) 
{ int i ;
  size_t tmp ;

  {
  if ((unsigned long )str == (unsigned long )((void *)0)) {
    return ((char *)((void *)0));
  } else {

  }
  strcpy((char */* __restrict  */)buf___1, (char const   */* __restrict  */)str);
  tmp = strlen((char const   *)buf___1);
  i = (int )(tmp - 1UL);
  while (1) {
    if (i >= 0) {
      if (! ((int )*(buf___1 + i) == 32)) {
        if (! ((int )*(buf___1 + i) == 9)) {
          break;
        } else {

        }
      } else {

      }
    } else {
      break;
    }
    i --;
  }
  i ++;
  *(buf___1 + i) = (char )'\000';
  return (buf___1);
}
}
void print_list(FILE *fp , struct predicate *node ) 
{ struct predicate *cur ;
  char name[256] ;
  char *tmp ;

  {
  cur = node;
  while ((unsigned long )cur != (unsigned long )((void *)0)) {
    tmp = blank_rtrim(cur->p_name, name);
    fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"[%s] ", tmp);
    cur = cur->pred_next;
  }
  fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"\n");
  return;
}
}
static void print_parenthesised(FILE *fp , struct predicate *node ) 
{ int parens ;

  {
  parens = 0;
  if (node) {
    if ((unsigned long )node->pred_func == (unsigned long )(& pred_or)) {
      goto _L___0;
    } else {
      if ((unsigned long )node->pred_func == (unsigned long )(& pred_and)) {
        _L___0: 
        if ((unsigned long )node->pred_left == (unsigned long )((void *)0)) {
          print_parenthesised(fp, node->pred_right);
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (node->pred_left) {
          parens = 1;
        } else {
          if (node->pred_right) {
            parens = 1;
          } else {

          }
        }
        if (parens) {
          fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%s", " ( ");
        } else {

        }
        print_optlist(fp, (struct predicate  const  *)node);
        if (parens) {
          fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%s", " ) ");
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
void print_optlist(FILE *fp , struct predicate  const  *p ) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  double real_rate ;

  {
  if (p) {
    print_parenthesised(fp, (struct predicate *)p->pred_left);
    if (p->need_inum) {
      tmp = "[need inum] ";
    } else {
      tmp = "";
    }
    if (p->need_type) {
      tmp___0 = "[need type] ";
    } else {
      tmp___0 = "";
    }
    if (p->need_stat) {
      tmp___1 = "[call stat] ";
    } else {
      tmp___1 = "";
    }
    fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%s%s%s", tmp___1, tmp___0, tmp);
    print_predicate(fp, p);
    fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)" [%g] ", p->est_success_rate);
    if (options.debug_options & 64UL) {
      fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"[%ld/%ld", p->perf.successes, p->perf.visits);
      if (p->perf.visits) {
        real_rate = (double )p->perf.successes / (double )p->perf.visits;
        fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"=%g] ", real_rate);
      } else {
        fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"=_] ");
      }
    } else {

    }
    print_parenthesised(fp, (struct predicate *)p->pred_right);
  } else {

  }
  return;
}
}
void show_success_rates(struct predicate  const  *p ) 
{ 

  {
  if (options.debug_options & 64UL) {
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"Predicate success rates after completion:\n");
    print_optlist(stderr, p);
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"\n");
  } else {

  }
  return;
}
}
void pred_sanity_check(struct predicate  const  *predicates ) 
{ struct predicate  const  *p ;

  {
  p = predicates;
  while ((unsigned long )p != (unsigned long )((void *)0)) {
    if (! ((unsigned long )p->pred_func != (unsigned long )((void *)0))) {
      __assert_fail("p->pred_func != ((void *)0)", "pred.c", 2647U, "pred_sanity_check");
    } else {

    }
    if (! ((unsigned long )p->parser_entry != (unsigned long )((void *)0))) {
      __assert_fail("p->parser_entry != ((void *)0)", "pred.c", 2650U, "pred_sanity_check");
    } else {

    }
    if ((p->parser_entry)->pred_func) {
      if (! ((unsigned long )(p->parser_entry)->pred_func == (unsigned long )p->pred_func)) {
        __assert_fail("p->parser_entry->pred_func == p->pred_func", "pred.c", 2659U, "pred_sanity_check");
      } else {

      }
    } else {

    }
    switch ((int )(p->parser_entry)->type) {
    case 0: 
    case 2: 
    if (! ((unsigned int const   )(p->parser_entry)->type != 0U)) {
      __assert_fail("p->parser_entry->type != ARG_OPTION", "pred.c", 2675U, "pred_sanity_check");
    } else {

    }
    if (! ((unsigned int const   )(p->parser_entry)->type != 2U)) {
      __assert_fail("p->parser_entry->type != ARG_POSITIONAL_OPTION", "pred.c", 2676U, "pred_sanity_check");
    } else {

    }
    break;
    case 6: 
    if (! p->side_effects) {
      __assert_fail("p->side_effects", "pred.c", 2680U, "pred_sanity_check");
    } else {

    }
    if (! ((unsigned long )p->pred_func == (unsigned long )(& pred_prune))) {
      if (! ((unsigned long )p->pred_func == (unsigned long )(& pred_quit))) {
        if (! p->no_default_print) {
          __assert_fail("p->no_default_print", "pred.c", 2686U, "pred_sanity_check");
        } else {

        }
      } else {

      }
    } else {

    }
    break;
    case 4: 
    case 3: 
    case 5: 
    case 1: 
    if (! (! p->no_default_print)) {
      __assert_fail("!p->no_default_print", "pred.c", 2700U, "pred_sanity_check");
    } else {

    }
    if (! (! p->side_effects)) {
      __assert_fail("!p->side_effects", "pred.c", 2701U, "pred_sanity_check");
    } else {

    }
    break;
    }
    p = (struct predicate  const  *)p->pred_next;
  }
  return;
}
}
