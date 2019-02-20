#include<stdio.h>
main()
{
	int sum=0,i,n[10],avg=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter number %d  ",i+1);
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}
	printf("\nThe sum of 10 numbers is %d",sum);
	avg=sum/10;
	printf("\nAverage is %d",avg);
}
