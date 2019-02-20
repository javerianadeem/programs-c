#include<stdio.h>
main()
{
	int i,num;
	printf("The numbers between 100 to 200 which are divisible by specified number & remainder will be 3");
	printf("\nEnter the specified number");
	scanf("%d",&num);
	for(i=1;i<=500;i++)
	{
		if(i%num==3)
		printf(" %d ",i);
	}
}
