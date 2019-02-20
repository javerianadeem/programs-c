#include<stdio.h>
#include<string.h>
main(){
	char str[81];
	int length=0;
	printf("Enter string ");
	gets(str);
	while(str[length]!='\0')
	{
		length++;
	}
	printf("Length of string is %d ",length);
}
