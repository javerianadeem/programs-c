#include<stdio.h>
main()
{
	int i,elem[10],j;
	for(i=0;i<=9;i++)
	{
		printf("Element %d  ",i+1);
		scanf("%d",&elem[i]);
	}
	printf("Elements are ");
	for(i=0;i<=9;i++)
	{
	printf(" %d ",elem[i]);
}
}
