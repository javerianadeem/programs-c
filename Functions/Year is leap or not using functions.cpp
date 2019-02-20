#include<stdio.h>
int leap(int);
main()
{
	int a,b,year;
	printf("Enter any year");
	scanf("%d",&year);
	if(leap(year))
	printf("Year is leap");
	else
	printf("Year is not leap");
	
}

int leap(int year)
{
		if((year%400==0 && year%100==0) || (year%4==0))
	return 1;
	else
	return 0;
}
