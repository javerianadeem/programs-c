#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	int vcount=0;
	printf("Enter any phrase:");
	while((ch=getche())!='\r')
	{
	if(ch==a || ch==e || ch==i || ch==o || ch==u)vcount++;
	printf("The total number of vowels are %d",vcount);
}
}
