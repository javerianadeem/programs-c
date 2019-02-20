#include<stdio.h>
#include<conio.h>
#include<string.h>
struct patient{
    char name[20];
    int age;
    char id[10];
    char bloodgroup[5];
};
void display(struct patient p);
struct patient information();
main(){
	struct patient p1;
	p1=information();
	display(p1);
}
struct patient information(){
	struct patient p;
	printf("\nEnter patient's name ");
	gets(p.name);
	printf("\nEnter patient's age ");
	scanf("%d",&p.age);
	fflush(stdin);
	printf("\nEnter patient's id ");
	gets(p.id);
	printf("\nEnter blood group of patient ");
	gets(p.bloodgroup);
	return(p);
}
void display(struct patient p){
	printf("Patient's Name : %s",p.name);
	printf("\nPatient's Age : %d",p.age);
	printf("\nPatient's Id : %s",p.id);
	printf("\nBlood Group : %s",p.bloodgroup);
}
