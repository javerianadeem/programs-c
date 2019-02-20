#include<stdio.h>
int rev(int);
main()
{
	int num,b;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Reverse is %d",rev(num));
}
int rev(int x)
{
	int a,b;
		while(x!=0)
	{
		a=x%10;
		b=b*10+a;
		x=x/10;
	}
	return(b);
}
