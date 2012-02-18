#include <stdio.h>
#include <stdlib.h>

volatile int authorized = 0;

int main(int argc, char **argv){
    for(;;){
        if (authorized){
            printf("success\n");
            break;
        }
        sleep(1);
    }
}

