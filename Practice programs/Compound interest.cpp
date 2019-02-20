#include<stdio.h>
#include<math.h>
main()
{
	int i=0,n;
	float p=1000,r=0.5,a;
	printf("Enter no. of years=\n");
	scanf("%d",&n);
	printf("%4s%21s\n ","Years","Amount");
	for(i=1;i<=n;i++)
	{
		a=p * pow(1.0+r,i);
		printf("%2d %20.2f  \n",i,a);
	}
}
