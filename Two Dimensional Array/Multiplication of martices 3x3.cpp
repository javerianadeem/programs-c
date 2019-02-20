#include<stdio.h>
main(){
	int i,j,A[3][3],B[3][3],C[3][3],sum;
	printf("Enter 9 values for first matrix ");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	scanf("%d",&A[i][j]);}}
	printf("Enter 9 values for second matrix ");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	scanf("%d",&B[i][j]);}}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		sum=0;
		for(int k=0;k<3;k++)
	sum=sum+A[i][k]*B[k][j];
	C[i][j]=sum;
}
}
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("%d ",C[i][j]);
}
    printf("\n");}
}
