#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	do
	{
		printf("\n\nType in a digit from 'a' to 'e':\n");
		while((ch=getche())!='c')
		{
			printf("\nSorry,%c is incorrect.\n",ch);
			printf("Try Again.\n");
		}
		printf("\nThatsit!\n");
		printf("Play again?(Type 'y' or 'n):");
	}
	while(getche()=='y');
	printf("\nThanks for playing!");
}
