#define ROWS 10
#define COLS 2
#include<stdio.h>
int maxex(float[][COLS],int);
main()
{
	float agents[ROWS][COLS];
	float number,expenses;
	int index=0;
	printf("Enter 3 digit agent numbers");
	printf("\nThen travel expenses(007 139)\n");
	printf("Enter 0 0 to quit\n");
do{
	printf("Agent's number and expenses: ");
	scanf("%f %f",&number,&expenses);
	agents[index][0]=number;
	agents[index][1]=expenses;
}
    while(agents[index++][0]!=(float)0.0);
    index--;
    index=maxex(agents,index);
    printf("Agents with highest expenses: %03.0f",agents[index][0]);
    printf("\nAmount: %.2f",agents[index][1]);
}
int maxex(float list[][COLS],int size)
{
	int dex,maxdex;
	float max;
	max=list[0][1];
	maxdex=0;
	for(dex=1;dex<size;dex++)
	if(max<list[dex][1])
	{
		max=list[dex][1];
		maxdex=dex;
	}
	return(maxdex);
}
