#include<stdio.h>
main()
{
	int n;
	for(n=1;n<256;n++)
	printf("%3d=%c\t",n,n);
	printf("%c",'A'+32);
}
