/* age in minutes and days */
#include<stdio.h>
main()
{
	int age,ageinmin,ageinsec,ageindays;
	printf("Enter your age:");
	scanf("%d",&age);
	ageinmin=age*365*24*60;
	printf("Your age in minutes is:%d",ageinmin);
	ageinsec=ageinmin*60;
	printf("\nYour age in seconds:%d",ageinsec);
	ageindays=age*365;
	printf("\nYour age in days:%d",ageindays);
}
