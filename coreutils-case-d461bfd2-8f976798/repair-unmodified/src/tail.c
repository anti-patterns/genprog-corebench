typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
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
typedef __off_t off_t;
typedef long ptrdiff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_8 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_8 fd_set;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
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
typedef unsigned long uintmax_t;
typedef unsigned int gl_uint32_t;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
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
struct inotify_event {
   int wd ;
   gl_uint32_t mask ;
   gl_uint32_t cookie ;
   gl_uint32_t len ;
   char name[] ;
};
struct statfs {
   __fsword_t f_type ;
   __fsword_t f_bsize ;
   __fsblkcnt_t f_blocks ;
   __fsblkcnt_t f_bfree ;
   __fsblkcnt_t f_bavail ;
   __fsfilcnt_t f_files ;
   __fsfilcnt_t f_ffree ;
   __fsid_t f_fsid ;
   __fsword_t f_namelen ;
   __fsword_t f_frsize ;
   __fsword_t f_flags ;
   __fsword_t f_spare[4] ;
};
enum Follow_mode {
    Follow_name = 1,
    Follow_descriptor = 2
} ;
struct File_spec {
   char *name ;
   off_t size ;
   struct timespec mtime ;
   dev_t dev ;
   ino_t ino ;
   mode_t mode ;
   _Bool ignore ;
   _Bool remote ;
   _Bool tailable ;
   int fd ;
   int errnum ;
   int blocking ;
   int wd ;
   int parent_wd ;
   size_t basename_start ;
   uintmax_t n_unchanged_stats ;
};
enum header_mode {
    multiple_files = 0,
    always = 1,
    never = 2
} ;
struct linebuffer {
   char buffer[8192] ;
   size_t nbytes ;
   size_t nlines ;
   struct linebuffer *next ;
};
typedef struct linebuffer LBUFFER;
struct charbuffer {
   char buffer[8192] ;
   size_t nbytes ;
   struct charbuffer *next ;
};
typedef struct charbuffer CBUFFER;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern int select(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds , fd_set * __restrict  __exceptfds , struct timeval * __restrict  __timeout ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv , char const   *__shortopts , struct option  const  *__longopts , int *__longind )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__buf )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fstatat(int __fd , char const   * __restrict  __file , struct stat * __restrict  __buf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fchmodat(int __fd , char const   *__file , __mode_t __mode , int __flag )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset , int __whence )  __attribute__((__leaf__)) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) int fchownat(int __fd , char const   *__file , __uid_t __owner , __gid_t __group , int __flag )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd )  __attribute__((__leaf__)) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic pop
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c , size_t __n )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) void *memrchr(void const   *__s , int __c , size_t __n )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern char const   *Version ;
extern int rpl_fcntl(int fd , int action  , ...) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern int __attribute__((__gnu_inline__))  timespec_cmp(struct timespec a , struct timespec b ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___0);
}
}
__inline extern int __attribute__((__gnu_inline__))  timespec_sign(struct timespec a ) 
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
  return ((int __attribute__((__gnu_inline__))  )tmp___0);
}
}
__inline extern double __attribute__((__gnu_inline__))  timespectod(struct timespec a ) 
{ 

  {
  return ((double __attribute__((__gnu_inline__))  )((double )a.tv_sec + (double )a.tv_nsec / 1e9));
}
}
#pragma GCC diagnostic pop
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
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
    n += (n + 1UL) / 2UL;
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
extern size_t dir_len(char const   *file )  __attribute__((__pure__)) ;
extern char *last_component(char const   *file )  __attribute__((__pure__)) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern int __attribute__((__gnu_inline__))  chownat(int fd , char const   *file , uid_t owner , gid_t group ) 
{ int tmp ;

  {
  tmp = fchownat(fd, file, owner, group, 0);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  lchownat(int fd , char const   *file , uid_t owner , gid_t group ) 
{ int tmp ;

  {
  tmp = fchownat(fd, file, owner, group, 256);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  chmodat(int fd , char const   *file , mode_t mode ) 
{ int tmp ;

  {
  tmp = fchmodat(fd, file, mode, 0);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  lchmodat(int fd , char const   *file , mode_t mode ) 
{ int tmp ;

  {
  tmp = fchmodat(fd, file, mode, 256);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  statat(int fd , char const   *name , struct stat *st ) 
{ int tmp ;

  {
  tmp = fstatat(fd, (char const   */* __restrict  */)name, (struct stat */* __restrict  */)st, 0);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  lstatat(int fd , char const   *name , struct stat *st ) 
{ int tmp ;

  {
  tmp = fstatat(fd, (char const   */* __restrict  */)name, (struct stat */* __restrict  */)st, 256);
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
#pragma GCC diagnostic pop
extern void close_stdout(void) ;
extern void version_etc(FILE *stream , char const   *command_name , char const   *package , char const   *version  , ...)  __attribute__((__sentinel__)) ;
extern char const   *program_name ;
extern void set_program_name(char const   *argv0 ) ;
__inline static void emit_mandatory_arg_note(void) 
{ char *tmp ;

  {
  tmp = gettext("\nMandatory arguments to long options are mandatory for short options too.\n");
  fputs_unlocked((char const   */* __restrict  */)tmp, (FILE */* __restrict  */)stdout);
  return;
}
}
__inline static void emit_ancillary_info(void) 
{ char *tmp ;
  char const   *lc_messages ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;

  {
  tmp = gettext("\n%s online help: <%s>\n");
  printf((char const   */* __restrict  */)tmp, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
  tmp___0 = setlocale(5, (char const   *)((void *)0));
  lc_messages = (char const   *)tmp___0;
  if (lc_messages) {
    tmp___3 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);
    if (tmp___3) {
      tmp___1 = last_component(program_name);
      tmp___2 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
      printf((char const   */* __restrict  */)tmp___2, tmp___1);
    } else {

    }
  } else {

  }
  tmp___4 = last_component(program_name);
  tmp___5 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
  printf((char const   */* __restrict  */)tmp___5, tmp___4);
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
extern char *offtostr(off_t  , char * )  __attribute__((__warn_unused_result__)) ;
 __attribute__((__noreturn__)) void usage(int status ) ;
extern void (*argmatch_die)(void) ;
extern ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist , char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
extern double c_strtod(char const   *nptr , char **endptr ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern int open_safer(char const   * , int   , ...) ;
extern int posix2_version(void) ;
extern char const   *quote(char const   *arg ) ;
extern size_t safe_read(int fd , void *buf , size_t count ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
__inline extern long __attribute__((__gnu_inline__))  get_stat_atime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__gnu_inline__))  )st->st_atim.tv_nsec);
}
}
__inline extern long __attribute__((__gnu_inline__))  get_stat_ctime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__gnu_inline__))  )st->st_ctim.tv_nsec);
}
}
__inline extern long __attribute__((__gnu_inline__))  get_stat_mtime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__gnu_inline__))  )st->st_mtim.tv_nsec);
}
}
__inline extern long __attribute__((__gnu_inline__))  get_stat_birthtime_ns(struct stat  const  *st ) 
{ 

  {
  return ((long __attribute__((__gnu_inline__))  )0);
}
}
__inline extern struct timespec  __attribute__((__gnu_inline__)) get_stat_atime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__gnu_inline__)) )st->st_atim);
}
}
__inline extern struct timespec  __attribute__((__gnu_inline__)) get_stat_ctime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__gnu_inline__)) )st->st_ctim);
}
}
__inline extern struct timespec  __attribute__((__gnu_inline__)) get_stat_mtime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec  __attribute__((__gnu_inline__)) )st->st_mtim);
}
}
__inline extern struct timespec  __attribute__((__gnu_inline__)) get_stat_birthtime(struct stat  const  *st ) 
{ struct timespec t ;

  {
  t.tv_sec = -1L;
  t.tv_nsec = -1L;
  return ((struct timespec  __attribute__((__gnu_inline__)) )t);
}
}
#pragma GCC diagnostic pop
extern int xnanosleep(double  ) ;
extern strtol_error xstrtoul(char const   * , char ** , int  , unsigned long * , char const   * ) ;
extern strtol_error xstrtoumax(char const   * , char ** , int  , uintmax_t * , char const   * ) ;
extern _Bool xstrtod(char const   *str , char const   **ptr , double *result , double (*convert)(char const   * , char ** ) ) ;
extern size_t hash_get_n_entries(Hash_table const   * )  __attribute__((__pure__)) ;
extern void *hash_lookup(Hash_table const   * , void const   * ) ;
extern Hash_table *hash_initialize(size_t  , Hash_tuning const   * , size_t (*)(void const   * , size_t  ) , _Bool (*)(void const   * , void const   * ) , void (*)(void * ) )  __attribute__((__warn_unused_result__)) ;
extern void *hash_insert(Hash_table * , void const   * )  __attribute__((__warn_unused_result__)) ;
extern void *hash_delete(Hash_table * , void const   * ) ;
extern  __attribute__((__nothrow__)) int inotify_init(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int inotify_add_watch(int __fd , char const   *__name , gl_uint32_t __mask )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int inotify_rm_watch(int __fd , int __wd )  __attribute__((__leaf__)) ;
__inline static int is_local_fs_type(unsigned long magic ) 
{ 

  {
  switch ((int )magic) {
  case 44533: 
  return (1);
  case 44543: 
  return (1);
  case 1397113167: 
  return (0);
  case 151263540: 
  return (1);
  case 1635083891: 
  return (0);
  case 391: 
  return (1);
  case 1111905073: 
  return (1);
  case 1650746742: 
  return (1);
  case 464386766: 
  return (1);
  case 1112100429: 
  return (1);
  case 2435016766U: 
  return (1);
  case 12805120: 
  return (0);
  case 2613483: 
  return (1);
  case 4283649346U: 
  return (0);
  case 1937076805: 
  return (0);
  case 19920823: 
  return (1);
  case 684539205: 
  return (1);
  case 1161678120: 
  return (1);
  case 1684170528: 
  return (1);
  case 4979: 
  return (1);
  case 7377: 
  return (1);
  case 61791: 
  return (1);
  case 3730735588U: 
  return (1);
  case 4278867: 
  return (1);
  case 24053: 
  return (1);
  case 4989: 
  return (1);
  case 61267: 
  return (1);
  case 61265: 
  return (1);
  case 4076150800U: 
  return (1);
  case 16390: 
  return (1);
  case 428016422: 
  return (0);
  case 1702057286: 
  return (0);
  case 1702057283: 
  return (0);
  case 195894762: 
  return (1);
  case 18225520: 
  return (0);
  case 1196443219: 
  return (0);
  case 16964: 
  return (1);
  case 4187351113U: 
  return (1);
  case 2508478710U: 
  return (1);
  case 288389204: 
  return (1);
  case 732765674: 
  return (1);
  case 38496: 
  return (1);
  case 16388: 
  return (1);
  case 16384: 
  return (1);
  case 1984: 
  return (1);
  case 29366: 
  return (1);
  case 827541066: 
  return (1);
  case 1799439955: 
  return (0);
  case 198183888: 
  return (0);
  case 4991: 
  return (1);
  case 5007: 
  return (1);
  case 9320: 
  return (1);
  case 9336: 
  return (1);
  case 19802: 
  return (1);
  case 427819522: 
  return (1);
  case 19780: 
  return (1);
  case 22092: 
  return (0);
  case 26985: 
  return (0);
  case 1852207972: 
  return (0);
  case 13364: 
  return (1);
  case 1397118030: 
  return (1);
  case 40865: 
  return (1);
  case 1952539503: 
  return (0);
  case 2866260714U: 
  return (0);
  case 1346981957: 
  return (0);
  case 40864: 
  return (1);
  case 1634035564: 
  return (1);
  case 47: 
  return (1);
  case 1746473250: 
  return (1);
  case 2240043254U: 
  return (1);
  case 1382369651: 
  return (1);
  case 29301: 
  return (1);
  case 1733912937: 
  return (1);
  case 1935894131: 
  return (1);
  case 4185718668U: 
  return (1);
  case 20859: 
  return (0);
  case 1397703499: 
  return (1);
  case 1936814952: 
  return (1);
  case 1650812274: 
  return (1);
  case 19920822: 
  return (1);
  case 19920821: 
  return (1);
  case 16914836: 
  return (1);
  case 604313861: 
  return (1);
  case 352400198: 
  return (1);
  case 72020: 
  return (1);
  case 1410924800: 
  return (1);
  case 40866: 
  return (1);
  case 16914839: 
  return (1);
  case 3133910204U: 
  return (0);
  case 2768370933U: 
  return (1);
  case 1448756819: 
  return (1);
  case 2881100148U: 
  return (1);
  case 19920820: 
  return (1);
  case 1481003842: 
  return (1);
  case 19911021: 
  return (1);
  case 801189825: 
  return (1);
  default: ;
  return (-1);
  }
}
}
extern  __attribute__((__nothrow__)) int fstatfs(int __fildes , struct statfs *__buf )  __attribute__((__nonnull__(2), __leaf__)) ;
static char const   * const  follow_mode_string[3]  = {      (char const   */* const  */)"descriptor",      (char const   */* const  */)"name",      (char const   */* const  */)((void *)0)};
static enum Follow_mode  const  follow_mode_map[2]  = {      (enum Follow_mode  const  )2,      (enum Follow_mode  const  )1};
static unsigned int const   inotify_wd_mask  =    (unsigned int const   )3078;
static _Bool reopen_inaccessible_files  ;
static _Bool count_lines  ;
static enum Follow_mode follow_mode  =    (enum Follow_mode )2;
static _Bool forever  ;
static _Bool from_start  ;
static _Bool print_headers  ;
static uintmax_t max_n_unchanged_stats_between_opens  =    5UL;
static pid_t pid  ;
static _Bool have_read_stdin  ;
static _Bool presume_input_pipe  ;
static _Bool disable_inotify  ;
static struct option  const  long_options[15]  = 
  {      {"bytes", 1, (int *)((void *)0), 'c'}, 
        {"follow", 2, (int *)((void *)0), 132}, 
        {"lines", 1, (int *)((void *)0), 'n'}, 
        {"max-unchanged-stats", 1, (int *)((void *)0), 129}, 
        {"-disable-inotify", 0, (int *)((void *)0), 133}, 
        {"pid", 1, (int *)((void *)0), 130}, 
        {"-presume-input-pipe", 0, (int *)((void *)0), 131}, 
        {"quiet", 0, (int *)((void *)0), 'q'}, 
        {"retry", 0, (int *)((void *)0), 128}, 
        {"silent", 0, (int *)((void *)0), 'q'}, 
        {"sleep-interval", 1, (int *)((void *)0), 's'}, 
        {"verbose", 0, (int *)((void *)0), 'v'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
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

  {
  if (status != 0) {
    emit_try_help();
  } else {
    tmp = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf((char const   */* __restrict  */)tmp, program_name);
    tmp___0 = gettext("Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n");
    printf((char const   */* __restrict  */)tmp___0, 10);
    emit_mandatory_arg_note();
    tmp___1 = gettext("  -c, --bytes=K            output the last K bytes; alternatively, use -c +K\n                           to output bytes starting with the Kth of each file\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                           -f, --follow, and --follow=descriptor are\n                           equivalent\n  -F                       same as --follow=name --retry\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -n, --lines=K            output the last K lines, instead of the last %d;\n                           or use -n +K to output lines starting with the Kth\n      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                           changed size after N (default %d) iterations\n                           to see if it has been unlinked or renamed\n                           (this is the usual case of rotated log files).\n                           With inotify, this option is rarely useful.\n");
    printf((char const   */* __restrict  */)tmp___3, 10, 5);
    tmp___4 = gettext("      --pid=PID            with -f, terminate after process ID, PID dies\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations.\n                             With inotify and --pid=P, check process P at\n                             least once every N seconds.\n  -v, --verbose            always output headers giving file names\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("\nIf the first character of K (the number of bytes or lines) is a \'+\',\nprint beginning with the Kth item from the start of each file, otherwise,\nprint the last K items in the file.  K may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___8, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail\'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
  }
  exit(status);
}
}
static _Bool valid_file_spec(struct File_spec  const  *f ) 
{ 

  {
  return ((_Bool )((f->fd == -1) ^ (f->errnum == 0)));
}
}
static char const   *pretty_name(struct File_spec  const  *f ) 
{ char *tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;

  {
  tmp___2 = strcmp((char const   *)f->name, "-");
  if (tmp___2 == 0) {
    tmp___0 = gettext("standard input");
    tmp___1 = (char *)((char */* const  */)tmp___0);
  } else {
    tmp___1 = (char *)f->name;
  }
  return ((char const   *)tmp___1);
}
}
static void xwrite_stdout(char const   *buffer , size_t n_bytes ) 
{ char *tmp ;
  int *tmp___0 ;
  size_t tmp___1 ;

  {
  if (n_bytes > 0UL) {
    tmp___1 = fwrite_unlocked((void const   */* __restrict  */)buffer, 1UL, n_bytes, (FILE */* __restrict  */)stdout);
    if (tmp___1 == 0UL) {
      tmp = gettext("write error");
      tmp___0 = __errno_location();
      error(1, *tmp___0, (char const   *)tmp);
    } else {

    }
  } else {

  }
  return;
}
}
static void record_open_fd(struct File_spec *f , int fd , off_t size , struct stat  const  *st , int blocking ) 
{ struct timespec  __attribute__((__gnu_inline__)) tmp ;

  {
  f->fd = fd;
  f->size = size;
  tmp = get_stat_mtime(st);
  f->mtime = (struct timespec )tmp;
  f->dev = (unsigned long )st->st_dev;
  f->ino = (unsigned long )st->st_ino;
  f->mode = (unsigned int )st->st_mode;
  f->blocking = blocking;
  f->n_unchanged_stats = 0UL;
  f->ignore = (_Bool)0;
  return;
}
}
static void close_fd(int fd , char const   *filename ) 
{ char *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  if (fd != -1) {
    if (fd != 0) {
      tmp___1 = close(fd);
      if (tmp___1) {
        tmp = gettext("closing %s (fd=%d)");
        tmp___0 = __errno_location();
        error(0, *tmp___0, (char const   *)tmp, filename, fd);
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
static void write_header(char const   *pretty_filename ) ;
static _Bool first_file  =    (_Bool)1;
static void write_header(char const   *pretty_filename ) 
{ char const   *tmp ;

  {
  if (first_file) {
    tmp = "";
  } else {
    tmp = "\n";
  }
  printf((char const   */* __restrict  */)"%s==> %s <==\n", tmp, pretty_filename);
  first_file = (_Bool)0;
  return;
}
}
static uintmax_t dump_remainder(char const   *pretty_filename , int fd , uintmax_t n_bytes ) 
{ uintmax_t n_written ;
  uintmax_t n_remaining ;
  char buffer[8192] ;
  size_t n ;
  uintmax_t tmp ;
  size_t bytes_read ;
  size_t tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;

  {
  n_remaining = n_bytes;
  n_written = 0UL;
  while (1) {
    if (n_remaining < 8192UL) {
      tmp = n_remaining;
    } else {
      tmp = 8192UL;
    }
    n = tmp;
    tmp___0 = safe_read(fd, (void *)(buffer), n);
    bytes_read = tmp___0;
    if (bytes_read == 4294967295UL) {
      tmp___4 = __errno_location();
      if (*tmp___4 != 11) {
        tmp___1 = quote(pretty_filename);
        tmp___2 = gettext("error reading %s");
        tmp___3 = __errno_location();
        error(1, *tmp___3, (char const   *)tmp___2, tmp___1);
      } else {

      }
      break;
    } else {

    }
    if (bytes_read == 0UL) {
      break;
    } else {

    }
    xwrite_stdout((char const   *)(buffer), bytes_read);
    n_written += bytes_read;
    if (n_bytes != 0UL) {
      n_remaining -= bytes_read;
      if (n_remaining == 0UL) {
        break;
      } else {
        if (n_bytes == 4294967295UL) {
          break;
        } else {

        }
      }
    } else {

    }
  }
  return (n_written);
}
}
static off_t xlseek(int fd , off_t offset , int whence , char const   *filename ) 
{ off_t new_offset ;
  __off_t tmp ;
  char buf[(((sizeof(offset) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL] ;
  char *s ;
  char *tmp___0 ;
  int *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;

  {
  tmp = lseek(fd, offset, whence);
  new_offset = tmp;
  if (0L <= new_offset) {
    return (new_offset);
  } else {

  }
  s = offtostr(offset, buf);
  switch (whence) {
  case 0: 
  tmp___0 = gettext("%s: cannot seek to offset %s");
  tmp___1 = __errno_location();
  error(0, *tmp___1, (char const   *)tmp___0, filename, s);
  break;
  case 1: 
  tmp___2 = gettext("%s: cannot seek to relative offset %s");
  tmp___3 = __errno_location();
  error(0, *tmp___3, (char const   *)tmp___2, filename, s);
  break;
  case 2: 
  tmp___4 = gettext("%s: cannot seek to end-relative offset %s");
  tmp___5 = __errno_location();
  error(0, *tmp___5, (char const   *)tmp___4, filename, s);
  break;
  default: 
  abort();
  }
  exit(1);
}
}
static _Bool file_lines(char const   *pretty_filename , int fd , uintmax_t n_lines , off_t start_pos , off_t end_pos , uintmax_t *read_pos ) 
{ char buffer[8192] ;
  size_t bytes_read ;
  off_t pos ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  size_t n ;
  char const   *nl ;
  void *tmp___2 ;
  uintmax_t tmp___3 ;
  uintmax_t tmp___4 ;
  uintmax_t tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;

  {
  pos = end_pos;
  if (n_lines == 0UL) {
    return ((_Bool)1);
  } else {

  }
  bytes_read = (unsigned long )((pos - start_pos) % 8192L);
  if (bytes_read == 0UL) {
    bytes_read = 8192UL;
  } else {

  }
  pos = (long )((unsigned long )pos - bytes_read);
  xlseek(fd, pos, 0, pretty_filename);
  bytes_read = safe_read(fd, (void *)(buffer), bytes_read);
  if (bytes_read == 4294967295UL) {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("error reading %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    return ((_Bool)0);
  } else {

  }
  *read_pos = (unsigned long )pos + bytes_read;
  if (bytes_read) {
    if ((int )buffer[bytes_read - 1UL] != 10) {
      n_lines --;
    } else {

    }
  } else {

  }
  while (1) {
    n = bytes_read;
    while (n) {
      tmp___2 = memrchr((void const   *)(buffer), '\n', n);
      nl = (char const   *)tmp___2;
      if ((unsigned long )nl == (unsigned long )((void *)0)) {
        break;
      } else {

      }
      n = (unsigned long )(nl - (char const   *)(buffer));
      tmp___4 = n_lines;
      n_lines --;
      if (tmp___4 == 0UL) {
        if (n != bytes_read - 1UL) {
          xwrite_stdout(nl + 1, bytes_read - (n + 1UL));
        } else {

        }
        tmp___3 = dump_remainder(pretty_filename, fd, (unsigned long )end_pos - ((unsigned long )pos + bytes_read));
        *read_pos += tmp___3;
        return ((_Bool)1);
      } else {

      }
    }
    if (pos == start_pos) {
      xlseek(fd, start_pos, 0, pretty_filename);
      tmp___5 = dump_remainder(pretty_filename, fd, (unsigned long )end_pos);
      *read_pos = (unsigned long )start_pos + tmp___5;
      return ((_Bool)1);
    } else {

    }
    pos -= 8192L;
    xlseek(fd, pos, 0, pretty_filename);
    bytes_read = safe_read(fd, (void *)(buffer), 8192UL);
    if (bytes_read == 4294967295UL) {
      tmp___6 = quote(pretty_filename);
      tmp___7 = gettext("error reading %s");
      tmp___8 = __errno_location();
      error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
      return ((_Bool)0);
    } else {

    }
    *read_pos = (unsigned long )pos + bytes_read;
    if (! (bytes_read > 0UL)) {
      break;
    } else {

    }
  }
  return ((_Bool)1);
}
}
static _Bool pipe_lines(char const   *pretty_filename , int fd , uintmax_t n_lines , uintmax_t *read_pos ) 
{ LBUFFER *first ;
  LBUFFER *last ;
  LBUFFER *tmp ;
  size_t total_lines ;
  _Bool ok ;
  size_t n_read ;
  void *tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  char const   *buffer_end ;
  char const   *p ;
  void *tmp___3 ;
  struct linebuffer *tmp___4 ;
  void *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char const   *beg ;
  char const   *buffer_end___0 ;
  size_t j ;
  void *tmp___9 ;

  {
  total_lines = 0UL;
  ok = (_Bool)1;
  tmp___0 = xmalloc(sizeof(LBUFFER ));
  last = (LBUFFER *)tmp___0;
  first = last;
  tmp___1 = 0UL;
  first->nlines = tmp___1;
  first->nbytes = tmp___1;
  first->next = (struct linebuffer *)((void *)0);
  tmp___2 = xmalloc(sizeof(LBUFFER ));
  tmp = (LBUFFER *)tmp___2;
  while (1) {
    n_read = safe_read(fd, (void *)(tmp->buffer), 8192UL);
    if (n_read == 0UL) {
      break;
    } else {
      if (n_read == 4294967295UL) {
        break;
      } else {

      }
    }
    tmp->nbytes = n_read;
    *read_pos += n_read;
    tmp->nlines = 0UL;
    tmp->next = (struct linebuffer *)((void *)0);
    buffer_end = (char const   *)(tmp->buffer + n_read);
    p = (char const   *)(tmp->buffer);
    while (1) {
      tmp___3 = memchr((void const   *)p, '\n', (unsigned long )(buffer_end - p));
      p = (char const   *)tmp___3;
      if (! p) {
        break;
      } else {

      }
      p ++;
      (tmp->nlines) ++;
    }
    total_lines += tmp->nlines;
    if (tmp->nbytes + last->nbytes < 8192UL) {
      memcpy((void */* __restrict  */)(& last->buffer[last->nbytes]), (void const   */* __restrict  */)(tmp->buffer), tmp->nbytes);
      last->nbytes += tmp->nbytes;
      last->nlines += tmp->nlines;
    } else {
      tmp___4 = tmp;
      last->next = tmp___4;
      last = tmp___4;
      if (total_lines - first->nlines > n_lines) {
        tmp = first;
        total_lines -= first->nlines;
        first = first->next;
      } else {
        tmp___5 = xmalloc(sizeof(LBUFFER ));
        tmp = (LBUFFER *)tmp___5;
      }
    }
  }
  free((void *)tmp);
  if (n_read == 4294967295UL) {
    tmp___6 = quote(pretty_filename);
    tmp___7 = gettext("error reading %s");
    tmp___8 = __errno_location();
    error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
    ok = (_Bool)0;
    goto free_lbuffers;
  } else {

  }
  if (last->nbytes == 0UL) {
    goto free_lbuffers;
  } else {

  }
  if (n_lines == 0UL) {
    goto free_lbuffers;
  } else {

  }
  if ((int )last->buffer[last->nbytes - 1UL] != 10) {
    (last->nlines) ++;
    total_lines ++;
  } else {

  }
  tmp = first;
  while (total_lines - tmp->nlines > n_lines) {
    total_lines -= tmp->nlines;
    tmp = tmp->next;
  }
  beg = (char const   *)(tmp->buffer);
  buffer_end___0 = (char const   *)(tmp->buffer + tmp->nbytes);
  if (total_lines > n_lines) {
    j = total_lines - n_lines;
    while (j) {
      tmp___9 = memchr((void const   *)beg, '\n', (unsigned long )(buffer_end___0 - beg));
      beg = (char const   *)tmp___9;
      if (! beg) {
        __assert_fail("beg", "src/tail.c", 676U, "pipe_lines");
      } else {

      }
      beg ++;
      j --;
    }
  } else {

  }
  xwrite_stdout(beg, (unsigned long )(buffer_end___0 - beg));
  tmp = tmp->next;
  while (tmp) {
    xwrite_stdout((char const   *)(tmp->buffer), tmp->nbytes);
    tmp = tmp->next;
  }
  free_lbuffers: 
  while (first) {
    tmp = first->next;
    free((void *)first);
    first = tmp;
  }
  return (ok);
}
}
static _Bool pipe_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes , uintmax_t *read_pos ) 
{ CBUFFER *first ;
  CBUFFER *last ;
  CBUFFER *tmp ;
  size_t i ;
  size_t total_bytes ;
  _Bool ok ;
  size_t n_read ;
  void *tmp___0 ;
  void *tmp___1 ;
  struct charbuffer *tmp___2 ;
  void *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;

  {
  total_bytes = 0UL;
  ok = (_Bool)1;
  tmp___0 = xmalloc(sizeof(CBUFFER ));
  last = (CBUFFER *)tmp___0;
  first = last;
  first->nbytes = 0UL;
  first->next = (struct charbuffer *)((void *)0);
  tmp___1 = xmalloc(sizeof(CBUFFER ));
  tmp = (CBUFFER *)tmp___1;
  while (1) {
    n_read = safe_read(fd, (void *)(tmp->buffer), 8192UL);
    if (n_read == 0UL) {
      break;
    } else {
      if (n_read == 4294967295UL) {
        break;
      } else {

      }
    }
    *read_pos += n_read;
    tmp->nbytes = n_read;
    tmp->next = (struct charbuffer *)((void *)0);
    total_bytes += tmp->nbytes;
    if (tmp->nbytes + last->nbytes < 8192UL) {
      memcpy((void */* __restrict  */)(& last->buffer[last->nbytes]), (void const   */* __restrict  */)(tmp->buffer), tmp->nbytes);
      last->nbytes += tmp->nbytes;
    } else {
      tmp___2 = tmp;
      last->next = tmp___2;
      last = tmp___2;
      if (total_bytes - first->nbytes > n_bytes) {
        tmp = first;
        total_bytes -= first->nbytes;
        first = first->next;
      } else {
        tmp___3 = xmalloc(sizeof(CBUFFER ));
        tmp = (CBUFFER *)tmp___3;
      }
    }
  }
  free((void *)tmp);
  if (n_read == 4294967295UL) {
    tmp___4 = quote(pretty_filename);
    tmp___5 = gettext("error reading %s");
    tmp___6 = __errno_location();
    error(0, *tmp___6, (char const   *)tmp___5, tmp___4);
    ok = (_Bool)0;
    goto free_cbuffers;
  } else {

  }
  tmp = first;
  while (total_bytes - tmp->nbytes > n_bytes) {
    total_bytes -= tmp->nbytes;
    tmp = tmp->next;
  }
  if (total_bytes > n_bytes) {
    i = total_bytes - n_bytes;
  } else {
    i = 0UL;
  }
  xwrite_stdout((char const   *)(& tmp->buffer[i]), tmp->nbytes - i);
  tmp = tmp->next;
  while (tmp) {
    xwrite_stdout((char const   *)(tmp->buffer), tmp->nbytes);
    tmp = tmp->next;
  }
  free_cbuffers: 
  while (first) {
    tmp = first->next;
    free((void *)first);
    first = tmp;
  }
  return (ok);
}
}
static int start_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes , uintmax_t *read_pos ) 
{ char buffer[8192] ;
  size_t bytes_read ;
  size_t tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  size_t n_remaining ;

  {
  while (0UL < n_bytes) {
    tmp = safe_read(fd, (void *)(buffer), 8192UL);
    bytes_read = tmp;
    if (bytes_read == 0UL) {
      return (-1);
    } else {

    }
    if (bytes_read == 4294967295UL) {
      tmp___0 = quote(pretty_filename);
      tmp___1 = gettext("error reading %s");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
      return (1);
    } else {

    }
    *read_pos += bytes_read;
    if (bytes_read <= n_bytes) {
      n_bytes -= bytes_read;
    } else {
      n_remaining = bytes_read - n_bytes;
      if (n_remaining) {
        xwrite_stdout((char const   *)(& buffer[n_bytes]), n_remaining);
      } else {

      }
      break;
    }
  }
  return (0);
}
}
static int start_lines(char const   *pretty_filename , int fd , uintmax_t n_lines , uintmax_t *read_pos ) 
{ char buffer[8192] ;
  size_t bytes_read ;
  size_t tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  char *buffer_end ;
  char *p ;
  void *tmp___3 ;

  {
  if (n_lines == 0UL) {
    return (0);
  } else {

  }
  while (1) {
    tmp = safe_read(fd, (void *)(buffer), 8192UL);
    bytes_read = tmp;
    if (bytes_read == 0UL) {
      return (-1);
    } else {

    }
    if (bytes_read == 4294967295UL) {
      tmp___0 = quote(pretty_filename);
      tmp___1 = gettext("error reading %s");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
      return (1);
    } else {

    }
    buffer_end = buffer + bytes_read;
    *read_pos += bytes_read;
    p = buffer;
    while (1) {
      tmp___3 = memchr((void const   *)p, '\n', (unsigned long )(buffer_end - p));
      p = (char *)tmp___3;
      if (! p) {
        break;
      } else {

      }
      p ++;
      n_lines --;
      if (n_lines == 0UL) {
        if ((unsigned long )p < (unsigned long )buffer_end) {
          xwrite_stdout((char const   *)p, (unsigned long )(buffer_end - p));
        } else {

        }
        return (0);
      } else {

      }
    }
  }
}
}
static _Bool fremote(int fd , char const   *name ) 
{ _Bool remote ;
  struct statfs buf ;
  int err ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  unsigned long fs_type ;
  char const   *tmp___5 ;
  char *tmp___6 ;

  {
  remote = (_Bool)1;
  tmp = fstatfs(fd, & buf);
  err = tmp;
  if (err != 0) {
    tmp___3 = __errno_location();
    if (*tmp___3 != 38) {
      tmp___0 = quote(name);
      tmp___1 = gettext("cannot determine location of %s. reverting to polling");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
    } else {

    }
  } else {
    tmp___4 = is_local_fs_type((unsigned long )buf.f_type);
    switch (tmp___4) {
    case 0: 
    break;
    case -1: 
    fs_type = (unsigned long )buf.f_type;
    tmp___5 = quote(name);
    tmp___6 = gettext("unrecognized file system type 0x%08lx for %s. please report this to %s. reverting to polling");
    error(0, 0, (char const   *)tmp___6, fs_type, tmp___5, "bug-coreutils@gnu.org");
    break;
    case 1: 
    remote = (_Bool)0;
    break;
    default: 
    __assert_fail("!\"unexpected return value from is_local_fs_type\"", "src/tail.c", 914U, "fremote");
    }
  }
  return (remote);
}
}
static void recheck(struct File_spec *f , _Bool blocking ) 
{ struct stat new_stats ;
  _Bool ok ;
  _Bool is_stdin ;
  int tmp ;
  _Bool was_tailable ;
  int prev_errnum ;
  _Bool new_file ;
  int fd ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  _Bool tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;
  char *tmp___14 ;
  char const   *tmp___15 ;
  char const   *tmp___16 ;
  char *tmp___17 ;
  char const   *tmp___18 ;
  _Bool tmp___19 ;
  int tmp___20 ;
  char const   *tmp___21 ;
  char const   *tmp___22 ;
  char const   *tmp___23 ;
  char const   *tmp___24 ;
  char *tmp___25 ;
  char const   *tmp___26 ;
  char const   *tmp___27 ;
  char *tmp___28 ;
  char const   *tmp___29 ;
  char const   *tmp___30 ;
  char const   *tmp___31 ;
  char *tmp___32 ;
  char const   *tmp___33 ;
  int tmp___34 ;
  char const   *tmp___35 ;

  {
  ok = (_Bool)1;
  tmp = strcmp((char const   *)f->name, "-");
  is_stdin = (_Bool )(tmp == 0);
  was_tailable = f->tailable;
  prev_errnum = f->errnum;
  if (is_stdin) {
    tmp___2 = 0;
  } else {
    if (blocking) {
      tmp___0 = 0;
    } else {
      tmp___0 = 2048;
    }
    tmp___1 = open_safer((char const   *)f->name, tmp___0);
    tmp___2 = tmp___1;
  }
  fd = tmp___2;
  tmp___3 = valid_file_spec((struct File_spec  const  *)f);
  if (! tmp___3) {
    __assert_fail("valid_file_spec (f)", "src/tail.c", 943U, "recheck");
  } else {

  }
  if (reopen_inaccessible_files) {
    if (fd == -1) {
      tmp___4 = 0;
    } else {
      tmp___4 = 1;
    }
  } else {
    tmp___4 = 1;
  }
  f->tailable = (_Bool )tmp___4;
  if (fd == -1) {
    goto _L___0;
  } else {
    tmp___20 = fstat(fd, & new_stats);
    if (tmp___20 < 0) {
      _L___0: 
      ok = (_Bool)0;
      tmp___5 = __errno_location();
      f->errnum = *tmp___5;
      if (! f->tailable) {
        if (was_tailable) {
          tmp___6 = pretty_name((struct File_spec  const  *)f);
          tmp___7 = quote(tmp___6);
          tmp___8 = gettext("%s has become inaccessible");
          error(0, f->errnum, (char const   *)tmp___8, tmp___7);
        } else {

        }
      } else {
        tmp___11 = __errno_location();
        if (prev_errnum != *tmp___11) {
          tmp___9 = pretty_name((struct File_spec  const  *)f);
          tmp___10 = __errno_location();
          error(0, *tmp___10, "%s", tmp___9);
        } else {

        }
      }
    } else {
      if ((new_stats.st_mode & 61440U) == 32768U) {
        goto _L;
      } else {
        if ((new_stats.st_mode & 61440U) == 4096U) {
          goto _L;
        } else {
          if ((new_stats.st_mode & 61440U) == 49152U) {
            goto _L;
          } else {
            if ((new_stats.st_mode & 61440U) == 8192U) {
              _L: 
              if (! disable_inotify) {
                tmp___18 = pretty_name((struct File_spec  const  *)f);
                tmp___19 = fremote(fd, tmp___18);
                if (tmp___19) {
                  ok = (_Bool)0;
                  f->errnum = -1;
                  tmp___15 = pretty_name((struct File_spec  const  *)f);
                  tmp___16 = quote(tmp___15);
                  tmp___17 = gettext("%s has been replaced with a remote file. giving up on this name");
                  error(0, 0, (char const   *)tmp___17, tmp___16);
                  f->ignore = (_Bool)1;
                  f->remote = (_Bool)1;
                } else {
                  f->errnum = 0;
                }
              } else {
                f->errnum = 0;
              }
            } else {
              ok = (_Bool)0;
              f->errnum = -1;
              tmp___12 = pretty_name((struct File_spec  const  *)f);
              tmp___13 = quote(tmp___12);
              tmp___14 = gettext("%s has been replaced with an untailable file; giving up on this name");
              error(0, 0, (char const   *)tmp___14, tmp___13);
              f->ignore = (_Bool)1;
            }
          }
        }
      }
    }
  }
  new_file = (_Bool)0;
  if (! ok) {
    tmp___21 = pretty_name((struct File_spec  const  *)f);
    close_fd(fd, tmp___21);
    tmp___22 = pretty_name((struct File_spec  const  *)f);
    close_fd(f->fd, tmp___22);
    f->fd = -1;
  } else {
    if (prev_errnum) {
      if (prev_errnum != 2) {
        new_file = (_Bool)1;
        if (! (f->fd == -1)) {
          __assert_fail("f->fd == -1", "src/tail.c", 1007U, "recheck");
        } else {

        }
        tmp___23 = pretty_name((struct File_spec  const  *)f);
        tmp___24 = quote(tmp___23);
        tmp___25 = gettext("%s has become accessible");
        error(0, 0, (char const   *)tmp___25, tmp___24);
      } else {
        goto _L___2;
      }
    } else {
      _L___2: 
      if (f->ino != new_stats.st_ino) {
        goto _L___1;
      } else {
        if (f->dev != new_stats.st_dev) {
          _L___1: 
          new_file = (_Bool)1;
          if (f->fd == -1) {
            tmp___26 = pretty_name((struct File_spec  const  *)f);
            tmp___27 = quote(tmp___26);
            tmp___28 = gettext("%s has appeared;  following end of new file");
            error(0, 0, (char const   *)tmp___28, tmp___27);
          } else {
            tmp___29 = pretty_name((struct File_spec  const  *)f);
            close_fd(f->fd, tmp___29);
            tmp___30 = pretty_name((struct File_spec  const  *)f);
            tmp___31 = quote(tmp___30);
            tmp___32 = gettext("%s has been replaced;  following end of new file");
            error(0, 0, (char const   *)tmp___32, tmp___31);
          }
        } else {
          if (f->fd == -1) {
            new_file = (_Bool)1;
          } else {
            tmp___33 = pretty_name((struct File_spec  const  *)f);
            close_fd(fd, tmp___33);
          }
        }
      }
    }
  }
  if (new_file) {
    if (is_stdin) {
      tmp___34 = -1;
    } else {
      tmp___34 = (int )blocking;
    }
    record_open_fd(f, fd, 0L, (struct stat  const  *)(& new_stats), tmp___34);
    tmp___35 = pretty_name((struct File_spec  const  *)f);
    xlseek(fd, 0L, 0, tmp___35);
  } else {

  }
  return;
}
}
static _Bool any_live_files(struct File_spec  const  *f , size_t n_files ) 
{ size_t i ;

  {
  i = 0UL;
  while (i < n_files) {
    if (0 <= (int )(f + i)->fd) {
      return ((_Bool)1);
    } else {

    }
    i ++;
  }
  return ((_Bool)0);
}
}
static void tail_forever(struct File_spec *f , size_t n_files , double sleep_interval ) 
{ _Bool blocking ;
  int tmp ;
  size_t last ;
  _Bool writer_is_dead ;
  size_t i ;
  _Bool any_input ;
  int fd ;
  char const   *name ;
  mode_t mode ;
  struct stat stats ;
  uintmax_t bytes_read ;
  int old_flags ;
  int tmp___0 ;
  int new_flags ;
  int tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;
  uintmax_t tmp___9 ;
  struct timespec  __attribute__((__gnu_inline__)) tmp___10 ;
  int __attribute__((__gnu_inline__))  tmp___11 ;
  struct timespec  __attribute__((__gnu_inline__)) tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  _Bool tmp___16 ;
  char *tmp___17 ;
  int *tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int *tmp___21 ;
  int tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  int tmp___25 ;

  {
  if (pid == 0) {
    if ((unsigned int )follow_mode == 2U) {
      if (n_files == 1UL) {
        if (! (((f + 0)->mode & 61440U) == 32768U)) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  blocking = (_Bool )tmp;
  writer_is_dead = (_Bool)0;
  last = n_files - 1UL;
  while (1) {
    any_input = (_Bool)0;
    i = 0UL;
    while (i < n_files) {
      if ((f + i)->ignore) {
        goto __Cont;
      } else {

      }
      if ((f + i)->fd < 0) {
        recheck(f + i, blocking);
        goto __Cont;
      } else {

      }
      fd = (f + i)->fd;
      name = pretty_name((struct File_spec  const  *)(f + i));
      mode = (f + i)->mode;
      if ((f + i)->blocking != (int )blocking) {
        tmp___0 = rpl_fcntl(fd, 3);
        old_flags = tmp___0;
        if (blocking) {
          tmp___1 = 0;
        } else {
          tmp___1 = 2048;
        }
        new_flags = old_flags | tmp___1;
        if (old_flags < 0) {
          goto _L;
        } else {
          if (new_flags != old_flags) {
            tmp___5 = rpl_fcntl(fd, 4, new_flags);
            if (tmp___5 == -1) {
              _L: 
              if (((f + i)->mode & 61440U) == 32768U) {
                tmp___4 = __errno_location();
                if (! (*tmp___4 == 1)) {
                  tmp___2 = gettext("%s: cannot change nonblocking mode");
                  tmp___3 = __errno_location();
                  error(1, *tmp___3, (char const   *)tmp___2, name);
                } else {

                }
              } else {
                tmp___2 = gettext("%s: cannot change nonblocking mode");
                tmp___3 = __errno_location();
                error(1, *tmp___3, (char const   *)tmp___2, name);
              }
            } else {
              (f + i)->blocking = (int )blocking;
            }
          } else {
            (f + i)->blocking = (int )blocking;
          }
        }
      } else {

      }
      if (! (f + i)->blocking) {
        tmp___8 = fstat(fd, & stats);
        if (tmp___8 != 0) {
          (f + i)->fd = -1;
          tmp___6 = __errno_location();
          (f + i)->errnum = *tmp___6;
          tmp___7 = __errno_location();
          error(0, *tmp___7, "%s", name);
          close(fd);
          goto __Cont;
        } else {

        }
        if ((f + i)->mode == stats.st_mode) {
          if (! ((stats.st_mode & 61440U) == 32768U)) {
            goto _L___0;
          } else {
            if ((f + i)->size == stats.st_size) {
              _L___0: 
              tmp___10 = get_stat_mtime((struct stat  const  *)(& stats));
              tmp___11 = timespec_cmp((f + i)->mtime, (struct timespec )tmp___10);
              if (tmp___11 == (int __attribute__((__gnu_inline__))  )0) {
                tmp___9 = (f + i)->n_unchanged_stats;
                ((f + i)->n_unchanged_stats) ++;
                if (max_n_unchanged_stats_between_opens <= tmp___9) {
                  if ((unsigned int )follow_mode == 1U) {
                    recheck(f + i, (_Bool )(f + i)->blocking);
                    (f + i)->n_unchanged_stats = 0UL;
                  } else {

                  }
                } else {

                }
                goto __Cont;
              } else {

              }
            } else {

            }
          }
        } else {

        }
        tmp___12 = get_stat_mtime((struct stat  const  *)(& stats));
        (f + i)->mtime = (struct timespec )tmp___12;
        (f + i)->mode = stats.st_mode;
        (f + i)->n_unchanged_stats = 0UL;
        if ((mode & 61440U) == 32768U) {
          if (stats.st_size < (f + i)->size) {
            tmp___13 = gettext("%s: file truncated");
            error(0, 0, (char const   *)tmp___13, name);
            last = i;
            xlseek(fd, stats.st_size, 0, name);
            (f + i)->size = stats.st_size;
            goto __Cont;
          } else {

          }
        } else {

        }
        if (i != last) {
          if (print_headers) {
            write_header(name);
          } else {

          }
          last = i;
        } else {

        }
      } else {

      }
      if ((f + i)->blocking) {
        tmp___14 = -1;
      } else {
        tmp___14 = 0;
      }
      bytes_read = dump_remainder(name, fd, (unsigned long )tmp___14);
      any_input = (_Bool )((int )any_input | (bytes_read != 0UL));
      (f + i)->size = (long )((unsigned long )(f + i)->size + bytes_read);
      __Cont: 
      i ++;
    }
    tmp___16 = any_live_files((struct File_spec  const  *)f, n_files);
    if (! tmp___16) {
      if (! reopen_inaccessible_files) {
        tmp___15 = gettext("no files remaining");
        error(0, 0, (char const   *)tmp___15);
        break;
      } else {

      }
    } else {

    }
    if (! any_input) {
      goto _L___1;
    } else {
      if (blocking) {
        _L___1: 
        tmp___19 = fflush_unlocked(stdout);
        if (tmp___19 != 0) {
          tmp___17 = gettext("write error");
          tmp___18 = __errno_location();
          error(1, *tmp___18, (char const   *)tmp___17);
        } else {

        }
      } else {

      }
    }
    if (! any_input) {
      if (writer_is_dead) {
        break;
      } else {

      }
      if (pid != 0) {
        tmp___20 = kill(pid, 0);
        if (tmp___20 != 0) {
          tmp___21 = __errno_location();
          if (*tmp___21 != 1) {
            tmp___22 = 1;
          } else {
            tmp___22 = 0;
          }
        } else {
          tmp___22 = 0;
        }
      } else {
        tmp___22 = 0;
      }
      writer_is_dead = (_Bool )tmp___22;
      if (! writer_is_dead) {
        tmp___25 = xnanosleep(sleep_interval);
        if (tmp___25) {
          tmp___23 = gettext("cannot read realtime clock");
          tmp___24 = __errno_location();
          error(1, *tmp___24, (char const   *)tmp___23);
        } else {

        }
      } else {

      }
    } else {

    }
  }
  return;
}
}
static _Bool any_remote_file(struct File_spec  const  *f , size_t n_files ) 
{ size_t i ;

  {
  i = 0UL;
  while (i < n_files) {
    if (0 <= (int )(f + i)->fd) {
      if ((f + i)->remote) {
        return ((_Bool)1);
      } else {

      }
    } else {

    }
    i ++;
  }
  return ((_Bool)0);
}
}
static _Bool tailable_stdin(struct File_spec  const  *f , size_t n_files ) 
{ size_t i ;
  int tmp ;

  {
  i = 0UL;
  while (i < n_files) {
    if (! (f + i)->ignore) {
      tmp = strcmp((char const   *)(f + i)->name, "-");
      if (tmp == 0) {
        return ((_Bool)1);
      } else {

      }
    } else {

    }
    i ++;
  }
  return ((_Bool)0);
}
}
static size_t wd_hasher(void const   *entry , size_t tabsize ) 
{ struct File_spec  const  *spec ;

  {
  spec = (struct File_spec  const  *)entry;
  return ((unsigned long )spec->wd % tabsize);
}
}
static _Bool wd_comparator(void const   *e1 , void const   *e2 ) 
{ struct File_spec  const  *spec1 ;
  struct File_spec  const  *spec2 ;

  {
  spec1 = (struct File_spec  const  *)e1;
  spec2 = (struct File_spec  const  *)e2;
  return ((_Bool )(spec1->wd == spec2->wd));
}
}
static void check_fspec(struct File_spec *fspec , int wd , int *prev_wd ) 
{ struct stat stats ;
  char const   *name ;
  char const   *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  struct timespec  __attribute__((__gnu_inline__)) tmp___3 ;
  int __attribute__((__gnu_inline__))  tmp___4 ;
  uintmax_t bytes_read ;
  uintmax_t tmp___5 ;
  char *tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;

  {
  tmp = pretty_name((struct File_spec  const  *)fspec);
  name = tmp;
  tmp___1 = fstat(fspec->fd, & stats);
  if (tmp___1 != 0) {
    tmp___0 = __errno_location();
    fspec->errnum = *tmp___0;
    close_fd(fspec->fd, name);
    fspec->fd = -1;
    return;
  } else {

  }
  if ((fspec->mode & 61440U) == 32768U) {
    if (stats.st_size < fspec->size) {
      tmp___2 = gettext("%s: file truncated");
      error(0, 0, (char const   *)tmp___2, name);
      *prev_wd = wd;
      xlseek(fspec->fd, stats.st_size, 0, name);
      fspec->size = stats.st_size;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if ((fspec->mode & 61440U) == 32768U) {
      if (stats.st_size == fspec->size) {
        tmp___3 = get_stat_mtime((struct stat  const  *)(& stats));
        tmp___4 = timespec_cmp(fspec->mtime, (struct timespec )tmp___3);
        if (tmp___4 == (int __attribute__((__gnu_inline__))  )0) {
          return;
        } else {

        }
      } else {

      }
    } else {

    }
  }
  if (wd != *prev_wd) {
    if (print_headers) {
      write_header(name);
    } else {

    }
    *prev_wd = wd;
  } else {

  }
  tmp___5 = dump_remainder(name, fspec->fd, 0UL);
  bytes_read = tmp___5;
  fspec->size = (long )((unsigned long )fspec->size + bytes_read);
  tmp___8 = fflush_unlocked(stdout);
  if (tmp___8 != 0) {
    tmp___6 = gettext("write error");
    tmp___7 = __errno_location();
    error(1, *tmp___7, (char const   *)tmp___6);
  } else {

  }
  return;
}
}
static _Bool tail_forever_inotify(int wd , struct File_spec *f , size_t n_files , double sleep_interval ) 
{ unsigned int max_realloc ;
  Hash_table *wd_to_name ;
  _Bool found_watchable_file ;
  _Bool found_unwatchable_dir ;
  _Bool no_inotify_resources ;
  _Bool writer_is_dead ;
  int prev_wd ;
  size_t evlen ;
  char *evbuf ;
  size_t evbuf_off ;
  size_t len ;
  size_t i ;
  size_t fnlen ;
  size_t tmp ;
  size_t dirlen ;
  size_t tmp___0 ;
  char prev ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  char *tmp___6 ;
  int *tmp___7 ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  int *tmp___11 ;
  int *tmp___12 ;
  int *tmp___13 ;
  void *tmp___14 ;
  int *tmp___15 ;
  void *tmp___16 ;
  struct File_spec *fspec ;
  struct inotify_event *ev ;
  char *tmp___17 ;
  size_t tmp___18 ;
  int tmp___19 ;
  int *tmp___20 ;
  int tmp___21 ;
  struct timeval delay ;
  fd_set rfd ;
  int __d0 ;
  int __d1 ;
  int file_change ;
  int tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  void *tmp___25 ;
  int *tmp___26 ;
  unsigned int tmp___27 ;
  char *tmp___28 ;
  int *tmp___29 ;
  size_t j ;
  int tmp___30 ;
  int new_wd ;
  int tmp___31 ;
  char const   *tmp___32 ;
  char *tmp___33 ;
  int *tmp___34 ;
  struct File_spec *prev___0 ;
  void *tmp___35 ;
  char const   *tmp___36 ;
  void *tmp___37 ;
  struct File_spec key ;
  void *tmp___38 ;

  {
  max_realloc = 3U;
  found_watchable_file = (_Bool)0;
  found_unwatchable_dir = (_Bool)0;
  no_inotify_resources = (_Bool)0;
  writer_is_dead = (_Bool)0;
  evlen = 0UL;
  evbuf_off = 0UL;
  len = 0UL;
  wd_to_name = hash_initialize(n_files, (Hash_tuning const   *)((void *)0), & wd_hasher, & wd_comparator, (void (*)(void * ))((void *)0));
  if (! wd_to_name) {
    xalloc_die();
  } else {

  }
  i = 0UL;
  while (i < n_files) {
    if (! (f + i)->ignore) {
      tmp = strlen((char const   *)(f + i)->name);
      fnlen = tmp;
      if (evlen < fnlen) {
        evlen = fnlen;
      } else {

      }
      (f + i)->wd = -1;
      if ((unsigned int )follow_mode == 1U) {
        tmp___0 = dir_len((char const   *)(f + i)->name);
        dirlen = tmp___0;
        prev = *((f + i)->name + dirlen);
        tmp___1 = last_component((char const   *)(f + i)->name);
        (f + i)->basename_start = (unsigned long )(tmp___1 - (f + i)->name);
        *((f + i)->name + dirlen) = (char )'\000';
        if (dirlen) {
          tmp___2 = (char const   *)(f + i)->name;
        } else {
          tmp___2 = ".";
        }
        (f + i)->parent_wd = inotify_add_watch(wd, tmp___2, 388U);
        *((f + i)->name + dirlen) = prev;
        if ((f + i)->parent_wd < 0) {
          tmp___7 = __errno_location();
          if (*tmp___7 != 28) {
            tmp___3 = quote((char const   *)(f + i)->name);
            tmp___4 = gettext("cannot watch parent directory of %s");
            tmp___5 = __errno_location();
            error(0, *tmp___5, (char const   *)tmp___4, tmp___3);
          } else {
            tmp___6 = gettext("inotify resources exhausted");
            error(0, 0, (char const   *)tmp___6);
          }
          found_unwatchable_dir = (_Bool)1;
          break;
        } else {

        }
      } else {

      }
      (f + i)->wd = inotify_add_watch(wd, (char const   *)(f + i)->name, (unsigned int )inotify_wd_mask);
      if ((f + i)->wd < 0) {
        tmp___13 = __errno_location();
        if (*tmp___13 == 28) {
          no_inotify_resources = (_Bool)1;
          tmp___8 = gettext("inotify resources exhausted");
          error(0, 0, (char const   *)tmp___8);
        } else {
          tmp___12 = __errno_location();
          if (*tmp___12 != (f + i)->errnum) {
            tmp___9 = quote((char const   *)(f + i)->name);
            tmp___10 = gettext("cannot watch %s");
            tmp___11 = __errno_location();
            error(0, *tmp___11, (char const   *)tmp___10, tmp___9);
          } else {

          }
        }
        goto __Cont;
      } else {

      }
      tmp___14 = hash_insert(wd_to_name, (void const   *)(f + i));
      if ((unsigned long )tmp___14 == (unsigned long )((void *)0)) {
        xalloc_die();
      } else {

      }
      found_watchable_file = (_Bool)1;
    } else {

    }
    __Cont: 
    i ++;
  }
  if (no_inotify_resources) {
    tmp___15 = __errno_location();
    *tmp___15 = 0;
    return ((_Bool)1);
  } else {
    if (found_unwatchable_dir) {
      tmp___15 = __errno_location();
      *tmp___15 = 0;
      return ((_Bool)1);
    } else {

    }
  }
  if ((unsigned int )follow_mode == 2U) {
    if (! found_watchable_file) {
      return ((_Bool)0);
    } else {

    }
  } else {

  }
  prev_wd = (f + (n_files - 1UL))->wd;
  i = 0UL;
  while (i < n_files) {
    if (! (f + i)->ignore) {
      check_fspec(f + i, (f + i)->wd, & prev_wd);
    } else {

    }
    i ++;
  }
  evlen += sizeof(struct inotify_event ) + 1UL;
  tmp___16 = xmalloc(evlen);
  evbuf = (char *)tmp___16;
  while (1) {
    if ((unsigned int )follow_mode == 1U) {
      if (! reopen_inaccessible_files) {
        tmp___18 = hash_get_n_entries((Hash_table const   *)wd_to_name);
        if (tmp___18 == 0UL) {
          tmp___17 = gettext("no files remaining");
          error(0, 0, (char const   *)tmp___17);
          return ((_Bool)0);
        } else {

        }
      } else {

      }
    } else {

    }
    if (pid) {
      if (writer_is_dead) {
        exit(0);
      } else {

      }
      tmp___19 = kill(pid, 0);
      if (tmp___19 != 0) {
        tmp___20 = __errno_location();
        if (*tmp___20 != 1) {
          tmp___21 = 1;
        } else {
          tmp___21 = 0;
        }
      } else {
        tmp___21 = 0;
      }
      writer_is_dead = (_Bool )tmp___21;
      if (writer_is_dead) {
        delay.tv_usec = 0L;
        delay.tv_sec = delay.tv_usec;
      } else {
        delay.tv_sec = (long )sleep_interval;
        delay.tv_usec = (long )((double )1000000 * (sleep_interval - (double )delay.tv_sec));
      }
      while (1) {
        __asm__  volatile   ("cld; rep; "
                             "stosq": "=c" (__d0), "=D" (__d1): "a" (0), "0" (sizeof(fd_set ) / sizeof(__fd_mask )), "1" (& rfd.fds_bits[0]): "memory");
        break;
      }
      rfd.fds_bits[wd / (8 * (int )sizeof(__fd_mask ))] |= 1L << wd % (8 * (int )sizeof(__fd_mask ));
      tmp___22 = select(wd + 1, (fd_set */* __restrict  */)(& rfd), (fd_set */* __restrict  */)((void *)0), (fd_set */* __restrict  */)((void *)0), (struct timeval */* __restrict  */)(& delay));
      file_change = tmp___22;
      if (file_change == 0) {
        continue;
      } else {
        if (file_change == -1) {
          tmp___23 = gettext("error monitoring inotify event");
          tmp___24 = __errno_location();
          error(1, *tmp___24, (char const   *)tmp___23);
        } else {

        }
      }
    } else {

    }
    if (len <= evbuf_off) {
      len = safe_read(wd, (void *)evbuf, evlen);
      evbuf_off = 0UL;
      if (len == 0UL) {
        goto _L;
      } else {
        if (len == 4294967295UL) {
          tmp___26 = __errno_location();
          if (*tmp___26 == 22) {
            _L: 
            tmp___27 = max_realloc;
            max_realloc --;
            if (tmp___27) {
              len = 0UL;
              evlen *= 2UL;
              tmp___25 = xrealloc((void *)evbuf, evlen);
              evbuf = (char *)tmp___25;
              continue;
            } else {

            }
          } else {

          }
        } else {

        }
      }
      if (len == 0UL) {
        tmp___28 = gettext("error reading inotify event");
        tmp___29 = __errno_location();
        error(1, *tmp___29, (char const   *)tmp___28);
      } else {
        if (len == 4294967295UL) {
          tmp___28 = gettext("error reading inotify event");
          tmp___29 = __errno_location();
          error(1, *tmp___29, (char const   *)tmp___28);
        } else {

        }
      }
    } else {

    }
    ev = (struct inotify_event *)(evbuf + evbuf_off);
    evbuf_off += sizeof(*ev) + (unsigned long )ev->len;
    if (ev->len) {
      j = 0UL;
      while (j < n_files) {
        if ((f + j)->parent_wd == ev->wd) {
          tmp___30 = strcmp((char const   *)(ev->name), (char const   *)((f + j)->name + (f + j)->basename_start));
          if (tmp___30 == 0) {
            break;
          } else {

          }
        } else {

        }
        j ++;
      }
      if (j == n_files) {
        continue;
      } else {

      }
      tmp___31 = inotify_add_watch(wd, (char const   *)(f + j)->name, (unsigned int )inotify_wd_mask);
      new_wd = tmp___31;
      if (new_wd < 0) {
        tmp___32 = quote((char const   *)(f + j)->name);
        tmp___33 = gettext("cannot watch %s");
        tmp___34 = __errno_location();
        error(0, *tmp___34, (char const   *)tmp___33, tmp___32);
        continue;
      } else {

      }
      fspec = f + j;
      hash_delete(wd_to_name, (void const   *)fspec);
      fspec->wd = new_wd;
      tmp___35 = hash_delete(wd_to_name, (void const   *)fspec);
      prev___0 = (struct File_spec *)tmp___35;
      if (prev___0) {
        if ((unsigned long )prev___0 != (unsigned long )fspec) {
          if ((unsigned int )follow_mode == 1U) {
            recheck(prev___0, (_Bool)0);
          } else {

          }
          prev___0->wd = -1;
          tmp___36 = pretty_name((struct File_spec  const  *)prev___0);
          close_fd(prev___0->fd, tmp___36);
        } else {

        }
      } else {

      }
      tmp___37 = hash_insert(wd_to_name, (void const   *)fspec);
      if ((unsigned long )tmp___37 == (unsigned long )((void *)0)) {
        xalloc_die();
      } else {

      }
      if ((unsigned int )follow_mode == 1U) {
        recheck(fspec, (_Bool)0);
      } else {

      }
    } else {
      key.wd = ev->wd;
      tmp___38 = hash_lookup((Hash_table const   *)wd_to_name, (void const   *)(& key));
      fspec = (struct File_spec *)tmp___38;
    }
    if (! fspec) {
      continue;
    } else {

    }
    if (ev->mask & 3076U) {
      if (ev->mask & 1024U) {
        inotify_rm_watch(wd, fspec->wd);
        hash_delete(wd_to_name, (void const   *)fspec);
      } else {
        if (ev->mask & 2048U) {
          if ((unsigned int )follow_mode == 2U) {
            inotify_rm_watch(wd, fspec->wd);
            hash_delete(wd_to_name, (void const   *)fspec);
          } else {

          }
        } else {

        }
      }
      if ((unsigned int )follow_mode == 1U) {
        recheck(fspec, (_Bool)0);
      } else {

      }
      continue;
    } else {

    }
    check_fspec(fspec, ev->wd, & prev_wd);
  }
}
}
static _Bool tail_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes , uintmax_t *read_pos ) 
{ struct stat stats ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int t ;
  int tmp___3 ;
  uintmax_t tmp___4 ;
  off_t current_pos ;
  off_t tmp___5 ;
  off_t end_pos ;
  off_t tmp___6 ;
  off_t diff ;
  off_t bytes_remaining ;
  off_t tmp___7 ;
  off_t nb ;
  off_t tmp___8 ;
  off_t tmp___9 ;
  uintmax_t tmp___10 ;
  _Bool tmp___11 ;

  {
  tmp___2 = fstat(fd, & stats);
  if (tmp___2) {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("cannot fstat %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    return ((_Bool)0);
  } else {

  }
  if (from_start) {
    if (! presume_input_pipe) {
      if ((stats.st_mode & 61440U) == 32768U) {
        if (n_bytes <= (unsigned long )(((1L << (sizeof(off_t ) * 8UL - 2UL)) - 1L) * 2L + 1L)) {
          xlseek(fd, (long )n_bytes, 1, pretty_filename);
          *read_pos += n_bytes;
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      tmp___3 = start_bytes(pretty_filename, fd, n_bytes, read_pos);
      t = tmp___3;
      if (t) {
        return ((_Bool )(t < 0));
      } else {

      }
    }
    tmp___4 = dump_remainder(pretty_filename, fd, 0UL);
    *read_pos += tmp___4;
  } else {
    if (! presume_input_pipe) {
      if ((stats.st_mode & 61440U) == 32768U) {
        if (n_bytes <= (unsigned long )(((1L << (sizeof(off_t ) * 8UL - 2UL)) - 1L) * 2L + 1L)) {
          tmp___5 = xlseek(fd, 0L, 1, pretty_filename);
          current_pos = tmp___5;
          tmp___6 = xlseek(fd, 0L, 2, pretty_filename);
          end_pos = tmp___6;
          diff = end_pos - current_pos;
          if (diff < 0L) {
            tmp___7 = 0L;
          } else {
            tmp___7 = diff;
          }
          bytes_remaining = tmp___7;
          nb = (long )n_bytes;
          if (bytes_remaining <= nb) {
            tmp___8 = xlseek(fd, current_pos, 0, pretty_filename);
            *read_pos = (unsigned long )tmp___8;
          } else {
            tmp___9 = xlseek(fd, - nb, 2, pretty_filename);
            *read_pos = (unsigned long )tmp___9;
          }
          tmp___10 = dump_remainder(pretty_filename, fd, n_bytes);
          *read_pos += tmp___10;
        } else {
          tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
          return (tmp___11);
        }
      } else {
        tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
        return (tmp___11);
      }
    } else {
      tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
      return (tmp___11);
    }
  }
  return ((_Bool)1);
}
}
static _Bool tail_lines(char const   *pretty_filename , int fd , uintmax_t n_lines , uintmax_t *read_pos ) 
{ struct stat stats ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int t ;
  int tmp___3 ;
  uintmax_t tmp___4 ;
  off_t start_pos ;
  off_t end_pos ;
  _Bool tmp___5 ;
  _Bool tmp___6 ;

  {
  tmp___2 = fstat(fd, & stats);
  if (tmp___2) {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("cannot fstat %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    return ((_Bool)0);
  } else {

  }
  if (from_start) {
    tmp___3 = start_lines(pretty_filename, fd, n_lines, read_pos);
    t = tmp___3;
    if (t) {
      return ((_Bool )(t < 0));
    } else {

    }
    tmp___4 = dump_remainder(pretty_filename, fd, 0UL);
    *read_pos += tmp___4;
  } else {
    start_pos = -1L;
    if (! presume_input_pipe) {
      if ((stats.st_mode & 61440U) == 32768U) {
        start_pos = lseek(fd, 0L, 1);
        if (start_pos != -1L) {
          end_pos = lseek(fd, 0L, 2);
          if (start_pos < end_pos) {
            *read_pos = (unsigned long )end_pos;
            if (end_pos != 0L) {
              tmp___5 = file_lines(pretty_filename, fd, n_lines, start_pos, end_pos, read_pos);
              if (! tmp___5) {
                return ((_Bool)0);
              } else {

              }
            } else {

            }
          } else {
            goto _L___1;
          }
        } else {
          goto _L___1;
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
      if (start_pos != -1L) {
        xlseek(fd, start_pos, 0, pretty_filename);
      } else {

      }
      tmp___6 = pipe_lines(pretty_filename, fd, n_lines, read_pos);
      return (tmp___6);
    }
  }
  return ((_Bool)1);
}
}
static _Bool tail(char const   *filename , int fd , uintmax_t n_units , uintmax_t *read_pos ) 
{ _Bool tmp ;
  _Bool tmp___0 ;

  {
  *read_pos = 0UL;
  if (count_lines) {
    tmp = tail_lines(filename, fd, n_units, read_pos);
    return (tmp);
  } else {
    tmp___0 = tail_bytes(filename, fd, n_units, read_pos);
    return (tmp___0);
  }
}
}
static _Bool tail_file(struct File_spec *f , uintmax_t n_units ) 
{ int fd ;
  _Bool ok ;
  _Bool is_stdin ;
  int tmp ;
  int tmp___1 ;
  int *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  uintmax_t read_pos ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  struct stat stats ;
  int *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  char const   *tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  char const   *tmp___17 ;
  int tmp___18 ;
  char const   *tmp___19 ;
  char const   *tmp___20 ;
  char const   *tmp___21 ;
  char *tmp___22 ;
  int *tmp___23 ;
  int tmp___24 ;

  {
  tmp = strcmp((char const   *)f->name, "-");
  is_stdin = (_Bool )(tmp == 0);
  if (is_stdin) {
    have_read_stdin = (_Bool)1;
    fd = 0;
  } else {
    fd = open_safer((char const   *)f->name, 0);
  }
  if (reopen_inaccessible_files) {
    if (fd == -1) {
      tmp___1 = 0;
    } else {
      tmp___1 = 1;
    }
  } else {
    tmp___1 = 1;
  }
  f->tailable = (_Bool )tmp___1;
  if (fd == -1) {
    if (forever) {
      f->fd = -1;
      tmp___2 = __errno_location();
      f->errnum = *tmp___2;
      f->ignore = (_Bool)0;
      f->ino = 0UL;
      f->dev = 0UL;
    } else {

    }
    tmp___3 = pretty_name((struct File_spec  const  *)f);
    tmp___4 = quote(tmp___3);
    tmp___5 = gettext("cannot open %s for reading");
    tmp___6 = __errno_location();
    error(0, *tmp___6, (char const   *)tmp___5, tmp___4);
    ok = (_Bool)0;
  } else {
    if (print_headers) {
      tmp___7 = pretty_name((struct File_spec  const  *)f);
      write_header(tmp___7);
    } else {

    }
    tmp___8 = pretty_name((struct File_spec  const  *)f);
    ok = tail(tmp___8, fd, n_units, & read_pos);
    if (forever) {
      f->errnum = (int )ok - 1;
      tmp___16 = fstat(fd, & stats);
      if (tmp___16 < 0) {
        ok = (_Bool)0;
        tmp___9 = __errno_location();
        f->errnum = *tmp___9;
        tmp___10 = pretty_name((struct File_spec  const  *)f);
        tmp___11 = quote(tmp___10);
        tmp___12 = gettext("error reading %s");
        tmp___13 = __errno_location();
        error(0, *tmp___13, (char const   *)tmp___12, tmp___11);
      } else {
        if (! ((stats.st_mode & 61440U) == 32768U)) {
          if (! ((stats.st_mode & 61440U) == 4096U)) {
            if (! ((stats.st_mode & 61440U) == 49152U)) {
              if (! ((stats.st_mode & 61440U) == 8192U)) {
                tmp___14 = pretty_name((struct File_spec  const  *)f);
                tmp___15 = gettext("%s: cannot follow end of this type of file; giving up on this name");
                error(0, 0, (char const   *)tmp___15, tmp___14);
                ok = (_Bool)0;
                f->errnum = -1;
                f->ignore = (_Bool)1;
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
      }
      if (! ok) {
        tmp___17 = pretty_name((struct File_spec  const  *)f);
        close_fd(fd, tmp___17);
        f->fd = -1;
      } else {
        if (is_stdin) {
          tmp___18 = -1;
        } else {
          tmp___18 = 1;
        }
        record_open_fd(f, fd, (long )read_pos, (struct stat  const  *)(& stats), tmp___18);
        tmp___19 = pretty_name((struct File_spec  const  *)f);
        f->remote = fremote(fd, tmp___19);
      }
    } else {
      if (! is_stdin) {
        tmp___24 = close(fd);
        if (tmp___24) {
          tmp___20 = pretty_name((struct File_spec  const  *)f);
          tmp___21 = quote(tmp___20);
          tmp___22 = gettext("error reading %s");
          tmp___23 = __errno_location();
          error(0, *tmp___23, (char const   *)tmp___22, tmp___21);
          ok = (_Bool)0;
        } else {

        }
      } else {

      }
    }
  }
  return (ok);
}
}
static _Bool parse_obsolete_option(int argc , char * const  *argv , uintmax_t *n_units ) 
{ char const   *p ;
  char const   *n_string ;
  char const   *n_string_end ;
  _Bool obsolete_usage ;
  int default_count ;
  _Bool t_from_start ;
  _Bool t_count_lines ;
  _Bool t_forever ;
  int tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  strtol_error tmp___4 ;

  {
  default_count = 10;
  t_count_lines = (_Bool)1;
  t_forever = (_Bool)0;
  if (! (argc == 2)) {
    if (argc == 3) {
      if ((int )*(*(argv + 2) + 0) == 45) {
        if (*(*(argv + 2) + 1)) {
          goto _L;
        } else {

        }
      } else {

      }
    } else {
      _L: 
      if (3 <= argc) {
        if (argc <= 4) {
          tmp = strcmp((char const   *)*(argv + 2), "--");
          if (! (tmp == 0)) {
            return ((_Bool)0);
          } else {

          }
        } else {
          return ((_Bool)0);
        }
      } else {
        return ((_Bool)0);
      }
    }
  } else {

  }
  tmp___0 = posix2_version();
  obsolete_usage = (_Bool )(tmp___0 < 200112);
  p = (char const   *)*(argv + 1);
  tmp___1 = p;
  p ++;
  switch ((int )*tmp___1) {
  default: ;
  return ((_Bool)0);
  case 43: 
  if (! obsolete_usage) {
    return ((_Bool)0);
  } else {

  }
  t_from_start = (_Bool)1;
  break;
  case 45: 
  if (! obsolete_usage) {
    if (! *(p + ((int const   )*(p + 0) == 99))) {
      return ((_Bool)0);
    } else {

    }
  } else {

  }
  t_from_start = (_Bool)0;
  break;
  }
  n_string = p;
  while ((unsigned int )*p - 48U <= 9U) {
    p ++;
  }
  n_string_end = p;
  switch ((int )*p) {
  case 98: 
  default_count *= 512;
  case 99: 
  t_count_lines = (_Bool)0;
  case 108: 
  p ++;
  break;
  }
  if ((int const   )*p == 102) {
    t_forever = (_Bool)1;
    p ++;
  } else {

  }
  if (*p) {
    return ((_Bool)0);
  } else {

  }
  if ((unsigned long )n_string == (unsigned long )n_string_end) {
    *n_units = (unsigned long )default_count;
  } else {
    tmp___4 = xstrtoumax(n_string, (char **)((void *)0), 10, n_units, "b");
    if (((unsigned int )tmp___4 & 4294967293U) != 0U) {
      tmp___2 = quote((char const   *)*(argv + 1));
      tmp___3 = gettext("number in %s is too large");
      error(1, 0, (char const   *)tmp___3, tmp___2);
    } else {

    }
  }
  from_start = t_from_start;
  count_lines = t_count_lines;
  forever = t_forever;
  return ((_Bool)1);
}
}
static void parse_options(int argc , char **argv , uintmax_t *n_units , enum header_mode *header_mode , double *sleep_interval ) 
{ int c ;
  strtol_error s_err ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  ptrdiff_t tmp___2 ;
  char *tmp___3 ;
  strtol_error tmp___4 ;
  strtol_error s_err___0 ;
  unsigned long tmp_ulong ;
  char *tmp___5 ;
  double s ;
  char *tmp___6 ;
  _Bool tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  int tmp___13 ;
  int *tmp___14 ;

  {
  while (1) {
    c = getopt_long(argc, (char * const  *)argv, "c:n:fFqs:v0123456789", long_options, (int *)((void *)0));
    if (! (c != -1)) {
      break;
    } else {

    }
    switch (c) {
    case 70: 
    forever = (_Bool)1;
    follow_mode = (enum Follow_mode )1;
    reopen_inaccessible_files = (_Bool)1;
    break;
    case 99: 
    case 110: 
    count_lines = (_Bool )(c == 110);
    if ((int )*optarg == 43) {
      from_start = (_Bool)1;
    } else {
      if ((int )*optarg == 45) {
        optarg ++;
      } else {

      }
    }
    s_err = xstrtoumax((char const   *)optarg, (char **)((void *)0), 10, n_units, "bkKmMGTPEZY0");
    if ((unsigned int )s_err != 0U) {
      if (c == 110) {
        tmp = gettext("invalid number of lines");
        tmp___1 = tmp;
      } else {
        tmp___0 = gettext("invalid number of bytes");
        tmp___1 = tmp___0;
      }
      error(1, 0, "%s: %s", optarg, tmp___1);
    } else {

    }
    break;
    case 102: 
    case 132: 
    forever = (_Bool)1;
    if ((unsigned long )optarg == (unsigned long )((void *)0)) {
      follow_mode = (enum Follow_mode )2;
    } else {
      tmp___2 = __xargmatch_internal("--follow", (char const   *)optarg, follow_mode_string, (char const   *)(follow_mode_map), sizeof(follow_mode_map[0]), argmatch_die);
      follow_mode = (enum Follow_mode )follow_mode_map[tmp___2];
    }
    break;
    case 128: 
    reopen_inaccessible_files = (_Bool)1;
    break;
    case 129: 
    tmp___4 = xstrtoumax((char const   *)optarg, (char **)((void *)0), 10, & max_n_unchanged_stats_between_opens, "");
    if ((unsigned int )tmp___4 != 0U) {
      tmp___3 = gettext("%s: invalid maximum number of unchanged stats between opens");
      error(1, 0, (char const   *)tmp___3, optarg);
    } else {

    }
    break;
    case 133: 
    disable_inotify = (_Bool)1;
    break;
    case 130: 
    s_err___0 = xstrtoul((char const   *)optarg, (char **)((void *)0), 10, & tmp_ulong, "");
    if ((unsigned int )s_err___0 != 0U) {
      tmp___5 = gettext("%s: invalid PID");
      error(1, 0, (char const   *)tmp___5, optarg);
    } else {
      if (tmp_ulong > (unsigned long )(((1 << (sizeof(pid_t ) * 8UL - 2UL)) - 1) * 2 + 1)) {
        tmp___5 = gettext("%s: invalid PID");
        error(1, 0, (char const   *)tmp___5, optarg);
      } else {

      }
    }
    pid = (int )tmp_ulong;
    break;
    case 131: 
    presume_input_pipe = (_Bool)1;
    break;
    case 113: 
    *header_mode = (enum header_mode )2;
    break;
    case 115: 
    tmp___7 = xstrtod((char const   *)optarg, (char const   **)((void *)0), & s, & c_strtod);
    if (tmp___7) {
      if (! ((double )0 <= s)) {
        tmp___6 = gettext("%s: invalid number of seconds");
        error(1, 0, (char const   *)tmp___6, optarg);
      } else {

      }
    } else {
      tmp___6 = gettext("%s: invalid number of seconds");
      error(1, 0, (char const   *)tmp___6, optarg);
    }
    *sleep_interval = s;
    break;
    case 118: 
    *header_mode = (enum header_mode )1;
    break;
    case -130: 
    usage(0);
    break;
    case -131: 
    version_etc(stdout, "tail", "GNU coreutils", Version, "Paul Rubin", "David MacKenzie", "Ian Lance Taylor", "Jim Meyering", (char *)((void *)0));
    exit(0);
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
    tmp___8 = gettext("option used in invalid context -- %c");
    error(1, 0, (char const   *)tmp___8, c);
    default: 
    usage(1);
    }
  }
  if (reopen_inaccessible_files) {
    if (! forever) {
      tmp___9 = gettext("warning: --retry ignored; --retry is useful only when following");
      error(0, 0, (char const   *)tmp___9);
    } else {
      if ((unsigned int )follow_mode == 2U) {
        tmp___10 = gettext("warning: --retry only effective for the initial open");
        error(0, 0, (char const   *)tmp___10);
      } else {

      }
    }
  } else {

  }
  if (pid) {
    if (! forever) {
      tmp___11 = gettext("warning: PID ignored; --pid=PID is useful only when following");
      error(0, 0, (char const   *)tmp___11);
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (pid) {
      tmp___13 = kill(pid, 0);
      if (tmp___13 != 0) {
        tmp___14 = __errno_location();
        if (*tmp___14 == 38) {
          tmp___12 = gettext("warning: --pid=PID is not supported on this system");
          error(0, 0, (char const   *)tmp___12);
          pid = 0;
        } else {

        }
      } else {

      }
    } else {

    }
  }
  return;
}
}
static size_t ignore_fifo_and_pipe(struct File_spec *f , size_t n_files ) 
{ size_t n_viable ;
  size_t i ;
  _Bool is_a_fifo_or_pipe ;
  int tmp ;
  int tmp___1 ;

  {
  n_viable = 0UL;
  i = 0UL;
  while (i < n_files) {
    tmp = strcmp((char const   *)(f + i)->name, "-");
    if (tmp == 0) {
      if (! (f + i)->ignore) {
        if (0 <= (f + i)->fd) {
          if (((f + i)->mode & 61440U) == 4096U) {
            tmp___1 = 1;
          } else {
            tmp___1 = 0;
          }
        } else {
          tmp___1 = 0;
        }
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
    is_a_fifo_or_pipe = (_Bool )tmp___1;
    if (is_a_fifo_or_pipe) {
      (f + i)->ignore = (_Bool)1;
    } else {
      n_viable ++;
    }
    i ++;
  }
  return (n_viable);
}
}
int main(int argc , char **argv ) ;
static char *dummy_stdin  =    (char *)"-";
int main(int argc , char **argv ) 
{ enum header_mode header_mode ;
  _Bool ok ;
  uintmax_t n_units ;
  size_t n_files ;
  char **file ;
  struct File_spec *F ;
  size_t i ;
  _Bool obsolete_option ;
  double sleep_interval ;
  _Bool found_hyphen ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  void __attribute__((__gnu_inline__))  *tmp___4 ;
  _Bool tmp___6 ;
  _Bool tmp___7 ;
  _Bool tmp___8 ;
  int wd ;
  int tmp___9 ;
  char *tmp___10 ;
  int *tmp___11 ;
  int tmp___12 ;
  _Bool tmp___13 ;
  char *tmp___14 ;
  int *tmp___15 ;
  size_t tmp___16 ;
  int *tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;

  {
  header_mode = (enum header_mode )0;
  ok = (_Bool)1;
  n_units = 10UL;
  sleep_interval = 1.0;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  have_read_stdin = (_Bool)0;
  count_lines = (_Bool)1;
  print_headers = (_Bool)0;
  from_start = print_headers;
  forever = from_start;
  obsolete_option = parse_obsolete_option(argc, (char * const  *)argv, & n_units);
  argc -= (int )obsolete_option;
  argv += (int )obsolete_option;
  parse_options(argc, argv, & n_units, & header_mode, & sleep_interval);
  if (from_start) {
    if (n_units) {
      n_units --;
    } else {

    }
  } else {

  }
  if (optind < argc) {
    n_files = (unsigned long )(argc - optind);
    file = argv + optind;
  } else {
    n_files = 1UL;
    file = & dummy_stdin;
  }
  found_hyphen = (_Bool)0;
  i = 0UL;
  while (i < n_files) {
    tmp = strcmp((char const   *)*(file + i), "-");
    if (tmp == 0) {
      found_hyphen = (_Bool)1;
    } else {

    }
    i ++;
  }
  if (found_hyphen) {
    if ((unsigned int )follow_mode == 1U) {
      tmp___0 = quote("-");
      tmp___1 = gettext("cannot follow %s by name");
      error(1, 0, (char const   *)tmp___1, tmp___0);
    } else {

    }
  } else {

  }
  if (forever) {
    if (found_hyphen) {
      tmp___3 = isatty(0);
      if (tmp___3) {
        tmp___2 = gettext("warning: following standard input indefinitely is ineffective");
        error(0, 0, (char const   *)tmp___2);
      } else {

      }
    } else {

    }
  } else {

  }
  if (! n_units) {
    if (! forever) {
      if (! from_start) {
        exit(0);
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___4 = xnmalloc(n_files, sizeof(*F));
  F = (struct File_spec *)tmp___4;
  i = 0UL;
  while (i < n_files) {
    (F + i)->name = *(file + i);
    i ++;
  }
  if ((unsigned int )header_mode == 1U) {
    print_headers = (_Bool)1;
  } else {
    if ((unsigned int )header_mode == 0U) {
      if (n_files > 1UL) {
        print_headers = (_Bool)1;
      } else {

      }
    } else {

    }
  }
  i = 0UL;
  while (i < n_files) {
    tmp___6 = tail_file(F + i, n_units);
    ok = (_Bool )((int )ok & (int )tmp___6);
    i ++;
  }
  if (forever) {
    tmp___16 = ignore_fifo_and_pipe(F, n_files);
    if (tmp___16) {
      __repair_del_1614__29: /* CIL Label */ 
      {

      }
      if (! disable_inotify) {
        tmp___9 = inotify_init();
        wd = tmp___9;
        if (0 <= wd) {
          tmp___12 = fflush_unlocked(stdout);
          if (tmp___12 != 0) {
            tmp___10 = gettext("write error");
            tmp___11 = __errno_location();
            error(1, *tmp___11, (char const   *)tmp___10);
          } else {

          }
          tmp___13 = tail_forever_inotify(wd, F, n_files, sleep_interval);
          if (! tmp___13) {
            exit(1);
          } else {

          }
        } else {

        }
        tmp___14 = gettext("inotify cannot be used, reverting to polling");
        tmp___15 = __errno_location();
        error(0, *tmp___15, (char const   *)tmp___14);
      } else {

      }
      disable_inotify = (_Bool)1;
      tail_forever(F, n_files, sleep_interval);
    } else {

    }
  } else {

  }
  if (have_read_stdin) {
    tmp___18 = close(0);
    if (tmp___18 < 0) {
      tmp___17 = __errno_location();
      error(1, *tmp___17, "-");
    } else {

    }
  } else {

  }
  if (ok) {
    tmp___19 = 0;
  } else {
    tmp___19 = 1;
  }
  exit(tmp___19);
}
}
