#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	int vowel=0,consonant=0,space;
	printf("Enter a phrase");
	while((ch=getche())!='\r')
	{
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		vowel++;
		else
		consonant++;
	}
	printf("\nNumber of vowels=%d",vowel);
	printf("\nNo. of consonant=%d",consonant);
}
