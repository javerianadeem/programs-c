#include<stdio.h>
main()
{
	int num,a,b,c,d,e,f,g,h;
	printf("Enter a num=");
	
	scanf("%d",&num);
	
	a=num/10;
	b=num%10;
	c=a/10;
	d=a%10;
	e=c/10;
	f=c%10;
	g=e/10;
	h=e%10;
	
	printf("Reverse of number is=%d%d%d%d%d",b,d,f,g,h);
	
	printf("\nSum of number=%d",b+d+f+g+h);
	
	}
