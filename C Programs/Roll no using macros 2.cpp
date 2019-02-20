#define ERROR(n) printf("\n Error %d\n",n)
#include<stdio.h>
main()
{
	int rollno;
	printf("Enter roll number");
	scanf("%d",&rollno);
	if(rollno>76)
	ERROR(rollno);
	else
	printf("Roll number is %d",rollno);
}
