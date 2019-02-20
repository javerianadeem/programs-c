#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>

void menu();

void addacceptor();
void displayacceptor();
void searchacceptor();   // FUNCTIONS FOR BLOOD ACCEPTORS //
void editacceptor();
void delacceptor();
void countacceptor();

void adddonor();
void displaydonor();
void editdonor();       
void searchdonor();      // FUNCTIONS FOR BLOOD DONORS //
void deldonor();
void countdonor();

struct acceptor
{
	char gender;
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	char accepted[10];
};
typedef struct acceptor y;

struct donor
{
	char gender;
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	char donated[10];
};
typedef struct donor z;

//main function

int main()
{
clrscr();
char chx;
int driver=0,mode,maxx,maxy;
initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
setcolor(6);
maxx=getmaxx();
maxy=getmaxy();
rectangle(2,2,maxx-2,maxy-2);
rectangle(5,5,maxx-5,maxy-5);
rectangle(8,8,maxx-8,maxy-8);
setbkcolor(9);
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (15,90,"WELCOME TO THE NED UNIVERSITY DATABASE MANAGEMENT SYSTEM");
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (15,115,"===================================================");
setcolor (15);
outtextxy (125,180,"PROJECT SUBMITTED TO SIR WASEEM-ULLAH");
settextstyle (DEFAULT_FONT,HORIZ_DIR,1);
outtextxy (22,240,"Created By  : ");
outtextxy (22,280,"JAVERIA NADEEM      FCIT-004");
outtextxy (22,320,"QANDEEL ASIF      FCIT-029");
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (100,330,"BACHELOR OF COMPUTER SCIENCE & INFORMATION TECHNOLOGY");
outtextxy (35,360,"NED UNIVERSITY OF ENGINEERING AND TECHNOLOGY KARACHI ");
settextstyle (8,0,3);
setcolor (4);
outtextxy (15,422,"Plz Press any key to continue OR 'e' for exit...");
if((getch())=='e')
  exit(0);
	{
			
        menu();
    }
    return 0;
	
}

void menu()
{	
    int choice;
	char ch;
	while(TRUE)
	{
		clrscr();
cleardevice();
setbkcolor(BLUE);
	    printf("\n\n***************************************");
		printf("\n/////BLOOD BANK/////\n");
		printf("please press:\n");
		printf("\n\t======================================");
		printf("1] Blood Acceptor's Record\n\n");
		printf("2] Blood Donor's Record\n\n");
		printf("3] Exit\n\n");
		printf("Enter your choice \n\n");
		scanf("%d",&choice);
		fflush(stdin);
		clrscr();
		cleardevice();

	
	switch(choice)
	{
		case 1:
			{
				while(TRUE)
				{
				setcolor(6);
					printf("\n \n \nYou are in blood accepting patients record\n\n ");
					printf("\n'a' to add record\n");
					printf("'b' to display record\n");
					printf("'c' to search record\n");
					printf("'d' to count record\n");
					printf("'e' to edit record\n");
					printf("'f' to delete record\n");
					printf("'g' to exit\n");
					printf("Your choice?\n");
					ch=getch();
					clrscr();
					cleardevice();
					switch(ch)
					{
						setcolor(BROWN);
						case 'a':
						addacceptor();
						break;
						case 'b':
						displayacceptor();
						break;
						case 'c':
						searchacceptor();
						break;
						case 'd':
						countacceptor();
						break;
						case 'e':
						editacceptor();
						break;
						case 'f':
						delacceptor();
						break;
						case 'g':
						menu();
						break;
						default:
						printf("Please select the options mentioned in list");
						break;
					}
				}
			}
			clrcsr();
			cleardevice();
		case 2:
		{
			while(TRUE)
			{
				setcolor(6);
				printf("You are in blood donors record\n\n\n ");
				printf("Type 'a' to add record\n");
				printf("Type 'b' to display record\n");
				printf("Type 'c' to search record\n");
				printf("Type 'd' to count record\n");
				printf("Type 'e' to edit record\n");
				printf("Type 'f' to delete record\n");
				printf("Type 'g' to exit\n");
				printf("Your choice?\n");
				ch=getch();
				switch(ch)
				{
					setcolor(BROWN);
					case 'a':
					adddonor();
					break;
					case 'b':
					displaydonor();
					break;
		 			case 'c':
					searchdonor();
					break;
					case 'd':
					countdonor();
					break;
					case 'e':
					editdonor();
					break;
					case 'f':
					deldonor();
					break;
					case 'g':
					menu();
					break;
					default:
					printf("Please select the options mentioned in list");
					break;
				}
			}
			  
		}
		clrscr();
		cleardevice();
			
        case 3:
        	{
				while(TRUE)
				{
        			exit(0);
        			break;
        		}
        	}
        
		default:
			setcolor(6);
		printf("Please select the options mentioned in list");
			}
	}
}




		
		
