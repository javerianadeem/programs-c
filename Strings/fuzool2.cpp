#include<stdio.h>
#include<string.h>
main(){
	static char salute[]="Greetings, lol ";
	char name[81];
	puts("Enter you name ");
	gets(name);
	puts(salute);
	puts(name);
}
