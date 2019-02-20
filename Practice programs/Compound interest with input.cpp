#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n;
	double p,r,a;
	printf("Enter principle=");
	scanf("%lf",&p);
	printf("\nEnter rate=");
	scanf("%lf",&r);
	printf("\nEnter years=");
	scanf("%d",&n);
	printf("%4s%22s\n ","Years","Amount");
	for(i=1;i<=n;i++)
	{
		a=p * pow(1.0+r,i);
		printf("%2d %20.2lf  \n",i,a);
	}
}
