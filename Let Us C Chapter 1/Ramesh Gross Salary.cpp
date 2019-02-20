#include<stdio.h>
main()
{
	float sal,dearallow,houserent,gross;
	printf("Enter total salaray of Ramesh=");
	scanf("%f",&sal);
	dearallow=40*sal/100;
	printf("Dearness allowance is 40%% of basic salary=%.0f",dearallow);
	houserent=20*sal/100;
	printf("\nHouse rent allowance is 20%% of basic salary=%.0f",houserent);
	gross=sal-(dearallow+houserent);
	printf("\nGross salary=%.0f",gross);
}
