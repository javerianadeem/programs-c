#include<stdio.h>
main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	if(num%2==0 && num>0)
	printf("Positive even");
	if(num%2==0 && num<0)
	printf("Negative even");
	if(num%2!=0 && num>0)
	printf("Positive odd ");
	else
	printf("Negative odd");
}
