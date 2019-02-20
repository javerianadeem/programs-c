#include<stdio.h>
main(){
	float agent[10][2];
	int i=0;
	float code,expenses;
	do{
		printf("Enter agent code & expenses ");
		scanf("%f %f",&code,&expenses);
		agent[i][0]=code;
		agent[i][1]=expenses;
	}
	while(agent[i++][0]!=0);
		for(int count=0;count<i-1;count++){
		printf("Agent %d\nAgent code %f Expenses %f\n ",count+1,agent[count][0],agent[count][1]);
	}
	float max=0.0,pos;
	for(int count=0;count<i-1;count++){
		if(max<agent[count][1])
		{
			max=agent[count][1];
			pos=count+1;
		}
	}
	printf("Maximum expenses are of agent %.0f with expenses %.2f",pos,max);
}

