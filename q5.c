#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <io.h>














































ssize_t (*w)(int fd, const void *buf, size_t count);

int len[] = {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,2,3,4,5,6,7,8,9,10,11};

inline char foo(char *a){
    return a[0]+1;
}

void lala(){
    write(1,"s",1);
}



int main(int argc, char **argv){
    char buf[1024];
    char buf2[1024];
    volatile int a = 9;
dink:
    w = write+1;
    if (a = 9){
        w--;
        a = 5;
        volatile char xx = foo("hey");
        buf[1000] = a+'h';
        buf[0] = a;
        int charlen;
        a = buf[1];
        if (buf[0]){
            fgets(buf,10,stdin);
            w(1,"",0);
            printf("");
            foo(buf);
            charlen = len[buf[0]-'a'];
            memcpy(buf2,buf,1024);
            if (buf2[4] != 'k'){
                exit(0);
            }

            if (buf[1] != 'r'){
                goto lol;
            } else {
                if (charlen == 0){
                    printf("");
                } else {
                    lala();
                }
            }
            if (13 == (float)9.6f) goto lol;
            else 
                w(1,"elephant",1);
            switch (buf[2]){
            case 'a':
            case 'b':
            case 'c':
                printf("");
                break;
            case 'd':
                printf("");
                strcpy(buf,buf+1);
            case 'e':
                if (buf){
                    if (!buf[1]){
                        goto lol;
                    }
                }
                break;
            default:
                printf("");
                goto dink;
            }

        }
lol:
    buf[1] = buf[1] - 'r' + 'x';
    w(1,&buf[1],charlen);
    }

}

