#include<stdio.h>
main()
{
	int i,terms,sum=0;
	printf("Input number of terms=");
	scanf("%d",&terms);
	printf("The even numbers upto n terms are ");
	for(i=0;i<terms;i++)
	{
		printf("%d ",i+i);
		sum=sum+i+i;
	}
	printf("\nSum of n even numbers is %d",sum);
}
