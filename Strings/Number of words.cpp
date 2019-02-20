#include<stdio.h>
#include<string.h>
main(){
	char name[100];
	int x=0,i,word=0;
	printf("Enter string ");
	gets(name);
	while(name[x]!='\0')
	{
		if(name[x]==' ' || name[x]=='\t'|| name[x]=='\n')
		{
			word++;
		}
		x++;
	}
	printf("\nLength of string is %d ",word+1);
}
