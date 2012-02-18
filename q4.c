#include <stdio.h>
#include <stdlib.h>

















































char *password = "cocacola";


int main(int argc, char **argv){
    char *foo = strdup(password);
    foo[0] = 'p';
    foo[1] = 'e';
    foo[2] = 'p';
    foo[3] = 's';
    foo[4] = 'i';
    foo[5] = ' ';
    double num_args = (double)argc;
    if (num_args > 2.5f && num_args < 3.5f){
        write(1,foo,6);
        write(1,password+4,4);
        write(1,"\n",1);
        exit(0);
    }
    char buf[128];
    fgets(buf,sizeof(buf),stdin);
    buf[strlen(buf)-1] = '\0';
    if (strcmp(password,buf) == 0){
        printf("%c %c %c %c %c %c %c (you fail)",'f','u','c','k','y','o','u');
        for(;;){
            printf("!");
        }
    }
    if (!buf[4] && buf[0] == (password+2)[0] && buf[1] == (password+1)[0] && buf[2] == password[6] && buf[3] == 'a'){
        main(3,NULL);
    }
}

