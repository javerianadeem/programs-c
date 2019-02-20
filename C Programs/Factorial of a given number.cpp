#include<stdio.h>
main()
{
	int fac=1,x,n;
	printf("Enter a number=");
	scanf("%d",&n);
	x=n;
	while(n>=1)
	{
		fac=fac*n;
		n--;
}
    printf("Factorial of %d is %d",x,fac);
}
