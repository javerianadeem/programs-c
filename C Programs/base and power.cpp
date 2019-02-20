#include<stdio.h>
main()
{
	int base,power,i,ans=1;
	printf("Enter base and power=");
	scanf("%d%d",&base,&power);
	for(i=1;i<=power;i++)
	{
		ans=ans*base;
	}
	printf("%d",ans);
}
