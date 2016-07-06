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
typedef long __syscall_slong_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
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
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef long intmax_t;
typedef unsigned long uintmax_t;
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
struct argv_iterator;
struct argv_iterator;
struct argv_iterator;
enum argv_iter_err {
    AI_ERR_OK = 1,
    AI_ERR_EOF = 2,
    AI_ERR_MEM = 3,
    AI_ERR_READ = 4
} ;
struct di_set;
struct di_set;
struct exclude;
struct exclude;
struct exclude;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
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
union __anonunion_fts_cycle_64 {
   struct hash_table *ht ;
   struct cycle_check_state *state ;
};
struct __anonstruct_FTS_63 {
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
   struct hash_table *fts_leaf_optimization_works_ht ;
   union __anonunion_fts_cycle_64 fts_cycle ;
   I_ring fts_fd_ring ;
};
typedef struct __anonstruct_FTS_63 FTS;
struct _ftsent {
   struct _ftsent *fts_cycle ;
   struct _ftsent *fts_parent ;
   struct _ftsent *fts_link ;
   DIR *fts_dirp ;
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
   nlink_t fts_n_dirs_remaining ;
   unsigned short fts_info ;
   unsigned short fts_flags ;
   unsigned short fts_instr ;
   struct stat fts_statp[1] ;
   char fts_name[1] ;
};
typedef struct _ftsent FTSENT;
struct duinfo {
   uintmax_t size ;
   struct timespec tmax ;
};
struct dulevel {
   struct duinfo ent ;
   struct duinfo subdir ;
};
enum time_type {
    time_mtime = 0,
    time_ctime = 1,
    time_atime = 2
} ;
enum time_style {
    full_iso_time_style = 0,
    long_iso_time_style = 1,
    iso_time_style = 2
} ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv , char const   *__shortopts , struct option  const  *__longopts , int *__longind )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1), __leaf__)) ;
extern char const   *Version ;
__inline static int timespec_cmp(struct timespec a , struct timespec b ) 
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
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void *xcalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
extern void *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream )  __attribute__((__leaf__)) ;
extern int rpl_fclose(FILE *stream )  __attribute__((__nonnull__(1))) ;
extern char *last_component(char const   *file )  __attribute__((__pure__)) ;
extern void close_stdout(void) ;
extern void version_etc(FILE *stream , char const   *command_name , char const   *package , char const   *version  , ...)  __attribute__((__sentinel__)) ;
extern char const   *proper_name_utf8(char const   *name_ascii , char const   *name_utf8 ) ;
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
__inline static void emit_blocksize_note(char const   *program ) 
{ char *tmp ;

  {
  tmp = gettext("\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n");
  printf((char const   */* __restrict  */)tmp, program);
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
extern void (*argmatch_die)(void) ;
extern ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist , char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
extern struct argv_iterator *argv_iter_init_argv(char **argv )  __attribute__((__nonnull__(1))) ;
extern struct argv_iterator *argv_iter_init_stream(FILE *fp )  __attribute__((__nonnull__(1))) ;
extern char *argv_iter(struct argv_iterator * , enum argv_iter_err * )  __attribute__((__nonnull__(1,2))) ;
extern size_t argv_iter_n_args(struct argv_iterator  const  * )  __attribute__((__pure__, __nonnull__(1))) ;
extern void argv_iter_free(struct argv_iterator * )  __attribute__((__nonnull__(1))) ;
extern struct di_set *di_set_alloc(void) ;
extern int di_set_insert(struct di_set * , dev_t  , ino_t  )  __attribute__((__nonnull__(1))) ;
extern void di_set_free(struct di_set * )  __attribute__((__nonnull__(1))) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern struct exclude *new_exclude(void) ;
extern void add_exclude(struct exclude * , char const   * , int  ) ;
extern int add_exclude_file(void (*)(struct exclude * , char const   * , int  ) , struct exclude * , char const   * , int  , char  ) ;
extern _Bool excluded_file_name(struct exclude  const  * , char const   * ) ;
extern size_t fprintftime(FILE *fp , char const   *fmt , struct tm  const  *tm , int utc , int nanoseconds ) ;
extern strtol_error xstrtoul(char const   * , char ** , int  , unsigned long * , char const   * ) ;
extern  __attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error  , int  , char  , struct option  const  * , char const   * ) ;
extern char *human_readable(uintmax_t  , char * , int  , uintmax_t  , uintmax_t  ) ;
extern enum strtol_error human_options(char const   * , int * , uintmax_t * ) ;
extern char const   *quote(char const   *name ) ;
extern char *quotearg_colon(char const   *arg ) ;
__inline static struct timespec get_stat_atime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_atim);
}
}
__inline static struct timespec get_stat_ctime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_ctim);
}
}
__inline static struct timespec get_stat_mtime(struct stat  const  *st ) 
{ 

  {
  return ((struct timespec )st->st_mtim);
}
}
extern FILE *freopen_safer(char const   * , char const   * , FILE * ) ;
extern int fts_close(FTS * )  __attribute__((__warn_unused_result__)) ;
extern FTSENT *fts_read(FTS * )  __attribute__((__warn_unused_result__)) ;
extern int fts_set(FTS * , FTSENT * , int  ) ;
extern FTS *xfts_open(char * const  * , int options , int (*)(FTSENT const   ** , FTSENT const   ** ) ) ;
extern _Bool cycle_warning_required(FTS const   *fts , FTSENT const   *ent )  __attribute__((__pure__)) ;
static struct di_set *di_set  ;
static size_t prev_level  ;
__inline static void duinfo_init(struct duinfo *a ) 
{ 

  {
  a->size = 0UL;
  a->tmax.tv_sec = ~ (((1L << (sizeof(time_t ) * 8UL - 2UL)) - 1L) * 2L + 1L);
  a->tmax.tv_nsec = -1L;
  return;
}
}
__inline static void duinfo_set(struct duinfo *a , uintmax_t size , struct timespec tmax ) 
{ 

  {
  a->size = size;
  a->tmax = tmax;
  return;
}
}
__inline static void duinfo_add(struct duinfo *a , struct duinfo  const  *b ) 
{ int tmp ;

  {
  a->size += (unsigned long )b->size;
  tmp = timespec_cmp(a->tmax, (struct timespec )b->tmax);
  if (tmp < 0) {
    a->tmax = (struct timespec )b->tmax;
  } else {

  }
  return;
}
}
static _Bool opt_all  =    (_Bool)0;
static _Bool apparent_size  =    (_Bool)0;
static _Bool opt_count_all  =    (_Bool)0;
static _Bool hash_all  ;
static _Bool opt_nul_terminate_output  =    (_Bool)0;
static _Bool print_grand_total  =    (_Bool)0;
static _Bool opt_separate_dirs  =    (_Bool)0;
static size_t max_depth  =    ((1UL << 63) - 1UL) * 2UL + 1UL;
static int human_output_opts  ;
static _Bool opt_time  =    (_Bool)0;
static enum time_type time_type  =    (enum time_type )0;
static char const   *time_style  =    (char const   *)((void *)0);
static char const   *time_format  =    (char const   *)((void *)0);
static uintmax_t output_block_size  ;
static struct exclude *exclude  ;
static struct duinfo tot_dui  ;
static struct option  const  long_options[24]  = 
  {      {"all", 0, (int *)((void *)0), 'a'}, 
        {"apparent-size", 0, (int *)((void *)0), 128}, 
        {"block-size", 1, (int *)((void *)0), 'B'}, 
        {"bytes", 0, (int *)((void *)0), 'b'}, 
        {"count-links", 0, (int *)((void *)0), 'l'}, 
        {"dereference", 0, (int *)((void *)0), 'L'}, 
        {"dereference-args", 0, (int *)((void *)0), 'D'}, 
        {"exclude", 1, (int *)((void *)0), 129}, 
        {"exclude-from", 1, (int *)((void *)0), 'X'}, 
        {"files0-from", 1, (int *)((void *)0), 130}, 
        {"human-readable", 0, (int *)((void *)0), 'h'}, 
        {"si", 0, (int *)((void *)0), 131}, 
        {"max-depth", 1, (int *)((void *)0), 'd'}, 
        {"null", 0, (int *)((void *)0), '0'}, 
        {"no-dereference", 0, (int *)((void *)0), 'P'}, 
        {"one-file-system", 0, (int *)((void *)0), 'x'}, 
        {"separate-dirs", 0, (int *)((void *)0), 'S'}, 
        {"summarize", 0, (int *)((void *)0), 's'}, 
        {"total", 0, (int *)((void *)0), 'c'}, 
        {"time", 2, (int *)((void *)0), 133}, 
        {"time-style", 1, (int *)((void *)0), 134}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static char const   * const  time_args[6]  = {      (char const   */* const  */)"atime",      (char const   */* const  */)"access",      (char const   */* const  */)"use",      (char const   */* const  */)"ctime", 
        (char const   */* const  */)"status",      (char const   */* const  */)((void *)0)};
static enum time_type  const  time_types[5]  = {      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )1, 
        (enum time_type  const  )1};
