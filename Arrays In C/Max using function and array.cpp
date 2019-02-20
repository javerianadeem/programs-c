#define MAXSIZE 20
#include<stdio.h>
int max(int[],int);
main(){
	int list[MAXSIZE];
	int num,size=0;
	do{
		printf("Type a number ");
		scanf("%d",&list[size]);
	}
		while(list[size++]!=0);
		num=max(list,size-1);
		printf("max=%d",num);
	}
int max(int newlist[],int n){
	int i,max;
	max=newlist[0];
	for(i=1;i<n;i++)
		if(max<newlist[i])
			max=newlist[i];
	return(max);
}
