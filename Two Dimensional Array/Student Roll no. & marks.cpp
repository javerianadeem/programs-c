#include<stdio.h>
main(){
	int i,student[5][2];
	for(i=0;i<5;i++){
		printf("Enter roll no. & marks for student %d ",i+1);
		scanf("%d %d",&student[i][0],&student[i][1]);
	}
	for(i=0;i<5;i++)
	printf("Student %d\nRoll No. %d Marks %d\n",i+1,student[i][0],student[i][1]);
}
