#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	   printf("%d is maximum",a);
	else if(b>a && b>c)
	   printf("%d is maximum",b);
	else if(c>a && c>b)
	   printf("%d is maximum",c);
}
