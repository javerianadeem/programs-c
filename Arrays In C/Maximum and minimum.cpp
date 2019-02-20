#include<stdio.h>
main()
{
	int x,min=50,arr[50],max,num;
	for(x=0;x<10;x++)
	{
	printf("Enter number %d ",x+1);
	scanf("%d",&arr[x]);
}
max=arr[0];
	for(x=0;x<10;x++)
	{
		if(max<arr[x])
		{
			max=arr[x];
		}
	}
	printf("\nMaximum is %d",max);
	

    min=arr[0];
	for(x=0;x<10;x++)
	{
		if(min>arr[x])
		{
			min=arr[x];
		}
	}
	printf("\nMinimum is %d",min);
}
	

