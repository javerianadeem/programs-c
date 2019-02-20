#include<stdio.h>
#include<conio.h>
char getlc(void);
main()
	{
		char chlc;
		printf("Type 'a' for first selection, 'b' for second:");
		chlc=getlc();
		switch(chlc)
		{
			case 'a':
				printf("\nYou typed an 'a'.");
				break;
			case 'b':
			     printf("\nYou typed a 'b'.");
				 break;
			default:
			    printf("\nYou chose a non-existant selection.");	 	
		}
	}
char getlc(void)
{
	char ch;
	ch=getche();
	if(ch>64 && ch<91)
	ch=ch+32;
	return(ch);
	}	
