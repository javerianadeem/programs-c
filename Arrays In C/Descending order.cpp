#include<stdio.h>
main(){
	int temp,arr[50],i,num=0;
	do{
		printf("Enter numbers");
		scanf("%d",&arr[num]);
	}
		while(arr[num++]!=0);
		num--;
	printf("The numbers you entered are ");
	for(i=0;i<num;i++){
	printf(" %d",arr[i]);}
	printf("\nThe numbers in descending order are ");
	for(i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
		if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;}
	}
	printf(" %d ",arr[i]);
}
}

