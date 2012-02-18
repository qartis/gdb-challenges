#include <stdio.h>
#include <stdlib.h>
#include <string.h>


























































char pipe = '|'-10;

void one(void){
    volatile char output[1];
    output[0] = pipe;
    output[0] += 10;
    write(1,(const void *)output,1);
}

void nine(void){
    fprintf(stderr,"g");
}

void eight(void){
    write(1,"g",1);
}

void four(void){
    one();
}


void (*functions[])(void) = {
    NULL,
    one,
    NULL,
    NULL,
    four,
    NULL,
    NULL,
    NULL,
    eight,
    nine,
};


int main(int argc, char **argv){
    char buf[128];
yo:
    fgets(buf,sizeof(buf),stdin);
    unsigned i;
    if (strlen(buf) > 5){
        functions[0]();
    }
    if (buf[1] != 'y'){
        goto hey;
    }
    goto yo;
hey:
    for(i=0;i<strlen(buf)-1;i++){
        functions[buf[i]-'0']();
    }
}







































