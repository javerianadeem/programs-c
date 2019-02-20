#include<stdio.h>
#include<string.h>
struct student{
	char rollno[20];
	char name[20];
	int age;
	};
struct student inputstudentdata();
void showstudentdata(struct student s);
main(){
	struct student s1;
	s1=inputstudentdata();
	showstudentdata(s1);
}
struct student inputstudentdata(){
	struct student s;
	printf("Enter roll no. name and age ");
	gets(s.rollno);
	fflush(stdin);
	gets(s.name);
	scanf("%d",&s.age);
	fflush(stdin);
	return(s);
}
void showstudentdata(struct student s){
	printf("\nStudent Data\n\n");
	printf("Roll no. : %s",s.rollno);
	printf("\nName : %s",s.name);
	printf("\nAge : %d\n",s.age);
}
