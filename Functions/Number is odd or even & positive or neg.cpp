#include<stdio.h>
void oddeven12(int);
void negative(int);
main()
{
	int num;
	printf("Type a number postive or negative");
	scanf("%d",&num);
	oddeven12(num);
	negative(num);
}

void oddeven12(int x)
{
	if (x%2==0)
	printf("Number is even");
	else 
	printf("Number is odd");
}

void negative(int y)
{
	if(y>0)
	printf("Number is positive");
	else
	printf("Number is negative");
}
