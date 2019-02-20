#include<stdio.h>
int fac(int);
main()
{
	int num,c;
	printf("Enter a number = ");
	scanf("%d",&num);
	c=fac(num);
	printf("Factorial of %d is %d",num,c);
}
int fac(int num)
{
	int c=1;
	while(num>=1)
	{
	c=c*num;
		num--;
	 }
	 return(c);
}
