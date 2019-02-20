#include<stdio.h>
#include<conio.h>
int gethour(void);
main()
{
	int h1,h2;
	printf("Type first time(form 3:33):");
	h1=gethour();
	printf("Type second(later)time:");
	h2=gethour();
	printf("Difference is %d hours.",h2-h1);
}
	int gethour()
{	
	int hours,minutes;
	scanf("%d:%d",&hours,&minutes);
	return(hours+minutes/60);
}
