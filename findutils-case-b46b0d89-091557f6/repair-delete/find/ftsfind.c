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
struct buildcmd_state {
   int cmd_argc ;
   char **cmd_argv ;
   int cmd_argv_alloc ;
   char *argbuf ;
   size_t cmd_argv_chars ;
   size_t cmd_initial_argv_chars ;
   void *usercontext ;
   int todo ;
   int dirfd ;
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
   unsigned long l_val ;
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
   unsigned long size ;
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
   int dirfd ;
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
   struct long_val numinfo ;
   struct size_val size ;
   uid_t uid ;
   gid_t gid ;
   struct time_val reftime ;
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
    ARG_SPECIAL_PARSE = 4,
    ARG_PUNCTUATION = 5,
    ARG_ACTION = 6
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
   struct timespec start_time ;
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
};
typedef long ptrdiff_t;
enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    c_quoting_style = 3,
    escape_quoting_style = 4,
    locale_quoting_style = 5,
    clocale_quoting_style = 6
} ;
struct quoting_options;
struct I_ring {
   int ir_data[4] ;
   int ir_default_val ;
   unsigned int ir_front ;
   unsigned int ir_back ;
   _Bool ir_empty ;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
struct hash_table;
struct hash_table;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_38 {
   struct hash_table *ht ;
   struct cycle_check_state *state ;
};
struct __anonstruct_FTS_37 {
   struct _ftsent *fts_cur ;
   struct _ftsent *fts_child ;
   struct _ftsent **fts_array ;
   dev_t fts_dev ;
   char *fts_path ;
   int fts_rfd ;
   int fts_cwd_fd ;
   size_t fts_pathlen ;
   size_t fts_nitems ;
   int (*fts_compar)(struct _ftsent  const  ** , struct _ftsent  const  ** ) ;
   int fts_options ;
   union __anonunion_fts_cycle_38 fts_cycle ;
   I_ring fts_fd_ring ;
};
typedef struct __anonstruct_FTS_37 FTS;
struct _ftsent {
   struct _ftsent *fts_cycle ;
   struct _ftsent *fts_parent ;
   struct _ftsent *fts_link ;
   long fts_number ;
   void *fts_pointer ;
   char *fts_accpath ;
   char *fts_path ;
   int fts_errno ;
   int fts_symfd ;
   size_t fts_pathlen ;
   FTS *fts_fts ;
   ptrdiff_t fts_level ;
   size_t fts_namelen ;
   unsigned short fts_info ;
   unsigned short fts_flags ;
   unsigned short fts_instr ;
   struct stat fts_statp[1] ;
   char fts_name[1] ;
};
typedef struct _ftsent FTSENT;
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
extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  lstat(char const   * __restrict  __path , struct stat * __restrict  __statbuf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
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
__inline extern size_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fread)(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
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
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) int fchdir(int __fd )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getcwd)(char *__buf , size_t __size )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__warn_unused_result__, __nonnull__(1), __gnu_inline__, __deprecated__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) getwd)(char *__buf )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__, __deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) confstr)(int __name , char *__buf , size_t __len )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) getgroups)(int __size , __gid_t *__list )  __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) ttyname_r)(int __fd , char *__buf , size_t __buflen )  __attribute__((__warn_unused_result__, __nonnull__(2), __leaf__)) ;
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
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned long __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned long __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) long __strtol_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern long __attribute__((__leaf__, __gnu_inline__))  strtoimax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ long tmp ;

  {
  tmp = __strtol_internal(nptr, endptr, base, 0);
  return ((long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned long __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern unsigned long __attribute__((__leaf__, __gnu_inline__))  strtoumax(char const   * __restrict  nptr , char ** __restrict  endptr , int base ) 
{ unsigned long tmp ;

  {
  tmp = __strtoul_internal(nptr, endptr, base, 0);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) long __wcstol_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern long __attribute__((__leaf__, __gnu_inline__))  wcstoimax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ long tmp ;

  {
  tmp = __wcstol_internal(nptr, endptr, base, 0);
  return ((long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned long __wcstoul_internal(__gwchar_t const   * __restrict  __nptr , __gwchar_t ** __restrict  __endptr , int __base , int __group )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) unsigned long __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base )  __attribute__((__leaf__)) ;
__inline extern unsigned long __attribute__((__leaf__, __gnu_inline__))  wcstoumax(__gwchar_t const   * __restrict  nptr , __gwchar_t ** __restrict  endptr , int base ) 
{ unsigned long tmp ;

  {
  tmp = __wcstoul_internal(nptr, endptr, base, 0);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern int debug_stat(char const   *file , struct stat *bufp ) ;
boolean is_fts_enabled(int *fts_options ) ;
int get_current_dirfd(void) ;
extern void error(int status , int errnum , char *message  , ...) ;
extern char *xgetcwd(void) ;
extern void cleanup(void) ;
extern boolean pred_execdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_okdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern struct predicate *build_expression_tree(int argc , char **argv , int end_of_leading_options ) ;
extern struct predicate *get_eval_tree(void) ;
extern void complete_pending_execdirs(int dirfd ) ;
extern int process_leading_options(int argc , char **argv ) ;
extern void set_option_defaults(struct options *p ) ;
extern int following_links(void) ;
extern int digest_mode(mode_t mode , char const   *pathname , char const   *name , struct stat *pstat , boolean leaf ) ;
extern boolean looks_like_expression(char const   *arg , boolean leading ) ;
extern struct options options ;
extern struct state state ;
extern char const   *starting_dir ;
extern int starting_desc ;
extern char *program_name ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
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
extern void close_stdout(void) ;
extern char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
extern int fts_close(FTS * ) ;
extern FTS *fts_open(char * const  * , int  , int (*)(FTSENT const   ** , FTSENT const   ** ) ) ;
extern FTSENT *fts_read(FTS * ) ;
extern int fts_set(FTS * , FTSENT * , int  ) ;
extern char *setlocale(int __category , char const   *__locale ) ;
extern char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__format_arg__(2))) ;
extern char *textdomain(char const   *__domainname ) ;
extern char *bindtextdomain(char const   *__domainname , char const   *__dirname ) ;
static void set_close_on_exec(int fd ) 
{ int flags ;

  {
  flags = fcntl(fd, 1);
  if (flags >= 0) {
    flags |= 1;
    fcntl(fd, 2, flags);
  } else {

  }
  return;
}
}
static int ftsoptions  =    264;
static int prev_depth  =    (-0x7FFFFFFF-1);
static int curr_fd  =    -1;
int get_current_dirfd(void) 
{ 

  {
  if (ftsoptions & 512) {
    if (! (curr_fd != -1)) {
      __assert_fail("curr_fd != -1", "ftsfind.c", 108U, "get_current_dirfd");
    } else {

    }
    if (! (-100 == curr_fd)) {
      if (! (curr_fd >= 0)) {
        __assert_fail("(-100 == curr_fd) || (curr_fd >= 0)", "ftsfind.c", 109U, "get_current_dirfd");
      } else {

      }
    } else {

    }
    if (-100 == curr_fd) {
      return (starting_desc);
    } else {
      return (curr_fd);
    }
  } else {
    return (-100);
  }
}
}
static void left_dir(void) 
{ 

  {
  if (ftsoptions & 512) {
    if (curr_fd >= 0) {
      close(curr_fd);
      curr_fd = -1;
    } else {

    }
  } else {

  }
  return;
}
}
static void inside_dir(int dirfd___0 ) 
{ 

  {
  if (ftsoptions & 512) {
    if (! (dirfd___0 == -100)) {
      if (! (dirfd___0 >= 0)) {
        __assert_fail("dirfd == -100 || dirfd >= 0", "ftsfind.c", 147U, "inside_dir");
      } else {

      }
    } else {

    }
    state.cwd_dir_fd = dirfd___0;
    if (curr_fd < 0) {
      if (-100 == dirfd___0) {
        curr_fd = -100;
      } else {
        if (dirfd___0 >= 0) {
          curr_fd = dup(dirfd___0);
          set_close_on_exec(curr_fd);
        } else {
          if (! (curr_fd >= 0)) {
            if (! (dirfd___0 >= 0)) {
              __assert_fail("curr_fd >= 0 || dirfd >= 0", "ftsfind.c", 166U, "inside_dir");
            } else {

            }
          } else {

          }
        }
      }
    } else {

    }
  } else {

  }
  return;
}
}
static void error_severity(int level ) 
{ 

  {
  if (state.exit_status < level) {
    state.exit_status = level;
  } else {

  }
  return;
}
}
static char buf[10]  ;
static char *get_fts_info_name(int info ) 
{ 

  {
  switch (info) {
  case 1: 
  return ((char *)"FTS_D");
  case 2: 
  return ((char *)"FTS_DC");
  case 3: 
  return ((char *)"FTS_DEFAULT");
  case 4: 
  return ((char *)"FTS_DNR");
  case 5: 
  return ((char *)"FTS_DOT");
  case 6: 
  return ((char *)"FTS_DP");
  case 7: 
  return ((char *)"FTS_ERR");
  case 8: 
  return ((char *)"FTS_F");
  case 9: 
  return ((char *)"FTS_INIT");
  case 10: 
  return ((char *)"FTS_NS");
  case 11: 
  return ((char *)"FTS_NSOK");
  case 12: 
  return ((char *)"FTS_SL");
  case 13: 
  return ((char *)"FTS_SLNONE");
  case 14: 
  return ((char *)"FTS_W");
  default: 
  sprintf((char */* __restrict  */)(buf), (char const   */* __restrict  */)"[%d]", info);
  return (buf);
  }
}
}
static void visit(FTS *p , FTSENT *ent , struct stat *pstat ) 
{ struct predicate *eval_tree ;
  int tmp ;

  {
  state.curdepth = (int )ent->fts_level;
  if ((int )ent->fts_info != 10) {
    if ((int )ent->fts_info != 11) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  state.have_stat = (_Bool )tmp;
  state.rel_pathname = ent->fts_accpath;
  state.cwd_dir_fd = p->fts_cwd_fd;
  eval_tree = get_eval_tree();
  (*(eval_tree->pred_func))(ent->fts_path, pstat, eval_tree);
  if (state.stop_at_current_level) {
    fts_set(p, ent, 4);
  } else {

  }
  return;
}
}
static char const   *partial_quotearg_n(int n , char *s , size_t len , enum quoting_style style ) 
{ char *tmp ;
  char saved ;
  char const   *result ;
  char *tmp___0 ;

  {
  if (0UL == len) {
    tmp = quotearg_n_style(n, style, "");
    return ((char const   *)tmp);
  } else {
    saved = *(s + len);
    *(s + len) = (char)0;
    tmp___0 = quotearg_n_style(n, style, (char const   *)s);
    result = (char const   *)tmp___0;
    *(s + len) = saved;
    return (result);
  }
}
}
static void issue_loop_warning(FTSENT *ent ) 
{ char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  if ((ent->fts_statp[0].st_mode & 61440U) == 40960U) {
    tmp = quotearg_n_style(0, (enum quoting_style )5, (char const   *)ent->fts_path);
    tmp___0 = dcgettext((char const   *)((void *)0), "Symbolic link %s is part of a loop in the directory hierarchy; we have already visited the directory to which it points.", 5);
    error(0, 0, tmp___0, tmp);
  } else {
    tmp___1 = partial_quotearg_n(1, (ent->fts_cycle)->fts_path, (ent->fts_cycle)->fts_pathlen, (enum quoting_style )5);
    tmp___2 = quotearg_n_style(0, (enum quoting_style )5, (char const   *)ent->fts_path);
    tmp___3 = dcgettext((char const   *)((void *)0), "Filesystem loop detected; %s is part of the same filesystem loop as %s.", 5);
    error(0, 0, tmp___3, tmp___2, tmp___1);
  }
  return;
}
}
static boolean symlink_loop(char const   *name ) 
{ struct stat stbuf ;
  int rv ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;

  {
  tmp___1 = following_links();
  if (tmp___1) {
    tmp = stat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)(& stbuf));
    rv = (int )tmp;
  } else {
    tmp___0 = lstat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)(& stbuf));
    rv = (int )tmp___0;
  }
  if (0 != rv) {
    tmp___2 = __errno_location();
    if (40 == *tmp___2) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
  } else {
    tmp___3 = 0;
  }
  return ((_Bool )tmp___3);
}
}
static int complete_execdirs_cb(void *context ) 
{ 

  {
  complete_pending_execdirs(-100);
  return (0);
}
}
static int show_outstanding_execdirs(FILE *fp ) 
{ int seen ;
  struct predicate *p ;
  char const   *pfx ;
  int i ;
  struct exec_val  const  *execp ;

  {
  if (options.debug_options & 32UL) {
    seen = 0;
    p = get_eval_tree();
    fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"Outstanding execdirs:");
    while (p) {
      if ((unsigned long )p->pred_func == (unsigned long )(& pred_execdir)) {
        pfx = "-execdir";
      } else {
        if ((unsigned long )p->pred_func == (unsigned long )(& pred_okdir)) {
          pfx = "-okdir";
        } else {
          pfx = (char const   *)((void *)0);
        }
      }
      if (pfx) {
        execp = (struct exec_val  const  *)(& p->args.exec_vec);
        seen ++;
        fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%s ", pfx);
        if (execp->multiple) {
          fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"multiple ");
        } else {

        }
        fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%d args: ", execp->state.cmd_argc);
        i = 0;
        while (i < (int )execp->state.cmd_argc) {
          fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%s ", *(execp->state.cmd_argv + i));
          i ++;
        }
        fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"\n");
      } else {

      }
      p = p->pred_next;
    }
    if (! seen) {
      fprintf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)" none\n");
    } else {

    }
  } else {

  }
  return (0);
}
}
extern int run_in_dir() ;
static void consider_visiting(FTS *p , FTSENT *ent ) 
{ struct stat statbuf ;
  mode_t mode ;
  int ignore ;
  int isdir ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  boolean tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  if (options.debug_options & 4UL) {
    tmp = quotearg_n_style(1, (enum quoting_style )5, (char const   *)ent->fts_accpath);
    tmp___0 = quotearg_n_style(0, (enum quoting_style )5, (char const   *)ent->fts_path);
    tmp___1 = get_fts_info_name((int )ent->fts_info);
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"consider_visiting: fts_info=%-6s, fts_level=%2d, prev_depth=%d fts_path=%s, fts_accpath=%s\n", tmp___1, (int )ent->fts_level, prev_depth, tmp___0, tmp);
  } else {

  }
  if ((int )ent->fts_info == 6) {
    left_dir();
  } else {
    if (ent->fts_level > (long )prev_depth) {
      left_dir();
    } else {
      if (ent->fts_level == 0L) {
        left_dir();
      } else {

      }
    }
  }
  inside_dir(p->fts_cwd_fd);
  prev_depth = (int )ent->fts_level;
  if ((int )ent->fts_info == 7) {
    error(0, ent->fts_errno, ent->fts_path);
    error_severity(1);
    return;
  } else {
    if ((int )ent->fts_info == 4) {
      error(0, ent->fts_errno, ent->fts_path);
      error_severity(1);
      return;
    } else {
      if ((int )ent->fts_info == 2) {
        issue_loop_warning(ent);
        error_severity(1);
        return;
      } else {
        if ((int )ent->fts_info == 13) {
          tmp___2 = symlink_loop((char const   *)ent->fts_accpath);
          if (tmp___2) {
            error(0, 40, ent->fts_path);
            error_severity(1);
            return;
          } else {

          }
        } else {

        }
      }
    }
  }
  if ((int )ent->fts_info == 11) {
    if (! (! state.have_stat)) {
      __assert_fail("!state.have_stat", "ftsfind.c", 451U, "consider_visiting");
    } else {

    }
    if (! (! state.have_type)) {
      __assert_fail("!state.have_type", "ftsfind.c", 452U, "consider_visiting");
    } else {

    }
    mode = 0U;
    state.type = mode;
  } else {
    state.have_stat = (_Bool)1;
    state.have_type = (_Bool)1;
    statbuf = ent->fts_statp[0];
    mode = statbuf.st_mode;
    state.type = mode;
  }
  if (mode) {
    tmp___3 = digest_mode(mode, (char const   *)ent->fts_path, (char const   *)(ent->fts_name), & statbuf, (_Bool)0);
    if (! tmp___3) {
      return;
    } else {

    }
  } else {

  }
  ignore = 0;
  if ((statbuf.st_mode & 61440U) == 16384U) {
    tmp___4 = 1;
  } else {
    if (1 == (int )ent->fts_info) {
      tmp___4 = 1;
    } else {
      if (6 == (int )ent->fts_info) {
        tmp___4 = 1;
      } else {
        if (2 == (int )ent->fts_info) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      }
    }
  }
  isdir = tmp___4;
  if (isdir) {
    if ((int )ent->fts_info == 11) {
      fts_set(p, ent, 1);
      return;
    } else {

    }
  } else {

  }
  if (options.maxdepth >= 0) {
    if (ent->fts_level >= (long )options.maxdepth) {
      fts_set(p, ent, 4);
      if (ent->fts_level > (long )options.maxdepth) {
        ignore = 1;
      } else {

      }
    } else {

    }
  } else {

  }
  if ((int )ent->fts_info == 1) {
    if (! options.do_dir_first) {
      ignore = 1;
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    if ((int )ent->fts_info == 6) {
      if (options.do_dir_first) {
        ignore = 1;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if (ent->fts_level < (long )options.mindepth) {
        ignore = 1;
      } else {

      }
    }
  }
  if (! ignore) {
    visit(p, ent, & statbuf);
  } else {

  }
  if (state.execdirs_outstanding) {
    show_outstanding_execdirs(stderr);
    run_in_dir(p->fts_cwd_fd, & complete_execdirs_cb);
  } else {

  }
  if ((int )ent->fts_info == 6) {
    state.stop_at_current_level = (_Bool)0;
  } else {

  }
  return;
}
}
static void find(char *arg ) 
{ char *arglist[2] ;
  FTS *p ;
  FTSENT *ent ;
  size_t tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;

  {
  tmp = strlen((char const   *)arg);
  state.starting_path_length = (int )tmp;
  inside_dir(-100);
  arglist[0] = arg;
  arglist[1] = (char *)((void *)0);
  switch ((int )options.symlink_handling) {
  case 1: 
  ftsoptions |= 3;
  break;
  case 2: 
  ftsoptions |= 17;
  break;
  case 0: 
  ftsoptions |= 16;
  break;
  }
  if (options.stay_on_filesystem) {
    ftsoptions |= 64;
  } else {

  }
  p = fts_open((char * const  *)(arglist), ftsoptions, (int (*)(FTSENT const   ** , FTSENT const   ** ))((void *)0));
  if ((unsigned long )((void *)0) == (unsigned long )p) {
    tmp___0 = quotearg_n_style(0, (enum quoting_style )5, (char const   *)arg);
    tmp___1 = dcgettext((char const   *)((void *)0), "cannot search %s", 5);
    tmp___2 = __errno_location();
    error(0, *tmp___2, tmp___1, tmp___0);
  } else {
    while (1) {
      ent = fts_read(p);
      if (! ((unsigned long )ent != (unsigned long )((void *)0))) {
        break;
      } else {

      }
      state.have_stat = (_Bool)0;
      state.have_type = (_Bool)0;
      state.type = 0U;
      consider_visiting(p, ent);
    }
    fts_close(p);
    p = (FTS *)((void *)0);
  }
  return;
}
}
static void process_all_startpoints(int argc , char **argv ) 
{ int i ;
  size_t tmp ;
  boolean tmp___0 ;
  char defaultpath[2] ;

  {
  i = 0;
  while (1) {
    if (i < argc) {
      tmp___0 = looks_like_expression((char const   *)*(argv + i), (_Bool)1);
      if (tmp___0) {
        break;
      } else {

      }
    } else {
      break;
    }
    tmp = strlen((char const   *)*(argv + i));
    state.starting_path_length = (int )tmp;
    find(*(argv + i));
    i ++;
  }
  if (i == 0) {
    defaultpath[0] = (char )'.';
    defaultpath[1] = (char )'\000';
    find(defaultpath);
  } else {

  }
  return;
}
}
int main(int argc , char **argv ) 
{ int end_of_leading_options ;
  struct predicate *eval_tree ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;

  {
  end_of_leading_options = 0;
  program_name = *(argv + 0);
  state.exit_status = 0;
  state.execdirs_outstanding = (_Bool)0;
  state.cwd_dir_fd = -100;
  set_option_defaults(& options);
  setlocale(6, "");
  bindtextdomain("findutils", "/usr/local/share/locale");
  textdomain("findutils");
  atexit(& close_stdout);
  end_of_leading_options = process_leading_options(argc, argv);
  if (options.debug_options & 2UL) {
    options.xstat = & debug_stat;
  } else {

  }
  eval_tree = build_expression_tree(argc, argv, end_of_leading_options);
  if (! options.open_nofollow_available) {

  } else {

  }
  tmp = open(".", 0);
  starting_desc = (int )tmp;
  if (0 <= starting_desc) {
    tmp___0 = fchdir(starting_desc);
    if (tmp___0 != 0) {
      close(starting_desc);
      starting_desc = -1;
    } else {

    }
  } else {

  }
  __repair_app_997__23: /* CIL Label */ 
  {
  if (starting_desc < 0) {
    tmp___1 = xgetcwd();
    starting_dir = (char const   *)tmp___1;
    if (! starting_dir) {
      tmp___2 = dcgettext((char const   *)((void *)0), "cannot get current directory", 5);
      tmp___3 = __errno_location();
      error(1, *tmp___3, tmp___2);
    } else {

    }
  } else {

  }
  eval_tree = build_expression_tree(argc, argv, end_of_leading_options);
  }
  process_all_startpoints(argc - end_of_leading_options, argv + end_of_leading_options);
  cleanup();
  return (state.exit_status);
}
}
boolean is_fts_enabled(int *fts_options ) 
{ 

  {
  *fts_options = (int )fts_options;
  return ((_Bool)1);
}
}
