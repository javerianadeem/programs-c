#define MAXSIZE 100
#include<stdio.h>
void bubblesort(int*,int);
main(){
	int A[]={34,1,76,99,3,6};
	int i;
	bubblesort(A,7);
	for(i=0;i<=5;i++)
		printf(" %d ",A[i]);
	}
void bubblesort(int A[],int N)
{
	int i,j,round;
	for(j=1;j<N-1;j++){
		for(i=0;i<=N-1-i;i++){
			if(A[i]>A[j]){
				round=A[i];
				A[i]=A[j];
				A[j]=round;
}
}
}
}
