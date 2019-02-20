#include<stdio.h>
main()
{
	int i,arr[50],n;
	printf("Enter array value ");
	scanf("%d",&n);
	printf("Enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Numbers are ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\nEven numbers are ");
	for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	printf("%d ",arr[i]);
	}
	printf("\nOdd numbers are ");
	for(i=0;i<n;i++)
	{
	if(arr[i]%2!=0)
	printf("%d ",arr[i]);
}
}
