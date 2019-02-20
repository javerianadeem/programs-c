/* Table of a integer */
#include<stdio.h>
main()
{
	int num,i,num_n;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		num_n=num*i;
	printf("\n%d x %d=%d",num,i,num_n);
}
}
