include(__link__.m4)

#ifndef __ERRNO_H__
#define __ERRNO_H__

#include <arch.h>

extern int errno;

#define EOK            __EOK
#define EACCES         __EACCES
#define EBADF          __EBADF
#define EBDFD          __EBDFD
#define EDOM           __EDOM
#define EFBIG          __EFBIG
#define EINVAL         __EINVAL
#define EMFILE         __EMFILE
#define ENFILE         __ENFILE
#define ENOLCK         __ENOLCK
#define ENOMEM         __ENOMEM
#define ENOTSUP        __ENOTSUP
#define EOVERFLOW      __EOVERFLOW
#define ERANGE         __ERANGE
#define ESTAT          __ESTAT
#define EWOULDBLOCK    __EWOULDBLOCK
#define EAGAIN         __EAGAIN

// target specific errors below

#endif
