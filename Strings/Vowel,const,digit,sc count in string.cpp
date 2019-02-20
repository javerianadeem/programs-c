#include<stdio.h>
#include<string.h>
main(){
	char str[100];
	int i=0,vowel=0,consonant=0,digit=0,sc=0;
	printf("Enter a string ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		vowel++;
		else if(str[i]>='a' && str[i]<='z')
		consonant++;
		else if(str[i]>='0' && str[i]<='9')
		digit++;
		else
		sc++;
		i++;
	}
	printf("\nTotal vowels in string %d",vowel);
	printf("\nTotal consonants %d",consonant);
	printf("\nTotal digits %d",digit);
	printf("\nTotal special characters %d",sc);
}
