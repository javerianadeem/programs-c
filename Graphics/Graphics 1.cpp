#include<stdio.h>
main()
{
	int x,y;
	for(y=1;y<9;y++)
	{
		for(x=1;x<=9;x++)
		if((x+y)%2==0)
		printf("\xDB\xDB");
		else
		printf(" ");
		printf("\n");
	}
}
