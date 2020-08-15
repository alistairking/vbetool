AC_PREREQ(2.57)
AC_INIT([vbetool], 1.3)

AM_INIT_AUTOMAKE([foreign])
LT_INIT

AC_CONFIG_HEADERS([config.h])

AC_PROG_CC
AC_PROG_LIBTOOL

AC_CHECK_LIB([pciaccess], [pci_device_vgaarb_init], [], [AC_MSG_ERROR(libpciaccess required)])
AC_CHECK_LIB([x86], [LRMI_init], [], [AC_MSG_ERROR(libx86 required)])

AC_OUTPUT([Makefile])
