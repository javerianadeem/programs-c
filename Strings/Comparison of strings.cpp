#include<stdio.h>
#include<string.h>
main(){
	int i,x=0,temp=0;
	char str1[100],str2[100];
	printf("Enter first string ");
	gets(str1);
	printf("Enter second string ");
	gets(str2);
	while(str1[i]!='\0' && str2[i]!='\0'){
	if(str1[i]!=str2[i])
	{
		x=1;
	}
	i++;
}
	if(x==0)
    {
        printf("\nThe length of both strings are equal and \nalso both strings are equal.\n\n");
    }
    else
    {
        printf("\nNot equal\n\n");
    }

}
