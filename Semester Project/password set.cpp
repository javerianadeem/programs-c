#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<stdio.h>

int main()
{
	char m,n,o,p,q,r,s,t;
	char ch;
	puts("ENTER PASSWORD HERE TO ACCESS(8-digit)\n\n\n");
	puts("OR\n");
	puts("TYPE 'e' TO EXIT\n");
	printf("press enter twice and start typing password\n\n");
	getche();
	system("cls");
	if (getch()=='e')
	{
	exit(0);
}
	else
	{
	m=getch();
	printf("*");
	n=getch();
	printf("*");
	o=getch();
	printf("*");
	p=getch();
	printf("*");
	q=getch();
	printf("*");
	r=getch();
	printf("*");
	s=getch();
	printf("*");
	t=getch();
	printf("*");
	
	}
	if(m=='p' && n=='a' && o=='s' && p=='$' && q=='w' && r=='o' && s=='r' && t=='d')
	{
	puts("\nYOU ARE WELCOME\n\n");
	puts("PLEASE PRESS ENTER");
	getch();
	system("cls");
	}
	else
	{
	puts("\nINCORRECT PASSWORD\n");
	puts("TRY AGAIN\n");
	puts("TYPE 'e' TO EXIT\n");
	main();
	
	}
	}
