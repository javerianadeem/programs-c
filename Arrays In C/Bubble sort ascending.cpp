#define MAXSIZE 20
#include<stdio.h>
void sort(int[],int);
main(){
	static int list[MAXSIZE];
	int dex,size=0;
	do{
		printf("Type a number ");
		scanf("%d",&list[size]);
	}
		while(list[size++]!=0);
		sort(list,--size);
		for(dex=0;dex<size;dex++)
		printf(" %d ",list[dex]);
}
void sort(int list[],int size){
	int temp,i,j;
	for(i=0;i<size-1;i++){
	for(j=i+1;j<size;j++){
		if(list[i]>list[j]){
		temp=list[i];
		list[i]=list[j];
		list[j]=temp;
}
}
}
}
