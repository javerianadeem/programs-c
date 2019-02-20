#include<stdio.h>
#include<conio.h>
void encrypt();
void decrypt();
main(){
	printf("Enter a phrase");
	printf("\nIncrypting\t");
	encrypt();
	printf("\nDecrypting\t");
	decrypt();
}
void encrypt()
{
	int n=0;
	char ch;
	while((ch=getch())!='\r')
{
	printf("%c",ch+1);
	n++;
}
printf("Total %d",n);
}
void decrypt()
{
	int o=0;
	char ch;
	while((ch=getch())!='\r')
{
	printf("%c",ch-1);
	o++;
}
printf("Total %d",o);
}
