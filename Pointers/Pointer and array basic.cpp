#include<stdio.h>
main(){
	int i,a[5],*p;
	p=&a[0];
	for(i=0;i<=4;i++){
		scanf(" %d ",p+i);
		printf(" %d ",*(p+i));
	}
}
