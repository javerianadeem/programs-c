#include<stdio.h>
#define LIM 6
int table[LIM]={100,50,20,10,5,1};
main()
{
	int qty,amount,i;
	printf("Enter amount ");
	scanf("%d",&amount);
	for(i=0;i<LIM;i++)
	{
		qty=amount/table[i];
		printf("\nNote of %2d",table[i]);
		printf(" %2d ",qty);
		amount=amount%table[i];
	}
	printf("\n");
}