static char const   * const  time_style_args[4]  = {      (char const   */* const  */)"full-iso",      (char const   */* const  */)"long-iso",      (char const   */* const  */)"iso",      (char const   */* const  */)((void *)0)};
static enum time_style  const  time_style_types[3]  = {      (enum time_style  const  )0,      (enum time_style  const  )1,      (enum time_style  const  )2};
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

  {
  if (status != 0) {
    emit_try_help();
  } else {
    tmp = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    printf((char const   */* __restrict  */)tmp, program_name, program_name);
    tmp___0 = gettext("Summarize disk usage of each FILE, recursively for directories.\n\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___0, (FILE */* __restrict  */)stdout);
    tmp___1 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("  -a, --all             write counts for all files, not just directories\n      --apparent-size   print apparent sizes, rather than disk usage; although\n                          the apparent size is usually smaller, it may be\n                          larger due to holes in (\'sparse\') files, internal\n                          fragmentation, indirect blocks, and the like\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -B, --block-size=SIZE  scale sizes by SIZE before printing them.  E.g.,\n                           \'-BM\' prints sizes in units of 1,048,576 bytes.\n                           See SIZE format below.\n  -b, --bytes           equivalent to \'--apparent-size --block-size=1\'\n  -c, --total           produce a grand total\n  -D, --dereference-args  dereference only symlinks that are listed on the\n                          command line\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("      --files0-from=F   summarize disk usage of the NUL-terminated file\n                          names specified in file F;\n                          If F is - then read names from standard input\n  -H                    equivalent to --dereference-args (-D)\n  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n      --si              like -h, but use powers of 1000 not 1024\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -k                    like --block-size=1K\n  -l, --count-links     count sizes many times if hard linked\n  -m                    like --block-size=1M\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -L, --dereference     dereference all symbolic links\n  -P, --no-dereference  don\'t follow any symbolic links (this is the default)\n  -0, --null            end each output line with 0 byte rather than newline\n  -S, --separate-dirs   do not include size of subdirectories\n  -s, --summarize       display only a total for each argument\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("  -x, --one-file-system    skip directories on different file systems\n  -X, --exclude-from=FILE  exclude files that match any pattern in FILE\n      --exclude=PATTERN    exclude files that match PATTERN\n  -d, --max-depth=N     print the total for a directory (or file, with --all)\n                          only if it is N or fewer levels below the command\n                          line argument;  --max-depth=0 is the same as\n                          --summarize\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --time            show time of the last modification of any file in the\n                          directory, or any of its subdirectories\n      --time=WORD       show time as WORD instead of modification time:\n                          atime, access, use, ctime or status\n      --time-style=STYLE  show times using style STYLE:\n                          full-iso, long-iso, iso, +FORMAT\n                          FORMAT is interpreted like \'date\'\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___8, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___10, (FILE */* __restrict  */)stdout);
    emit_blocksize_note("DU");
    emit_size_note();
    emit_ancillary_info();
  }
  exit(status);
}
}
static _Bool hash_ins(ino_t ino , dev_t dev ) 
{ int inserted ;
  int tmp ;

  {
  tmp = di_set_insert(di_set, dev, ino);
  inserted = tmp;
  if (inserted < 0) {
    xalloc_die();
  } else {

  }
  return ((_Bool )inserted);
}
}
static void show_date(char const   *format , struct timespec when ) 
{ struct tm *tm ;
  struct tm *tmp ;
  char buf[(((sizeof(intmax_t ) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL] ;
  char *when_str ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = localtime((time_t const   *)(& when.tv_sec));
  tm = tmp;
  if (! tm) {
    tmp___0 = timetostr(when.tv_sec, buf);
    when_str = tmp___0;
    tmp___1 = gettext("time %s is out of range");
    error(0, 0, (char const   *)tmp___1, when_str);
    fputs_unlocked((char const   */* __restrict  */)when_str, (FILE */* __restrict  */)stdout);
    return;
  } else {

  }
  fprintftime(stdout, format, (struct tm  const  *)tm, 0, (int )when.tv_nsec);
  return;
}
}
static void print_only_size(uintmax_t n_bytes ) 
{ char buf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp ;

  {
  tmp = human_readable(n_bytes, buf, human_output_opts, 1UL, output_block_size);
  fputs_unlocked((char const   */* __restrict  */)tmp, (FILE */* __restrict  */)stdout);
  return;
}
}
static void print_size(struct duinfo  const  *pdui , char const   *string ) 
{ int tmp ;

  {
  print_only_size((unsigned long )pdui->size);
  if (opt_time) {
    putchar_unlocked('\t');
    show_date(time_format, (struct timespec )pdui->tmax);
  } else {

  }
  if (opt_nul_terminate_output) {
    tmp = '\000';
  } else {
    tmp = '\n';
  }
  printf((char const   */* __restrict  */)"\t%s%c", string, tmp);
  fflush_unlocked(stdout);
  return;
}
}
static size_t n_alloc  ;
static struct dulevel *dulvl  ;
static _Bool process_file(FTS *fts , FTSENT *ent ) 
{ _Bool ok ;
  struct duinfo dui ;
  struct duinfo dui_to_print ;
  size_t level ;
  char const   *file ;
  struct stat  const  *sb ;
  int info ;
  char const   *tmp ;
  char *tmp___0 ;
  _Bool excluded ;
  _Bool tmp___1 ;
  FTSENT const   *e ;
  FTSENT *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  FTSENT const   *e___0 ;
  FTSENT *tmp___5 ;
  _Bool tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char *tmp___9 ;
  _Bool tmp___10 ;
  struct timespec tmp___11 ;
  struct timespec tmp___12 ;
  struct timespec tmp___13 ;
  struct timespec tmp___14 ;
  struct timespec tmp___15 ;
  unsigned long tmp___16 ;
  void *tmp___17 ;
  size_t i ;
  void *tmp___18 ;

  {
  ok = (_Bool)1;
  file = (char const   *)ent->fts_path;
  sb = (struct stat  const  *)(ent->fts_statp);
  info = (int )ent->fts_info;
  if (info == 4) {
    tmp = quote(file);
    tmp___0 = gettext("cannot read directory %s");
    error(0, ent->fts_errno, (char const   *)tmp___0, tmp);
    ok = (_Bool)0;
  } else {
    if (info != 6) {
      tmp___1 = excluded_file_name((struct exclude  const  *)exclude, file);
      excluded = tmp___1;
      if (! excluded) {
        if (info == 11) {
          fts_set(fts, ent, 1);
          tmp___2 = fts_read(fts);
          e = (FTSENT const   *)tmp___2;
          if (! ((unsigned long )e == (unsigned long )ent)) {
            __assert_fail("e == ent", "du.c", 436U, "process_file");
          } else {

          }
          info = (int )ent->fts_info;
        } else {

        }
        if (info == 10) {
          tmp___3 = quote(file);
          tmp___4 = gettext("cannot access %s");
          error(0, ent->fts_errno, (char const   *)tmp___4, tmp___3);
          return ((_Bool)0);
        } else {
          if (info == 13) {
            tmp___3 = quote(file);
            tmp___4 = gettext("cannot access %s");
            error(0, ent->fts_errno, (char const   *)tmp___4, tmp___3);
            return ((_Bool)0);
          } else {

          }
        }
        if (fts->fts_options & 64) {
          if (fts->fts_dev != (unsigned long )sb->st_dev) {
            excluded = (_Bool)1;
          } else {

          }
        } else {

        }
      } else {

      }
      if (excluded) {
        goto _L;
      } else {
        if (! opt_count_all) {
          if (hash_all) {
            goto _L___0;
          } else {
            if (! ((sb->st_mode & 61440U) == 16384U)) {
              if (1UL < (unsigned long )sb->st_nlink) {
                _L___0: 
                tmp___6 = hash_ins((unsigned long )sb->st_ino, (unsigned long )sb->st_dev);
                if (! tmp___6) {
                  _L: 
                  if (info == 1) {
                    fts_set(fts, ent, 4);
                    tmp___5 = fts_read(fts);
                    e___0 = (FTSENT const   *)tmp___5;
                    if (! ((unsigned long )e___0 == (unsigned long )ent)) {
                      __assert_fail("e == ent", "du.c", 462U, "process_file");
                    } else {

                    }
                  } else {
                    __repair_app_239__1a: /* CIL Label */ 
                    {

                    print_size((struct duinfo  const  *)(& dui_to_print), file);
                    }
                  }
                  return ((_Bool)1);
                } else {

                }
              } else {

              }
            } else {

            }
          }
        } else {

        }
      }
      switch (info) {
      case 1: 
      return ((_Bool)1);
      case 7: 
      tmp___7 = quote(file);
      error(0, ent->fts_errno, "%s", tmp___7);
      ok = (_Bool)0;
      break;
      case 2: 
      tmp___10 = cycle_warning_required((FTS const   *)fts, (FTSENT const   *)ent);
      if (tmp___10) {
        while (1) {
          tmp___8 = quote(file);
          tmp___9 = gettext("WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n");
          error(0, 0, (char const   *)tmp___9, tmp___8);
          break;
        }
        return ((_Bool)0);
      } else {

      }
      return ((_Bool)1);
      }
    } else {

    }
  }
  if ((unsigned int )time_type == 0U) {
    tmp___11 = get_stat_mtime(sb);
    tmp___15 = tmp___11;
  } else {
    if ((unsigned int )time_type == 2U) {
      tmp___12 = get_stat_atime(sb);
      tmp___14 = tmp___12;
    } else {
      tmp___13 = get_stat_ctime(sb);
      tmp___14 = tmp___13;
    }
    tmp___15 = tmp___14;
  }
  if (apparent_size) {
    tmp___16 = (unsigned long )sb->st_size;
  } else {
    tmp___16 = (unsigned long )sb->st_blocks * 512UL;
  }
  duinfo_set(& dui, tmp___16, tmp___15);
  level = (unsigned long )ent->fts_level;
  dui_to_print = dui;
  if (n_alloc == 0UL) {
    n_alloc = level + 10UL;
    tmp___17 = xcalloc(n_alloc, sizeof(*dulvl));
    dulvl = (struct dulevel *)tmp___17;
  } else {
    if (! (level == prev_level)) {
      if (level > prev_level) {
        if (n_alloc <= level) {
          tmp___18 = xnrealloc((void *)dulvl, level, 2UL * sizeof(*dulvl));
          dulvl = (struct dulevel *)tmp___18;
          n_alloc = level * 2UL;
        } else {

        }
        i = prev_level + 1UL;
        while (i <= level) {
          duinfo_init(& (dulvl + i)->ent);
          duinfo_init(& (dulvl + i)->subdir);
          i ++;
        }
      } else {
        if (! (level == prev_level - 1UL)) {
          __assert_fail("level == prev_level - 1", "du.c", 539U, "process_file");
        } else {

        }
        duinfo_add(& dui_to_print, (struct duinfo  const  *)(& (dulvl + prev_level)->ent));
        if (! opt_separate_dirs) {
          duinfo_add(& dui_to_print, (struct duinfo  const  *)(& (dulvl + prev_level)->subdir));
        } else {

        }
        duinfo_add(& (dulvl + level)->subdir, (struct duinfo  const  *)(& (dulvl + prev_level)->ent));
        duinfo_add(& (dulvl + level)->subdir, (struct duinfo  const  *)(& (dulvl + prev_level)->subdir));
      }
    } else {

    }
  }
  prev_level = level;
  if (opt_separate_dirs) {
    if (! (info == 6)) {
      if (! (info == 4)) {
        duinfo_add(& (dulvl + level)->ent, (struct duinfo  const  *)(& dui));
      } else {

      }
    } else {

    }
  } else {
    duinfo_add(& (dulvl + level)->ent, (struct duinfo  const  *)(& dui));
  }
  duinfo_add(& tot_dui, (struct duinfo  const  *)(& dui));
  if (info == 6) {
    goto _L___3;
  } else {
    if (info == 4) {
      _L___3: 
      if (level <= max_depth) {
        print_size((struct duinfo  const  *)(& dui_to_print), file);
      } else {
        goto _L___2;
      }
    } else {
      _L___2: 
      if (opt_all) {
        if (level <= max_depth) {
          print_size((struct duinfo  const  *)(& dui_to_print), file);
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
        if (level == 0UL) {
          print_size((struct duinfo  const  *)(& dui_to_print), file);
        } else {

        }
      }
    }
  }
  return (ok);
}
}
static _Bool du_files(char **files , int bit_flags ) 
{ _Bool ok ;
  FTS *fts ;
  FTS *tmp ;
  FTSENT *ent ;
  char *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  _Bool tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  ok = (_Bool)1;
  if (*files) {
    tmp = xfts_open((char * const  *)files, bit_flags, (int (*)(FTSENT const   ** , FTSENT const   ** ))((void *)0));
    fts = tmp;
    while (1) {
      ent = fts_read(fts);
      if ((unsigned long )ent == (unsigned long )((void *)0)) {
        tmp___3 = __errno_location();
        if (*tmp___3 != 0) {
          tmp___0 = quotearg_colon((char const   *)fts->fts_path);
          tmp___1 = gettext("fts_read failed: %s");
          tmp___2 = __errno_location();
          error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
          ok = (_Bool)0;
        } else {

        }
        prev_level = 0UL;
        break;
      } else {

      }
      tmp___4 = process_file(fts, ent);
      ok = (_Bool )((int )ok & (int )tmp___4);
    }
    tmp___7 = fts_close(fts);
    if (tmp___7 != 0) {
      tmp___5 = gettext("fts_close failed");
      tmp___6 = __errno_location();
      error(0, *tmp___6, (char const   *)tmp___5);
      ok = (_Bool)0;
    } else {

    }
  } else {

  }
  return (ok);
}
}
int main(int argc , char **argv ) ;
static char const   posix_prefix[7]  = {      (char const   )'p',      (char const   )'o',      (char const   )'s',      (char const   )'i', 
        (char const   )'x',      (char const   )'-',      (char const   )'\000'};
static char *temp_argv[2]  = {      (char *)((void *)0),      (char *)((void *)0)};
int main(int argc , char **argv ) 
{ char *cwd_only[2] ;
  _Bool max_depth_specified ;
  _Bool ok ;
  char *files_from ;
  int bit_flags ;
  int symlink_deref_bits ;
  _Bool opt_summarize_only ;
  char *tmp ;
  int oi ;
  int c ;
  int tmp___0 ;
  unsigned long tmp_ulong ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  strtol_error tmp___3 ;
  enum strtol_error e ;
  enum strtol_error tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  ptrdiff_t tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  unsigned long d ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *p ;
  char *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  ptrdiff_t tmp___17 ;
  struct argv_iterator *ai ;
  char const   *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
  char *tmp___22 ;
  int *tmp___23 ;
  int tmp___24 ;
  FILE *tmp___25 ;
  char **files ;
  char **tmp___26 ;
  int tmp___27 ;
  _Bool skip_file ;
  enum argv_iter_err ai_err ;
  char *file_name ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  int *tmp___31 ;
  char const   *tmp___32 ;
  char *tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  char *tmp___36 ;
  unsigned long file_number ;
  size_t tmp___37 ;
  char *tmp___38 ;
  char *tmp___39 ;
  _Bool tmp___40 ;
  char const   *tmp___41 ;
  char *tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  char *tmp___45 ;
  int tmp___46 ;

  {
  max_depth_specified = (_Bool)0;
  ok = (_Bool)1;
  files_from = (char *)((void *)0);
  bit_flags = 8;
  symlink_deref_bits = 16;
  opt_summarize_only = (_Bool)0;
  cwd_only[0] = bad_cast(".");
  cwd_only[1] = (char *)((void *)0);
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  exclude = new_exclude();
  tmp = getenv("DU_BLOCK_SIZE");
  human_options((char const   *)tmp, & human_output_opts, & output_block_size);
  while (1) {
    oi = -1;
    tmp___0 = getopt_long(argc, (char * const  *)argv, "0abd:chHklmsxB:DLPSX:", long_options, & oi);
    c = tmp___0;
    if (c == -1) {
      break;
    } else {

    }
    switch (c) {
    case 48: 
    opt_nul_terminate_output = (_Bool)1;
    break;
    case 97: 
    opt_all = (_Bool)1;
    break;
    case 128: 
    apparent_size = (_Bool)1;
    break;
    case 98: 
    apparent_size = (_Bool)1;
    human_output_opts = 0;
    output_block_size = 1UL;
    break;
    case 99: 
    print_grand_total = (_Bool)1;
    break;
    case 104: 
    human_output_opts = 176;
    output_block_size = 1UL;
    break;
    case 131: 
    human_output_opts = 144;
    output_block_size = 1UL;
    break;
    case 107: 
    human_output_opts = 0;
    output_block_size = 1024UL;
    break;
    case 100: 
    tmp___3 = xstrtoul((char const   *)optarg, (char **)((void *)0), 0, & tmp_ulong, (char const   *)((void *)0));
    if ((unsigned int )tmp___3 == 0U) {
      if (tmp_ulong <= ((1UL << 63) - 1UL) * 2UL + 1UL) {
        max_depth_specified = (_Bool)1;
        max_depth = tmp_ulong;
      } else {
        tmp___1 = quote((char const   *)optarg);
        tmp___2 = gettext("invalid maximum depth %s");
        error(0, 0, (char const   *)tmp___2, tmp___1);
        ok = (_Bool)0;
      }
    } else {
      tmp___1 = quote((char const   *)optarg);
      tmp___2 = gettext("invalid maximum depth %s");
      error(0, 0, (char const   *)tmp___2, tmp___1);
      ok = (_Bool)0;
    }
    break;
    case 109: 
    human_output_opts = 0;
    output_block_size = 1048576UL;
    break;
    case 108: 
    opt_count_all = (_Bool)1;
    break;
    case 115: 
    opt_summarize_only = (_Bool)1;
    break;
    case 120: 
    bit_flags |= 64;
    break;
    case 66: 
    tmp___4 = human_options((char const   *)optarg, & human_output_opts, & output_block_size);
    e = tmp___4;
    if ((unsigned int )e != 0U) {
      xstrtol_fatal(e, oi, (char )c, long_options, (char const   *)optarg);
    } else {

    }
    break;
    case 72: 
    case 68: 
    symlink_deref_bits = 17;
    break;
    case 76: 
    symlink_deref_bits = 2;
    break;
    case 80: 
    symlink_deref_bits = 16;
    break;
    case 83: 
    opt_separate_dirs = (_Bool)1;
    break;
    case 88: 
    tmp___7 = add_exclude_file(& add_exclude, exclude, (char const   *)optarg, 1 << 28, (char )'\n');
    if (tmp___7) {
      tmp___5 = quotearg_colon((char const   *)optarg);
      tmp___6 = __errno_location();
      error(0, *tmp___6, "%s", tmp___5);
      ok = (_Bool)0;
    } else {

    }
    break;
    case 130: 
    files_from = optarg;
    break;
    case 129: 
    add_exclude(exclude, (char const   *)optarg, 1 << 28);
    break;
    case 133: 
    opt_time = (_Bool)1;
    if (optarg) {
      tmp___8 = __xargmatch_internal("--time", (char const   *)optarg, time_args, (char const   *)(time_types), sizeof(time_types[0]), argmatch_die);
      time_type = (enum time_type )time_types[tmp___8];
    } else {
      time_type = (enum time_type )0;
    }
    break;
    case 134: 
    time_style = (char const   *)optarg;
    break;
    case -130: 
    usage(0);
    break;
    case -131: 
    tmp___9 = proper_name_utf8("Torbjorn Granlund", "Torbj\303\266rn Granlund");
    version_etc(stdout, "du", "GNU coreutils", Version, tmp___9, "David MacKenzie", "Paul Eggert", "Jim Meyering", (char *)((void *)0));
    exit(0);
    break;
    default: 
    ok = (_Bool)0;
    }
  }
  if (! ok) {
    usage(1);
  } else {

  }
  if (opt_all) {
    if (opt_summarize_only) {
      tmp___10 = gettext("cannot both summarize and show all entries");
      error(0, 0, (char const   *)tmp___10);
      usage(1);
    } else {

    }
  } else {

  }
  if (opt_summarize_only) {
    if (max_depth_specified) {
      if (max_depth == 0UL) {
        tmp___11 = gettext("warning: summarizing is the same as using --max-depth=0");
        error(0, 0, (char const   *)tmp___11);
      } else {

      }
    } else {

    }
  } else {

  }
  if (opt_summarize_only) {
    if (max_depth_specified) {
      if (max_depth != 0UL) {
        d = max_depth;
        tmp___12 = gettext("warning: summarizing conflicts with --max-depth=%lu");
        error(0, 0, (char const   *)tmp___12, d);
        usage(1);
      } else {

      }
    } else {

    }
  } else {

  }
  if (opt_summarize_only) {
    max_depth = 0UL;
  } else {

  }
  if (opt_time) {
    if (! time_style) {
      tmp___13 = getenv("TIME_STYLE");
      time_style = (char const   *)tmp___13;
      if (! time_style) {
        time_style = "long-iso";
      } else {
        tmp___16 = strcmp(time_style, "locale");
        if (tmp___16 == 0) {
          time_style = "long-iso";
        } else {
          if ((int const   )*time_style == 43) {
            tmp___14 = strchr(time_style, '\n');
            p = tmp___14;
            if (p) {
              *p = (char )'\000';
            } else {

            }
          } else {
            while (1) {
              tmp___15 = strncmp(time_style, posix_prefix, sizeof(posix_prefix) - 1UL);
              if (! (tmp___15 == 0)) {
                break;
              } else {

              }
              time_style += sizeof(posix_prefix) - 1UL;
            }
          }
        }
      }
    } else {

    }
    if ((int const   )*time_style == 43) {
      time_format = time_style + 1;
    } else {
      tmp___17 = __xargmatch_internal("time style", time_style, time_style_args, (char const   *)(time_style_types), sizeof(time_style_types[0]), argmatch_die);
      switch ((int )time_style_types[tmp___17]) {
      case 0: 
      time_format = "%Y-%m-%d %H:%M:%S.%N %z";
      break;
      case 1: 
      time_format = "%Y-%m-%d %H:%M";
      break;
      case 2: 
      time_format = "%Y-%m-%d";
      break;
      }
    }
  } else {

  }
  if (files_from) {
    if (optind < argc) {
      tmp___18 = quote((char const   *)*(argv + optind));
      tmp___19 = gettext("extra operand %s");
      error(0, 0, (char const   *)tmp___19, tmp___18);
      tmp___20 = gettext("file operands cannot be combined with --files0-from");
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n", tmp___20);
      usage(1);
    } else {

    }
    tmp___24 = strcmp((char const   *)files_from, "-");
    if (! (tmp___24 == 0)) {
      tmp___25 = freopen_safer((char const   *)files_from, "r", stdin);
      if (! tmp___25) {
        tmp___21 = quote((char const   *)files_from);
        tmp___22 = gettext("cannot open %s for reading");
        tmp___23 = __errno_location();
        error(1, *tmp___23, (char const   *)tmp___22, tmp___21);
      } else {

      }
    } else {

    }
    ai = argv_iter_init_stream(stdin);
    hash_all = (_Bool)1;
  } else {
    if (optind < argc) {
      tmp___26 = argv + optind;
    } else {
      tmp___26 = cwd_only;
    }
    files = tmp___26;
    ai = argv_iter_init_argv(files);
    if (optind + 1 < argc) {
      tmp___27 = 1;
    } else {
      if (symlink_deref_bits == 2) {
        tmp___27 = 1;
      } else {
        tmp___27 = 0;
      }
    }
    hash_all = (_Bool )tmp___27;
  }
  if (! ai) {
    xalloc_die();
  } else {

  }
  di_set = di_set_alloc();
  if (! di_set) {
    xalloc_die();
  } else {

  }
  if (opt_count_all) {
    bit_flags |= 256;
  } else {
    if (! hash_all) {
      bit_flags |= 256;
    } else {

    }
  }
  bit_flags |= symlink_deref_bits;
  while (1) {
    skip_file = (_Bool)0;
    tmp___28 = argv_iter(ai, & ai_err);
    file_name = tmp___28;
    if (! file_name) {
      switch ((int )ai_err) {
      case 2: 
      goto argv_iter_done;
      case 4: 
      tmp___29 = quotearg_colon((char const   *)files_from);
      tmp___30 = gettext("%s: read error");
      tmp___31 = __errno_location();
      error(0, *tmp___31, (char const   *)tmp___30, tmp___29);
      ok = (_Bool)0;
      goto argv_iter_done;
      case 3: 
      xalloc_die();
      default: 
      __assert_fail("!\"unexpected error code from argv_iter\"", "du.c", 945U, "main");
      }
    } else {

    }
    if (files_from) {
      tmp___34 = strcmp((char const   *)files_from, "-");
      if (tmp___34 == 0) {
        tmp___35 = strcmp((char const   *)file_name, "-");
        if (tmp___35 == 0) {
          tmp___32 = quote((char const   *)file_name);
          tmp___33 = gettext("when reading file names from stdin, no file name of %s allowed");
          error(0, 0, (char const   *)tmp___33, tmp___32);
          skip_file = (_Bool)1;
        } else {

        }
      } else {

      }
    } else {

    }
    if (! *(file_name + 0)) {
      if ((unsigned long )files_from == (unsigned long )((void *)0)) {
        tmp___36 = gettext("invalid zero-length file name");
        error(0, 0, "%s", tmp___36);
      } else {
        tmp___37 = argv_iter_n_args((struct argv_iterator  const  *)ai);
        file_number = tmp___37;
        tmp___38 = gettext("invalid zero-length file name");
        tmp___39 = quotearg_colon((char const   *)files_from);
        error(0, 0, "%s:%lu: %s", tmp___39, file_number, tmp___38);
      }
      skip_file = (_Bool)1;
    } else {

    }
    if (skip_file) {
      ok = (_Bool)0;
    } else {
      temp_argv[0] = file_name;
      tmp___40 = du_files(temp_argv, bit_flags);
      ok = (_Bool )((int )ok & (int )tmp___40);
    }
  }
  argv_iter_done: 
  argv_iter_free(ai);
  di_set_free(di_set);
  if (files_from) {
    tmp___43 = ferror_unlocked(stdin);
    if (tmp___43) {
      goto _L;
    } else {
      tmp___44 = rpl_fclose(stdin);
      if (tmp___44 != 0) {
        _L: 
        if (ok) {
          tmp___41 = quote((char const   *)files_from);
          tmp___42 = gettext("error reading %s");
          error(1, 0, (char const   *)tmp___42, tmp___41);
        } else {

        }
      } else {

      }
    }
  } else {

  }
  if (print_grand_total) {
    tmp___45 = gettext("total");
    print_size((struct duinfo  const  *)(& tot_dui), (char const   *)tmp___45);
  } else {

  }
  if (ok) {
    tmp___46 = 0;
  } else {
    tmp___46 = 1;
  }
  exit(tmp___46);
}
}
