typedef long jmp_buf[8];
typedef unsigned int ml_size_t;
typedef int ml_off_t;
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef unsigned long size_t;
typedef int bool;
inline void __attribute__((noreturn,always_inline))__ABORT(){
 __asm__("xor %esp,%esp\nxor %ebp,%ebp\nret");
 __builtin_unreachable();
}
typedef struct _text_match { char *pos; int len; } text_match;
typedef int FILE;
typedef union { FILE *F; int i, fd;} mfl_union;
typedef struct { int quot; int rem; } div_t;
typedef struct { long int quot; long int rem; } ldiv_t;
typedef struct { unsigned int quot; unsigned int rem; } uidiv_t;
typedef struct { unsigned long int quot; unsigned long int rem; } uldiv_t;
typedef void (*sighandler_t)(int);
typedef void (functionp)(void);
typedef struct {
  int tz_minuteswest;
  int tz_dsttime;
} timezone;
typedef long time_t;
typedef long suseconds_t;
typedef unsigned useconds_t;
struct timeval { time_t tv_sec; suseconds_t tv_usec; };
struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
typedef unsigned long size_t;
typedef unsigned char uchar;
typedef int wchar_t;
typedef long double double_t;
typedef float float_t;
typedef struct { long long __ll; long double __ld; } max_align_t;
typedef struct { union { int __i[14]; volatile int __vi[14]; unsigned long __s[7]; } __u; } pthread_attr_t;
typedef struct { union { int __i[10]; volatile int __vi[10]; volatile void *volatile __p[5]; } __u; } pthread_mutex_t;
typedef struct { union { int __i[10]; volatile int __vi[10]; volatile void *volatile __p[5]; } __u; } mtx_t;
typedef struct { union { int __i[12]; volatile int __vi[12]; void *__p[6]; } __u; } pthread_cond_t;
typedef struct { union { int __i[12]; volatile int __vi[12]; void *__p[6]; } __u; } cnd_t;
typedef struct { union { int __i[14]; volatile int __vi[14]; void *__p[7]; } __u; } pthread_rwlock_t;
typedef struct { union { int __i[8]; volatile int __vi[8]; void *__p[4]; } __u; } pthread_barrier_t;
typedef unsigned long uintptr_t;
typedef long ssize_t;
typedef long intptr_t;
typedef long regoff_t;
typedef long register_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
typedef signed long intmax_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef unsigned long u_int64_t;
typedef unsigned long uintmax_t;
typedef unsigned mode_t;
typedef unsigned long nlink_t;
typedef long off_t;
typedef unsigned long ino_t;
typedef unsigned long dev_t;
typedef long blksize_t;
typedef long blkcnt_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;
typedef unsigned wint_t;
typedef unsigned long wctype_t;
typedef void * timer_t;
typedef int clockid_t;
typedef long clock_t;
struct timespec { time_t tv_sec; long tv_nsec; };
typedef int pid_t;
typedef unsigned id_t;
typedef unsigned uid_t;
typedef unsigned gid_t;
typedef int key_t;
typedef struct __mbstate_t { unsigned __opaque1, __opaque2; } mbstate_t;
typedef struct __locale_struct * locale_t;
struct iovec { void *iov_base; size_t iov_len; };
typedef unsigned socklen_t;
typedef unsigned short sa_family_t;
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
struct stat {
  dev_t st_dev;
  ino_t st_ino;
  nlink_t st_nlink;
  mode_t st_mode;
  uid_t st_uid;
  gid_t st_gid;
  unsigned int __pad0;
  dev_t st_rdev;
  off_t st_size;
  blksize_t st_blksize;
  blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  long __unused[3];
};
struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned u_int32_t;
typedef char *caddr_t;
typedef unsigned char u_char;
typedef unsigned short u_short, ushort;
typedef unsigned u_int, uint;
typedef unsigned long u_long, ulong;
typedef long long quad_t;
typedef unsigned long long u_quad_t;
int isalnum_l(int, locale_t);
int isalpha_l(int, locale_t);
int isblank_l(int, locale_t);
int iscntrl_l(int, locale_t);
int isdigit_l(int, locale_t);
int isgraph_l(int, locale_t);
int islower_l(int, locale_t);
int isprint_l(int, locale_t);
int ispunct_l(int, locale_t);
int isspace_l(int, locale_t);
int isupper_l(int, locale_t);
int isxdigit_l(int, locale_t);
int tolower_l(int, locale_t);
int toupper_l(int, locale_t);
typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
struct timex {
 int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;
 struct timeval time;
 long tick;
 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;
 int tai;
};
struct inotify_event {
 int wd;
 uint32_t mask, cookie, len;
 char name[];
};
struct statx_timestamp{
  int64_t tv_sec;
  uint32_t tv_nsec;
  int32_t __statx_timestamp_pad1[1];
};
struct statx{
  uint32_t stx_mask;
  uint32_t stx_blksize;
  uint64_t stx_attributes;
  uint32_t stx_nlink;
  uint32_t stx_uid;
  uint32_t stx_gid;
  uint16_t stx_mode;
  uint16_t __statx_pad1[1];
  uint64_t stx_ino;
  uint64_t stx_size;
  uint64_t stx_blocks;
  uint64_t stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  uint32_t stx_rdev_major;
  uint32_t stx_rdev_minor;
  uint32_t stx_dev_major;
  uint32_t stx_dev_minor;
  uint64_t __statx_pad2[14];
};
typedef long long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef int sig_atomic_t;
typedef void (*__sighandler_t) (int);
typedef __sighandler_t sig_t;
typedef unsigned long __u64;
typedef unsigned int __u32;
typedef signed long __s64;
typedef signed int __s32;
typedef unsigned short __u16;
typedef signed short __s16;
struct fsxattr {
 uint32_t fsx_xflags;
 uint32_t fsx_extsize;
 uint32_t fsx_nextents;
 uint32_t fsx_projid;
 uint32_t fsx_cowextsize;
 unsigned char fsx_pad[8];
};
struct prctl_mm_map {
 uint64_t start_code;
 uint64_t end_code;
 uint64_t start_data;
 uint64_t end_data;
 uint64_t start_brk;
 uint64_t brk;
 uint64_t start_stack;
 uint64_t arg_start;
 uint64_t arg_end;
 uint64_t env_start;
 uint64_t env_end;
 uint64_t *auxv;
 uint32_t auxv_size;
 uint32_t exe_fd;
};
typedef long __band_t;
typedef union sigval {
  int sival_int;
  void *sival_ptr;
} sigval_t;
typedef struct siginfo {
  int32_t si_signo;
  int32_t si_errno;
  int32_t si_code;
  union {
    char __pad[128 - 2*sizeof(int) - sizeof(long)];
    struct {
      pid_t _pid;
      uid_t _uid;
    } _kill;
    struct {
      uint32_t _timer1;
      uint32_t _timer2;
    } _timer;
    struct {
      pid_t _pid;
      uid_t _uid;
      sigval_t _sigval;
    } _rt;
    struct {
      pid_t _pid;
      uid_t _uid;
      int32_t _status;
      clock_t _utime;
      clock_t _stime;
    } _sigchld;
    struct {
      void *_addr;
    } _sigfault;
    struct {
      __band_t _band;
      int32_t _fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
typedef struct __sigset_t { unsigned long sig; } sigset_t;
struct sigaction {
  void (*sa_handler)(int);
  unsigned long sa_flags;
  void (*restorer)(void);
  sigset_t sa_mask;
};
struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
  };
struct oldold_utsname {
        char sysname[9];
        char nodename[9];
        char release[9];
        char version[9];
        char machine[9];
};
struct old_utsname {
        char sysname[65];
        char nodename[65];
        char release[65];
        char version[65];
        char machine[65];
};
struct new_utsname {
        char sysname[64 + 1];
        char nodename[64 + 1];
        char release[64 + 1];
        char version[64 + 1];
        char machine[64 + 1];
        char domainname[64 + 1];
};
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 __kernel_long_t ru_maxrss;
 __kernel_long_t ru_ixrss;
 __kernel_long_t ru_idrss;
 __kernel_long_t ru_isrss;
 __kernel_long_t ru_minflt;
 __kernel_long_t ru_majflt;
 __kernel_long_t ru_nswap;
 __kernel_long_t ru_inblock;
 __kernel_long_t ru_oublock;
 __kernel_long_t ru_msgsnd;
 __kernel_long_t ru_msgrcv;
 __kernel_long_t ru_nsignals;
 __kernel_long_t ru_nvcsw;
 __kernel_long_t ru_nivcsw;
};
struct rlimit {
 __kernel_ulong_t rlim_cur;
 __kernel_ulong_t rlim_max;
};
typedef unsigned long rlim_t;
struct rlimit64 {
 __u64 rlim_cur;
 __u64 rlim_max;
};
enum fsconfig_command {
 FSCONFIG_SET_FLAG = 0,
 FSCONFIG_SET_STRING = 1,
 FSCONFIG_SET_BINARY = 2,
 FSCONFIG_SET_PATH = 3,
 FSCONFIG_SET_PATH_EMPTY = 4,
 FSCONFIG_SET_FD = 5,
 FSCONFIG_CMD_CREATE = 6,
 FSCONFIG_CMD_RECONFIGURE = 7,
};
struct seccomp_data {
 int nr;
 __u32 arch;
 __u64 instruction_pointer;
 __u64 args[6];
};
struct seccomp_notif_sizes {
 __u16 seccomp_notif;
 __u16 seccomp_notif_resp;
 __u16 seccomp_data;
};
struct seccomp_notif {
 __u64 id;
 __u32 pid;
 __u32 flags;
 struct seccomp_data data;
};
struct seccomp_notif_resp {
 __u64 id;
 __s64 val;
 __s32 error;
 __u32 flags;
};
typedef struct __user_cap_header_struct {
 uint32_t version;
 int pid;
} *cap_user_header_t;
typedef struct __user_cap_data_struct {
        uint32_t effective;
        uint32_t permitted;
        uint32_t inheritable;
} *cap_user_data_t;
typedef int cap_value_t;
struct vfs_cap_data {
 uint32_t magic_etc; struct { uint32_t permitted; uint32_t inheritable; } data[2];
};
struct vfs_ns_cap_data {
 uint32_t magic_etc; struct { uint32_t permitted; uint32_t inheritable; } data[2];
 uint32_t rootid;
};
typedef enum {
    CAP_EFFECTIVE = 0,
    CAP_PERMITTED = 1,
    CAP_INHERITABLE = 2
} cap_flag_t;
struct udiv_t { unsigned int quot, rem; };
typedef struct _fmt_t {
  signed char __attribute__((may_alias)) base;
  signed char __attribute__((may_alias)) padding;
  signed char __attribute__((may_alias)) pad;
  signed char __attribute__((may_alias)) group;
  signed char __attribute__((may_alias)) groupsep;
  signed char __attribute__((may_alias)) flags;
  signed char __attribute__((may_alias)) strpadding;
  signed char __attribute__((may_alias)) strpad;
 } fmt_t;
typedef struct __attribute__((packed))_fmt_set {
  char base;
  char padding;
  char pad;
  char group;
  char groupsep;
  char flags;
  char strpadding;
  char strpad;
 } fmt_set;
typedef union {
 fmt_set *set;
 struct {
  char base;
  char padding;
  char pad;
  char group;
  char groupsep;
  char flags;
  char strpadding;
  char strpad;
 };
} fmt_setunion;
struct __dirstream{
 off_t tell;
 int fd;
 int buf_pos;
 int buf_end;
 int align;
 char buf[0];
};
typedef struct __dirstream DIR;
struct dirent {
 ino_t d_ino;
 off_t d_off;
 unsigned short d_reclen;
 char d_name[];
};
static void __ERR(int errnum, const char* func );
typedef int errno_t;
extern int errno;
typedef unsigned long fd_mask;
typedef struct {
 unsigned int fds_bits[1024 / 32 ];
 unsigned short highestbit;
} fd_set;
typedef struct {char c;} __guarded_memory;
typedef __builtin_va_list va_list;
typedef unsigned int index_t;
typedef unsigned int brk_data_t;
typedef unsigned int sbrk_data_t;
struct ml_malloc_area{
 void *pos;
 unsigned short int size;
 unsigned short int free;
 unsigned short int freegaps;
 unsigned short int largestfree;
};
struct ml_malloc_def;
struct ml_malloc_freearray{
  unsigned int pos;
  unsigned int largestfree;
  unsigned int data[0];
  unsigned int size;
  unsigned int freegaps;
  unsigned int _data[];
};
struct ml_malloc_def{
 struct ml_malloc_area *area;
 struct ml_malloc_freestorage* free;
 void* (*find_free)(struct ml_malloc_def*,int size);
 int (*resize_area)(struct ml_malloc_area*,int size);
 int (*check_area)(struct ml_malloc_area*);
 const int movposfactor;
 const int typesize;
 const int btval,btfree,btprevfree,bttop;
};
typedef struct ml_malloc_area ml_malloc_area_t;
static inline void __attribute__((noreturn,always_inline))exit(int ret){
 __asm__("jmp __exit"::"D"(ret));
 __builtin_unreachable();
}
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long __tm_gmtoff;
 const char *__tm_zone;
};
typedef struct {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
} tm;
typedef struct {
  time_t actime;
  time_t modtime;
} utimbuf;
extern void volatile __attribute__((naked,noipa,cold,no_instrument_function)) opt_fence(void*p,...);
__asm__(".global opt_fence\nopt_fence:\nretq");
struct stat;
struct timeval;
struct timezone;
typedef unsigned long u64;
typedef unsigned int u32;
typedef long aio_context_t;
typedef long key_serial_t;
typedef long loff_t;
typedef long qid_t;
typedef long mqd_t;
typedef long stack_t;
typedef long umode_t;
typedef long semun_u;
struct sockaddr;
struct iovcc;
struct rusage;
struct file_handle;
struct utimbuf;
struct sched_attr;
struct sched_param;
struct itimerspec;
struct kexec_segment;
struct task_struct;
struct msghdr;
struct iocb;
struct io_event;
struct linux_dirent64;
struct pt_regs;
struct perf_event_attr;
struct __sysctl_args;
struct timex;
struct msgbuf;
struct pollfd;
struct getcpu_cache;
struct bpf_attr;
struct shmid_ds;
struct epoll_event;
struct mq_attr;
struct poll_fd;
struct mq_attr;
struct sembuf;
struct statfs;
struct sysinfo;
struct rlimit;
struct ustat;
struct itimerval;
struct linux_dirent;
struct robust_list_head;
struct sigevent;
struct siginfo;
struct bpf_attr;
struct msqid_ds;
struct rlimit64;
struct sigaction;
struct mmsghdr;
struct msqid_ds;
;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-conversion"
static inline int volatile __attribute__((always_inline)) write( int a1, const void *a2, int a3 ){ int sysret; __asm__ volatile ("syscall" : "=a" (sysret) : "a" ( ((1 | 0 ) | 0 ) ) , "D" (a1) , "S" (a2) , "d" (a3) : "memory","rcx", "r11", "cc" ); ; return(sysret); }
#pragma GCC diagnostic pop
static long int strtol(const char *c, const char **endp, int base);
static ml_size_t strlen(const char*str);
static int _dprints(int fd, unsigned long int __ml_valist[]);
extern void __attribute__((naked,noreturn,no_instrument_function,used))_start();
__asm__ (".global _start\n_start:\n xorl %ebp, %ebp\n	popq %rdi\n	movq %rsp,%rsi\n	movq %rdi,%rax\n	leaq  8(%rsi,%rdi,8),%rdx\n"
 "call main\n"
 "movq %rax, %rdi\n"
 ".global __exit\n"
 "__exit:\n"
 "movq $60, %rax\n"
 "syscall\n"
 "xor %esp,%esp\nret"
 );
