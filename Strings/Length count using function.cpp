#define size 100
#include<stdio.h>
#include<string.h>
void lcount();
main(){
	lcount();
	}
void lcount()
{
	int length;
	char str[size];
	printf("Enter string ");
	gets(str);
	while(str[length]!='\0')
	{
		length++;
	}
		printf("Length of string is %d ",length);
}
