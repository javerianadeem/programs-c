#include<stdio.h>
main()
{
	int terms,i;
	printf("Input number of terms=");
	scanf("%d",&terms);
	for(i=1;i<=terms;i++)
	{
		
		printf("\nNumber is %d and cube of %d is %d",i,i,i*i*i);
	}
}
