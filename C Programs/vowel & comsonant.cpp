#include<stdio.h>
main()
{
	char ch;
	printf("Enter a letter");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("You entered a vowel");
	 else 
	   printf("You entered a consonant");
}
