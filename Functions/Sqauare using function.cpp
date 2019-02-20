#include<stdio.h>
void square(int);
int main()
{
	int a=7;
	square(a);
}

void square(int b)
{
	int res;
		res=b*b;
	printf("Square of %d = %d",b,res);
}
