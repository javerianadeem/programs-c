#define LIM 40
#include<stdio.h>
main(){
	float temp[40];
	float sum=0.0;
	int num,day=0;
	do{
		if(day>30)
		{
			printf("Buffer is full");
			break;
		}
	printf("Enter temp for day %d  ",day+1);
	scanf("%f",&temp[day]);
	}
	while(temp[day++]>0);
	num=day-1;
	for(day=0;day<num;day++){
	sum+=temp[day];
}
    printf("\nAverage is %f",sum/num);
}
