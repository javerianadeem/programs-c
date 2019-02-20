#include<stdio.h>
main(){
	int i,so=0,arr[50],num;
	printf("Enter number of inputs ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter number %d ",i+1);
		scanf(" %d",&arr[i]);
	}
	printf("\nThe numbers you entered are ");
	for(i=0;i<num;i++){
		printf(" %d",arr[i]);
		if(arr[i]%2!=0)
		so=so+arr[i];}
	printf("\nSum of odd = %d",so);
}
