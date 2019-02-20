#include<stdio.h>
main()
{
	int i,arr[50],arr2[50],num;
	printf("Enter no. of inputs");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		
		printf("Enter number %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nThe numbers are ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
		arr2[i]=arr[i];
	}
	printf("\nThe copied values are");
	for(i=0;i<num;i++)
		printf("%d ",arr2[i]);
}
