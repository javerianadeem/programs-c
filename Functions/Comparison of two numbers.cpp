#include<stdio.h>
int comp(int,int);
main()
{
	int a,b;
	printf("Enter two values\n");
	printf("Greater number is = %d \n",comp(a,b));
}
int comp(int a,int b)
{
	scanf("%d %d",&a,&b);
	if(a>b)
	return a;
	else
	return b;
}
