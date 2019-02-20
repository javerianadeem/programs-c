#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
	   for(j=1;j<=7;j++)
	   {
          if(j>=i-2 && j<=10-i && j>=3-i && j<=5+i)
            printf("*");
           else
		    printf(" "); 
    }
    printf("\n");
}
}
