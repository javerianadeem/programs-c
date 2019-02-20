#include<stdio.h>
main()
{
	int quantity,dis;
	float rate,tot;
	printf("Enter quantity and rate per item:");
	scanf("%d%f",&quantity,&rate);
	if(quantity>1000)
	dis=10;
	tot=(quantity*rate)-(quantity*rate*dis/100);
	printf("Totl expenses=Rs. %f\n",tot);
}
