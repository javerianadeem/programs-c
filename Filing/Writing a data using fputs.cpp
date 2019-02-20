#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char str[10];
	FILE *fp;
	fp=fopen("f1.txt","w");
	printf("Enter your name");
	gets(str);
	fputs(str,fp);
	fclose(fp);
}
