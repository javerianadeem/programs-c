#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char ch;
	FILE *fp;
	fp=fopen("f1.txt","r");
	if(fp==NULL){
	printf("File naat found");
	exit(1);                            /* Abnormally terminates the program */}
	ch=fgetc(fp);                      //read character by character
	while(!feof(fp))
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
