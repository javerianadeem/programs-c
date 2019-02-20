#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<=9;i++)
	{
	   for(j=1;j<=19;j++)
	   {
          if(j>=10-i && j<=10+i)
            printf("%d",i);
           else
		    printf(" "); 
    }
    printf("\n");
}
}
