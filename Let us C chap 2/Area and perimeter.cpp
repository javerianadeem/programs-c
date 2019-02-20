#define PI 3.141
#include<stdio.h>
main()
{
	int area,per,rad,length=5,breadth=4;
	printf("Enter radius");
	scanf("%d",&rad);
	area=4*PI*rad*rad;
	printf("Area of triangle is %d",area);
	per=2*(length+breadth);
	printf("\nPerimeter of triangle is %d",per);
	if(area<per)
	printf("\nPerimeter is greater than area");
	else
	printf("\nArea is greater than perimeter");
	
}
