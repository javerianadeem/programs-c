#include<stdio.h>
main(){
	int term,i,sum=0,j;
	printf("Enter number of terms ");
	scanf("%d",&term);
	printf("The sqaure natural number upto given terms are ");
	for(i=1;i<=term;i++){
		j=i*i;
		printf(" %d ",j);
		sum=sum+j;
	}
	printf("\nSum of %d terms is %d ",term,sum);
}
