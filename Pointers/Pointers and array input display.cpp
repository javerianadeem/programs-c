#include<stdio.h>
void input(int*);
void display(int*);
void sort(int*);
main(){
	int a[5];
	input(a);
	display(a);
	sort(a);
	display(a);
}
void input(int *p){
	int i;
	for(i=0;i<5;i++){
		printf("Enter num %d ",i+1);
		scanf("%d",p+i);
	}
	printf("\n");
}
void display(int *p){
	int i;
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d",*(p+i));
}
void sort(int *p){
	int round,t,i;
	for(round=1;round<5;round++)
	{
		for(i=0;i<4;i++)
		if(*(p+i)>*(p+i+1))
		{
			t=*(p+i);
			*(p+i)=*(p+i+1);
			*(p+i+1)=t;
		}
	}
}	
