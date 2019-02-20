#include<stdio.h>
main()
{
	int a,num_1,num_2;
	printf("Enter any two numbers=");
	scanf("%d%d",&num_1,&num_2);
	a=num_1;
	num_1=num_2;
	num_2=a;
	printf("Number 1=%d",num_1);
	printf("\nNumber 2=%d",num_2);
}
