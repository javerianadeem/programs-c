#include<stdio.h>
main()
{
	int i,arr[5],max,loc;
	printf("Enter 5 numbers to find its maximum\n");
	for(i=0;i<5;i++){
	printf("Enter number %d ",i+1);
	scanf("%d",&arr[i]);
}
		for(i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
			loc=i+1;
		}}
	printf("Maximum number is %d",max);
	printf("\nLocation is %d",loc);
}

