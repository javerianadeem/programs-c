#include<stdio.h>
main(){
	int i,j,se=0,so=0,arr[50],num;
	printf("Enter number of inputs ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter number %d ",i+1);
		scanf(" %d",&arr[i]);
	}
	printf("\nThe numbers you entered are ");
	for(i=0;i<num;i++){
		printf(" %d",arr[i]);
		if(arr[i]%2==0)
		se=se+arr[i];
		else
		so=so+arr[i];}
	printf("\nSum of even=%d \n Sum of odd = %d",se,so);
}
