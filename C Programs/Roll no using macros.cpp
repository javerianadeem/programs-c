#define ERROR printf("\n Error \n")
#include<stdio.h>
main()
{
	int rollno;
	printf("Enter roll number");
	scanf("%d",&rollno);
	if(rollno>76)
	ERROR;
	else
	printf("Roll number is %d",rollno);
}
