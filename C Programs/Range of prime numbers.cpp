#include<stdio.h>
main()
{
	int a,b,i,j,x;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i-1;j++)
	   if(i%j==0)
	   break;
	if(j==i)
	printf("%d ",i);
}
}
