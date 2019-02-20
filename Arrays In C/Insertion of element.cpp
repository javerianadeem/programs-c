#include<stdio.h>
main(){
	int num,size,loc,arr[50],i;
	printf("Enter number of inputs ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter number %d ",i+1);
		scanf("%d",&arr[i]);}
	printf("The numbers you entered are ");
	for(i=0;i<size;i++){
	printf(" %d",arr[i]);}
	printf("\nEnter number you want to insert ");
	scanf("%d",&num);
	printf("Enter location ");
	scanf("%d",&loc);
	if(loc>size+1 || loc<=0)
	printf("Invalid location");
	else{
		for(i=size;i>=loc;i--){
			arr[i]=arr[i-1];	}
		arr[loc-1]=num;
		size++;}
	printf("\nThe elements after insertion in array are ");
	for(i=0;i<size;i++)
	printf(" %d ",arr[i]);}
