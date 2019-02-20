#include<stdio.h>
main()
{
	int a=-1,b=1,c,N,i;
	printf("Enter no. of terms");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
}
