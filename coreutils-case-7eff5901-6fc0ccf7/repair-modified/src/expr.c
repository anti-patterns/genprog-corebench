typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
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
typedef long intmax_t;
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
typedef int regoff_t;
struct re_registers {
   unsigned int num_regs ;
   regoff_t *start ;
   regoff_t *end ;
};
enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    c_quoting_style = 3,
    escape_quoting_style = 4,
    locale_quoting_style = 5,
    clocale_quoting_style = 6
} ;
enum valtype {
    integer = 0,
    string = 1
} ;
typedef enum valtype TYPE;
union __anonunion_u_62 {
   intmax_t i ;
   char *s ;
};
struct valinfo {
   TYPE type ;
   union __anonunion_u_62 u ;
};
typedef struct valinfo VALUE;
enum __anonenum_fxn_63 {
    multiply = 0,
    divide = 1,
    mod = 2
} ;
enum __anonenum_fxn_64 {
    plus = 0,
    minus = 1
} ;
enum __anonenum_fxn_65 {
    less_than = 0,
    less_equal = 1,
    equal = 2,
    not_equal = 3,
    greater_equal = 4,
    greater_than = 5
} ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int puts(char const   *__s ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest , char const   * __restrict  __src , size_t __n )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s , char const   *__reject )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__, __nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern int volatile   exit_failure ;
__inline static void initialize_exit_failure(int status ) 
{ 

  {
  if (status != 1) {
    exit_failure = (int volatile   )status;
  } else {

  }
  return;
}
}
extern  __attribute__((__nothrow__)) char *setlocale(int __category , char const   *__locale )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *gettext(char const   *__msgid )  __attribute__((__leaf__, __format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *textdomain(char const   *__domainname )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *bindtextdomain(char const   *__domainname , char const   *__dirname )  __attribute__((__leaf__)) ;
extern void xalloc_die(void) ;
extern void *xmalloc(size_t s ) ;
extern char *xstrdup(char const   *str ) ;
extern void close_stdout(void) ;
extern reg_syntax_t re_syntax_options ;
extern char const   *re_compile_pattern(char const   *pattern , size_t length , struct re_pattern_buffer *buffer ) ;
extern int re_match(struct re_pattern_buffer *buffer , char const   *string , int length , int start , struct re_registers *regs ) ;
extern void parse_long_options(int _argc , char **_argv , char const   *_command_name , char const   *_package , char const   *_version , void (*_usage)(int  )  , ...) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
extern char *imaxtostr(intmax_t  , char * ) ;
extern char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
extern char *quotearg_colon(char const   *arg ) ;
static char **args  ;
char *program_name  ;
static VALUE *eval(_Bool evaluate ) ;
static _Bool nomoreargs(void) ;
static _Bool null(VALUE *v ) ;
static void printv(VALUE *v ) ;
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
  char *tmp___11 ;

  {
  if (status != 0) {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp, program_name);
  } else {
    tmp___0 = gettext("Usage: %s EXPRESSION\n  or:  %s OPTION\n");
    printf((char const   */* __restrict  */)tmp___0, program_name, program_name);
    putchar_unlocked('\n');
    tmp___1 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("\nPrint the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.  EXPRESSION may be:\n\n  ARG1 | ARG2       ARG1 if it is neither null nor 0, otherwise ARG2\n\n  ARG1 & ARG2       ARG1 if neither argument is null or 0, otherwise 0\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("\n  ARG1 < ARG2       ARG1 is less than ARG2\n  ARG1 <= ARG2      ARG1 is less than or equal to ARG2\n  ARG1 = ARG2       ARG1 is equal to ARG2\n  ARG1 != ARG2      ARG1 is unequal to ARG2\n  ARG1 >= ARG2      ARG1 is greater than or equal to ARG2\n  ARG1 > ARG2       ARG1 is greater than ARG2\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("\n  ARG1 + ARG2       arithmetic sum of ARG1 and ARG2\n  ARG1 - ARG2       arithmetic difference of ARG1 and ARG2\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("\n  ARG1 * ARG2       arithmetic product of ARG1 and ARG2\n  ARG1 / ARG2       arithmetic quotient of ARG1 divided by ARG2\n  ARG1 % ARG2       arithmetic remainder of ARG1 divided by ARG2\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("\n  STRING : REGEXP   anchored pattern match of REGEXP in STRING\n\n  match STRING REGEXP        same as STRING : REGEXP\n  substr STRING POS LENGTH   substring of STRING, POS counted from 1\n  index STRING CHARS         index in STRING where any CHARS is found, or 0\n  length STRING              length of STRING\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("  + TOKEN                    interpret TOKEN as a string, even if it is a\n                               keyword like `match\' or an operator like `/\'\n\n  ( EXPRESSION )             value of EXPRESSION\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___8, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("\nBeware that many operators need to be escaped or quoted for shells.\nComparisons are arithmetic if both ARGs are numbers, else lexicographical.\nPattern matches return the string matched between \\( and \\) or null; if\n\\( and \\) are not used, they return the number of characters matched or 0.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("\nExit status is 0 if EXPRESSION is neither null nor 0, 1 if EXPRESSION is null\nor 0, 2 if EXPRESSION is syntactically invalid, and 3 if an error occurred.\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___10, (FILE */* __restrict  */)stdout);
    tmp___11 = gettext("\nReport bugs to <%s>.\n");
    printf((char const   */* __restrict  */)tmp___11, "bug-coreutils@gnu.org");
  }
  exit(status);
}
}
static void syntax_error(void) 
{ char *tmp ;

  {
  tmp = gettext("syntax error");
  error(2, 0, (char const   *)tmp);
  return;
}
}
int main(int argc , char **argv ) 
{ VALUE *v ;
  int tmp ;
  char *tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;

  {
  program_name = *(argv + 0);
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  initialize_exit_failure(3);
  atexit(& close_stdout);
  parse_long_options(argc, argv, "expr", "GNU coreutils", "5.3.1", & usage, "Mike Parker", (char const   *)((void *)0));
  if (argc > 1) {
    tmp = strcmp((char const   *)*(argv + 1), "--");
    if (tmp == 0) {
      argc --;
      argv ++;
    } else {

    }
  } else {

  }
  if (argc <= 1) {
    tmp___0 = gettext("missing operand");
    error(0, 0, (char const   *)tmp___0);
    usage(2);
  } else {

  }
  args = argv + 1;
  v = eval((_Bool)1);
  tmp___1 = nomoreargs();
  if (! tmp___1) {
    syntax_error();
  } else {

  }
  printv(v);
  tmp___2 = null(v);
  exit((int )tmp___2);
}
}
static VALUE *int_value(intmax_t i ) 
{ VALUE *v ;
  void *tmp ;

  {
  tmp = xmalloc(sizeof(*v));
  v = (VALUE *)tmp;
  v->type = (enum valtype )0;
  v->u.i = i;
  return (v);
}
}
static VALUE *str_value(char *s ) 
{ VALUE *v ;
  void *tmp ;

  {
  tmp = xmalloc(sizeof(*v));
  v = (VALUE *)tmp;
  v->type = (enum valtype )1;
  v->u.s = xstrdup((char const   *)s);
  return (v);
}
}
static void freev(VALUE *v ) 
{ 

  {
  if ((unsigned int )v->type == 1U) {
    free((void *)v->u.s);
  } else {

  }
  free((void *)v);
  return;
}
}
static void printv(VALUE *v ) 
{ char *p ;
  char buf[(((sizeof(intmax_t ) * 8UL - 1UL) * 146UL) / 485UL + 2UL) + 1UL] ;

  {
  switch ((int )v->type) {
  case 0: 
  p = imaxtostr(v->u.i, buf);
  break;
  case 1: 
  p = v->u.s;
  break;
  default: 
  abort();
  }
  puts((char const   *)p);
  return;
}
}
static _Bool null(VALUE *v ) 
{ char const   *cp ;

  {
  switch ((int )v->type) {
  case 0: 
  return ((_Bool )(v->u.i == 0L));
  case 1: 
  cp = (char const   *)v->u.s;
  if ((int const   )*cp == 0) {
    return ((_Bool)1);
  } else {

  }
  cp += (int const   )*cp == 45;
  while (1) {
    if ((int const   )*cp != 48) {
      return ((_Bool)0);
    } else {

    }
    cp ++;
    if (! *cp) {
      break;
    } else {

    }
  }
  return ((_Bool)1);
  default: 
  abort();
  }
}
}
static void tostring(VALUE *v ) 
{ char buf[(((sizeof(intmax_t ) * 8UL - 1UL) * 146UL) / 485UL + 2UL) + 1UL] ;
  char *tmp ;

  {
  switch ((int )v->type) {
  case 0: 
  tmp = imaxtostr(v->u.i, buf);
  v->u.s = xstrdup((char const   *)tmp);
  v->type = (enum valtype )1;
  break;
  case 1: 
  break;
  default: 
  abort();
  }
  return;
}
}
static _Bool toarith(VALUE *v ) 
{ intmax_t value ;
  char *cp ;
  int sign ;
  int tmp ;
  intmax_t new_v ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  switch ((int )v->type) {
  case 0: 
  return ((_Bool)1);
  case 1: 
  value = 0L;
  cp = v->u.s;
  if ((int )*cp == 45) {
    tmp = -1;
  } else {
    tmp = 1;
  }
  sign = tmp;
  if (sign < 0) {
    cp ++;
  } else {

  }
  while (1) {
    if ((unsigned int )*cp - 48U <= 9U) {
      new_v = 10L * value + (long )(sign * ((int )*cp - 48));
      if (0 < sign) {
        if (922337203685477580L < value) {
          tmp___4 = 1;
        } else {
          if (new_v < 0L) {
            tmp___4 = 1;
          } else {
            tmp___4 = 0;
          }
        }
        tmp___6 = tmp___4;
      } else {
        if (value < -922337203685477580L) {
          tmp___5 = 1;
        } else {
          if (0L < new_v) {
            tmp___5 = 1;
          } else {
            tmp___5 = 0;
          }
        }
        tmp___6 = tmp___5;
      }
      if (tmp___6) {
        tmp___0 = quotearg_colon((char const   *)v->u.s);
        if (0 < sign) {
          tmp___1 = gettext("integer is too large: %s");
          tmp___3 = tmp___1;
        } else {
          tmp___2 = gettext("integer is too small: %s");
          tmp___3 = tmp___2;
        }
        error(3, 0, (char const   *)tmp___3, tmp___0);
      } else {

      }
      value = new_v;
    } else {
      return ((_Bool)0);
    }
    cp ++;
    if (! *cp) {
      break;
    } else {

    }
  }
  free((void *)v->u.s);
  v->u.i = value * (long )sign;
  v->type = (enum valtype )0;
  return ((_Bool)1);
  default: 
  abort();
  }
}
}
static _Bool nextarg(char const   *str ) 
{ _Bool r ;
  int tmp ;

  {
  if ((unsigned long )*args == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else {
    tmp = strcmp((char const   *)*args, str);
    r = (_Bool )(tmp == 0);
    args += (int )r;
    return (r);
  }
}
}
static _Bool nomoreargs(void) 
{ 

  {
  return ((_Bool )((unsigned long )*args == (unsigned long )((char *)0)));
}
}
static VALUE *docolon(VALUE *sv , VALUE *pv ) 
{ VALUE *v ;
  char const   *errmsg ;
  struct re_pattern_buffer re_buffer ;
  struct re_registers re_regs ;
  size_t len ;
  int matchlen ;
  char *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;

  {
  tostring(sv);
  tostring(pv);
  if ((int )*(pv->u.s + 0) == 94) {
    tmp = gettext("warning: unportable BRE: `%s\': using `^\' as the first character\nof the basic regular expression is not portable; it is being ignored");
    error(0, 0, (char const   *)tmp, pv->u.s);
  } else {

  }
  len = strlen((char const   *)pv->u.s);
  memset((void *)(& re_buffer), 0, sizeof(re_buffer));
  memset((void *)(& re_regs), 0, sizeof(re_regs));
  re_buffer.allocated = 2UL * len;
  if (re_buffer.allocated < len) {
    xalloc_die();
  } else {

  }
  tmp___0 = xmalloc(re_buffer.allocated);
  re_buffer.buffer = (unsigned char *)tmp___0;
  re_buffer.translate = (char *)((void *)0);
  re_syntax_options = ((((((1UL << 1) << 1) | ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (1UL << 1);
  errmsg = re_compile_pattern((char const   *)pv->u.s, len, & re_buffer);
  if (errmsg) {
    error(3, 0, "%s", errmsg);
  } else {

  }
  tmp___1 = strlen((char const   *)sv->u.s);
  matchlen = re_match(& re_buffer, (char const   *)sv->u.s, (int )tmp___1, 0, & re_regs);
  if (0 <= matchlen) {
    if (re_buffer.re_nsub > 0UL) {
      *(sv->u.s + *(re_regs.end + 1)) = (char )'\000';
      v = str_value(sv->u.s + *(re_regs.start + 1));
    } else {
      v = int_value((long )matchlen);
    }
  } else {
    if (re_buffer.re_nsub > 0UL) {
      v = str_value((char *)"");
    } else {
      v = int_value(0L);
    }
  }
  free((void *)re_buffer.buffer);
  return (v);
}
}
static VALUE *eval7(_Bool evaluate ) 
{ VALUE *v ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;
  char **tmp___3 ;
  VALUE *tmp___4 ;

  {
  tmp = nomoreargs();
  if (tmp) {
    syntax_error();
  } else {

  }
  tmp___1 = nextarg("(");
  if (tmp___1) {
    v = eval(evaluate);
    tmp___0 = nextarg(")");
    if (! tmp___0) {
      syntax_error();
    } else {

    }
    return (v);
  } else {

  }
  tmp___2 = nextarg(")");
  if (tmp___2) {
    syntax_error();
  } else {

  }
  tmp___3 = args;
  args ++;
  tmp___4 = str_value(*tmp___3);
  return (tmp___4);
}
}
static VALUE *eval6(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  VALUE *v ;
  VALUE *i1 ;
  VALUE *i2 ;
  _Bool tmp ;
  char **tmp___0 ;
  VALUE *tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  _Bool tmp___7 ;
  _Bool tmp___8 ;
  size_t tmp___9 ;
  VALUE *tmp___10 ;
  _Bool tmp___11 ;
  _Bool tmp___12 ;
  _Bool tmp___13 ;
  _Bool tmp___14 ;
  _Bool tmp___15 ;

  {
  tmp___15 = nextarg("+");
  if (tmp___15) {
    tmp = nomoreargs();
    if (tmp) {
      syntax_error();
    } else {

    }
    tmp___0 = args;
    args ++;
    tmp___1 = str_value(*tmp___0);
    return (tmp___1);
  } else {
    tmp___14 = nextarg("length");
    if (tmp___14) {
      r = eval6(evaluate);
      tostring(r);
      tmp___2 = strlen((char const   *)r->u.s);
      v = int_value((long )tmp___2);
      freev(r);
      return (v);
    } else {
      tmp___13 = nextarg("match");
      if (tmp___13) {
        l = eval6(evaluate);
        r = eval6(evaluate);
        if (evaluate) {
          v = docolon(l, r);
          freev(l);
        } else {
          v = l;
        }
        freev(r);
        return (v);
      } else {
        tmp___12 = nextarg("index");
        if (tmp___12) {
          l = eval6(evaluate);
          r = eval6(evaluate);
          tostring(l);
          tostring(r);
          tmp___3 = strcspn((char const   *)l->u.s, (char const   *)r->u.s);
          v = int_value((long )(tmp___3 + 1UL));
          tmp___4 = strlen((char const   *)l->u.s);
          if ((unsigned long )v->u.i == tmp___4 + 1UL) {
            v->u.i = 0L;
          } else {

          }
          freev(l);
          freev(r);
          return (v);
        } else {
          tmp___11 = nextarg("substr");
          if (tmp___11) {
            l = eval6(evaluate);
            i1 = eval6(evaluate);
            i2 = eval6(evaluate);
            tostring(l);
            tmp___7 = toarith(i1);
            if (tmp___7) {
              tmp___8 = toarith(i2);
              if (tmp___8) {
                tmp___9 = strlen((char const   *)l->u.s);
                if (tmp___9 < (unsigned long )i1->u.i) {
                  v = str_value((char *)"");
                } else {
                  if (i1->u.i <= 0L) {
                    v = str_value((char *)"");
                  } else {
                    if (i2->u.i <= 0L) {
                      v = str_value((char *)"");
                    } else {
                      tmp___5 = xmalloc(sizeof(*v));
                      v = (VALUE *)tmp___5;
                      v->type = (enum valtype )1;
                      tmp___6 = xmalloc((unsigned long )(i2->u.i + 1L));
                      v->u.s = strncpy((char */* __restrict  */)tmp___6, (char const   */* __restrict  */)((l->u.s + i1->u.i) - 1), (unsigned long )i2->u.i);
                      *(v->u.s + i2->u.i) = (char)0;
                    }
                  }
                }
              } else {
                v = str_value((char *)"");
              }
            } else {
              v = str_value((char *)"");
            }
            freev(l);
            freev(i1);
            freev(i2);
            return (v);
          } else {
            tmp___10 = eval7(evaluate);
            return (tmp___10);
          }
        }
      }
    }
  }
}
}
static VALUE *eval5(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  VALUE *v ;
  _Bool tmp ;

  {
  l = eval6(evaluate);
  while (1) {
    tmp = nextarg(":");
    if (tmp) {
      r = eval6(evaluate);
      if (evaluate) {
        v = docolon(l, r);
        freev(l);
        l = v;
      } else {

      }
      freev(r);
    } else {
      return (l);
    }
  }
}
}
static VALUE *eval4(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  enum __anonenum_fxn_63 fxn ;
  intmax_t val ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  char *tmp___2 ;
  _Bool tmp___3 ;
  _Bool tmp___4 ;
  char *tmp___5 ;

  {
  val = 0L;
  l = eval5(evaluate);
  while (1) {
    tmp___1 = nextarg("*");
    if (tmp___1) {
      fxn = (enum __anonenum_fxn_63 )0;
    } else {
      tmp___0 = nextarg("/");
      if (tmp___0) {
        fxn = (enum __anonenum_fxn_63 )1;
      } else {
        tmp = nextarg("%");
        if (tmp) {
          fxn = (enum __anonenum_fxn_63 )2;
        } else {
          return (l);
        }
      }
    }
    r = eval5(evaluate);
    if (evaluate) {
      tmp___3 = toarith(l);
      if (tmp___3) {
        tmp___4 = toarith(r);
        if (! tmp___4) {
          tmp___2 = gettext("non-numeric argument");
          error(3, 0, (char const   *)tmp___2);
        } else {

        }
      } else {
        tmp___2 = gettext("non-numeric argument");
        error(3, 0, (char const   *)tmp___2);
      }
      if ((unsigned int )fxn == 0U) {
        val = l->u.i * r->u.i;
      } else {
        if (r->u.i == 0L) {
          tmp___5 = gettext("division by zero");
          error(3, 0, (char const   *)tmp___5);
        } else {

        }
        if ((unsigned int )fxn == 1U) {
          val = l->u.i / r->u.i;
        } else {
          val = l->u.i % r->u.i;
        }
      }
    } else {

    }
    freev(l);
    freev(r);
    l = int_value(val);
  }
}
}
static VALUE *eval3(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  enum __anonenum_fxn_64 fxn ;
  intmax_t val ;
  _Bool tmp ;
  _Bool tmp___0 ;
  char *tmp___1 ;
  _Bool tmp___2 ;
  _Bool tmp___3 ;

  {
  val = 0L;
  l = eval4(evaluate);
  while (1) {
    tmp___0 = nextarg("+");
    if (tmp___0) {
      fxn = (enum __anonenum_fxn_64 )0;
    } else {
      tmp = nextarg("-");
      if (tmp) {
        fxn = (enum __anonenum_fxn_64 )1;
      } else {
        return (l);
      }
    }
    r = eval4(evaluate);
    if (evaluate) {
      tmp___2 = toarith(l);
      if (tmp___2) {
        tmp___3 = toarith(r);
        __repair_app_338__295: /* CIL Label */ 
        {
        if (! tmp___3) {
          tmp___1 = gettext("non-numeric argument");
          error(3, 0, (char const   *)tmp___1);
        } else {

        }
        if (tmp) {
          fxn = (enum __anonenum_fxn_64 )1;
        } else {
          return (l);
        }
        }
      } else {
        tmp___1 = gettext("non-numeric argument");
        error(3, 0, (char const   *)tmp___1);
      }
      if ((unsigned int )fxn == 0U) {
        val = l->u.i + r->u.i;
      } else {
        val = l->u.i - r->u.i;
      }
    } else {

    }
    freev(l);
    freev(r);
    l = int_value(val);
  }
}
}
static VALUE *eval2(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  enum __anonenum_fxn_65 fxn ;
  _Bool val ;
  intmax_t lval ;
  intmax_t rval ;
  int collation_errno ;
  char *collation_arg1 ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;
  _Bool tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  _Bool tmp___14 ;
  _Bool tmp___15 ;

  {
  l = eval3(evaluate);
  while (1) {
    tmp___5 = nextarg("<");
    if (tmp___5) {
      fxn = (enum __anonenum_fxn_65 )0;
    } else {
      tmp___4 = nextarg("<=");
      if (tmp___4) {
        fxn = (enum __anonenum_fxn_65 )1;
      } else {
        tmp___2 = nextarg("=");
        if (tmp___2) {
          fxn = (enum __anonenum_fxn_65 )2;
        } else {
          tmp___3 = nextarg("==");
          if (tmp___3) {
            fxn = (enum __anonenum_fxn_65 )2;
          } else {
            tmp___1 = nextarg("!=");
            if (tmp___1) {
              fxn = (enum __anonenum_fxn_65 )3;
            } else {
              tmp___0 = nextarg(">=");
              if (tmp___0) {
                fxn = (enum __anonenum_fxn_65 )4;
              } else {
                tmp = nextarg(">");
                if (tmp) {
                  fxn = (enum __anonenum_fxn_65 )5;
                } else {
                  return (l);
                }
              }
            }
          }
        }
      }
    }
    r = eval3(evaluate);
    tostring(l);
    tostring(r);
    collation_arg1 = xstrdup((char const   *)l->u.s);
    tmp___6 = __errno_location();
    *tmp___6 = 0;
    tmp___7 = strcoll((char const   *)collation_arg1, (char const   *)r->u.s);
    lval = (long )tmp___7;
    tmp___8 = __errno_location();
    collation_errno = *tmp___8;
    rval = 0L;
    tmp___14 = toarith(l);
    if (tmp___14) {
      tmp___15 = toarith(r);
      if (tmp___15) {
        lval = l->u.i;
        rval = r->u.i;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if (collation_errno) {
        if (evaluate) {
          tmp___9 = gettext("string comparison failed");
          error(0, collation_errno, (char const   *)tmp___9);
          tmp___10 = gettext("Set LC_ALL=\'C\' to work around the problem.");
          error(0, 0, (char const   *)tmp___10);
          tmp___11 = quotearg_n_style(1, (enum quoting_style )5, (char const   *)r->u.s);
          tmp___12 = quotearg_n_style(0, (enum quoting_style )5, (char const   *)collation_arg1);
          tmp___13 = gettext("The strings compared were %s and %s.");
          error(3, 0, (char const   *)tmp___13, tmp___12, tmp___11);
        } else {

        }
      } else {

      }
    }
    switch ((int )fxn) {
    case 0: 
    val = (_Bool )(lval < rval);
    break;
    case 1: 
    val = (_Bool )(lval <= rval);
    break;
    case 2: 
    val = (_Bool )(lval == rval);
    break;
    case 3: 
    val = (_Bool )(lval != rval);
    break;
    case 4: 
    val = (_Bool )(lval >= rval);
    break;
    case 5: 
    val = (_Bool )(lval > rval);
    break;
    default: 
    abort();
    }
    freev(l);
    freev(r);
    free((void *)collation_arg1);
    l = int_value((long )val);
  }
}
}
static VALUE *eval1(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;

  {
  l = eval2(evaluate);
  while (1) {
    tmp___2 = nextarg("&");
    if (tmp___2) {
      tmp = null(l);
      r = eval2((_Bool )((int )evaluate & ~ ((int )tmp)));
      tmp___0 = null(l);
      if (tmp___0) {
        freev(l);
        freev(r);
        l = int_value(0L);
      } else {
        tmp___1 = null(r);
        if (tmp___1) {
          freev(l);
          freev(r);
          l = int_value(0L);
        } else {
          freev(r);
        }
      }
    } else {
      return (l);
    }
  }
}
}
static VALUE *eval(_Bool evaluate ) 
{ VALUE *l ;
  VALUE *r ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;

  {
  l = eval1(evaluate);
  while (1) {
    tmp___2 = nextarg("|");
    if (tmp___2) {
      tmp = null(l);
      r = eval1((_Bool )((int )evaluate & (int )tmp));
      tmp___1 = null(l);
      if (tmp___1) {
        freev(l);
        l = r;
        tmp___0 = null(l);
        if (tmp___0) {
          freev(l);
          l = int_value(0L);
        } else {

        }
      } else {
        freev(r);
      }
    } else {
      return (l);
    }
  }
}
}