//////****** Add Acceptors Record *****//////
void addacceptor()
{
	FILE *fp;
	y acc;
	printf("ADD BLOOD ACCEPTORS RECORD\n\n");
	fp=fopen("acceptor.txt","wb");
	do
	{
	printf("\nEnter acceptors name ");
	gets(acc.name);
	printf("Enter acceptor's gender [M/F] : ");
	acc.gender=getche();
	printf("\nEnter age ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id ");
	gets(acc.id);
	printf("Enter blood group ");
	gets(acc.bloodgroup);
	printf("Enter amount of accepted blood (format : 2 litres) ");
	gets(acc.accepted);
	fwrite(&acc,sizeof(acc),1,fp);
	printf("Do you want to add another record (y/n)?\n\n");
	}
	while(getche()=='y');
	fclose(fp);
	}
////*****   Add Donors Record *****//// 
	void adddonor()
	{
	z don;
	FILE *fp1;
	fp1=fopen("donor.txt","ab");
	do
	{
		printf("\nEnter donors name ");
		gets(don.name);
		printf("Enter donor's gender [M/F] : ");
		don.gender=getche();
		printf("\nEnter age ");
		scanf("%d",&don.age);
		fflush(stdin);
		printf("Enter id ");
		gets(don.id);
		printf("Enter blood group ");
		gets(don.bloodgroup);
		printf("Enter amount of donated blood (format : 2 litres) ");
		gets(don.donated);
		fwrite(&don,sizeof(don),1,fp1);
		printf("Do you want to add another record (y/n)?\n\n");
	}
    while(getche()=='y');
	fclose(fp1);
	}
////**** Display Acceptors Record *****/// 
void displayacceptor()
{
	y acc;
	FILE *fp;
	fp=fopen("acceptor.txt","rb");
    if (fp == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&acc,sizeof(acc),1,fp)>0)
	{
	printf("Acceptors name : %s\n",acc.name);
	printf("Gender : %c\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in litres : %s\n\n\n",acc.accepted);
	}
	fclose(fp);
	}
////**** Display Donors Record ****////
void displaydonor()
{
	z don;
	FILE *fp1;
	fp1=fopen("donor.txt","rb");
    if (fp1 == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&don,sizeof(don),1,fp1)>0)
	{
	printf("Donors name : %s\n",don.name);
	printf("Gender : %c\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in litres : %s\n\n\n",don.donated);
	}
	fclose(fp1);
	}

////***** SEARCHING ACCEPTORS RECORD *****//

void searchacceptor()
{
	FILE *fp;
	char id[20];
    y acc;
    do
	{
    fp=fopen("acceptor.txt","rb");
    if((fp==NULL)||(fread(&acc,sizeof(y),1,fp)==0))
	   printf("There is no record in Acceptors Data Base");
	else
	{
	    rewind(fp);
	printf("\n\nEnter the blood acceptors id to search: ");
    gets(id);
	}
while(fread(&acc,sizeof(acc),1,fp)==1)
{
    if((strcmp(acc.id,id))==0)
	{
	printf("Acceptors name : %s\n",acc.name);
	printf("Gender : %c\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in litres : %s\n\n\n",acc.accepted);
	break;
	}
	}
    if((strcmp(acc.id,id))!=0)
	{
	printf("\nSorry Record not found");
	}
	printf("\nDo you want to search another record (y/n)?\n");
	}
	while(getche()=='y');
	fclose(fp);
	}


////**** SEARCHING DONORS RECORD *****////


void searchdonor()
{
	FILE *fp1;
	char id[20];
    z don;
    do
	{
    fp1=fopen("donor.txt","rb");
    if((fp1==NULL)||(fread(&don,sizeof(z),1,fp1)==0))
	   printf("There is no record in Donors Data Base");
	else
	{
	rewind(fp1);
	printf("\n\nEnter the blood donors id to search: ");
    gets(id);
	}
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.id,id))==0)
	{
	printf("Donors name : %s\n",don.name);
	printf("Gender : %c\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in litres : %s\n\n\n",don.donated);
	break;
	}
	}
	if((strcmp(don.id,id))!=0)
	{
	printf("\nSorry Record not found");
	}
	printf("\nDo you want to search another record (y/n)?\n");
	}
	while(getche()=='y');
	fclose(fp1);
	}

////**** EDIT ACCEPTORS RECORD****///

