#include<stdio.h>
main()
{
	int i,num,arr[50];
	printf("Enter number of inputs ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter number %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Numbers are ");
	for(i=0;i<num;i++){
		printf("%d ",arr[i]);
	}
	printf("\nThe negative numbers are ");
	for(i=0;i<num;i++)
	{
		if(arr[i]<0)
		printf(" %d ",arr[i]);
	}
}
