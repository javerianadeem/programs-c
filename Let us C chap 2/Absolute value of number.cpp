#include<stdio.h>
main()
{
	int num;
	printf("Enter a number=");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Absolute value of number is %d",(-1)*num);
		}
		else
		printf("Absolute value of number is %d",num);
	}

