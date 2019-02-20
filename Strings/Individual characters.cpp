#include<stdio.h>
#include<string.h>
main(){
	char str[81];
	int length=0;
	printf("Enter string ");
	gets(str);
	while(str[length]!='\0')
	{
		printf("%c   ",str[length]);
		length++;
	}
	printf("Length of string is %d ",length);
}
