#include<stdio.h>
main(){
	int term,i,sum=0,j,a=0;
	printf("Enter number of terms ");
	scanf("%d",&term);
	printf("The series is ");
	for(i=1;i<=term;i++){
		j=a*10+1;
		printf(" %d + ",j);
		sum=sum+j;
		a=j;
	}
	printf(".....");
	printf("\nSum of %d terms is %d ",term,sum);
}
