#include<stdio.h>
main(){
	int i,j,num1,num2;
	printf("Enter number 1 ");
	scanf("%d",&num1);
	printf("Enter number 2 ");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n%d x %d = %d ",i,j,i*j);
		}
		printf("\n");
	}
}
