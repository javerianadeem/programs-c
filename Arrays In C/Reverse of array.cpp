#include<stdio.h>
main()
{
	int i,n,arr[n];
	printf("Enter array value ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d numbers ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The value of array to be stored is ");
	for(i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	printf("\nThe value of array to be stored reverse is ");
	for(i=n-1;i>=0;i--)
	{
	printf("%d",arr[i]);
}
}
