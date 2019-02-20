#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

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
	float accepted;
};
typedef struct acceptor y;

struct donor
{
	char gender;
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	float donated;
};
typedef struct donor z;

//main function

int main()
{
	char m,n,o,p,q,r,s,t;
	char ch;
	puts("ENTER PASSWORD HERE TO ACCESS(8-digit)\n\n\n");
	puts("OR\n");
	puts("TYPE 'e' TO EXIT\n");
	if (getch()=='e')
	{
	exit(0);
}
	else
	{
	m=getch();
	printf("*");
	n=getch();
	printf("*");
	o=getch();
	printf("*");
	p=getch();
	printf("*");
	q=getch();
	printf("*");
	r=getch();
	printf("*");
	s=getch();
	printf("*");
	t=getch();
	printf("*");
	
	}
	if(m=='p' && n=='a' && o=='s' && p=='$' && q=='w' && r=='o' && s=='r' && t=='d')
	{
	puts("\nYOU ARE WELCOME\n\n");
	puts("PRESS ENTER");
	getch();
	}
	else
	{
	puts("\nINCORRECT PASSWORD\n");
	puts("TRY AGAIN\n");
	puts("TYPE 'e' TO EXIT\n");
	main();
	}
	main:
	
	{
			
        menu();
    }
	
}

void menu()

{	
    int choice;
	char ch;
	while(TRUE)
	{
	    printf("\n\n******************************************");
		printf("\n********  WELCOME TO BLOOD BANK  ********");
		printf("\n*******************************************");
		printf("\n\n1] Blood Acceptor's Record\n\n");
		printf("2] Blood Donor's Record\n\n");
		printf("3] Exit\n\n");
		printf("Enter your choice \n\n");
		scanf("%d",&choice);
		fflush(stdin);
	
	switch(choice)
	{
		case 1:
			{
				while(TRUE)
				{
				
					printf("\n\n\nYou are in blood accepting patients record\n\n ");
					printf("\n'a' to add record\n");
					printf("'b' to display record\n");
					printf("'c' to search record\n");
					printf("'d' to count record\n");
					printf("'e' to edit record\n");
					printf("'f' to delete record\n");
					printf("'g' to exit\n");
					printf("Your choice?\n");
					ch=getch();
					switch(ch)
					{
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
			
		case 2:
		{
			while(TRUE)
			{
				printf("\n\nYou are in blood donors record\n\n\n");
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
			
        case 3:
        	{
				while(TRUE)
				{
        			exit(0);
        			break;
        		}
        	}
        
		default:
		printf("Please select the options mentioned in list");
			}
	}
}



/************************************************************/
/*    THIS FUNCTION ADDS A RECORD TO ACCEPTORS DATABASE      */
/************************************************************/


void addacceptor()
{
	FILE *fp;
	y acc;
	int flag = 0;
	char bloodgroup[5];
	printf("ADD BLOOD ACCEPTORS RECORD\n\n");
	fp=fopen("acceptor.txt","ab");
	do
	{
	printf("\nEnter acceptors name : ");
	gets(acc.name);
	printf("Enter acceptor's gender [M/F] : ");
	acc.gender=getche();
	printf("\nEnter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id : ");
	gets(acc.id);
	printf("Enter blood group : ");
	gets(acc.bloodgroup);
		if (strcmp(acc.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(acc.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(acc.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(acc.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered Invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", acc.bloodgroup);
	   }
	printf("\nEnter amount of accepted blood in millilitres (format : 500) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
	fwrite(&acc,sizeof(acc),1,fp);
	printf("Do you want to add another record (y/n)?\n\n");
	}
	while(getche()=='y');
	fclose(fp);
	}


/***********************************************************/
/*    THIS FUNCTION ADDS A RECORD TO DONORS DATABASE     */
/***********************************************************/


	void adddonor()
	{
	z don;
	int flag = 0;
	char bloodgroup[5];
	FILE *fp1;
	fp1=fopen("donor.txt","ab");
	do
	{
		printf("\nEnter donors name : ");
		gets(don.name);
		printf("Enter donor's gender [M/F] : ");
		don.gender=getche();
		printf("\nEnter age : ");
		scanf("%d",&don.age);
		fflush(stdin);
		printf("Enter id : ");
		gets(don.id);
		printf("Enter blood group : ");
		gets(don.bloodgroup);
		if (strcmp(don.bloodgroup, "A+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "A-") == 0)
		flag = 1;
	    if (strcmp(don.bloodgroup, "B+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "B-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB+") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "AB-") == 0)
		flag = 1;
    	if (strcmp(don.bloodgroup, "O+") == 0)
		flag = 1;
        if (strcmp(don.bloodgroup, "O-") == 0)
		flag = 1;

    	if (flag == 0)
  		printf("\nYou entered a invalid blood group.");
    	else
	   {
		printf("\n%s is valid blood group\n", don.bloodgroup);
	   }
		printf("Enter amount of donated blood in ml (format : 500) : ");
		scanf("%f",&don.donated);
		fflush(stdin);
		fwrite(&don,sizeof(don),1,fp1);
		printf("Do you want to add another record (y/n)?\n\n");
	}
    while(getche()=='y');
	fclose(fp1);
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


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
	printf("Accepted blood in millilitres(ml) : %f\n\n\n",acc.accepted);
	}
	fclose(fp);
	}


/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN DONORS DATABASE     */
/*****************************************************************/


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
	printf("Donated blood in millilitres(ml) : %f\n\n\n",don.donated);
	}
	fclose(fp1);
	}


/*****************************************************************/
/*    THIS FUNCTION SEARCHES A RECORD IN ACCEPTORS DATABASE     */
/*****************************************************************/


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
	printf("Accepted blood in litres : %f\n\n\n",acc.accepted);
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


/*****************************************************************/
/*      THIS FUNCTION SEARCHES A RECORD IN DONORS DATABASE     */
/*****************************************************************/


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
	printf("Donated blood in litres : %f\n\n\n",don.donated);
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


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN ACCEPTORS DATABASE      */
/*****************************************************************/

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
	printf("Enter acceptors name : ");
	gets(acc.name);
	printf("Gender(M/F) : ");
	acc.gender=getche();
	printf("\nEnter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id : ");
	gets(acc.id);
	printf("Enter blood group : ");
	gets(acc.bloodgroup);
	printf("Accepted Blood in millilitres(ml) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
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


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN DONORS DATABASE       */
/*****************************************************************/


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
	printf("Enter donors name : ");
	gets(don.name);
	printf("Gender(M/F) : ");
	don.gender=getche();
	printf("\nEnter age : ");
	scanf("%d",&don.age);
	fflush(stdin);
	printf("Enter id : ");
	gets(don.id);
	printf("Enter blood group : ");
	gets(don.bloodgroup);
	printf("Donated blood in millilitres(ml) : ");
	scanf("%f",&don.donated);
	fflush(stdin);
	
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
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM ACCEPTORS DATABASE     */
/*****************************************************************/


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
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM DONORS DATABASE     */
/*****************************************************************/


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


/*****************************************************************/
/*    THIS FUNCTION COUNTS ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


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
	printf("\nTotal number of records in acceptors data base = %d ",*p);
	fclose(fp);
	}
	
	
/*****************************************************************/
/*     THIS FUNCTION COUNTS ALL RECORDS IN DONORS DATABASE       */
/*****************************************************************/


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
	printf("\nTotal number of records in acceptors data base = %d ",*q);
	fclose(fp1);
	}
