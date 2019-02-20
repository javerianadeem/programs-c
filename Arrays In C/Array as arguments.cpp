#define MAXSIZE 20
#include<stdio.h>
int max(int [],int);
int main(){
	int list[MAXSIZE];
	int num,size=0;
	do{
		printf("Type a no : ");
		scanf("%d",&list[size]);
	}
		while(list[size++]!=0);
		num=max(list,size-1);
		printf("max=%d",num);
}
int max(int list[],int n)
{
	int dex,max=0;
	max=list[0];
	for(dex=0;dex<n;dex++)
	{
	if(max<list[dex])
	max=list[dex];
}
	return max;
}
