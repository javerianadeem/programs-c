#include<stdio.h>
main()
{
	char ch='A';
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(ch<=90)
			printf("%c",ch++);
			else
			printf(" ");
		}
		printf("\n");
	}
}
