#include<stdio.h>
main()
{
	int i,j,arr[50],num,dup=0;
	printf("Enter no of inputs");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	printf("Enter number %d ",i+1);
	scanf("%d",&arr[i]);
	}
	printf("Numbers are ");
	for(i=0;i<num;i++)
	{
		printf(" %d",arr[i]);
	}
	 printf("\nDuplicate elements are ");
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
	    if(arr[i]==arr[j])
	    {
    printf("%d ",arr[i]);
}
}
}
}
