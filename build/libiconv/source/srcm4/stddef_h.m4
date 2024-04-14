dnl A placeholder for <stddef.h>, for platforms that have issues.
# stddef_h.m4 serial 6
dnl Copyright (C) 2009-2019 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_STDDEF_H],
[
  AC_REQUIRE([gl_STDDEF_H_DEFAULTS])
  AC_REQUIRE([gt_TYPE_WCHAR_T])
  STDDEF_H=

  dnl Test whether the type max_align_t exists and whether its alignment
  dnl "is as great as is supported by the implementation in all contexts".
  AC_CACHE_CHECK([for good max_align_t],
    [gl_cv_type_max_align_t],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[#include <stddef.h>
            unsigned int s = sizeof (max_align_t);
            #if defined __GNUC__ || defined __IBM__ALIGNOF__
            int check1[2 * (__alignof__ (double) <= __alignof__ (max_align_t)) - 1];
            int check2[2 * (__alignof__ (long double) <= __alignof__ (max_align_t)) - 1];
            #endif
          ]])],
       [gl_cv_type_max_align_t=yes],
       [gl_cv_type_max_align_t=no])
    ])
  if test $gl_cv_type_max_align_t = no; then
    HAVE_MAX_ALIGN_T=0
    STDDEF_H=stddef.h
  fi

  if test $gt_cv_c_wchar_t = no; then
    HAVE_WCHAR_T=0
    STDDEF_H=stddef.h
  fi

  AC_CACHE_CHECK([whether NULL can be used in arbitrary expressions],
    [gl_cv_decl_null_works],
    [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <stddef.h>
      int test[2 * (sizeof NULL == sizeof (void *)) -1];
]])],
      [gl_cv_decl_null_works=yes],
      [gl_cv_decl_null_works=no])])
  if test $gl_cv_decl_null_works = no; then
    REPLACE_NULL=1
    STDDEF_H=stddef.h
  fi

  AC_SUBST([STDDEF_H])
  AM_CONDITIONAL([GL_GENERATE_STDDEF_H], [test -n "$STDDEF_H"])
  if test -n "$STDDEF_H"; then
    gl_NEXT_HEADERS([stddef.h])
  fi
])

AC_DEFUN([gl_STDDEF_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_STDDEF_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
])

AC_DEFUN([gl_STDDEF_H_DEFAULTS],
[
  dnl Assume proper GNU behavior unless another module says otherwise.
  REPLACE_NULL=0;                AC_SUBST([REPLACE_NULL])
  HAVE_MAX_ALIGN_T=1;            AC_SUBST([HAVE_MAX_ALIGN_T])
  HAVE_WCHAR_T=1;                AC_SUBST([HAVE_WCHAR_T])
])
