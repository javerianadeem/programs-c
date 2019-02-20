#include<stdio.h>
main()
{
	int num,a,b,c,d,e,f,g,h,l,m;
	printf("Enter a num=");
	
	scanf("%d",&num);
	
	a=num/10;
	b=num%10;
	c=a/10;
	d=a%10;
	e=c/10;
	f=c%10+1;
	g=e/10+1;
	h=e%10+1;
	l=d+1;
	m=b+1;
	printf("\nNew number=%d%d%d%d%d",g,h,f,l,m);
	
	}
