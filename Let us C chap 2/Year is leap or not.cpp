#include<stdio.h>
main()
{
	int leap;
	printf("Enter any year");
	scanf("%d",&leap);
	if((leap%400==0 && leap%100==0) || (leap%4==0))
	{
	printf("The year is leap");
}
     else
     {
     	printf("Year is not leap");
	 }

}
