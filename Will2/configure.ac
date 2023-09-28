# Initialize Autoconf
AC_INIT([factorial], [1.0])

# Require a C compiler
AC_PROG_CC

# Check for necessary programs
AC_CHECK_PROGS([INSTALL], [install])

# Check for headers and functions
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_FUNCS([printf scanf])

# Define source and build directories (user-provided or defaults)
AC_ARG_WITH([source-dir],
  AS_HELP_STRING([--with-source-dir=DIR], [Directory containing source files]),
  [SRC_DIR=$withval],
  [SRC_DIR=/Users/user/will2])

AC_ARG_WITH([install-dir],
  AS_HELP_STRING([--with-install-dir=DIR], [Installation directory]),
  [INSTALL_DIR=$withval],
  [INSTALL_DIR=/usr/local/bin])

# Documentation files
DOCS_DIR=docs
DOXYGEN_CONF=Doxyfile

# Additional scripts
WC_SCRIPT=wc_script.sh

# Compiler and flags
CC=gcc
CFLAGS="-Wall -O2"  # Enclose the flags in double quotes

# Output Makefile
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

