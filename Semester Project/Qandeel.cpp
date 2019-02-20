#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void menu();
/*void case1();
void case2();*/

void addacceptor();
void adddonor();
void displayacceptor();
void displaydonor();
void searchacceptor();
void searchdonor();
void deleteacceptor();
void deletedonor();
void editacceptor();
void editdonor();
void delacceptor();
void deldonor();
void countacceptor();
void countdonor();

struct acceptor
{
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	char accepted[10];
};
typedef struct acceptor y;

struct donor
{
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	char donated[10];
};
typedef struct donor z;

/************************************************************/
/*                     THE MAIN FUNCTION                    */
/***********************************************************/

int main()
{
	int a;  

    for(a=0;;a++)
	{
		printf("\n\n***************************************");
		printf("\n/////BLOOD BANK/////\n");
		printf("please press:\n");
		printf("1] Blood Acceptor's Record\n\n");
		printf("2] Blood Donor's Record\n\n");
		printf("3] Exit\n\n");
        menu();
    }
    return 0;
}

/************************************************************/
/*               THE MAIN MENU FUNCTION                    */
/***********************************************************/
void menu()
{
	FILE *fp,*fp1;
	int choice;
	char ch;

	printf("Enter your choice:\n");
	scanf("%d",&choice);
	fflush(stdin);
	switch(choice)
	{
		case 1: 
		{
		printf("\n\n**	YOU ARE IN BLOOD ACCEPTOR'S RECORD'**\n\n ");
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
			printf("\n*** Goodbye. *");
            exit(0);
            break;
			default:
				printf("Please select the options mentioned in list");
				break;
		}
	}
	
		case 2:
			{
				printf("\n\n **YOU ARE IN  BLOOD DONORS RECORD**\n\n\n ");
		printf("Type 'a' to add record\n");
		printf("Type 'b' to display record\n");
		printf("Type 'c' to search record\n");
		printf("Type 'd' to count record\n");
		printf("Type 'e' to edit record\n");
		printf("Type 'f' to delete record\n");
		printf("type 'g' to exit\n");
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
			case 'g':
			printf("\n*** Goodbye. *");
            exit(0);
			break;
			default:
			printf("\nPlease select the options mentioned in list");
			break;
		}

			}
		
		
		case 3:
    	{
    		exit(0);
            break;
		}
    	
		default:
        	printf("\nPlease select the options mentioned in list\n");
        	break;
	}
}
/************************************************************/
/*				ADDS RECORD TO ACCEPTOR                     */
/***********************************************************/

void addacceptor()
{
	FILE *fp;
	y acc;
	printf("ADD BLOOD ACCEPTORS RECORD\n\n");
	fp=fopen("acceptor.txt","ab");
	do{
	printf("\n");
	printf("Enter acceptors name: \t ");
	gets(acc.name);
	printf("Enter age: \t ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id: \t ");
	gets(acc.id);
	printf("Enter blood group: \t ");
	gets(acc.bloodgroup);
	fwrite(&acc,sizeof(acc),1,fp);
	printf("\nDo you want to add another record (y/n)? \n ");
	}
	while(getche()=='y');
	fclose(fp);
}

/************************************************************/
/*         ADD RECORD TO DONOR			                    */
/***********************************************************/

void adddonor()
{
	z don;
	FILE *fp1;
	fp1=fopen("donor.txt","ab");
	do{
	printf("\n");
	printf("Enter donors name: \t ");
	gets(don.name);
	printf("Enter age: \t ");
	scanf("%d",&don.age);
	fflush(stdin);
	printf("Enter id: \t ");
	gets(don.id);
	printf("Enter blood group: \t ");
	gets(don.bloodgroup);
	fwrite(&don,sizeof(don),1,fp1);
	printf("\n Do you want to add another record (y/n)? \n ");
}
    while(getche()=='y');
	fclose(fp1);
	
}

/************************************************************/
/*            DISPLAY ACCEPTOR INFORMATION                  */
/***********************************************************/

void displayacceptor()
{
	y acc;
	FILE *fp;
	fp=fopen("acceptor.txt","rb");
    if (fp == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&acc,sizeof(acc),1,fp)>0){
	printf("Acceptors name : %s\n",acc.name);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n\n\n",acc.bloodgroup);
}
	fclose(fp);
}
/************************************************************/
/*               DISPLAY RECORD OF DONOR                   */
/***********************************************************/

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
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n\n\n",don.bloodgroup);
	}
	fclose(fp1);
}

/************************************************************/
/*            SERACHING RECORD FOR ACCEPTOR                */
/***********************************************************/

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

/************************************************************/
/*              SEARCH RECORD FOR DONOR	                    */
/***********************************************************/

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


/************************************************************/
/*	         EDIT RECORD OF ACCEPTOR	                   */
/***********************************************************/
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


/************************************************************/
/*         EDIT RECORD OF DONOR   	                   		*/
/***********************************************************/
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
/************************************************************/
/*         DELETE RECORD OF ACCEPTOR	                   */
/***********************************************************/

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
	rename("temp.txt","acceptor.txt");printf("\nDo you want to delete another record (y/n)?");
	}
	
	while(getche()=='y');
	}
/************************************************************/
/*         DELETE RECORD OF DONOR     	                   */
/***********************************************************/

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
  	printf("Record is shit");
	fclose(fp1);
	fclose(pt1);
	remove("donor.txt");
	rename("temp1.txt","donor.txt");
	printf("\nDo you want to delete another record (y/n)?");
	}
	
	while(getche()=='y');
	}

/************************************************************/
/*         COUNTS RECORD OF ACCEPTOR	                   */
/***********************************************************/

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

/************************************************************/
/*         COUNTS RECORD OF ACCEPTOR	                   */
/***********************************************************/

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
  printf("Total number of records in donor data base = %d ",*q);
  fclose(fp1);
}

