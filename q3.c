#include <stdio.h>
#include <stdlib.h>

int checkpass(char *p){
    int retval = (p[0] == 'A' &&
                  p[1] == 'N' &&
                  p[2] == 'D' &&
                  p[3] == 'O');
    return retval;
}

int main(int argc, char **argv){
    char buf[128];
    fgets(buf,sizeof(buf),stdin);
    if (checkpass(buf)){
        printf("%s%c%c%s\n","@",'f','o',"pen");
    }
}

