typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __ssize_t;
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
typedef __ssize_t ssize_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
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
typedef unsigned long uint64_t;
typedef unsigned long uintmax_t;
typedef unsigned int gl_uint32_t;
typedef unsigned long gl_uintptr_t;
typedef gl_uintptr_t word;
enum backup_type {
    no_backups = 0,
    simple_backups = 1,
    numbered_existing_backups = 2,
    numbered_backups = 3
} ;
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
enum Sparse_type {
    SPARSE_UNUSED = 0,
    SPARSE_NEVER = 1,
    SPARSE_AUTO = 2,
    SPARSE_ALWAYS = 3
} ;
enum Reflink_type {
    REFLINK_NEVER = 0,
    REFLINK_AUTO = 1,
    REFLINK_ALWAYS = 2
} ;
enum Interactive {
    I_ALWAYS_YES = 1,
    I_ALWAYS_NO = 2,
    I_ASK_USER = 3,
    I_UNSPECIFIED = 4
} ;
enum Dereference_symlink {
    DEREF_UNDEFINED = 1,
    DEREF_NEVER = 2,
    DEREF_COMMAND_LINE_ARGUMENTS = 3,
    DEREF_ALWAYS = 4
} ;
struct cp_options {
   enum backup_type backup_type ;
   enum Dereference_symlink dereference ;
   enum Interactive interactive ;
   enum Sparse_type sparse_mode ;
   mode_t mode ;
   _Bool copy_as_regular ;
   _Bool unlink_dest_before_opening ;
   _Bool unlink_dest_after_failed_open ;
   _Bool hard_link ;
   _Bool move_mode ;
   _Bool chown_privileges ;
   _Bool owner_privileges ;
   _Bool one_file_system ;
   _Bool preserve_ownership ;
   _Bool preserve_mode ;
   _Bool preserve_timestamps ;
   _Bool explicit_no_preserve_mode ;
   _Bool preserve_links ;
   _Bool data_copy_required ;
   _Bool require_preserve ;
   _Bool preserve_security_context ;
   _Bool require_preserve_context ;
   _Bool preserve_xattr ;
   _Bool require_preserve_xattr ;
   _Bool reduce_diagnostics ;
   _Bool recursive ;
   _Bool set_mode ;
   _Bool symbolic_link ;
   _Bool update ;
   _Bool verbose ;
   _Bool stdin_tty ;
   _Bool open_dangling_dest_symlink ;
   enum Reflink_type reflink_mode ;
   Hash_table *dest_info ;
   Hash_table *src_info ;
};
struct extent_info {
   off_t ext_logical ;
   uint64_t ext_length ;
   gl_uint32_t ext_flags ;
};
struct extent_scan {
   int fd ;
   off_t scan_start ;
   gl_uint32_t fm_flags ;
   gl_uint32_t ei_count ;
   _Bool initial_scan_failed ;
   _Bool hit_final_extent ;
   struct extent_info *ext_info ;
};
enum __anonenum_fadvice_t_61 {
    FADVISE_NORMAL = 0,
    FADVISE_SEQUENTIAL = 2,
    FADVISE_NOREUSE = 5,
    FADVISE_DONTNEED = 4,
    FADVISE_WILLNEED = 3,
    FADVISE_RANDOM = 1
} ;
typedef enum __anonenum_fadvice_t_61 fadvice_t;
struct dir_list {
   struct dir_list *parent ;
   ino_t ino ;
   dev_t dev ;
};
typedef gl_uintptr_t word___0;
typedef gl_uintptr_t word___1;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old , char const   *__new )  __attribute__((__leaf__)) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int ioctl(int __fd , unsigned long __request  , ...)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
__inline static void freecon(char *con  __attribute__((__unused__)) ) 
{ 

  {
  return;
}
}
__inline static int getfscreatecon(char **con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return (-1);
}
}
__inline static int setfscreatecon(char *con  __attribute__((__unused__)) ) 
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
__inline static int fsetfilecon(int fd  __attribute__((__unused__)) , char *con  __attribute__((__unused__)) ) 
{ int *tmp ;

  {
  tmp = __errno_location();
  *tmp = 95;
  return (-1);
}
}
extern  __attribute__((__nothrow__)) int stat(char const   * __restrict  __file , struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__buf )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fstatat(int __fd , char const   * __restrict  __file , struct stat * __restrict  __buf , int __flag )  __attribute__((__nonnull__(2,3), __leaf__)) ;
extern  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __file , struct stat * __restrict  __buf )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int chmod(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int fchmodat(int __fd , char const   *__file , __mode_t __mode , int __flag )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int mkdir(char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int mknod(char const   *__path , __mode_t __mode , __dev_t __dev )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path , __mode_t __mode )  __attribute__((__nonnull__(1), __leaf__)) ;
extern int rpl_utimensat(int fd , char const   *name , struct timespec  const  *times , int flag )  __attribute__((__nonnull__(2))) ;
extern  __attribute__((__nothrow__)) int euidaccess(char const   *__name , int __type )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset , int __whence )  __attribute__((__leaf__)) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner , __gid_t __group )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int lchown(char const   *__file , __uid_t __owner , __gid_t __group )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int fchownat(int __fd , char const   *__file , __uid_t __owner , __gid_t __group , int __flag )  __attribute__((__nonnull__(2), __leaf__)) ;
extern  __attribute__((__nothrow__)) __uid_t geteuid(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int symlink(char const   *__from , char const   *__to )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length )  __attribute__((__leaf__)) ;
extern int rpl_linkat(int fd1 , char const   *path1 , int fd2 , char const   *path2 , int flag )  __attribute__((__nonnull__(2,4))) ;
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *canonicalize_file_name(char const   *__name )  __attribute__((__nonnull__(1), __leaf__)) ;
extern void *rpl_calloc(size_t nmemb , size_t size ) ;
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
#pragma GCC diagnostic pop
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern void *xmalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern char *dir_name(char const   *file ) ;
extern char *last_component(char const   *file )  __attribute__((__pure__)) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__inline int chownat(int fd , char const   *file , uid_t owner , gid_t group ) 
{ int tmp ;

  {
  tmp = fchownat(fd, file, owner, group, 0);
  return (tmp);
}
}
__inline int lchownat(int fd , char const   *file , uid_t owner , gid_t group ) 
{ int tmp ;

  {
  tmp = fchownat(fd, file, owner, group, 256);
  return (tmp);
}
}
__inline int chmodat(int fd , char const   *file , mode_t mode ) 
{ int tmp ;

  {
  tmp = fchmodat(fd, file, mode, 0);
  return (tmp);
}
}
__inline int lchmodat(int fd , char const   *file , mode_t mode ) 
{ int tmp ;

  {
  tmp = fchmodat(fd, file, mode, 256);
  return (tmp);
}
}
__inline int statat(int fd , char const   *name , struct stat *st ) 
{ int tmp ;

  {
  tmp = fstatat(fd, (char const   */* __restrict  */)name, (struct stat */* __restrict  */)st, 0);
  return (tmp);
}
}
__inline int lstatat(int fd , char const   *name , struct stat *st ) 
{ int tmp ;

  {
  tmp = fstatat(fd, (char const   */* __restrict  */)name, (struct stat */* __restrict  */)st, 256);
  return (tmp);
}
}
#pragma GCC diagnostic pop
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
extern char const   *program_name ;
__inline static size_t gcd(size_t u , size_t v )  __attribute__((__const__)) ;
__inline static size_t gcd(size_t u , size_t v )  __attribute__((__const__)) ;
__inline static size_t gcd(size_t u , size_t v ) 
{ size_t t ;

  {
  while (1) {
    t = u % v;
    u = v;
    v = t;
    if (! v) {
      break;
    } else {

    }
  }
  return (u);
}
}
__inline static size_t lcm(size_t u , size_t v )  __attribute__((__const__)) ;
__inline static size_t lcm(size_t u , size_t v )  __attribute__((__const__)) ;
__inline static size_t lcm(size_t u , size_t v ) 
{ size_t tmp ;

  {
  tmp = gcd(u, v);
  return (u * (v / tmp));
}
}
__inline static void *ptr_align(void const   *ptr , size_t alignment ) 
{ char const   *p0 ;
  char const   *p1 ;

  {
  p0 = (char const   *)ptr;
  p1 = (p0 + alignment) - 1;
  return ((void *)(p1 - (unsigned long )p1 % alignment));
}
}
__inline static _Bool __attribute__((__pure__))  is_nul(char const   *buf , size_t bufsize ) 
{ word *wp ;
  word *tmp ;
  char *cp ;
  char *tmp___0 ;

  {
  wp = (word *)buf;
  while (1) {
    tmp = wp;
    wp ++;
    if (! (*tmp == 0UL)) {
      break;
    } else {

    }
    continue;
  }
  cp = (char *)(wp - 1);
  while (1) {
    tmp___0 = cp;
    cp ++;
    if (! ((int )*tmp___0 == 0)) {
      break;
    } else {

    }
    continue;
  }
  return ((_Bool __attribute__((__pure__))  )((unsigned long )cp > (unsigned long )(buf + bufsize)));
}
}
extern int qset_acl(char const   * , int  , mode_t  ) ;
extern int set_acl(char const   * , int  , mode_t  ) ;
extern int copy_acl(char const   * , int  , char const   * , int  , mode_t  ) ;
extern char *find_backup_file_name(char const   * , enum backup_type  ) ;
extern size_t buffer_lcm(size_t  , size_t  , size_t  )  __attribute__((__const__)) ;
extern Hash_table *hash_initialize(size_t  , Hash_tuning const   * , size_t (*)(void const   * , size_t  ) , _Bool (*)(void const   * , void const   * ) , void (*)(void * ) )  __attribute__((__warn_unused_result__)) ;
extern _Bool copy(char const   *src_name , char const   *dst_name , _Bool nonexistent_dst , struct cp_options  const  *options , _Bool *copy_into_self , _Bool *rename_succeeded ) ;
extern void dest_info_init(struct cp_options *x ) ;
extern void src_info_init(struct cp_options *x ) ;
extern void cp_options_default(struct cp_options *x ) ;
extern _Bool chown_failure_ok(struct cp_options  const  *x )  __attribute__((__pure__)) ;
extern mode_t cached_umask(void) ;
extern void forget_created(ino_t ino , dev_t dev ) ;
extern char *remember_copied(char const   *node , ino_t ino , dev_t dev ) ;
extern char *src_to_dest_lookup(ino_t ino , dev_t dev ) ;
extern void extent_scan_init(int src_fd , struct extent_scan *scan ) ;
extern _Bool extent_scan_read(struct extent_scan *scan ) ;
__inline static void extent_scan_free(struct extent_scan *scan ) 
{ 

  {
  free((void *)scan->ext_info);
  scan->ext_info = (struct extent_info *)((void *)0);
  scan->ei_count = 0U;
  return;
}
}
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern void fdadvise(int fd , off_t offset , off_t len , fadvice_t advice ) ;
extern int open_safer(char const   * , int   , ...) ;
extern void record_file(Hash_table *ht , char const   *file , struct stat  const  *stats )  __attribute__((__nonnull__(2,3))) ;
extern _Bool seen_file(Hash_table const   *ht , char const   *file , struct stat  const  *stats ) ;
extern void strmode(mode_t mode , char *str ) ;
extern char *file_name_concat(char const   *dir , char const   *base , char **base_in_result ) ;
extern size_t full_write(int fd , void const   *buf , size_t count ) ;
extern size_t triple_hash(void const   *x , size_t table_size )  __attribute__((__pure__)) ;
extern size_t triple_hash_no_name(void const   *x , size_t table_size )  __attribute__((__pure__)) ;
extern _Bool triple_compare(void const   *x , void const   *y ) ;
extern void triple_free(void *x ) ;
__inline static size_t io_blksize(struct stat sb ) 
{ __blksize_t tmp___0 ;
  __blksize_t tmp___1 ;
  __blksize_t tmp___2 ;

  {
  if (0L < sb.st_blksize) {
    if ((unsigned long )sb.st_blksize <= 1UL) {
      tmp___2 = sb.st_blksize;
    } else {
      tmp___2 = 512L;
    }
  } else {
    tmp___2 = 512L;
  }
  if (65536L > tmp___2) {
    tmp___1 = 65536L;
  } else {
    if (0L < sb.st_blksize) {
      if ((unsigned long )sb.st_blksize <= 1UL) {
        tmp___0 = sb.st_blksize;
      } else {
        tmp___0 = 512L;
      }
    } else {
      tmp___0 = 512L;
    }
    tmp___1 = tmp___0;
  }
  return ((unsigned long )tmp___1);
}
}
extern char const   *quote_n(int n , char const   *name ) ;
extern char const   *quote(char const   *name ) ;
extern _Bool same_name(char const   *source , char const   *dest ) ;
extern char *savedir(char const   *dir ) ;
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
extern int utimecmp(char const   * , struct stat  const  * , struct stat  const  * , int  ) ;
extern int fdutimens(int  , char const   * , struct timespec  const  * ) ;
extern int utimens(char const   * , struct timespec  const  * ) ;
extern int lutimens(char const   * , struct timespec  const  * ) ;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__inline int lutimensat(int dir , char const   *file , struct timespec  const  *times ) 
{ int tmp ;

  {
  tmp = rpl_utimensat(dir, file, times, 256);
  return (tmp);
}
}
#pragma GCC diagnostic pop
extern _Bool can_write_any_file(void) ;
extern char *areadlink_with_size(char const   *filename , size_t size_hint ) ;
extern _Bool yesno(void) ;
static _Bool copy_internal(char const   *src_name , char const   *dst_name , _Bool new_dst , dev_t device , struct dir_list *ancestors , struct cp_options  const  *x , _Bool command_line_arg , _Bool *first_dir_created_per_command_line_arg , _Bool *copy_into_self , _Bool *rename_succeeded ) ;
static _Bool owner_failure_ok(struct cp_options  const  *x ) ;
static char const   *top_level_src_name  ;
static char const   *top_level_dst_name  ;
__inline static int utimens_symlink(char const   *file , struct timespec  const  *timespec ) 
{ int err ;
  int tmp ;
  int *tmp___0 ;

  {
  tmp = lutimens(file, timespec);
  err = tmp;
  if (err) {
    tmp___0 = __errno_location();
    if (*tmp___0 == 38) {
      err = 0;
    } else {

    }
  } else {

  }
  return (err);
}
}
static _Bool sparse_copy(int src_fd , int dest_fd , char *buf , size_t buf_size , _Bool make_holes , char const   *src_name , char const   *dst_name , uintmax_t max_n_read , off_t *total_n_read , _Bool *last_write_made_hole ) 
{ _Bool make_hole ;
  ssize_t n_read ;
  uintmax_t tmp ;
  ssize_t tmp___0 ;
  int *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  int *tmp___7 ;
  __off_t tmp___8 ;
  _Bool __attribute__((__pure__))  tmp___9 ;
  size_t n ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  int *tmp___12 ;
  size_t tmp___13 ;

  {
  *last_write_made_hole = (_Bool)0;
  *total_n_read = 0L;
  while (max_n_read) {
    make_hole = (_Bool)0;
    if (max_n_read < buf_size) {
      tmp = max_n_read;
    } else {
      tmp = buf_size;
    }
    tmp___0 = read(src_fd, (void *)buf, tmp);
    n_read = tmp___0;
    if (n_read < 0L) {
      tmp___1 = __errno_location();
      if (*tmp___1 == 4) {
        continue;
      } else {

      }
      tmp___2 = quote(src_name);
      tmp___3 = gettext("reading %s");
      tmp___4 = __errno_location();
      error(0, *tmp___4, (char const   *)tmp___3, tmp___2);
      return ((_Bool)0);
    } else {

    }
    if (n_read == 0L) {
      break;
    } else {

    }
    max_n_read -= (unsigned long )n_read;
    *total_n_read += n_read;
    if (make_holes) {
      *(buf + n_read) = (char )'\001';
      memset((void *)((buf + n_read) + 1), 0, sizeof(word___0 ) - 1UL);
      tmp___9 = is_nul((char const   *)buf, (unsigned long )n_read);
      make_hole = (_Bool )tmp___9;
      if (make_hole) {
        tmp___8 = lseek(dest_fd, n_read, 1);
        if (tmp___8 < 0L) {
          tmp___5 = quote(dst_name);
          tmp___6 = gettext("cannot lseek %s");
          tmp___7 = __errno_location();
          error(0, *tmp___7, (char const   *)tmp___6, tmp___5);
          return ((_Bool)0);
        } else {

        }
      } else {

      }
    } else {

    }
    if (! make_hole) {
      n = (unsigned long )n_read;
      tmp___13 = full_write(dest_fd, (void const   *)buf, n);
      if (tmp___13 != n) {
        tmp___10 = quote(dst_name);
        tmp___11 = gettext("writing %s");
        tmp___12 = __errno_location();
        error(0, *tmp___12, (char const   *)tmp___11, tmp___10);
        return ((_Bool)0);
      } else {

      }
    } else {

    }
    *last_write_made_hole = make_hole;
  }
  return ((_Bool)1);
}
}
__inline static int clone_file(int dest_fd , int src_fd ) 
{ int tmp ;

  {
  tmp = ioctl(dest_fd, (unsigned long )(((1U << 30) | (unsigned int )(148 << 8)) | 9U) | (sizeof(int ) << 16), src_fd);
  return (tmp);
}
}
static char *zeros  ;
static _Bool write_zeros(int fd , uint64_t n_bytes ) ;
static size_t nz  =    65536UL;
static char fallback[1024]  ;
static _Bool write_zeros(int fd , uint64_t n_bytes ) 
{ void *tmp ;
  uint64_t n ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  if ((unsigned long )zeros == (unsigned long )((void *)0)) {
    tmp = rpl_calloc(nz, 1UL);
    zeros = (char *)tmp;
    if ((unsigned long )zeros == (unsigned long )((void *)0)) {
      zeros = fallback;
      nz = sizeof(fallback);
    } else {

    }
  } else {

  }
  while (n_bytes) {
    if (nz < n_bytes) {
      tmp___0 = nz;
    } else {
      tmp___0 = n_bytes;
    }
    n = tmp___0;
    tmp___1 = full_write(fd, (void const   *)zeros, n);
    if (tmp___1 != n) {
      return ((_Bool)0);
    } else {

    }
    n_bytes -= n;
  }
  return ((_Bool)1);
}
}
static _Bool extent_copy(int src_fd , int dest_fd , char *buf , size_t buf_size , off_t src_total_size , enum Sparse_type sparse_mode , char const   *src_name , char const   *dst_name , _Bool *require_normal_copy ) 
{ struct extent_scan scan ;
  off_t last_ext_start ;
  uint64_t last_ext_len ;
  off_t dest_pos ;
  _Bool wrote_hole_at_eof ;
  _Bool ok ;
  _Bool tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  unsigned int i ;
  _Bool empty_extent ;
  off_t ext_start ;
  uint64_t ext_len ;
  uint64_t hole_size ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  __off_t tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  int *tmp___9 ;
  __off_t tmp___10 ;
  off_t nzeros ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  _Bool tmp___14 ;
  off_t n_read ;
  _Bool tmp___15 ;
  char const   *tmp___16 ;
  char *tmp___17 ;
  int *tmp___18 ;
  int tmp___19 ;
  _Bool tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;

  {
  last_ext_start = 0L;
  last_ext_len = 0UL;
  dest_pos = 0L;
  extent_scan_init(src_fd, & scan);
  *require_normal_copy = (_Bool)0;
  wrote_hole_at_eof = (_Bool)1;
  while (1) {
    tmp = extent_scan_read(& scan);
    ok = tmp;
    if (! ok) {
      if (scan.hit_final_extent) {
        break;
      } else {

      }
      if (scan.initial_scan_failed) {
        *require_normal_copy = (_Bool)1;
        return ((_Bool)0);
      } else {

      }
      tmp___0 = quote(src_name);
      tmp___1 = gettext("%s: failed to get extents info");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
      return ((_Bool)0);
    } else {

    }
    empty_extent = (_Bool)0;
    i = 0U;
    while (1) {
      if (! (i < scan.ei_count)) {
        if (! empty_extent) {
          break;
        } else {

        }
      } else {

      }
      if (i < scan.ei_count) {
        ext_start = (scan.ext_info + i)->ext_logical;
        ext_len = (scan.ext_info + i)->ext_length;
      } else {
        i --;
        ext_start = (long )((unsigned long )last_ext_start + (scan.ext_info + i)->ext_length);
        ext_len = 0UL;
      }
      hole_size = (unsigned long )(ext_start - last_ext_start) - last_ext_len;
      wrote_hole_at_eof = (_Bool)0;
      if (hole_size) {
        tmp___6 = lseek(src_fd, ext_start, 0);
        if (tmp___6 < 0L) {
          tmp___3 = quote(src_name);
          tmp___4 = gettext("cannot lseek %s");
          tmp___5 = __errno_location();
          error(0, *tmp___5, (char const   *)tmp___4, tmp___3);
          fail: 
          extent_scan_free(& scan);
          return ((_Bool)0);
        } else {

        }
        if (empty_extent) {
          if ((unsigned int )sparse_mode == 3U) {
            goto _L;
          } else {
            goto _L___1;
          }
        } else {
          _L___1: 
          if (! empty_extent) {
            if ((unsigned int )sparse_mode != 1U) {
              _L: 
              tmp___10 = lseek(dest_fd, ext_start, 0);
              if (tmp___10 < 0L) {
                tmp___7 = quote(dst_name);
                tmp___8 = gettext("cannot lseek %s");
                tmp___9 = __errno_location();
                error(0, *tmp___9, (char const   *)tmp___8, tmp___7);
                goto fail;
              } else {

              }
              wrote_hole_at_eof = (_Bool)1;
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
            nzeros = (long )hole_size;
            if (empty_extent) {
              if ((unsigned long )(src_total_size - dest_pos) < hole_size) {
                nzeros = src_total_size - dest_pos;
              } else {
                nzeros = (long )hole_size;
              }
            } else {

            }
            tmp___14 = write_zeros(dest_fd, (unsigned long )nzeros);
            if (! tmp___14) {
              tmp___11 = quote(dst_name);
              tmp___12 = gettext("%s: write failed");
              tmp___13 = __errno_location();
              error(0, *tmp___13, (char const   *)tmp___12, tmp___11);
              goto fail;
            } else {

            }
            if (src_total_size < ext_start) {
              dest_pos = src_total_size;
            } else {
              dest_pos = ext_start;
            }
          }
        }
      } else {

      }
      last_ext_start = ext_start;
      empty_extent = (_Bool)0;
      last_ext_len = ext_len;
      tmp___15 = sparse_copy(src_fd, dest_fd, buf, buf_size, (_Bool )((unsigned int )sparse_mode == 3U), src_name, dst_name, ext_len, & n_read, & wrote_hole_at_eof);
      if (! tmp___15) {
        goto fail;
      } else {

      }
      dest_pos = ext_start + n_read;
      if (dest_pos == src_total_size) {
        scan.hit_final_extent = (_Bool)1;
        break;
      } else {

      }
      i ++;
    }
    extent_scan_free(& scan);
    if (! (! scan.hit_final_extent)) {
      break;
    } else {

    }
  }
  if (dest_pos < src_total_size) {
    goto _L___2;
  } else {
    if (wrote_hole_at_eof) {
      _L___2: 
      if ((unsigned int )sparse_mode != 1U) {
        tmp___19 = ftruncate(dest_fd, src_total_size);
        tmp___22 = tmp___19;
      } else {
        tmp___20 = write_zeros(dest_fd, (unsigned long )(src_total_size - dest_pos));
        if (tmp___20) {
          tmp___21 = 0;
        } else {
          tmp___21 = 1;
        }
        tmp___22 = tmp___21;
      }
      if (tmp___22) {
        tmp___16 = quote(dst_name);
        tmp___17 = gettext("failed to extend %s");
        tmp___18 = __errno_location();
        error(0, *tmp___18, (char const   *)tmp___17, tmp___16);
        return ((_Bool)0);
      } else {

      }
    } else {

    }
  }
  return ((_Bool)1);
}
}
static _Bool __attribute__((__pure__))  is_ancestor(struct stat  const  *sb , struct dir_list  const  *ancestors ) 
{ 

  {
  while ((unsigned long )ancestors != (unsigned long )((struct dir_list  const  *)0)) {
    if (ancestors->ino == sb->st_ino) {
      if (ancestors->dev == sb->st_dev) {
        return ((_Bool __attribute__((__pure__))  )1);
      } else {

      }
    } else {

    }
    ancestors = (struct dir_list  const  *)ancestors->parent;
  }
  return ((_Bool __attribute__((__pure__))  )0);
}
}
static _Bool errno_unsupported(int err ) 
{ int tmp ;

  {
  if (err == 95) {
    tmp = 1;
  } else {
    if (err == 61) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  }
  return ((_Bool )tmp);
}
}
static _Bool copy_attr(char const   *src_path  __attribute__((__unused__)) , int src_fd  __attribute__((__unused__)) , char const   *dst_path  __attribute__((__unused__)) , int dst_fd  __attribute__((__unused__)) , struct cp_options  const  *x  __attribute__((__unused__)) ) 
{ 

  {
  return ((_Bool)1);
}
}
static _Bool copy_dir(char const   *src_name_in , char const   *dst_name_in , _Bool new_dst , struct stat  const  *src_sb , struct dir_list *ancestors , struct cp_options  const  *x , _Bool *first_dir_created_per_command_line_arg , _Bool *copy_into_self ) 
{ char *name_space ;
  char *namep ;
  struct cp_options non_command_line_options ;
  _Bool ok ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  _Bool new_first_dir_created ;
  _Bool local_copy_into_self ;
  char *src_name ;
  char *tmp___2 ;
  char *dst_name ;
  char *tmp___3 ;
  _Bool first_dir_created ;
  _Bool tmp___4 ;
  size_t tmp___5 ;

  {
  non_command_line_options = (struct cp_options )*x;
  ok = (_Bool)1;
  name_space = savedir(src_name_in);
  if ((unsigned long )name_space == (unsigned long )((void *)0)) {
    tmp = quote(src_name_in);
    tmp___0 = gettext("cannot access %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    return ((_Bool)0);
  } else {

  }
  if ((unsigned int const   )x->dereference == 3U) {
    non_command_line_options.dereference = (enum Dereference_symlink )2;
  } else {

  }
  new_first_dir_created = (_Bool)0;
  namep = name_space;
  while ((int )*namep != 0) {
    tmp___2 = file_name_concat(src_name_in, (char const   *)namep, (char **)((void *)0));
    src_name = tmp___2;
    tmp___3 = file_name_concat(dst_name_in, (char const   *)namep, (char **)((void *)0));
    dst_name = tmp___3;
    first_dir_created = *first_dir_created_per_command_line_arg;
    tmp___4 = copy_internal((char const   *)src_name, (char const   *)dst_name, new_dst, (unsigned long )src_sb->st_dev, ancestors, (struct cp_options  const  *)(& non_command_line_options), (_Bool)0, & first_dir_created, & local_copy_into_self, (_Bool *)((void *)0));
    ok = (_Bool )((int )ok & (int )tmp___4);
    *copy_into_self = (_Bool )((int )*copy_into_self | (int )local_copy_into_self);
    free((void *)dst_name);
    free((void *)src_name);
    if (local_copy_into_self) {
      break;
    } else {

    }
    new_first_dir_created = (_Bool )((int )new_first_dir_created | (int )first_dir_created);
    tmp___5 = strlen((char const   *)namep);
    namep += tmp___5 + 1UL;
  }
  free((void *)name_space);
  *first_dir_created_per_command_line_arg = new_first_dir_created;
  return (ok);
}
}
static int set_owner(struct cp_options  const  *x , char const   *dst_name , int dest_desc , struct stat  const  *src_sb , _Bool new_dst , struct stat  const  *dst_sb ) 
{ uid_t uid ;
  gid_t gid ;
  mode_t old_mode ;
  mode_t new_mode ;
  __mode_t tmp ;
  mode_t restrictive_temp_mode ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int saved_errno ;
  int *tmp___6 ;
  int __x ;
  int tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int *tmp___10 ;
  int tmp___11 ;
  int saved_errno___0 ;
  int *tmp___12 ;
  int __x___0 ;
  int tmp___13 ;
  int *tmp___14 ;
  int *tmp___15 ;
  int *tmp___16 ;
  char const   *tmp___17 ;
  char *tmp___18 ;
  int *tmp___19 ;
  _Bool tmp___20 ;

  {
  uid = (unsigned int )src_sb->st_uid;
  gid = (unsigned int )src_sb->st_gid;
  if (! new_dst) {
    if (x->preserve_mode) {
      goto _L;
    } else {
      if (x->move_mode) {
        goto _L;
      } else {
        if (x->set_mode) {
          _L: 
          old_mode = (unsigned int )dst_sb->st_mode;
          if (x->preserve_mode) {
            tmp = (unsigned int )src_sb->st_mode;
          } else {
            if (x->move_mode) {
              tmp = (unsigned int )src_sb->st_mode;
            } else {
              tmp = (unsigned int )x->mode;
            }
          }
          new_mode = tmp;
          restrictive_temp_mode = (old_mode & new_mode) & 448U;
          if ((old_mode & (unsigned int )((4032 | (448 >> 3)) | ((448 >> 3) >> 3))) & (((~ new_mode | 2048U) | 1024U) | 512U)) {
            tmp___4 = qset_acl(dst_name, dest_desc, restrictive_temp_mode);
            if (tmp___4 != 0) {
              tmp___3 = owner_failure_ok(x);
              if (! tmp___3) {
                tmp___0 = quote(dst_name);
                tmp___1 = gettext("clearing permissions for %s");
                tmp___2 = __errno_location();
                error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
              } else {

              }
              return ((int )(- ((int const   )x->require_preserve)));
            } else {

            }
          } else {

          }
        } else {

        }
      }
    }
  } else {

  }
  if (dest_desc != -1) {
    tmp___5 = fchown(dest_desc, uid, gid);
    if (tmp___5 == 0) {
      return (1);
    } else {

    }
    tmp___9 = __errno_location();
    if (*tmp___9 == 1) {
      goto _L___0;
    } else {
      tmp___10 = __errno_location();
      if (*tmp___10 == 22) {
        _L___0: 
        tmp___6 = __errno_location();
        saved_errno = *tmp___6;
        tmp___7 = fchown(dest_desc, 4294967295U, gid);
        __x = tmp___7;
        tmp___8 = __errno_location();
        *tmp___8 = saved_errno;
      } else {

      }
    }
  } else {
    tmp___11 = lchown(dst_name, uid, gid);
    if (tmp___11 == 0) {
      return (1);
    } else {

    }
    tmp___15 = __errno_location();
    if (*tmp___15 == 1) {
      goto _L___1;
    } else {
      tmp___16 = __errno_location();
      if (*tmp___16 == 22) {
        _L___1: 
        tmp___12 = __errno_location();
        saved_errno___0 = *tmp___12;
        tmp___13 = lchown(dst_name, 4294967295U, gid);
        __x___0 = tmp___13;
        tmp___14 = __errno_location();
        *tmp___14 = saved_errno___0;
      } else {

      }
    }
  }
  tmp___20 = chown_failure_ok(x);
  if (! tmp___20) {
    tmp___17 = quote(dst_name);
    tmp___18 = gettext("failed to preserve ownership for %s");
    tmp___19 = __errno_location();
    error(0, *tmp___19, (char const   *)tmp___18, tmp___17);
    if (x->require_preserve) {
      return (-1);
    } else {

    }
  } else {

  }
  return (0);
}
}
static void set_author(char const   *dst_name , int dest_desc , struct stat  const  *src_sb ) 
{ 

  {
  return;
}
}
static int fchmod_or_lchmod(int desc , char const   *name , mode_t mode ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (0 <= desc) {
    tmp = fchmod(desc, mode);
    return (tmp);
  } else {

  }
  tmp___0 = chmod(name, mode);
  return (tmp___0);
}
}
static _Bool is_probably_sparse(struct stat  const  *sb ) 
{ int tmp ;

  {
  if ((sb->st_mode & 61440U) == 32768U) {
    if (sb->st_blocks < sb->st_size / 512L) {
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
static _Bool copy_reg(char const   *src_name , char const   *dst_name , struct cp_options  const  *x , mode_t dst_mode , mode_t omitted_permissions , _Bool *new_dst , struct stat  const  *src_sb ) 
{ char *buf ;
  char *buf_alloc ;
  char *name_alloc ;
  int dest_desc ;
  int dest_errno ;
  int source_desc ;
  mode_t src_mode ;
  struct stat sb ;
  struct stat src_open_sb ;
  _Bool return_val ;
  _Bool data_copy_required ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  int open_flags ;
  int tmp___9 ;
  int *tmp___10 ;
  _Bool all_errors ;
  int tmp___11 ;
  _Bool some_errors ;
  int tmp___12 ;
  char *con ;
  char *tmp___13 ;
  int *tmp___14 ;
  int *tmp___15 ;
  _Bool tmp___16 ;
  int tmp___17 ;
  char const   *tmp___18 ;
  char const   *tmp___19 ;
  char *tmp___20 ;
  int *tmp___21 ;
  int *tmp___22 ;
  _Bool tmp___23 ;
  int tmp___24 ;
  char const   *tmp___25 ;
  char *tmp___26 ;
  int *tmp___27 ;
  int tmp___28 ;
  char const   *tmp___29 ;
  char *tmp___30 ;
  int open_flags___0 ;
  int *tmp___31 ;
  struct stat dangling_link_sb ;
  int *tmp___32 ;
  char const   *tmp___33 ;
  char *tmp___34 ;
  int tmp___35 ;
  size_t tmp___36 ;
  char const   *tmp___37 ;
  char *tmp___38 ;
  char const   *tmp___39 ;
  char *tmp___40 ;
  int *tmp___41 ;
  int tmp___42 ;
  _Bool clone_ok ;
  int tmp___43 ;
  char const   *tmp___44 ;
  char const   *tmp___45 ;
  char *tmp___46 ;
  int *tmp___47 ;
  size_t buf_alignment ;
  int tmp___48 ;
  size_t tmp___49 ;
  size_t buf_alignment_slop ;
  size_t buf_size ;
  size_t tmp___50 ;
  _Bool make_holes ;
  _Bool sparse_src ;
  size_t blcm_max ;
  unsigned long tmp___51 ;
  size_t blcm ;
  size_t tmp___52 ;
  size_t tmp___53 ;
  void *tmp___54 ;
  void *tmp___55 ;
  _Bool normal_copy_required ;
  unsigned int tmp___56 ;
  _Bool tmp___57 ;
  off_t n_read ;
  _Bool wrote_hole_at_eof ;
  char const   *tmp___58 ;
  char *tmp___59 ;
  int *tmp___60 ;
  _Bool tmp___61 ;
  int tmp___62 ;
  struct timespec timespec[2] ;
  char const   *tmp___63 ;
  char *tmp___64 ;
  int *tmp___65 ;
  int tmp___66 ;
  int tmp___67 ;
  _Bool access_changed ;
  int tmp___68 ;
  __uid_t tmp___69 ;
  _Bool tmp___70 ;
  int tmp___71 ;
  int tmp___72 ;
  mode_t tmp___73 ;
  mode_t tmp___74 ;
  char const   *tmp___75 ;
  char *tmp___76 ;
  int *tmp___77 ;
  int tmp___78 ;
  char const   *tmp___79 ;
  char *tmp___80 ;
  int *tmp___81 ;
  int tmp___82 ;
  char const   *tmp___83 ;
  char *tmp___84 ;
  int *tmp___85 ;
  int tmp___86 ;

  {
  buf_alloc = (char *)((void *)0);
  name_alloc = (char *)((void *)0);
  src_mode = (unsigned int )src_sb->st_mode;
  return_val = (_Bool)1;
  data_copy_required = (_Bool )x->data_copy_required;
  if ((unsigned int const   )x->dereference == 2U) {
    tmp = 131072;
  } else {
    tmp = 0;
  }
  source_desc = open_safer(src_name, tmp);
  if (source_desc < 0) {
    tmp___0 = quote(src_name);
    tmp___1 = gettext("cannot open %s for reading");
    tmp___2 = __errno_location();
    error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
    return ((_Bool)0);
  } else {

  }
  tmp___6 = fstat(source_desc, & src_open_sb);
  if (tmp___6 != 0) {
    tmp___3 = quote(src_name);
    tmp___4 = gettext("cannot fstat %s");
    tmp___5 = __errno_location();
    error(0, *tmp___5, (char const   *)tmp___4, tmp___3);
    return_val = (_Bool)0;
    goto close_src_desc;
  } else {

  }
  if (src_sb->st_ino == (unsigned long const   )src_open_sb.st_ino) {
    if (! (src_sb->st_dev == (unsigned long const   )src_open_sb.st_dev)) {
      tmp___7 = quote(src_name);
      tmp___8 = gettext("skipping file %s, as it was replaced while being copied");
      error(0, 0, (char const   *)tmp___8, tmp___7);
      return_val = (_Bool)0;
      goto close_src_desc;
    } else {

    }
  } else {
    tmp___7 = quote(src_name);
    tmp___8 = gettext("skipping file %s, as it was replaced while being copied");
    error(0, 0, (char const   *)tmp___8, tmp___7);
    return_val = (_Bool)0;
    goto close_src_desc;
  }
  if (! *new_dst) {
    if (x->data_copy_required) {
      tmp___9 = 512;
    } else {
      tmp___9 = 0;
    }
    open_flags = 1 | tmp___9;
    dest_desc = open_safer(dst_name, open_flags);
    tmp___10 = __errno_location();
    dest_errno = *tmp___10;
    if (x->preserve_security_context) {
      if (0 <= dest_desc) {
        if (! x->data_copy_required) {
          tmp___11 = 1;
        } else {
          if (x->require_preserve_context) {
            tmp___11 = 1;
          } else {
            tmp___11 = 0;
          }
        }
        all_errors = (_Bool )tmp___11;
        if (! all_errors) {
          if (! x->reduce_diagnostics) {
            tmp___12 = 1;
          } else {
            tmp___12 = 0;
          }
        } else {
          tmp___12 = 0;
        }
        some_errors = (_Bool )tmp___12;
        con = (char *)((void *)0);
        tmp___17 = getfscreatecon(& con);
        if (tmp___17 < 0) {
          if (all_errors) {
            tmp___13 = gettext("failed to get file system create context");
            tmp___14 = __errno_location();
            error(0, *tmp___14, (char const   *)tmp___13);
          } else {
            if (some_errors) {
              tmp___15 = __errno_location();
              tmp___16 = errno_unsupported(*tmp___15);
              if (! tmp___16) {
                tmp___13 = gettext("failed to get file system create context");
                tmp___14 = __errno_location();
                error(0, *tmp___14, (char const   *)tmp___13);
              } else {

              }
            } else {

            }
          }
          if (x->require_preserve_context) {
            return_val = (_Bool)0;
            goto close_src_and_dst_desc;
          } else {

          }
        } else {

        }
        if (con) {
          tmp___24 = fsetfilecon(dest_desc, con);
          if (tmp___24 < 0) {
            if (all_errors) {
              tmp___18 = quote_n(1, (char const   *)con);
              tmp___19 = quote_n(0, dst_name);
              tmp___20 = gettext("failed to set the security context of %s to %s");
              tmp___21 = __errno_location();
              error(0, *tmp___21, (char const   *)tmp___20, tmp___19, tmp___18);
            } else {
              if (some_errors) {
                tmp___22 = __errno_location();
                tmp___23 = errno_unsupported(*tmp___22);
                if (! tmp___23) {
                  tmp___18 = quote_n(1, (char const   *)con);
                  tmp___19 = quote_n(0, dst_name);
                  tmp___20 = gettext("failed to set the security context of %s to %s");
                  tmp___21 = __errno_location();
                  error(0, *tmp___21, (char const   *)tmp___20, tmp___19, tmp___18);
                } else {

                }
              } else {

              }
            }
            if (x->require_preserve_context) {
              return_val = (_Bool)0;
              freecon(con);
              goto close_src_and_dst_desc;
            } else {

            }
          } else {

          }
          freecon(con);
        } else {

        }
      } else {

      }
    } else {

    }
    if (dest_desc < 0) {
      if (x->unlink_dest_after_failed_open) {
        tmp___28 = unlink(dst_name);
        if (tmp___28 != 0) {
          tmp___25 = quote(dst_name);
          tmp___26 = gettext("cannot remove %s");
          tmp___27 = __errno_location();
          error(0, *tmp___27, (char const   *)tmp___26, tmp___25);
          return_val = (_Bool)0;
          goto close_src_desc;
        } else {

        }
        if (x->verbose) {
          tmp___29 = quote(dst_name);
          tmp___30 = gettext("removed %s\n");
          printf((char const   */* __restrict  */)tmp___30, tmp___29);
        } else {

        }
        *new_dst = (_Bool)1;
      } else {

      }
    } else {

    }
  } else {

  }
  if (*new_dst) {
    open_with_O_CREAT: 
    open_flags___0 = 65;
    dest_desc = open_safer(dst_name, open_flags___0 | 128, dst_mode & ~ omitted_permissions);
    tmp___31 = __errno_location();
    dest_errno = *tmp___31;
    if (dest_desc < 0) {
      if (dest_errno == 17) {
        if (! x->move_mode) {
          tmp___35 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& dangling_link_sb));
          if (tmp___35 == 0) {
            if ((dangling_link_sb.st_mode & 61440U) == 40960U) {
              if (x->open_dangling_dest_symlink) {
                dest_desc = open_safer(dst_name, open_flags___0, dst_mode & ~ omitted_permissions);
                tmp___32 = __errno_location();
                dest_errno = *tmp___32;
              } else {
                tmp___33 = quote(dst_name);
                tmp___34 = gettext("not writing through dangling symlink %s");
                error(0, 0, (char const   *)tmp___34, tmp___33);
                return_val = (_Bool)0;
                goto close_src_desc;
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

    }
    if (dest_desc < 0) {
      if (dest_errno == 21) {
        if (*dst_name) {
          tmp___36 = strlen(dst_name);
          if ((int const   )*(dst_name + (tmp___36 - 1UL)) == 47) {
            dest_errno = 20;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {
    omitted_permissions = 0U;
  }
  if (dest_desc < 0) {
    if (dest_errno == 2) {
      if (! *new_dst) {
        if (! x->move_mode) {
          *new_dst = (_Bool)1;
          goto open_with_O_CREAT;
        } else {

        }
      } else {

      }
    } else {

    }
    tmp___37 = quote(dst_name);
    tmp___38 = gettext("cannot create regular file %s");
    error(0, dest_errno, (char const   *)tmp___38, tmp___37);
    return_val = (_Bool)0;
    goto close_src_desc;
  } else {

  }
  tmp___42 = fstat(dest_desc, & sb);
  if (tmp___42 != 0) {
    tmp___39 = quote(dst_name);
    tmp___40 = gettext("cannot fstat %s");
    tmp___41 = __errno_location();
    error(0, *tmp___41, (char const   *)tmp___40, tmp___39);
    return_val = (_Bool)0;
    goto close_src_and_dst_desc;
  } else {

  }
  if (data_copy_required) {
    if (x->reflink_mode) {
      tmp___43 = clone_file(dest_desc, source_desc);
      clone_ok = (_Bool )(tmp___43 == 0);
      if (clone_ok) {
        goto _L;
      } else {
        if ((unsigned int const   )x->reflink_mode == 2U) {
          _L: 
          if (! clone_ok) {
            tmp___44 = quote_n(1, src_name);
            tmp___45 = quote_n(0, dst_name);
            tmp___46 = gettext("failed to clone %s from %s");
            tmp___47 = __errno_location();
            error(0, *tmp___47, (char const   *)tmp___46, tmp___45, tmp___44);
            return_val = (_Bool)0;
            goto close_src_and_dst_desc;
          } else {

          }
          data_copy_required = (_Bool)0;
        } else {

        }
      }
    } else {

    }
  } else {

  }
  if (data_copy_required) {
    tmp___48 = getpagesize();
    tmp___49 = lcm((unsigned long )tmp___48, sizeof(word___1 ));
    buf_alignment = tmp___49;
    buf_alignment_slop = (sizeof(word___1 ) + buf_alignment) - 1UL;
    tmp___50 = io_blksize(sb);
    buf_size = tmp___50;
    fdadvise(source_desc, 0L, 0L, (enum __anonenum_fadvice_t_61 )2);
    make_holes = (_Bool)0;
    sparse_src = (_Bool)0;
    if ((sb.st_mode & 61440U) == 32768U) {
      if ((unsigned int const   )x->sparse_mode == 3U) {
        make_holes = (_Bool)1;
      } else {

      }
      sparse_src = is_probably_sparse((struct stat  const  *)(& src_open_sb));
      if ((unsigned int const   )x->sparse_mode == 2U) {
        if (sparse_src) {
          make_holes = (_Bool)1;
        } else {

        }
      } else {

      }
    } else {

    }
    if (! make_holes) {
      if (((1UL << 63) - 1UL) * 2UL + 1UL < 9223372036854775807UL) {
        tmp___51 = ((1UL << 63) - 1UL) * 2UL + 1UL;
      } else {
        tmp___51 = 9223372036854775807UL;
      }
      blcm_max = tmp___51 - buf_alignment_slop;
      tmp___52 = io_blksize(src_open_sb);
      tmp___53 = buffer_lcm(tmp___52, buf_size, blcm_max);
      blcm = tmp___53;
      if ((src_open_sb.st_mode & 61440U) == 32768U) {
        if ((unsigned long )src_open_sb.st_size < buf_size) {
          buf_size = (unsigned long )(src_open_sb.st_size + 1L);
        } else {

        }
      } else {

      }
      buf_size += blcm - 1UL;
      buf_size -= buf_size % blcm;
      if (buf_size == 0UL) {
        buf_size = blcm;
      } else {
        if (blcm_max < buf_size) {
          buf_size = blcm;
        } else {

        }
      }
    } else {

    }
    tmp___54 = xmalloc(buf_size + buf_alignment_slop);
    buf_alloc = (char *)tmp___54;
    tmp___55 = ptr_align((void const   *)buf_alloc, buf_alignment);
    buf = (char *)tmp___55;
    if (sparse_src) {
      if ((sb.st_mode & 61440U) == 32768U) {
        tmp___56 = (unsigned int )((unsigned int const   )x->sparse_mode);
      } else {
        tmp___56 = (unsigned int )((unsigned int const   )1);
      }
      tmp___57 = extent_copy(source_desc, dest_desc, buf, buf_size, src_open_sb.st_size, (enum Sparse_type )tmp___56, src_name, dst_name, & normal_copy_required);
      if (tmp___57) {
        goto preserve_metadata;
      } else {

      }
      if (! normal_copy_required) {
        return_val = (_Bool)0;
        goto close_src_and_dst_desc;
      } else {

      }
    } else {

    }
    tmp___61 = sparse_copy(source_desc, dest_desc, buf, buf_size, make_holes, src_name, dst_name, 18446744073UL, & n_read, & wrote_hole_at_eof);
    if (tmp___61) {
      if (wrote_hole_at_eof) {
        tmp___62 = ftruncate(dest_desc, n_read);
        if (tmp___62 < 0) {
          _L___0: 
          tmp___58 = quote(dst_name);
          tmp___59 = gettext("failed to extend %s");
          tmp___60 = __errno_location();
          error(0, *tmp___60, (char const   *)tmp___59, tmp___58);
          return_val = (_Bool)0;
          goto close_src_and_dst_desc;
        } else {

        }
      } else {

      }
    } else {
      goto _L___0;
    }
  } else {

  }
  preserve_metadata: 
  if (x->preserve_timestamps) {
    timespec[0] = get_stat_atime(src_sb);
    timespec[1] = get_stat_mtime(src_sb);
    tmp___66 = fdutimens(dest_desc, dst_name, (struct timespec  const  *)(timespec));
    if (tmp___66 != 0) {
      tmp___63 = quote(dst_name);
      tmp___64 = gettext("preserving times for %s");
      tmp___65 = __errno_location();
      error(0, *tmp___65, (char const   *)tmp___64, tmp___63);
      if (x->require_preserve) {
        return_val = (_Bool)0;
        goto close_src_and_dst_desc;
      } else {

      }
    } else {

    }
  } else {

  }
  if (x->preserve_ownership) {
    if (src_sb->st_uid == (unsigned int const   )sb.st_uid) {
      if (! (src_sb->st_gid == (unsigned int const   )sb.st_gid)) {
        goto _L___1;
      } else {

      }
    } else {
      _L___1: 
      tmp___67 = set_owner(x, dst_name, dest_desc, src_sb, *new_dst, (struct stat  const  *)(& sb));
      switch (tmp___67) {
      case -1: 
      return_val = (_Bool)0;
      goto close_src_and_dst_desc;
      case 0: 
      src_mode &= 4294963711U;
      break;
      }
    }
  } else {

  }
  if (x->preserve_xattr) {
    access_changed = (_Bool)0;
    if (! (sb.st_mode & 128U)) {
      tmp___69 = geteuid();
      if (tmp___69 != 0U) {
        tmp___68 = fchmod_or_lchmod(dest_desc, dst_name, 384U);
        access_changed = (_Bool )(tmp___68 == 0);
      } else {

      }
    } else {

    }
    tmp___70 = copy_attr(src_name, source_desc, dst_name, dest_desc, x);
    if (! tmp___70) {
      if (x->require_preserve_xattr) {
        return_val = (_Bool)0;
      } else {

      }
    } else {

    }
    if (access_changed) {
      fchmod_or_lchmod(dest_desc, dst_name, dst_mode & ~ omitted_permissions);
    } else {

    }
  } else {

  }
  set_author(dst_name, dest_desc, src_sb);
  if (x->preserve_mode) {
    goto _L___2;
  } else {
    if (x->move_mode) {
      _L___2: 
      tmp___71 = copy_acl(src_name, source_desc, dst_name, dest_desc, src_mode);
      if (tmp___71 != 0) {
        if (x->require_preserve) {
          return_val = (_Bool)0;
        } else {

        }
      } else {

      }
    } else {
      if (x->set_mode) {
        tmp___72 = set_acl(dst_name, dest_desc, (unsigned int )x->mode);
        if (tmp___72 != 0) {
          return_val = (_Bool)0;
        } else {

        }
      } else {
        if (x->explicit_no_preserve_mode) {
          tmp___73 = cached_umask();
          set_acl(dst_name, dest_desc, 438U & ~ tmp___73);
          return_val = (_Bool)0;
        } else {
          if (omitted_permissions) {
            tmp___74 = cached_umask();
            omitted_permissions &= ~ tmp___74;
            if (omitted_permissions) {
              tmp___78 = fchmod_or_lchmod(dest_desc, dst_name, dst_mode);
              if (tmp___78 != 0) {
                tmp___75 = quote(dst_name);
                tmp___76 = gettext("preserving permissions for %s");
                tmp___77 = __errno_location();
                error(0, *tmp___77, (char const   *)tmp___76, tmp___75);
                if (x->require_preserve) {
                  return_val = (_Bool)0;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        }
      }
    }
  }
  close_src_and_dst_desc: 
  tmp___82 = close(dest_desc);
  if (tmp___82 < 0) {
    tmp___79 = quote(dst_name);
    tmp___80 = gettext("closing %s");
    tmp___81 = __errno_location();
    error(0, *tmp___81, (char const   *)tmp___80, tmp___79);
    return_val = (_Bool)0;
  } else {

  }
  close_src_desc: 
  tmp___86 = close(source_desc);
  if (tmp___86 < 0) {
    tmp___83 = quote(src_name);
    tmp___84 = gettext("closing %s");
    tmp___85 = __errno_location();
    error(0, *tmp___85, (char const   *)tmp___84, tmp___83);
    return_val = (_Bool)0;
  } else {

  }
  free((void *)buf_alloc);
  free((void *)name_alloc);
  return (return_val);
}
}
static _Bool same_file_ok(char const   *src_name , struct stat  const  *src_sb , char const   *dst_name , struct stat  const  *dst_sb , struct cp_options  const  *x , _Bool *return_now , _Bool *unlink_src ) 
{ struct stat  const  *src_sb_link ;
  struct stat  const  *dst_sb_link ;
  struct stat tmp_dst_sb ;
  struct stat tmp_src_sb ;
  _Bool same_link ;
  _Bool same ;
  int tmp ;
  _Bool sn ;
  _Bool tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  _Bool tmp___4 ;
  int tmp___5 ;
  _Bool tmp___6 ;
  char *abs_src ;
  char *tmp___7 ;
  _Bool result ;
  _Bool tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  if (src_sb->st_ino == dst_sb->st_ino) {
    if (src_sb->st_dev == dst_sb->st_dev) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  same = (_Bool )tmp;
  *return_now = (_Bool)0;
  *unlink_src = (_Bool)0;
  if (same) {
    if (x->hard_link) {
      *return_now = (_Bool)1;
      return ((_Bool)1);
    } else {

    }
  } else {

  }
  if ((unsigned int const   )x->dereference == 2U) {
    same_link = same;
    if ((src_sb->st_mode & 61440U) == 40960U) {
      if ((dst_sb->st_mode & 61440U) == 40960U) {
        tmp___0 = same_name(src_name, dst_name);
        sn = tmp___0;
        if (! sn) {
          if ((unsigned int const   )x->backup_type != 0U) {
            return ((_Bool)1);
          } else {

          }
          if (same_link) {
            *unlink_src = (_Bool)1;
            *return_now = (_Bool)1;
            return ((_Bool)1);
          } else {

          }
        } else {

        }
        return ((_Bool )(! sn));
      } else {

      }
    } else {

    }
    src_sb_link = src_sb;
    dst_sb_link = dst_sb;
  } else {
    if (! same) {
      return ((_Bool)1);
    } else {

    }
    tmp___1 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& tmp_dst_sb));
    if (tmp___1 != 0) {
      return ((_Bool)1);
    } else {
      tmp___2 = lstat((char const   */* __restrict  */)src_name, (struct stat */* __restrict  */)(& tmp_src_sb));
      if (tmp___2 != 0) {
        return ((_Bool)1);
      } else {

      }
    }
    src_sb_link = (struct stat  const  *)(& tmp_src_sb);
    dst_sb_link = (struct stat  const  *)(& tmp_dst_sb);
    if (src_sb_link->st_ino == dst_sb_link->st_ino) {
      if (src_sb_link->st_dev == dst_sb_link->st_dev) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
    } else {
      tmp___3 = 0;
    }
    same_link = (_Bool )tmp___3;
    if ((src_sb_link->st_mode & 61440U) == 40960U) {
      if ((dst_sb_link->st_mode & 61440U) == 40960U) {
        if (x->unlink_dest_before_opening) {
          return ((_Bool)1);
        } else {

        }
      } else {

      }
    } else {

    }
  }
  if ((unsigned int const   )x->backup_type != 0U) {
    if (! same_link) {
      if (! x->move_mode) {
        if ((unsigned int const   )x->dereference != 2U) {
          if ((src_sb_link->st_mode & 61440U) == 40960U) {
            if (! ((dst_sb_link->st_mode & 61440U) == 40960U)) {
              return ((_Bool)0);
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
      return ((_Bool)1);
    } else {

    }
    tmp___4 = same_name(src_name, dst_name);
    if (tmp___4) {
      tmp___5 = 0;
    } else {
      tmp___5 = 1;
    }
    return ((_Bool )tmp___5);
  } else {

  }
  if (x->move_mode) {
    goto _L;
  } else {
    if (x->unlink_dest_before_opening) {
      _L: 
      if ((dst_sb_link->st_mode & 61440U) == 40960U) {
        return ((_Bool)1);
      } else {

      }
      if (same_link) {
        if (1UL < (unsigned long )dst_sb_link->st_nlink) {
          tmp___6 = same_name(src_name, dst_name);
          if (! tmp___6) {
            if (x->move_mode) {
              *unlink_src = (_Bool)1;
              *return_now = (_Bool)1;
            } else {

            }
            return ((_Bool)1);
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
  }
  if (! ((src_sb_link->st_mode & 61440U) == 40960U)) {
    if (! ((dst_sb_link->st_mode & 61440U) == 40960U)) {
      if (src_sb_link->st_ino == dst_sb_link->st_ino) {
        if (! (src_sb_link->st_dev == dst_sb_link->st_dev)) {
          return ((_Bool)1);
        } else {

        }
      } else {
        return ((_Bool)1);
      }
      if (x->hard_link) {
        *return_now = (_Bool)1;
        return ((_Bool)1);
      } else {

      }
    } else {

    }
  } else {

  }
  if (x->move_mode) {
    if ((src_sb->st_mode & 61440U) == 40960U) {
      if (1UL < (unsigned long )dst_sb_link->st_nlink) {
        tmp___7 = canonicalize_file_name(src_name);
        abs_src = tmp___7;
        if (abs_src) {
          tmp___8 = same_name((char const   *)abs_src, dst_name);
          if (tmp___8) {
            tmp___9 = 0;
          } else {
            tmp___9 = 1;
          }
          result = (_Bool )tmp___9;
          free((void *)abs_src);
          return (result);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (x->unlink_dest_before_opening) {
    if ((dst_sb_link->st_mode & 61440U) == 40960U) {
      return ((_Bool )(dst_sb_link->st_dev == src_sb_link->st_dev));
    } else {

    }
  } else {

  }
  if ((unsigned int const   )x->dereference == 2U) {
    if (! ((src_sb_link->st_mode & 61440U) == 40960U)) {
      tmp_src_sb = (struct stat )*src_sb_link;
    } else {
      tmp___10 = stat((char const   */* __restrict  */)src_name, (struct stat */* __restrict  */)(& tmp_src_sb));
      if (tmp___10 != 0) {
        return ((_Bool)1);
      } else {

      }
    }
    if (! ((dst_sb_link->st_mode & 61440U) == 40960U)) {
      tmp_dst_sb = (struct stat )*dst_sb_link;
    } else {
      tmp___11 = stat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& tmp_dst_sb));
      if (tmp___11 != 0) {
        return ((_Bool)1);
      } else {

      }
    }
    if (tmp_src_sb.st_ino == tmp_dst_sb.st_ino) {
      if (! (tmp_src_sb.st_dev == tmp_dst_sb.st_dev)) {
        return ((_Bool)1);
      } else {

      }
    } else {
      return ((_Bool)1);
    }
    if (x->hard_link) {
      *return_now = (_Bool)1;
      return ((_Bool)1);
    } else {

    }
  } else {

  }
  return ((_Bool)0);
}
}
static _Bool writable_destination(char const   *file , mode_t mode ) 
{ _Bool tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if ((mode & 61440U) == 40960U) {
    tmp___1 = 1;
  } else {
    tmp = can_write_any_file();
    if (tmp) {
      tmp___1 = 1;
    } else {
      tmp___0 = euidaccess(file, 2);
      if (tmp___0 == 0) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    }
  }
  return ((_Bool )tmp___1);
}
}
static void overwrite_prompt(char const   *dst_name , struct stat  const  *dst_sb ) 
{ char perms[12] ;
  char const   *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  _Bool tmp___3 ;

  {
  tmp___3 = writable_destination(dst_name, (unsigned int )dst_sb->st_mode);
  if (tmp___3) {
    tmp___1 = quote(dst_name);
    tmp___2 = gettext("%s: overwrite %s? ");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___2, program_name, tmp___1);
  } else {
    strmode((unsigned int )dst_sb->st_mode, perms);
    perms[10] = (char )'\000';
    tmp = quote(dst_name);
    tmp___0 = gettext("%s: try to overwrite %s, overriding mode %04lo (%s)? ");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___0, program_name, tmp, (unsigned long )(dst_sb->st_mode & (unsigned int const   )((4032 | (448 >> 3)) | ((448 >> 3) >> 3))), & perms[1]);
  }
  return;
}
}
extern void dest_info_init(struct cp_options *x ) 
{ 

  {
  x->dest_info = hash_initialize(61UL, (Hash_tuning const   *)((void *)0), & triple_hash, & triple_compare, & triple_free);
  return;
}
}
extern void src_info_init(struct cp_options *x ) 
{ 

  {
  x->src_info = hash_initialize(61UL, (Hash_tuning const   *)((void *)0), & triple_hash_no_name, & triple_compare, & triple_free);
  return;
}
}
static _Bool abandon_move(struct cp_options  const  *x , char const   *dst_name , struct stat  const  *dst_sb ) 
{ _Bool tmp ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  if (! x->move_mode) {
    __assert_fail("x->move_mode", "src/copy.c", 1529U, "abandon_move");
  } else {

  }
  if ((unsigned int const   )x->interactive == 2U) {
    tmp___1 = 1;
  } else {
    if ((unsigned int const   )x->interactive == 3U) {
      goto _L;
    } else {
      if ((unsigned int const   )x->interactive == 4U) {
        if (x->stdin_tty) {
          tmp = writable_destination(dst_name, (unsigned int )dst_sb->st_mode);
          if (tmp) {
            tmp___1 = 0;
          } else {
            _L: 
            overwrite_prompt(dst_name, dst_sb);
            tmp___0 = yesno();
            if (tmp___0) {
              tmp___1 = 0;
            } else {
              tmp___1 = 1;
            }
          }
        } else {
          tmp___1 = 0;
        }
      } else {
        tmp___1 = 0;
      }
    }
  }
  return ((_Bool )tmp___1);
}
}
static void emit_verbose(char const   *src , char const   *dst , char const   *backup_dst_name ) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;

  {
  tmp = quote_n(1, dst);
  tmp___0 = quote_n(0, src);
  printf((char const   */* __restrict  */)"%s -> %s", tmp___0, tmp);
  if (backup_dst_name) {
    tmp___1 = quote(backup_dst_name);
    tmp___2 = gettext(" (backup: %s)");
    printf((char const   */* __restrict  */)tmp___2, tmp___1);
  } else {

  }
  putchar_unlocked('\n');
  return;
}
}
static void restore_default_fscreatecon_or_die(void) 
{ char *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  tmp___1 = setfscreatecon((char *)((void *)0));
  if (tmp___1 != 0) {
    tmp = gettext("failed to restore the default file creation context");
    tmp___0 = __errno_location();
    error(1, *tmp___0, (char const   *)tmp);
  } else {

  }
  return;
}
}
static _Bool create_hard_link(char const   *src_name , char const   *dst_name , _Bool replace , _Bool verbose ) 
{ _Bool link_failed ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  int *tmp___11 ;

  {
  tmp = rpl_linkat(-100, src_name, -100, dst_name, 0);
  link_failed = (_Bool )(tmp != 0);
  if (link_failed) {
    if (replace) {
      tmp___7 = __errno_location();
      if (*tmp___7 == 17) {
        tmp___3 = unlink(dst_name);
        if (tmp___3 != 0) {
          tmp___0 = quote(dst_name);
          tmp___1 = gettext("cannot remove %s");
          tmp___2 = __errno_location();
          error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
          return ((_Bool)0);
        } else {

        }
        if (verbose) {
          tmp___4 = quote(dst_name);
          tmp___5 = gettext("removed %s\n");
          printf((char const   */* __restrict  */)tmp___5, tmp___4);
        } else {

        }
        tmp___6 = rpl_linkat(-100, src_name, -100, dst_name, 0);
        link_failed = (_Bool )(tmp___6 != 0);
      } else {

      }
    } else {

    }
  } else {

  }
  if (link_failed) {
    tmp___8 = quote_n(1, src_name);
    tmp___9 = quote_n(0, dst_name);
    tmp___10 = gettext("cannot create hard link %s to %s");
    tmp___11 = __errno_location();
    error(0, *tmp___11, (char const   *)tmp___10, tmp___9, tmp___8);
    return ((_Bool)0);
  } else {

  }
  return ((_Bool)1);
}
}
static _Bool copy_internal(char const   *src_name , char const   *dst_name , _Bool new_dst , dev_t device , struct dir_list *ancestors , struct cp_options  const  *x , _Bool command_line_arg , _Bool *first_dir_created_per_command_line_arg , _Bool *copy_into_self , _Bool *rename_succeeded ) 
{ struct stat src_sb ;
  struct stat dst_sb ;
  mode_t src_mode ;
  mode_t dst_mode ;
  mode_t dst_mode_bits ;
  mode_t omitted_permissions ;
  _Bool restore_dst_mode ;
  char *earlier_file ;
  char *dst_backup ;
  _Bool backup_succeeded ;
  _Bool delayed_ok ;
  _Bool copied_as_regular ;
  _Bool dest_is_symlink ;
  _Bool have_dst_lstat ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  _Bool tmp___9 ;
  _Bool use_stat ;
  int tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  int *tmp___14 ;
  _Bool return_now ;
  _Bool unlink_src ;
  char const   *tmp___15 ;
  char const   *tmp___16 ;
  char *tmp___17 ;
  _Bool tmp___18 ;
  int options ;
  int tmp___19 ;
  _Bool tmp___20 ;
  int tmp___21 ;
  char const   *tmp___22 ;
  char *tmp___23 ;
  _Bool tmp___24 ;
  int tmp___25 ;
  char const   *tmp___26 ;
  char *tmp___27 ;
  int *tmp___28 ;
  _Bool tmp___29 ;
  char const   *tmp___30 ;
  char const   *tmp___31 ;
  char *tmp___32 ;
  char const   *tmp___33 ;
  char const   *tmp___34 ;
  char *tmp___35 ;
  _Bool tmp___36 ;
  char const   *tmp___37 ;
  char *tmp___38 ;
  char const   *tmp___39 ;
  char const   *tmp___40 ;
  char *tmp___41 ;
  char *tmp_backup ;
  char *tmp___42 ;
  char const   *fmt ;
  char *tmp___43 ;
  char *tmp___44 ;
  char const   *tmp___45 ;
  char const   *tmp___46 ;
  int tmp___47 ;
  char const   *__old ;
  size_t __len ;
  size_t tmp___48 ;
  char *__new ;
  void *tmp___49 ;
  void *tmp___50 ;
  char const   *tmp___51 ;
  char *tmp___52 ;
  int *tmp___53 ;
  int *tmp___54 ;
  int tmp___55 ;
  char const   *tmp___56 ;
  char *tmp___57 ;
  int *tmp___58 ;
  int tmp___59 ;
  int *tmp___60 ;
  char const   *tmp___61 ;
  char *tmp___62 ;
  char *tmp___63 ;
  _Bool tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  int tmp___67 ;
  _Bool lstat_ok ;
  struct stat tmp_buf ;
  struct stat *dst_lstat_sb ;
  int tmp___68 ;
  char const   *tmp___69 ;
  char const   *tmp___70 ;
  char *tmp___71 ;
  _Bool tmp___72 ;
  char *tmp___73 ;
  char const   *tmp___74 ;
  char const   *tmp___75 ;
  char *tmp___76 ;
  char const   *tmp___77 ;
  char const   *tmp___78 ;
  char *tmp___79 ;
  _Bool tmp___80 ;
  _Bool tmp___81 ;
  char *tmp___82 ;
  int tmp___83 ;
  char const   *tmp___84 ;
  char const   *tmp___85 ;
  char *tmp___86 ;
  int *tmp___87 ;
  char const   *tmp___88 ;
  char const   *tmp___89 ;
  char *tmp___90 ;
  int *tmp___91 ;
  int *tmp___92 ;
  char const   *tmp___93 ;
  char const   *tmp___94 ;
  char *tmp___95 ;
  int *tmp___96 ;
  int tmp___97 ;
  int *tmp___98 ;
  mode_t tmp___99 ;
  int tmp___100 ;
  int tmp___101 ;
  _Bool all_errors ;
  int tmp___102 ;
  _Bool some_errors ;
  int tmp___103 ;
  char *con ;
  char const   *tmp___104 ;
  char *tmp___105 ;
  int *tmp___106 ;
  int *tmp___107 ;
  _Bool tmp___108 ;
  int tmp___109 ;
  char const   *tmp___110 ;
  char *tmp___111 ;
  int *tmp___112 ;
  int *tmp___113 ;
  _Bool tmp___114 ;
  int tmp___115 ;
  struct dir_list *dir ;
  char const   *tmp___116 ;
  char *tmp___117 ;
  _Bool __attribute__((__pure__))  tmp___118 ;
  void *tmp___119 ;
  char const   *tmp___120 ;
  char *tmp___121 ;
  int *tmp___122 ;
  int tmp___123 ;
  char const   *tmp___124 ;
  char *tmp___125 ;
  int *tmp___126 ;
  char const   *tmp___127 ;
  char *tmp___128 ;
  int *tmp___129 ;
  int tmp___130 ;
  int tmp___131 ;
  struct stat dot_sb ;
  struct stat dst_parent_sb ;
  char *dst_parent ;
  _Bool in_current_dir ;
  int tmp___132 ;
  int tmp___133 ;
  int tmp___134 ;
  int tmp___135 ;
  char const   *tmp___136 ;
  char *tmp___137 ;
  char const   *tmp___138 ;
  char const   *tmp___139 ;
  char *tmp___140 ;
  int *tmp___141 ;
  int tmp___142 ;
  _Bool tmp___143 ;
  _Bool tmp___144 ;
  char const   *tmp___145 ;
  char *tmp___146 ;
  int *tmp___147 ;
  int tmp___148 ;
  int tmp___149 ;
  char const   *tmp___150 ;
  char *tmp___151 ;
  int *tmp___152 ;
  int tmp___153 ;
  char *src_link_val ;
  char *tmp___154 ;
  char const   *tmp___155 ;
  char *tmp___156 ;
  int *tmp___157 ;
  int saved_errno ;
  int *tmp___158 ;
  _Bool same_link ;
  char *dest_link_val ;
  char *tmp___159 ;
  int tmp___160 ;
  size_t tmp___161 ;
  char const   *tmp___162 ;
  char *tmp___163 ;
  int tmp___164 ;
  char *tmp___165 ;
  int *tmp___166 ;
  int tmp___167 ;
  _Bool tmp___168 ;
  char const   *tmp___169 ;
  char *tmp___170 ;
  struct stat sb ;
  int tmp___171 ;
  struct timespec timespec[2] ;
  char const   *tmp___172 ;
  char *tmp___173 ;
  int *tmp___174 ;
  int tmp___175 ;
  int tmp___176 ;
  int tmp___177 ;
  int tmp___178 ;
  _Bool tmp___179 ;
  int tmp___180 ;
  int tmp___181 ;
  mode_t tmp___182 ;
  int tmp___183 ;
  mode_t tmp___184 ;
  char const   *tmp___185 ;
  char *tmp___186 ;
  int *tmp___187 ;
  int tmp___188 ;
  char const   *tmp___189 ;
  char *tmp___190 ;
  int *tmp___191 ;
  int tmp___192 ;
  char const   *tmp___193 ;
  char *tmp___194 ;
  int *tmp___195 ;
  char const   *tmp___196 ;
  char const   *tmp___197 ;
  char *tmp___198 ;
  int tmp___199 ;

  {
  dst_mode = 0U;
  restore_dst_mode = (_Bool)0;
  earlier_file = (char *)((void *)0);
  dst_backup = (char *)((void *)0);
  backup_succeeded = (_Bool)0;
  copied_as_regular = (_Bool)0;
  dest_is_symlink = (_Bool)0;
  have_dst_lstat = (_Bool)0;
  if (x->move_mode) {
    if (rename_succeeded) {
      *rename_succeeded = (_Bool)0;
    } else {

    }
  } else {

  }
  *copy_into_self = (_Bool)0;
  if ((unsigned int const   )x->dereference == 2U) {
    tmp___2 = lstat((char const   */* __restrict  */)src_name, (struct stat */* __restrict  */)(& src_sb));
    tmp___4 = tmp___2;
  } else {
    tmp___3 = stat((char const   */* __restrict  */)src_name, (struct stat */* __restrict  */)(& src_sb));
    tmp___4 = tmp___3;
  }
  if (tmp___4 != 0) {
    tmp = quote(src_name);
    tmp___0 = gettext("cannot stat %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    return ((_Bool)0);
  } else {

  }
  src_mode = src_sb.st_mode;
  if ((src_mode & 61440U) == 16384U) {
    if (! x->recursive) {
      tmp___5 = quote(src_name);
      tmp___6 = gettext("omitting directory %s");
      error(0, 0, (char const   *)tmp___6, tmp___5);
      return ((_Bool)0);
    } else {

    }
  } else {

  }
  if (command_line_arg) {
    if (! ((src_sb.st_mode & 61440U) == 16384U)) {
      if ((unsigned int const   )x->backup_type == 0U) {
        tmp___9 = seen_file((Hash_table const   *)x->src_info, src_name, (struct stat  const  *)(& src_sb));
        if (tmp___9) {
          tmp___7 = quote(src_name);
          tmp___8 = gettext("warning: source file %s specified more than once");
          error(0, 0, (char const   *)tmp___8, tmp___7);
          return ((_Bool)1);
        } else {

        }
      } else {

      }
    } else {

    }
    record_file((Hash_table *)x->src_info, src_name, (struct stat  const  *)(& src_sb));
  } else {

  }
  if (! new_dst) {
    if ((src_mode & 61440U) == 32768U) {
      goto _L;
    } else {
      if (x->copy_as_regular) {
        if ((src_mode & 61440U) == 16384U) {
          tmp___10 = 0;
        } else {
          if ((src_mode & 61440U) == 40960U) {
            tmp___10 = 0;
          } else {
            _L: 
            if (x->move_mode) {
              tmp___10 = 0;
            } else {
              if (x->symbolic_link) {
                tmp___10 = 0;
              } else {
                if (x->hard_link) {
                  tmp___10 = 0;
                } else {
                  if ((unsigned int const   )x->backup_type != 0U) {
                    tmp___10 = 0;
                  } else {
                    if (x->unlink_dest_before_opening) {
                      tmp___10 = 0;
                    } else {
                      tmp___10 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        tmp___10 = 0;
      }
    }
    use_stat = (_Bool )tmp___10;
    if (use_stat) {
      tmp___65 = stat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& dst_sb));
      tmp___67 = tmp___65;
    } else {
      tmp___66 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& dst_sb));
      tmp___67 = tmp___66;
    }
    if (tmp___67 != 0) {
      tmp___14 = __errno_location();
      if (*tmp___14 != 2) {
        tmp___11 = quote(dst_name);
        tmp___12 = gettext("cannot stat %s");
        tmp___13 = __errno_location();
        error(0, *tmp___13, (char const   *)tmp___12, tmp___11);
        return ((_Bool)0);
      } else {
        new_dst = (_Bool)1;
      }
    } else {
      have_dst_lstat = (_Bool )(! use_stat);
      tmp___18 = same_file_ok(src_name, (struct stat  const  *)(& src_sb), dst_name, (struct stat  const  *)(& dst_sb), x, & return_now, & unlink_src);
      if (! tmp___18) {
        tmp___15 = quote_n(1, dst_name);
        tmp___16 = quote_n(0, src_name);
        tmp___17 = gettext("%s and %s are the same file");
        error(0, 0, (char const   *)tmp___17, tmp___16, tmp___15);
        return ((_Bool)0);
      } else {

      }
      if (! ((src_mode & 61440U) == 16384U)) {
        if (x->update) {
          if (x->preserve_timestamps) {
            if (x->move_mode) {
              if (dst_sb.st_dev == src_sb.st_dev) {
                tmp___19 = 0;
              } else {
                tmp___19 = 1;
              }
            } else {
              tmp___19 = 1;
            }
          } else {
            tmp___19 = 0;
          }
          options = tmp___19;
          tmp___21 = utimecmp(dst_name, (struct stat  const  *)(& dst_sb), (struct stat  const  *)(& src_sb), options);
          if (0 <= tmp___21) {
            if (rename_succeeded) {
              *rename_succeeded = (_Bool)1;
            } else {

            }
            earlier_file = remember_copied(dst_name, src_sb.st_ino, src_sb.st_dev);
            if (earlier_file) {
              tmp___20 = create_hard_link((char const   *)earlier_file, dst_name, (_Bool)1, (_Bool )x->verbose);
              if (! tmp___20) {
                goto un_backup;
              } else {

              }
            } else {

            }
            return ((_Bool)1);
          } else {

          }
        } else {

        }
      } else {

      }
      if (x->move_mode) {
        tmp___24 = abandon_move(x, dst_name, (struct stat  const  *)(& dst_sb));
        if (tmp___24) {
          goto _L___0;
        } else {
          if (unlink_src) {
            tmp___25 = unlink(src_name);
            if (tmp___25 == 0) {
              _L___0: 
              if (rename_succeeded) {
                *rename_succeeded = (_Bool)1;
              } else {

              }
              if (unlink_src) {
                if (x->verbose) {
                  tmp___22 = quote(src_name);
                  tmp___23 = gettext("removed %s\n");
                  printf((char const   */* __restrict  */)tmp___23, tmp___22);
                } else {

                }
              } else {

              }
              return ((_Bool)1);
            } else {

            }
          } else {

          }
        }
        if (unlink_src) {
          tmp___26 = quote(src_name);
          tmp___27 = gettext("cannot remove %s");
          tmp___28 = __errno_location();
          error(0, *tmp___28, (char const   *)tmp___27, tmp___26);
          return ((_Bool)0);
        } else {

        }
      } else {
        if (! ((src_mode & 61440U) == 16384U)) {
          if ((unsigned int const   )x->interactive == 2U) {
            return ((_Bool)1);
          } else {
            if ((unsigned int const   )x->interactive == 3U) {
              overwrite_prompt(dst_name, (struct stat  const  *)(& dst_sb));
              tmp___29 = yesno();
              if (! tmp___29) {
                return ((_Bool)1);
              } else {

              }
            } else {

            }
          }
        } else {

        }
      }
      if (return_now) {
        return ((_Bool)1);
      } else {

      }
      if (! ((dst_sb.st_mode & 61440U) == 16384U)) {
        if ((src_mode & 61440U) == 16384U) {
          if (x->move_mode) {
            if (! ((unsigned int const   )x->backup_type != 0U)) {
              tmp___30 = quote_n(1, src_name);
              tmp___31 = quote_n(0, dst_name);
              tmp___32 = gettext("cannot overwrite non-directory %s with directory %s");
              error(0, 0, (char const   *)tmp___32, tmp___31, tmp___30);
              return ((_Bool)0);
            } else {

            }
          } else {
            tmp___30 = quote_n(1, src_name);
            tmp___31 = quote_n(0, dst_name);
            tmp___32 = gettext("cannot overwrite non-directory %s with directory %s");
            error(0, 0, (char const   *)tmp___32, tmp___31, tmp___30);
            return ((_Bool)0);
          }
        } else {

        }
        if (command_line_arg) {
          if ((unsigned int const   )x->backup_type != 3U) {
            tmp___36 = seen_file((Hash_table const   *)x->dest_info, dst_name, (struct stat  const  *)(& dst_sb));
            if (tmp___36) {
              tmp___33 = quote_n(1, src_name);
              tmp___34 = quote_n(0, dst_name);
              tmp___35 = gettext("will not overwrite just-created %s with %s");
              error(0, 0, (char const   *)tmp___35, tmp___34, tmp___33);
              return ((_Bool)0);
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
      if (! ((src_mode & 61440U) == 16384U)) {
        if ((dst_sb.st_mode & 61440U) == 16384U) {
          if (x->move_mode) {
            if (! ((unsigned int const   )x->backup_type != 0U)) {
              tmp___37 = quote(dst_name);
              tmp___38 = gettext("cannot overwrite directory %s with non-directory");
              error(0, 0, (char const   *)tmp___38, tmp___37);
              return ((_Bool)0);
            } else {

            }
          } else {
            tmp___37 = quote(dst_name);
            tmp___38 = gettext("cannot overwrite directory %s with non-directory");
            error(0, 0, (char const   *)tmp___38, tmp___37);
            return ((_Bool)0);
          }
        } else {

        }
      } else {

      }
      if (x->move_mode) {
        if ((src_sb.st_mode & 61440U) == 16384U) {
          if (! ((dst_sb.st_mode & 61440U) == 16384U)) {
            if ((unsigned int const   )x->backup_type == 0U) {
              tmp___39 = quote_n(0, dst_name);
              tmp___40 = quote_n(0, src_name);
              tmp___41 = gettext("cannot move directory onto non-directory: %s -> %s");
              error(0, 0, (char const   *)tmp___41, tmp___40, tmp___39);
              return ((_Bool)0);
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
      if ((unsigned int const   )x->backup_type != 0U) {
        tmp___63 = last_component(src_name);
        tmp___64 = dot_or_dotdot((char const   *)tmp___63);
        if (tmp___64) {
          goto _L___5;
        } else {
          if (x->move_mode) {
            goto _L___4;
          } else {
            if (! ((dst_sb.st_mode & 61440U) == 16384U)) {
              _L___4: 
              tmp___42 = find_backup_file_name(dst_name, (enum backup_type )x->backup_type);
              tmp_backup = tmp___42;
              tmp___47 = strcmp((char const   *)tmp_backup, src_name);
              if (tmp___47 == 0) {
                if (x->move_mode) {
                  tmp___43 = gettext("backing up %s would destroy source;  %s not moved");
                  fmt = (char const   *)tmp___43;
                } else {
                  tmp___44 = gettext("backing up %s would destroy source;  %s not copied");
                  fmt = (char const   *)tmp___44;
                }
                tmp___45 = quote_n(1, src_name);
                tmp___46 = quote_n(0, dst_name);
                error(0, 0, fmt, tmp___46, tmp___45);
                free((void *)tmp_backup);
                return ((_Bool)0);
              } else {

              }
              while (1) {
                __old = (char const   *)tmp_backup;
                tmp___48 = strlen(__old);
                __len = tmp___48 + 1UL;
                tmp___49 = __builtin_alloca(__len);
                __new = (char *)tmp___49;
                tmp___50 = memcpy((void */* __restrict  */)__new, (void const   */* __restrict  */)__old, __len);
                dst_backup = (char *)tmp___50;
                break;
              }
              free((void *)tmp_backup);
              tmp___55 = rename(dst_name, (char const   *)dst_backup);
              if (tmp___55 != 0) {
                tmp___54 = __errno_location();
                if (*tmp___54 != 2) {
                  tmp___51 = quote(dst_name);
                  tmp___52 = gettext("cannot backup %s");
                  tmp___53 = __errno_location();
                  error(0, *tmp___53, (char const   *)tmp___52, tmp___51);
                  return ((_Bool)0);
                } else {
                  dst_backup = (char *)((void *)0);
                }
              } else {
                backup_succeeded = (_Bool)1;
              }
              new_dst = (_Bool)1;
            } else {
              goto _L___5;
            }
          }
        }
      } else {
        _L___5: 
        if (! ((dst_sb.st_mode & 61440U) == 16384U)) {
          if (! x->move_mode) {
            if (x->unlink_dest_before_opening) {
              goto _L___1;
            } else {
              if (x->preserve_links) {
                if (1UL < dst_sb.st_nlink) {
                  goto _L___1;
                } else {
                  goto _L___2;
                }
              } else {
                _L___2: 
                if ((unsigned int const   )x->dereference == 2U) {
                  if (! ((src_sb.st_mode & 61440U) == 32768U)) {
                    _L___1: 
                    tmp___59 = unlink(dst_name);
                    if (tmp___59 != 0) {
                      tmp___60 = __errno_location();
                      if (*tmp___60 != 2) {
                        tmp___56 = quote(dst_name);
                        tmp___57 = gettext("cannot remove %s");
                        tmp___58 = __errno_location();
                        error(0, *tmp___58, (char const   *)tmp___57, tmp___56);
                        return ((_Bool)0);
                      } else {

                      }
                    } else {

                    }
                    new_dst = (_Bool)1;
                    if (x->verbose) {
                      tmp___61 = quote(dst_name);
                      tmp___62 = gettext("removed %s\n");
                      printf((char const   */* __restrict  */)tmp___62, tmp___61);
                    } else {

                    }
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
      }
    }
  } else {

  }
  if (command_line_arg) {
    if (x->dest_info) {
      if (! x->move_mode) {
        if ((unsigned int const   )x->backup_type == 0U) {
          lstat_ok = (_Bool)1;
          if (have_dst_lstat) {
            dst_lstat_sb = & dst_sb;
          } else {
            tmp___68 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& tmp_buf));
            if (tmp___68 == 0) {
              dst_lstat_sb = & tmp_buf;
            } else {
              lstat_ok = (_Bool)0;
            }
          }
          if (lstat_ok) {
            if ((dst_lstat_sb->st_mode & 61440U) == 40960U) {
              tmp___72 = seen_file((Hash_table const   *)x->dest_info, dst_name, (struct stat  const  *)dst_lstat_sb);
              if (tmp___72) {
                tmp___69 = quote_n(1, dst_name);
                tmp___70 = quote_n(0, src_name);
                tmp___71 = gettext("will not copy %s through just-created symlink %s");
                error(0, 0, (char const   *)tmp___71, tmp___70, tmp___69);
                return ((_Bool)0);
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

    }
  } else {

  }
  if (x->verbose) {
    if (! ((src_mode & 61440U) == 16384U)) {
      if (backup_succeeded) {
        tmp___73 = dst_backup;
      } else {
        tmp___73 = (char *)((void *)0);
      }
      emit_verbose(src_name, dst_name, (char const   *)tmp___73);
    } else {

    }
  } else {

  }
  if (x->move_mode) {
    if (src_sb.st_nlink == 1UL) {
      earlier_file = src_to_dest_lookup(src_sb.st_ino, src_sb.st_dev);
    } else {
      goto _L___9;
    }
  } else {
    _L___9: 
    if (x->preserve_links) {
      if (! x->hard_link) {
        if (1UL < src_sb.st_nlink) {
          earlier_file = remember_copied(dst_name, src_sb.st_ino, src_sb.st_dev);
        } else {
          if (command_line_arg) {
            if ((unsigned int const   )x->dereference == 3U) {
              earlier_file = remember_copied(dst_name, src_sb.st_ino, src_sb.st_dev);
            } else {
              goto _L___7;
            }
          } else {
            _L___7: 
            if ((unsigned int const   )x->dereference == 4U) {
              earlier_file = remember_copied(dst_name, src_sb.st_ino, src_sb.st_dev);
            } else {
              goto _L___8;
            }
          }
        }
      } else {
        goto _L___8;
      }
    } else {
      _L___8: 
      if (x->recursive) {
        if ((src_mode & 61440U) == 16384U) {
          if (command_line_arg) {
            earlier_file = remember_copied(dst_name, src_sb.st_ino, src_sb.st_dev);
          } else {
            earlier_file = src_to_dest_lookup(src_sb.st_ino, src_sb.st_dev);
          }
        } else {

        }
      } else {

      }
    }
  }
  if (earlier_file) {
    if ((src_mode & 61440U) == 16384U) {
      tmp___80 = same_name(src_name, (char const   *)earlier_file);
      if (tmp___80) {
        tmp___74 = quote_n(1, top_level_dst_name);
        tmp___75 = quote_n(0, top_level_src_name);
        tmp___76 = gettext("cannot copy a directory, %s, into itself, %s");
        error(0, 0, (char const   *)tmp___76, tmp___75, tmp___74);
        *copy_into_self = (_Bool)1;
        goto un_backup;
      } else {
        if (! ((unsigned int const   )x->dereference == 4U)) {
          tmp___77 = quote_n(1, (char const   *)earlier_file);
          tmp___78 = quote_n(0, dst_name);
          tmp___79 = gettext("will not create hard link %s to directory %s");
          error(0, 0, (char const   *)tmp___79, tmp___78, tmp___77);
          goto un_backup;
        } else {

        }
      }
    } else {
      tmp___81 = create_hard_link((char const   *)earlier_file, dst_name, (_Bool)1, (_Bool )x->verbose);
      if (! tmp___81) {
        goto un_backup;
      } else {

      }
      return ((_Bool)1);
    }
  } else {

  }
  if (x->move_mode) {
    tmp___83 = rename(src_name, dst_name);
    if (tmp___83 == 0) {
      if (x->verbose) {
        if ((src_mode & 61440U) == 16384U) {
          if (backup_succeeded) {
            tmp___82 = dst_backup;
          } else {
            tmp___82 = (char *)((void *)0);
          }
          emit_verbose(src_name, dst_name, (char const   *)tmp___82);
        } else {

        }
      } else {

      }
      if (rename_succeeded) {
        *rename_succeeded = (_Bool)1;
      } else {

      }
      if (command_line_arg) {
        record_file((Hash_table *)x->dest_info, dst_name, (struct stat  const  *)(& src_sb));
      } else {

      }
      return ((_Bool)1);
    } else {

    }
    tmp___87 = __errno_location();
    if (*tmp___87 == 22) {
      tmp___84 = quote_n(1, top_level_dst_name);
      tmp___85 = quote_n(0, top_level_src_name);
      tmp___86 = gettext("cannot move %s to a subdirectory of itself, %s");
      error(0, 0, (char const   *)tmp___86, tmp___85, tmp___84);
      *copy_into_self = (_Bool)1;
      return ((_Bool)1);
    } else {

    }
    tmp___92 = __errno_location();
    if (*tmp___92 != 18) {
      tmp___88 = quote_n(1, dst_name);
      tmp___89 = quote_n(0, src_name);
      tmp___90 = gettext("cannot move %s to %s");
      tmp___91 = __errno_location();
      error(0, *tmp___91, (char const   *)tmp___90, tmp___89, tmp___88);
      forget_created(src_sb.st_ino, src_sb.st_dev);
      return ((_Bool)0);
    } else {

    }
    tmp___97 = unlink(dst_name);
    if (tmp___97 != 0) {
      tmp___98 = __errno_location();
      if (*tmp___98 != 2) {
        tmp___93 = quote_n(1, dst_name);
        tmp___94 = quote_n(0, src_name);
        tmp___95 = gettext("inter-device move failed: %s to %s; unable to remove target");
        tmp___96 = __errno_location();
        error(0, *tmp___96, (char const   *)tmp___95, tmp___94, tmp___93);
        forget_created(src_sb.st_ino, src_sb.st_dev);
        return ((_Bool)0);
      } else {

      }
    } else {

    }
    new_dst = (_Bool)1;
  } else {

  }
  if (x->set_mode) {
    tmp___99 = (unsigned int )x->mode;
  } else {
    tmp___99 = (unsigned int )((unsigned int const   )src_mode);
  }
  dst_mode_bits = tmp___99 & (unsigned int )((unsigned int const   )((4032 | (448 >> 3)) | ((448 >> 3) >> 3)));
  if (x->preserve_ownership) {
    tmp___101 = (448 >> 3) | ((448 >> 3) >> 3);
  } else {
    if ((src_mode & 61440U) == 16384U) {
      tmp___100 = (128 >> 3) | ((128 >> 3) >> 3);
    } else {
      tmp___100 = 0;
    }
    __repair_app_1483__e21: /* CIL Label */ 
    {
    tmp___101 = tmp___100;
    if (tmp___83 == 0) {
      if (x->verbose) {
        if ((src_mode & 61440U) == 16384U) {
          if (backup_succeeded) {
            tmp___82 = dst_backup;
          } else {
            tmp___82 = (char *)((void *)0);
          }
          emit_verbose(src_name, dst_name, (char const   *)tmp___82);
        } else {

        }
      } else {

      }
      if (rename_succeeded) {
        *rename_succeeded = (_Bool)1;
      } else {

      }
      if (command_line_arg) {
        record_file((Hash_table *)x->dest_info, dst_name, (struct stat  const  *)(& src_sb));
      } else {

      }
      return ((_Bool)1);
    } else {

    }
    }
  }
  omitted_permissions = dst_mode_bits & (unsigned int )tmp___101;
  delayed_ok = (_Bool)1;
  if (x->preserve_security_context) {
    if (! x->data_copy_required) {
      tmp___102 = 1;
    } else {
      if (x->require_preserve_context) {
        tmp___102 = 1;
      } else {
        tmp___102 = 0;
      }
    }
    all_errors = (_Bool )tmp___102;
    if (! all_errors) {
      if (! x->reduce_diagnostics) {
        tmp___103 = 1;
      } else {
        tmp___103 = 0;
      }
    } else {
      tmp___103 = 0;
    }
    some_errors = (_Bool )tmp___103;
    tmp___115 = lgetfilecon(src_name, & con);
    if (0 <= tmp___115) {
      tmp___109 = setfscreatecon(con);
      if (tmp___109 < 0) {
        if (all_errors) {
          tmp___104 = quote((char const   *)con);
          tmp___105 = gettext("failed to set default file creation context to %s");
          tmp___106 = __errno_location();
          error(0, *tmp___106, (char const   *)tmp___105, tmp___104);
        } else {
          if (some_errors) {
            tmp___107 = __errno_location();
            tmp___108 = errno_unsupported(*tmp___107);
            if (! tmp___108) {
              tmp___104 = quote((char const   *)con);
              tmp___105 = gettext("failed to set default file creation context to %s");
              tmp___106 = __errno_location();
              error(0, *tmp___106, (char const   *)tmp___105, tmp___104);
            } else {

            }
          } else {

          }
        }
        if (x->require_preserve_context) {
          freecon(con);
          return ((_Bool)0);
        } else {

        }
      } else {

      }
      freecon(con);
    } else {
      if (all_errors) {
        tmp___110 = quote(src_name);
        tmp___111 = gettext("failed to get security context of %s");
        tmp___112 = __errno_location();
        error(0, *tmp___112, (char const   *)tmp___111, tmp___110);
      } else {
        if (some_errors) {
          tmp___113 = __errno_location();
          tmp___114 = errno_unsupported(*tmp___113);
          if (! tmp___114) {
            tmp___110 = quote(src_name);
            tmp___111 = gettext("failed to get security context of %s");
            tmp___112 = __errno_location();
            error(0, *tmp___112, (char const   *)tmp___111, tmp___110);
          } else {

          }
        } else {

        }
      }
      if (x->require_preserve_context) {
        return ((_Bool)0);
      } else {

      }
    }
  } else {

  }
  if ((src_mode & 61440U) == 16384U) {
    tmp___118 = is_ancestor((struct stat  const  *)(& src_sb), (struct dir_list  const  *)ancestors);
    if (tmp___118) {
      tmp___116 = quote(src_name);
      tmp___117 = gettext("cannot copy cyclic symbolic link %s");
      error(0, 0, (char const   *)tmp___117, tmp___116);
      goto un_backup;
    } else {

    }
    tmp___119 = __builtin_alloca(sizeof(*dir));
    dir = (struct dir_list *)tmp___119;
    dir->parent = ancestors;
    dir->ino = src_sb.st_ino;
    dir->dev = src_sb.st_dev;
    if (new_dst) {
      goto _L___10;
    } else {
      if (! ((dst_sb.st_mode & 61440U) == 16384U)) {
        _L___10: 
        tmp___123 = mkdir(dst_name, dst_mode_bits & ~ omitted_permissions);
        if (tmp___123 != 0) {
          tmp___120 = quote(dst_name);
          tmp___121 = gettext("cannot create directory %s");
          tmp___122 = __errno_location();
          error(0, *tmp___122, (char const   *)tmp___121, tmp___120);
          goto un_backup;
        } else {

        }
        tmp___131 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& dst_sb));
        if (tmp___131 != 0) {
          tmp___124 = quote(dst_name);
          tmp___125 = gettext("cannot stat %s");
          tmp___126 = __errno_location();
          error(0, *tmp___126, (char const   *)tmp___125, tmp___124);
          goto un_backup;
        } else {
          if ((dst_sb.st_mode & 448U) != 448U) {
            dst_mode = dst_sb.st_mode;
            restore_dst_mode = (_Bool)1;
            tmp___130 = chmod(dst_name, dst_mode | 448U);
            if (tmp___130 != 0) {
              tmp___127 = quote(dst_name);
              tmp___128 = gettext("setting permissions for %s");
              tmp___129 = __errno_location();
              error(0, *tmp___129, (char const   *)tmp___128, tmp___127);
              goto un_backup;
            } else {

            }
          } else {

          }
        }
        if (! *first_dir_created_per_command_line_arg) {
          remember_copied(dst_name, dst_sb.st_ino, dst_sb.st_dev);
          *first_dir_created_per_command_line_arg = (_Bool)1;
        } else {

        }
        if (x->verbose) {
          emit_verbose(src_name, dst_name, (char const   *)((void *)0));
        } else {

        }
      } else {
        omitted_permissions = 0U;
      }
    }
    if (x->one_file_system) {
      if (device != 0UL) {
        if (! (device != src_sb.st_dev)) {
          delayed_ok = copy_dir(src_name, dst_name, new_dst, (struct stat  const  *)(& src_sb), dir, x, first_dir_created_per_command_line_arg, copy_into_self);
        } else {

        }
      } else {
        delayed_ok = copy_dir(src_name, dst_name, new_dst, (struct stat  const  *)(& src_sb), dir, x, first_dir_created_per_command_line_arg, copy_into_self);
      }
    } else {
      delayed_ok = copy_dir(src_name, dst_name, new_dst, (struct stat  const  *)(& src_sb), dir, x, first_dir_created_per_command_line_arg, copy_into_self);
    }
  } else {
    if (x->symbolic_link) {
      dest_is_symlink = (_Bool)1;
      if ((int const   )*src_name != 47) {
        dst_parent = dir_name(dst_name);
        tmp___132 = strcmp(".", (char const   *)dst_parent);
        if (tmp___132 == 0) {
          tmp___135 = 1;
        } else {
          tmp___133 = stat((char const   */* __restrict  */)".", (struct stat */* __restrict  */)(& dot_sb));
          if (tmp___133 != 0) {
            tmp___135 = 1;
          } else {
            tmp___134 = stat((char const   */* __restrict  */)dst_parent, (struct stat */* __restrict  */)(& dst_parent_sb));
            if (tmp___134 != 0) {
              tmp___135 = 1;
            } else {
              if (dot_sb.st_ino == dst_parent_sb.st_ino) {
                if (dot_sb.st_dev == dst_parent_sb.st_dev) {
                  tmp___135 = 1;
                } else {
                  tmp___135 = 0;
                }
              } else {
                tmp___135 = 0;
              }
            }
          }
        }
        in_current_dir = (_Bool )tmp___135;
        free((void *)dst_parent);
        if (! in_current_dir) {
          tmp___136 = quote(dst_name);
          tmp___137 = gettext("%s: can make relative symbolic links only in current directory");
          error(0, 0, (char const   *)tmp___137, tmp___136);
          goto un_backup;
        } else {

        }
      } else {

      }
      tmp___142 = symlink(src_name, dst_name);
      if (tmp___142 != 0) {
        tmp___138 = quote_n(1, src_name);
        tmp___139 = quote_n(0, dst_name);
        tmp___140 = gettext("cannot create symbolic link %s to %s");
        tmp___141 = __errno_location();
        error(0, *tmp___141, (char const   *)tmp___140, tmp___139, tmp___138);
        goto un_backup;
      } else {

      }
    } else {
      if (x->hard_link) {
        tmp___143 = create_hard_link(src_name, dst_name, (_Bool)0, (_Bool)0);
        if (! tmp___143) {
          goto un_backup;
        } else {

        }
      } else {
        if ((src_mode & 61440U) == 32768U) {
          goto _L___12;
        } else {
          if (x->copy_as_regular) {
            if (! ((src_mode & 61440U) == 40960U)) {
              _L___12: 
              copied_as_regular = (_Bool)1;
              tmp___144 = copy_reg(src_name, dst_name, x, dst_mode_bits & (unsigned int )((448 | (448 >> 3)) | ((448 >> 3) >> 3)), omitted_permissions, & new_dst, (struct stat  const  *)(& src_sb));
              if (! tmp___144) {
                goto un_backup;
              } else {

              }
            } else {
              goto _L___13;
            }
          } else {
            _L___13: 
            if ((src_mode & 61440U) == 4096U) {
              tmp___149 = mknod(dst_name, src_mode & ~ omitted_permissions, 0UL);
              if (tmp___149 != 0) {
                tmp___148 = mkfifo(dst_name, (src_mode & 4294963199U) & ~ omitted_permissions);
                if (tmp___148 != 0) {
                  tmp___145 = quote(dst_name);
                  tmp___146 = gettext("cannot create fifo %s");
                  tmp___147 = __errno_location();
                  error(0, *tmp___147, (char const   *)tmp___146, tmp___145);
                  goto un_backup;
                } else {

                }
              } else {

              }
            } else {
              if ((src_mode & 61440U) == 24576U) {
                goto _L___11;
              } else {
                if ((src_mode & 61440U) == 8192U) {
                  goto _L___11;
                } else {
                  if ((src_mode & 61440U) == 49152U) {
                    _L___11: 
                    tmp___153 = mknod(dst_name, src_mode & ~ omitted_permissions, src_sb.st_rdev);
                    if (tmp___153 != 0) {
                      tmp___150 = quote(dst_name);
                      tmp___151 = gettext("cannot create special file %s");
                      tmp___152 = __errno_location();
                      error(0, *tmp___152, (char const   *)tmp___151, tmp___150);
                      goto un_backup;
                    } else {

                    }
                  } else {
                    if ((src_mode & 61440U) == 40960U) {
                      tmp___154 = areadlink_with_size(src_name, (unsigned long )src_sb.st_size);
                      src_link_val = tmp___154;
                      dest_is_symlink = (_Bool)1;
                      if ((unsigned long )src_link_val == (unsigned long )((void *)0)) {
                        tmp___155 = quote(src_name);
                        tmp___156 = gettext("cannot read symbolic link %s");
                        tmp___157 = __errno_location();
                        error(0, *tmp___157, (char const   *)tmp___156, tmp___155);
                        goto un_backup;
                      } else {

                      }
                      tmp___164 = symlink((char const   *)src_link_val, dst_name);
                      if (tmp___164 == 0) {
                        free((void *)src_link_val);
                      } else {
                        tmp___158 = __errno_location();
                        saved_errno = *tmp___158;
                        same_link = (_Bool)0;
                        if (x->update) {
                          if (! new_dst) {
                            if ((dst_sb.st_mode & 61440U) == 40960U) {
                              tmp___161 = strlen((char const   *)src_link_val);
                              if ((unsigned long )dst_sb.st_size == tmp___161) {
                                tmp___159 = areadlink_with_size(dst_name, (unsigned long )dst_sb.st_size);
                                dest_link_val = tmp___159;
                                if (dest_link_val) {
                                  tmp___160 = strcmp((char const   *)dest_link_val, (char const   *)src_link_val);
                                  if (tmp___160 == 0) {
                                    same_link = (_Bool)1;
                                  } else {

                                  }
                                } else {

                                }
                                free((void *)dest_link_val);
                              } else {

                              }
                            } else {

                            }
                          } else {

                          }
                        } else {

                        }
                        free((void *)src_link_val);
                        if (! same_link) {
                          tmp___162 = quote(dst_name);
                          tmp___163 = gettext("cannot create symbolic link %s");
                          error(0, saved_errno, (char const   *)tmp___163, tmp___162);
                          goto un_backup;
                        } else {

                        }
                      }
                      if (x->preserve_security_context) {
                        restore_default_fscreatecon_or_die();
                      } else {

                      }
                      if (x->preserve_ownership) {
                        tmp___167 = lchown(dst_name, src_sb.st_uid, src_sb.st_gid);
                        if (tmp___167 != 0) {
                          tmp___168 = chown_failure_ok(x);
                          if (! tmp___168) {
                            tmp___165 = gettext("failed to preserve ownership for %s");
                            tmp___166 = __errno_location();
                            error(0, *tmp___166, (char const   *)tmp___165, dst_name);
                            goto un_backup;
                          } else {

                          }
                        } else {

                        }
                      } else {

                      }
                    } else {
                      tmp___169 = quote(src_name);
                      tmp___170 = gettext("%s has unknown file type");
                      error(0, 0, (char const   *)tmp___170, tmp___169);
                      goto un_backup;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (command_line_arg) {
    if (x->dest_info) {
      tmp___171 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& sb));
      if (tmp___171 == 0) {
        record_file((Hash_table *)x->dest_info, dst_name, (struct stat  const  *)(& sb));
      } else {

      }
    } else {

    }
  } else {

  }
  if (x->hard_link) {
    if (! ((src_mode & 61440U) == 16384U)) {
      return (delayed_ok);
    } else {

    }
  } else {

  }
  if (copied_as_regular) {
    return (delayed_ok);
  } else {

  }
  if (x->preserve_timestamps) {
    timespec[0] = get_stat_atime((struct stat  const  *)(& src_sb));
    timespec[1] = get_stat_mtime((struct stat  const  *)(& src_sb));
    if (dest_is_symlink) {
      tmp___175 = utimens_symlink(dst_name, (struct timespec  const  *)(timespec));
      tmp___177 = tmp___175;
    } else {
      tmp___176 = utimens(dst_name, (struct timespec  const  *)(timespec));
      tmp___177 = tmp___176;
    }
    if (tmp___177 != 0) {
      tmp___172 = quote(dst_name);
      tmp___173 = gettext("preserving times for %s");
      tmp___174 = __errno_location();
      error(0, *tmp___174, (char const   *)tmp___173, tmp___172);
      if (x->require_preserve) {
        return ((_Bool)0);
      } else {

      }
    } else {

    }
  } else {

  }
  if (dest_is_symlink) {
    return (delayed_ok);
  } else {

  }
  if (x->preserve_ownership) {
    if (new_dst) {
      goto _L___16;
    } else {
      if (src_sb.st_uid == dst_sb.st_uid) {
        if (! (src_sb.st_gid == dst_sb.st_gid)) {
          goto _L___16;
        } else {

        }
      } else {
        _L___16: 
        tmp___178 = set_owner(x, dst_name, -1, (struct stat  const  *)(& src_sb), new_dst, (struct stat  const  *)(& dst_sb));
        switch (tmp___178) {
        case -1: 
        return ((_Bool)0);
        case 0: 
        src_mode &= 4294963711U;
        break;
        }
      }
    }
  } else {

  }
  set_author(dst_name, -1, (struct stat  const  *)(& src_sb));
  if (x->preserve_xattr) {
    tmp___179 = copy_attr(src_name, -1, dst_name, -1, x);
    if (! tmp___179) {
      if (x->require_preserve_xattr) {
        return ((_Bool)0);
      } else {

      }
    } else {

    }
  } else {

  }
  if (x->preserve_mode) {
    goto _L___17;
  } else {
    if (x->move_mode) {
      _L___17: 
      tmp___180 = copy_acl(src_name, -1, dst_name, -1, src_mode);
      if (tmp___180 != 0) {
        if (x->require_preserve) {
          return ((_Bool)0);
        } else {

        }
      } else {

      }
    } else {
      if (x->set_mode) {
        tmp___181 = set_acl(dst_name, -1, (unsigned int )x->mode);
        if (tmp___181 != 0) {
          return ((_Bool)0);
        } else {

        }
      } else {
        if (x->explicit_no_preserve_mode) {
          tmp___182 = cached_umask();
          tmp___183 = set_acl(dst_name, -1, 511U & ~ tmp___182);
          if (tmp___183 != 0) {
            return ((_Bool)0);
          } else {

          }
        } else {
          if (omitted_permissions) {
            tmp___184 = cached_umask();
            omitted_permissions &= ~ tmp___184;
            if (omitted_permissions) {
              if (! restore_dst_mode) {
                if (new_dst) {
                  tmp___188 = lstat((char const   */* __restrict  */)dst_name, (struct stat */* __restrict  */)(& dst_sb));
                  if (tmp___188 != 0) {
                    tmp___185 = quote(dst_name);
                    tmp___186 = gettext("cannot stat %s");
                    tmp___187 = __errno_location();
                    error(0, *tmp___187, (char const   *)tmp___186, tmp___185);
                    return ((_Bool)0);
                  } else {

                  }
                } else {

                }
                dst_mode = dst_sb.st_mode;
                if (omitted_permissions & ~ dst_mode) {
                  restore_dst_mode = (_Bool)1;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
          if (restore_dst_mode) {
            tmp___192 = chmod(dst_name, dst_mode | omitted_permissions);
            if (tmp___192 != 0) {
              tmp___189 = quote(dst_name);
              tmp___190 = gettext("preserving permissions for %s");
              tmp___191 = __errno_location();
              error(0, *tmp___191, (char const   *)tmp___190, tmp___189);
              if (x->require_preserve) {
                return ((_Bool)0);
              } else {

              }
            } else {

            }
          } else {

          }
        }
      }
    }
  }
  return (delayed_ok);
  un_backup: 
  if (x->preserve_security_context) {
    restore_default_fscreatecon_or_die();
  } else {

  }
  if ((unsigned long )earlier_file == (unsigned long )((void *)0)) {
    forget_created(src_sb.st_ino, src_sb.st_dev);
  } else {

  }
  if (dst_backup) {
    tmp___199 = rename((char const   *)dst_backup, dst_name);
    if (tmp___199 != 0) {
      tmp___193 = quote(dst_name);
      tmp___194 = gettext("cannot un-backup %s");
      tmp___195 = __errno_location();
      error(0, *tmp___195, (char const   *)tmp___194, tmp___193);
    } else {
      if (x->verbose) {
        tmp___196 = quote_n(1, dst_name);
        tmp___197 = quote_n(0, (char const   *)dst_backup);
        tmp___198 = gettext("%s -> %s (unbackup)\n");
        printf((char const   */* __restrict  */)tmp___198, tmp___197, tmp___196);
      } else {

      }
    }
  } else {

  }
  return ((_Bool)0);
}
}
static _Bool __attribute__((__pure__))  valid_options(struct cp_options  const  *co ) 
{ 

  {
  if (! ((unsigned long )co != (unsigned long )((void *)0))) {
    __assert_fail("co != ((void *)0)", "src/copy.c", 2658U, "valid_options");
  } else {

  }
  if (! ((unsigned int )co->backup_type <= 3U)) {
    __assert_fail("((unsigned int) (co->backup_type) <= numbered_backups)", "src/copy.c", 2659U, "valid_options");
  } else {

  }
  if (! ((unsigned int const   )co->sparse_mode == 1U)) {
    if (! ((unsigned int const   )co->sparse_mode == 2U)) {
      if (! ((unsigned int const   )co->sparse_mode == 3U)) {
        __assert_fail("((co->sparse_mode) == SPARSE_NEVER || (co->sparse_mode) == SPARSE_AUTO || (co->sparse_mode) == SPARSE_ALWAYS)", "src/copy.c", 2660U, "valid_options");
      } else {

      }
    } else {

    }
  } else {

  }
  if (! ((unsigned int const   )co->reflink_mode == 0U)) {
    if (! ((unsigned int const   )co->reflink_mode == 1U)) {
      if (! ((unsigned int const   )co->reflink_mode == 2U)) {
        __assert_fail("((co->reflink_mode) == REFLINK_NEVER || (co->reflink_mode) == REFLINK_AUTO || (co->reflink_mode) == REFLINK_ALWAYS)", "src/copy.c", 2661U, "valid_options");
      } else {

      }
    } else {

    }
  } else {

  }
  if (co->hard_link) {
    if (co->symbolic_link) {
      __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 2662U, "valid_options");
    } else {

    }
  } else {

  }
  if ((unsigned int const   )co->reflink_mode == 2U) {
    if ((unsigned int const   )co->sparse_mode != 2U) {
      __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 2665U, "valid_options");
    } else {

    }
  } else {

  }
  return ((_Bool __attribute__((__pure__))  )1);
}
}
extern _Bool copy(char const   *src_name , char const   *dst_name , _Bool nonexistent_dst , struct cp_options  const  *options , _Bool *copy_into_self , _Bool *rename_succeeded ) 
{ _Bool __attribute__((__pure__))  tmp ;
  _Bool first_dir_created_per_command_line_arg ;
  _Bool tmp___0 ;

  {
  tmp = valid_options(options);
  if (! tmp) {
    __assert_fail("valid_options (options)", "src/copy.c", 2683U, "copy");
  } else {

  }
  top_level_src_name = src_name;
  top_level_dst_name = dst_name;
  first_dir_created_per_command_line_arg = (_Bool)0;
  tmp___0 = copy_internal(src_name, dst_name, nonexistent_dst, 0UL, (struct dir_list *)((void *)0), options, (_Bool)1, & first_dir_created_per_command_line_arg, copy_into_self, rename_succeeded);
  return (tmp___0);
}
}
extern void cp_options_default(struct cp_options *x ) 
{ _Bool tmp ;
  __uid_t tmp___0 ;

  {
  memset((void *)x, 0, sizeof(*x));
  tmp___0 = geteuid();
  tmp = (_Bool )(tmp___0 == 0U);
  x->owner_privileges = tmp;
  x->chown_privileges = tmp;
  return;
}
}
extern _Bool chown_failure_ok(struct cp_options  const  *x )  __attribute__((__pure__)) ;
extern _Bool chown_failure_ok(struct cp_options  const  *x ) 
{ int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  tmp = __errno_location();
  if (*tmp == 1) {
    goto _L;
  } else {
    tmp___0 = __errno_location();
    if (*tmp___0 == 22) {
      _L: 
      if (! x->chown_privileges) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
  }
  return ((_Bool )tmp___1);
}
}
static _Bool owner_failure_ok(struct cp_options  const  *x ) 
{ int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  tmp = __errno_location();
  if (*tmp == 1) {
    goto _L;
  } else {
    tmp___0 = __errno_location();
    if (*tmp___0 == 22) {
      _L: 
      if (! x->owner_privileges) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
  }
  return ((_Bool )tmp___1);
}
}
static mode_t mask  =    4294967295U;
extern mode_t cached_umask(void) 
{ 

  {
  if (mask == 4294967295U) {
    mask = umask(0U);
    umask(mask);
  } else {

  }
  return (mask);
}
}
