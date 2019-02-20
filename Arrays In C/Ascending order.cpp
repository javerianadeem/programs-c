#include<stdio.h>
main(){
	int sort,num,arr[50],i;
	printf("Enter number of inputs ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter number %d ",i+1);
		scanf("%d",&arr[i]);}
	printf("The numbers you entered are ");
	for(i=0;i<num;i++){
	printf(" %d",arr[i]);}
	printf("\nThe numbers in ascending order are ");
	for(i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
		if(arr[i]>arr[j]){
			sort=arr[i];
			arr[i]=arr[j];
			arr[j]=sort;}
	}
	printf(" %d ",arr[i]);
}
    printf("\nMinimum is %d",arr[0]);
}
