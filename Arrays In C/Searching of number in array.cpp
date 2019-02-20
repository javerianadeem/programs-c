#define MAXSIZE 100
#include<stdio.h>
main(){
	int i,num,a[5],fok=0,size;
	printf("Enter the size of array ");
	scanf("%d",&size);
	printf("Enter numbers ");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number whose location you wanna find ");
	scanf("%d",&num);
	for(i=0;i<size;i++)
	{
		if(num==a[i]){
			fok=1;
		break;
	}
}
	if(fok==1)
	printf("Location of %d is %d ",num,i+1);
	else
	printf("Invalid number");
}
