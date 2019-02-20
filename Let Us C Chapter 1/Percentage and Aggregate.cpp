#include<stdio.h>
main()
{
	float subject1,subject2,subject3,subject4,subject5;
	float Percentage,Aggregate;
	
	printf("Marks of subject 1=");
	
	scanf("%f",&subject1);
	
	printf("\nMarks of subject 2=");
	
	scanf("%f",&subject2);
	
	printf("\nMarks of subject 3=");
	
	scanf("%f",&subject3);
	
	printf("\nMarks of subject 4=");
	
	scanf("%f",&subject4);
	
	printf("\nMarks of subject 5=");
	
	scanf("%f",&subject5);
	
	printf("\n\nAggregate=");
	
	Aggregate=subject1+subject2+subject3+subject4+subject5;
	
	printf("%f\n",Aggregate);
	
	printf("\n\nPercentage=");
	
	Percentage=Aggregate/500.0*100.0;
	
	printf("%f",Percentage);
}
