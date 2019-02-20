#include<stdio.h>
int isPrime(int x);
main()
{
	int N,x=2;
	printf("Enter a number");
	scanf("%d",&N);
	while (N)
	{
		if(isPrime(x))
		{
			printf("%d  ",x);
			N--;
		}
		x++;
	}
}
int isPrime(int x)
{
	int i;
	for(i=2;i<x;i++)
	   if(x%i==0)
 	    return(0);
 	return(1);
}
