#include<stdio.h>
main()
{
	int pos=0,neg=0,i,num,arr[50];
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
	for(i=0;i<num;i++)
	{
		if(arr[i]<0)
	    neg++;
	    else
	    pos++;
	}
	printf("\nTotal positive numbers are %d " ,pos);
	printf("\nTotal negative numbers are %d",neg);
}
