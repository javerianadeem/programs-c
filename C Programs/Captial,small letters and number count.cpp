#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	int scount=0,ccount=0,ncount=0;
	printf("Enter any phrase:");
	while((ch=getche())!='\r')
	{
		 if(ch>=65 && ch<=90)ccount++;
		 else if(ch>=97 && ch<=122)scount++;
		 else if(ch<=48 && ch<=57)ncount++;
	}
	printf("\nLower case letters=%d\nCapital case letters=%d\Numbers count=%d",scount,ccount,ncount);
}
