#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>






















































char *out;
char e = 'e';
char c = 'c';

int main(){
    out = strdup("__main");
    out[0] = '\0';
    char *word = strdup("__main");
    char buf[128];
s:
t:
    if (out[0] == 's' && (buf[2] != buf[3] || buf[7] & 0x6c != buf[8])){
        goto s;
    }
    write(1,out,1);
    if (out[0] == 't'){
        printf("\n");
        out = NULL;
        *out = 1;
    }
    volatile char s = 's';
    read(0,buf,word[2]);
    if (out[0] == 's' && buf[0] == 'h'){
again:
        if (c == 'c' && buf[1] == 'e'){
            write(1,&e,1);
            write(1,&c,1);
        } else {
            write(1,&c,1);
            write(1,&e,1);
        }
        if (c == 'c' && buf[0] == 'h'){
            c = 'r';
            goto again;
        } else {
            out[0] = 't';
            goto t;
        }
    }
    buf[10] = '\0';
    word[2] = 0;
    if (strncmp(buf,buf+5,strlen(buf+5)) == 0){
        *out = 's';
        goto s;
    }
    s++;
    out = buf;
    out = NULL;
    goto s;
}








































