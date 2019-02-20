#define size 4
#include<stdio.h>
#include<string.h>
main(){
	int i,x=0;
	char str1[size],str2[size];
	printf("Enter first string ");
	gets(str1);
	printf("Enter second string ");
	gets(str2);
	while(str1[i]==str2[i]){
		i++;
		break;
	}
	if(str1[i]=='\0' || str2[i]=='\0')
	{
		i++;
	}
	if(str1[i]=='\0' && str2[i]=='\0')
	x=0;
	else if(str1[i]>str2[i])
	x=1;
	else if(str1[i]<str2[i])
	x=-1;
	if(x==0)
    {
        printf("\nThe length of both strings are equal and \nalso both strings are equal.\n\n");
    }
    else if(x==-1)
    {
        printf("\nThe length of the first string is smaller than second.\n\n");
    }
    else
    {
        printf("\nThe length of the first string is greater than second.\n\n");
    }
}
