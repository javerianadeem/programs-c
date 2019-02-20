#include<stdio.h>
main()
{
	int i,num,arr[50];
	float pos=0,sum=0.0;
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
		if(arr[i]>0){
	    sum=sum+arr[i];
	    pos++;
	}
}
	printf("\nTotal positive numbers are %.0f " ,pos);
	printf("\nAverage of positve numbers is %.2f ",sum/pos);
}
