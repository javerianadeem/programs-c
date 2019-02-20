#include<stdio.h>
main()
{
	int m,i,n;
	printf("Enter the Multiplication table=");
	scanf("%d",&m);
	printf("Enter the number where to multiply");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			printf("\n%d X %d = %d",m,i,m*i);
	}
}
