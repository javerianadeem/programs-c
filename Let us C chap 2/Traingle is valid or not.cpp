#include<stdio.h>
main()
{
	float a1,a2,a3,sum;
	printf("Enter angles of triangle");
	scanf("%f%f%f",&a1,&a2,&a3);
	sum=a1+a2+a3;
	if(sum==180)
	printf("Triangle is valid");
	else
	printf("Triangle is not valid");
}
