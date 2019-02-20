#include<stdio.h>
#include<conio.h>
int getmins(void);
main()
{
	int mins1,mins2;
	printf("Type first time(form 3:33):");
	mins1=getmins();
	printf("Type second(later)time:");
	mins2=getmins();
	printf("Difference is %d minutes.",mins2-mins1);
}
int getmins()
{
	int hours,minutes;
	scanf("%d:%d",&hours,&minutes);
	return(hours*60+minutes);
}
