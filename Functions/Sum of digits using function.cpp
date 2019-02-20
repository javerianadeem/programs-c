#include<stdio.h>
int sum(int);
main()
{
	int num,s;
	printf("Enter a number=");
	scanf("%d",&num);
	s=sum(num);
	printf("Sum of five digits is %d",s);
}
int sum(int x)
{
	int r,s;
	while(x!=0)
	{
	r=x%10;
	s=s+r;
	x=x/10;
}
	return(s);
}
