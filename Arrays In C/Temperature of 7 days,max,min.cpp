#include<stdio.h>
main(){
	int sum=0,i,temp[7];
	for(i=0;i<=6;i++){
		printf("Enter temperature of day %d  ",i+1);
		scanf("%d",&temp[i]);
		sum=sum+temp[i];}
	printf("\nThe sum of temperature of 7 days is %d",sum);
	printf("\nAverage is %d",sum/7);
	int max=0,min=50;
	for(i=0;i<=6;i++){
		if(max<temp[i])
		max=temp[i];}
	for(i=0;i<=6;i++){
		if(min>temp[i])
		min=temp[i];}
	printf("\nMaximum temperature is %d",max);
	printf("\nMinimum temperature is %d",min);}
