typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
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
typedef __ssize_t ssize_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned long gl_uintptr_t;
enum __anonenum_fadvice_t_62 {
    FADVISE_NORMAL = 0,
    FADVISE_SEQUENTIAL = 2,
    FADVISE_NOREUSE = 5,
    FADVISE_DONTNEED = 4,
    FADVISE_WILLNEED = 3,
    FADVISE_RANDOM = 1
} ;
typedef enum __anonenum_fadvice_t_62 fadvice_t;
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
struct range_pair {
   size_t lo ;
   size_t hi ;
};
enum operating_mode {
    undefined_mode = 0,
    byte_mode = 1,
    field_mode = 2
} ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int getc_unlocked(FILE *__stream ) ;
extern int putchar_unlocked(int __c ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv , char const   *__shortopts , struct option  const  *__longopts , int *__longind )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s , char const   *__accept )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern void qsort(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
extern char const   *Version ;
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__leaf__, __const__)) ;
__inline static unsigned char to_uchar(char ch ) 
{ 

  {
  return ((unsigned char )ch);
}
}
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void *xzalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern char *xstrdup(char const   *str )  __attribute__((__malloc__)) ;
extern void *x2nrealloc(void *p , size_t *pn , size_t s ) ;
extern char *last_component(char const   *file ) ;
extern void close_stdout(void) ;
extern void version_etc(FILE *stream , char const   *command_name , char const   *package , char const   *version  , ...)  __attribute__((__sentinel__)) ;
extern char const   *program_name ;
extern void set_program_name(char const   *argv0 ) ;
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
  tmp___1 = gettext("%s home page: <http://www.gnu.org/software/%s/>\n");
  printf((char const   */* __restrict  */)tmp___1, "GNU coreutils", "coreutils");
  tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
  tmp___3 = setlocale(5, (char const   *)((void *)0));
  lc_messages = (char const   *)tmp___3;
  if (lc_messages) {
    tmp___6 = strncmp(lc_messages, "en_", 3UL);
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
 __attribute__((__noreturn__)) void usage(int status ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern void fadvise(FILE *fp , fadvice_t advice ) ;
extern ssize_t getndelim2(char **lineptr , size_t *linesize , size_t offset , size_t nmax , int delim1 , int delim2 , FILE *stream ) ;
extern void *hash_lookup(Hash_table const   * , void const   * ) ;
extern Hash_table *hash_initialize(size_t  , Hash_tuning const   * , size_t (*)(void const   * , size_t  ) , _Bool (*)(void const   * , void const   * ) , void (*)(void * ) )  __attribute__((__warn_unused_result__)) ;
extern void hash_free(Hash_table * ) ;
extern void *hash_insert(Hash_table * , void const   * )  __attribute__((__warn_unused_result__)) ;
extern char const   *quote(char const   *name ) ;
extern char *xstrndup(char const   *string , size_t n ) ;
static char *field_1_buffer  ;
static size_t field_1_bufsize  ;
static size_t max_range_endpoint  ;
static size_t eol_range_start  ;
static unsigned char *printable_field  ;
static enum operating_mode operating_mode  ;
static _Bool suppress_non_delimited  ;
static _Bool complement  ;
static unsigned char delim  ;
static _Bool output_delimiter_specified  ;
static size_t output_delimiter_length  ;
static char *output_delimiter_string  ;
static _Bool have_read_stdin  ;
static Hash_table *range_start_ht  ;
static struct option  const  longopts[10]  = 
  {      {"bytes", 1, (int *)((void *)0), 'b'}, 
        {"characters", 1, (int *)((void *)0), 'c'}, 
        {"fields", 1, (int *)((void *)0), 'f'}, 
        {"delimiter", 1, (int *)((void *)0), 'd'}, 
        {"only-delimited", 0, (int *)((void *)0), 's'}, 
        {"output-delimiter", 1, (int *)((void *)0), 128}, 
        {"complement", 0, (int *)((void *)0), 129}, 
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
  char *tmp___10 ;

  {
  if (status != 0) {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp, program_name);
  } else {
    tmp___0 = gettext("Usage: %s OPTION... [FILE]...\n");
    printf((char const   */* __restrict  */)tmp___0, program_name);
    tmp___1 = gettext("Print selected parts of lines from each FILE to standard output.\n\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("      --complement        complement the set of selected bytes, characters\n                            or fields\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___8, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("Each range is one of:\n\n  N     N\'th byte, character or field, counted from 1\n  N-    from N\'th byte, character or field, to end of line\n  N-M   from N\'th to M\'th (included) byte, character or field\n  -M    from first to M\'th (included) byte, character or field\n\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___10, (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
  }
  exit(status);
}
}
__inline static void mark_range_start(size_t i ) 
{ void *ent_from_table ;
  void *tmp ;

  {
  tmp = hash_insert(range_start_ht, (void const   *)((void *)i));
  ent_from_table = tmp;
  if ((unsigned long )ent_from_table == (unsigned long )((void *)0)) {
    xalloc_die();
  } else {

  }
  if (! ((unsigned long )ent_from_table == i)) {
    __assert_fail("(size_t) ent_from_table == i", "cut.c", 254U, "mark_range_start");
  } else {

  }
  return;
}
}
__inline static void mark_printable_field(size_t i ) 
{ size_t n ;

  {
  n = i / 8UL;
  *(printable_field + n) = (unsigned char )((int )*(printable_field + n) | (1 << i % 8UL));
  return;
}
}
__inline static _Bool is_printable_field(size_t i ) 
{ size_t n ;

  {
  n = i / 8UL;
  return ((_Bool )(((int )*(printable_field + n) >> i % 8UL) & 1));
}
}
static size_t hash_int(void const   *x , size_t tablesize ) 
{ gl_uintptr_t y ;

  {
  y = (unsigned long )x;
  return (y % tablesize);
}
}
static _Bool hash_compare_ints(void const   *x , void const   *y ) 
{ int tmp ;

  {
  if ((unsigned long )x == (unsigned long )y) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return ((_Bool )tmp);
}
}
static _Bool is_range_start_index(size_t i ) 
{ int tmp___0 ;
  void *tmp___1 ;

  {
  tmp___1 = hash_lookup((Hash_table const   *)range_start_ht, (void const   *)((void *)i));
  if (tmp___1) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  return ((_Bool )tmp___0);
}
}
static _Bool print_kth(size_t k , _Bool *range_start ) 
{ _Bool k_selected ;
  _Bool tmp ;
  int tmp___0 ;
  _Bool is_selected ;

  {
  if (0UL < eol_range_start) {
    if (eol_range_start <= k) {
      tmp___0 = 1;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (k <= max_range_endpoint) {
      tmp = is_printable_field(k);
      if (tmp) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
  }
  k_selected = (_Bool )tmp___0;
  is_selected = (_Bool )((int )k_selected ^ (int )complement);
  if (range_start) {
    if (is_selected) {
      *range_start = is_range_start_index(k);
    } else {

    }
  } else {

  }
  return (is_selected);
}
}
static int compare_ranges(void const   *a , void const   *b ) 
{ int a_start ;
  int b_start ;
  int tmp ;

  {
  a_start = (int )((struct range_pair  const  *)a)->lo;
  b_start = (int )((struct range_pair  const  *)b)->lo;
  if (a_start < b_start) {
    tmp = -1;
  } else {
    tmp = a_start > b_start;
  }
  return (tmp);
}
}
static char const   *num_start  ;
static _Bool set_fields(char const   *fieldstr ) 
{ size_t initial ;
  size_t value ;
  _Bool lhs_specified ;
  _Bool rhs_specified ;
  _Bool dash_found ;
  _Bool field_found ;
  struct range_pair *rp ;
  size_t n_rp ;
  size_t n_rp_allocated ;
  size_t i ;
  _Bool in_digits ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;
  void *tmp___5 ;
  char *tmp___6 ;
  void *tmp___7 ;
  size_t len ;
  size_t tmp___8 ;
  char *bad_num ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  char const   *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  unsigned short const   **tmp___16 ;
  unsigned char tmp___17 ;
  void *tmp___18 ;
  size_t j ;
  size_t rsi_candidate ;
  _Bool tmp___19 ;
  _Bool tmp___20 ;

  {
  initial = 1UL;
  value = 0UL;
  lhs_specified = (_Bool)0;
  rhs_specified = (_Bool)0;
  dash_found = (_Bool)0;
  field_found = (_Bool)0;
  rp = (struct range_pair *)((void *)0);
  n_rp = 0UL;
  n_rp_allocated = 0UL;
  in_digits = (_Bool)0;
  while (1) {
    __repair_app_270__3a5: /* CIL Label */ 
    {
    if ((int const   )*fieldstr == 45) {
      in_digits = (_Bool)0;
      if (dash_found) {
        while (1) {
          tmp = gettext("invalid byte or field list");
          error(0, 0, (char const   *)tmp);
          usage(1);
          break;
        }
      } else {

      }
      dash_found = (_Bool)1;
      fieldstr ++;
      if (lhs_specified) {
        initial = value;
      } else {
        initial = 1UL;
      }
      value = 0UL;
    } else {
      if ((int const   )*fieldstr == 44) {
        goto _L___2;
      } else {
        tmp___16 = __ctype_b_loc();
        tmp___17 = to_uchar((char )*fieldstr);
        if ((int const   )*(*tmp___16 + (int )tmp___17) & 1) {
          goto _L___2;
        } else {
          if ((int const   )*fieldstr == 0) {
            _L___2: 
            in_digits = (_Bool)0;
            if (dash_found) {
              dash_found = (_Bool)0;
              if (! lhs_specified) {
                if (! rhs_specified) {
                  while (1) {
                    tmp___0 = gettext("invalid range with no endpoint: -");
                    error(0, 0, (char const   *)tmp___0);
                    usage(1);
                    break;
                  }
                } else {

                }
              } else {

              }
              if (! rhs_specified) {
                eol_range_start = initial;
                field_found = (_Bool)1;
              } else {
                if (value < initial) {
                  while (1) {
                    tmp___1 = gettext("invalid decreasing range");
                    error(0, 0, (char const   *)tmp___1);
                    usage(1);
                    break;
                  }
                } else {

                }
                if (eol_range_start != 0UL) {
                  if (initial < eol_range_start) {
                    if (eol_range_start <= value) {
                      eol_range_start = initial;
                    } else {
                      while (1) {
                        if (initial == 0UL) {
                          goto _L;
                        } else {
                          if (value == 0UL) {
                            _L: 
                            while (1) {
                              tmp___2 = gettext("fields and positions are numbered from 1");
                              error(0, 0, (char const   *)tmp___2);
                              usage(1);
                              break;
                            }
                          } else {

                          }
                        }
                        if (n_rp >= n_rp_allocated) {
                          rp = (struct range_pair *)tmp___3;
                        } else {

                        }
                        (rp + n_rp)->lo = initial;
                        (rp + n_rp)->hi = value;
                        n_rp ++;
                        break;
                      }
                    }
                    field_found = (_Bool)1;
                  } else {

                  }
                } else {
                  while (1) {
                    if (initial == 0UL) {
                      goto _L___0;
                    } else {
                      if (value == 0UL) {
                        _L___0: 
                        while (1) {
                          tmp___4 = gettext("fields and positions are numbered from 1");
                          error(0, 0, (char const   *)tmp___4);
                          usage(1);
                          break;
                        }
                      } else {

                      }
                    }
                    if (n_rp >= n_rp_allocated) {
                      rp = (struct range_pair *)tmp___5;
                    } else {

                    }
                    (rp + n_rp)->lo = initial;
                    (rp + n_rp)->hi = value;
                    n_rp ++;
                    break;
                  }
                  field_found = (_Bool)1;
                }
                value = 0UL;
              }
            } else {
              while (1) {
                if (value == 0UL) {
                  goto _L___1;
                } else {
                  if (value == 0UL) {
                    _L___1: 
                    while (1) {
                      tmp___6 = gettext("fields and positions are numbered from 1");
                      error(0, 0, (char const   *)tmp___6);
                      usage(1);
                      break;
                    }
                  } else {

                  }
                }
                if (n_rp >= n_rp_allocated) {
                  rp = (struct range_pair *)tmp___7;
                } else {

                }
                (rp + n_rp)->lo = value;
                (rp + n_rp)->hi = value;
                n_rp ++;
                break;
              }
              value = 0UL;
              field_found = (_Bool)1;
            }
            if ((int const   )*fieldstr == 0) {
              break;
            } else {

            }
            fieldstr ++;
            lhs_specified = (_Bool)0;
            rhs_specified = (_Bool)0;
          } else {
            if ((unsigned int )*fieldstr - 48U <= 9U) {
              if (! in_digits) {
                num_start = fieldstr;
              } else {
                if (! num_start) {
                  num_start = fieldstr;
                } else {

                }
              }
              in_digits = (_Bool)1;
              if (dash_found) {
                rhs_specified = (_Bool)1;
              } else {
                lhs_specified = (_Bool)1;
              }
              if (0UL < value) {
                tmp___14 = 0;
              } else {
                if (value * 10UL + (unsigned long )((int const   )*fieldstr - 48) < value) {
                  tmp___14 = 0;
                } else {
                  value = value * 10UL + (unsigned long )((int const   )*fieldstr - 48);
                  tmp___14 = 1;
                }
              }
              if (! tmp___14) {
                tmp___8 = strspn(num_start, "0123456789");
                len = tmp___8;
                tmp___9 = xstrndup(num_start, len);
                bad_num = tmp___9;
                if ((unsigned int )operating_mode == 1U) {
                  tmp___10 = quote((char const   *)bad_num);
                  tmp___11 = gettext("byte offset %s is too large");
                  error(0, 0, (char const   *)tmp___11, tmp___10);
                } else {
                  tmp___12 = quote((char const   *)bad_num);
                  tmp___13 = gettext("field number %s is too large");
                  error(0, 0, (char const   *)tmp___13, tmp___12);
                }
                free((void *)bad_num);
                exit(1);
              } else {

              }
              fieldstr ++;
            } else {
              while (1) {
                tmp___15 = gettext("invalid byte or field list");
                error(0, 0, (char const   *)tmp___15);
                usage(1);
                break;
              }
            }
          }
        }
      }
    }
    value = 0UL;
    }
  }
  max_range_endpoint = 0UL;
  i = 0UL;
  while (i < n_rp) {
    if ((rp + i)->hi > max_range_endpoint) {
      max_range_endpoint = (rp + i)->hi;
    } else {

    }
    i ++;
  }
  tmp___18 = xzalloc(max_range_endpoint / 8UL + 1UL);
  printable_field = (unsigned char *)tmp___18;
  qsort((void *)rp, n_rp, sizeof(*(rp + 0)), & compare_ranges);
  i = 0UL;
  while (i < n_rp) {
    if (complement) {
      rsi_candidate = (rp + i)->hi + 1UL;
    } else {
      rsi_candidate = (rp + i)->lo;
    }
    if (output_delimiter_specified) {
      tmp___19 = is_printable_field(rsi_candidate);
      if (! tmp___19) {
        mark_range_start(rsi_candidate);
      } else {

      }
    } else {

    }
    j = (rp + i)->lo;
    while (j <= (rp + i)->hi) {
      mark_printable_field(j);
      j ++;
    }
    i ++;
  }
  if (output_delimiter_specified) {
    if (! complement) {
      if (eol_range_start) {
        tmp___20 = is_printable_field(eol_range_start);
        if (! tmp___20) {
          mark_range_start(eol_range_start);
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  free((void *)rp);
  return (field_found);
}
}
static void cut_bytes(FILE *stream ) 
{ size_t byte_idx ;
  _Bool print_delimiter ;
  int c ;
  _Bool range_start ;
  _Bool *rs ;
  _Bool *tmp ;
  _Bool tmp___0 ;

  {
  byte_idx = 0UL;
  print_delimiter = (_Bool)0;
  while (1) {
    c = getc_unlocked(stream);
    if (c == 10) {
      putchar_unlocked('\n');
      byte_idx = 0UL;
      print_delimiter = (_Bool)0;
    } else {
      if (c == -1) {
        if (byte_idx > 0UL) {
          putchar_unlocked('\n');
        } else {

        }
        break;
      } else {
        if (output_delimiter_specified) {
          tmp = & range_start;
        } else {
          tmp = (_Bool *)((void *)0);
        }
        rs = tmp;
        byte_idx ++;
        tmp___0 = print_kth(byte_idx, rs);
        if (tmp___0) {
          if (rs) {
            if (*rs) {
              if (print_delimiter) {
                fwrite_unlocked((void const   */* __restrict  */)output_delimiter_string, sizeof(char ), output_delimiter_length, (FILE */* __restrict  */)stdout);
              } else {

              }
            } else {

            }
          } else {

          }
          print_delimiter = (_Bool)1;
          putchar_unlocked(c);
        } else {

        }
      }
    }
  }
  return;
}
}
static void cut_fields(FILE *stream ) 
{ int c ;
  size_t field_idx ;
  _Bool found_any_selected_field ;
  _Bool buffer_first_field ;
  _Bool tmp ;
  int tmp___0 ;
  ssize_t len ;
  size_t n_bytes ;
  int tmp___1 ;
  int tmp___2 ;
  unsigned char tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;

  {
  field_idx = 1UL;
  found_any_selected_field = (_Bool)0;
  c = getc_unlocked(stream);
  if (c == -1) {
    return;
  } else {

  }
  ungetc(c, stream);
  tmp = print_kth(1UL, (_Bool *)((void *)0));
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  buffer_first_field = (_Bool )((int )suppress_non_delimited ^ tmp___0);
  while (1) {
    if (field_idx == 1UL) {
      if (buffer_first_field) {
        len = getndelim2(& field_1_buffer, & field_1_bufsize, 0UL, 4294967295UL, (int )delim, '\n', stream);
        if (len < 0L) {
          free((void *)field_1_buffer);
          field_1_buffer = (char *)((void *)0);
          tmp___1 = ferror_unlocked(stream);
          if (tmp___1) {
            break;
          } else {
            tmp___2 = feof_unlocked(stream);
            if (tmp___2) {
              break;
            } else {

            }
          }
          xalloc_die();
        } else {

        }
        n_bytes = (unsigned long )len;
        if (! (n_bytes != 0UL)) {
          __assert_fail("n_bytes != 0", "cut.c", 626U, "cut_fields");
        } else {

        }
        tmp___3 = to_uchar(*(field_1_buffer + (n_bytes - 1UL)));
        if ((int )tmp___3 != (int )delim) {
          if (! suppress_non_delimited) {
            fwrite_unlocked((void const   */* __restrict  */)field_1_buffer, sizeof(char ), n_bytes, (FILE */* __restrict  */)stdout);
            if ((int )*(field_1_buffer + (n_bytes - 1UL)) != 10) {
              putchar_unlocked('\n');
            } else {

            }
          } else {

          }
          continue;
        } else {

        }
        tmp___4 = print_kth(1UL, (_Bool *)((void *)0));
        if (tmp___4) {
          fwrite_unlocked((void const   */* __restrict  */)field_1_buffer, sizeof(char ), n_bytes - 1UL, (FILE */* __restrict  */)stdout);
          found_any_selected_field = (_Bool)1;
        } else {

        }
        field_idx ++;
      } else {

      }
    } else {

    }
    if (c != -1) {
      tmp___5 = print_kth(field_idx, (_Bool *)((void *)0));
      if (tmp___5) {
        if (found_any_selected_field) {
          fwrite_unlocked((void const   */* __restrict  */)output_delimiter_string, sizeof(char ), output_delimiter_length, (FILE */* __restrict  */)stdout);
        } else {

        }
        found_any_selected_field = (_Bool)1;
        while (1) {
          c = getc_unlocked(stream);
          if (c != (int )delim) {
            if (c != 10) {
              if (! (c != -1)) {
                break;
              } else {

              }
            } else {
              break;
            }
          } else {
            break;
          }
          putchar_unlocked(c);
        }
      } else {
        while (1) {
          c = getc_unlocked(stream);
          if (c != (int )delim) {
            if (c != 10) {
              if (! (c != -1)) {
                break;
              } else {

              }
            } else {
              break;
            }
          } else {
            break;
          }
        }
      }
    } else {

    }
    if (c == 10) {
      c = getc_unlocked(stream);
      if (c != -1) {
        ungetc(c, stream);
        c = '\n';
      } else {

      }
    } else {

    }
    if (c == (int )delim) {
      field_idx ++;
    } else {
      if (c == 10) {
        goto _L;
      } else {
        if (c == -1) {
          _L: 
          if (found_any_selected_field) {
            putchar_unlocked('\n');
          } else {
            if (suppress_non_delimited) {
              if (! (field_idx == 1UL)) {
                putchar_unlocked('\n');
              } else {

              }
            } else {
              putchar_unlocked('\n');
            }
          }
          if (c == -1) {
            break;
          } else {

          }
          field_idx = 1UL;
          found_any_selected_field = (_Bool)0;
        } else {

        }
      }
    }
  }
  return;
}
}
static void cut_stream(FILE *stream ) 
{ 

  {
  if ((unsigned int )operating_mode == 1U) {
    cut_bytes(stream);
  } else {
    cut_fields(stream);
  }
  return;
}
}
static _Bool cut_file(char const   *file ) 
{ FILE *stream ;
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  tmp___0 = strcmp(file, "-");
  if (tmp___0 == 0) {
    have_read_stdin = (_Bool)1;
    stream = stdin;
  } else {
    stream = fopen((char const   */* __restrict  */)file, (char const   */* __restrict  */)"r");
    if ((unsigned long )stream == (unsigned long )((void *)0)) {
      tmp = __errno_location();
      error(0, *tmp, "%s", file);
      return ((_Bool)0);
    } else {

    }
  }
  fadvise(stream, (enum __anonenum_fadvice_t_62 )2);
  cut_stream(stream);
  tmp___2 = ferror_unlocked(stream);
  if (tmp___2) {
    tmp___1 = __errno_location();
    error(0, *tmp___1, "%s", file);
    return ((_Bool)0);
  } else {

  }
  tmp___5 = strcmp(file, "-");
  if (tmp___5 == 0) {
    clearerr_unlocked(stream);
  } else {
    tmp___4 = fclose(stream);
    if (tmp___4 == -1) {
      tmp___3 = __errno_location();
      error(0, *tmp___3, "%s", file);
      return ((_Bool)0);
    } else {

    }
  }
  return ((_Bool)1);
}
}
static char dummy[2]  ;
int main(int argc , char **argv ) 
{ int optc ;
  _Bool ok ;
  _Bool delim_specified ;
  char *spec_list_string ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  size_t tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  _Bool tmp___8 ;
  _Bool tmp___9 ;
  int *tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;

  {
  delim_specified = (_Bool)0;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  operating_mode = (enum operating_mode )0;
  suppress_non_delimited = (_Bool)0;
  delim = (unsigned char )'\000';
  have_read_stdin = (_Bool)0;
  while (1) {
    optc = getopt_long(argc, (char * const  *)argv, "b:c:d:f:ns", longopts, (int *)((void *)0));
    if (! (optc != -1)) {
      break;
    } else {

    }
    switch (optc) {
    case 98: 
    case 99: 
    if ((unsigned int )operating_mode != 0U) {
      while (1) {
        tmp = gettext("only one type of list may be specified");
        error(0, 0, (char const   *)tmp);
        usage(1);
        break;
      }
    } else {

    }
    operating_mode = (enum operating_mode )1;
    spec_list_string = optarg;
    break;
    case 102: 
    if ((unsigned int )operating_mode != 0U) {
      while (1) {
        tmp___0 = gettext("only one type of list may be specified");
        error(0, 0, (char const   *)tmp___0);
        usage(1);
        break;
      }
    } else {

    }
    operating_mode = (enum operating_mode )2;
    spec_list_string = optarg;
    break;
    case 100: 
    if ((int )*(optarg + 0) != 0) {
      if ((int )*(optarg + 1) != 0) {
        while (1) {
          tmp___1 = gettext("the delimiter must be a single character");
          error(0, 0, (char const   *)tmp___1);
          usage(1);
          break;
        }
      } else {

      }
    } else {

    }
    delim = (unsigned char )*(optarg + 0);
    delim_specified = (_Bool)1;
    break;
    case 128: 
    output_delimiter_specified = (_Bool)1;
    if ((int )*(optarg + 0) == 0) {
      output_delimiter_length = 1UL;
    } else {
      tmp___2 = strlen((char const   *)optarg);
      output_delimiter_length = tmp___2;
    }
    output_delimiter_string = xstrdup((char const   *)optarg);
    break;
    case 110: 
    break;
    case 115: 
    suppress_non_delimited = (_Bool)1;
    break;
    case 129: 
    complement = (_Bool)1;
    break;
    case -130: 
    usage(0);
    break;
    case -131: 
    version_etc(stdout, "cut", "GNU coreutils", Version, "David M. Ihnat", "David MacKenzie", "Jim Meyering", (char *)((void *)0));
    exit(0);
    break;
    default: 
    usage(1);
    }
  }
  if ((unsigned int )operating_mode == 0U) {
    while (1) {
      tmp___3 = gettext("you must specify a list of bytes, characters, or fields");
      error(0, 0, (char const   *)tmp___3);
      usage(1);
      break;
    }
  } else {

  }
  if ((int )delim != 0) {
    if ((unsigned int )operating_mode != 2U) {
      while (1) {
        tmp___4 = gettext("an input delimiter may be specified only when operating on fields");
        error(0, 0, (char const   *)tmp___4);
        usage(1);
        break;
      }
    } else {

    }
  } else {

  }
  if (suppress_non_delimited) {
    if ((unsigned int )operating_mode != 2U) {
      while (1) {
        tmp___5 = gettext("suppressing non-delimited lines makes sense\n\tonly when operating on fields");
        error(0, 0, (char const   *)tmp___5);
        usage(1);
        break;
      }
    } else {

    }
  } else {

  }
  if (output_delimiter_specified) {
    range_start_ht = hash_initialize(31UL, (Hash_tuning const   *)((void *)0), & hash_int, & hash_compare_ints, (void (*)(void * ))((void *)0));
    if ((unsigned long )range_start_ht == (unsigned long )((void *)0)) {
      xalloc_die();
    } else {

    }
  } else {

  }
  tmp___8 = set_fields((char const   *)spec_list_string);
  if (! tmp___8) {
    if ((unsigned int )operating_mode == 2U) {
      while (1) {
        tmp___6 = gettext("missing list of fields");
        error(0, 0, (char const   *)tmp___6);
        usage(1);
        break;
      }
    } else {
      while (1) {
        tmp___7 = gettext("missing list of positions");
        error(0, 0, (char const   *)tmp___7);
        usage(1);
        break;
      }
    }
  } else {

  }
  if (! delim_specified) {
    delim = (unsigned char )'\t';
  } else {

  }
  if ((unsigned long )output_delimiter_string == (unsigned long )((void *)0)) {
    dummy[0] = (char )delim;
    dummy[1] = (char )'\000';
    output_delimiter_string = dummy;
    output_delimiter_length = 1UL;
  } else {

  }
  if (optind == argc) {
    ok = cut_file("-");
  } else {
    ok = (_Bool)1;
    while (optind < argc) {
      tmp___9 = cut_file((char const   *)*(argv + optind));
      ok = (_Bool )((int )ok & (int )tmp___9);
      optind ++;
    }
  }
  if (range_start_ht) {
    hash_free(range_start_ht);
  } else {

  }
  if (have_read_stdin) {
    tmp___11 = fclose(stdin);
    if (tmp___11 == -1) {
      tmp___10 = __errno_location();
      error(0, *tmp___10, "-");
      ok = (_Bool)0;
    } else {

    }
  } else {

  }
  if (ok) {
    tmp___12 = 0;
  } else {
    tmp___12 = 1;
  }
  exit(tmp___12);
}
}
