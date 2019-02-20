#include<stdio.h>
main(){
	int st[75][2],i=0;
	do{
		printf("Enter Roll no. & marks ");
		scanf("%d %d",&st[i][0],&st[i][1]);
	}
	while(st[i++][0]!=0);
	{
		for(int count=0;count<i-1;count++)
		printf("Student %d\nRoll no %d Marks %d\n",count+1,st[count][0],st[count][1]);
	}
}
