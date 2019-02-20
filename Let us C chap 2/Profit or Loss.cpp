#include<stdio.h>
main()
{
	float cp,sp,prof,loss;
	printf("Enter cost price and selling price");
	scanf("%f%f",&cp,&sp);
	if(sp>cp)
	{
	printf("Seller has incurred profit");
	prof=sp-cp;
	printf("\nProfit=%f",prof);
}
	else
{
	printf("Seller has incurred loss");
	loss=cp-sp;
	printf("\nLoss=%f",loss);
}
}
