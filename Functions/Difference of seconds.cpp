#include<stdio.h>
#include<conio.h>
int getsecs(void);
main()
{
	int s1,s2;
	printf("Type first time(form 3:33:55):");
	s1=getsecs();
	printf("Type second(later)time:");
	s2=getsecs();
	printf("Difference is %d seconds",(s2-s1)*60);
}
	int getsecs()
{	
	int hours,minutes,secs;
	scanf("%d:%d:%d",&hours,&minutes,&secs);
	secs=hours*60+minutes*60+secs;
	return(secs);
}
