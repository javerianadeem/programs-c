#include<stdio.h>
main()
{
	int num1,num2,i,j;
	printf("Enter number 1");
	scanf("%d",&num1);
	printf("Enter number 2 ");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++){
		if(i%2==0){
		printf("\n%d * %d = %d",i,i,i*i);
		num1=num1+2;
	}
}
}
