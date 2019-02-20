#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	int length=0,i;
	printf("Enter string ");
	gets(name);
	while(name[length]!='\0')
	{
		length++;
		for(i=length;i>=name[length];i--)
		{
			printf("%c ",name[i]);
		}
	}
	printf("\nLength of string is %d ",length);
}
