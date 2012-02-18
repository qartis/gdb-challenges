#include <stdio.h>
#include <sys/ptrace.h>
#include <syscall.h>
 
void ptrace_trap(void) __attribute__ ((constructor));
 
void ptrace_trap(void) {
 
    /*  
     * If ptrace fails here, means someone already ptrace()'ed us.
     */
 
    if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) { 
        exit(0);
    }
}
 
int main(int argc, char **argv) {
    printf("Hello World!\n");
    return 1;
}
