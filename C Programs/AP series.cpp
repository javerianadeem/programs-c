#include<stdio.h>
main(){
	int term,i,d,start;
	float sum=0,j,a=-3;
	printf("Enter number of terms ");
	scanf("%d",&term);
	printf("Common difference ");
	scanf("%d",&d);
	printf("Enter starting number ");
	scanf("%d",&start);
	printf("\nThe A.P series is ");
	for(i=1;i<=term;i++){
		j=a+d;
		printf(" %.0f +",j);
		sum=sum+j;
		a=j;
	}
	printf(".....");
	printf("\nSum of %d terms is %.1f ",term,sum);
}
