/* write a program that prints the perimeter of a rectengle to take its height amd width as input */
#include<stdio.h>
main()
{ 
	int height;
	int width;
	int perimeter;
	printf("Height:");
	scanf("%d",&height);
	printf("Width:");
	scanf("%d",&width);
	/* formula */
	perimeter = 2* (height + width);
	printf("Perimeter of a rectangle is = %d",perimeter);
	
}
