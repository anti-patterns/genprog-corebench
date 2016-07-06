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
typedef long intmax_t;
typedef unsigned long uintmax_t;
typedef int __gwchar_t;
typedef unsigned long reg_syntax_t;
struct re_pattern_buffer {
   unsigned char *buffer ;
   unsigned long allocated ;
   unsigned long used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   char *translate ;
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
   mode_t val ;
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
   int cmd_argv_chars ;
   int cmd_initial_argv_chars ;
   void *usercontext ;
   int todo ;
};
struct buildcmd_control {
   int exit_if_size_exceeded ;
   long arg_max ;
   size_t rplen ;
   char *replace_pat ;
   int initial_argc ;
   int (*exec_callback)(struct buildcmd_control  const  * , struct buildcmd_state * ) ;
   long lines_per_exec ;
   long args_per_exec ;
};
struct exec_val {
   boolean multiple ;
   struct buildcmd_control ctl ;
   struct buildcmd_state state ;
   char **replace_vec ;
   int num_args ;
   boolean use_current_dir ;
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
struct predicate {
   boolean (*pred_func)(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
   char *p_name ;
   enum predicate_type p_type ;
   enum predicate_precedence p_prec ;
   boolean side_effects ;
   boolean no_default_print ;
   boolean need_stat ;
   boolean need_type ;
   union __anonunion_args_32 args ;
   struct predicate *pred_next ;
   struct predicate *pred_left ;
   struct predicate *pred_right ;
};
enum SymlinkOption {
    SYMLINK_NEVER_DEREF = 0,
    SYMLINK_ALWAYS_DEREF = 1,
    SYMLINK_DEREF_ARGSONLY = 2
} ;
typedef boolean (*PARSE_FUNC)(char **argv , int *arg_ptr );
struct options {
   boolean do_dir_first ;
   int maxdepth ;
   int mindepth ;
   boolean no_leaf_check ;
   boolean stay_on_filesystem ;
   boolean ignore_readdir_race ;
   boolean warnings ;
   time_t start_time ;
   time_t cur_day_start ;
   boolean full_days ;
   int output_block_size ;
   enum SymlinkOption symlink_handling ;
   int (*xstat)(char const   *name , struct stat *statbuf ) ;
   boolean open_nofollow_available ;
};
struct state {
   int curdepth ;
   boolean have_stat ;
   boolean have_type ;
   mode_t type ;
   char *rel_pathname ;
   int path_length ;
   boolean stop_at_current_level ;
   int exit_status ;
};
struct utsname {
   char sysname[65] ;
   char nodename[65] ;
   char release[65] ;
   char version[65] ;
   char machine[65] ;
   char domainname[65] ;
};
enum canonicalize_mode_t {
    CAN_EXISTING = 0,
    CAN_ALL_BUT_LAST = 1,
    CAN_MISSING = 2
} ;
typedef enum canonicalize_mode_t canonicalize_mode_t;
struct savedir_direntry {
   int flags ;
   char *name ;
   mode_t type_info ;
};
struct savedir_dirinfo {
   char *buffer ;
   size_t size ;
   struct savedir_direntry *entries ;
};
enum ChdirSymlinkHandling {
    SymlinkHandleDefault = 0,
    SymlinkFollowOk = 1
} ;
enum TraversalDirection {
    TraversingUp = 0,
    TraversingDown = 1
} ;
enum WdSanityCheckFatality {
    FATAL_IF_SANITY_CHECK_FAILS = 0,
    RETRY_IF_SANITY_CHECK_FAILS = 1,
    NON_FATAL_IF_SANITY_CHECK_FAILS = 2
} ;
enum SafeChdirStatus {
    SafeChdirOK = 0,
    SafeChdirFailSymlink = 1,
    SafeChdirFailNotDir = 2,
    SafeChdirFailStat = 3,
    SafeChdirFailWouldBeUnableToReturn = 4,
    SafeChdirFailChdirFailed = 5,
    SafeChdirFailNonexistent = 6
} ;
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
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__warn_unused_result__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd )  __attribute__((__warn_unused_result__, __leaf__)) ;
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
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer )  __attribute__((__leaf__)) ;
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
int optionl_stat(char const   *name , struct stat *p ) ;
int optionp_stat(char const   *name , struct stat *p ) ;
int optionh_stat(char const   *name , struct stat *p ) ;
int get_statinfo(char const   *pathname , char const   *name , struct stat *p ) ;
int get_info(char const   *pathname , char const   *name , struct stat *p , struct predicate *pred_ptr ) ;
int following_links(void) ;
extern void error(int status , int errnum , char *message  , ...) ;
extern char *xgetcwd(void) ;
void set_follow_state(enum SymlinkOption opt ) ;
void cleanup(void) ;
extern char *filesystem_type(struct stat  const  *statp ) ;
extern PARSE_FUNC find_parser(char *search_name ) ;
extern boolean parse_close(char **argv , int *arg_ptr ) ;
extern boolean parse_open(char **argv , int *arg_ptr ) ;
extern boolean parse_print(char **argv , int *arg_ptr ) ;
extern boolean pred_exec(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_execdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern boolean pred_okdir(char *pathname , struct stat *stat_buf , struct predicate *pred_ptr ) ;
extern int launch(struct buildcmd_control  const  *ctl , struct buildcmd_state *buildstate ) ;
extern struct predicate *get_expr(struct predicate **input , short prev_prec ) ;
extern boolean opt_expr(struct predicate **eval_treep ) ;
extern boolean mark_stat(struct predicate *tree ) ;
extern boolean mark_type(struct predicate *tree ) ;
extern void usage(char *msg ) ;
char *program_name  ;
struct predicate *predicates  ;
struct predicate *last_pred  ;
struct options options  ;
struct state state  ;
char const   *starting_dir ;
int starting_desc  ;
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
extern  __attribute__((__nothrow__)) int uname(struct utsname *__name )  __attribute__((__leaf__)) ;
extern void *xmalloc(size_t s ) ;
extern void *xrealloc(void *p , size_t s ) ;
extern char *canonicalize_filename_mode(char const   * , canonicalize_mode_t  ) ;
extern void close_stdout(void) ;
extern struct savedir_dirinfo *xsavedir(char const   *dir , int flags ) ;
extern void free_dirinfo(struct savedir_dirinfo *p ) ;
extern char *base_name(char const   *file ) ;
extern char *dir_name(char const   *file ) ;
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__leaf__, __format_arg__(2))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
static void process_top_path(char *pathname , mode_t mode ) ;
static int process_path(char *pathname , char *name , boolean leaf , char *parent , mode_t mode ) ;
static void process_dir(char *pathname , char *name , int pathlen , struct stat *statp , char *parent ) ;
static void complete_pending_execdirs(struct predicate *p ) ;
static void complete_pending_execs(struct predicate *p ) ;
static boolean default_prints(struct predicate *pred ) ;
static struct predicate *eval_tree  =    (struct predicate *)((void *)0);
char const   *starting_dir  =    ".";
struct stat starting_stat_buf  ;
int following_links(void) 
{ 

  {
  switch ((int )options.symlink_handling) {
  case 1: 
  return (1);
  case 2: 
  return (state.curdepth == 0);
  case 0: 
  default: ;
  return (0);
  }
}
}
static int fallback_stat(char const   *name , struct stat *p , int prev_rv ) 
{ int *tmp ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___0 ;

  {
  tmp = __errno_location();
  switch (*tmp) {
  case 2: 
  case 20: 
  tmp___0 = lstat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)p);
  return ((int )tmp___0);
  case 13: 
  case 5: 
  case 40: 
  case 36: 
  case 75: 
  default: ;
  return (prev_rv);
  }
}
}
int optionh_stat(char const   *name , struct stat *p ) 
{ int rv ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp ;
  int tmp___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___1 ;

  {
  if (0 == state.curdepth) {
    tmp = stat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)p);
    rv = (int )tmp;
    if (0 == rv) {
      return (0);
    } else {
      tmp___0 = fallback_stat(name, p, rv);
      return (tmp___0);
    }
  } else {
    tmp___1 = lstat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)p);
    return ((int )tmp___1);
  }
}
}
int optionl_stat(char const   *name , struct stat *p ) 
{ int rv ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp ;
  int tmp___0 ;

  {
  tmp = stat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)p);
  rv = (int )tmp;
  if (0 == rv) {
    return (0);
  } else {
    tmp___0 = fallback_stat(name, p, rv);
    return (tmp___0);
  }
}
}
int optionp_stat(char const   *name , struct stat *p ) 
{ int __attribute__((__leaf__, __gnu_inline__))  tmp ;

  {
  tmp = lstat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)p);
  return ((int )tmp);
}
}
void set_follow_state(enum SymlinkOption opt ) 
{ 

  {
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
  options.symlink_handling = opt;
  return;
}
}
void cleanup(void) 
{ 

  {
  if (eval_tree) {
    complete_pending_execs(eval_tree);
    complete_pending_execdirs(eval_tree);
  } else {

  }
  return;
}
}
int get_statinfo(char const   *pathname , char const   *name , struct stat *p ) 
{ int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  if (! state.have_stat) {
    tmp___1 = (*(options.xstat))(name, p);
    if (tmp___1 != 0) {
      if (! options.ignore_readdir_race) {
        tmp = __errno_location();
        error(0, *tmp, (char *)"%s", pathname);
        state.exit_status = 1;
      } else {
        tmp___0 = __errno_location();
        if (*tmp___0 != 2) {
          tmp = __errno_location();
          error(0, *tmp, (char *)"%s", pathname);
          state.exit_status = 1;
        } else {

        }
      }
      return (-1);
    } else {

    }
  } else {

  }
  state.have_stat = (_Bool)1;
  state.have_type = (_Bool)1;
  state.type = p->st_mode;
  return (0);
}
}
int get_info(char const   *pathname , char const   *name , struct stat *p , struct predicate *pred_ptr ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (pred_ptr->need_stat) {
    tmp = get_statinfo(pathname, (char const   *)state.rel_pathname, p);
    return (tmp);
  } else {

  }
  if (pred_ptr->need_type) {
    if (0 == (int )state.have_type) {
      tmp___0 = get_statinfo(pathname, (char const   *)state.rel_pathname, p);
      return (tmp___0);
    } else {

    }
  } else {

  }
  return (0);
}
}
static boolean check_nofollow(void) 
{ struct utsname uts ;
  float release ;
  double __attribute__((__leaf__, __gnu_inline__))  tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___1 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___8 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  tmp___14 = uname(& uts);
  if (0 == tmp___14) {
    tmp = atof((char const   *)(uts.release));
    release = (float )tmp;
    if (0) {
      __s1_len___0 = __builtin_strlen("Linux");
      __s2_len___0 = __builtin_strlen((char const   *)(uts.sysname));
      if (! ((unsigned long )((void const   *)("Linux" + 1)) - (unsigned long )((void const   *)"Linux") == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2: 
          if (! ((unsigned long )((void const   *)(uts.sysname + 1)) - (unsigned long )((void const   *)(uts.sysname)) == 1UL)) {
            tmp___13 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___13 = 1;
            } else {
              tmp___13 = 0;
            }
          }
        } else {
          tmp___13 = 0;
        }
      }
      if (tmp___13) {
        tmp___8 = __builtin_strcmp("Linux", (char const   *)(uts.sysname));
        tmp___12 = tmp___8;
      } else {
        tmp___11 = __builtin_strcmp("Linux", (char const   *)(uts.sysname));
        tmp___12 = tmp___11;
      }
    } else {
      tmp___11 = __builtin_strcmp("Linux", (char const   *)(uts.sysname));
      tmp___12 = tmp___11;
    }
    if (0 == tmp___12) {
      return ((_Bool )((double )release >= 2.2));
    } else {
      if (0) {
        __s1_len = __builtin_strlen("FreeBSD");
        __s2_len = __builtin_strlen((char const   *)(uts.sysname));
        if (! ((unsigned long )((void const   *)("FreeBSD" + 1)) - (unsigned long )((void const   *)"FreeBSD") == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0: 
            if (! ((unsigned long )((void const   *)(uts.sysname + 1)) - (unsigned long )((void const   *)(uts.sysname)) == 1UL)) {
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
          tmp___1 = __builtin_strcmp("FreeBSD", (char const   *)(uts.sysname));
          tmp___5 = tmp___1;
        } else {
          tmp___4 = __builtin_strcmp("FreeBSD", (char const   *)(uts.sysname));
          tmp___5 = tmp___4;
        }
      } else {
        tmp___4 = __builtin_strcmp("FreeBSD", (char const   *)(uts.sysname));
        tmp___5 = tmp___4;
      }
      if (0 == tmp___5) {
        return ((_Bool )((double )release >= 3.1));
      } else {

      }
    }
  } else {

  }
  return ((_Bool)1);
}
}
int main(int argc , char **argv ) 
{ int i ;
  boolean (*parse_function)(char **argv , int *arg_ptr ) ;
  struct predicate *cur_pred ;
  char *predicate_name ;
  int end_of_leading_options ;
  int tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___4 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___11 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___18 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___25 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  char *tmp___32 ;
  char *tmp___33 ;
  char *tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  boolean tmp___39 ;
  boolean tmp___40 ;
  char *tmp___41 ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___42 ;
  int tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  int *tmp___46 ;
  char *tmp___47 ;
  int *tmp___48 ;
  int tmp___49 ;
  char *tmp___51 ;
  char defaultpath[2] ;

  {
  end_of_leading_options = 0;
  program_name = *(argv + 0);
  options.open_nofollow_available = check_nofollow();
  setlocale(6, "");
  bindtextdomain("findutils", "/usr/local/share/locale");
  textdomain("findutils");
  atexit(& close_stdout);
  tmp = isatty(0);
  if (tmp) {
    options.warnings = (_Bool)1;
  } else {
    options.warnings = (_Bool)0;
  }
  predicates = (struct predicate *)((void *)0);
  last_pred = (struct predicate *)((void *)0);
  options.do_dir_first = (_Bool)1;
  options.mindepth = -1;
  options.maxdepth = options.mindepth;
  options.start_time = time((time_t *)((void *)0));
  options.cur_day_start = options.start_time - 86400L;
  options.full_days = (_Bool)0;
  options.stay_on_filesystem = (_Bool)0;
  options.ignore_readdir_race = (_Bool)0;
  state.exit_status = 0;
  tmp___0 = getenv("POSIXLY_CORRECT");
  if (tmp___0) {
    options.output_block_size = 512;
  } else {
    options.output_block_size = 1024;
  }
  tmp___2 = getenv("FIND_BLOCK_SIZE");
  if (tmp___2) {
    tmp___1 = dcgettext((char const   *)((void *)0), "The environment variable FIND_BLOCK_SIZE is not supported, the only thing that affects the block size is the POSIXLY_CORRECT environment variable", 5);
    error(1, 0, tmp___1);
  } else {

  }
  options.no_leaf_check = (_Bool)0;
  set_follow_state((enum SymlinkOption )0);
  i = 1;
  while (1) {
    end_of_leading_options = i;
    if (! (end_of_leading_options < argc)) {
      break;
    } else {

    }
    if (0) {
      __s1_len___2 = __builtin_strlen("-H");
      __s2_len___2 = __builtin_strlen((char const   *)*(argv + i));
      if (! ((unsigned long )((void const   *)("-H" + 1)) - (unsigned long )((void const   *)"-H") == 1UL)) {
        goto _L___6;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___6: 
          if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
            tmp___30 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
              tmp___30 = 1;
            } else {
              tmp___30 = 0;
            }
          }
        } else {
          tmp___30 = 0;
        }
      }
      if (tmp___30) {
        tmp___25 = __builtin_strcmp("-H", (char const   *)*(argv + i));
        tmp___29 = tmp___25;
      } else {
        tmp___28 = __builtin_strcmp("-H", (char const   *)*(argv + i));
        tmp___29 = tmp___28;
      }
    } else {
      tmp___28 = __builtin_strcmp("-H", (char const   *)*(argv + i));
      tmp___29 = tmp___28;
    }
    if (0 == tmp___29) {
      set_follow_state((enum SymlinkOption )2);
    } else {
      if (0) {
        __s1_len___1 = __builtin_strlen("-L");
        __s2_len___1 = __builtin_strlen((char const   *)*(argv + i));
        if (! ((unsigned long )((void const   *)("-L" + 1)) - (unsigned long )((void const   *)"-L") == 1UL)) {
          goto _L___4;
        } else {
          if (__s1_len___1 >= 4UL) {
            _L___4: 
            if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
              tmp___23 = 1;
            } else {
              if (__s2_len___1 >= 4UL) {
                tmp___23 = 1;
              } else {
                tmp___23 = 0;
              }
            }
          } else {
            tmp___23 = 0;
          }
        }
        if (tmp___23) {
          tmp___18 = __builtin_strcmp("-L", (char const   *)*(argv + i));
          tmp___22 = tmp___18;
        } else {
          tmp___21 = __builtin_strcmp("-L", (char const   *)*(argv + i));
          tmp___22 = tmp___21;
        }
      } else {
        tmp___21 = __builtin_strcmp("-L", (char const   *)*(argv + i));
        tmp___22 = tmp___21;
      }
      if (0 == tmp___22) {
        set_follow_state((enum SymlinkOption )1);
      } else {
        if (0) {
          __s1_len___0 = __builtin_strlen("-P");
          __s2_len___0 = __builtin_strlen((char const   *)*(argv + i));
          if (! ((unsigned long )((void const   *)("-P" + 1)) - (unsigned long )((void const   *)"-P") == 1UL)) {
            goto _L___2;
          } else {
            if (__s1_len___0 >= 4UL) {
              _L___2: 
              if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                tmp___16 = 1;
              } else {
                if (__s2_len___0 >= 4UL) {
                  tmp___16 = 1;
                } else {
                  tmp___16 = 0;
                }
              }
            } else {
              tmp___16 = 0;
            }
          }
          if (tmp___16) {
            tmp___11 = __builtin_strcmp("-P", (char const   *)*(argv + i));
            tmp___15 = tmp___11;
          } else {
            tmp___14 = __builtin_strcmp("-P", (char const   *)*(argv + i));
            tmp___15 = tmp___14;
          }
        } else {
          tmp___14 = __builtin_strcmp("-P", (char const   *)*(argv + i));
          tmp___15 = tmp___14;
        }
        if (0 == tmp___15) {
          set_follow_state((enum SymlinkOption )0);
        } else {
          if (0) {
            __s1_len = __builtin_strlen("--");
            __s2_len = __builtin_strlen((char const   *)*(argv + i));
            if (! ((unsigned long )((void const   *)("--" + 1)) - (unsigned long )((void const   *)"--") == 1UL)) {
              goto _L___0;
            } else {
              if (__s1_len >= 4UL) {
                _L___0: 
                if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
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
              tmp___4 = __builtin_strcmp("--", (char const   *)*(argv + i));
              tmp___8 = tmp___4;
            } else {
              tmp___7 = __builtin_strcmp("--", (char const   *)*(argv + i));
              tmp___8 = tmp___7;
            }
          } else {
            tmp___7 = __builtin_strcmp("--", (char const   *)*(argv + i));
            tmp___8 = tmp___7;
          }
          if (0 == tmp___8) {
            end_of_leading_options = i + 1;
            break;
          } else {
            end_of_leading_options = i;
            break;
          }
        }
      }
    }
    i ++;
  }
  i = end_of_leading_options;
  while (1) {
    if (i < argc) {
      tmp___32 = __builtin_strchr((char *)"-!(),", (int )*(*(argv + i) + 0));
      if (! ((unsigned long )tmp___32 == (unsigned long )((void *)0))) {
        break;
      } else {

      }
    } else {
      break;
    }
    i ++;
  }
  parse_open(argv, & argc);
  while (i < argc) {
    tmp___35 = __builtin_strchr((char *)"-!(),", (int )*(*(argv + i) + 0));
    if ((unsigned long )tmp___35 == (unsigned long )((void *)0)) {
      tmp___33 = dcgettext((char const   *)((void *)0), "paths must precede expression", 5);
      usage(tmp___33);
    } else {

    }
    predicate_name = *(argv + i);
    parse_function = find_parser(predicate_name);
    if ((unsigned long )parse_function == (unsigned long )((void *)0)) {
      tmp___36 = dcgettext((char const   *)((void *)0), "invalid predicate `%s\'", 5);
      error(1, 0, tmp___36, predicate_name);
    } else {

    }
    i ++;
    tmp___39 = (*parse_function)(argv, & i);
    if (! tmp___39) {
      if ((unsigned long )*(argv + i) == (unsigned long )((void *)0)) {
        tmp___37 = dcgettext((char const   *)((void *)0), "missing argument to `%s\'", 5);
        error(1, 0, tmp___37, predicate_name);
      } else {
        tmp___38 = dcgettext((char const   *)((void *)0), "invalid argument `%s\' to `%s\'", 5);
        error(1, 0, tmp___38, *(argv + i), predicate_name);
      }
    } else {

    }
  }
  if ((unsigned long )predicates->pred_next == (unsigned long )((void *)0)) {
    cur_pred = predicates;
    last_pred = predicates->pred_next;
    predicates = last_pred;
    free((void *)((char *)cur_pred));
    parse_print(argv, & argc);
  } else {
    tmp___40 = default_prints(predicates->pred_next);
    if (tmp___40) {
      parse_close(argv, & argc);
      parse_print(argv, & argc);
    } else {
      cur_pred = predicates;
      predicates = predicates->pred_next;
      free((void *)((char *)cur_pred));
    }
  }
  cur_pred = predicates;
  eval_tree = get_expr(& cur_pred, (short)0);
  if ((unsigned long )cur_pred != (unsigned long )((void *)0)) {
    tmp___41 = dcgettext((char const   *)((void *)0), "unexpected extra predicate", 5);
    error(1, 0, tmp___41);
  } else {

  }
  opt_expr(& eval_tree);
  mark_stat(eval_tree);
  mark_type(eval_tree);
  if (! options.open_nofollow_available) {

  } else {

  }
  tmp___42 = open(".", 0);
  starting_desc = (int )tmp___42;
  if (0 <= starting_desc) {
    tmp___43 = fchdir(starting_desc);
    if (tmp___43 != 0) {
      close(starting_desc);
      starting_desc = -1;
    } else {

    }
  } else {

  }
  if (starting_desc < 0) {
    tmp___44 = xgetcwd();
    starting_dir = (char const   *)tmp___44;
    if (! starting_dir) {
      tmp___45 = dcgettext((char const   *)((void *)0), "cannot get current directory", 5);
      tmp___46 = __errno_location();
      error(1, *tmp___46, tmp___45);
    } else {

    }
  } else {

  }
  tmp___49 = (*(options.xstat))(".", & starting_stat_buf);
  if (tmp___49 != 0) {
    tmp___47 = dcgettext((char const   *)((void *)0), "cannot get current directory", 5);
    tmp___48 = __errno_location();
    error(1, *tmp___48, tmp___47);
  } else {

  }
  i = end_of_leading_options;
  while (1) {
    if (i < argc) {
      tmp___51 = __builtin_strchr((char *)"-!(),", (int )*(*(argv + i) + 0));
      if (! ((unsigned long )tmp___51 == (unsigned long )((void *)0))) {
        break;
      } else {

      }
    } else {
      break;
    }
    process_top_path(*(argv + i), 0U);
    i ++;
  }
  if (i == end_of_leading_options) {
    defaultpath[0] = (char )'.';
    defaultpath[1] = (char )'\000';
    process_top_path(defaultpath, 0U);
  } else {

  }
  cleanup();
  return (state.exit_status);
}
}
static char *specific_dirname(char const   *dir ) 
{ char dirbuf[1024] ;
  char *tmp___4 ;
  char *tmp___10 ;
  char __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  * __attribute__((__leaf__)) tmp___11 ;
  char *result ;
  char *tmp___12 ;
  char *tmp___18 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___20 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;

  {
  if (0) {
    __s1_len = __builtin_strlen(".");
    __s2_len = __builtin_strlen(dir);
    if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0: 
        if (! ((unsigned long )((void const   *)(dir + 1)) - (unsigned long )((void const   *)dir) == 1UL)) {
          tmp___25 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___25 = 1;
          } else {
            tmp___25 = 0;
          }
        }
      } else {
        tmp___25 = 0;
      }
    }
    if (tmp___25) {
      tmp___20 = __builtin_strcmp(".", dir);
      tmp___24 = tmp___20;
    } else {
      tmp___23 = __builtin_strcmp(".", dir);
      tmp___24 = tmp___23;
    }
  } else {
    tmp___23 = __builtin_strcmp(".", dir);
    tmp___24 = tmp___23;
  }
  if (0 == tmp___24) {
    tmp___11 = getcwd(dirbuf, sizeof(dirbuf));
    if ((unsigned long )((void *)0) != (unsigned long )tmp___11) {
      tmp___4 = __strdup((char const   *)(dirbuf));
      return (tmp___4);
    } else {
      tmp___10 = __strdup(dir);
      return (tmp___10);
    }
  } else {
    tmp___12 = canonicalize_filename_mode(dir, (enum canonicalize_mode_t )0);
    result = tmp___12;
    if ((unsigned long )((void *)0) == (unsigned long )result) {
      tmp___18 = __strdup(dir);
      return (tmp___18);
    } else {
      return (result);
    }
  }
}
}
static int fs_likely_to_be_automounted(char const   *fs ) 
{ size_t __s1_len ;
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
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___14 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;

  {
  if (0) {
    __s1_len = __builtin_strlen(fs);
    __s2_len = __builtin_strlen("nfs");
    if (! ((unsigned long )((void const   *)(fs + 1)) - (unsigned long )((void const   *)fs) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0: 
        if (! ((unsigned long )((void const   *)("nfs" + 1)) - (unsigned long )((void const   *)"nfs") == 1UL)) {
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
      tmp___0 = __builtin_strcmp(fs, "nfs");
      tmp___4 = tmp___0;
    } else {
      tmp___3 = __builtin_strcmp(fs, "nfs");
      tmp___4 = tmp___3;
    }
  } else {
    tmp___3 = __builtin_strcmp(fs, "nfs");
    tmp___4 = tmp___3;
  }
  if (0 == tmp___4) {
    tmp___20 = 1;
  } else {
    if (0) {
      __s1_len___0 = __builtin_strlen(fs);
      __s2_len___0 = __builtin_strlen("autofs");
      if (! ((unsigned long )((void const   *)(fs + 1)) - (unsigned long )((void const   *)fs) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2: 
          if (! ((unsigned long )((void const   *)("autofs" + 1)) - (unsigned long )((void const   *)"autofs") == 1UL)) {
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
        tmp___7 = __builtin_strcmp(fs, "autofs");
        tmp___11 = tmp___7;
      } else {
        tmp___10 = __builtin_strcmp(fs, "autofs");
        tmp___11 = tmp___10;
      }
    } else {
      tmp___10 = __builtin_strcmp(fs, "autofs");
      tmp___11 = tmp___10;
    }
    if (0 == tmp___11) {
      tmp___20 = 1;
    } else {
      if (0) {
        __s1_len___1 = __builtin_strlen(fs);
        __s2_len___1 = __builtin_strlen("subfs");
        if (! ((unsigned long )((void const   *)(fs + 1)) - (unsigned long )((void const   *)fs) == 1UL)) {
          goto _L___4;
        } else {
          if (__s1_len___1 >= 4UL) {
            _L___4: 
            if (! ((unsigned long )((void const   *)("subfs" + 1)) - (unsigned long )((void const   *)"subfs") == 1UL)) {
              tmp___19 = 1;
            } else {
              if (__s2_len___1 >= 4UL) {
                tmp___19 = 1;
              } else {
                tmp___19 = 0;
              }
            }
          } else {
            tmp___19 = 0;
          }
        }
        if (tmp___19) {
          tmp___14 = __builtin_strcmp(fs, "subfs");
          tmp___18 = tmp___14;
        } else {
          tmp___17 = __builtin_strcmp(fs, "subfs");
          tmp___18 = tmp___17;
        }
      } else {
        tmp___17 = __builtin_strcmp(fs, "subfs");
        tmp___18 = tmp___17;
      }
      if (0 == tmp___18) {
        tmp___20 = 1;
      } else {
        tmp___20 = 0;
      }
    }
  }
  return (tmp___20);
}
}
static boolean wd_sanity_check(char const   *thing_to_stat , char const   *progname , char const   *what , dev_t old_dev , ino_t old_ino , struct stat *newinfo , int parent , int line_no , enum TraversalDirection direction , enum WdSanityCheckFatality isfatal , boolean *changed ) 
{ char const   *fstype ;
  char *specific_what ;
  int silent ;
  int *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int tmp___8 ;

  {
  specific_what = (char *)((void *)0);
  silent = 0;
  *changed = (_Bool)0;
  tmp___0 = (*(options.xstat))(".", newinfo);
  if (tmp___0 != 0) {
    tmp = __errno_location();
    error(1, *tmp, (char *)"%s", thing_to_stat);
  } else {

  }
  if (old_dev != newinfo->st_dev) {
    *changed = (_Bool)1;
    specific_what = specific_dirname(what);
    tmp___1 = filesystem_type((struct stat  const  *)newinfo);
    fstype = (char const   *)tmp___1;
    silent = fs_likely_to_be_automounted(fstype);
    if (1U == (unsigned int )direction) {
      isfatal = (enum WdSanityCheckFatality )1;
    } else {

    }
    switch ((int )isfatal) {
    case 0: 
    tmp___2 = filesystem_type((struct stat  const  *)newinfo);
    fstype = (char const   *)tmp___2;
    if (parent) {
      tmp___3 = "/..";
    } else {
      tmp___3 = "";
    }
    tmp___4 = dcgettext((char const   *)((void *)0), "%s%s changed during execution of %s (old device number %ld, new device number %ld, filesystem type is %s) [ref %ld]", 5);
    error(1, 0, tmp___4, specific_what, tmp___3, progname, (long )old_dev, (long )newinfo->st_dev, fstype, line_no);
    return ((_Bool)0);
    case 2: 
    free((void *)specific_what);
    return ((_Bool)1);
    case 1: 
    return ((_Bool)0);
    }
  } else {

  }
  if (old_ino != newinfo->st_ino) {
    *changed = (_Bool)1;
    specific_what = specific_dirname(what);
    tmp___5 = filesystem_type((struct stat  const  *)newinfo);
    fstype = (char const   *)tmp___5;
    if (parent) {
      tmp___6 = "/..";
    } else {
      tmp___6 = "";
    }
    tmp___7 = dcgettext((char const   *)((void *)0), "%s%s changed during execution of %s (old inode number %ld, new inode number %ld, filesystem type is %s) [ref %ld]", 5);
    if ((unsigned int )isfatal == 0U) {
      tmp___8 = 1;
    } else {
      tmp___8 = 0;
    }
    error(tmp___8, 0, tmp___7, specific_what, tmp___6, progname, (long )old_ino, (long )newinfo->st_ino, fstype, line_no);
    free((void *)specific_what);
    return ((_Bool)0);
  } else {

  }
  return ((_Bool)1);
}
}
static enum SafeChdirStatus safely_chdir_lstat(char const   *dest , enum TraversalDirection direction , struct stat *statbuf_dest , enum ChdirSymlinkHandling symlink_follow_option ) 
{ struct stat statbuf_arrived ;
  int rv ;
  int dotfd ;
  int saved_errno ;
  boolean rv_set ;
  int tries ;
  enum WdSanityCheckFatality isfatal ;
  int *tmp ;
  int tmp___0 ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___1 ;
  int *tmp___2 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___3 ;
  int tmp___4 ;
  boolean changed ;
  int *tmp___5 ;
  int tmp___6 ;
  boolean tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int tmp___10 ;
  int *tmp___11 ;
  int tmp___12 ;
  int *tmp___13 ;

  {
  dotfd = -1;
  rv_set = (_Bool)0;
  tries = 0;
  isfatal = (enum WdSanityCheckFatality )1;
  tmp = __errno_location();
  tmp___0 = 0;
  *tmp = tmp___0;
  saved_errno = tmp___0;
  tmp___1 = open(".", 0);
  dotfd = (int )tmp___1;
  retry: 
  tries ++;
  if (dotfd >= 0) {
    tmp___12 = (*(options.xstat))(dest, statbuf_dest);
    if (0 == tmp___12) {
      tmp___4 = following_links();
      if (! tmp___4) {
        if ((statbuf_dest->st_mode & 61440U) == 40960U) {
          if ((unsigned int )symlink_follow_option == 1U) {
            tmp___3 = stat((char const   */* __restrict  */)dest, (struct stat */* __restrict  */)statbuf_dest);
            if (0 != (int )tmp___3) {
              rv = 6;
              rv_set = (_Bool)1;
              tmp___2 = __errno_location();
              saved_errno = *tmp___2;
              goto fail;
            } else {

            }
          } else {
            rv = 1;
            rv_set = (_Bool)1;
            saved_errno = 0;
            goto fail;
          }
        } else {

        }
      } else {

      }
      if (! ((statbuf_dest->st_mode & 61440U) == 16384U)) {
        rv = 2;
        rv_set = (_Bool)1;
        saved_errno = 0;
        goto fail;
      } else {

      }
      tmp___10 = chdir(dest);
      if (0 == tmp___10) {
        changed = (_Bool)0;
        tmp___7 = wd_sanity_check(".", (char const   *)program_name, ".", statbuf_dest->st_dev, statbuf_dest->st_ino, & statbuf_arrived, 0, 1061, direction, isfatal, & changed);
        if (! tmp___7) {
          if (1U == (unsigned int )isfatal) {
            tmp___6 = fchdir(dotfd);
            if (0 == tmp___6) {
              isfatal = (enum WdSanityCheckFatality )0;
              goto retry;
            } else {
              tmp___5 = __errno_location();
              error(1, *tmp___5, (char *)"failed to return to parent directory");
            }
          } else {
            rv = 6;
            rv_set = (_Bool)1;
            saved_errno = 0;
            goto fail;
          }
        } else {

        }
        close(dotfd);
        return ((enum SafeChdirStatus )0);
      } else {
        tmp___8 = __errno_location();
        saved_errno = *tmp___8;
        if (2 == saved_errno) {
          rv = 6;
          rv_set = (_Bool)1;
          if (options.ignore_readdir_race) {
            tmp___9 = __errno_location();
            *tmp___9 = 0;
          } else {

          }
        } else {
          if (20 == saved_errno) {
            saved_errno = 0;
            rv = 2;
            rv_set = (_Bool)1;
          } else {
            rv = 5;
            rv_set = (_Bool)1;
          }
        }
        goto fail;
      }
    } else {
      tmp___11 = __errno_location();
      saved_errno = *tmp___11;
      rv = 3;
      rv_set = (_Bool)1;
      if (2 == saved_errno) {
        saved_errno = 0;
      } else {
        if (0 == state.curdepth) {
          saved_errno = 0;
        } else {

        }
      }
      goto fail;
    }
  } else {
    rv = 4;
    rv_set = (_Bool)1;
    goto fail;
  }
  saved_errno = 0;
  fail: 
  if (saved_errno) {
    tmp___13 = __errno_location();
    *tmp___13 = saved_errno;
  } else {

  }
  if (dotfd >= 0) {
    close(dotfd);
    dotfd = -1;
  } else {

  }
  if (! rv_set) {
    __assert_fail("rv_set", "find.c", 1166U, "safely_chdir_lstat");
  } else {

  }
  return ((enum SafeChdirStatus )rv);
}
}
static enum SafeChdirStatus safely_chdir_nofollow(char const   *dest , enum TraversalDirection direction , struct stat *statbuf_dest , enum ChdirSymlinkHandling symlink_follow_option ) 
{ int extraflags ;
  int fd ;
  int tmp ;
  int *tmp___0 ;
  int __attribute__((__gnu_inline__, __artificial__))  tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int saved_errno ;
  int *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  extraflags = 0;
  switch ((int )symlink_follow_option) {
  case 1: 
  extraflags = 0;
  break;
  case 0: 
  tmp = following_links();
  if (tmp) {
    extraflags = 0;
  } else {
    extraflags = 131072;
  }
  break;
  }
  tmp___0 = __errno_location();
  *tmp___0 = 0;
  tmp___1 = open(dest, extraflags);
  fd = (int )tmp___1;
  if (fd < 0) {
    tmp___2 = __errno_location();
    switch (*tmp___2) {
    case 40: 
    return ((enum SafeChdirStatus )1);
    case 2: 
    return ((enum SafeChdirStatus )6);
    default: ;
    return ((enum SafeChdirStatus )5);
    }
  } else {

  }
  tmp___3 = __errno_location();
  *tmp___3 = 0;
  tmp___7 = fchdir(fd);
  if (0 == tmp___7) {
    close(fd);
    return ((enum SafeChdirStatus )0);
  } else {
    tmp___4 = __errno_location();
    saved_errno = *tmp___4;
    close(fd);
    tmp___5 = __errno_location();
    *tmp___5 = saved_errno;
    tmp___6 = __errno_location();
    switch (*tmp___6) {
    case 20: 
    return ((enum SafeChdirStatus )2);
    case 13: 
    case 9: 
    case 4: 
    case 5: 
    default: ;
    return ((enum SafeChdirStatus )5);
    }
  }
}
}
static enum SafeChdirStatus safely_chdir(char const   *dest , enum TraversalDirection direction , struct stat *statbuf_dest , enum ChdirSymlinkHandling symlink_follow_option ) 
{ enum SafeChdirStatus tmp ;
  enum SafeChdirStatus tmp___0 ;

  {
  complete_pending_execdirs(eval_tree);
  if (options.open_nofollow_available) {
    tmp = safely_chdir_nofollow(dest, direction, statbuf_dest, symlink_follow_option);
    return (tmp);
  } else {

  }
  tmp___0 = safely_chdir_lstat(dest, direction, statbuf_dest, symlink_follow_option);
  return (tmp___0);
}
}
static void chdir_back(void) 
{ struct stat stat_buf ;
  boolean dummy ;
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;

  {
  if (starting_desc < 0) {
    tmp___0 = chdir(starting_dir);
    if (tmp___0 != 0) {
      tmp = __errno_location();
      error(1, *tmp, (char *)"%s", starting_dir);
    } else {

    }
    wd_sanity_check(starting_dir, (char const   *)program_name, starting_dir, starting_stat_buf.st_dev, starting_stat_buf.st_ino, & stat_buf, 0, 1294, (enum TraversalDirection )0, (enum WdSanityCheckFatality )0, & dummy);
  } else {
    tmp___2 = fchdir(starting_desc);
    if (tmp___2 != 0) {
      tmp___1 = __errno_location();
      error(1, *tmp___1, (char *)"%s", starting_dir);
    } else {

    }
  }
  return;
}
}
static void at_top(char *pathname , mode_t mode , struct stat *pstat , void (*action)(char *pathname , char *basename , int mode , struct stat *pstat ) ) 
{ int dirchange ;
  char *parent_dir ;
  char *tmp ;
  char *base ;
  char *tmp___0 ;
  size_t tmp___1 ;
  enum TraversalDirection direction ;
  enum SafeChdirStatus chdir_status ;
  struct stat st ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___3 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  char const   *what ;
  char const   *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___13 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___20 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;

  {
  tmp = dir_name((char const   *)pathname);
  parent_dir = tmp;
  tmp___0 = base_name((char const   *)pathname);
  base = tmp___0;
  state.curdepth = 0;
  tmp___1 = strlen((char const   *)pathname);
  state.path_length = (int )tmp___1;
  if (0) {
    __s1_len___0 = __builtin_strlen((char const   *)pathname);
    __s2_len___0 = __builtin_strlen((char const   *)parent_dir);
    if (! ((unsigned long )((void const   *)(pathname + 1)) - (unsigned long )((void const   *)pathname) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2: 
        if (! ((unsigned long )((void const   *)(parent_dir + 1)) - (unsigned long )((void const   *)parent_dir) == 1UL)) {
          tmp___18 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___18 = 1;
          } else {
            tmp___18 = 0;
          }
        }
      } else {
        tmp___18 = 0;
      }
    }
    if (tmp___18) {
      tmp___13 = __builtin_strcmp((char const   *)pathname, (char const   *)parent_dir);
      tmp___17 = tmp___13;
    } else {
      tmp___16 = __builtin_strcmp((char const   *)pathname, (char const   *)parent_dir);
      tmp___17 = tmp___16;
    }
  } else {
    tmp___16 = __builtin_strcmp((char const   *)pathname, (char const   *)parent_dir);
    tmp___17 = tmp___16;
  }
  if (0 == tmp___17) {
    dirchange = 0;
    base = pathname;
  } else {
    if (0) {
      __s1_len___1 = __builtin_strlen((char const   *)parent_dir);
      __s2_len___1 = __builtin_strlen(".");
      if (! ((unsigned long )((void const   *)(parent_dir + 1)) - (unsigned long )((void const   *)parent_dir) == 1UL)) {
        goto _L___4;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___4: 
          if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
            tmp___25 = 1;
          } else {
            if (__s2_len___1 >= 4UL) {
              tmp___25 = 1;
            } else {
              tmp___25 = 0;
            }
          }
        } else {
          tmp___25 = 0;
        }
      }
      if (tmp___25) {
        tmp___20 = __builtin_strcmp((char const   *)parent_dir, ".");
        tmp___24 = tmp___20;
      } else {
        tmp___23 = __builtin_strcmp((char const   *)parent_dir, ".");
        tmp___24 = tmp___23;
      }
    } else {
      tmp___23 = __builtin_strcmp((char const   *)parent_dir, ".");
      tmp___24 = tmp___23;
    }
    if (0 == tmp___24) {
      dirchange = 0;
      base = pathname;
    } else {
      dirchange = 1;
      if (0) {
        __s1_len = __builtin_strlen((char const   *)base);
        __s2_len = __builtin_strlen("..");
        if (! ((unsigned long )((void const   *)(base + 1)) - (unsigned long )((void const   *)base) == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0: 
            if (! ((unsigned long )((void const   *)(".." + 1)) - (unsigned long )((void const   *)"..") == 1UL)) {
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
          tmp___3 = __builtin_strcmp((char const   *)base, "..");
          tmp___7 = tmp___3;
        } else {
          tmp___6 = __builtin_strcmp((char const   *)base, "..");
          tmp___7 = tmp___6;
        }
      } else {
        tmp___6 = __builtin_strcmp((char const   *)base, "..");
        tmp___7 = tmp___6;
      }
      if (0 == tmp___7) {
        direction = (enum TraversalDirection )0;
      } else {
        direction = (enum TraversalDirection )1;
      }
      chdir_status = safely_chdir((char const   *)parent_dir, direction, & st, (enum ChdirSymlinkHandling )1);
      if (0U != (unsigned int )chdir_status) {
        if (4U == (unsigned int )chdir_status) {
          tmp___9 = ".";
        } else {
          tmp___9 = (char const   *)parent_dir;
        }
        what = tmp___9;
        tmp___11 = __errno_location();
        if (*tmp___11) {
          tmp___10 = __errno_location();
          error(0, *tmp___10, (char *)"%s", what);
        } else {
          error(0, 0, (char *)"Failed to safely change directory into `%s\'", parent_dir);
        }
        state.exit_status = 1;
        return;
      } else {

      }
    }
  }
  free((void *)parent_dir);
  parent_dir = (char *)((void *)0);
  (*action)(pathname, base, (int )mode, pstat);
  if (dirchange) {
    chdir_back();
  } else {

  }
  return;
}
}
static void do_process_top_dir(char *pathname , char *base , int mode , struct stat *pstat ) 
{ 

  {
  process_path(pathname, base, (_Bool)0, (char *)".", (unsigned int )mode);
  complete_pending_execdirs(eval_tree);
  return;
}
}
static void do_process_predicate(char *pathname , char *base , int mode , struct stat *pstat ) 
{ 

  {
  state.rel_pathname = base;
  (*(eval_tree->pred_func))(pathname, pstat, eval_tree);
  return;
}
}
static void process_top_path(char *pathname , mode_t mode ) 
{ 

  {
  at_top(pathname, mode, (struct stat *)((void *)0), & do_process_top_dir);
  return;
}
}
static struct dir_id *dir_ids  =    (struct dir_id *)((void *)0);
static int dir_alloc  =    0;
static int dir_curr  =    -1;
static void issue_loop_warning(char const   *name , char const   *pathname , int level ) 
{ struct stat stbuf_link ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp ;
  char *tmp___0 ;
  int distance ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
  tmp = lstat((char const   */* __restrict  */)name, (struct stat */* __restrict  */)(& stbuf_link));
  if (tmp != (int __attribute__((__leaf__, __gnu_inline__))  )0) {
    stbuf_link.st_mode = 32768U;
  } else {

  }
  if ((stbuf_link.st_mode & 61440U) == 40960U) {
    tmp___0 = dcgettext((char const   *)((void *)0), "Symbolic link `%s\' is part of a loop in the directory hierarchy; we have already visited the directory to which it points.", 5);
    error(0, 0, tmp___0, pathname);
  } else {
    distance = 1 + (dir_curr - level);
    if (distance == 1) {
      tmp___1 = dcgettext((char const   *)((void *)0), "level higher in the filesystem hierarchy", 5);
      tmp___3 = tmp___1;
    } else {
      tmp___2 = dcgettext((char const   *)((void *)0), "levels higher in the filesystem hierarchy", 5);
      tmp___3 = tmp___2;
    }
    tmp___4 = dcgettext((char const   *)((void *)0), "Filesystem loop detected; `%s\' has the same device number and inode as a directory which is %d %s.", 5);
    error(0, 0, tmp___4, pathname, distance, tmp___3);
  }
  return;
}
}
static int digest_mode(mode_t mode , char const   *pathname , char const   *name , struct stat *pstat , boolean leaf ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if (mode) {
    if ((mode & 61440U) == 40960U) {
      tmp___0 = following_links();
      if (tmp___0) {
        tmp = get_statinfo(pathname, name, pstat);
        if (tmp != 0) {
          return (0);
        } else {

        }
        state.type = pstat->st_mode;
        mode = state.type;
        state.have_type = (_Bool)1;
      } else {
        state.have_type = (_Bool)1;
        state.type = mode;
        pstat->st_mode = state.type;
      }
    } else {
      state.have_type = (_Bool)1;
      state.type = mode;
      pstat->st_mode = state.type;
    }
  } else {
    if (leaf) {
      state.have_stat = (_Bool)0;
      state.have_type = (_Bool)0;
      state.type = 0U;
    } else {
      tmp___1 = get_statinfo(pathname, name, pstat);
      if (tmp___1 != 0) {
        return (0);
      } else {

      }
      state.type = pstat->st_mode;
      state.have_type = (_Bool)1;
    }
  }
  return (1);
}
}
static dev_t root_dev  ;
static int process_path(char *pathname , char *name , boolean leaf , char *parent , mode_t mode ) 
{ struct stat stat_buf ;
  int i ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;

  {
  stat_buf.st_mode = 0U;
  state.rel_pathname = name;
  state.type = 0U;
  state.have_stat = (_Bool)0;
  state.have_type = (_Bool)0;
  tmp = digest_mode(mode, (char const   *)pathname, (char const   *)name, & stat_buf, leaf);
  if (! tmp) {
    return (0);
  } else {

  }
  if (! ((state.type & 61440U) == 16384U)) {
    if (state.curdepth >= options.mindepth) {
      (*(eval_tree->pred_func))(pathname, & stat_buf, eval_tree);
    } else {

    }
    return (0);
  } else {

  }
  tmp___0 = get_statinfo((char const   *)pathname, (char const   *)name, & stat_buf);
  if (tmp___0 != 0) {
    return (0);
  } else {

  }
  state.have_stat = (_Bool)1;
  state.type = stat_buf.st_mode;
  mode = state.type;
  if (options.maxdepth >= 0) {
    if (state.curdepth >= options.maxdepth) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  state.stop_at_current_level = (_Bool )tmp___1;
  i = 0;
  while (i <= dir_curr) {
    if (stat_buf.st_ino == (dir_ids + i)->ino) {
      if (stat_buf.st_dev == (dir_ids + i)->dev) {
        state.stop_at_current_level = (_Bool)1;
        issue_loop_warning((char const   *)name, (char const   *)pathname, i);
      } else {

      }
    } else {

    }
    i ++;
  }
  dir_curr ++;
  if (dir_alloc <= dir_curr) {
    dir_alloc += 32;
    tmp___2 = xrealloc((void *)((char *)dir_ids), (unsigned long )dir_alloc * sizeof(struct dir_id ));
    dir_ids = (struct dir_id *)tmp___2;
  } else {

  }
  (dir_ids + dir_curr)->ino = stat_buf.st_ino;
  (dir_ids + dir_curr)->dev = stat_buf.st_dev;
  if (options.stay_on_filesystem) {
    if (state.curdepth == 0) {
      root_dev = stat_buf.st_dev;
    } else {
      if (stat_buf.st_dev != root_dev) {
        state.stop_at_current_level = (_Bool)1;
      } else {

      }
    }
  } else {

  }
  if (options.do_dir_first) {
    if (state.curdepth >= options.mindepth) {
      (*(eval_tree->pred_func))(pathname, & stat_buf, eval_tree);
    } else {

    }
  } else {

  }
  if ((int )state.stop_at_current_level == 0) {
    tmp___3 = strlen((char const   *)pathname);
    process_dir(pathname, name, (int )tmp___3, & stat_buf, parent);
  } else {

  }
  if ((int )options.do_dir_first == 0) {
    if (state.curdepth >= options.mindepth) {
      tmp___4 = digest_mode(mode, (char const   *)pathname, (char const   *)name, & stat_buf, leaf);
      if (! tmp___4) {
        return (0);
      } else {

      }
      if (0 == dir_curr) {
        at_top(pathname, mode, & stat_buf, & do_process_predicate);
      } else {
        do_process_predicate(pathname, name, (int )mode, & stat_buf);
      }
    } else {

    }
  } else {

  }
  dir_curr --;
  return (1);
}
}
static void complete_pending_execdirs(struct predicate *p ) 
{ struct exec_val *execp ;

  {
  if ((unsigned long )((void *)0) == (unsigned long )p) {
    return;
  } else {

  }
  complete_pending_execdirs(p->pred_left);
  if ((unsigned long )p->pred_func == (unsigned long )(& pred_execdir)) {
    goto _L;
  } else {
    if ((unsigned long )p->pred_func == (unsigned long )(& pred_okdir)) {
      _L: 
      if (p->args.exec_vec.multiple) {
        execp = & p->args.exec_vec;
        if (execp->state.todo) {
          launch((struct buildcmd_control  const  *)(& execp->ctl), & execp->state);
        } else {

        }
      } else {

      }
    } else {

    }
  }
  complete_pending_execdirs(p->pred_right);
  return;
}
}
static void complete_pending_execs(struct predicate *p ) 
{ struct exec_val *execp ;

  {
  if ((unsigned long )((void *)0) == (unsigned long )p) {
    return;
  } else {

  }
  complete_pending_execs(p->pred_left);
  if ((unsigned long )p->pred_func == (unsigned long )(& pred_exec)) {
    if (p->args.exec_vec.multiple) {
      execp = & p->args.exec_vec;
      if (execp->state.todo) {
        launch((struct buildcmd_control  const  *)(& execp->ctl), & execp->state);
      } else {

      }
    } else {

    }
  } else {

  }
  complete_pending_execs(p->pred_right);
  return;
}
}
static void process_dir(char *pathname , char *name , int pathlen , struct stat *statp , char *parent ) 
{ int subdirs_left ;
  int idx ;
  struct stat stat_buf ;
  struct savedir_dirinfo *dirinfo ;
  int *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  register char *namep ;
  char *cur_path ;
  char *cur_name ;
  unsigned int cur_path_size ;
  register unsigned int file_len ;
  register unsigned int pathname_len ;
  enum SafeChdirStatus status ;
  enum SafeChdirStatus tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___6 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  mode_t mode ;
  mode_t tmp___12 ;
  size_t tmp___13 ;
  void *tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  enum SafeChdirStatus status___0 ;
  struct dir_id did ;
  char const   *dir ;
  boolean deref ;
  int tmp___18 ;
  int tmp___19 ;
  int *tmp___20 ;
  int *tmp___21 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___23 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;

  {
  subdirs_left = (int )(statp->st_nlink - 2UL);
  tmp = __errno_location();
  *tmp = 0;
  __repair_app_1516__4e: /* CIL Label */ 
  {
  dirinfo = xsavedir((char const   *)name, 0);
  dir_curr ++;
  }
  if ((unsigned long )dirinfo == (unsigned long )((void *)0)) {
    tmp___0 = __errno_location();
    if (! (*tmp___0 != 0)) {
      __assert_fail("(*__errno_location ()) != 0", "find.c", 1779U, "process_dir");
    } else {

    }
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char *)"%s", pathname);
    state.exit_status = 1;
  } else {
    if ((int )*(pathname + (pathlen - 1)) == 47) {
      pathname_len = (unsigned int )(pathlen + 1);
    } else {
      pathname_len = (unsigned int )(pathlen + 2);
    }
    cur_path_size = 0U;
    cur_path = (char *)((void *)0);
    complete_pending_execdirs(eval_tree);
    if (0) {
      __s1_len = __builtin_strlen((char const   *)name);
      __s2_len = __builtin_strlen(".");
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
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
        tmp___6 = __builtin_strcmp((char const   *)name, ".");
        tmp___10 = tmp___6;
      } else {
        tmp___9 = __builtin_strcmp((char const   *)name, ".");
        tmp___10 = tmp___9;
      }
    } else {
      tmp___9 = __builtin_strcmp((char const   *)name, ".");
      tmp___10 = tmp___9;
    }
    if (tmp___10) {
      tmp___2 = safely_chdir((char const   *)name, (enum TraversalDirection )1, & stat_buf, (enum ChdirSymlinkHandling )0);
      status = tmp___2;
      switch ((int )status) {
      case 0: 
      (dir_ids + dir_curr)->dev = stat_buf.st_dev;
      (dir_ids + dir_curr)->ino = stat_buf.st_ino;
      break;
      case 4: 
      tmp___3 = __errno_location();
      error(0, *tmp___3, (char *)".");
      state.exit_status = 1;
      break;
      case 6: 
      case 3: 
      case 1: 
      case 2: 
      case 5: 
      tmp___4 = __errno_location();
      error(0, *tmp___4, (char *)"%s", pathname);
      state.exit_status = 1;
      return;
      }
    } else {

    }
    idx = 0;
    while ((unsigned long )idx < dirinfo->size) {
      if ((dirinfo->entries + idx)->flags & 1) {
        tmp___12 = (dirinfo->entries + idx)->type_info;
      } else {
        tmp___12 = 0U;
      }
      mode = tmp___12;
      namep = (dirinfo->entries + idx)->name;
      tmp___13 = strlen((char const   *)namep);
      file_len = (unsigned int )((unsigned long )pathname_len + tmp___13);
      if (file_len > cur_path_size) {
        while (file_len > cur_path_size) {
          cur_path_size += 1024U;
        }
        if (cur_path) {
          free((void *)cur_path);
        } else {

        }
        tmp___14 = xmalloc((unsigned long )cur_path_size);
        cur_path = (char *)tmp___14;
        strcpy((char */* __restrict  */)cur_path, (char const   */* __restrict  */)pathname);
        *(cur_path + (pathname_len - 2U)) = (char )'/';
      } else {

      }
      cur_name = (cur_path + pathname_len) - 1;
      strcpy((char */* __restrict  */)cur_name, (char const   */* __restrict  */)namep);
      (state.curdepth) ++;
      if (! options.no_leaf_check) {
        if (mode) {
          if ((mode & 61440U) == 16384U) {
            if (subdirs_left == 0) {
              tmp___15 = dcgettext((char const   *)((void *)0), "WARNING: Hard link count is wrong for %s: this may be a bug in your filesystem driver.  Automatically turning on find\'s -noleaf option.  Earlier results may have failed to include directories that should have been searched.", 5);
              error(0, 0, tmp___15, parent);
              state.exit_status = 1;
              options.no_leaf_check = (_Bool)1;
              subdirs_left = 1;
            } else {

            }
          } else {

          }
        } else {

        }
        tmp___16 = process_path(cur_path, cur_name, (_Bool )(subdirs_left == 0), pathname, mode);
        subdirs_left -= tmp___16;
      } else {
        process_path(cur_path, cur_name, (_Bool)0, pathname, mode);
      }
      (state.curdepth) --;
      idx ++;
    }
    complete_pending_execdirs(eval_tree);
    if (0) {
      __s1_len___0 = __builtin_strlen((char const   *)name);
      __s2_len___0 = __builtin_strlen(".");
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2: 
          if (! ((unsigned long )((void const   *)("." + 1)) - (unsigned long )((void const   *)".") == 1UL)) {
            tmp___28 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___28 = 1;
            } else {
              tmp___28 = 0;
            }
          }
        } else {
          tmp___28 = 0;
        }
      }
      if (tmp___28) {
        tmp___23 = __builtin_strcmp((char const   *)name, ".");
        tmp___27 = tmp___23;
      } else {
        tmp___26 = __builtin_strcmp((char const   *)name, ".");
        tmp___27 = tmp___26;
      }
    } else {
      tmp___26 = __builtin_strcmp((char const   *)name, ".");
      tmp___27 = tmp___26;
    }
    if (tmp___27) {
      tmp___19 = following_links();
      if (tmp___19) {
        tmp___18 = 1;
      } else {
        tmp___18 = 0;
      }
      deref = (_Bool )tmp___18;
      if (state.curdepth > 0) {
        if (! deref) {
          dir = "..";
        } else {
          chdir_back();
          dir = (char const   *)parent;
        }
      } else {
        chdir_back();
        dir = (char const   *)parent;
      }
      status___0 = safely_chdir(dir, (enum TraversalDirection )0, & stat_buf, (enum ChdirSymlinkHandling )0);
      switch ((int )status___0) {
      case 0: 
      break;
      case 4: 
      tmp___20 = __errno_location();
      error(1, *tmp___20, (char *)".");
      return;
      case 6: 
      case 3: 
      case 1: 
      case 2: 
      case 5: 
      tmp___21 = __errno_location();
      error(1, *tmp___21, (char *)"%s", pathname);
      return;
      }
      if (dir_curr > 0) {
        did.dev = (dir_ids + (dir_curr - 1))->dev;
        did.ino = (dir_ids + (dir_curr - 1))->ino;
      } else {
        did.dev = starting_stat_buf.st_dev;
        did.ino = starting_stat_buf.st_ino;
      }
    } else {

    }
    if (cur_path) {
      free((void *)cur_path);
    } else {

    }
    free_dirinfo(dirinfo);
  }
  return;
}
}
static boolean default_prints(struct predicate *pred ) 
{ 

  {
  while ((unsigned long )pred != (unsigned long )((void *)0)) {
    if (pred->no_default_print) {
      return ((_Bool)0);
    } else {

    }
    pred = pred->pred_next;
  }
  return ((_Bool)1);
}
}
