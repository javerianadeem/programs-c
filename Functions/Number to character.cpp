#include<stdio.h>
void ascii(int);
main()

{
	int b;
	printf("Enter a number");
	scanf("%d",&b);
	ascii(b);
}

void ascii(int x)
{
	printf("%c",x);
}
