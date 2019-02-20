#include<stdio.h>
main()
{
	int k=5,x=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++){
		if(i%2==0)
		printf("%d",x++);
		else
		printf("%d",k--);
	}
	x=1;
	k=5;
	printf("\n");
}
}
