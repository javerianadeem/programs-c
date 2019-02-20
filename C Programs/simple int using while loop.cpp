#include<stdio.h>
main()
{
	int p,n,count;
	float r,si;
	
	count=1;
	while(count<=3)
	{
		printf("\nenter values of p,n and r");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("Simple interest= rs %f",si);
		count=count-1;
	}
}