void editacceptor()
{
	char id[20];
	FILE *fp;
	y acc;
	int test=0;
	do
	{
	fp=fopen("acceptor.txt","rb+");
	printf("\n\nEnter the blood acceptors id to search: ");
    gets(id);
	long int offset=sizeof(y);
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.id,id))==0)
	{
	printf("EDIT RECORD\n");
	printf("Enter acceptors name ");
	gets(acc.name);
	printf("Gender(M/F) : ");
	acc.gender=getche();
	printf("Enter age ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id ");
	gets(acc.id);
	printf("Enter blood group ");
	gets(acc.bloodgroup);
	printf("Accepted Blood ");
	gets(acc.accepted);
   fseek(fp,-offset,SEEK_CUR);
   fwrite(&acc,sizeof(y),1,fp);
   test=2;
   break;
   }
   }
   fclose(fp);
   printf("Do you want to edit another record (y/n)? ");
   }
   while(getche()=='y');
   if(test==0)
   printf("\nSorry Record not found");
   }

////**** EDIT DONORS RECORD ****////

void editdonor()
{
	char id[20];
	FILE *fp1;
	z don;;
	int test=0;
	do
	{
	fp1=fopen("donor.txt","rb+");
	printf("\n\nEnter the blood donors id to search: ");
    gets(id);
	long int offset=sizeof(z);
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.id,id))==0)
	{
	printf("EDIT RECORD\n");
	printf("Enter donors name ");
	gets(don.name);
	printf("Gender(M/F) : ");
	don.gender=getche();
	printf("Enter age ");
	scanf("%d",&don.age);
	fflush(stdin);
	printf("Enter id ");
	gets(don.id);
	printf("Enter blood group ");
	gets(don.bloodgroup);
	printf("Donated blood ");
	gets(don.donated);
	
	fseek(fp1,-offset,SEEK_CUR);
	fwrite(&don,sizeof(z),1,fp1);
	test=2;
	break;
	}
	}
	if(test==0)
	printf("\nSorry Record not found");
	fclose(fp1);
	printf("Edit another record (y/n)?");
	}
	while (getche()=='y');
	}
/******* DELETES ACCEPTORS RECORDS *****/

void delacceptor()
{
	FILE *fp,*pt;
	char id[20];
	y acc1;
	do
	{
	fp=fopen("acceptor.txt","rb");
	pt=fopen("temp.txt","wb");
	if((fp==NULL)||(fread(&acc1,sizeof(y),1,fp)==0))
	{
    printf("There is no such record in Acceptors DataBase Record");
	}
	else
	{
	rewind(fp);
	printf("Enter acceptors id to delete record ");
	gets(id);
	}
	
	while(fread(&acc1,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc1.id,id))!=0)
	{
	fwrite(&acc1,sizeof(y),1,pt);
	}
	}
	if((strcmp(acc1.id,id))!=0)
	printf("\nRecord deleted successfully");
  	else
  	printf("Record is shit");
	fclose(fp);
	fclose(pt);
	remove("acceptor.txt");
	rename("temp.txt","acceptor.txt");
	printf("\nDo you want to delete another record (y/n)?");
	}
	
	while(getche()=='y');
	}
/*********** DELETES DONORS RECORD ********/

void deldonor()
{
	FILE *fp1,*pt1;
	char id[20];
	z don1;
	do
	{
	fp1=fopen("donor.txt","rb");
	pt1=fopen("temp1.txt","wb");
	if((fp1==NULL)||(fread(&don1,sizeof(z),1,fp1)==0))
	{
    printf("There is no such record in Donors DataBase Record");
	}
	else
	{
	rewind(fp1);
	printf("Enter donors id to delete record ");
	gets(id);
	}
	
	while(fread(&don1,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don1.id,id))!=0)
	{
	fwrite(&don1,sizeof(z),1,pt1);
	}
	}
	if((strcmp(don1.id,id))!=0)
	printf("\nRecord deleted successfully");
  	else
  	{
  	printf("Record is shit");
	fclose(fp1);
	fclose(pt1);
	remove("donor.txt");
	rename("temp1.txt","donor.txt");
	printf("\nDo you want to delete another record (y/n)?");
	}
}
	while(getche()=='y');
	}
/********** COUNTS RECORDS OF BLOOD ACCEPTORS *******/

void countacceptor()
{
	int *p;
	int counter=0;
	FILE *fp;
	y acc;
	p = &counter;
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	(*p)++;
	}
	printf("Total number of records in acceptors data base = %d ",*p);
	fclose(fp);
	}
/******* COUNTS RECORDS OF BLOOD DONORS **********/

void countdonor()
{
	int *q;
	int counter1=0;
	FILE *fp1;
	z don;;
	q = &counter1;
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	(*q)++;
	}
	printf("Total number of records in acceptors data base = %d ",*q);
	fclose(fp1);
	}
