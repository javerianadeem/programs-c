#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter alphabet");
	scanf("%c",&ch);
	if (ch=='a')
	printf("Correct ");
	else
	printf("Incorrect ");
	printf("%c",ch);
}
