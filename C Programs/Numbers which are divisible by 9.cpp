#include<stdio.h>
main()
{
	int i;
	printf("The numbers between 100 to 200 which are divisible by 9 are");
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		printf(" %d ",i);
	}
}
