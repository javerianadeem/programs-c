#include<stdio.h>
main()
{
	int num;
	printf("Enter a number less than 10\n");
	scanf("%d",&num);
	if(num<10)
	printf("you entered a number less than 10");
	else
	printf("you entered a number greater than 10");
}
