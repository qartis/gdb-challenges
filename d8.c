/* ========================================================================== */
/*                                                                            */
/*   Filename.c                                                               */
/*   (c) 2001 Kevin Tyma                                                      */
/*                                                                            */
/*   A haskell implementation of world of warcraft.                           */
/*   please don't distribut                                                   */
/*                                                                            */
/* ========================================================================== */





#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>




























                                                           









char* kl(char* str)
{
  int end= strlen(str)-1;
  int start = 0;

  while( start<end )
  {
    str[start] ^= str[end];
    str[end] ^=   str[start];
    str[start]^= str[end];

    ++start;
    --end;
  }

  return str;
}


int yyy()
{
	volatile int a=5;
	a*12;
	return a;
}


void spipe()
{
	printf("|");
}


int main(int argc, char **argv)
{

	char *fir = (char*) malloc(6);

	volatile char *awho = (char*) malloc(9);
	volatile char *bwao = (char*) malloc(9);
	volatile char *cwno = (char*) malloc(9);
	volatile char *dwno = (char*) malloc(9);
	volatile char *ewao = (char*) malloc(9);
	volatile char *fwho = (char*) malloc(9);
	volatile int finalnote=5;
	char awh[128];
	memset(awh, '\0', 128);
	char bwa[128];
	memset(bwa, '\0', 128);
	char cwn[128];
	memset(cwn, '\0', 128);
	char dwn[128];
	memset(dwn, '\0', 128);
	char ewa[128];
	memset(ewa, '\0', 128);
	char fwh[128];
	memset(fwh, '\0', 128);
	char gwa[128];
	memset(gwa, '\0', 128);
	char hwn[128];
	memset(hwn, '\0', 128);
	char iwa[128];
	memset(iwa, '\0', 128);

	int c=0;volatile int win=0;
	volatile int i = 10;
	char x[256];
	char spin[256];
	char buffa[128];
	volatile char rbuf[128];
	char stuffa[9999];
	volatile int faa = 4;
top:
	if( strlen(spin) < 5)
		printf("a");

	if(argc!=3)
	{
		fgets(buffa,sizeof(buffa),stdin);
		if(faa == 4)
			goto fax;
	}
aha:
	if( strlen(spin) < 10)
		//printf("|");printf("a");
faxbax:

	i++;             i++;i++;i++;i++;      i++;
	i++;             i++;        i++;      i++;    
	i++;             i++;        i++;      i++;
	i++;i*=2;i++;    i++;i++;i++;i++;      i++;i*=2;i++;

	memcpy(stuffa, buffa, strlen(buffa)+1000);
	volatile int gonl = atoi(stuffa);
	memset (stuffa,'|',60);
	//puts (stuffa);
	gonl = atoi(stuffa);

	volatile int n=memcmp ( stuffa, buffa, 128 );
	volatile int st;


	if(n)
	{
		if(c<1)
		{
			spipe();
			finalnote++;
		}
		char * pc;
		pc=strchr(buffa,'x');
		while(pc!=NULL)
		{
			st = pc-buffa+1;
			pc=strchr(pc+1,'x');
		}
	}
a:
	st++;//puts("f");
	if(st==12)
	{
		goto b;
		//puts("g");
	}
	if(st==48)
	{
		//puts("|h");
		goto c;
	}
	if(st==114)
	{//puts("|");
		goto no;
	}
c:
	if( strlen(spin) > 7 )
		printf("f");
	if(argc==3)
		goto xx;//puts("|");
	goto d;//puts("|");
d:
	if(st==145)
	{
		st=22;
		goto a;
	}//puts("|");
b:

goto a;

no:
//puts("|");
	goto d;
fax:
	if(faa == 4)
		goto faxbax;

xx:
	if( strlen(spin) > 10)
		printf("b|");
	if(argc==3)
	{
		//printf("argc3");
		volatile char * path;
		path = getenv ("PATH");
		if( strlen(x) < 1 )
		{
			gets(x);
			strncpy(fir, x, 3);
			strncpy(awh, x, 1);
			strncpy(bwa, x+1, 1);
			strncpy(cwn, x+2, 1);
			strncpy(dwn, x+3, 1);
			strncpy(ewa, x+4, 1);
			strncpy(fwh, x+5, 1);
			//printf("|a");
		} else {
			c++;
			strcpy(spin,x+c);
			if( strcmp(fir,kl(spin)) )
			{
				switch(c)
				{
					case 1:
					printf("%s",awh);
					break;
					case 2:
					printf("%s",bwa);
					break;
					case 3:
					printf("%s%s",cwn,cwn);
					break;
					case 4:
					printf("%s%s",dwn,dwn);
					break;
					case 5:
					printf("%s",ewa);
					break;
					case 6:
					printf("%s",fwh);
					break;
					case 7:
					printf("%s",gwa);
					break;
				}
			} else {
				finalnote++;
				win=1;
			}
		}

		const char hehe[4343] = "__asm__ (\" %%al, %%dx\" : : \"a\" (_data), \"d\" (_port))";
 
		if( strcmp(x,hehe) )
		{	
			if(++finalnote==15 && win==1)
			{
				printf("|");
				goto cooljob;
			}
			if(finalnote>20)
				goto death;
			goto aha;
		} else {
			goto aha;
		}

		char szKey[] = "soyea";
		char szInput[80];
		do {
			gets (szInput);
		} while (strcmp (szKey,szInput) != 0);

		//puts("|");
	
		printf("yall:%s\n",x);

	}
	return 0;
death:
	printf("%s",x);
	goto death;
cooljob:
  return 0;
goto cooljob;
}



























































































