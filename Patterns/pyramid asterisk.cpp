#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	   for(j=0;j<=9;j++)
	   {
          if(j>=6-i && j<=4+i)
            printf("%d",i);
           else
		    printf(" "); 
    }
    printf("\n");
}
}
