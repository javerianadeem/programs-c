#include<stdio.h>
#include<conio.h>
main()
{
	float guess,incr;
	char ch;
	
	printf("Think of a number between 1 and 99 and \n");
	printf("I'll guess what it is. Type'e' for equals,\n");
	printf("'g' for greater than and 'l' for less than.\n");
	incr=guess=50;
	while(incr>1.0)
	{
		printf("\nIs your number greater or less than %.0f?\n",guess);
		
		incr=incr/2;
		if((ch=getche())=='e')
		break;
		else if(ch=='g')
		guess=guess+incr;
		else
		guess=guess-incr;
	}
	printf("\nThe number is %.0f. Am I not clever? :p :D ",guess);
}
