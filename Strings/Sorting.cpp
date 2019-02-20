#include<stdio.h>
#include<string.h>
main(){
	char str[100],ch;
	int i,j,l;
	printf("\n\nSort a string in ascending order\n\n");
	printf("Input a string");
	fgets(str,sizeof str,stdin);
	l=strlen(str);
	
	for(i=1;i<l;i++)
	for(j=0;j<l;j++)
	if (str[j]>str[j+1])
	{
		ch=str[j];
		str[j]=str[j+1];
		str[j+1]=ch;
	}
	printf("After sorting\n");
	for(i=0;i<l;i++)
	printf("%s",str[i]);
}
