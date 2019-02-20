#include<stdio.h>
main()
{
	int num,cube,cube_n;
	printf("enter a number");
	scanf("%d",&num);
	for(cube=1;cube<=3;cube++)
	{
		cube_n=cube_n*num;
	}
	printf("%d",cube_n);
}
