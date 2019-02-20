#include<stdio.h>
main()
{
	int x,y=0,r;
	printf("Enter a number");
	scanf("%d",&x);
	while(x!=0)
	{
		r=x%10;
		y=y*10+r;
		x=x/10;
	}
	printf("Reverse is %d",y);
}
