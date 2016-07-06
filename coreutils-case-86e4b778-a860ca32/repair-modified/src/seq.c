typedef long __off_t;
typedef long __off64_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned long size_t;
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
struct operand {
   long double value ;
   size_t width ;
   int precision ;
};
typedef struct operand operand;
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__leaf__, __const__)) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int getopt_long(int ___argc , char * const  *___argv , char const   *__shortopts , struct option  const  *__longopts , int *__longind )  __attribute__((__leaf__)) ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int asprintf(char ** __restrict  __ptr , char const   * __restrict  __fmt  , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern long strtol(char const   * __restrict  __nptr , char ** __restrict  __endptr , int __base ) ;
extern void free(void *__ptr ) ;
extern int atexit(void (*__func)(void) ) ;
extern void exit(int __status ) ;
extern void *memcpy(void * __restrict  __dest , void const   * __restrict  __src , size_t __n ) ;
extern char *strcpy(char * __restrict  __dest , char const   * __restrict  __src ) ;
extern int strcmp(char const   *__s1 , char const   *__s2 ) ;
extern char *strchr(char const   *__s , int __c ) ;
extern size_t strcspn(char const   *__s , char const   *__reject ) ;
extern size_t strspn(char const   *__s , char const   *__accept ) ;
extern size_t strlen(char const   *__s ) ;
extern char *setlocale(int __category , char const   *__locale ) ;
extern char *gettext(char const   *__msgid ) ;
extern char *textdomain(char const   *__domainname ) ;
extern char *bindtextdomain(char const   *__domainname , char const   *__dirname ) ;
extern void xalloc_die(void) ;
extern void *xmalloc(size_t s ) ;
extern void close_stdout(void) ;
extern void version_etc(FILE *stream , char const   *command_name , char const   *package , char const   *version  , ...) ;
__inline static void emit_bug_reporting_address(void) 
{ char *tmp ;

  {
  tmp = gettext("\nReport bugs to <%s>.\n");
  printf((char const   */* __restrict  */)tmp, "bug-coreutils@gnu.org");
  return;
}
}
extern long double c_strtold(char const   * , char ** ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern char const   *quote(char const   *name ) ;
extern _Bool xstrtold(char const   *str , char const   **ptr , long double *result , long double (*convert)(char const   * , char ** ) ) ;
static _Bool equal_width  ;
char *program_name  ;
static char const   *separator  ;
static char const   terminator[2]  = {      (char const   )'\n',      (char const   )'\000'};
static struct option  const  long_options[6]  = {      {"equal-width", 0, (int *)((void *)0), 'w'}, 
        {"format", 1, (int *)((void *)0), 'f'}, 
        {"separator", 1, (int *)((void *)0), 's'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
void usage(int status ) 
{ char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;

  {
  if (status != 0) {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp, program_name);
  } else {
    tmp___0 = gettext("Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n");
    printf((char const   */* __restrict  */)tmp___0, program_name, program_name, program_name);
    tmp___1 = gettext("Print numbers from FIRST to LAST, in steps of INCREMENT.\n\n  -f, --format=FORMAT      use printf style floating-point FORMAT\n  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n  -w, --equal-width        equalize width by padding with leading zeroes\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("\nIf FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\nomitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\nFIRST, INCREMENT, and LAST are interpreted as floating point values.\nINCREMENT is usually positive if FIRST is smaller than LAST, and\nINCREMENT is usually negative if FIRST is greater than LAST.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("FORMAT must be suitable for printing one argument of type `double\';\nit defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\ndecimal numbers with maximum precision PREC, and to %g otherwise.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    emit_bug_reporting_address();
  }
  exit(status);
}
}
static operand scan_arg(char const   *arg ) 
{ operand ret ;
  char *tmp ;
  _Bool tmp___0 ;
  unsigned short const   **tmp___1 ;
  char const   *decimal_point ;
  char *tmp___2 ;
  size_t fraction_len ;
  size_t tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char const   *e ;
  char *tmp___6 ;
  char *tmp___7 ;
  long exponent ;
  long tmp___8 ;
  long tmp___9 ;
  size_t tmp___10 ;

  {
  tmp___0 = xstrtold(arg, (char const   **)((void *)0), & ret.value, & c_strtold);
  if (! tmp___0) {
    tmp = gettext("invalid floating point argument: %s");
    error(0, 0, (char const   *)tmp, arg);
    usage(1);
  } else {

  }
  while (1) {
    tmp___1 = __ctype_b_loc();
    if (! ((int const   )*(*tmp___1 + (int )*arg) & 8192)) {
      if (! ((int const   )*arg == 43)) {
        break;
      } else {

      }
    } else {

    }
    arg ++;
  }
  ret.width = strlen(arg);
  ret.precision = 2147483647;
  tmp___10 = strcspn(arg, "xX");
  if (! *(arg + tmp___10)) {
    if (ret.value * (long double )0 == (long double )0) {
      tmp___2 = strchr(arg, '.');
      decimal_point = (char const   *)tmp___2;
      if (! decimal_point) {
        ret.precision = 0;
      } else {
        tmp___3 = strcspn(decimal_point + 1, "eE");
        fraction_len = tmp___3;
        if (fraction_len <= 2147483647UL) {
          ret.precision = (int )fraction_len;
        } else {

        }
        if (fraction_len == 0UL) {
          tmp___5 = -1;
        } else {
          if ((unsigned long )decimal_point == (unsigned long )arg) {
            tmp___4 = 1;
          } else {
            if (! ((unsigned int )*(decimal_point + -1) - 48U <= 9U)) {
              tmp___4 = 1;
            } else {
              tmp___4 = 0;
            }
          }
          tmp___5 = tmp___4;
        }
        ret.width += (unsigned long )tmp___5;
      }
      tmp___6 = strchr(arg, 'e');
      e = (char const   *)tmp___6;
      if (! e) {
        tmp___7 = strchr(arg, 'E');
        e = (char const   *)tmp___7;
      } else {

      }
      if (e) {
        tmp___8 = strtol((char const   */* __restrict  */)(e + 1), (char **/* __restrict  */)((void *)0), 10);
        exponent = tmp___8;
        if (exponent < 0L) {
          tmp___9 = - exponent;
        } else {
          tmp___9 = 0L;
        }
        ret.precision = (int )((long )ret.precision + tmp___9);
      } else {

      }
    } else {

    }
  } else {

  }
  return (ret);
}
}
static char const   *long_double_format(char const   *fmt ) 
{ size_t i ;
  size_t prefix_len ;
  _Bool has_L ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  size_t format_size ;
  char *ldfmt ;
  void *tmp___3 ;

  {
  i = 0UL;
  while (1) {
    if ((int const   )*(fmt + i) == 37) {
      if ((int const   )*(fmt + (i + 1UL)) != 37) {
        break;
      } else {

      }
    } else {

    }
    if (! *(fmt + i)) {
      return ((char const   *)((void *)0));
    } else {

    }
    i ++;
  }
  i ++;
  tmp = strspn(fmt + i, "-+#0 \'");
  i += tmp;
  tmp___0 = strspn(fmt + i, "0123456789");
  i += tmp___0;
  if ((int const   )*(fmt + i) == 46) {
    i ++;
    tmp___1 = strspn(fmt + i, "0123456789");
    i += tmp___1;
  } else {

  }
  prefix_len = i;
  has_L = (_Bool )((int const   )*(fmt + i) == 76);
  i += (unsigned long )has_L;
  tmp___2 = strchr("efgaEFGA", (int )*(fmt + i));
  if (! tmp___2) {
    return ((char const   *)((void *)0));
  } else {

  }
  i ++;
  while (1) {
    if ((int const   )*(fmt + i) == 37) {
      if ((int const   )*(fmt + (i + 1UL)) != 37) {
        break;
      } else {

      }
    } else {

    }
    if (! *(fmt + i)) {
      format_size = i + 1UL;
      tmp___3 = xmalloc(format_size + 1UL);
      ldfmt = (char *)tmp___3;
      memcpy((void */* __restrict  */)ldfmt, (void const   */* __restrict  */)fmt, prefix_len);
      *(ldfmt + prefix_len) = (char )'L';
      strcpy((char */* __restrict  */)((ldfmt + prefix_len) + 1), (char const   */* __restrict  */)((fmt + prefix_len) + (int )has_L));
      return ((char const   *)ldfmt);
    } else {

    }
    i ++;
  }
  return ((char const   *)((void *)0));
}
}
static void print_numbers(char const   *fmt , long double first , long double step , long double last ) 
{ long double i ;
  long double x0 ;
  long double x ;
  char *x_str ;
  char *last_str ;
  int tmp ;
  int tmp___0 ;
  char *x0_str ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  i = (long double )0;
  while (1) {
    x = first + i * step;
    if (step < (long double )0) {
      tmp___4 = x < last;
    } else {
      tmp___4 = last < x;
    }
    if (tmp___4) {
      if (i) {
        x_str = (char *)((void *)0);
        last_str = (char *)((void *)0);
        tmp = asprintf((char **/* __restrict  */)(& x_str), (char const   */* __restrict  */)fmt, x);
        if (tmp < 0) {
          xalloc_die();
        } else {
          tmp___0 = asprintf((char **/* __restrict  */)(& last_str), (char const   */* __restrict  */)fmt, last);
          if (tmp___0 < 0) {
            xalloc_die();
          } else {

          }
        }
        tmp___3 = strcmp((char const   *)x_str, (char const   *)last_str);
        if (tmp___3 == 0) {
          x0_str = (char *)((void *)0);
          tmp___1 = asprintf((char **/* __restrict  */)(& x0_str), (char const   */* __restrict  */)fmt, x0);
          if (tmp___1 < 0) {
            xalloc_die();
          } else {

          }
          tmp___2 = strcmp((char const   *)x0_str, (char const   *)x_str);
          if (! (tmp___2 == 0)) {
            fputs_unlocked((char const   */* __restrict  */)separator, (FILE */* __restrict  */)stdout);
            fputs_unlocked((char const   */* __restrict  */)x_str, (FILE */* __restrict  */)stdout);
          } else {

          }
          free((void *)x0_str);
        } else {

        }
        free((void *)x_str);
        free((void *)last_str);
      } else {

      }
      break;
    } else {

    }
    if (i) {
      fputs_unlocked((char const   */* __restrict  */)separator, (FILE */* __restrict  */)stdout);
    } else {

    }
    printf((char const   */* __restrict  */)fmt, x);
    __repair_del_155__1b: /* CIL Label */ 
    {

    }
    i += (long double )1;
  }
  if (i) {
    fputs_unlocked((char const   */* __restrict  */)(terminator), (FILE */* __restrict  */)stdout);
  } else {

  }
  return;
}
}
static char format_buf[28UL]  ;
static char const   *get_default_format(operand first , operand step , operand last ) 
{ int prec ;
  int tmp ;
  size_t first_width ;
  size_t last_width ;
  size_t width ;
  size_t tmp___0 ;
  int w ;

  {
  if (first.precision > step.precision) {
    tmp = first.precision;
  } else {
    tmp = step.precision;
  }
  prec = tmp;
  if (prec != 2147483647) {
    if (last.precision != 2147483647) {
      if (equal_width) {
        first_width = first.width + (unsigned long )(prec - first.precision);
        last_width = last.width + (unsigned long )(prec - last.precision);
        if (last.precision) {
          if (prec == 0) {
            last_width --;
          } else {

          }
        } else {

        }
        if (first_width > last_width) {
          tmp___0 = first_width;
        } else {
          tmp___0 = last_width;
        }
        width = tmp___0;
        if (width <= 2147483647UL) {
          w = (int )width;
          sprintf((char */* __restrict  */)(format_buf), (char const   */* __restrict  */)"%%0%d.%dLf", w, prec);
          return ((char const   *)(format_buf));
        } else {

        }
      } else {
        sprintf((char */* __restrict  */)(format_buf), (char const   */* __restrict  */)"%%.%dLf", prec);
        return ((char const   *)(format_buf));
      }
    } else {

    }
  } else {

  }
  return ("%Lg");
}
}
int main(int argc , char **argv ) 
{ int optc ;
  operand first ;
  operand step ;
  operand last ;
  char const   *format_str ;
  char *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char const   *f ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;

  {
  first.value = (long double )1;
  first.width = 1UL;
  first.precision = 0;
  step.value = (long double )1;
  step.width = 1UL;
  step.precision = 0;
  format_str = (char const   *)((void *)0);
  program_name = *(argv + 0);
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  equal_width = (_Bool)0;
  separator = "\n";
  while (optind < argc) {
    if ((int )*(*(argv + optind) + 0) == 45) {
      optc = (int )*(*(argv + optind) + 1);
      if (optc == 46) {
        break;
      } else {
        if ((unsigned int )optc - 48U <= 9U) {
          break;
        } else {

        }
      }
    } else {

    }
    optc = getopt_long(argc, (char * const  *)argv, "+f:s:w", long_options, (int *)((void *)0));
    if (optc == -1) {
      break;
    } else {

    }
    switch (optc) {
    case 102: 
    format_str = (char const   *)optarg;
    break;
    case 115: 
    separator = (char const   *)optarg;
    break;
    case 119: 
    equal_width = (_Bool)1;
    break;
    case -130: 
    usage(0);
    break;
    case -131: 
    version_etc(stdout, "seq", "GNU coreutils", "6.9+", "Ulrich Drepper", (char *)((void *)0));
    exit(0);
    break;
    default: 
    usage(1);
    }
  }
  if (argc - optind < 1) {
    tmp = gettext("missing operand");
    error(0, 0, (char const   *)tmp);
    usage(1);
  } else {

  }
  if (3 < argc - optind) {
    tmp___0 = quote((char const   *)*(argv + (optind + 3)));
    tmp___1 = gettext("extra operand %s");
    error(0, 0, (char const   *)tmp___1, tmp___0);
    usage(1);
  } else {

  }
  if (format_str) {
    tmp___2 = long_double_format(format_str);
    f = tmp___2;
    if (! f) {
      tmp___3 = quote(format_str);
      tmp___4 = gettext("invalid format string: %s");
      error(0, 0, (char const   *)tmp___4, tmp___3);
      usage(1);
    } else {

    }
    format_str = f;
  } else {

  }
  tmp___5 = optind;
  optind ++;
  last = scan_arg((char const   *)*(argv + tmp___5));
  if (optind < argc) {
    first = last;
    tmp___6 = optind;
    optind ++;
    last = scan_arg((char const   *)*(argv + tmp___6));
    if (optind < argc) {
      step = last;
      tmp___7 = optind;
      optind ++;
      last = scan_arg((char const   *)*(argv + tmp___7));
    } else {

    }
  } else {

  }
  if ((unsigned long )format_str != (unsigned long )((void *)0)) {
    if (equal_width) {
      tmp___8 = gettext("format string may not be specified when printing equal width strings");
      error(0, 0, (char const   *)tmp___8);
      usage(1);
    } else {

    }
  } else {

  }
  if ((unsigned long )format_str == (unsigned long )((void *)0)) {
    format_str = get_default_format(first, step, last);
  } else {

  }
  print_numbers(format_str, first.value, step.value, last.value);
  exit(0);
}
}
