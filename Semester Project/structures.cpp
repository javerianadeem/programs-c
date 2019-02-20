#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void addacceptor();
void displayacceptor();



void adddonor();
void displaydonor();
struct acceptor
{
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
};
typedef struct acceptor y;
struct donor
{
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
};
typedef struct donor z;
main(){
	addacceptor();
	adddonor();
	displayacceptor();
	displaydonor();
}
/* Add Acceptors Record */
void addacceptor()
{
	y acc;
	printf("Enter acceptors name ");
	gets(acc.name);
	printf("Enter age ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id ");
	gets(acc.id);
	printf("Enter blood group ");
	gets(acc.bloodgroup);
}
/* Display Acceptors Record */
void displayacceptor(){
	y acc;
	printf("Acceptors name : %s\n",acc.name);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
}

/*   Add Donors Record */ 
void adddonor(){
	z don;
	printf("\n\nEnter donors name ");
	gets(don.name);
	printf("Enter age ");
	scanf("%d",&don.age);
	fflush(stdin);
	printf("Enter id ");
	gets(don.id);
	printf("Enter blood group ");
	gets(don.bloodgroup);
}
/* Display Donors Record */
void displaydonor(){
	z don;
	printf("Donors name : %s\n",don.name);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
}

