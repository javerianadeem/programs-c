#include<stdio.h>
main()
{
	int i,n,arr[n],sum=0;
	printf("Enter array value ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d numbers ",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of arrys is %d",sum);
}
