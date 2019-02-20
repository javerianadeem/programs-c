#include <stdio.h>
#define TRUE 1
#include <string.h>
#include <conio.h>
#include<stdlib.h>
main()
{
	char pass[20],*corr="pas$word",ch,h;
	do{
	for(int i=0;i<7;i++)
	{
	printf("\nEnter password\n");
	while(TRUE)
	{
		ch=getch();
		if(ch=='\r')
		break;
		pass[i]=ch;
		printf("*");
		i++;
	}
	pass[i]='\0';
	
		if(strcmp(corr,pass)==0)
		{
			printf("\nCORRECT PASSWORD\n");
			printf("PRESS ENTER TO CONTINUE");
			h=getche();
			exit(0);
		}	
		else
		{
			printf("\nWRONG PASSWORD\n");
			printf("TRY AGAIN");
		}
	}
}
while(TRUE);
}
