#include<stdio.h>
main()
{
	int p,n,count;
	float r,si,sum;
	
	for(count=1;count<=10;count=count+1)
	{
		printf("enter valvues of p,n,r");
		scanf("%d%d%f",&p,&n,&r);
		sum=p+n+r;
		printf("simple interest=rs %f\n",sum);
	}
}
