PKGDIR		?= ../..
L4DIR		?= $(PKGDIR)/../../..

TARGET		             = libl4sys.a        libl4sys.so        \
                               libl4sys-direct.a libl4sys-direct.so \
                               libl4sys-l4x.a    libl4sys-l4x.so
PC_FILENAMES                 = l4sys l4sys-direct l4sys-l4x
PC_LIBS_l4sys                = -ll4sys
PC_EXTRA_l4sys               = Link_Libs= %{static|static-pie:-ll4sys}
PC_LIBS_l4sys-direct         = -ll4sys-direct
PC_EXTRA_l4sys-direct        = Link_Libs= %{static|static-pie:-ll4sys-direct}
PC_LIBS_l4sys-l4x            = -ll4sys-l4x
PC_EXTRA_l4sys-l4x           = Link_Libs= %{static|static-pie:-ll4sys-l4x}

CXXFLAGS                    += -DL4_NO_RTTI -fno-rtti -fno-exceptions
DEFINES                      = -DL4_KIP_ADDR=$(L4_KIP_ADDR)

SRC_CC                       = kobject.cc
SRC_S_libl4sys-arm          += ARCH-arm/atomic_ops_s.S
SRC_C_libl4sys-ppc32        += ARCH-ppc32/atomic_ops.c
SRC_S_libl4sys-sparc        += ARCH-sparc/atomic_ops.S

SRC_S_libl4sys.a-arm         = ARCH-arm/syscall.S
SRC_S_libl4sys.a-arm64       = ARCH-arm64/syscall.S
SRC_S_libl4sys.so-arm        = ARCH-arm/syscall.S
SRC_S_libl4sys.so-arm64      = ARCH-arm64/syscall.S

SRC_S_libl4sys-direct.so     =
SRC_S_libl4sys-direct.a-arm  = ARCH-arm/syscall.S
SRC_S_libl4sys-direct.a-arm64 = ARCH-arm64/syscall.S
SRC_S_libl4sys-direct.a-x86  = ARCH-x86/syscalls_direct.S
SRC_S_libl4sys-direct.a      = kip.S $(SRC_S_libl4sys-direct.a-$(ARCH))

SRC_C_libl4sys.a             = utcb.c errtostr.c $(SRC_C_libl4sys-$(ARCH))
SRC_C_libl4sys.so            = utcb.c errtostr.c $(SRC_C_libl4sys-$(ARCH))
SRC_S_libl4sys.a             = kip.S $(SRC_S_libl4sys.a-$(ARCH)) \
                               $(SRC_S_libl4sys-$(ARCH))
SRC_S_libl4sys.so            = $(SRC_S_libl4sys.so-$(ARCH)) \
                               $(SRC_S_libl4sys-$(ARCH))

SRC_C_libl4sys-l4x.a         = utcb.c errtostr.c $(SRC_C_libl4sys-$(ARCH))
SRC_C_libl4sys-l4x.so        = utcb.c errtostr.c $(SRC_C_libl4sys-$(ARCH))
SRC_S_libl4sys-l4x.a         = kip.S $(SRC_S_libl4sys-$(ARCH))
SRC_S_libl4sys-l4x.so        = $(SRC_S_libl4sys-$(ARCH))

SRC_C_l4lx-arm               = utcb.c
SRC_C_l4lx-amd64             = utcb.c
SRC_S_l4lx-arm               = ARCH-arm/atomic_ops_s.S
SRC_C_l4lx-mips              = utcb.c
SRC_C_l4lx-ppc32             = utcb.c ARCH-ppc32/atomic_ops.c
SRC_C_l4lx-riscv             = utcb.c
SRC_C_l4lx-x86               = ARCH-x86/utcb-l4x.c
SRC_C_libl4sys-l4x.a         = errtostr.c $(SRC_C_l4lx-$(ARCH))
SRC_S_libl4sys-l4x.a         = $(SRC_S_l4lx-$(ARCH))

COMPILER_RT                  = compiler-rt-pure

include $(L4DIR)/mk/lib.mk
