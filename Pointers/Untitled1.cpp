#include<stdio.h>
main(){
	int x=4,y=7;
	printf("x=%d  , y=%d  ",x,y);
	int *px,*py;
	px=&x;
	py=&y;
	*px=*px+10;
	*py=*py+10;
	printf("x=%d  , y=%d  ",x,y);
	printf("x=%d  , y=%d ",*px,*py);
	}
