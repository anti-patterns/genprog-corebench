typedef int __int32_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
typedef unsigned long size_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_4 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_3 {
   int __count ;
   union __anonunion___value_4 __value ;
};
typedef struct __anonstruct___mbstate_t_3 __mbstate_t;
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
typedef long ptrdiff_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
typedef unsigned long wctype_t;
typedef int nl_item;
typedef int regoff_t;
typedef unsigned long __re_long_size_t;
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
typedef struct re_pattern_buffer regex_t;
struct __anonstruct_regmatch_t_30 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};
typedef struct __anonstruct_regmatch_t_30 regmatch_t;
struct dfamust {
   int exact ;
   char *must ;
   struct dfamust *next ;
};
struct dfa;
struct dfa;
struct dfa;
typedef int charclass[(((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))];
enum __anonenum_token_32 {
    END = -1,
    EMPTY = 256,
    BACKREF = 257,
    BEGLINE = 258,
    ENDLINE = 259,
    BEGWORD = 260,
    ENDWORD = 261,
    LIMWORD = 262,
    NOTLIMWORD = 263,
    QMARK = 264,
    STAR = 265,
    PLUS = 266,
    REPMN = 267,
    CAT = 268,
    OR = 269,
    LPAREN = 270,
    RPAREN = 271,
    ANYCHAR = 272,
    MBCSET = 273,
    WCHAR = 274,
    CSET = 275
} ;
typedef enum __anonenum_token_32 token;
struct __anonstruct_position_33 {
   unsigned int index ;
   unsigned int constraint ;
};
typedef struct __anonstruct_position_33 position;
struct __anonstruct_position_set_34 {
   position *elems ;
   int nelem ;
};
typedef struct __anonstruct_position_set_34 position_set;
struct __anonstruct_dfa_state_35 {
   int hash ;
   position_set elems ;
   char newline ;
   char letter ;
   char backref ;
   unsigned char constraint ;
   int first_end ;
   position_set mbps ;
};
typedef struct __anonstruct_dfa_state_35 dfa_state;
struct mb_char_classes {
   int cset ;
   int invert ;
   wchar_t *chars ;
   int nchars ;
   wctype_t *ch_classes ;
   int nch_classes ;
   wchar_t *range_sts ;
   wchar_t *range_ends ;
   int nranges ;
   char **equivs ;
   int nequivs ;
   char **coll_elems ;
   int ncoll_elems ;
};
struct dfa {
   charclass *charclasses ;
   int cindex ;
   int calloc ;
   token *tokens ;
   int tindex ;
   int talloc ;
   int depth ;
   int nleaves ;
   int nregexps ;
   unsigned int mb_cur_max ;
   int utf8_anychar_classes[5] ;
   int nmultibyte_prop ;
   int *multibyte_prop ;
   struct mb_char_classes *mbcsets ;
   int nmbcsets ;
   int mbcsets_alloc ;
   dfa_state *states ;
   int sindex ;
   int salloc ;
   position_set *follows ;
   int searchflag ;
   int tralloc ;
   int trcount ;
   int **trans ;
   int **realtrans ;
   int **fails ;
   int *success ;
   int *newlines ;
   struct dfamust *musts ;
};
typedef int predicate(int  );
struct dfa_ctype {
   char const   *name ;
   predicate *func ;
   _Bool single_byte_only ;
};
enum __anonenum_status_transit_state_36 {
    TRANSIT_STATE_IN_PROGRESS = 0,
    TRANSIT_STATE_DONE = 1,
    TRANSIT_STATE_END_BUFFER = 2
} ;
typedef enum __anonenum_status_transit_state_36 status_transit_state;
struct __anonstruct_must_37 {
   char **in ;
   char *left ;
   char *right ;
   char *is ;
};
typedef struct __anonstruct_must_37 must;
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion , char const   *__file , unsigned int __line , char const   *__function )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) unsigned short const   **__ctype_b_loc(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__leaf__, __const__)) ;
extern  __attribute__((__nothrow__)) int isalnum(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isalpha(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int iscntrl(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isdigit(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int islower(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isgraph(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isprint(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int ispunct(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isspace(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isupper(int  )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isxdigit(int  )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  tolower(int __c )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  toupper(int __c )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int isblank(int  )  __attribute__((__leaf__)) ;
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
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void)  __attribute__((__warn_unused_result__, __leaf__)) ;
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
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__warn_unused_result__, __malloc__, __leaf__)) ;
extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
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
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memcpy)(void * __restrict  __dest , void const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memmove)(void *__dest , void const   *__src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) void __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) memset)(void *__dest , int __ch , size_t __len )  __attribute__((__nonnull__(1), __leaf__)) ;
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcpy)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncpy)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strcat)(char * __restrict  __dest , char const   * __restrict  __src )  __attribute__((__nonnull__(1,2), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) char __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) strncat)(char * __restrict  __dest , char const   * __restrict  __src , size_t __len )  __attribute__((__nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__, __nonnull__(1,2), __leaf__)) ;
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
extern  __attribute__((__nothrow__)) char *dcgettext(char const   *__domainname , char const   *__msgid , int __category )  __attribute__((__leaf__, __format_arg__(2))) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int wcscoll(wchar_t const   *__s1 , wchar_t const   *__s2 )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemmove)(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemset)(wchar_t *__s , wchar_t __c , size_t __n )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmempcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wint_t __attribute__((__leaf__, __gnu_inline__))  btowc(int __c )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  wctob(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t mbrtowc(wchar_t * __restrict  __pwc , char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __p )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcrtomb)(char * __restrict  __s , wchar_t __wchar , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbrlen(char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__))  mbrlen(char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
extern wint_t __btowc_alias(int __c )  __asm__("btowc")  ;
__inline extern  __attribute__((__nothrow__)) wint_t __attribute__((__leaf__, __gnu_inline__))  btowc(int __c )  __attribute__((__leaf__)) ;
__inline extern wint_t __attribute__((__leaf__, __gnu_inline__))  btowc(int __c ) 
{ wint_t tmp ;

  {
  tmp = __btowc_alias(__c);
  return ((unsigned int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
extern int __wctob_alias(wint_t __c )  __asm__("wctob")  ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__))  wctob(wint_t __wc )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__))  wctob(wint_t __wc ) 
{ int tmp ;

  {
  tmp = __wctob_alias(__wc);
  return ((int __attribute__((__leaf__, __gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__))  mbrlen(char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__))  mbrlen(char const   * __restrict  __s , size_t __n , mbstate_t * __restrict  __ps ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  if ((unsigned long )__ps != (unsigned long )((void *)0)) {
    tmp = mbrtowc((wchar_t */* __restrict  */)((void *)0), __s, __n, __ps);
    tmp___1 = tmp;
  } else {
    tmp___0 = __mbrlen(__s, __n, (mbstate_t */* __restrict  */)((void *)0));
    tmp___1 = tmp___0;
  }
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__))  )tmp___1);
}
}
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsnrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsnrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpcpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fwprintf)(__FILE * __restrict  __stream , wchar_t const   * __restrict  __fmt  , ...) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wprintf)(wchar_t const   * __restrict  __fmt  , ...) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) swprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt  , ...)  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vfwprintf)(__FILE * __restrict  __stream , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vwprintf)(wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vswprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgetws)(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream ) ;
__inline extern wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgetws_unlocked)(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemcpy_chk(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n , size_t __ns1 )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemcpy_alias(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __asm__("wmemcpy") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemcpy_chk_warn(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n , size_t __ns1 )  __asm__("__wmemcpy_chk") __attribute__((__warning__("wmemcpy called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s1, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s1, 0);
    tmp___0 = __wmemcpy_chk(__s1, __s2, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s1, 0);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s1, 0);
      tmp___2 = __wmemcpy_chk_warn(__s1, __s2, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wmemcpy_alias(__s1, __s2, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wmemmove_chk(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n , size_t __ns1 )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemmove_alias(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n )  __asm__("wmemmove") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemmove_chk_warn(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n , size_t __ns1 )  __asm__("__wmemmove_chk") __attribute__((__warning__("wmemmove called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemmove)(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemmove)(wchar_t *__s1 , wchar_t const   *__s2 , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s1, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s1, 0);
    tmp___0 = __wmemmove_chk(__s1, __s2, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s1, 0);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s1, 0);
      tmp___2 = __wmemmove_chk_warn(__s1, __s2, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wmemmove_alias(__s1, __s2, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wmempcpy_chk(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n , size_t __ns1 )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmempcpy_alias(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __asm__("wmempcpy") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmempcpy_chk_warn(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n , size_t __ns1 )  __asm__("__wmempcpy_chk") __attribute__((__warning__("wmempcpy called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmempcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmempcpy)(wchar_t * __restrict  __s1 , wchar_t const   * __restrict  __s2 , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s1, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s1, 0);
    tmp___0 = __wmempcpy_chk(__s1, __s2, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s1, 0);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s1, 0);
      tmp___2 = __wmempcpy_chk_warn(__s1, __s2, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wmempcpy_alias(__s1, __s2, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wmemset_chk(wchar_t *__s , wchar_t __c , size_t __n , size_t __ns )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemset_alias(wchar_t *__s , wchar_t __c , size_t __n )  __asm__("wmemset") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wmemset_chk_warn(wchar_t *__s , wchar_t __c , size_t __n , size_t __ns )  __asm__("__wmemset_chk") __attribute__((__warning__("wmemset called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemset)(wchar_t *__s , wchar_t __c , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wmemset)(wchar_t *__s , wchar_t __c , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s, 0);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 0);
    tmp___0 = __wmemset_chk(__s, __c, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s, 0);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s, 0);
      tmp___2 = __wmemset_chk_warn(__s, __c, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wmemset_alias(__s, __c, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcscpy_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcscpy_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __asm__("wcscpy") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__dest, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcscpy_chk(__dest, __src, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __wcscpy_alias(__dest, __src);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcpcpy_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcpcpy_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __asm__("wcpcpy") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpcpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpcpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__dest, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcpcpy_chk(__dest, __src, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __wcpcpy_alias(__dest, __src);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcsncpy_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcsncpy_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __asm__("wcsncpy") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcsncpy_chk_warn(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n , size_t __destlen )  __asm__("__wcsncpy_chk") __attribute__((__warning__("wcsncpy called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__dest, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcsncpy_chk(__dest, __src, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__dest, 1);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__dest, 1);
      tmp___2 = __wcsncpy_chk_warn(__dest, __src, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wcsncpy_alias(__dest, __src, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcpncpy_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcpncpy_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __asm__("wcpncpy") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcpncpy_chk_warn(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n , size_t __destlen )  __asm__("__wcpncpy_chk") __attribute__((__warning__("wcpncpy called with length bigger than size of destination buffer"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcpncpy)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__dest, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcpncpy_chk(__dest, __src, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
    tmp___3 = __builtin_object_size((void *)__dest, 1);
    if (__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__dest, 1);
      tmp___2 = __wcpncpy_chk_warn(__dest, __src, __n, tmp___1 / sizeof(wchar_t ));
      return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wcpncpy_alias(__dest, __src, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___5);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcscat_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcscat_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __asm__("wcscat") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcscat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__dest, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcscat_chk(__dest, __src, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __wcscat_alias(__dest, __src);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) wchar_t *__wcsncat_chk(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n , size_t __destlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wchar_t *__wcsncat_alias(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __asm__("wcsncat") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n )  __attribute__((__leaf__)) ;
__inline extern wchar_t __attribute__((__gnu_inline__, __artificial__))  * __attribute__((__leaf__)) ( __attribute__((__always_inline__)) wcsncat)(wchar_t * __restrict  __dest , wchar_t const   * __restrict  __src , size_t __n ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__dest, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__dest, 1);
    tmp___0 = __wcsncat_chk(__dest, __src, __n, tmp / sizeof(wchar_t ));
    return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___0);
  } else {

  }
  tmp___2 = __wcsncat_alias(__dest, __src, __n);
  return ((wchar_t __attribute__((__gnu_inline__, __artificial__))  */* __attribute__((__leaf__)) */)tmp___2);
}
}
extern  __attribute__((__nothrow__)) int __swprintf_chk(wchar_t * __restrict  __s , size_t __n , int __flag , size_t __s_len , wchar_t const   * __restrict  __format  , ...)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int __swprintf_alias(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt  , ...)  __asm__("swprintf") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) swprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt  , ...)  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) swprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt  , ...) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__s, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __swprintf_chk(__s, __n, 1, tmp / sizeof(wchar_t ), __fmt, __builtin_va_arg_pack());
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
  } else {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __swprintf_chk(__s, __n, 1, tmp / sizeof(wchar_t ), __fmt, __builtin_va_arg_pack());
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
  }
  tmp___2 = __swprintf_alias(__s, __n, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
}
}
extern  __attribute__((__nothrow__)) int __vswprintf_chk(wchar_t * __restrict  __s , size_t __n , int __flag , size_t __s_len , wchar_t const   * __restrict  __format , __gnuc_va_list __arg )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int __vswprintf_alias(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap )  __asm__("vswprintf") __attribute__((__leaf__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vswprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap )  __attribute__((__leaf__)) ;
__inline extern int __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vswprintf)(wchar_t * __restrict  __s , size_t __n , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;

  {
  tmp___1 = __builtin_object_size((void *)__s, 1);
  if (tmp___1 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __vswprintf_chk(__s, __n, 1, tmp / sizeof(wchar_t ), __fmt, __ap);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
  } else {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __vswprintf_chk(__s, __n, 1, tmp / sizeof(wchar_t ), __fmt, __ap);
    return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
  }
  tmp___2 = __vswprintf_alias(__s, __n, __fmt, __ap);
  return ((int __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
}
}
extern int __fwprintf_chk(__FILE * __restrict  __stream , int __flag , wchar_t const   * __restrict  __format  , ...) ;
extern int __wprintf_chk(int __flag , wchar_t const   * __restrict  __format  , ...) ;
extern int __vfwprintf_chk(__FILE * __restrict  __stream , int __flag , wchar_t const   * __restrict  __format , __gnuc_va_list __ap ) ;
extern int __vwprintf_chk(int __flag , wchar_t const   * __restrict  __format , __gnuc_va_list __ap ) ;
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wprintf)(wchar_t const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __wprintf_chk(1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) fwprintf)(__FILE * __restrict  __stream , wchar_t const   * __restrict  __fmt  , ...) 
{ int tmp ;

  {
  tmp = __fwprintf_chk(__stream, 1, __fmt, __builtin_va_arg_pack());
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vwprintf)(wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vwprintf_chk(1, __fmt, __ap);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) vfwprintf)(__FILE * __restrict  __stream , wchar_t const   * __restrict  __fmt , __gnuc_va_list __ap ) 
{ int tmp ;

  {
  tmp = __vfwprintf_chk(__stream, 1, __fmt, __ap);
  return ((int __attribute__((__gnu_inline__, __artificial__))  )tmp);
}
}
extern wchar_t *__fgetws_chk(wchar_t * __restrict  __s , size_t __size , int __n , __FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern wchar_t *__fgetws_alias(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream )  __asm__("fgetws") __attribute__((__warn_unused_result__)) ;
extern wchar_t *__fgetws_chk_warn(wchar_t * __restrict  __s , size_t __size , int __n , __FILE * __restrict  __stream )  __asm__("__fgetws_chk") __attribute__((__warning__("fgetws called with bigger size than length of destination buffer"), __warn_unused_result__)) ;
__inline extern wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgetws)(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __fgetws_chk(__s, tmp / sizeof(wchar_t ), __n, __stream);
    return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s, 1);
    if ((unsigned long )__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s, 1);
      tmp___2 = __fgetws_chk_warn(__s, tmp___1 / sizeof(wchar_t ), __n, __stream);
      return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __fgetws_alias(__s, __n, __stream);
  return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___5);
}
}
extern wchar_t *__fgetws_unlocked_chk(wchar_t * __restrict  __s , size_t __size , int __n , __FILE * __restrict  __stream )  __attribute__((__warn_unused_result__)) ;
extern wchar_t *__fgetws_unlocked_alias(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream )  __asm__("fgetws_unlocked") __attribute__((__warn_unused_result__)) ;
extern wchar_t *__fgetws_unlocked_chk_warn(wchar_t * __restrict  __s , size_t __size , int __n , __FILE * __restrict  __stream )  __asm__("__fgetws_unlocked_chk") __attribute__((__warning__("fgetws_unlocked called with bigger size than length of destination buffer"), __warn_unused_result__)) ;
__inline extern wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *( __attribute__((__always_inline__)) fgetws_unlocked)(wchar_t * __restrict  __s , int __n , __FILE * __restrict  __stream ) 
{ unsigned long tmp ;
  wchar_t *tmp___0 ;
  unsigned long tmp___1 ;
  wchar_t *tmp___2 ;
  unsigned long tmp___3 ;
  unsigned long tmp___4 ;
  wchar_t *tmp___5 ;

  {
  tmp___4 = __builtin_object_size((void *)__s, 1);
  if (tmp___4 != 4294967295UL) {
    tmp = __builtin_object_size((void *)__s, 1);
    tmp___0 = __fgetws_unlocked_chk(__s, tmp / sizeof(wchar_t ), __n, __stream);
    return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___0);
    tmp___3 = __builtin_object_size((void *)__s, 1);
    if ((unsigned long )__n > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__s, 1);
      tmp___2 = __fgetws_unlocked_chk_warn(__s, tmp___1 / sizeof(wchar_t ), __n, __stream);
      return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __fgetws_unlocked_alias(__s, __n, __stream);
  return ((wchar_t __attribute__((__warn_unused_result__, __gnu_inline__, __artificial__))  *)tmp___5);
}
}
extern  __attribute__((__nothrow__)) size_t __wcrtomb_chk(char * __restrict  __s , wchar_t __wchar , mbstate_t * __restrict  __p , size_t __buflen )  __attribute__((__warn_unused_result__, __leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcrtomb_alias(char * __restrict  __s , wchar_t __wchar , mbstate_t * __restrict  __ps )  __asm__("wcrtomb") __attribute__((__warn_unused_result__, __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcrtomb)(char * __restrict  __s , wchar_t __wchar , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__warn_unused_result__, __leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcrtomb)(char * __restrict  __s , wchar_t __wchar , mbstate_t * __restrict  __ps ) 
{ unsigned long tmp ;
  size_t tmp___0 ;
  unsigned long tmp___1 ;
  unsigned long tmp___2 ;
  size_t tmp___3 ;

  {
  tmp___1 = __builtin_object_size((void *)__s, 1);
  if (tmp___1 != 4294967295UL) {
    tmp___2 = __builtin_object_size((void *)__s, 1);
    if (16UL > tmp___2) {
      tmp = __builtin_object_size((void *)__s, 1);
      tmp___0 = __wcrtomb_chk(__s, __wchar, __ps, tmp);
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    } else {

    }
  } else {

  }
  tmp___3 = __wcrtomb_alias(__s, __wchar, __ps);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___3);
}
}
extern  __attribute__((__nothrow__)) size_t __mbsrtowcs_chk(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbsrtowcs_alias(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __asm__("mbsrtowcs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbsrtowcs_chk_warn(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __asm__("__mbsrtowcs_chk") __attribute__((__warning__("mbsrtowcs called with dst buffer smaller than len * sizeof (wchar_t)"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps ) 
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
    tmp___0 = __mbsrtowcs_chk(__dst, __src, __len, __ps, tmp / sizeof(wchar_t ));
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __mbsrtowcs_chk_warn(__dst, __src, __len, __ps, tmp___1 / sizeof(wchar_t ));
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __mbsrtowcs_alias(__dst, __src, __len, __ps);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) size_t __wcsrtombs_chk(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcsrtombs_alias(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __asm__("wcsrtombs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcsrtombs_chk_warn(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __asm__("__wcsrtombs_chk") __attribute__((__warning__("wcsrtombs called with dst buffer smaller than len"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __len , mbstate_t * __restrict  __ps ) 
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
    tmp___0 = __wcsrtombs_chk(__dst, __src, __len, __ps, tmp);
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __wcsrtombs_chk_warn(__dst, __src, __len, __ps, tmp___1);
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wcsrtombs_alias(__dst, __src, __len, __ps);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) size_t __mbsnrtowcs_chk(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbsnrtowcs_alias(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps )  __asm__("mbsnrtowcs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __mbsnrtowcs_chk_warn(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __asm__("__mbsnrtowcs_chk") __attribute__((__warning__("mbsnrtowcs called with dst buffer smaller than len * sizeof (wchar_t)"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsnrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) mbsnrtowcs)(wchar_t * __restrict  __dst , char const   ** __restrict  __src , size_t __nmc , size_t __len , mbstate_t * __restrict  __ps ) 
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
    tmp___0 = __mbsnrtowcs_chk(__dst, __src, __nmc, __len, __ps, tmp / sizeof(wchar_t ));
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3 / sizeof(wchar_t )) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __mbsnrtowcs_chk_warn(__dst, __src, __nmc, __len, __ps, tmp___1 / sizeof(wchar_t ));
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __mbsnrtowcs_alias(__dst, __src, __nmc, __len, __ps);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) size_t __wcsnrtombs_chk(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcsnrtombs_alias(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps )  __asm__("wcsnrtombs") __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) size_t __wcsnrtombs_chk_warn(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps , size_t __dstlen )  __asm__("__wcsnrtombs_chk") __attribute__((__warning__("wcsnrtombs called with dst buffer smaller than len"), __leaf__)) ;
__inline extern  __attribute__((__nothrow__)) size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsnrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps )  __attribute__((__leaf__)) ;
__inline extern size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  ( __attribute__((__always_inline__)) wcsnrtombs)(char * __restrict  __dst , wchar_t const   ** __restrict  __src , size_t __nwc , size_t __len , mbstate_t * __restrict  __ps ) 
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
    tmp___0 = __wcsnrtombs_chk(__dst, __src, __nwc, __len, __ps, tmp);
    return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___0);
    tmp___3 = __builtin_object_size((void *)__dst, 1);
    if (__len > tmp___3) {
      tmp___1 = __builtin_object_size((void *)__dst, 1);
      tmp___2 = __wcsnrtombs_chk_warn(__dst, __src, __nwc, __len, __ps, tmp___1);
      return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___2);
    } else {

    }
  } else {

  }
  tmp___5 = __wcsnrtombs_alias(__dst, __src, __nwc, __len, __ps);
  return ((unsigned long __attribute__((__leaf__, __gnu_inline__, __artificial__))  )tmp___5);
}
}
extern  __attribute__((__nothrow__)) int iswalnum(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int iswalpha(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int iswupper(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wctype_t wctype(char const   *__property )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) int iswctype(wint_t __wc , wctype_t __desc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wint_t towlower(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) wint_t towupper(wint_t __wc )  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item )  __attribute__((__leaf__)) ;
extern int regcomp(regex_t * __restrict  __preg , char const   * __restrict  __pattern , int __cflags ) ;
extern int regexec(regex_t const   * __restrict  __preg , char const   * __restrict  __string , size_t __nmatch , regmatch_t * __restrict  __pmatch , int __eflags ) ;
extern void regfree(regex_t *__preg ) ;
struct dfa *dfaalloc(void) ;
struct dfamust *dfamusts(struct dfa  const  *d ) ;
void dfasyntax(reg_syntax_t bits , int fold , unsigned char eol ) ;
void dfacomp(char const   *s , size_t len , struct dfa *d , int searchflag ) ;
char *dfaexec(struct dfa *d , char const   *begin , char *end , int newline___0 , int *count , int *backref ) ;
void dfafree(struct dfa *d ) ;
void dfainit(struct dfa *d ) ;
void dfaparse(char const   *s , size_t len , struct dfa *d ) ;
void dfaanalyze(struct dfa *d , int searchflag ) ;
void dfastate(int s , struct dfa *d , int *trans ) ;
extern void dfawarn(char const   * ) ;
extern  __attribute__((__noreturn__)) void dfaerror(char const   * ) ;
extern _Bool hard_locale(int  ) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void *xmalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern void *xzalloc(size_t s )  __attribute__((__malloc__, __alloc_size__(1))) ;
extern void *xcalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
extern void *xrealloc(void *p , size_t s )  __attribute__((__alloc_size__(2))) ;
__inline static void *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
__inline static void *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__, __alloc_size__(1,2))) ;
__inline static void *xnmalloc(size_t n , size_t s ) 
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
  return (tmp___0);
}
}
__inline static void *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
__inline static void *xnrealloc(void *p , size_t n , size_t s )  __attribute__((__alloc_size__(2,3))) ;
__inline static void *xnrealloc(void *p , size_t n , size_t s ) 
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
  return (tmp___0);
}
}
__inline static void *x2nrealloc(void *p , size_t *pn , size_t s ) 
{ size_t n ;
  void *tmp ;

  {
  n = *pn;
  if (! p) {
    if (! n) {
      n = 64UL / s;
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
  return (tmp);
}
}
static void dfamust(struct dfa *d ) ;
static void regexp(void) ;
static int tstbit(unsigned int b , int *c ) 
{ 

  {
  return (*(c + (unsigned long )b / (8UL * sizeof(int ))) & (1 << (unsigned long )b % (8UL * sizeof(int ))));
}
}
static void setbit(unsigned int b , int *c ) 
{ 

  {
  *(c + (unsigned long )b / (8UL * sizeof(int ))) |= 1 << (unsigned long )b % (8UL * sizeof(int ));
  return;
}
}
static void clrbit(unsigned int b , int *c ) 
{ 

  {
  *(c + (unsigned long )b / (8UL * sizeof(int ))) &= ~ (1 << (unsigned long )b % (8UL * sizeof(int )));
  return;
}
}
static void copyset(int *src , int *dst ) 
{ 

  {
  memcpy((void */* __restrict  */)dst, (void const   */* __restrict  */)src, sizeof(charclass ));
  return;
}
}
static void zeroset(int *s ) 
{ 

  {
  memset((void *)s, 0, sizeof(charclass ));
  return;
}
}
static void notset(int *s ) 
{ int i ;

  {
  i = 0;
  while ((unsigned long )i < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
    *(s + i) = ~ *(s + i);
    i ++;
  }
  return;
}
}
static int equal(int *s1 , int *s2 ) 
{ int tmp ;

  {
  tmp = memcmp((void const   *)s1, (void const   *)s2, sizeof(charclass ));
  return (tmp == 0);
}
}
static struct dfa *dfa  ;
static int charclass_index(int *s ) 
{ int i ;
  int tmp ;
  size_t new_nalloc ;
  void *tmp___0 ;

  {
  i = 0;
  while (i < dfa->cindex) {
    tmp = equal(s, *(dfa->charclasses + i));
    if (tmp) {
      return (i);
    } else {

    }
    i ++;
  }
  while (1) {
    if (dfa->calloc <= dfa->cindex) {
      new_nalloc = (unsigned long )(dfa->cindex + ! dfa->charclasses);
      tmp___0 = x2nrealloc((void *)dfa->charclasses, & new_nalloc, sizeof(charclass ));
      dfa->charclasses = (charclass *)tmp___0;
      dfa->calloc = (int )new_nalloc;
    } else {

    }
    break;
  }
  (dfa->cindex) ++;
  copyset(s, *(dfa->charclasses + i));
  return (i);
}
}
static reg_syntax_t syntax_bits  ;
static reg_syntax_t syntax_bits_set  ;
static int case_fold  ;
static unsigned char eolbyte  ;
void dfasyntax(reg_syntax_t bits , int fold , unsigned char eol ) 
{ 

  {
  syntax_bits_set = 1UL;
  syntax_bits = bits;
  case_fold = fold;
  eolbyte = eol;
  return;
}
}
static _Bool setbit_wc(wint_t wc , int *c ) 
{ int b ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp ;

  {
  tmp = wctob(wc);
  b = (int )tmp;
  if (b == -1) {
    return ((_Bool)0);
  } else {

  }
  setbit((unsigned int )b, c);
  return ((_Bool)1);
}
}
static void setbit_c(int b , int *c ) 
{ size_t tmp ;
  wint_t __attribute__((__leaf__, __gnu_inline__))  tmp___0 ;

  {
  tmp = __ctype_get_mb_cur_max();
  if (tmp > 1UL) {
    tmp___0 = btowc(b);
    if (tmp___0 == (unsigned int __attribute__((__leaf__, __gnu_inline__))  )4294967295U) {
      return;
    } else {

    }
  } else {

  }
  setbit((unsigned int )b, c);
  return;
}
}
static void setbit_case_fold_c(int b , int *c ) 
{ wint_t wc ;
  wint_t __attribute__((__leaf__, __gnu_inline__))  tmp ;
  wint_t tmp___1 ;
  wint_t tmp___2 ;
  wint_t tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int __res ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___8 ;
  __int32_t const   **tmp___9 ;
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___11 ;
  __int32_t const   **tmp___12 ;
  int tmp___13 ;
  unsigned short const   **tmp___14 ;
  unsigned short const   **tmp___15 ;
  size_t tmp___16 ;

  {
  tmp___16 = __ctype_get_mb_cur_max();
  if (tmp___16 > 1UL) {
    tmp = btowc(b);
    wc = (unsigned int )tmp;
    if (wc == 4294967295U) {
      return;
    } else {

    }
    setbit((unsigned int )b, c);
    if (case_fold) {
      tmp___5 = iswalpha(wc);
      if (tmp___5) {
        tmp___4 = iswupper(wc);
        if (tmp___4) {
          tmp___1 = towlower(wc);
          tmp___3 = tmp___1;
        } else {
          tmp___2 = towupper(wc);
          tmp___3 = tmp___2;
        }
        setbit_wc(tmp___3, c);
      } else {

      }
    } else {

    }
  } else {
    setbit((unsigned int )b, c);
    if (case_fold) {
      tmp___15 = __ctype_b_loc();
      if ((int const   )*(*tmp___15 + b) & 1024) {
        tmp___14 = __ctype_b_loc();
        if ((int const   )*(*tmp___14 + b) & 256) {
          if (sizeof(b) > 1UL) {
            tmp___8 = tolower(b);
            __res = (int )tmp___8;
          } else {
            tmp___9 = __ctype_tolower_loc();
            __res = (int )*(*tmp___9 + b);
          }
          tmp___13 = __res;
        } else {
          if (sizeof(b) > 1UL) {
            tmp___11 = toupper(b);
            __res___0 = (int )tmp___11;
          } else {
            tmp___12 = __ctype_toupper_loc();
            __res___0 = (int )*(*tmp___12 + b);
          }
          tmp___13 = __res___0;
        }
        setbit_c(tmp___13, c);
      } else {

      }
    } else {

    }
  }
  return;
}
}
__inline static int using_utf8(void) ;
static int utf8  =    -1;
__inline static int using_utf8(void) 
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
  if (utf8 == -1) {
    if (0) {
      tmp___26 = nl_langinfo(14);
      __s1_len = __builtin_strlen((char const   *)tmp___26);
      __s2_len = __builtin_strlen("UTF-8");
      tmp___27 = nl_langinfo(14);
      tmp___28 = nl_langinfo(14);
      if ((unsigned long )((void const   *)(tmp___27 + 1)) - (unsigned long )((void const   *)tmp___28) == 1UL) {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)("UTF-8" + 1)) - (unsigned long )((void const   *)"UTF-8") == 1UL)) {
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
        tmp___4 = nl_langinfo(14);
        tmp___5 = __builtin_strcmp((char const   *)tmp___4, "UTF-8");
        tmp___24 = tmp___5;
      } else {
        tmp___22 = nl_langinfo(14);
        tmp___23 = __builtin_strcmp((char const   *)tmp___22, "UTF-8");
        tmp___24 = tmp___23;
      }
    } else {
      tmp___22 = nl_langinfo(14);
      tmp___23 = __builtin_strcmp((char const   *)tmp___22, "UTF-8");
      tmp___24 = tmp___23;
    }
    utf8 = tmp___24 == 0;
  } else {

  }
  return (utf8);
}
}
static char const   *lexptr  ;
static int lexleft  ;
static token lasttok  ;
static int laststart  ;
static int parens  ;
static int minrep  ;
static int maxrep  ;
static int hard_LC_COLLATE  ;
static int cur_mb_len  =    1;
static mbstate_t mbs  ;
static wchar_t wctok  ;
static unsigned char *mblen_buf  ;
static wchar_t *inputwcs  ;
static unsigned char const   *buf_begin  ;
static unsigned char const   *buf_end  ;
static struct dfa_ctype  const  prednames[13]  = 
  {      {"alpha", & isalpha, (_Bool)0}, 
        {"upper", & isupper, (_Bool)0}, 
        {"lower", & islower, (_Bool)0}, 
        {"digit", & isdigit, (_Bool)1}, 
        {"xdigit", & isxdigit, (_Bool)1}, 
        {"space", & isspace, (_Bool)0}, 
        {"punct", & ispunct, (_Bool)0}, 
        {"alnum", & isalnum, (_Bool)0}, 
        {"print", & isprint, (_Bool)0}, 
        {"graph", & isgraph, (_Bool)0}, 
        {"cntrl", & iscntrl, (_Bool)0}, 
        {"blank", & isblank, (_Bool)0}, 
        {(char const   *)((void *)0), (predicate *)((void *)0), (_Bool)0}};
static struct dfa_ctype  const  *find_pred(char const   *str ) 
{ unsigned int i ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___0 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  i = 0U;
  while (prednames[i].name) {
    if (0) {
      __s1_len = __builtin_strlen(str);
      __s2_len = __builtin_strlen((char const   *)prednames[i].name);
      if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)str) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)(prednames[i].name + 1)) - (unsigned long )((void const   *)prednames[i].name) == 1UL)) {
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
        tmp___0 = __builtin_strcmp(str, (char const   *)prednames[i].name);
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp(str, (char const   *)prednames[i].name);
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp(str, (char const   *)prednames[i].name);
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      break;
    } else {

    }
    i ++;
  }
  return (& prednames[i]);
}
}
static charclass zeroclass  ;
static token parse_bracket_exp(void) 
{ int invert ;
  int c ;
  int c1 ;
  int c2 ;
  charclass ccl ;
  int colon_warning_state ;
  wint_t wc ;
  wint_t wc1 ;
  wint_t wc2 ;
  struct mb_char_classes *work_mbc ;
  int chars_al ;
  int range_sts_al ;
  int range_ends_al ;
  int ch_classes_al ;
  int equivs_al ;
  int coll_elems_al ;
  size_t new_nalloc ;
  void *tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  wchar_t _wc ;
  size_t tmp___4 ;
  char const   *tmp___5 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  wchar_t _wc___0 ;
  size_t tmp___9 ;
  char const   *tmp___10 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___11 ;
  char str[128] ;
  char *tmp___12 ;
  char *tmp___13 ;
  wchar_t _wc___1 ;
  size_t tmp___14 ;
  char const   *tmp___15 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___16 ;
  size_t len ;
  char *tmp___17 ;
  char *tmp___18 ;
  wchar_t _wc___2 ;
  size_t tmp___19 ;
  char const   *tmp___20 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___21 ;
  size_t tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  wchar_t _wc___3 ;
  size_t tmp___25 ;
  char const   *tmp___26 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___27 ;
  char const   *class ;
  char const   *tmp___42 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___44 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___51 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  struct dfa_ctype  const  *pred ;
  struct dfa_ctype  const  *tmp___57 ;
  char *tmp___58 ;
  wctype_t wt ;
  wctype_t tmp___59 ;
  void *tmp___60 ;
  void *tmp___61 ;
  void *tmp___62 ;
  size_t new_nalloc___0 ;
  void *tmp___63 ;
  int tmp___64 ;
  size_t tmp___65 ;
  int tmp___66 ;
  char *elem ;
  void *tmp___67 ;
  void *tmp___68 ;
  void *tmp___69 ;
  void *tmp___70 ;
  void *tmp___71 ;
  void *tmp___72 ;
  size_t new_nalloc___1 ;
  void *tmp___73 ;
  int tmp___74 ;
  void *tmp___75 ;
  void *tmp___76 ;
  void *tmp___77 ;
  size_t new_nalloc___2 ;
  void *tmp___78 ;
  int tmp___79 ;
  char *tmp___80 ;
  char *tmp___81 ;
  wchar_t _wc___4 ;
  size_t tmp___82 ;
  char const   *tmp___83 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___84 ;
  size_t tmp___85 ;
  char *tmp___86 ;
  char *tmp___87 ;
  wchar_t _wc___5 ;
  size_t tmp___88 ;
  char const   *tmp___89 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___90 ;
  char *tmp___91 ;
  char *tmp___92 ;
  wchar_t _wc___6 ;
  size_t tmp___93 ;
  char const   *tmp___94 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___95 ;
  char *tmp___96 ;
  char *tmp___97 ;
  wchar_t _wc___7 ;
  size_t tmp___98 ;
  char const   *tmp___99 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___100 ;
  char *tmp___101 ;
  char *tmp___102 ;
  wchar_t _wc___8 ;
  size_t tmp___103 ;
  char const   *tmp___104 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___105 ;
  void *tmp___106 ;
  void *tmp___107 ;
  void *tmp___108 ;
  void *tmp___109 ;
  void *tmp___110 ;
  void *tmp___111 ;
  size_t new_nalloc___3 ;
  void *tmp___112 ;
  size_t new_nalloc___4 ;
  void *tmp___113 ;
  wint_t tmp___114 ;
  int tmp___115 ;
  wint_t tmp___116 ;
  int __res ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___118 ;
  __int32_t const   **tmp___119 ;
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___121 ;
  __int32_t const   **tmp___122 ;
  regex_t re ;
  char pattern[6] ;
  char subject[2] ;
  unsigned short const   **tmp___123 ;
  int tmp___124 ;
  size_t tmp___125 ;
  char *tmp___126 ;
  char *tmp___127 ;
  wchar_t _wc___9 ;
  size_t tmp___128 ;
  char const   *tmp___129 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___130 ;
  int tmp___131 ;
  size_t new_nalloc___5 ;
  void *tmp___132 ;
  int tmp___133 ;
  _Bool tmp___134 ;
  int tmp___135 ;
  size_t new_nalloc___6 ;
  void *tmp___136 ;
  int tmp___137 ;
  _Bool tmp___138 ;
  size_t tmp___139 ;
  char *tmp___140 ;
  int tmp___142 ;
  int tmp___143 ;
  size_t tmp___144 ;
  size_t tmp___145 ;
  int tmp___146 ;

  {
  chars_al = 1;
  range_ends_al = 0;
  range_sts_al = range_ends_al;
  coll_elems_al = 0;
  equivs_al = coll_elems_al;
  ch_classes_al = equivs_al;
  tmp___1 = __ctype_get_mb_cur_max();
  if (tmp___1 > 1UL) {
    while (1) {
      if (dfa->mbcsets_alloc <= dfa->nmbcsets + 1) {
        new_nalloc = (unsigned long )((dfa->nmbcsets + 1) + ! dfa->mbcsets);
        tmp = x2nrealloc((void *)dfa->mbcsets, & new_nalloc, sizeof(struct mb_char_classes ));
        dfa->mbcsets = (struct mb_char_classes *)tmp;
        dfa->mbcsets_alloc = (int )new_nalloc;
      } else {

      }
      break;
    }
    tmp___0 = dfa->nmbcsets;
    (dfa->nmbcsets) ++;
    work_mbc = dfa->mbcsets + tmp___0;
    memset((void *)work_mbc, 0, sizeof(*work_mbc));
  } else {
    work_mbc = (struct mb_char_classes *)((void *)0);
  }
  memset((void *)(ccl), 0, sizeof(ccl));
  while (1) {
    if (! lexleft) {
      tmp___3 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
      if ((unsigned long )tmp___3 != (unsigned long )((char *)0)) {
        tmp___2 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
        dfaerror((char const   *)tmp___2);
      } else {
        lasttok = (enum __anonenum_token_32 )-1;
        return (lasttok);
      }
    } else {
      tmp___4 = mbrtowc((wchar_t */* __restrict  */)(& _wc), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
      cur_mb_len = (int )tmp___4;
      if (cur_mb_len <= 0) {
        cur_mb_len = 1;
        lexleft --;
        tmp___5 = lexptr;
        lexptr ++;
        c = (int )((unsigned char )*tmp___5);
        wc = (unsigned int )c;
      } else {
        lexptr += cur_mb_len;
        lexleft -= cur_mb_len;
        wc = (unsigned int )_wc;
        tmp___6 = wctob(wc);
        c = (int )tmp___6;
      }
    }
    break;
  }
  if (c == 94) {
    while (1) {
      if (! lexleft) {
        tmp___8 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
        if ((unsigned long )tmp___8 != (unsigned long )((char *)0)) {
          tmp___7 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
          dfaerror((char const   *)tmp___7);
        } else {
          lasttok = (enum __anonenum_token_32 )-1;
          return (lasttok);
        }
      } else {
        tmp___9 = mbrtowc((wchar_t */* __restrict  */)(& _wc___0), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
        cur_mb_len = (int )tmp___9;
        if (cur_mb_len <= 0) {
          cur_mb_len = 1;
          lexleft --;
          tmp___10 = lexptr;
          lexptr ++;
          c = (int )((unsigned char )*tmp___10);
          wc = (unsigned int )c;
        } else {
          lexptr += cur_mb_len;
          lexleft -= cur_mb_len;
          wc = (unsigned int )_wc___0;
          tmp___11 = wctob(wc);
          c = (int )tmp___11;
        }
      }
      break;
    }
    invert = 1;
  } else {
    invert = 0;
  }
  colon_warning_state = c == 58;
  while (1) {
    c1 = -1;
    colon_warning_state &= -3;
    if (c == 91) {
      if (syntax_bits & ((1UL << 1) << 1)) {
        while (1) {
          if (! lexleft) {
            tmp___13 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
            if ((unsigned long )tmp___13 != (unsigned long )((char *)0)) {
              tmp___12 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
              dfaerror((char const   *)tmp___12);
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___14 = mbrtowc((wchar_t */* __restrict  */)(& _wc___1), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___14;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___15 = lexptr;
              lexptr ++;
              c1 = (int )((unsigned char )*tmp___15);
              wc1 = (unsigned int )c1;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc1 = (unsigned int )_wc___1;
              tmp___16 = wctob(wc1);
              c1 = (int )tmp___16;
            }
          }
          break;
        }
        if (c1 == 58) {
          goto _L___10;
        } else {
          tmp___85 = __ctype_get_mb_cur_max();
          if (tmp___85 > 1UL) {
            if (c1 == 46) {
              goto _L___10;
            } else {
              if (c1 == 61) {
                _L___10: 
                len = 0UL;
                while (1) {
                  while (1) {
                    if (! lexleft) {
                      tmp___18 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                      if ((unsigned long )tmp___18 != (unsigned long )((char *)0)) {
                        tmp___17 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                        dfaerror((char const   *)tmp___17);
                      } else {
                        lasttok = (enum __anonenum_token_32 )-1;
                        return (lasttok);
                      }
                    } else {
                      tmp___19 = mbrtowc((wchar_t */* __restrict  */)(& _wc___2), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
                      cur_mb_len = (int )tmp___19;
                      if (cur_mb_len <= 0) {
                        cur_mb_len = 1;
                        lexleft --;
                        tmp___20 = lexptr;
                        lexptr ++;
                        c = (int )((unsigned char )*tmp___20);
                        wc = (unsigned int )c;
                      } else {
                        lexptr += cur_mb_len;
                        lexleft -= cur_mb_len;
                        wc = (unsigned int )_wc___2;
                        tmp___21 = wctob(wc);
                        c = (int )tmp___21;
                      }
                    }
                    break;
                  }
                  if (c == c1) {
                    if ((int const   )*lexptr == 93) {
                      break;
                    } else {
                      goto _L;
                    }
                  } else {
                    _L: 
                    if (lexleft == 0) {
                      break;
                    } else {

                    }
                  }
                  if (len < 128UL) {
                    tmp___22 = len;
                    len ++;
                    str[tmp___22] = (char )c;
                  } else {
                    str[0] = (char )'\000';
                  }
                }
                str[len] = (char )'\000';
                while (1) {
                  if (! lexleft) {
                    tmp___24 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                    if ((unsigned long )tmp___24 != (unsigned long )((char *)0)) {
                      tmp___23 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                      dfaerror((char const   *)tmp___23);
                    } else {
                      lasttok = (enum __anonenum_token_32 )-1;
                      return (lasttok);
                    }
                  } else {
                    tmp___25 = mbrtowc((wchar_t */* __restrict  */)(& _wc___3), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
                    cur_mb_len = (int )tmp___25;
                    if (cur_mb_len <= 0) {
                      cur_mb_len = 1;
                      lexleft --;
                      tmp___26 = lexptr;
                      lexptr ++;
                      c = (int )((unsigned char )*tmp___26);
                      wc = (unsigned int )c;
                    } else {
                      lexptr += cur_mb_len;
                      lexleft -= cur_mb_len;
                      wc = (unsigned int )_wc___3;
                      tmp___27 = wctob(wc);
                      c = (int )tmp___27;
                    }
                  }
                  break;
                }
                if (c1 == 58) {
                  if (case_fold) {
                    if (0) {
                      __s1_len___1 = __builtin_strlen((char const   *)(str));
                      __s2_len___1 = __builtin_strlen("upper");
                      if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                        goto _L___5;
                      } else {
                        if (__s1_len___1 >= 4UL) {
                          _L___5: 
                          if (! ((unsigned long )((void const   *)("upper" + 1)) - (unsigned long )((void const   *)"upper") == 1UL)) {
                            tmp___49 = 1;
                          } else {
                            if (__s2_len___1 >= 4UL) {
                              tmp___49 = 1;
                            } else {
                              tmp___49 = 0;
                            }
                          }
                        } else {
                          tmp___49 = 0;
                        }
                      }
                      if (tmp___49) {
                        tmp___44 = __builtin_strcmp((char const   *)(str), "upper");
                        tmp___48 = tmp___44;
                      } else {
                        tmp___47 = __builtin_strcmp((char const   *)(str), "upper");
                        tmp___48 = tmp___47;
                      }
                    } else {
                      tmp___47 = __builtin_strcmp((char const   *)(str), "upper");
                      tmp___48 = tmp___47;
                    }
                    if (tmp___48 == 0) {
                      tmp___42 = "alpha";
                    } else {
                      if (0) {
                        __s1_len___2 = __builtin_strlen((char const   *)(str));
                        __s2_len___2 = __builtin_strlen("lower");
                        if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
                          goto _L___7;
                        } else {
                          if (__s1_len___2 >= 4UL) {
                            _L___7: 
                            if (! ((unsigned long )((void const   *)("lower" + 1)) - (unsigned long )((void const   *)"lower") == 1UL)) {
                              tmp___56 = 1;
                            } else {
                              if (__s2_len___2 >= 4UL) {
                                tmp___56 = 1;
                              } else {
                                tmp___56 = 0;
                              }
                            }
                          } else {
                            tmp___56 = 0;
                          }
                        }
                        if (tmp___56) {
                          tmp___51 = __builtin_strcmp((char const   *)(str), "lower");
                          tmp___55 = tmp___51;
                        } else {
                          tmp___54 = __builtin_strcmp((char const   *)(str), "lower");
                          tmp___55 = tmp___54;
                        }
                      } else {
                        tmp___54 = __builtin_strcmp((char const   *)(str), "lower");
                        tmp___55 = tmp___54;
                      }
                      if (tmp___55 == 0) {
                        tmp___42 = "alpha";
                      } else {
                        tmp___42 = (char const   *)(str);
                      }
                    }
                  } else {
                    tmp___42 = (char const   *)(str);
                  }
                  class = tmp___42;
                  tmp___57 = find_pred(class);
                  pred = tmp___57;
                  if (! pred) {
                    tmp___58 = dcgettext((char const   *)((void *)0), "invalid character class", 5);
                    dfaerror((char const   *)tmp___58);
                  } else {

                  }
                  tmp___65 = __ctype_get_mb_cur_max();
                  if (tmp___65 > 1UL) {
                    if (! pred->single_byte_only) {
                      tmp___59 = wctype(class);
                      wt = tmp___59;
                      if (ch_classes_al == 0) {
                        if (sizeof(wctype_t ) == 1UL) {
                          ch_classes_al ++;
                          tmp___60 = xmalloc((unsigned long )ch_classes_al);
                          tmp___62 = tmp___60;
                        } else {
                          ch_classes_al ++;
                          tmp___61 = xnmalloc((unsigned long )ch_classes_al, sizeof(wctype_t ));
                          tmp___62 = tmp___61;
                        }
                        work_mbc->ch_classes = (wctype_t *)tmp___62;
                      } else {

                      }
                      while (1) {
                        if (ch_classes_al <= work_mbc->nch_classes + 1) {
                          new_nalloc___0 = (unsigned long )((work_mbc->nch_classes + 1) + ! work_mbc->ch_classes);
                          tmp___63 = x2nrealloc((void *)work_mbc->ch_classes, & new_nalloc___0, sizeof(wctype_t ));
                          work_mbc->ch_classes = (wctype_t *)tmp___63;
                          ch_classes_al = (int )new_nalloc___0;
                        } else {

                        }
                        break;
                      }
                      tmp___64 = work_mbc->nch_classes;
                      (work_mbc->nch_classes) ++;
                      *(work_mbc->ch_classes + tmp___64) = wt;
                    } else {

                    }
                  } else {

                  }
                  c2 = 0;
                  while (c2 < 1 << 8) {
                    tmp___66 = (*(pred->func))(c2);
                    if (tmp___66) {
                      setbit_case_fold_c(c2, ccl);
                    } else {

                    }
                    c2 ++;
                  }
                } else {
                  if (c1 == 61) {
                    goto _L___8;
                  } else {
                    if (c1 == 46) {
                      _L___8: 
                      if (sizeof(char ) == 1UL) {
                        tmp___67 = xmalloc(len + 1UL);
                        tmp___69 = tmp___67;
                      } else {
                        tmp___68 = xnmalloc(len + 1UL, sizeof(char ));
                        tmp___69 = tmp___68;
                      }
                      elem = (char *)tmp___69;
                      strncpy((char */* __restrict  */)elem, (char const   */* __restrict  */)(str), len + 1UL);
                      if (c1 == 61) {
                        if (equivs_al == 0) {
                          if (sizeof(char *) == 1UL) {
                            equivs_al ++;
                            tmp___70 = xmalloc((unsigned long )equivs_al);
                            tmp___72 = tmp___70;
                          } else {
                            equivs_al ++;
                            tmp___71 = xnmalloc((unsigned long )equivs_al, sizeof(char *));
                            tmp___72 = tmp___71;
                          }
                          work_mbc->equivs = (char **)tmp___72;
                        } else {

                        }
                        while (1) {
                          if (equivs_al <= work_mbc->nequivs + 1) {
                            new_nalloc___1 = (unsigned long )((work_mbc->nequivs + 1) + ! work_mbc->equivs);
                            tmp___73 = x2nrealloc((void *)work_mbc->equivs, & new_nalloc___1, sizeof(char *));
                            work_mbc->equivs = (char **)tmp___73;
                            equivs_al = (int )new_nalloc___1;
                          } else {

                          }
                          break;
                        }
                        tmp___74 = work_mbc->nequivs;
                        (work_mbc->nequivs) ++;
                        *(work_mbc->equivs + tmp___74) = elem;
                      } else {

                      }
                      if (c1 == 46) {
                        if (coll_elems_al == 0) {
                          if (sizeof(char *) == 1UL) {
                            coll_elems_al ++;
                            tmp___75 = xmalloc((unsigned long )coll_elems_al);
                            tmp___77 = tmp___75;
                          } else {
                            coll_elems_al ++;
                            tmp___76 = xnmalloc((unsigned long )coll_elems_al, sizeof(char *));
                            tmp___77 = tmp___76;
                          }
                          work_mbc->coll_elems = (char **)tmp___77;
                        } else {

                        }
                        while (1) {
                          if (coll_elems_al <= work_mbc->ncoll_elems + 1) {
                            new_nalloc___2 = (unsigned long )((work_mbc->ncoll_elems + 1) + ! work_mbc->coll_elems);
                            tmp___78 = x2nrealloc((void *)work_mbc->coll_elems, & new_nalloc___2, sizeof(char *));
                            work_mbc->coll_elems = (char **)tmp___78;
                            coll_elems_al = (int )new_nalloc___2;
                          } else {

                          }
                          break;
                        }
                        tmp___79 = work_mbc->ncoll_elems;
                        (work_mbc->ncoll_elems) ++;
                        *(work_mbc->coll_elems + tmp___79) = elem;
                      } else {

                      }
                    } else {

                    }
                  }
                }
                colon_warning_state |= 8;
                while (1) {
                  if (! lexleft) {
                    tmp___81 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                    if ((unsigned long )tmp___81 != (unsigned long )((char *)0)) {
                      tmp___80 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                      dfaerror((char const   *)tmp___80);
                    } else {
                      lasttok = (enum __anonenum_token_32 )-1;
                      return (lasttok);
                    }
                  } else {
                    tmp___82 = mbrtowc((wchar_t */* __restrict  */)(& _wc___4), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
                    cur_mb_len = (int )tmp___82;
                    if (cur_mb_len <= 0) {
                      cur_mb_len = 1;
                      lexleft --;
                      tmp___83 = lexptr;
                      lexptr ++;
                      c1 = (int )((unsigned char )*tmp___83);
                      wc1 = (unsigned int )c1;
                    } else {
                      lexptr += cur_mb_len;
                      lexleft -= cur_mb_len;
                      wc1 = (unsigned int )_wc___4;
                      tmp___84 = wctob(wc1);
                      c1 = (int )tmp___84;
                    }
                  }
                  break;
                }
                goto __Cont;
              } else {

              }
            }
          } else {

          }
        }
      } else {

      }
    } else {

    }
    if (c == 92) {
      if (syntax_bits & 1UL) {
        while (1) {
          if (! lexleft) {
            tmp___87 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
            if ((unsigned long )tmp___87 != (unsigned long )((char *)0)) {
              tmp___86 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
              dfaerror((char const   *)tmp___86);
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___88 = mbrtowc((wchar_t */* __restrict  */)(& _wc___5), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___88;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___89 = lexptr;
              lexptr ++;
              c = (int )((unsigned char )*tmp___89);
              wc = (unsigned int )c;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc = (unsigned int )_wc___5;
              tmp___90 = wctob(wc);
              c = (int )tmp___90;
            }
          }
          break;
        }
      } else {

      }
    } else {

    }
    if (c1 == -1) {
      while (1) {
        if (! lexleft) {
          tmp___92 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
          if ((unsigned long )tmp___92 != (unsigned long )((char *)0)) {
            tmp___91 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
            dfaerror((char const   *)tmp___91);
          } else {
            lasttok = (enum __anonenum_token_32 )-1;
            return (lasttok);
          }
        } else {
          tmp___93 = mbrtowc((wchar_t */* __restrict  */)(& _wc___6), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
          cur_mb_len = (int )tmp___93;
          if (cur_mb_len <= 0) {
            cur_mb_len = 1;
            lexleft --;
            tmp___94 = lexptr;
            lexptr ++;
            c1 = (int )((unsigned char )*tmp___94);
            wc1 = (unsigned int )c1;
          } else {
            lexptr += cur_mb_len;
            lexleft -= cur_mb_len;
            wc1 = (unsigned int )_wc___6;
            tmp___95 = wctob(wc1);
            c1 = (int )tmp___95;
          }
        }
        break;
      }
    } else {

    }
    if (c1 == 45) {
      while (1) {
        if (! lexleft) {
          tmp___97 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
          if ((unsigned long )tmp___97 != (unsigned long )((char *)0)) {
            tmp___96 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
            dfaerror((char const   *)tmp___96);
          } else {
            lasttok = (enum __anonenum_token_32 )-1;
            return (lasttok);
          }
        } else {
          tmp___98 = mbrtowc((wchar_t */* __restrict  */)(& _wc___7), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
          cur_mb_len = (int )tmp___98;
          if (cur_mb_len <= 0) {
            cur_mb_len = 1;
            lexleft --;
            tmp___99 = lexptr;
            lexptr ++;
            c2 = (int )((unsigned char )*tmp___99);
            wc2 = (unsigned int )c2;
          } else {
            lexptr += cur_mb_len;
            lexleft -= cur_mb_len;
            wc2 = (unsigned int )_wc___7;
            tmp___100 = wctob(wc2);
            c2 = (int )tmp___100;
          }
        }
        break;
      }
      if (c2 == 93) {
        lexptr -= cur_mb_len;
        lexleft += cur_mb_len;
      } else {

      }
    } else {

    }
    if (c1 == 45) {
      if (c2 != 93) {
        if (c2 == 92) {
          if (syntax_bits & 1UL) {
            while (1) {
              if (! lexleft) {
                tmp___102 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                if ((unsigned long )tmp___102 != (unsigned long )((char *)0)) {
                  tmp___101 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
                  dfaerror((char const   *)tmp___101);
                } else {
                  lasttok = (enum __anonenum_token_32 )-1;
                  return (lasttok);
                }
              } else {
                tmp___103 = mbrtowc((wchar_t */* __restrict  */)(& _wc___8), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
                cur_mb_len = (int )tmp___103;
                if (cur_mb_len <= 0) {
                  cur_mb_len = 1;
                  lexleft --;
                  tmp___104 = lexptr;
                  lexptr ++;
                  c2 = (int )((unsigned char )*tmp___104);
                  wc2 = (unsigned int )c2;
                } else {
                  lexptr += cur_mb_len;
                  lexleft -= cur_mb_len;
                  wc2 = (unsigned int )_wc___8;
                  tmp___105 = wctob(wc2);
                  c2 = (int )tmp___105;
                }
              }
              break;
            }
          } else {

          }
        } else {

        }
        tmp___125 = __ctype_get_mb_cur_max();
        if (tmp___125 > 1UL) {
          if (range_sts_al == 0) {
            if (sizeof(wchar_t ) == 1UL) {
              range_sts_al ++;
              tmp___106 = xmalloc((unsigned long )range_sts_al);
              tmp___108 = tmp___106;
            } else {
              range_sts_al ++;
              tmp___107 = xnmalloc((unsigned long )range_sts_al, sizeof(wchar_t ));
              tmp___108 = tmp___107;
            }
            work_mbc->range_sts = (wchar_t *)tmp___108;
            if (sizeof(wchar_t ) == 1UL) {
              range_ends_al ++;
              tmp___109 = xmalloc((unsigned long )range_ends_al);
              tmp___111 = tmp___109;
            } else {
              range_ends_al ++;
              tmp___110 = xnmalloc((unsigned long )range_ends_al, sizeof(wchar_t ));
              tmp___111 = tmp___110;
            }
            work_mbc->range_ends = (wchar_t *)tmp___111;
          } else {

          }
          while (1) {
            if (range_sts_al <= work_mbc->nranges + 1) {
              new_nalloc___3 = (unsigned long )((work_mbc->nranges + 1) + ! work_mbc->range_sts);
              tmp___112 = x2nrealloc((void *)work_mbc->range_sts, & new_nalloc___3, sizeof(wchar_t ));
              work_mbc->range_sts = (wchar_t *)tmp___112;
              range_sts_al = (int )new_nalloc___3;
            } else {

            }
            break;
          }
          while (1) {
            if (range_ends_al <= work_mbc->nranges + 1) {
              new_nalloc___4 = (unsigned long )((work_mbc->nranges + 1) + ! work_mbc->range_ends);
              tmp___113 = x2nrealloc((void *)work_mbc->range_ends, & new_nalloc___4, sizeof(wchar_t ));
              work_mbc->range_ends = (wchar_t *)tmp___113;
              range_ends_al = (int )new_nalloc___4;
            } else {

            }
            break;
          }
          if (case_fold) {
            tmp___114 = towlower(wc);
            *(work_mbc->range_sts + work_mbc->nranges) = (int )tmp___114;
          } else {
            *(work_mbc->range_sts + work_mbc->nranges) = (int )wc;
          }
          tmp___115 = work_mbc->nranges;
          (work_mbc->nranges) ++;
          if (case_fold) {
            tmp___116 = towlower(wc2);
            *(work_mbc->range_ends + tmp___115) = (int )tmp___116;
          } else {
            *(work_mbc->range_ends + tmp___115) = (int )wc2;
          }
        } else {
          c1 = c;
          if (case_fold) {
            if (sizeof(c1) > 1UL) {
              tmp___118 = tolower(c1);
              __res = (int )tmp___118;
            } else {
              tmp___119 = __ctype_tolower_loc();
              __res = (int )*(*tmp___119 + c1);
            }
            c1 = __res;
            if (sizeof(c2) > 1UL) {
              tmp___121 = tolower(c2);
              __res___0 = (int )tmp___121;
            } else {
              tmp___122 = __ctype_tolower_loc();
              __res___0 = (int )*(*tmp___122 + c2);
            }
            c2 = __res___0;
          } else {

          }
          if (! hard_LC_COLLATE) {
            c = c1;
            while (c <= c2) {
              setbit_case_fold_c(c, ccl);
              c ++;
            }
          } else {
            pattern[0] = (char )'[';
            pattern[1] = (char )c1;
            pattern[2] = (char )'-';
            pattern[3] = (char )c2;
            pattern[4] = (char )']';
            pattern[5] = (char)0;
            subject[0] = (char)0;
            subject[1] = (char)0;
            regcomp((regex_t */* __restrict  */)(& re), (char const   */* __restrict  */)(pattern), 1 << 3);
            c = 0;
            while (c < 1 << 8) {
              subject[0] = (char )c;
              if (case_fold) {
                tmp___123 = __ctype_b_loc();
                if (! ((int const   )*(*tmp___123 + c) & 256)) {
                  goto _L___11;
                } else {

                }
              } else {
                _L___11: 
                tmp___124 = regexec((regex_t const   */* __restrict  */)(& re), (char const   */* __restrict  */)(subject), 0UL, (regmatch_t */* __restrict  */)((void *)0), 0);
                if (tmp___124 != 1) {
                  setbit_case_fold_c(c, ccl);
                } else {

                }
              }
              c ++;
            }
            regfree(& re);
          }
        }
        colon_warning_state |= 8;
        while (1) {
          if (! lexleft) {
            tmp___127 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
            if ((unsigned long )tmp___127 != (unsigned long )((char *)0)) {
              tmp___126 = dcgettext((char const   *)((void *)0), "unbalanced [", 5);
              dfaerror((char const   *)tmp___126);
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___128 = mbrtowc((wchar_t */* __restrict  */)(& _wc___9), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___128;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___129 = lexptr;
              lexptr ++;
              c1 = (int )((unsigned char )*tmp___129);
              wc1 = (unsigned int )c1;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc1 = (unsigned int )_wc___9;
              tmp___130 = wctob(wc1);
              c1 = (int )tmp___130;
            }
          }
          break;
        }
        goto __Cont;
      } else {

      }
    } else {

    }
    if (c == 58) {
      tmp___131 = 2;
    } else {
      tmp___131 = 4;
    }
    colon_warning_state |= tmp___131;
    tmp___139 = __ctype_get_mb_cur_max();
    if (tmp___139 > 1UL) {
      if (case_fold) {
        tmp___135 = iswalpha(wc);
        if (tmp___135) {
          wc = towlower(wc);
          tmp___134 = setbit_wc(wc, ccl);
          if (! tmp___134) {
            while (1) {
              if (chars_al <= work_mbc->nchars + 1) {
                new_nalloc___5 = (unsigned long )((work_mbc->nchars + 1) + ! work_mbc->chars);
                tmp___132 = x2nrealloc((void *)work_mbc->chars, & new_nalloc___5, sizeof(wchar_t ));
                work_mbc->chars = (wchar_t *)tmp___132;
                chars_al = (int )new_nalloc___5;
              } else {

              }
              break;
            }
            tmp___133 = work_mbc->nchars;
            (work_mbc->nchars) ++;
            *(work_mbc->chars + tmp___133) = (int )wc;
          } else {

          }
          goto __Cont;
        } else {

        }
      } else {

      }
      tmp___138 = setbit_wc(wc, ccl);
      if (! tmp___138) {
        while (1) {
          if (chars_al <= work_mbc->nchars + 1) {
            new_nalloc___6 = (unsigned long )((work_mbc->nchars + 1) + ! work_mbc->chars);
            tmp___136 = x2nrealloc((void *)work_mbc->chars, & new_nalloc___6, sizeof(wchar_t ));
            work_mbc->chars = (wchar_t *)tmp___136;
            chars_al = (int )new_nalloc___6;
          } else {

          }
          break;
        }
        tmp___137 = work_mbc->nchars;
        (work_mbc->nchars) ++;
        *(work_mbc->chars + tmp___137) = (int )wc;
      } else {

      }
    } else {
      setbit_case_fold_c(c, ccl);
    }
    __Cont: 
    wc = wc1;
    c = c1;
    if (! (c != 93)) {
      break;
    } else {

    }
  }
  if (colon_warning_state == 7) {
    tmp___140 = dcgettext((char const   *)((void *)0), "character class syntax is [[:space:]], not [:space:]", 5);
    dfawarn((char const   *)tmp___140);
  } else {

  }
  tmp___144 = __ctype_get_mb_cur_max();
  if (tmp___144 > 1UL) {
    work_mbc->invert = invert;
    tmp___143 = equal(ccl, zeroclass);
    if (tmp___143) {
      work_mbc->cset = -1;
    } else {
      tmp___142 = charclass_index(ccl);
      work_mbc->cset = tmp___142;
    }
    return ((enum __anonenum_token_32 )273);
  } else {

  }
  if (invert) {
    tmp___145 = __ctype_get_mb_cur_max();
    if (! (tmp___145 == 1UL)) {
      __assert_fail("(__ctype_get_mb_cur_max ()) == 1", "dfa.c", 1066U, "parse_bracket_exp");
    } else {

    }
    notset(ccl);
    if (syntax_bits & ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      clrbit((unsigned int )eolbyte, ccl);
    } else {

    }
  } else {

  }
  tmp___146 = charclass_index(ccl);
  return ((enum __anonenum_token_32 )(275 + tmp___146));
}
}
static token lex(void) 
{ unsigned int c ;
  unsigned int c2 ;
  int backslash ;
  charclass ccl ;
  int i ;
  wchar_t _wc ;
  size_t tmp ;
  char const   *tmp___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___1 ;
  wint_t wc ;
  wchar_t _wc___0 ;
  size_t tmp___2 ;
  char const   *tmp___3 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___4 ;
  size_t tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int lo ;
  int hi ;
  char const   *p ;
  char const   *lim ;
  int tmp___13 ;
  int tmp___14 ;
  wint_t wc___0 ;
  char *tmp___15 ;
  char *tmp___16 ;
  wchar_t _wc___1 ;
  size_t tmp___17 ;
  char const   *tmp___18 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___19 ;
  wint_t wc___1 ;
  char *tmp___20 ;
  char *tmp___21 ;
  wchar_t _wc___2 ;
  size_t tmp___22 ;
  char const   *tmp___23 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___24 ;
  char *tmp___25 ;
  wint_t wc___2 ;
  char *tmp___26 ;
  char *tmp___27 ;
  wchar_t _wc___3 ;
  size_t tmp___28 ;
  char const   *tmp___29 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___30 ;
  wint_t wc___3 ;
  char *tmp___31 ;
  char *tmp___32 ;
  wchar_t _wc___4 ;
  size_t tmp___33 ;
  char const   *tmp___34 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  wint_t wc___4 ;
  char *tmp___38 ;
  char *tmp___39 ;
  wchar_t _wc___5 ;
  size_t tmp___40 ;
  char const   *tmp___41 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___42 ;
  char *tmp___43 ;
  size_t tmp___44 ;
  int tmp___45 ;
  unsigned short const   **tmp___46 ;
  int tmp___47 ;
  unsigned short const   **tmp___48 ;
  int tmp___49 ;
  size_t tmp___50 ;
  int tmp___51 ;
  unsigned short const   **tmp___52 ;

  {
  backslash = 0;
  i = 0;
  while (i < 2) {
    tmp___5 = __ctype_get_mb_cur_max();
    if (tmp___5 > 1UL) {
      while (1) {
        if (! lexleft) {
          if ((unsigned long )((void *)0) != (unsigned long )((void *)0)) {
            dfaerror((char const   *)((void *)0));
          } else {
            lasttok = (enum __anonenum_token_32 )-1;
            return (lasttok);
          }
        } else {
          tmp = mbrtowc((wchar_t */* __restrict  */)(& _wc), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
          cur_mb_len = (int )tmp;
          if (cur_mb_len <= 0) {
            cur_mb_len = 1;
            lexleft --;
            tmp___0 = lexptr;
            lexptr ++;
            c = (unsigned int )((unsigned char )*tmp___0);
            wctok = (int )c;
          } else {
            lexptr += cur_mb_len;
            lexleft -= cur_mb_len;
            wctok = _wc;
            tmp___1 = wctob((unsigned int )wctok);
            c = (unsigned int )tmp___1;
          }
        }
        break;
      }
      if ((int )c == -1) {
        goto normal_char;
      } else {

      }
    } else {
      while (1) {
        while (1) {
          if (! lexleft) {
            if ((unsigned long )((void *)0) != (unsigned long )((void *)0)) {
              dfaerror((char const   *)((void *)0));
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___2 = mbrtowc((wchar_t */* __restrict  */)(& _wc___0), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___2;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___3 = lexptr;
              lexptr ++;
              c = (unsigned int )((unsigned char )*tmp___3);
              wc = c;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc = (unsigned int )_wc___0;
              tmp___4 = wctob(wc);
              c = (unsigned int )tmp___4;
            }
          }
          break;
        }
        break;
      }
    }
    switch ((int )c) {
    case 92: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    if (lexleft == 0) {
      tmp___6 = dcgettext((char const   *)((void *)0), "unfinished \\ escape", 5);
      dfaerror((char const   *)tmp___6);
    } else {

    }
    backslash = 1;
    break;
    case 94: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    if (syntax_bits & (((1UL << 1) << 1) << 1)) {
      lasttok = (enum __anonenum_token_32 )258;
      return (lasttok);
    } else {
      if ((int )lasttok == -1) {
        lasttok = (enum __anonenum_token_32 )258;
        return (lasttok);
      } else {
        if ((int )lasttok == 270) {
          lasttok = (enum __anonenum_token_32 )258;
          return (lasttok);
        } else {
          if ((int )lasttok == 269) {
            lasttok = (enum __anonenum_token_32 )258;
            return (lasttok);
          } else {

          }
        }
      }
    }
    goto normal_char;
    case 36: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    if (syntax_bits & (((1UL << 1) << 1) << 1)) {
      lasttok = (enum __anonenum_token_32 )259;
      return (lasttok);
    } else {
      if (lexleft == 0) {
        lasttok = (enum __anonenum_token_32 )259;
        return (lasttok);
      } else {
        if (syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          if (lexleft > 0) {
            if ((int const   )*lexptr == 41) {
              tmp___7 = 1;
            } else {
              tmp___7 = 0;
            }
          } else {
            tmp___7 = 0;
          }
          tmp___9 = tmp___7;
        } else {
          if (lexleft > 1) {
            if ((int const   )*(lexptr + 0) == 92) {
              if ((int const   )*(lexptr + 1) == 41) {
                tmp___8 = 1;
              } else {
                tmp___8 = 0;
              }
            } else {
              tmp___8 = 0;
            }
          } else {
            tmp___8 = 0;
          }
          tmp___9 = tmp___8;
        }
        if (tmp___9) {
          lasttok = (enum __anonenum_token_32 )259;
          return (lasttok);
        } else {
          if (syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
            if (lexleft > 0) {
              if ((int const   )*lexptr == 124) {
                tmp___10 = 1;
              } else {
                tmp___10 = 0;
              }
            } else {
              tmp___10 = 0;
            }
            tmp___12 = tmp___10;
          } else {
            if (lexleft > 1) {
              if ((int const   )*(lexptr + 0) == 92) {
                if ((int const   )*(lexptr + 1) == 124) {
                  tmp___11 = 1;
                } else {
                  tmp___11 = 0;
                }
              } else {
                tmp___11 = 0;
              }
            } else {
              tmp___11 = 0;
            }
            tmp___12 = tmp___11;
          }
          if (tmp___12) {
            lasttok = (enum __anonenum_token_32 )259;
            return (lasttok);
          } else {
            if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
              if (lexleft > 0) {
                if ((int const   )*lexptr == 10) {
                  lasttok = (enum __anonenum_token_32 )259;
                  return (lasttok);
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
    goto normal_char;
    case 49: 
    case 50: 
    case 51: 
    case 52: 
    case 53: 
    case 54: 
    case 55: 
    case 56: 
    case 57: 
    if (backslash) {
      if (! (syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        laststart = 0;
        lasttok = (enum __anonenum_token_32 )257;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 96: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )258;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 39: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )259;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 60: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )260;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 62: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )261;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 98: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )262;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 66: 
    if (backslash) {
      if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
        lasttok = (enum __anonenum_token_32 )263;
        return (lasttok);
      } else {

      }
    } else {

    }
    goto normal_char;
    case 63: 
    if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      goto normal_char;
    } else {

    }
    if (backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
      goto normal_char;
    } else {

    }
    if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
      if (laststart) {
        goto normal_char;
      } else {

      }
    } else {

    }
    lasttok = (enum __anonenum_token_32 )264;
    return (lasttok);
    case 42: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
      if (laststart) {
        goto normal_char;
      } else {

      }
    } else {

    }
    lasttok = (enum __anonenum_token_32 )265;
    return (lasttok);
    case 43: 
    if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      goto normal_char;
    } else {

    }
    if (backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
      goto normal_char;
    } else {

    }
    if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
      if (laststart) {
        goto normal_char;
      } else {

      }
    } else {

    }
    lasttok = (enum __anonenum_token_32 )266;
    return (lasttok);
    case 123: 
    if (! (syntax_bits & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
      goto normal_char;
    } else {

    }
    if (backslash != ((syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
      goto normal_char;
    } else {

    }
    if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
      if (laststart) {
        goto normal_char;
      } else {

      }
    } else {

    }
    if (syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      lo = -1;
      hi = -1;
      p = lexptr;
      lim = p + lexleft;
      while (1) {
        if ((unsigned long )p != (unsigned long )lim) {
          if (! ((unsigned int )*p - 48U <= 9U)) {
            break;
          } else {

          }
        } else {
          break;
        }
        if (lo < 0) {
          tmp___13 = 0;
        } else {
          tmp___13 = lo * 10;
        }
        lo = (tmp___13 + (int )*p) - 48;
        p ++;
      }
      if ((unsigned long )p != (unsigned long )lim) {
        if ((int const   )*p == 44) {
          while (1) {
            p ++;
            if ((unsigned long )p != (unsigned long )lim) {
              if (! ((unsigned int )*p - 48U <= 9U)) {
                break;
              } else {

              }
            } else {
              break;
            }
            if (hi < 0) {
              tmp___14 = 0;
            } else {
              tmp___14 = hi * 10;
            }
            hi = (tmp___14 + (int )*p) - 48;
          }
        } else {
          hi = lo;
        }
      } else {
        hi = lo;
      }
      if ((unsigned long )p == (unsigned long )lim) {
        goto normal_char;
      } else {
        if ((int const   )*p != 125) {
          goto normal_char;
        } else {
          if (lo < 0) {
            goto normal_char;
          } else {
            if (32767 < hi) {
              goto normal_char;
            } else {
              if (0 <= hi) {
                if (hi < lo) {
                  goto normal_char;
                } else {

                }
              } else {

              }
            }
          }
        }
      }
    } else {

    }
    minrep = 0;
    while (1) {
      while (1) {
        if (! lexleft) {
          tmp___16 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
          if ((unsigned long )tmp___16 != (unsigned long )((char *)0)) {
            tmp___15 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
            dfaerror((char const   *)tmp___15);
          } else {
            lasttok = (enum __anonenum_token_32 )-1;
            return (lasttok);
          }
        } else {
          tmp___17 = mbrtowc((wchar_t */* __restrict  */)(& _wc___1), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
          cur_mb_len = (int )tmp___17;
          if (cur_mb_len <= 0) {
            cur_mb_len = 1;
            lexleft --;
            tmp___18 = lexptr;
            lexptr ++;
            c = (unsigned int )((unsigned char )*tmp___18);
            wc___0 = c;
          } else {
            lexptr += cur_mb_len;
            lexleft -= cur_mb_len;
            wc___0 = (unsigned int )_wc___1;
            tmp___19 = wctob(wc___0);
            c = (unsigned int )tmp___19;
          }
        }
        break;
      }
      break;
    }
    if (c - 48U <= 9U) {
      minrep = (int )(c - 48U);
      while (1) {
        while (1) {
          while (1) {
            if (! lexleft) {
              tmp___21 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
              if ((unsigned long )tmp___21 != (unsigned long )((char *)0)) {
                tmp___20 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
                dfaerror((char const   *)tmp___20);
              } else {
                lasttok = (enum __anonenum_token_32 )-1;
                return (lasttok);
              }
            } else {
              tmp___22 = mbrtowc((wchar_t */* __restrict  */)(& _wc___2), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
              cur_mb_len = (int )tmp___22;
              if (cur_mb_len <= 0) {
                cur_mb_len = 1;
                lexleft --;
                tmp___23 = lexptr;
                lexptr ++;
                c = (unsigned int )((unsigned char )*tmp___23);
                wc___1 = c;
              } else {
                lexptr += cur_mb_len;
                lexleft -= cur_mb_len;
                wc___1 = (unsigned int )_wc___2;
                tmp___24 = wctob(wc___1);
                c = (unsigned int )tmp___24;
              }
            }
            break;
          }
          break;
        }
        if (! (c - 48U <= 9U)) {
          break;
        } else {

        }
        minrep = (int )(((unsigned int )(10 * minrep) + c) - 48U);
      }
    } else {
      tmp___25 = dcgettext((char const   *)((void *)0), "malformed repeat count", 5);
      dfaerror((char const   *)tmp___25);
    }
    if (c == 44U) {
      while (1) {
        while (1) {
          if (! lexleft) {
            tmp___27 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
            if ((unsigned long )tmp___27 != (unsigned long )((char *)0)) {
              tmp___26 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
              dfaerror((char const   *)tmp___26);
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___28 = mbrtowc((wchar_t */* __restrict  */)(& _wc___3), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___28;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___29 = lexptr;
              lexptr ++;
              c = (unsigned int )((unsigned char )*tmp___29);
              wc___2 = c;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc___2 = (unsigned int )_wc___3;
              tmp___30 = wctob(wc___2);
              c = (unsigned int )tmp___30;
            }
          }
          break;
        }
        break;
      }
      if (! (c - 48U <= 9U)) {
        maxrep = -1;
      } else {
        maxrep = (int )(c - 48U);
        while (1) {
          while (1) {
            while (1) {
              if (! lexleft) {
                tmp___32 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
                if ((unsigned long )tmp___32 != (unsigned long )((char *)0)) {
                  tmp___31 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
                  dfaerror((char const   *)tmp___31);
                } else {
                  lasttok = (enum __anonenum_token_32 )-1;
                  return (lasttok);
                }
              } else {
                tmp___33 = mbrtowc((wchar_t */* __restrict  */)(& _wc___4), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
                cur_mb_len = (int )tmp___33;
                if (cur_mb_len <= 0) {
                  cur_mb_len = 1;
                  lexleft --;
                  tmp___34 = lexptr;
                  lexptr ++;
                  c = (unsigned int )((unsigned char )*tmp___34);
                  wc___3 = c;
                } else {
                  lexptr += cur_mb_len;
                  lexleft -= cur_mb_len;
                  wc___3 = (unsigned int )_wc___4;
                  tmp___35 = wctob(wc___3);
                  c = (unsigned int )tmp___35;
                }
              }
              break;
            }
            break;
          }
          if (! (c - 48U <= 9U)) {
            break;
          } else {

          }
          maxrep = (int )(((unsigned int )(10 * maxrep) + c) - 48U);
        }
        if (0 <= maxrep) {
          if (maxrep < minrep) {
            tmp___36 = dcgettext((char const   *)((void *)0), "malformed repeat count", 5);
            dfaerror((char const   *)tmp___36);
          } else {

          }
        } else {

        }
      }
    } else {
      maxrep = minrep;
    }
    if (! (syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
      if (c != 92U) {
        tmp___37 = dcgettext((char const   *)((void *)0), "malformed repeat count", 5);
        dfaerror((char const   *)tmp___37);
      } else {

      }
      while (1) {
        while (1) {
          if (! lexleft) {
            tmp___39 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
            if ((unsigned long )tmp___39 != (unsigned long )((char *)0)) {
              tmp___38 = dcgettext((char const   *)((void *)0), "unfinished repeat count", 5);
              dfaerror((char const   *)tmp___38);
            } else {
              lasttok = (enum __anonenum_token_32 )-1;
              return (lasttok);
            }
          } else {
            tmp___40 = mbrtowc((wchar_t */* __restrict  */)(& _wc___5), (char const   */* __restrict  */)lexptr, (unsigned long )lexleft, (mbstate_t */* __restrict  */)(& mbs));
            cur_mb_len = (int )tmp___40;
            if (cur_mb_len <= 0) {
              cur_mb_len = 1;
              lexleft --;
              tmp___41 = lexptr;
              lexptr ++;
              c = (unsigned int )((unsigned char )*tmp___41);
              wc___4 = c;
            } else {
              lexptr += cur_mb_len;
              lexleft -= cur_mb_len;
              wc___4 = (unsigned int )_wc___5;
              tmp___42 = wctob(wc___4);
              c = (unsigned int )tmp___42;
            }
          }
          break;
        }
        break;
      }
    } else {

    }
    if (c != 125U) {
      tmp___43 = dcgettext((char const   *)((void *)0), "malformed repeat count", 5);
      dfaerror((char const   *)tmp___43);
    } else {

    }
    laststart = 0;
    lasttok = (enum __anonenum_token_32 )267;
    return (lasttok);
    case 124: 
    if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      goto normal_char;
    } else {

    }
    if (backslash != ((syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
      goto normal_char;
    } else {

    }
    laststart = 1;
    lasttok = (enum __anonenum_token_32 )269;
    return (lasttok);
    case 10: 
    if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      goto normal_char;
    } else {
      if (backslash) {
        goto normal_char;
      } else {
        if (! (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
          goto normal_char;
        } else {

        }
      }
    }
    laststart = 1;
    lasttok = (enum __anonenum_token_32 )269;
    return (lasttok);
    case 40: 
    if (backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
      goto normal_char;
    } else {

    }
    parens ++;
    laststart = 1;
    lasttok = (enum __anonenum_token_32 )270;
    return (lasttok);
    case 41: 
    if (backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
      goto normal_char;
    } else {

    }
    if (parens == 0) {
      if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        goto normal_char;
      } else {

      }
    } else {

    }
    parens --;
    laststart = 0;
    lasttok = (enum __anonenum_token_32 )271;
    return (lasttok);
    case 46: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    tmp___44 = __ctype_get_mb_cur_max();
    if (tmp___44 > 1UL) {
      laststart = 0;
      lasttok = (enum __anonenum_token_32 )272;
      return (lasttok);
    } else {

    }
    zeroset(ccl);
    notset(ccl);
    if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
      clrbit((unsigned int )eolbyte, ccl);
    } else {

    }
    if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      clrbit((unsigned int )'\000', ccl);
    } else {

    }
    laststart = 0;
    tmp___45 = charclass_index(ccl);
    lasttok = (enum __anonenum_token_32 )(275 + tmp___45);
    return (lasttok);
    case 115: 
    case 83: 
    if (! backslash) {
      goto normal_char;
    } else {
      if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        goto normal_char;
      } else {

      }
    }
    zeroset(ccl);
    c2 = 0U;
    while (c2 < (unsigned int )(1 << 8)) {
      tmp___46 = __ctype_b_loc();
      if ((int const   )*(*tmp___46 + (int )c2) & 8192) {
        setbit(c2, ccl);
      } else {

      }
      c2 ++;
    }
    if (c == 83U) {
      notset(ccl);
    } else {

    }
    laststart = 0;
    tmp___47 = charclass_index(ccl);
    lasttok = (enum __anonenum_token_32 )(275 + tmp___47);
    return (lasttok);
    case 119: 
    case 87: 
    if (! backslash) {
      goto normal_char;
    } else {
      if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        goto normal_char;
      } else {

      }
    }
    zeroset(ccl);
    c2 = 0U;
    while (c2 < (unsigned int )(1 << 8)) {
      tmp___48 = __ctype_b_loc();
      if ((int const   )*(*tmp___48 + (int )c2) & 8) {
        setbit(c2, ccl);
      } else {
        if (c2 == 95U) {
          setbit(c2, ccl);
        } else {

        }
      }
      c2 ++;
    }
    if (c == 87U) {
      notset(ccl);
    } else {

    }
    laststart = 0;
    tmp___49 = charclass_index(ccl);
    lasttok = (enum __anonenum_token_32 )(275 + tmp___49);
    return (lasttok);
    case 91: 
    if (backslash) {
      goto normal_char;
    } else {

    }
    laststart = 0;
    lasttok = parse_bracket_exp();
    return (lasttok);
    default: ;
    normal_char: 
    laststart = 0;
    tmp___50 = __ctype_get_mb_cur_max();
    if (tmp___50 > 1UL) {
      lasttok = (enum __anonenum_token_32 )274;
      return (lasttok);
    } else {

    }
    if (case_fold) {
      tmp___52 = __ctype_b_loc();
      if ((int const   )*(*tmp___52 + (int )c) & 1024) {
        zeroset(ccl);
        setbit_case_fold_c((int )c, ccl);
        tmp___51 = charclass_index(ccl);
        lasttok = (enum __anonenum_token_32 )(275 + tmp___51);
        return (lasttok);
      } else {

      }
    } else {

    }
    lasttok = (enum __anonenum_token_32 )c;
    return (lasttok);
    }
    i ++;
  }
  abort();
  return ((enum __anonenum_token_32 )-1);
}
}
static token tok  ;
static int depth  ;
static void addtok_mb(token t , int mbprop ) 
{ size_t new_nalloc ;
  void *tmp ;
  size_t tmp___0 ;
  size_t new_nalloc___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  tmp___0 = __ctype_get_mb_cur_max();
  if (tmp___0 > 1UL) {
    while (1) {
      if (dfa->nmultibyte_prop <= dfa->tindex) {
        new_nalloc = (unsigned long )(dfa->tindex + ! dfa->multibyte_prop);
        tmp = x2nrealloc((void *)dfa->multibyte_prop, & new_nalloc, sizeof(int ));
        dfa->multibyte_prop = (int *)tmp;
        dfa->nmultibyte_prop = (int )new_nalloc;
      } else {

      }
      break;
    }
    *(dfa->multibyte_prop + dfa->tindex) = mbprop;
  } else {

  }
  while (1) {
    if (dfa->talloc <= dfa->tindex) {
      new_nalloc___0 = (unsigned long )(dfa->tindex + ! dfa->tokens);
      tmp___1 = x2nrealloc((void *)dfa->tokens, & new_nalloc___0, sizeof(token ));
      dfa->tokens = (token *)tmp___1;
      dfa->talloc = (int )new_nalloc___0;
    } else {

    }
    break;
  }
  tmp___2 = dfa->tindex;
  (dfa->tindex) ++;
  *(dfa->tokens + tmp___2) = t;
  switch ((int )t) {
  case 264: 
  case 265: 
  case 266: 
  break;
  case 268: 
  case 269: 
  depth --;
  break;
  default: 
  (dfa->nleaves) ++;
  case 256: 
  depth ++;
  break;
  }
  if (depth > dfa->depth) {
    dfa->depth = depth;
  } else {

  }
  return;
}
}
static void addtok_wc(wint_t wc ) ;
static void addtok(token t ) 
{ _Bool need_or ;
  struct mb_char_classes *work_mbc ;
  int i ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;

  {
  tmp___1 = __ctype_get_mb_cur_max();
  if (tmp___1 > 1UL) {
    if ((int )t == 273) {
      need_or = (_Bool)0;
      work_mbc = dfa->mbcsets + (dfa->nmbcsets - 1);
      if (! work_mbc->invert) {
        i = 0;
        while (i < work_mbc->nchars) {
          addtok_wc((unsigned int )*(work_mbc->chars + i));
          if (need_or) {
            addtok((enum __anonenum_token_32 )269);
          } else {

          }
          need_or = (_Bool)1;
          i ++;
        }
        work_mbc->nchars = 0;
      } else {

      }
      if (work_mbc->invert) {
        goto _L;
      } else {
        tmp___0 = using_utf8();
        if (tmp___0) {
          _L___0: 
          if (work_mbc->nchars != 0) {
            goto _L;
          } else {
            if (work_mbc->nch_classes != 0) {
              goto _L;
            } else {
              if (work_mbc->nranges != 0) {
                goto _L;
              } else {
                if (work_mbc->nequivs != 0) {
                  goto _L;
                } else {
                  if (work_mbc->ncoll_elems != 0) {
                    _L: 
                    addtok_mb((enum __anonenum_token_32 )273, ((dfa->nmbcsets - 1) << 2) + 3);
                    if (need_or) {
                      addtok((enum __anonenum_token_32 )269);
                    } else {

                    }
                  } else {
                    if (work_mbc->cset != -1) {
                      tmp = using_utf8();
                      if (! tmp) {
                        __assert_fail("using_utf8 ()", "dfa.c", 1498U, "addtok");
                      } else {

                      }
                      addtok((enum __anonenum_token_32 )(275 + work_mbc->cset));
                      if (need_or) {
                        addtok((enum __anonenum_token_32 )269);
                      } else {

                      }
                    } else {

                    }
                  }
                }
              }
            }
          }
        } else {
          if (work_mbc->cset != -1) {
            goto _L;
          } else {
            goto _L___0;
          }
        }
      }
    } else {
      addtok_mb(t, 3);
    }
  } else {
    addtok_mb(t, 3);
  }
  return;
}
}
static void addtok_wc(wint_t wc ) 
{ unsigned char buf[16] ;
  mbstate_t s ;
  int i ;
  size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  tmp ;
  int tmp___0 ;
  int tmp___1 ;
  size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  tmp___2 ;

  {
  memset((void *)(& s), 0, sizeof(s));
  tmp___2 = (size_t __attribute__((__leaf__, __gnu_inline__, __artificial__))  )wcrtomb((char */* __restrict  */)((char *)(buf)), (int )wc, (mbstate_t */* __restrict  */)(& s));
  tmp = tmp___2;
  cur_mb_len = (int )tmp;
  if (cur_mb_len <= 0) {
    buf[0] = (unsigned char)0;
  } else {

  }
  if (cur_mb_len == 1) {
    tmp___0 = 3;
  } else {
    tmp___0 = 1;
  }
  addtok_mb((enum __anonenum_token_32 )buf[0], tmp___0);
  i = 1;
  while (i < cur_mb_len) {
    if (i == cur_mb_len - 1) {
      tmp___1 = 2;
    } else {
      tmp___1 = 0;
    }
    addtok_mb((enum __anonenum_token_32 )buf[i], tmp___1);
    addtok((enum __anonenum_token_32 )268);
    i ++;
  }
  return;
}
}
static void add_utf8_anychar(void) ;
static charclass const   utf8_classes[5]  = { {        0,        0,        0,        0, 
            ~ 0,        ~ 0,        0,        0}, 
   {        ~ 0,        ~ 0,        ~ 0,        ~ 0, 
            0,        0,        0,        0}, 
   {        0,        0,        0,        0, 
            0,        0,        -4,        0}, 
   {        0,        0,        0,        0, 
            0,        0,        0,        65535}, 
   {        0,        0,        0,        0, 
            0,        0,        0,        16711680}};
static void add_utf8_anychar(void) 
{ unsigned int n ;
  unsigned int i ;
  charclass c ;
  int tmp ;

  {
  n = (unsigned int )(sizeof(utf8_classes) / sizeof(utf8_classes[0]));
  if (dfa->utf8_anychar_classes[0] == 0) {
    i = 0U;
    while (i < n) {
      copyset((int *)(utf8_classes[i]), c);
      if (i == 1U) {
        if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
          clrbit((unsigned int )eolbyte, c);
        } else {

        }
        if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          clrbit((unsigned int )'\000', c);
        } else {

        }
      } else {

      }
      tmp = charclass_index(c);
      dfa->utf8_anychar_classes[i] = 275 + tmp;
      i ++;
    }
  } else {

  }
  i = 1U;
  while (i < n) {
    addtok((enum __anonenum_token_32 )dfa->utf8_anychar_classes[i]);
    i ++;
  }
  while (1) {
    i --;
    if (! (i > 1U)) {
      break;
    } else {

    }
    addtok((enum __anonenum_token_32 )dfa->utf8_anychar_classes[0]);
    addtok((enum __anonenum_token_32 )268);
    addtok((enum __anonenum_token_32 )269);
  }
  return;
}
}
static void atom(void) 
{ wint_t tmp ;
  wint_t tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;

  {
  if ((int )tok == 274) {
    if (case_fold) {
      tmp = towlower((unsigned int )wctok);
      tmp___0 = tmp;
    } else {
      tmp___0 = (unsigned int )wctok;
    }
    addtok_wc(tmp___0);
    tok = lex();
  } else {
    if ((int )tok == 272) {
      tmp___2 = using_utf8();
      if (tmp___2) {
        add_utf8_anychar();
        tok = lex();
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if ((int )tok >= 0) {
        if ((int )tok < 1 << 8) {
          addtok(tok);
          tok = lex();
        } else {
          goto _L;
        }
      } else {
        _L: 
        if ((int )tok >= 275) {
          addtok(tok);
          tok = lex();
        } else {
          if ((int )tok == 257) {
            addtok(tok);
            tok = lex();
          } else {
            if ((int )tok == 258) {
              addtok(tok);
              tok = lex();
            } else {
              if ((int )tok == 259) {
                addtok(tok);
                tok = lex();
              } else {
                if ((int )tok == 260) {
                  addtok(tok);
                  tok = lex();
                } else {
                  if ((int )tok == 272) {
                    addtok(tok);
                    tok = lex();
                  } else {
                    if ((int )tok == 273) {
                      addtok(tok);
                      tok = lex();
                    } else {
                      if ((int )tok == 261) {
                        addtok(tok);
                        tok = lex();
                      } else {
                        if ((int )tok == 262) {
                          addtok(tok);
                          tok = lex();
                        } else {
                          if ((int )tok == 263) {
                            addtok(tok);
                            tok = lex();
                          } else {
                            if ((int )tok == 270) {
                              tok = lex();
                              regexp();
                              if ((int )tok != 271) {
                                tmp___1 = dcgettext((char const   *)((void *)0), "unbalanced (", 5);
                                dfaerror((char const   *)tmp___1);
                              } else {

                              }
                              tok = lex();
                            } else {
                              addtok((enum __anonenum_token_32 )256);
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
        }
      }
    }
  }
  return;
}
}
static int nsubtoks(int tindex ) 
{ int ntoks1 ;
  int tmp ;
  int tmp___0 ;

  {
  switch ((int )*(dfa->tokens + (tindex - 1))) {
  default: ;
  return (1);
  case 264: 
  case 265: 
  case 266: 
  tmp = nsubtoks(tindex - 1);
  return (1 + tmp);
  case 268: 
  case 269: 
  ntoks1 = nsubtoks(tindex - 1);
  tmp___0 = nsubtoks((tindex - 1) - ntoks1);
  return ((1 + ntoks1) + tmp___0);
  }
}
}
static void copytoks(int tindex , int ntokens ) 
{ int i ;
  size_t tmp ;

  {
  i = 0;
  while (i < ntokens) {
    addtok(*(dfa->tokens + (tindex + i)));
    tmp = __ctype_get_mb_cur_max();
    if (tmp > 1UL) {
      if ((int )*(dfa->tokens + (tindex + i)) == 273) {
        *(dfa->multibyte_prop + (dfa->tindex - 1)) = *(dfa->multibyte_prop + (tindex + i));
      } else {

      }
    } else {

    }
    i ++;
  }
  return;
}
}
static void closure(void) 
{ int tindex ;
  int ntokens ;
  int i ;
  int tmp ;

  {
  atom();
  while (1) {
    if (! ((int )tok == 264)) {
      if (! ((int )tok == 265)) {
        if (! ((int )tok == 266)) {
          if (! ((int )tok == 267)) {
            break;
          } else {

          }
        } else {

        }
      } else {

      }
    } else {

    }
    if ((int )tok == 267) {
      if (minrep) {
        goto _L___0;
      } else {
        if (maxrep) {
          _L___0: 
          ntokens = nsubtoks(dfa->tindex);
          tindex = dfa->tindex - ntokens;
          if (maxrep < 0) {
            addtok((enum __anonenum_token_32 )266);
          } else {

          }
          if (minrep == 0) {
            addtok((enum __anonenum_token_32 )264);
          } else {

          }
          i = 1;
          while (i < minrep) {
            copytoks(tindex, ntokens);
            addtok((enum __anonenum_token_32 )268);
            i ++;
          }
          while (i < maxrep) {
            copytoks(tindex, ntokens);
            addtok((enum __anonenum_token_32 )264);
            addtok((enum __anonenum_token_32 )268);
            i ++;
          }
          tok = lex();
        } else {
          goto _L;
        }
      }
    } else {
      _L: 
      if ((int )tok == 267) {
        tmp = nsubtoks(dfa->tindex);
        dfa->tindex -= tmp;
        tok = lex();
        closure();
      } else {
        addtok(tok);
        tok = lex();
      }
    }
  }
  return;
}
}
static void branch(void) 
{ 

  {
  closure();
  while (1) {
    if ((int )tok != 271) {
      if ((int )tok != 269) {
        if (! ((int )tok >= 0)) {
          break;
        } else {

        }
      } else {
        break;
      }
    } else {
      break;
    }
    closure();
    addtok((enum __anonenum_token_32 )268);
  }
  return;
}
}
static void regexp(void) 
{ 

  {
  branch();
  while ((int )tok == 269) {
    tok = lex();
    branch();
    addtok((enum __anonenum_token_32 )269);
  }
  return;
}
}
void dfaparse(char const   *s , size_t len , struct dfa *d ) 
{ _Bool tmp ;
  size_t tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;

  {
  dfa = d;
  lexptr = s;
  lexleft = (int )len;
  lasttok = (enum __anonenum_token_32 )-1;
  laststart = 1;
  parens = 0;
  tmp = hard_locale(3);
  hard_LC_COLLATE = (int )tmp;
  tmp___0 = __ctype_get_mb_cur_max();
  if (tmp___0 > 1UL) {
    cur_mb_len = 0;
    memset((void *)(& mbs), 0, sizeof(mbs));
  } else {

  }
  if (! syntax_bits_set) {
    tmp___1 = dcgettext((char const   *)((void *)0), "no syntax specified", 5);
    dfaerror((char const   *)tmp___1);
  } else {

  }
  tok = lex();
  depth = d->depth;
  regexp();
  if ((int )tok != -1) {
    tmp___2 = dcgettext((char const   *)((void *)0), "unbalanced )", 5);
    dfaerror((char const   *)tmp___2);
  } else {

  }
  addtok((enum __anonenum_token_32 )(-1 - d->nregexps));
  addtok((enum __anonenum_token_32 )268);
  if (d->nregexps) {
    addtok((enum __anonenum_token_32 )269);
  } else {

  }
  (d->nregexps) ++;
  return;
}
}
static void copy(position_set const   *src , position_set *dst ) 
{ 

  {
  memcpy((void */* __restrict  */)dst->elems, (void const   */* __restrict  */)src->elems, sizeof(*(dst->elems + 0)) * (unsigned long )src->nelem);
  dst->nelem = (int )src->nelem;
  return;
}
}
static void insert(position p , position_set *s ) 
{ int count ;
  int lo ;
  int hi ;
  int mid ;
  int i ;

  {
  count = s->nelem;
  lo = 0;
  hi = count;
  while (lo < hi) {
    mid = (int )(((unsigned int )lo + (unsigned int )hi) >> 1);
    if ((s->elems + mid)->index < p.index) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }
  if (lo < count) {
    if (p.index == (s->elems + lo)->index) {
      (s->elems + lo)->constraint |= p.constraint;
    } else {
      goto _L;
    }
  } else {
    _L: 
    i = count;
    while (i > lo) {
      *(s->elems + i) = *(s->elems + (i - 1));
      i --;
    }
    *(s->elems + lo) = p;
    (s->nelem) ++;
  }
  return;
}
}
static void merge(position_set const   *s1 , position_set const   *s2 , position_set *m ) 
{ int i ;
  int j ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  i = 0;
  j = 0;
  m->nelem = 0;
  while (1) {
    if (i < (int )s1->nelem) {
      if (! (j < (int )s2->nelem)) {
        break;
      } else {

      }
    } else {
      break;
    }
    if ((s1->elems + i)->index > (s2->elems + j)->index) {
      tmp = m->nelem;
      (m->nelem) ++;
      tmp___0 = i;
      i ++;
      *(m->elems + tmp) = *(s1->elems + tmp___0);
    } else {
      if ((s1->elems + i)->index < (s2->elems + j)->index) {
        tmp___1 = m->nelem;
        (m->nelem) ++;
        tmp___2 = j;
        j ++;
        *(m->elems + tmp___1) = *(s2->elems + tmp___2);
      } else {
        tmp___3 = i;
        i ++;
        *(m->elems + m->nelem) = *(s1->elems + tmp___3);
        tmp___4 = m->nelem;
        (m->nelem) ++;
        tmp___5 = j;
        j ++;
        (m->elems + tmp___4)->constraint |= (s2->elems + tmp___5)->constraint;
      }
    }
  }
  while (i < (int )s1->nelem) {
    tmp___6 = m->nelem;
    (m->nelem) ++;
    tmp___7 = i;
    i ++;
    *(m->elems + tmp___6) = *(s1->elems + tmp___7);
  }
  while (j < (int )s2->nelem) {
    tmp___8 = m->nelem;
    (m->nelem) ++;
    tmp___9 = j;
    j ++;
    *(m->elems + tmp___8) = *(s2->elems + tmp___9);
  }
  return;
}
}
static void delete(position p , position_set *s ) 
{ int i ;

  {
  i = 0;
  while (i < s->nelem) {
    if (p.index == (s->elems + i)->index) {
      break;
    } else {

    }
    i ++;
  }
  if (i < s->nelem) {
    (s->nelem) --;
    while (i < s->nelem) {
      *(s->elems + i) = *(s->elems + (i + 1));
      i ++;
    }
  } else {

  }
  return;
}
}
static int state_index(struct dfa *d , position_set const   *s , int newline , int letter ) 
{ int hash ;
  int constraint ;
  int i ;
  int j ;
  size_t new_nalloc ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;

  {
  hash = 0;
  if (newline) {
    newline = 1;
  } else {
    newline = 0;
  }
  if (letter) {
    letter = 1;
  } else {
    letter = 0;
  }
  i = 0;
  while (i < (int )s->nelem) {
    hash = (int )((unsigned int )hash ^ ((s->elems + i)->index + (s->elems + i)->constraint));
    i ++;
  }
  i = 0;
  while (i < d->sindex) {
    if (hash != (d->states + i)->hash) {
      goto __Cont;
    } else {
      if (s->nelem != (int const   )(d->states + i)->elems.nelem) {
        goto __Cont;
      } else {
        if (newline != (int )(d->states + i)->newline) {
          goto __Cont;
        } else {
          if (letter != (int )(d->states + i)->letter) {
            goto __Cont;
          } else {

          }
        }
      }
    }
    j = 0;
    while (j < (int )s->nelem) {
      if ((s->elems + j)->constraint != ((d->states + i)->elems.elems + j)->constraint) {
        break;
      } else {
        if ((s->elems + j)->index != ((d->states + i)->elems.elems + j)->index) {
          break;
        } else {

        }
      }
      j ++;
    }
    if (j == (int )s->nelem) {
      return (i);
    } else {

    }
    __Cont: 
    i ++;
  }
  while (1) {
    if (d->salloc <= d->sindex) {
      new_nalloc = (unsigned long )(d->sindex + ! d->states);
      tmp = x2nrealloc((void *)d->states, & new_nalloc, sizeof(dfa_state ));
      d->states = (dfa_state *)tmp;
      d->salloc = (int )new_nalloc;
    } else {

    }
    break;
  }
  (d->states + i)->hash = hash;
  if (sizeof(position ) == 1UL) {
    tmp___0 = xmalloc((unsigned long )s->nelem);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = xnmalloc((unsigned long )s->nelem, sizeof(position ));
    tmp___2 = tmp___1;
  }
  (d->states + i)->elems.elems = (position *)tmp___2;
  copy(s, & (d->states + i)->elems);
  (d->states + i)->newline = (char )newline;
  (d->states + i)->letter = (char )letter;
  (d->states + i)->backref = (char)0;
  (d->states + i)->constraint = (unsigned char)0;
  (d->states + i)->first_end = 0;
  (d->states + i)->mbps.nelem = 0;
  (d->states + i)->mbps.elems = (position *)((void *)0);
  j = 0;
  while (j < (int )s->nelem) {
    if ((int )*(d->tokens + (s->elems + j)->index) < 0) {
      constraint = (int )(s->elems + j)->constraint;
      if (newline) {
        tmp___3 = 2;
      } else {
        tmp___3 = 0;
      }
      if (constraint & (1 << (tmp___3 + 4))) {
        if (letter) {
          tmp___4 = 2;
        } else {
          tmp___4 = 0;
        }
        if (constraint & (1 << tmp___4)) {
          (d->states + i)->constraint = (unsigned char )((int )(d->states + i)->constraint | constraint);
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
        if (newline) {
          tmp___5 = 2;
        } else {
          tmp___5 = 0;
        }
        if (constraint & (1 << (tmp___5 + 4))) {
          if (letter) {
            tmp___6 = 2;
          } else {
            tmp___6 = 0;
          }
          if (constraint & (1 << (tmp___6 + 1))) {
            (d->states + i)->constraint = (unsigned char )((int )(d->states + i)->constraint | constraint);
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
          if (newline) {
            tmp___7 = 2;
          } else {
            tmp___7 = 0;
          }
          if (constraint & (1 << ((tmp___7 + 1) + 4))) {
            if (letter) {
              tmp___8 = 2;
            } else {
              tmp___8 = 0;
            }
            if (constraint & (1 << tmp___8)) {
              (d->states + i)->constraint = (unsigned char )((int )(d->states + i)->constraint | constraint);
            } else {
              goto _L;
            }
          } else {
            _L: 
            if (newline) {
              tmp___9 = 2;
            } else {
              tmp___9 = 0;
            }
            if (constraint & (1 << ((tmp___9 + 1) + 4))) {
              if (letter) {
                tmp___10 = 2;
              } else {
                tmp___10 = 0;
              }
              if (constraint & (1 << (tmp___10 + 1))) {
                (d->states + i)->constraint = (unsigned char )((int )(d->states + i)->constraint | constraint);
              } else {

              }
            } else {

            }
          }
        }
      }
      if (! (d->states + i)->first_end) {
        (d->states + i)->first_end = (int )*(d->tokens + (s->elems + j)->index);
      } else {

      }
    } else {
      if ((int )*(d->tokens + (s->elems + j)->index) == 257) {
        (d->states + i)->constraint = (unsigned char)255;
        (d->states + i)->backref = (char)1;
      } else {

      }
    }
    j ++;
  }
  (d->sindex) ++;
  return (i);
}
}
static void epsclosure(position_set *s , struct dfa  const  *d ) 
{ int i ;
  int j ;
  char *visited ;
  position p ;
  position old ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  if (sizeof(char ) == 1UL) {
    tmp = xzalloc((unsigned long )d->tindex);
    tmp___1 = tmp;
  } else {
    tmp___0 = xcalloc((unsigned long )d->tindex, sizeof(char ));
    tmp___1 = tmp___0;
  }
  visited = (char *)tmp___1;
  i = 0;
  while (i < s->nelem) {
    if ((int )*(d->tokens + (s->elems + i)->index) >= 1 << 8) {
      if ((int )*(d->tokens + (s->elems + i)->index) != 257) {
        if ((int )*(d->tokens + (s->elems + i)->index) != 272) {
          if ((int )*(d->tokens + (s->elems + i)->index) != 273) {
            if ((int )*(d->tokens + (s->elems + i)->index) < 275) {
              old = *(s->elems + i);
              p.constraint = old.constraint;
              delete(*(s->elems + i), s);
              if (*(visited + old.index)) {
                i --;
                goto __Cont;
              } else {

              }
              *(visited + old.index) = (char)1;
              switch ((int )*(d->tokens + old.index)) {
              case 258: 
              p.constraint &= 207U;
              break;
              case 259: 
              p.constraint &= 175U;
              break;
              case 260: 
              p.constraint &= 242U;
              break;
              case 261: 
              p.constraint &= 244U;
              break;
              case 262: 
              p.constraint &= 246U;
              break;
              case 263: 
              p.constraint &= 249U;
              break;
              default: ;
              break;
              }
              j = 0;
              while (j < (d->follows + old.index)->nelem) {
                p.index = ((d->follows + old.index)->elems + j)->index;
                insert(p, s);
                j ++;
              }
              i = -1;
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
    __Cont: 
    i ++;
  }
  free((void *)visited);
  return;
}
}
void dfaanalyze(struct dfa *d , int searchflag ) 
{ int *nullable ;
  int *nfirstpos ;
  position *firstpos ;
  int *nlastpos ;
  position *lastpos ;
  int *nalloc ;
  position_set tmp ;
  position_set merged ;
  int wants_newline ;
  int *o_nullable ;
  int *o_nfirst ;
  int *o_nlast ;
  position *o_firstpos ;
  position *o_lastpos ;
  int i ;
  int j ;
  position *pos ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  void *tmp___16 ;
  void *tmp___17 ;
  void *tmp___18 ;
  void *tmp___19 ;
  void *tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  int *tmp___24 ;
  int *tmp___25 ;
  int *tmp___26 ;
  int tmp___27 ;
  size_t new_nalloc ;
  void *tmp___28 ;
  size_t new_nalloc___0 ;
  void *tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int *tmp___32 ;
  int *tmp___33 ;
  int *tmp___34 ;
  int tmp___35 ;
  unsigned int tmp___36 ;
  unsigned int tmp___37 ;
  void *tmp___38 ;
  void *tmp___39 ;
  void *tmp___40 ;
  void *tmp___41 ;
  void *tmp___42 ;
  void *tmp___43 ;
  void *tmp___44 ;

  {
  d->searchflag = searchflag;
  if (sizeof(int ) == 1UL) {
    tmp___0 = xmalloc((unsigned long )d->depth);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = xnmalloc((unsigned long )d->depth, sizeof(int ));
    tmp___2 = tmp___1;
  }
  nullable = (int *)tmp___2;
  o_nullable = nullable;
  if (sizeof(int ) == 1UL) {
    tmp___3 = xmalloc((unsigned long )d->depth);
    tmp___5 = tmp___3;
  } else {
    tmp___4 = xnmalloc((unsigned long )d->depth, sizeof(int ));
    tmp___5 = tmp___4;
  }
  nfirstpos = (int *)tmp___5;
  o_nfirst = nfirstpos;
  if (sizeof(position ) == 1UL) {
    tmp___6 = xmalloc((unsigned long )d->nleaves);
    tmp___8 = tmp___6;
  } else {
    tmp___7 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
    tmp___8 = tmp___7;
  }
  firstpos = (position *)tmp___8;
  o_firstpos = firstpos;
  firstpos += d->nleaves;
  if (sizeof(int ) == 1UL) {
    tmp___9 = xmalloc((unsigned long )d->depth);
    tmp___11 = tmp___9;
  } else {
    tmp___10 = xnmalloc((unsigned long )d->depth, sizeof(int ));
    tmp___11 = tmp___10;
  }
  nlastpos = (int *)tmp___11;
  o_nlast = nlastpos;
  if (sizeof(position ) == 1UL) {
    tmp___12 = xmalloc((unsigned long )d->nleaves);
    tmp___14 = tmp___12;
  } else {
    tmp___13 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
    tmp___14 = tmp___13;
  }
  lastpos = (position *)tmp___14;
  o_lastpos = lastpos;
  lastpos += d->nleaves;
  if (sizeof(int ) == 1UL) {
    tmp___15 = xzalloc((unsigned long )d->tindex);
    tmp___17 = tmp___15;
  } else {
    tmp___16 = xcalloc((unsigned long )d->tindex, sizeof(int ));
    tmp___17 = tmp___16;
  }
  nalloc = (int *)tmp___17;
  if (sizeof(position ) == 1UL) {
    tmp___18 = xmalloc((unsigned long )(2 * d->nleaves));
    tmp___20 = tmp___18;
  } else {
    tmp___19 = xnmalloc((unsigned long )(2 * d->nleaves), sizeof(position ));
    tmp___20 = tmp___19;
  }
  merged.elems = (position *)tmp___20;
  if (sizeof(position_set ) == 1UL) {
    tmp___21 = xzalloc((unsigned long )d->tindex);
    tmp___23 = tmp___21;
  } else {
    tmp___22 = xcalloc((unsigned long )d->tindex, sizeof(position_set ));
    tmp___23 = tmp___22;
  }
  d->follows = (position_set *)tmp___23;
  i = 0;
  while (i < d->tindex) {
    switch ((int )*(d->tokens + i)) {
    case 256: 
    tmp___24 = nullable;
    nullable ++;
    *tmp___24 = 1;
    tmp___25 = nfirstpos;
    nfirstpos ++;
    tmp___26 = nlastpos;
    nlastpos ++;
    tmp___27 = 0;
    *tmp___26 = tmp___27;
    *tmp___25 = tmp___27;
    break;
    case 265: 
    case 266: 
    tmp.nelem = *(nfirstpos + -1);
    tmp.elems = firstpos;
    pos = lastpos;
    j = 0;
    while (j < *(nlastpos + -1)) {
      merge((position_set const   *)(& tmp), (position_set const   *)(d->follows + (pos + j)->index), & merged);
      while (1) {
        if (*(nalloc + (pos + j)->index) <= merged.nelem - 1) {
          new_nalloc = (unsigned long )((merged.nelem - 1) + ! (d->follows + (pos + j)->index)->elems);
          tmp___28 = x2nrealloc((void *)(d->follows + (pos + j)->index)->elems, & new_nalloc, sizeof(position ));
          (d->follows + (pos + j)->index)->elems = (position *)tmp___28;
          *(nalloc + (pos + j)->index) = (int )new_nalloc;
        } else {

        }
        break;
      }
      copy((position_set const   *)(& merged), d->follows + (pos + j)->index);
      j ++;
    }
    case 264: 
    if ((int )*(d->tokens + i) != 266) {
      *(nullable + -1) = 1;
    } else {

    }
    break;
    case 268: 
    tmp.nelem = *(nfirstpos + -1);
    tmp.elems = firstpos;
    pos = lastpos + *(nlastpos + -1);
    j = 0;
    while (j < *(nlastpos + -2)) {
      merge((position_set const   *)(& tmp), (position_set const   *)(d->follows + (pos + j)->index), & merged);
      while (1) {
        if (*(nalloc + (pos + j)->index) <= merged.nelem - 1) {
          new_nalloc___0 = (unsigned long )((merged.nelem - 1) + ! (d->follows + (pos + j)->index)->elems);
          tmp___29 = x2nrealloc((void *)(d->follows + (pos + j)->index)->elems, & new_nalloc___0, sizeof(position ));
          (d->follows + (pos + j)->index)->elems = (position *)tmp___29;
          *(nalloc + (pos + j)->index) = (int )new_nalloc___0;
        } else {

        }
        break;
      }
      copy((position_set const   *)(& merged), d->follows + (pos + j)->index);
      j ++;
    }
    if (*(nullable + -2)) {
      *(nfirstpos + -2) += *(nfirstpos + -1);
    } else {
      firstpos += *(nfirstpos + -1);
    }
    nfirstpos --;
    if (*(nullable + -1)) {
      *(nlastpos + -2) += *(nlastpos + -1);
    } else {
      pos = lastpos + *(nlastpos + -2);
      j = *(nlastpos + -1) - 1;
      while (j >= 0) {
        *(pos + j) = *(lastpos + j);
        j --;
      }
      lastpos += *(nlastpos + -2);
      *(nlastpos + -2) = *(nlastpos + -1);
    }
    nlastpos --;
    if (*(nullable + -1)) {
      if (*(nullable + -2)) {
        tmp___30 = 1;
      } else {
        tmp___30 = 0;
      }
    } else {
      tmp___30 = 0;
    }
    *(nullable + -2) = tmp___30;
    nullable --;
    break;
    case 269: 
    *(nfirstpos + -2) += *(nfirstpos + -1);
    nfirstpos --;
    *(nlastpos + -2) += *(nlastpos + -1);
    nlastpos --;
    if (*(nullable + -1)) {
      tmp___31 = 1;
    } else {
      if (*(nullable + -2)) {
        tmp___31 = 1;
      } else {
        tmp___31 = 0;
      }
    }
    *(nullable + -2) = tmp___31;
    nullable --;
    break;
    default: 
    tmp___32 = nullable;
    nullable ++;
    *tmp___32 = (int )*(d->tokens + i) == 257;
    tmp___33 = nfirstpos;
    nfirstpos ++;
    tmp___34 = nlastpos;
    nlastpos ++;
    tmp___35 = 1;
    *tmp___34 = tmp___35;
    *tmp___33 = tmp___35;
    firstpos --;
    lastpos --;
    tmp___36 = (unsigned int )i;
    lastpos->index = tmp___36;
    firstpos->index = tmp___36;
    tmp___37 = 255U;
    lastpos->constraint = tmp___37;
    firstpos->constraint = tmp___37;
    *(nalloc + i) = 1;
    if (sizeof(position ) == 1UL) {
      tmp___38 = xmalloc((unsigned long )*(nalloc + i));
      tmp___40 = tmp___38;
    } else {
      tmp___39 = xnmalloc((unsigned long )*(nalloc + i), sizeof(position ));
      tmp___40 = tmp___39;
    }
    (d->follows + i)->elems = (position *)tmp___40;
    break;
    }
    i ++;
  }
  i = 0;
  while (i < d->tindex) {
    if ((int )*(d->tokens + i) < 1 << 8) {
      goto _L;
    } else {
      if ((int )*(d->tokens + i) == 257) {
        goto _L;
      } else {
        if ((int )*(d->tokens + i) == 272) {
          goto _L;
        } else {
          if ((int )*(d->tokens + i) == 273) {
            goto _L;
          } else {
            if ((int )*(d->tokens + i) >= 275) {
              _L: 
              copy((position_set const   *)(d->follows + i), & merged);
              epsclosure(& merged, (struct dfa  const  *)d);
              if ((d->follows + i)->nelem < merged.nelem) {
                tmp___41 = xnrealloc((void *)(d->follows + i)->elems, (unsigned long )merged.nelem, sizeof(position ));
                (d->follows + i)->elems = (position *)tmp___41;
              } else {

              }
              copy((position_set const   *)(& merged), d->follows + i);
            } else {

            }
          }
        }
      }
    }
    i ++;
  }
  merged.nelem = 0;
  i = 0;
  while (i < *(nfirstpos + -1)) {
    insert(*(firstpos + i), & merged);
    i ++;
  }
  epsclosure(& merged, (struct dfa  const  *)d);
  wants_newline = 0;
  i = 0;
  while (i < merged.nelem) {
    if (((merged.elems + i)->constraint & 192U) >> 2 != ((merged.elems + i)->constraint & 48U)) {
      wants_newline = 1;
    } else {

    }
    i ++;
  }
  d->salloc = 1;
  d->sindex = 0;
  if (sizeof(dfa_state ) == 1UL) {
    tmp___42 = xmalloc((unsigned long )d->salloc);
    tmp___44 = tmp___42;
  } else {
    tmp___43 = xnmalloc((unsigned long )d->salloc, sizeof(dfa_state ));
    tmp___44 = tmp___43;
  }
  d->states = (dfa_state *)tmp___44;
  state_index(d, (position_set const   *)(& merged), wants_newline, 0);
  free((void *)o_nullable);
  free((void *)o_nfirst);
  free((void *)o_firstpos);
  free((void *)o_nlast);
  free((void *)o_lastpos);
  free((void *)nalloc);
  free((void *)merged.elems);
  return;
}
}
static charclass letters  ;
static charclass newline  ;
static int initialized  ;
void dfastate(int s , struct dfa *d , int *trans ) 
{ position_set *grps ;
  charclass *labels ;
  int ngrps ;
  position pos ;
  charclass matches ;
  int matchesf ;
  charclass intersect ;
  int intersectf ;
  charclass leftovers ;
  int leftoversf ;
  position_set follows ;
  position_set tmp ;
  int state ;
  int wants_newline ;
  int state_newline ;
  int wants_letter ;
  int state_letter ;
  int next_isnt_1st_byte ;
  int i ;
  int j ;
  int k ;
  void *tmp___0 ;
  void *tmp___1 ;
  unsigned short const   **tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int match ;
  int label ;
  int tmp___12 ;
  int tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  void *tmp___16 ;
  int tmp___17 ;
  void *tmp___18 ;
  void *tmp___19 ;
  void *tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  void *tmp___24 ;
  void *tmp___25 ;
  void *tmp___26 ;
  unsigned short const   **tmp___28 ;
  int tmp___29 ;
  int c ;
  unsigned short const   **tmp___30 ;

  {
  ngrps = 0;
  next_isnt_1st_byte = 0;
  tmp___0 = xnmalloc((unsigned long )(1 << 8), sizeof(*grps));
  grps = (position_set *)tmp___0;
  tmp___1 = xnmalloc((unsigned long )(1 << 8), sizeof(*labels));
  labels = (charclass *)tmp___1;
  if (! initialized) {
    initialized = 1;
    i = 0;
    while (i < 1 << 8) {
      tmp___2 = __ctype_b_loc();
      if ((int const   )*(*tmp___2 + i) & 8) {
        setbit((unsigned int )i, letters);
      } else {
        if (i == 95) {
          setbit((unsigned int )i, letters);
        } else {

        }
      }
      i ++;
    }
    setbit((unsigned int )eolbyte, newline);
  } else {

  }
  zeroset(matches);
  i = 0;
  while (i < (d->states + s)->elems.nelem) {
    pos = *((d->states + s)->elems.elems + i);
    if ((int )*(d->tokens + pos.index) >= 0) {
      if ((int )*(d->tokens + pos.index) < 1 << 8) {
        setbit((unsigned int )*(d->tokens + pos.index), matches);
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if ((int )*(d->tokens + pos.index) >= 275) {
        copyset(*(d->charclasses + ((int )*(d->tokens + pos.index) - 275)), matches);
      } else {
        if ((int )*(d->tokens + pos.index) == 272) {
          goto _L;
        } else {
          if ((int )*(d->tokens + pos.index) == 273) {
            _L: 
            if ((d->states + s)->mbps.nelem == 0) {
              if (sizeof(position ) == 1UL) {
                tmp___3 = xmalloc((unsigned long )(d->states + s)->elems.nelem);
                tmp___5 = tmp___3;
              } else {
                tmp___4 = xnmalloc((unsigned long )(d->states + s)->elems.nelem, sizeof(position ));
                tmp___5 = tmp___4;
              }
              (d->states + s)->mbps.elems = (position *)tmp___5;
            } else {

            }
            insert(pos, & (d->states + s)->mbps);
            goto __Cont;
          } else {
            goto __Cont;
          }
        }
      }
    }
    if (pos.constraint != 255U) {
      if ((d->states + s)->newline) {
        tmp___6 = 2;
      } else {
        tmp___6 = 0;
      }
      if (! (pos.constraint & (unsigned int )(1 << ((tmp___6 + 1) + 4)))) {
        clrbit((unsigned int )eolbyte, matches);
      } else {

      }
      if ((d->states + s)->newline) {
        tmp___7 = 2;
      } else {
        tmp___7 = 0;
      }
      if (! (pos.constraint & (unsigned int )(1 << (tmp___7 + 4)))) {
        j = 0;
        while ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
          matches[j] &= newline[j];
          j ++;
        }
      } else {

      }
      if ((d->states + s)->letter) {
        tmp___8 = 2;
      } else {
        tmp___8 = 0;
      }
      if (! (pos.constraint & (unsigned int )(1 << (tmp___8 + 1)))) {
        j = 0;
        while ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
          matches[j] &= ~ letters[j];
          j ++;
        }
      } else {

      }
      if ((d->states + s)->letter) {
        tmp___9 = 2;
      } else {
        tmp___9 = 0;
      }
      if (! (pos.constraint & (unsigned int )(1 << tmp___9))) {
        j = 0;
        while ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
          matches[j] &= letters[j];
          j ++;
        }
      } else {

      }
      j = 0;
      while (1) {
        if ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
          if (! (! matches[j])) {
            break;
          } else {

          }
        } else {
          break;
        }
        goto __Cont___0;
        __Cont___0: 
        j ++;
      }
      if ((unsigned long )j == (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
        goto __Cont;
      } else {

      }
    } else {

    }
    j = 0;
    while (j < ngrps) {
      if ((int )*(d->tokens + pos.index) >= 0) {
        if ((int )*(d->tokens + pos.index) < 1 << 8) {
          tmp___10 = tstbit((unsigned int )*(d->tokens + pos.index), *(labels + j));
          if (! tmp___10) {
            goto __Cont___1;
          } else {

          }
        } else {

        }
      } else {

      }
      intersectf = 0;
      k = 0;
      while ((unsigned long )k < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
        tmp___11 = matches[k] & (*(labels + j))[k];
        intersect[k] = tmp___11;
        if (tmp___11) {
          intersectf = 1;
        } else {

        }
        k ++;
      }
      if (! intersectf) {
        goto __Cont___1;
      } else {

      }
      matchesf = 0;
      leftoversf = matchesf;
      k = 0;
      while ((unsigned long )k < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
        match = matches[k];
        label = (*(labels + j))[k];
        tmp___12 = ~ match & label;
        leftovers[k] = tmp___12;
        if (tmp___12) {
          leftoversf = 1;
        } else {

        }
        tmp___13 = match & ~ label;
        matches[k] = tmp___13;
        if (tmp___13) {
          matchesf = 1;
        } else {

        }
        k ++;
      }
      if (leftoversf) {
        copyset(leftovers, *(labels + ngrps));
        copyset(intersect, *(labels + j));
        if (sizeof(position ) == 1UL) {
          tmp___14 = xmalloc((unsigned long )d->nleaves);
          tmp___16 = tmp___14;
        } else {
          tmp___15 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
          tmp___16 = tmp___15;
        }
        (grps + ngrps)->elems = (position *)tmp___16;
        copy((position_set const   *)(grps + j), grps + ngrps);
        ngrps ++;
      } else {

      }
      tmp___17 = (grps + j)->nelem;
      ((grps + j)->nelem) ++;
      *((grps + j)->elems + tmp___17) = pos;
      if (! matchesf) {
        break;
      } else {

      }
      __Cont___1: 
      j ++;
    }
    if (j == ngrps) {
      copyset(matches, *(labels + ngrps));
      zeroset(matches);
      if (sizeof(position ) == 1UL) {
        tmp___18 = xmalloc((unsigned long )d->nleaves);
        tmp___20 = tmp___18;
      } else {
        tmp___19 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
        tmp___20 = tmp___19;
      }
      (grps + ngrps)->elems = (position *)tmp___20;
      (grps + ngrps)->nelem = 1;
      *((grps + ngrps)->elems + 0) = pos;
      ngrps ++;
    } else {

    }
    __Cont: 
    i ++;
  }
  if (sizeof(position ) == 1UL) {
    tmp___21 = xmalloc((unsigned long )d->nleaves);
    tmp___23 = tmp___21;
  } else {
    tmp___22 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
    tmp___23 = tmp___22;
  }
  follows.elems = (position *)tmp___23;
  if (sizeof(position ) == 1UL) {
    tmp___24 = xmalloc((unsigned long )d->nleaves);
    tmp___26 = tmp___24;
  } else {
    tmp___25 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
    tmp___26 = tmp___25;
  }
  tmp.elems = (position *)tmp___26;
  if (d->searchflag) {
    wants_newline = 0;
    wants_letter = 0;
    i = 0;
    while (i < (d->states + 0)->elems.nelem) {
      if ((((d->states + 0)->elems.elems + i)->constraint & 192U) >> 2 != (((d->states + 0)->elems.elems + i)->constraint & 48U)) {
        wants_newline = 1;
      } else {

      }
      if ((((d->states + 0)->elems.elems + i)->constraint & 12U) >> 2 != (((d->states + 0)->elems.elems + i)->constraint & 3U)) {
        wants_letter = 1;
      } else {

      }
      i ++;
    }
    copy((position_set const   *)(& (d->states + 0)->elems), & follows);
    state = state_index(d, (position_set const   *)(& follows), 0, 0);
    if (wants_newline) {
      state_newline = state_index(d, (position_set const   *)(& follows), 1, 0);
    } else {
      state_newline = state;
    }
    if (wants_letter) {
      state_letter = state_index(d, (position_set const   *)(& follows), 0, 1);
    } else {
      state_letter = state;
    }
    i = 0;
    while (i < 1 << 8) {
      tmp___28 = __ctype_b_loc();
      if ((int const   )*(*tmp___28 + i) & 8) {
        *(trans + i) = state_letter;
      } else {
        if (i == 95) {
          *(trans + i) = state_letter;
        } else {
          *(trans + i) = state;
        }
      }
      i ++;
    }
    *(trans + (int )eolbyte) = state_newline;
  } else {
    i = 0;
    while (i < 1 << 8) {
      *(trans + i) = -1;
      i ++;
    }
  }
  i = 0;
  while (i < ngrps) {
    follows.nelem = 0;
    j = 0;
    while (j < (grps + i)->nelem) {
      k = 0;
      while (k < (d->follows + ((grps + i)->elems + j)->index)->nelem) {
        insert(*((d->follows + ((grps + i)->elems + j)->index)->elems + k), & follows);
        k ++;
      }
      j ++;
    }
    if (d->mb_cur_max > 1U) {
      next_isnt_1st_byte = 0;
      j = 0;
      while (j < follows.nelem) {
        if (! (*(d->multibyte_prop + (follows.elems + j)->index) & 1)) {
          next_isnt_1st_byte = 1;
          break;
        } else {

        }
        j ++;
      }
    } else {

    }
    if (d->searchflag) {
      if (d->mb_cur_max == 1U) {
        goto _L___1;
      } else {
        if (! next_isnt_1st_byte) {
          _L___1: 
          j = 0;
          while (j < (d->states + 0)->elems.nelem) {
            insert(*((d->states + 0)->elems.elems + j), & follows);
            j ++;
          }
        } else {

        }
      }
    } else {

    }
    wants_newline = 0;
    tmp___29 = tstbit((unsigned int )eolbyte, *(labels + i));
    if (tmp___29) {
      j = 0;
      while (j < follows.nelem) {
        if (((follows.elems + j)->constraint & 192U) >> 2 != ((follows.elems + j)->constraint & 48U)) {
          wants_newline = 1;
        } else {

        }
        j ++;
      }
    } else {

    }
    wants_letter = 0;
    j = 0;
    while ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
      if ((*(labels + i))[j] & letters[j]) {
        break;
      } else {

      }
      j ++;
    }
    if ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
      j = 0;
      while (j < follows.nelem) {
        if (((follows.elems + j)->constraint & 12U) >> 2 != ((follows.elems + j)->constraint & 3U)) {
          wants_letter = 1;
        } else {

        }
        j ++;
      }
    } else {

    }
    state = state_index(d, (position_set const   *)(& follows), 0, 0);
    if (wants_newline) {
      state_newline = state_index(d, (position_set const   *)(& follows), 1, 0);
    } else {
      state_newline = state;
    }
    if (wants_letter) {
      state_letter = state_index(d, (position_set const   *)(& follows), 0, 1);
    } else {
      state_letter = state;
    }
    j = 0;
    while ((unsigned long )j < (((unsigned long )(1 << 8) + 8UL * sizeof(int )) - 1UL) / (8UL * sizeof(int ))) {
      k = 0;
      while ((unsigned long )k < 8UL * sizeof(int )) {
        if ((*(labels + i))[j] & (1 << k)) {
          c = (int )((unsigned long )j * (8UL * sizeof(int )) + (unsigned long )k);
          if (c == (int )eolbyte) {
            *(trans + c) = state_newline;
          } else {
            tmp___30 = __ctype_b_loc();
            if ((int const   )*(*tmp___30 + c) & 8) {
              *(trans + c) = state_letter;
            } else {
              if (c == 95) {
                *(trans + c) = state_letter;
              } else {
                if (c < 1 << 8) {
                  *(trans + c) = state;
                } else {

                }
              }
            }
          }
        } else {

        }
        k ++;
      }
      j ++;
    }
    i ++;
  }
  i = 0;
  while (i < ngrps) {
    free((void *)(grps + i)->elems);
    i ++;
  }
  free((void *)follows.elems);
  free((void *)tmp.elems);
  free((void *)grps);
  free((void *)labels);
  return;
}
}
static void build_state(int s , struct dfa *d ) 
{ int *trans ;
  int i ;
  int *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  int oldalloc ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  int tmp___13 ;

  {
  if (d->trcount >= 1024) {
    i = 0;
    while (i < d->tralloc) {
      free((void *)*(d->trans + i));
      free((void *)*(d->fails + i));
      tmp = (int *)((void *)0);
      *(d->fails + i) = tmp;
      *(d->trans + i) = tmp;
      i ++;
    }
    d->trcount = 0;
  } else {

  }
  (d->trcount) ++;
  *(d->success + s) = 0;
  if ((d->states + s)->newline) {
    tmp___0 = 2;
  } else {
    tmp___0 = 0;
  }
  if ((int )(d->states + s)->constraint & (1 << ((tmp___0 + 1) + 4))) {
    if ((d->states + s)->letter) {
      tmp___1 = 2;
    } else {
      tmp___1 = 0;
    }
    if ((int )(d->states + s)->constraint & (1 << tmp___1)) {
      *(d->success + s) |= 4;
    } else {

    }
  } else {

  }
  if ((d->states + s)->newline) {
    tmp___2 = 2;
  } else {
    tmp___2 = 0;
  }
  if ((int )(d->states + s)->constraint & (1 << (tmp___2 + 4))) {
    if ((d->states + s)->letter) {
      tmp___3 = 2;
    } else {
      tmp___3 = 0;
    }
    if ((int )(d->states + s)->constraint & (1 << (tmp___3 + 1))) {
      *(d->success + s) |= 2;
    } else {

    }
  } else {

  }
  if ((d->states + s)->newline) {
    tmp___4 = 2;
  } else {
    tmp___4 = 0;
  }
  if ((int )(d->states + s)->constraint & (1 << (tmp___4 + 4))) {
    if ((d->states + s)->letter) {
      tmp___5 = 2;
    } else {
      tmp___5 = 0;
    }
    if ((int )(d->states + s)->constraint & (1 << tmp___5)) {
      *(d->success + s) |= 1;
    } else {

    }
  } else {

  }
  if (sizeof(int ) == 1UL) {
    tmp___6 = xmalloc((unsigned long )(1 << 8));
    tmp___8 = tmp___6;
  } else {
    tmp___7 = xnmalloc((unsigned long )(1 << 8), sizeof(int ));
    tmp___8 = tmp___7;
  }
  trans = (int *)tmp___8;
  dfastate(s, d, trans);
  i = 0;
  while (i < 1 << 8) {
    if (*(trans + i) >= d->tralloc) {
      oldalloc = d->tralloc;
      while (*(trans + i) >= d->tralloc) {
        d->tralloc *= 2;
      }
      tmp___9 = xnrealloc((void *)d->realtrans, (unsigned long )(d->tralloc + 1), sizeof(int *));
      d->realtrans = (int **)tmp___9;
      d->trans = d->realtrans + 1;
      tmp___10 = xnrealloc((void *)d->fails, (unsigned long )d->tralloc, sizeof(int *));
      d->fails = (int **)tmp___10;
      tmp___11 = xnrealloc((void *)d->success, (unsigned long )d->tralloc, sizeof(int ));
      d->success = (int *)tmp___11;
      tmp___12 = xnrealloc((void *)d->newlines, (unsigned long )d->tralloc, sizeof(int ));
      d->newlines = (int *)tmp___12;
      while (oldalloc < d->tralloc) {
        *(d->trans + oldalloc) = (int *)((void *)0);
        tmp___13 = oldalloc;
        oldalloc ++;
        *(d->fails + tmp___13) = (int *)((void *)0);
      }
    } else {

    }
    i ++;
  }
  *(d->newlines + s) = *(trans + (int )eolbyte);
  *(trans + (int )eolbyte) = -1;
  if ((d->states + s)->constraint) {
    *(d->fails + s) = trans;
  } else {
    *(d->trans + s) = trans;
  }
  return;
}
}
static void build_state_zero(struct dfa *d ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;

  {
  d->tralloc = 1;
  d->trcount = 0;
  if (sizeof(int *) == 1UL) {
    tmp = xzalloc((unsigned long )(d->tralloc + 1));
    tmp___1 = tmp;
  } else {
    tmp___0 = xcalloc((unsigned long )(d->tralloc + 1), sizeof(int *));
    tmp___1 = tmp___0;
  }
  d->realtrans = (int **)tmp___1;
  d->trans = d->realtrans + 1;
  if (sizeof(int *) == 1UL) {
    tmp___2 = xzalloc((unsigned long )d->tralloc);
    tmp___4 = tmp___2;
  } else {
    tmp___3 = xcalloc((unsigned long )d->tralloc, sizeof(int *));
    tmp___4 = tmp___3;
  }
  d->fails = (int **)tmp___4;
  if (sizeof(int ) == 1UL) {
    tmp___5 = xmalloc((unsigned long )d->tralloc);
    tmp___7 = tmp___5;
  } else {
    tmp___6 = xnmalloc((unsigned long )d->tralloc, sizeof(int ));
    tmp___7 = tmp___6;
  }
  d->success = (int *)tmp___7;
  if (sizeof(int ) == 1UL) {
    tmp___8 = xmalloc((unsigned long )d->tralloc);
    tmp___10 = tmp___8;
  } else {
    tmp___9 = xnmalloc((unsigned long )d->tralloc, sizeof(int ));
    tmp___10 = tmp___9;
  }
  d->newlines = (int *)tmp___10;
  build_state(0, d);
  return;
}
}
static void realloc_trans_if_necessary(struct dfa *d , int new_state ) 
{ int oldalloc ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;

  {
  if (new_state >= d->tralloc) {
    oldalloc = d->tralloc;
    while (new_state >= d->tralloc) {
      d->tralloc *= 2;
    }
    tmp = xnrealloc((void *)d->realtrans, (unsigned long )(d->tralloc + 1), sizeof(int *));
    d->realtrans = (int **)tmp;
    d->trans = d->realtrans + 1;
    tmp___0 = xnrealloc((void *)d->fails, (unsigned long )d->tralloc, sizeof(int *));
    d->fails = (int **)tmp___0;
    tmp___1 = xnrealloc((void *)d->success, (unsigned long )d->tralloc, sizeof(int ));
    d->success = (int *)tmp___1;
    tmp___2 = xnrealloc((void *)d->newlines, (unsigned long )d->tralloc, sizeof(int ));
    d->newlines = (int *)tmp___2;
    while (oldalloc < d->tralloc) {
      *(d->trans + oldalloc) = (int *)((void *)0);
      tmp___3 = oldalloc;
      oldalloc ++;
      *(d->fails + tmp___3) = (int *)((void *)0);
    }
  } else {

  }
  return;
}
}
static status_transit_state transit_state_singlebyte(struct dfa *d , int s , unsigned char const   *p , int *next_state ) 
{ int *t ;
  int works ;
  status_transit_state rval ;

  {
  works = s;
  rval = (enum __anonenum_status_transit_state_36 )0;
  while ((unsigned int )rval == 0U) {
    t = *(d->trans + works);
    if ((unsigned long )t != (unsigned long )((void *)0)) {
      works = *(t + (int const   )*p);
      rval = (enum __anonenum_status_transit_state_36 )1;
      if (works < 0) {
        works = 0;
      } else {

      }
    } else {
      if (works < 0) {
        if ((unsigned long )p == (unsigned long )buf_end) {
          abort();
        } else {

        }
        works = 0;
      } else {
        if (*(d->fails + works)) {
          works = *(*(d->fails + works) + (int const   )*p);
          rval = (enum __anonenum_status_transit_state_36 )1;
        } else {
          build_state(works, d);
        }
      }
    }
  }
  *next_state = works;
  return (rval);
}
}
static int match_anychar(struct dfa *d , int s , position pos , int idx ) 
{ int newline___0 ;
  int letter ;
  wchar_t wc ;
  int mbclen ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  newline___0 = 0;
  letter = 0;
  wc = *(inputwcs + idx);
  if ((int )*(mblen_buf + idx) == 0) {
    mbclen = 1;
  } else {
    mbclen = (int )*(mblen_buf + idx);
  }
  if (wc == (int )eolbyte) {
    if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
      return (0);
    } else {

    }
    newline___0 = 1;
  } else {
    if (wc == 0) {
      if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        return (0);
      } else {

      }
      newline___0 = 1;
    } else {

    }
  }
  tmp = iswalnum((unsigned int )wc);
  if (tmp) {
    letter = 1;
  } else {
    if (wc == 95) {
      letter = 1;
    } else {

    }
  }
  if ((d->states + s)->newline) {
    tmp___0 = 2;
  } else {
    tmp___0 = 0;
  }
  if (newline___0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  if (pos.constraint & (unsigned int )(1 << ((tmp___0 + tmp___1) + 4))) {
    if ((d->states + s)->letter) {
      tmp___2 = 2;
    } else {
      tmp___2 = 0;
    }
    if (letter) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
    if (! (pos.constraint & (unsigned int )(1 << (tmp___2 + tmp___3)))) {
      return (0);
    } else {

    }
  } else {
    return (0);
  }
  return (mbclen);
}
}
static int match_mb_charset(struct dfa *d , int s , position pos , int idx ) 
{ int i ;
  int match ;
  int match_len ;
  int op_len ;
  char buffer[128] ;
  wchar_t wcbuf[6] ;
  struct mb_char_classes *work_mbc ;
  int newline___0 ;
  int letter ;
  wchar_t wc ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  size_t tmp___6 ;
  int tmp___7 ;
  size_t tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;

  {
  newline___0 = 0;
  letter = 0;
  wc = *(inputwcs + idx);
  if (wc == (int )eolbyte) {
    if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
      return (0);
    } else {

    }
    newline___0 = 1;
  } else {
    if (wc == 0) {
      if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        return (0);
      } else {

      }
      newline___0 = 1;
    } else {

    }
  }
  tmp = iswalnum((unsigned int )wc);
  if (tmp) {
    letter = 1;
  } else {
    if (wc == 95) {
      letter = 1;
    } else {

    }
  }
  if ((d->states + s)->newline) {
    tmp___0 = 2;
  } else {
    tmp___0 = 0;
  }
  if (newline___0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  if (pos.constraint & (unsigned int )(1 << ((tmp___0 + tmp___1) + 4))) {
    if ((d->states + s)->letter) {
      tmp___2 = 2;
    } else {
      tmp___2 = 0;
    }
    if (letter) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
    if (! (pos.constraint & (unsigned int )(1 << (tmp___2 + tmp___3)))) {
      return (0);
    } else {

    }
  } else {
    return (0);
  }
  work_mbc = d->mbcsets + (*(d->multibyte_prop + pos.index) >> 2);
  match = ! work_mbc->invert;
  if ((int )*(mblen_buf + idx) == 0) {
    match_len = 1;
  } else {
    match_len = (int )*(mblen_buf + idx);
  }
  if (wc < 1 << 8) {
    if (work_mbc->cset != -1) {
      tmp___4 = tstbit((unsigned int )((unsigned char )wc), *(d->charclasses + work_mbc->cset));
      if (tmp___4) {
        goto charset_matched;
      } else {

      }
    } else {

    }
  } else {

  }
  i = 0;
  while (i < work_mbc->nch_classes) {
    tmp___5 = iswctype((unsigned int )wc, *(work_mbc->ch_classes + i));
    if (tmp___5) {
      goto charset_matched;
    } else {

    }
    i ++;
  }
  strncpy((char */* __restrict  */)(buffer), (char const   */* __restrict  */)((char const   *)buf_begin + idx), (unsigned long )match_len);
  buffer[match_len] = (char )'\000';
  i = 0;
  while (i < work_mbc->nequivs) {
    tmp___6 = strlen((char const   *)*(work_mbc->equivs + i));
    op_len = (int )tmp___6;
    strncpy((char */* __restrict  */)(buffer), (char const   */* __restrict  */)((char const   *)buf_begin + idx), (unsigned long )op_len);
    buffer[op_len] = (char )'\000';
    tmp___7 = strcoll((char const   *)*(work_mbc->equivs + i), (char const   *)(buffer));
    if (tmp___7 == 0) {
      match_len = op_len;
      goto charset_matched;
    } else {

    }
    i ++;
  }
  i = 0;
  while (i < work_mbc->ncoll_elems) {
    tmp___8 = strlen((char const   *)*(work_mbc->coll_elems + i));
    op_len = (int )tmp___8;
    strncpy((char */* __restrict  */)(buffer), (char const   */* __restrict  */)((char const   *)buf_begin + idx), (unsigned long )op_len);
    buffer[op_len] = (char )'\000';
    tmp___9 = strcoll((char const   *)*(work_mbc->coll_elems + i), (char const   *)(buffer));
    if (tmp___9 == 0) {
      match_len = op_len;
      goto charset_matched;
    } else {

    }
    i ++;
  }
  wcbuf[0] = wc;
  wcbuf[5] = '\000';
  wcbuf[3] = wcbuf[5];
  wcbuf[1] = wcbuf[3];
  i = 0;
  while (i < work_mbc->nranges) {
    wcbuf[2] = *(work_mbc->range_sts + i);
    wcbuf[4] = *(work_mbc->range_ends + i);
    tmp___10 = wcscoll((wchar_t const   *)(wcbuf), (wchar_t const   *)(wcbuf + 2));
    if (tmp___10 >= 0) {
      tmp___11 = wcscoll((wchar_t const   *)(wcbuf + 4), (wchar_t const   *)(wcbuf));
      if (tmp___11 >= 0) {
        goto charset_matched;
      } else {

      }
    } else {

    }
    i ++;
  }
  i = 0;
  while (i < work_mbc->nchars) {
    if (wc == *(work_mbc->chars + i)) {
      goto charset_matched;
    } else {

    }
    i ++;
  }
  match = ! match;
  charset_matched: 
  if (match) {
    tmp___12 = match_len;
  } else {
    tmp___12 = 0;
  }
  return (tmp___12);
}
}
static int *check_matching_with_multibyte_ops(struct dfa *d , int s , int idx ) 
{ int i ;
  int *rarray ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  position pos ;

  {
  if (sizeof(int ) == 1UL) {
    tmp = xmalloc((unsigned long )(d->states + s)->mbps.nelem);
    tmp___1 = tmp;
  } else {
    tmp___0 = xnmalloc((unsigned long )(d->states + s)->mbps.nelem, sizeof(int ));
    tmp___1 = tmp___0;
  }
  rarray = (int *)tmp___1;
  i = 0;
  while (i < (d->states + s)->mbps.nelem) {
    pos = *((d->states + s)->mbps.elems + i);
    switch ((int )*(d->tokens + pos.index)) {
    case 272: 
    *(rarray + i) = match_anychar(d, s, pos, idx);
    break;
    case 273: 
    *(rarray + i) = match_mb_charset(d, s, pos, idx);
    break;
    default: ;
    break;
    }
    i ++;
  }
  return (rarray);
}
}
static status_transit_state transit_state_consume_1char(struct dfa *d , int s , unsigned char const   **pp , int *match_lens , int *mbclen , position_set *pps ) 
{ int i ;
  int j ;
  int s1 ;
  int s2 ;
  int *work_mbls ;
  status_transit_state rs ;
  unsigned char const   *tmp ;

  {
  rs = (enum __anonenum_status_transit_state_36 )1;
  if ((int )*(mblen_buf + (*pp - buf_begin)) == 0) {
    *mbclen = 1;
  } else {
    *mbclen = (int )*(mblen_buf + (*pp - buf_begin));
  }
  s1 = s;
  i = 0;
  while (i < *mbclen) {
    s2 = s1;
    tmp = *pp;
    (*pp) ++;
    rs = transit_state_singlebyte(d, s2, tmp, & s1);
    i ++;
  }
  copy((position_set const   *)(& (d->states + s1)->elems), pps);
  if ((unsigned long )match_lens == (unsigned long )((void *)0)) {
    if ((d->states + s)->mbps.nelem != 0) {
      work_mbls = check_matching_with_multibyte_ops(d, s, *pp - buf_begin);
    } else {
      work_mbls = match_lens;
    }
  } else {
    work_mbls = match_lens;
  }
  i = 0;
  while (i < (d->states + s)->mbps.nelem) {
    if (*(work_mbls + i) == *mbclen) {
      j = 0;
      while (j < (d->follows + ((d->states + s)->mbps.elems + i)->index)->nelem) {
        insert(*((d->follows + ((d->states + s)->mbps.elems + i)->index)->elems + j), pps);
        j ++;
      }
    } else {

    }
    i ++;
  }
  if ((unsigned long )match_lens == (unsigned long )((void *)0)) {
    if ((unsigned long )work_mbls != (unsigned long )((void *)0)) {
      free((void *)work_mbls);
    } else {

    }
  } else {

  }
  return (rs);
}
}
static int transit_state(struct dfa *d , int s , unsigned char const   **pp ) 
{ int s1 ;
  int mbclen ;
  int maxlen ;
  int i ;
  int j ;
  int *match_lens ;
  int nelem ;
  position_set follows ;
  unsigned char const   *p1 ;
  wchar_t wc ;
  status_transit_state rs ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  maxlen = 0;
  match_lens = (int *)((void *)0);
  nelem = (d->states + s)->mbps.nelem;
  p1 = *pp;
  if (nelem > 0) {
    match_lens = check_matching_with_multibyte_ops(d, s, *pp - buf_begin);
    i = 0;
    while (i < nelem) {
      if (*(match_lens + i) > maxlen) {
        maxlen = *(match_lens + i);
      } else {

      }
      i ++;
    }
  } else {

  }
  if (nelem == 0) {
    goto _L;
  } else {
    if (maxlen == 0) {
      _L: 
      rs = transit_state_singlebyte(d, s, *pp, & s1);
      if ((unsigned int )rs == 1U) {
        (*pp) ++;
      } else {

      }
      free((void *)match_lens);
      return (s1);
    } else {

    }
  }
  follows.nelem = 0;
  if (sizeof(position ) == 1UL) {
    tmp = xmalloc((unsigned long )d->nleaves);
    tmp___1 = tmp;
  } else {
    tmp___0 = xnmalloc((unsigned long )d->nleaves, sizeof(position ));
    tmp___1 = tmp___0;
  }
  follows.elems = (position *)tmp___1;
  transit_state_consume_1char(d, s, pp, match_lens, & mbclen, & follows);
  wc = *(inputwcs + ((*pp - mbclen) - buf_begin));
  tmp___2 = iswalnum((unsigned int )wc);
  s1 = state_index(d, (position_set const   *)(& follows), wc == 10, tmp___2);
  realloc_trans_if_necessary(d, s1);
  while (*pp - p1 < maxlen) {
    follows.nelem = 0;
    transit_state_consume_1char(d, s1, pp, (int *)((void *)0), & mbclen, & follows);
    i = 0;
    while (i < nelem) {
      if (*(match_lens + i) == *pp - p1) {
        j = 0;
        while (j < (d->follows + ((d->states + s1)->mbps.elems + i)->index)->nelem) {
          insert(*((d->follows + ((d->states + s1)->mbps.elems + i)->index)->elems + j), & follows);
          j ++;
        }
      } else {

      }
      i ++;
    }
    wc = *(inputwcs + ((*pp - mbclen) - buf_begin));
    tmp___3 = iswalnum((unsigned int )wc);
    s1 = state_index(d, (position_set const   *)(& follows), wc == 10, tmp___3);
    realloc_trans_if_necessary(d, s1);
  }
  free((void *)match_lens);
  free((void *)follows.elems);
  return (s1);
}
}
static void prepare_wc_buf(char const   *begin , char const   *end ) 
{ unsigned char eol ;
  size_t remain_bytes ;
  size_t i ;

  {
  eol = eolbyte;
  buf_begin = (unsigned char const   *)((unsigned char *)begin);
  remain_bytes = 0UL;
  i = 0UL;
  while (i < (unsigned long )((end - begin) + 1)) {
    if (remain_bytes == 0UL) {
      remain_bytes = mbrtowc((wchar_t */* __restrict  */)(inputwcs + i), (char const   */* __restrict  */)(begin + i), ((unsigned long )(end - begin) - i) + 1UL, (mbstate_t */* __restrict  */)(& mbs));
      if (remain_bytes < 1UL) {
        goto _L;
      } else {
        if (remain_bytes == 4294967295UL) {
          goto _L;
        } else {
          if (remain_bytes == 4294967294UL) {
            goto _L;
          } else {
            if (remain_bytes == 1UL) {
              if (*(inputwcs + i) == (int )*(begin + i)) {
                _L: 
                remain_bytes = 0UL;
                *(inputwcs + i) = (int )*(begin + i);
                *(mblen_buf + i) = (unsigned char)0;
                if ((int const   )*(begin + i) == (int const   )eol) {
                  break;
                } else {

                }
              } else {
                *(mblen_buf + i) = (unsigned char )remain_bytes;
                remain_bytes --;
              }
            } else {
              *(mblen_buf + i) = (unsigned char )remain_bytes;
              remain_bytes --;
            }
          }
        }
      }
    } else {
      *(mblen_buf + i) = (unsigned char )remain_bytes;
      *(inputwcs + i) = 0;
      remain_bytes --;
    }
    i ++;
  }
  buf_end = (unsigned char const   *)((unsigned char *)(begin + i));
  *(mblen_buf + i) = (unsigned char)0;
  *(inputwcs + i) = 0;
  return;
}
}
static int sbit[256]  ;
static int sbit_init  ;
char *dfaexec(struct dfa *d , char const   *begin , char *end , int newline___0 , int *count , int *backref ) 
{ int s ;
  int s1 ;
  int tmp ;
  unsigned char const   *p ;
  int **trans ;
  int *t ;
  unsigned char eol ;
  unsigned char saved_end ;
  unsigned int i ;
  unsigned short const   **tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  unsigned char const   *tmp___8 ;
  unsigned char const   *tmp___9 ;
  unsigned char const   *tmp___10 ;
  unsigned char const   *tmp___11 ;

  {
  eol = eolbyte;
  if (! sbit_init) {
    sbit_init = 1;
    i = 0U;
    while (i < (unsigned int )(1 << 8)) {
      tmp___1 = __ctype_b_loc();
      if ((int const   )*(*tmp___1 + (int )i) & 8) {
        sbit[i] = 2;
      } else {
        if (i == 95U) {
          sbit[i] = 2;
        } else {
          sbit[i] = 1;
        }
      }
      i ++;
    }
    sbit[eol] = 4;
  } else {

  }
  if (! d->tralloc) {
    build_state_zero(d);
  } else {

  }
  s1 = 0;
  s = s1;
  p = (unsigned char const   *)begin;
  trans = d->trans;
  saved_end = *((unsigned char *)end);
  *end = (char )eol;
  if (d->mb_cur_max > 1U) {
    if (sizeof(unsigned char ) == 1UL) {
      tmp___2 = xmalloc((unsigned long )((end - (char *)begin) + 2));
      tmp___4 = tmp___2;
    } else {
      tmp___3 = xnmalloc((unsigned long )((end - (char *)begin) + 2), sizeof(unsigned char ));
      tmp___4 = tmp___3;
    }
    mblen_buf = (unsigned char *)tmp___4;
    if (sizeof(wchar_t ) == 1UL) {
      tmp___5 = xmalloc((unsigned long )((end - (char *)begin) + 2));
      tmp___7 = tmp___5;
    } else {
      tmp___6 = xnmalloc((unsigned long )((end - (char *)begin) + 2), sizeof(wchar_t ));
      tmp___7 = tmp___6;
    }
    inputwcs = (wchar_t *)tmp___7;
    memset((void *)(& mbs), 0, sizeof(mbstate_t ));
    prepare_wc_buf((char const   *)p, (char const   *)end);
  } else {

  }
  while (1) {
    if (d->mb_cur_max > 1U) {
      while (1) {
        t = *(trans + s);
        if (! t) {
          break;
        } else {

        }
        if ((unsigned long )p > (unsigned long )buf_end) {
          break;
        } else {

        }
        s1 = s;
        if (s == 0) {
          while (1) {
            if (*(inputwcs + (p - buf_begin)) == 0) {
              if ((int )*(mblen_buf + (p - buf_begin)) > 0) {
                if (! ((unsigned long )p < (unsigned long )buf_end)) {
                  break;
                } else {

                }
              } else {
                break;
              }
            } else {
              break;
            }
            p ++;
          }
          if ((unsigned long )((char *)p) >= (unsigned long )end) {
            free((void *)mblen_buf);
            free((void *)inputwcs);
            *end = (char )saved_end;
            return ((char *)((void *)0));
          } else {

          }
        } else {

        }
        if ((d->states + s)->mbps.nelem == 0) {
          tmp___8 = p;
          p ++;
          s = *(t + (int const   )*tmp___8);
          continue;
        } else {

        }
        if (backref) {
          *backref = 1;
          free((void *)mblen_buf);
          free((void *)inputwcs);
          *end = (char )saved_end;
          return ((char *)p);
        } else {

        }
        s = transit_state(d, s, & p);
        trans = d->trans;
      }
    } else {
      while (1) {
        t = *(trans + s);
        if (! ((unsigned long )t != (unsigned long )((int *)0))) {
          break;
        } else {

        }
        tmp___9 = p;
        p ++;
        s1 = *(t + (int const   )*tmp___9);
        t = *(trans + s1);
        if ((unsigned long )t == (unsigned long )((int *)0)) {
          tmp = s;
          s = s1;
          s1 = tmp;
          break;
        } else {

        }
        tmp___10 = p;
        p ++;
        s = *(t + (int const   )*tmp___10);
      }
    }
    if (s >= 0) {
      if ((unsigned long )((char *)p) <= (unsigned long )end) {
        if (*(d->fails + s)) {
          if (*(d->success + s) & sbit[*p]) {
            if (backref) {
              *backref = (int )(d->states + s)->backref != 0;
            } else {

            }
            if (d->mb_cur_max > 1U) {
              free((void *)mblen_buf);
              free((void *)inputwcs);
            } else {

            }
            *end = (char )saved_end;
            return ((char *)p);
          } else {

          }
          s1 = s;
          if (d->mb_cur_max > 1U) {
            s = transit_state(d, s, & p);
            trans = d->trans;
          } else {
            tmp___11 = p;
            p ++;
            s = *(*(d->fails + s) + (int const   )*tmp___11);
          }
          goto __Cont;
        } else {

        }
      } else {

      }
    } else {

    }
    if ((unsigned long )((char *)p) <= (unsigned long )end) {
      if ((int const   )*(p + -1) == (int const   )eol) {
        if (count) {
          (*count) ++;
        } else {

        }
        if (d->mb_cur_max > 1U) {
          prepare_wc_buf((char const   *)p, (char const   *)end);
        } else {

        }
      } else {

      }
    } else {

    }
    if ((unsigned long )((char *)p) > (unsigned long )end) {
      if (d->mb_cur_max > 1U) {
        free((void *)mblen_buf);
        free((void *)inputwcs);
      } else {

      }
      *end = (char )saved_end;
      return ((char *)((void *)0));
    } else {

    }
    if (s >= 0) {
      build_state(s, d);
      trans = d->trans;
      goto __Cont;
    } else {

    }
    if ((int const   )*(p + -1) == (int const   )eol) {
      if (newline___0) {
        s = *(d->newlines + s1);
        goto __Cont;
      } else {

      }
    } else {

    }
    s = 0;
    __Cont: ;
  }
}
}
static void free_mbdata(struct dfa *d ) 
{ unsigned int i ;
  unsigned int j ;
  struct mb_char_classes *p ;

  {
  free((void *)d->multibyte_prop);
  d->multibyte_prop = (int *)((void *)0);
  i = 0U;
  while (i < (unsigned int )d->nmbcsets) {
    p = d->mbcsets + i;
    free((void *)p->chars);
    free((void *)p->ch_classes);
    free((void *)p->range_sts);
    free((void *)p->range_ends);
    j = 0U;
    while (j < (unsigned int )p->nequivs) {
      free((void *)*(p->equivs + j));
      j ++;
    }
    free((void *)p->equivs);
    j = 0U;
    while (j < (unsigned int )p->ncoll_elems) {
      free((void *)*(p->coll_elems + j));
      j ++;
    }
    free((void *)p->coll_elems);
    i ++;
  }
  free((void *)d->mbcsets);
  d->mbcsets = (struct mb_char_classes *)((void *)0);
  d->nmbcsets = 0;
  return;
}
}
void dfainit(struct dfa *d ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  size_t tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;

  {
  memset((void *)d, 0, sizeof(*d));
  d->calloc = 1;
  if (sizeof(charclass ) == 1UL) {
    tmp = xmalloc((unsigned long )d->calloc);
    tmp___1 = tmp;
  } else {
    tmp___0 = xnmalloc((unsigned long )d->calloc, sizeof(charclass ));
    tmp___1 = tmp___0;
  }
  d->charclasses = (charclass *)tmp___1;
  d->talloc = 1;
  if (sizeof(token ) == 1UL) {
    tmp___2 = xmalloc((unsigned long )d->talloc);
    tmp___4 = tmp___2;
  } else {
    tmp___3 = xnmalloc((unsigned long )d->talloc, sizeof(token ));
    tmp___4 = tmp___3;
  }
  d->tokens = (token *)tmp___4;
  tmp___5 = __ctype_get_mb_cur_max();
  d->mb_cur_max = (unsigned int )tmp___5;
  if (d->mb_cur_max > 1U) {
    d->nmultibyte_prop = 1;
    if (sizeof(int ) == 1UL) {
      tmp___6 = xmalloc((unsigned long )d->nmultibyte_prop);
      tmp___8 = tmp___6;
    } else {
      tmp___7 = xnmalloc((unsigned long )d->nmultibyte_prop, sizeof(int ));
      tmp___8 = tmp___7;
    }
    d->multibyte_prop = (int *)tmp___8;
    d->mbcsets_alloc = 1;
    if (sizeof(struct mb_char_classes ) == 1UL) {
      tmp___9 = xmalloc((unsigned long )d->mbcsets_alloc);
      tmp___11 = tmp___9;
    } else {
      tmp___10 = xnmalloc((unsigned long )d->mbcsets_alloc, sizeof(struct mb_char_classes ));
      tmp___11 = tmp___10;
    }
    d->mbcsets = (struct mb_char_classes *)tmp___11;
  } else {

  }
  return;
}
}
static void dfaoptimize(struct dfa *d ) 
{ unsigned int i ;
  int tmp ;

  {
  tmp = using_utf8();
  if (! tmp) {
    return;
  } else {

  }
  i = 0U;
  while (i < (unsigned int )d->tindex) {
    switch ((int )*(d->tokens + i)) {
    case 272: 
    abort();
    case 273: 
    return;
    default: ;
    break;
    }
    i ++;
  }
  free_mbdata(d);
  d->mb_cur_max = 1U;
  return;
}
}
void dfacomp(char const   *s , size_t len , struct dfa *d , int searchflag ) 
{ 

  {
  dfainit(d);
  __repair_del_3877__1a: /* CIL Label */ 
  {

  }
  dfamust(d);
  dfaoptimize(d);
  dfaanalyze(d, searchflag);
  return;
}
}
void dfafree(struct dfa *d ) 
{ int i ;
  struct dfamust *dm ;
  struct dfamust *ndm ;

  {
  free((void *)d->charclasses);
  free((void *)d->tokens);
  if (d->mb_cur_max > 1U) {
    free_mbdata(d);
  } else {

  }
  i = 0;
  while (i < d->sindex) {
    free((void *)(d->states + i)->elems.elems);
    free((void *)(d->states + i)->mbps.elems);
    i ++;
  }
  free((void *)d->states);
  i = 0;
  while (i < d->tindex) {
    free((void *)(d->follows + i)->elems);
    i ++;
  }
  free((void *)d->follows);
  i = 0;
  while (i < d->tralloc) {
    free((void *)*(d->trans + i));
    free((void *)*(d->fails + i));
    i ++;
  }
  free((void *)d->realtrans);
  free((void *)d->fails);
  free((void *)d->newlines);
  free((void *)d->success);
  dm = d->musts;
  while (dm) {
    ndm = dm->next;
    free((void *)dm->must);
    free((void *)dm);
    dm = ndm;
  }
  return;
}
}
static char *icatalloc(char *old , char const   *new ) 
{ char *result ;
  size_t oldsize ;
  size_t newsize ;
  size_t tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  if ((unsigned long )new == (unsigned long )((void *)0)) {
    newsize = 0UL;
  } else {
    tmp = strlen(new);
    newsize = tmp;
  }
  if ((unsigned long )old == (unsigned long )((void *)0)) {
    oldsize = 0UL;
  } else {
    if (newsize == 0UL) {
      return (old);
    } else {
      oldsize = strlen((char const   *)old);
    }
  }
  if ((unsigned long )old == (unsigned long )((void *)0)) {
    tmp___0 = malloc(newsize + 1UL);
    result = (char *)tmp___0;
  } else {
    tmp___1 = realloc((void *)old, (oldsize + newsize) + 1UL);
    result = (char *)tmp___1;
  }
  if ((unsigned long )result != (unsigned long )((void *)0)) {
    if ((unsigned long )new != (unsigned long )((void *)0)) {
      strcpy((char */* __restrict  */)(result + oldsize), (char const   */* __restrict  */)new);
    } else {

    }
  } else {

  }
  return (result);
}
}
static char *icpyalloc(char const   *string ) 
{ char *tmp ;

  {
  tmp = icatalloc((char *)((void *)0), string);
  return (tmp);
}
}
static char *istrstr(char const   *lookin , char const   *lookfor ) 
{ char const   *cp ;
  size_t len ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  len = strlen(lookfor);
  cp = lookin;
  while ((int const   )*cp != 0) {
    if (0) {
      if (0) {
        __s1_len = __builtin_strlen(cp);
        __s2_len = __builtin_strlen(lookfor);
        if (! ((unsigned long )((void const   *)(cp + 1)) - (unsigned long )((void const   *)cp) == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0: 
            if (! ((unsigned long )((void const   *)(lookfor + 1)) - (unsigned long )((void const   *)lookfor) == 1UL)) {
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
          tmp___2 = __builtin_strcmp(cp, lookfor);
          tmp___6 = tmp___2;
        } else {
          tmp___5 = __builtin_strcmp(cp, lookfor);
          tmp___6 = tmp___5;
        }
      } else {
        tmp___5 = __builtin_strcmp(cp, lookfor);
        tmp___6 = tmp___5;
      }
      tmp___9 = tmp___6;
    } else {
      tmp___8 = strncmp(cp, lookfor, len);
      tmp___9 = tmp___8;
    }
    if (tmp___9 == 0) {
      return ((char *)cp);
    } else {

    }
    cp ++;
  }
  return ((char *)((void *)0));
}
}
static void freelist(char **cpp ) 
{ int i ;

  {
  if ((unsigned long )cpp == (unsigned long )((void *)0)) {
    return;
  } else {

  }
  i = 0;
  while ((unsigned long )*(cpp + i) != (unsigned long )((void *)0)) {
    free((void *)*(cpp + i));
    *(cpp + i) = (char *)((void *)0);
    i ++;
  }
  return;
}
}
static char **enlist(char **cpp , char *new , size_t len ) 
{ int i ;
  int j ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;

  {
  if ((unsigned long )cpp == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {

  }
  new = icpyalloc((char const   *)new);
  if ((unsigned long )new == (unsigned long )((void *)0)) {
    freelist(cpp);
    return ((char **)((void *)0));
  } else {

  }
  *(new + len) = (char )'\000';
  i = 0;
  while ((unsigned long )*(cpp + i) != (unsigned long )((void *)0)) {
    tmp = istrstr((char const   *)*(cpp + i), (char const   *)new);
    if ((unsigned long )tmp != (unsigned long )((void *)0)) {
      free((void *)new);
      return (cpp);
    } else {

    }
    i ++;
  }
  j = 0;
  while ((unsigned long )*(cpp + j) != (unsigned long )((void *)0)) {
    tmp___0 = istrstr((char const   *)new, (char const   *)*(cpp + j));
    if ((unsigned long )tmp___0 == (unsigned long )((void *)0)) {
      j ++;
    } else {
      free((void *)*(cpp + j));
      i --;
      if (i == j) {
        break;
      } else {

      }
      *(cpp + j) = *(cpp + i);
      *(cpp + i) = (char *)((void *)0);
    }
  }
  tmp___1 = xnrealloc((void *)cpp, (unsigned long )(i + 2), sizeof(*cpp));
  cpp = (char **)tmp___1;
  *(cpp + i) = new;
  *(cpp + (i + 1)) = (char *)((void *)0);
  return (cpp);
}
}
static char **comsubs(char *left , char const   *right ) 
{ char **cpp ;
  char *lcp ;
  char *rcp ;
  size_t i ;
  size_t len ;
  void *tmp ;
  char *tmp___1 ;
  char *tmp___3 ;

  {
  if ((unsigned long )left == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {
    if ((unsigned long )right == (unsigned long )((void *)0)) {
      return ((char **)((void *)0));
    } else {

    }
  }
  tmp = malloc(sizeof(*cpp));
  cpp = (char **)tmp;
  if ((unsigned long )cpp == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {

  }
  *(cpp + 0) = (char *)((void *)0);
  lcp = left;
  while ((int )*lcp != 0) {
    len = 0UL;
    tmp___1 = __builtin_strchr((char *)right, (int )*lcp);
    rcp = tmp___1;
    while ((unsigned long )rcp != (unsigned long )((void *)0)) {
      i = 1UL;
      while (1) {
        if ((int )*(lcp + i) != 0) {
          if (! ((int )*(lcp + i) == (int )*(rcp + i))) {
            break;
          } else {

          }
        } else {
          break;
        }
        goto __Cont;
        __Cont: 
        i ++;
      }
      if (i > len) {
        len = i;
      } else {

      }
      tmp___3 = __builtin_strchr(rcp + 1, (int )*lcp);
      rcp = tmp___3;
    }
    if (len == 0UL) {
      goto __Cont___0;
    } else {

    }
    cpp = enlist(cpp, lcp, len);
    if ((unsigned long )cpp == (unsigned long )((void *)0)) {
      break;
    } else {

    }
    __Cont___0: 
    lcp ++;
  }
  return (cpp);
}
}
static char **addlists(char **old , char **new ) 
{ int i ;
  size_t tmp ;

  {
  if ((unsigned long )old == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {
    if ((unsigned long )new == (unsigned long )((void *)0)) {
      return ((char **)((void *)0));
    } else {

    }
  }
  i = 0;
  while ((unsigned long )*(new + i) != (unsigned long )((void *)0)) {
    tmp = strlen((char const   *)*(new + i));
    old = enlist(old, *(new + i), tmp);
    if ((unsigned long )old == (unsigned long )((void *)0)) {
      break;
    } else {

    }
    i ++;
  }
  return (old);
}
}
static char **inboth(char **left , char **right ) 
{ char **both ;
  char **temp ;
  int lnum ;
  int rnum ;
  void *tmp ;

  {
  if ((unsigned long )left == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {
    if ((unsigned long )right == (unsigned long )((void *)0)) {
      return ((char **)((void *)0));
    } else {

    }
  }
  tmp = malloc(sizeof(*both));
  both = (char **)tmp;
  if ((unsigned long )both == (unsigned long )((void *)0)) {
    return ((char **)((void *)0));
  } else {

  }
  *(both + 0) = (char *)((void *)0);
  lnum = 0;
  while ((unsigned long )*(left + lnum) != (unsigned long )((void *)0)) {
    rnum = 0;
    while ((unsigned long )*(right + rnum) != (unsigned long )((void *)0)) {
      temp = comsubs(*(left + lnum), (char const   *)*(right + rnum));
      if ((unsigned long )temp == (unsigned long )((void *)0)) {
        freelist(both);
        return ((char **)((void *)0));
      } else {

      }
      both = addlists(both, temp);
      freelist(temp);
      free((void *)temp);
      if ((unsigned long )both == (unsigned long )((void *)0)) {
        return ((char **)((void *)0));
      } else {

      }
      rnum ++;
    }
    lnum ++;
  }
  return (both);
}
}
static void resetmust(must *mp ) 
{ char tmp ;
  char tmp___0 ;

  {
  tmp___0 = (char )'\000';
  *(mp->is + 0) = tmp___0;
  tmp = tmp___0;
  *(mp->right + 0) = tmp;
  *(mp->left + 0) = tmp;
  freelist(mp->in);
  return;
}
}
static must must0  ;
static char empty_string[1]  = {      (char )'\000'};
static void dfamust(struct dfa *d ) 
{ must *musts ;
  must *mp ;
  char *result ;
  int ri ;
  int i ;
  int exact ;
  token t ;
  struct dfamust *dm ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  char tmp___4 ;
  char tmp___5 ;
  char **new ;
  must *lmp ;
  must *rmp ;
  int j ;
  int ln ;
  int rn ;
  int n ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___7 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___18 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  must *lmp___0 ;
  must *rmp___0 ;
  char *tp ;
  size_t tmp___24 ;
  char tmp___25 ;
  char tmp___26 ;
  char tmp___27 ;
  char tmp___28 ;
  void *tmp___29 ;
  void *tmp___30 ;
  void *tmp___31 ;
  size_t tmp___32 ;
  void *tmp___33 ;
  size_t tmp___34 ;
  void *tmp___35 ;
  void *tmp___36 ;
  size_t tmp___37 ;

  {
  result = empty_string;
  exact = 0;
  tmp = xnmalloc((unsigned long )(d->tindex + 1), sizeof(*musts));
  musts = (must *)tmp;
  mp = musts;
  i = 0;
  while (i <= d->tindex) {
    *(mp + i) = must0;
    i ++;
  }
  i = 0;
  while (i <= d->tindex) {
    tmp___0 = malloc(sizeof(*((mp + i)->in)));
    (mp + i)->in = (char **)tmp___0;
    tmp___1 = malloc(2UL);
    (mp + i)->left = (char *)tmp___1;
    tmp___2 = malloc(2UL);
    (mp + i)->right = (char *)tmp___2;
    tmp___3 = malloc(2UL);
    (mp + i)->is = (char *)tmp___3;
    if ((unsigned long )(mp + i)->in == (unsigned long )((void *)0)) {
      goto done;
    } else {
      if ((unsigned long )(mp + i)->left == (unsigned long )((void *)0)) {
        goto done;
      } else {
        if ((unsigned long )(mp + i)->right == (unsigned long )((void *)0)) {
          goto done;
        } else {
          if ((unsigned long )(mp + i)->is == (unsigned long )((void *)0)) {
            goto done;
          } else {

          }
        }
      }
    }
    tmp___5 = (char )'\000';
    *((mp + i)->is + 0) = tmp___5;
    tmp___4 = tmp___5;
    *((mp + i)->right + 0) = tmp___4;
    *((mp + i)->left + 0) = tmp___4;
    *((mp + i)->in + 0) = (char *)((void *)0);
    i ++;
  }
  ri = 0;
  while (ri < d->tindex) {
    t = *(d->tokens + ri);
    switch ((int )t) {
    case 270: 
    case 271: 
    __assert_fail("!\"neither LPAREN nor RPAREN may appear here\"", "dfa.c", 3868U, "dfamust");
    case 256: 
    case 258: 
    case 259: 
    case 260: 
    case 261: 
    case 262: 
    case 263: 
    case 257: 
    resetmust(mp);
    break;
    case 265: 
    case 264: 
    if (! ((unsigned long )musts < (unsigned long )mp)) {
      __assert_fail("musts < mp", "dfa.c", 3881U, "dfamust");
    } else {

    }
    mp --;
    resetmust(mp);
    break;
    case 269: 
    if (! ((unsigned long )(musts + 2) <= (unsigned long )mp)) {
      __assert_fail("&musts[2] <= mp", "dfa.c", 3886U, "dfamust");
    } else {

    }
    mp --;
    rmp = mp;
    mp --;
    lmp = mp;
    if (0) {
      __s1_len = __builtin_strlen((char const   *)lmp->is);
      __s2_len = __builtin_strlen((char const   *)rmp->is);
      if (! ((unsigned long )((void const   *)(lmp->is + 1)) - (unsigned long )((void const   *)lmp->is) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0: 
          if (! ((unsigned long )((void const   *)(rmp->is + 1)) - (unsigned long )((void const   *)rmp->is) == 1UL)) {
            tmp___12 = 1;
          } else {
            if (__s2_len >= 4UL) {
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
        tmp___7 = __builtin_strcmp((char const   *)lmp->is, (char const   *)rmp->is);
        tmp___11 = tmp___7;
      } else {
        tmp___10 = __builtin_strcmp((char const   *)lmp->is, (char const   *)rmp->is);
        tmp___11 = tmp___10;
      }
    } else {
      tmp___10 = __builtin_strcmp((char const   *)lmp->is, (char const   *)rmp->is);
      tmp___11 = tmp___10;
    }
    if (! (tmp___11 == 0)) {
      *(lmp->is + 0) = (char )'\000';
    } else {

    }
    i = 0;
    while (1) {
      if ((int )*(lmp->left + i) != 0) {
        if (! ((int )*(lmp->left + i) == (int )*(rmp->left + i))) {
          break;
        } else {

        }
      } else {
        break;
      }
      i ++;
    }
    *(lmp->left + i) = (char )'\000';
    tmp___13 = strlen((char const   *)lmp->right);
    ln = (int )tmp___13;
    tmp___14 = strlen((char const   *)rmp->right);
    rn = (int )tmp___14;
    n = ln;
    if (n > rn) {
      n = rn;
    } else {

    }
    i = 0;
    while (i < n) {
      if ((int )*(lmp->right + ((ln - i) - 1)) != (int )*(rmp->right + ((rn - i) - 1))) {
        break;
      } else {

      }
      i ++;
    }
    j = 0;
    while (j < i) {
      *(lmp->right + j) = *(lmp->right + ((ln - i) + j));
      j ++;
    }
    *(lmp->right + j) = (char )'\000';
    new = inboth(lmp->in, rmp->in);
    if ((unsigned long )new == (unsigned long )((void *)0)) {
      goto done;
    } else {

    }
    freelist(lmp->in);
    free((void *)lmp->in);
    lmp->in = new;
    break;
    case 266: 
    if (! ((unsigned long )musts < (unsigned long )mp)) {
      __assert_fail("musts < mp", "dfa.c", 3924U, "dfamust");
    } else {

    }
    mp --;
    *(mp->is + 0) = (char )'\000';
    break;
    case -1: 
    if (! ((unsigned long )mp == (unsigned long )(musts + 1))) {
      __assert_fail("mp == &musts[1]", "dfa.c", 3929U, "dfamust");
    } else {

    }
    i = 0;
    while ((unsigned long )*((musts + 0)->in + i) != (unsigned long )((void *)0)) {
      tmp___15 = strlen((char const   *)*((musts + 0)->in + i));
      tmp___16 = strlen((char const   *)result);
      if (tmp___15 > tmp___16) {
        result = *((musts + 0)->in + i);
      } else {

      }
      i ++;
    }
    if (0) {
      __s1_len___0 = __builtin_strlen((char const   *)result);
      __s2_len___0 = __builtin_strlen((char const   *)(musts + 0)->is);
      if (! ((unsigned long )((void const   *)(result + 1)) - (unsigned long )((void const   *)result) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2: 
          if (! ((unsigned long )((void const   *)((musts + 0)->is + 1)) - (unsigned long )((void const   *)(musts + 0)->is) == 1UL)) {
            tmp___23 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
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
        tmp___18 = __builtin_strcmp((char const   *)result, (char const   *)(musts + 0)->is);
        tmp___22 = tmp___18;
      } else {
        tmp___21 = __builtin_strcmp((char const   *)result, (char const   *)(musts + 0)->is);
        tmp___22 = tmp___21;
      }
    } else {
      tmp___21 = __builtin_strcmp((char const   *)result, (char const   *)(musts + 0)->is);
      tmp___22 = tmp___21;
    }
    if (tmp___22 == 0) {
      exact = 1;
    } else {

    }
    goto done;
    case 268: 
    if (! ((unsigned long )(musts + 2) <= (unsigned long )mp)) {
      __assert_fail("&musts[2] <= mp", "dfa.c", 3937U, "dfamust");
    } else {

    }
    mp --;
    rmp___0 = mp;
    mp --;
    lmp___0 = mp;
    lmp___0->in = addlists(lmp___0->in, rmp___0->in);
    if ((unsigned long )lmp___0->in == (unsigned long )((void *)0)) {
      goto done;
    } else {

    }
    if ((int )*(lmp___0->right + 0) != 0) {
      if ((int )*(rmp___0->left + 0) != 0) {
        tp = icpyalloc((char const   *)lmp___0->right);
        if ((unsigned long )tp == (unsigned long )((void *)0)) {
          goto done;
        } else {

        }
        tp = icatalloc(tp, (char const   *)rmp___0->left);
        if ((unsigned long )tp == (unsigned long )((void *)0)) {
          goto done;
        } else {

        }
        tmp___24 = strlen((char const   *)tp);
        lmp___0->in = enlist(lmp___0->in, tp, tmp___24);
        free((void *)tp);
        if ((unsigned long )lmp___0->in == (unsigned long )((void *)0)) {
          goto done;
        } else {

        }
      } else {

      }
    } else {

    }
    if ((int )*(lmp___0->is + 0) != 0) {
      lmp___0->left = icatalloc(lmp___0->left, (char const   *)rmp___0->left);
      if ((unsigned long )lmp___0->left == (unsigned long )((void *)0)) {
        goto done;
      } else {

      }
    } else {

    }
    if ((int )*(rmp___0->is + 0) == 0) {
      *(lmp___0->right + 0) = (char )'\000';
    } else {

    }
    lmp___0->right = icatalloc(lmp___0->right, (char const   *)rmp___0->right);
    if ((unsigned long )lmp___0->right == (unsigned long )((void *)0)) {
      goto done;
    } else {

    }
    if ((int )*(lmp___0->is + 0) != 0) {
      if ((int )*(rmp___0->is + 0) != 0) {
        lmp___0->is = icatalloc(lmp___0->is, (char const   *)rmp___0->is);
        if ((unsigned long )lmp___0->is == (unsigned long )((void *)0)) {
          goto done;
        } else {

        }
      } else {
        *(lmp___0->is + 0) = (char )'\000';
      }
    } else {
      *(lmp___0->is + 0) = (char )'\000';
    }
    break;
    default: ;
    if ((int )t < -1) {
      __assert_fail("!\"oops! t >= END\"", "dfa.c", 3995U, "dfamust");
    } else {
      if ((int )t == 0) {
        goto done;
      } else {
        if ((int )t >= 275) {
          resetmust(mp);
        } else {
          if ((int )t == 272) {
            resetmust(mp);
          } else {
            if ((int )t == 273) {
              resetmust(mp);
            } else {
              resetmust(mp);
              tmp___26 = (char )t;
              *(mp->right + 0) = tmp___26;
              tmp___25 = tmp___26;
              *(mp->left + 0) = tmp___25;
              *(mp->is + 0) = tmp___25;
              tmp___28 = (char )'\000';
              *(mp->right + 1) = tmp___28;
              tmp___27 = tmp___28;
              *(mp->left + 1) = tmp___27;
              *(mp->is + 1) = tmp___27;
              mp->in = enlist(mp->in, mp->is, 1UL);
              if ((unsigned long )mp->in == (unsigned long )((void *)0)) {
                goto done;
              } else {

              }
            }
          }
        }
      }
    }
    break;
    }
    mp ++;
    ri ++;
  }
  done: 
  tmp___37 = strlen((char const   *)result);
  if (tmp___37) {
    if (sizeof(struct dfamust ) == 1UL) {
      tmp___29 = xmalloc(1UL);
      tmp___31 = tmp___29;
    } else {
      tmp___30 = xnmalloc(1UL, sizeof(struct dfamust ));
      tmp___31 = tmp___30;
    }
    dm = (struct dfamust *)tmp___31;
    dm->exact = exact;
    if (sizeof(char ) == 1UL) {
      tmp___32 = strlen((char const   *)result);
      tmp___33 = xmalloc(tmp___32 + 1UL);
      tmp___36 = tmp___33;
    } else {
      tmp___34 = strlen((char const   *)result);
      tmp___35 = xnmalloc(tmp___34 + 1UL, sizeof(char ));
      tmp___36 = tmp___35;
    }
    dm->must = (char *)tmp___36;
    strcpy((char */* __restrict  */)dm->must, (char const   */* __restrict  */)result);
    dm->next = d->musts;
    d->musts = dm;
  } else {

  }
  mp = musts;
  i = 0;
  while (i <= d->tindex) {
    freelist((mp + i)->in);
    free((void *)(mp + i)->in);
    free((void *)(mp + i)->left);
    free((void *)(mp + i)->right);
    free((void *)(mp + i)->is);
    i ++;
  }
  free((void *)mp);
  return;
}
}
struct dfa *dfaalloc(void) 
{ void *tmp ;

  {
  tmp = xmalloc(sizeof(struct dfa ));
  return ((struct dfa *)tmp);
}
}
struct dfamust *dfamusts(struct dfa  const  *d ) 
{ 

  {
  return ((struct dfamust *)d->musts);
}
}
