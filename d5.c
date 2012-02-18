


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>













































int main(int argc, char **argv)
{
	int countie = 0;
	char buf[128];
	time_t now;
	struct tm* tm;

	now = time(0);
	tm = localtime(&now);
	int s = tm->tm_sec;
	int m = tm->tm_min;




    fgets(buf,sizeof(buf),stdin);



	time_t nowb;
	struct tm* tmb;

	nowb = time(0);
	tmb = localtime(&nowb);
	int sb = tmb->tm_sec;
	int mb = tm->tm_min;

	if( (sb - s) > 15 )
	{
		printf("15");
	}

	if( (sb - s) < 15 && m==mb)
	{
		goto chk;
	}

	if( (sb - s) > 15 )
	{
		printf("");
		goto ff;
		return 0;
	}


	return 0;

chk:
	if( buf[0] == 'c' && countie==0)
	{
		printf("|W");
		countie++;
		goto top;
	}
	if( buf[2] == 'o' && countie==2)
	{
		printf("AR!");
		countie++;
		goto fin;
	}
ff:
  printf("IN");
top:
	if( buf[1] == 'o' )
	{
		countie++;
		printf("INN");
		goto chk;
	}

fin:

	if( buf[3] == 'l' )
		printf("!|");
	



}


















































































