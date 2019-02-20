#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int num,guess,i;
	printf("Enter the secret number  ");
	scanf("%d",&num);
	system("cls");
	for(i=1;i<=5;i++)
	{
		printf("\nGuess number  ");
		scanf("%d",&guess);
		if(i==5){
			printf("Too many wrong guesses. GAME OVER.");
			exit(0);
		}
		else if(num==guess)
		{
			printf("\nCORRECT. YOU WIN");
			break;
		}
		if(num/2<num)
		{
			printf("\nGuess is too low");
		}
		if(num/2+num>num)
		{
			printf("\nGuess is too high");
		}
		else
		printf("Get lost");
	}
}
