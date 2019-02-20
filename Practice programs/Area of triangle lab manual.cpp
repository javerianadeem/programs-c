#include<stdio.h>
main()
{
	int s,area,a,b,c;
	printf("Enter values of sides of tringle a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2;
	area=s*(s-a)*(s-b)*(s-c);
	if(a+b>c && b+c>a && a+c>b)
	{
	printf("Area of triangle is %d",area);
	}
	else
	{
	printf("Conditions are not satisfied");
}
}
