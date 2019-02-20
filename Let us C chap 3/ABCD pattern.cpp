#include<stdio.h>
main()
{
	int i,j;
	char k;
	for(i=1;i<=7;i++)
	{
		k='A';
		for(j=1;j<=13;j++)
		{
		if(j>=6+i || j<=8-i)
		{
		printf("%c",k);
		j<7?k++:k--;
		}
		else
		{
		printf(" ");
		if(j==7)
		k--;
}
	}
	printf("\n");
}
}
