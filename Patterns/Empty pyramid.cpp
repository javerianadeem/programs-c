#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=13;j++)
		{
		if(j>=6+i || j<=8-i)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
}
}
