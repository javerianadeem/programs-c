/* write a prog to convert distance(input in kms) and print it meters,feets,inches,centimeters */
#include<stdio.h>
main()
{
	float distance,meters,feets,inches,centimeters;
	printf("Enter the distamce between two cities in kilometers:");
	
	scanf("%f",&distance);
	
	meters=distance*1000;
	
	printf("The distance between two cities in meters is %f\n",meters);
	
	feets=distance*3280.84;
	
	printf("The distance between two cities in feet is %f\n",feets);
	
	inches=distance*39370.1;
	
	printf("The distance between two cities in inches is %f\n",inches);
	
	centimeters=distance*100000;
	
	printf("The distance between two cities in centimeters is %f\n",centimeters);
	
}
