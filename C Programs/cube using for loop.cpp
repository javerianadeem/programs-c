#include<stdio.h>
main()
{
	int cube,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(cube=1;cube<=3;cube++)
	{
	cube=cube*num;
	}
	printf("%d",cube);
}
