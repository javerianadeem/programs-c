#include<stdio.h>
main(){
	int term,i;
	float sum=0,j,a=1;
	printf("Enter number of terms ");
	scanf("%d",&term);
	printf("The series is ");
	for(i=1;i<=term;i++){
		j=1/a;
		printf(" 1/%d + ",i);
		sum=sum+j;
		a++;
	}
	printf(".....");
	printf("\nSum of %d terms is %f ",term,sum);
}
