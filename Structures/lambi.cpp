#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define TRUE 1
void newpatientrecord();
void listallnew();
void listallold();
struct patient
{
	char name[20];
	int age;
	char id[10];
	char bloodgroup[5];
};
struct patient p[50];
int n=0;
main(){
	char ch;
	do{
		printf("\nType 'e' to enter new patient record ");
		printf("\nType 'l' to list all new records ");
		printf("\nType 'o' to list all old records ");
		printf("\nType 'q' to quit ");
		ch=getche();
		switch(ch){
			case 'e':
				newpatientrecord();
				break;
			case 'l':
			    listallnew();
			    break;
			case 'o':
			listallold();
			break;
			case 'q':
			    exit(0);
			default:
			puts("\nEnter only selections listed");		
		}
	}
	while(TRUE);
}
void newpatientrecord()
{
	printf("\nRecord %d \n",n+1);
	printf("\nEnter patient's name ");
	gets(p[n].name);
	printf("\nEnter patient's age ");
	scanf("%d",&p[n].age);
	fflush(stdin);
	printf("\nEnter patient's id ");
	gets(p[n].id);
	printf("\nEnter blood group of patient ");
	gets(p[n].bloodgroup);
	n++;
}
void listallnew()
{
	int j;
	if(n<1)
	printf("\nEmpty list\n");
	for(j=0;j<n;j++)
	{
	printf("\n\n\nRecord number %d",j+1);
	printf("\nPatient's Name : %s",p[j].name);
	printf("\nPatient's Age : %d",p[j].age);
	printf("\nPatient's Id : %s",p[j].id);
	printf("\nBlood Group : %s\n\n",p[j].bloodgroup);
	}
}
void listallold()
{
	int k=1;
	struct patient old[10];
	struct patient old1={"Soha",19,"17900","B+"};
	struct patient old2={"Ayman",18,"18550","O-"};
	struct patient old3={"Muneeba",19,"18560","A-"};
	struct patient old4={"Fatima",20,"18560","AB-"};
	struct patient old5={"Ali",21,"18540","O+"};
	struct patient old6={"Asad",55,"18520","B-"};
	struct patient old7={"Abdullah",45,"18510","A+"};
	struct patient old8={"Qaadir",33,"18500","AB+"};
	struct patient old9={"Kazim",27,"18000","A+"};
	struct patient old10={"Sasha",30,"18010","B-"};
	printf("\nEnter number whose record you want to see between 1-10 \n");
	old[0]=old1;
	old[1]=old2;
	old[2]=old3;
	old[3]=old4;
	old[4]=old5;
	old[5]=old6;
	old[6]=old7;
	old[7]=old8;
	old[8]=old9;
	old[9]=old10;
	for(k=0;k<10;k++){
	printf("\n\n\nRecord number %d",k+1);
	printf("\nPatient's Name : %s",old[k].name);
	printf("\nPatient's Age : %d",old[k].age);
	printf("\nPatient's Id : %s",old[k].id);
	printf("\nBlood Group : %s\n",old[k].bloodgroup);
}
}
