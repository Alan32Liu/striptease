extern const char apple_version[];
#ifndef PROGRAMNAME
#define PROGRAMNAME striptease
#endif
#define STRINGIZE_PN2(x) #x
#define STRINGIZE_PN(x) STRINGIZE_PN2(x)
#if defined(__ppc64__)
#define ARCHNAME " (ppc64)"
#elif defined(__x86_64__)
#define ARCHNAME " (x86_64)"
#elif defined(__ppc__)
#define ARCHNAME " (ppc)"
#elif defined(__i386__)
#define ARCHNAME " (i386)"
#elif defined(__arm__)
#define ARCHNAME " (arm)"
#else
#define ARCHNAME
#endif
__attribute__((__used__)) const char apple_version[] =
/* Create a string that is compatible with the ident program */
"@(#)$PROGRAM: " STRINGIZE_PN(PROGRAMNAME) ARCHNAME
   "  PROJECT: cctools-822 <http://mackyle.github.com/striptease> $"
;
