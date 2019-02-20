#include<stdio.h>
main()
{
	int x,y;
	for(y=1;y<24;y++)
	{
		for(x=1;x<=24;x++)
		if(x==y)
		printf("\xDB");
		else
		if(x==24-y)
		printf("\xDB");
		else
		printf("\xBO");
		printf("\n");
	}
}
