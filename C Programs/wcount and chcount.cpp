#include<stdio.h>
#include<conio.h>
main()
{
	int chcount=0;char ch;
	int wcount=0;
	printf("\nType in a phrase");
	while(  (ch=getche()  )!='\r')
	{ 
		if(ch==' ') wcount++;
		if(ch!=' ') chcount++;
	}
	printf("\n character count=%d",chcount);
	printf("\n word count=%d",wcount+1);
}
