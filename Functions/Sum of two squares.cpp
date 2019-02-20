#include<stdio.h>
int sum(int,int);
int square(int);
int main()
{
	int a=5,r1,r2,r3;
	r1=square(a);
	printf("Square of %d = %d",a,r1);
	a=8;
	r2=square(a);
	printf("\nSquare of %d = %d",a,r2);
	r3=sum(r1,r2);
	printf("\nSum = %d",r3);
}

int square(int b)
{
	return(b*b);
}

int sum(int x,int y)
{
	return(x+y);
}