static int _dprints(int fd, unsigned long int __ml_valist[]){
  int ret = 0;
  const char *msg;
  unsigned long int* args;
  args=__ml_valist+1; unsigned long int* __ml_vacopy_args=args-1;
  for ( int a = ((ml_size_t)*__ml_vacopy_args ); a>0; a-- ){
   msg=({ if ( ((args - __ml_vacopy_args) > *__ml_vacopy_args) ) { write(2,"\033[1;31m" "count ML_VA_ARG" "\n" "\033[0;37;40m",sizeof("\033[1;31m" "count ML_VA_ARG" "\n" "\033[0;37;40m")-1);if((((long)22!=-404)?(22!=0):(((long)"not enough arguments in ML_VA_LIST for ML_VA_ARG"!=-404)?(unsigned long int)"not enough arguments in ML_VA_LIST for ML_VA_ARG":0))) exit((((long)22!=-404)?(22!=0):(((long)"not enough arguments in ML_VA_LIST for ML_VA_ARG"!=-404)?(unsigned long int)"not enough arguments in ML_VA_LIST for ML_VA_ARG":0))); }; ((char*)*args++); });
   int i = write(fd,msg,strlen(msg));
   if ( i<0 )
    return(i);
   ret += i;
  }
  return(ret);
}
static long int strtol(const char *c, const char **endp, int base){
  while(((*c==' ')||(*c=='\t')||(*c=='\n')||(*c=='\f')||(*c=='\r')||(*c=='\v'))){
    c++;
  };
  if ( !c ){
    goto strtol_err;
  }
  int sign = 1;
  if ( *c=='-' ){
    sign = -1;
    c++;
  }
  if ( base == 0 ){
    if ( *c=='0' ){
      c++;
      if ( *c== 'x' ){
        c++;
        base=16;
      } else {
        base=8;
      }
    } else {
      base=10;
    }
  }
  long ret = 0;
  while ( 1 ){
   if ( endp )
    *endp=c;
   int add = -1;
   if ( *c<='9' )
    add = (*c-48);
   else if ( *c >= 'a' )
    add = *c-'a' + 10;
   else if ( *c >= 'A' )
    add = *c - 'A' + 10;
   if ( add >= base || add < 0 )
    return( sign*ret );
   c++;
   ret *= base;
   ret += add;
   if ( ret < 0 ){
    return( (sign==-1)?(-0x7fffffffffffffffL -1):0x7fffffffffffffffL );
   }
  }
strtol_err:
  if ( endp ){
    *endp = 0;
  }
  return(0);
}
static ml_size_t strlen(const char*str){
 if ( !str )
  return(0);
 ml_size_t a;
 __asm__ volatile( R"(
	xor %%ecx, %%ecx
	dec %%ecx
	#xor %%eax,%%eax	
	repne scasb	
	neg %%ecx	
	sub $2,%%ecx
 )" : "=c"(a), "+D"(str): "a"(0) :"cc");
 return (a);
}
static int asmuitobuf(char *buf, unsigned int i, unsigned int base, int prec, const char pad){
 char *pbuf = buf;
 uint _base=base;
 __asm__ volatile ( R"(
.MARKAsM_asmuitobuf:
	xor %%edx,%%edx
	#push %%rdx
	inc %%edx
	push %%rdx
	mov %%eax,%%r9d
1:
	cmp %%eax, %%esi
	jb 8f
	push %%rax
	dec %%ecx
	mul %%r9d
	jno 1b
8: # padding  
	dec %%ecx
	jle 2f
	mov %4,%%al
	repnz stosb
	#jmp 2f
6:
	pop %%rcx
	mov $0x2f,%%eax
3:
	inc %%eax
	sub %%ecx,%%esi
	jae 3b
	add %%ecx,%%esi
	#cmp %%edx,%%esi
	#jb 4f
	#inc %%eax
	#sub %%edx,%%esi
	#jmp 3b
4:
	cmp $'9',%%eax
	jbe 5f
	add $39,%%eax
5:
	stosb
2:
	dec %%ecx  # test for 1
	jnz 6b
9:
	movb %%cl,(%%rdi)
	)" : "+c"(prec), "+S"(i), "+D"(pbuf), "+a"(_base) : "g"(pad) : "rdx", "r9", "memory", "cc" );
 return ( pbuf-buf );
}
int __attribute__((used)) main(int argc, char *argv[]){
 if ( argc<3 || ( argv[1][0] == '-' )){
  write(2,"usage: base tobase number [numberbase (2-36)] [padding] [padchar]\n" "\n 2025 CC-BY-SA misc147\n www.github.com/0x1Kb\n",sizeof("usage: base tobase number [numberbase (2-36)] [padding] [padchar]\n" "\n 2025 CC-BY-SA misc147\n www.github.com/0x1Kb\n")-1);
  exit(1);
 }
 int base,number,numberbase=10,padding=0;
 char pad = '0';
 base = strtol(argv[1],0,0);
 if ( argc>3 )
  numberbase = strtol(argv[3],0,0);
 number = strtol(argv[2],0,numberbase);
 if ( argc>4 )
  padding = strtol(argv[4],0,0);
 if ( argc>5 )
  pad = *argv[5];
 char buf[68];
 int len = asmuitobuf( buf, number, base, padding, pad );
 buf[len] = '\n';
 write(1,buf,len+1);
 exit(0);
}
