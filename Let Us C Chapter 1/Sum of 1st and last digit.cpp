/* four digit number input and sum of first and last digit */
#include<stdio.h>
main()
{
	int num,a,b,c,d,e,f;
	printf("Enter a num=");
	
	scanf("%d",&num);
	
	a=num/10;
	b=num%10;
	c=a/10;
	d=a%10;
	e=c/10;
	f=c%10;
	
	printf("\nSum of 1st and last digit=%d",b+e);
	
	}
