#include<stdio.h>
main()
{
	float num,sum=0,avg;
	for(int i=1;i<=10;i++)
	{
	printf("Number %d=",i);
	scanf("%f",&num);
	sum=sum+num;
}
    printf("Sum of 10 numbers is %.2f",sum);
    avg=sum/10.0;
    printf("Average is %.2f",avg);
}
