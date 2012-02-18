


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
//rev 3


































int abcdef (int a)
{
	if(a==5)
		return 1;
	char x[12] = "m\0\0\0\0\0\0\0";
	printf("%s",x);
	return 0;
}


int ooo()
{
	printf("el");
	int a = 5;
	abcdef(a);
	return 0;
}


int aroundwego()
{
	char x[12] = "e\0\0\0\0\0\0\0";
	printf("S%s",x);
	int a = 1;
	abcdef(a);
	abcdef(a);
	ooo();
	return 0;
}

int main(int argc, char **argv)
{
	int cupcakes=0;
pipe:
	if(cupcakes==5)
		printf("it's in here somewhere...");
	if(cupcakes)
	{
		printf("|");
		return 0;
	}
	int i=0;
	time_t now;
	struct tm* tm;

	now = time(0);
	tm = localtime(&now);
	int s = tm->tm_sec;
	char buf[128];

	a:
	if(i < 100)
	{
		++i;
		goto a;
	}
	fgets(buf,sizeof(buf),stdin);
	long b = strtol(buf,NULL,0);
	int n = atoi(buf);
	long c = (long)&buf;
	if( b==c )
	{
		printf("|");
		goto ne;
	}
	printf("failure");
	return 0;
ne:
	if( b==c )
	{
		aroundwego();
	}
cupcakes++;
goto pipe;
printf("|");
}



























































































