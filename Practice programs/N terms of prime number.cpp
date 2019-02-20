#include<stdio.h>
main()
{
	int N,i,x=2;
	printf("Enter a number");
	scanf("%d",&N);
	while(N)
	{
		for(i=2;i<=x-1;i++)
	   if(x%i==0)
	   break;
	if(i==x)
	{
	printf("%d ",x);
	N--;
}
    x++;
}
}
