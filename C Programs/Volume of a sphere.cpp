/* volume of a sphere */
#include<stdio.h>
main()
{
	float p=3.14,radius,volume;
	printf("Enter the value of radius:");
	scanf("%f", &radius);
	volume=radius * radius * radius * p * 4/3;
	printf("Volume of a sphere is %f",volume);
	
}
