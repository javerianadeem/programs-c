#include<stdio.h>
main()
{
	int i,j,k,z=1;
	for(i=1;i<=5;i++)
	{
		k=1;
		for(j=1;j<=8;j++)
		{
			if(j<=4+i && j>=6-i && k)
			{
				printf("%d",z++);
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
	printf("\n");
	}
}
