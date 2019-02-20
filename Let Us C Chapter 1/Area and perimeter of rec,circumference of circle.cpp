#include<stdio.h>
main()
{
	float length,breadth,radius,area,perimeter,circumference;
	printf("Length=");
	
	scanf("%f",&length);
	
	printf("\nBreadth=");
	
	scanf("%f",&breadth);
	
	printf("\nRadius=");
	
	scanf("%f",&radius);
	
	area=breadth*length;
	
	printf("Area of rectangle=%f",area);
	
	perimeter=2*(length+breadth);
	
	printf("\nPerimter of rectangle=%f",perimeter);
	
	area= 3.14*radius*radius;
	
	printf("\nArea of circle=%f",area);
	
	circumference=2*3.14*radius;
	
	printf("\nCircumference of circle=%f",circumference);

}
