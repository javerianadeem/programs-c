#include<stdio.h>
main()
{
	int i,terms,sum=0;
	printf("Input number of terms=");
	scanf("%d",&terms);
	printf("The odd numbers upto n terms are ");
	for(i=1;i<=terms;i++)
	{
		printf("%d ",i+i-1);
		sum=sum+i+i-1;
	}
	printf("\nSum of n odd numbers is %d",sum);
}
