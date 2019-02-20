#include<stdio.h>
#include<conio.h>
main()
{
	int lowerc=0,upperc=0;
	char ch;
	printf("Enetr a phrase");
	while((ch=getche())!='\r')
	{
		if(ch>=97 && ch<=122)
		lowerc++;
		else if(ch>=65 && ch<=90)
		upperc++;
	}
	printf("\nTotal lower case = %d",lowerc);
	printf("\nTotal upper case=%d",upperc);
}
