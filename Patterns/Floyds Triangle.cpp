#include<stdio.h>
main()
{
	int i,j,count=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++);
		{
			if(j==i && j<=i-2)
			printf("1");
			else
			printf("0");
	}
	printf("\n");
}
}
