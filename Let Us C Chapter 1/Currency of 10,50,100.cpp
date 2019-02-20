#include<stdio.h>
main()
{
	float amount,notesof10,notesof50,notesof100;
	printf("Amount to be withdrawn=");
	scanf("%f",&amount);
	notesof10=amount/10;
	printf("Notes of 10=%.0f",notesof10);
	notesof50=amount/50;
	printf("\nNotes of 50=%.0f",notesof50);
	notesof100=amount/100;
	printf("\nNotes of 100=%.0f",notesof100);
}
