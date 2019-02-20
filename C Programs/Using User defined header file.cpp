#include<stdio.h>
#include<conio.h>
#include<areas.h>
main()
{
	int r,l,w,b,h;
	printf("\nEnter radius,length,width,breadth,height\n");
	scanf("%d %d %d %d %d",&r,&l,&w,&b,&h);
	printf("Area of Circle is %f",Area_circle(r));
	printf("\nArea of sphere = %d",Area_square(l,w));
	printf("\nArea of triangle is %d",Area_triangle(b,h));
}
