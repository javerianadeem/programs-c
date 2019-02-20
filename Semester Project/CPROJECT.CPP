#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
#include<string.h>
#include<graphics.h>


void add(FILE*);                   /* Prototype for Students' Functions */
void del(FILE*,FILE*,char []);
void display(FILE*);
void count(FILE*,int*,int*);
void search(FILE*,char []);
void edit(FILE*,char []);


void addt(FILE*);                   /* Prototype for Teachers' Functions */
void delt(FILE*,FILE*,char []);
void displayt(FILE*);
void countt(FILE*,int*,int*);
void searcht(FILE*,char []);
void editt(FILE*,char []);


struct nodes                        /* Structure declaration for students */
{
char name[80];
char father_name[80];
char discipline[50];
char batch[10];
char year[15];
char seat_no[11];
char enrolment[20];
char address[50];
char phno[10];
};
typedef struct nodes n;             /* new name for this type */


struct nodet                        /* Structure declaration for teachers */
{
char name[80];
char dept[50];
char idno[10];
char post[30];
char address[50];
char phno[10];
};
typedef struct nodet t;             /* new name for this type */


/************************************************************/
/*                     THE MAIN FUNCTION                    */
/************************************************************/

void main()
{
clrscr();char chx;
int driver=0,mode,maxx,maxy;
initgraph(&driver,&mode,"d:\\TC\\bgi");
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
outtextxy (22,280,"JAWERIA SIDDIQUI      BCIT-012");
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (100,330,"BACHELOR OF COMPUTER SCIENCE & INFORMATION TECHNOLOGY");
outtextxy (35,360,"NED UNIVERSITY OF ENGINEERING AND TECHNOLOGY KARACHI ");
settextstyle (8,0,3);
setcolor (7);
outtextxy (15,422,"Plz Press any key to continue OR 'e' for exit...");
if((getch())=='e')
  exit(0);

while(1)
{
clrscr();
cleardevice();
setbkcolor(BLUE);
printf("\n\n\n\n\tPlz select from the following sections");
printf("\n\t======================================");
printf("\n\n\tPress 't' for teachers section OR 's' for students section");
printf("\n\tEnter your choice.....");

chx=getche();
clrscr();
cleardevice();
switch(chx)
{

	  case 's':

char ch;
FILE *fptr;
FILE *ptr;
while(1)
{

setbkcolor(6);
printf("\n\n\n\t\tYOU ARE IN STUDENTS DATABASE SECTION");
printf("\n\n\t\t====================================");
printf("\n\n\n\n Plz select from the following tasks you wish to perform");
printf("\n\n  Enter\n\t'a' to add a record\n\t'b' to delete a record\n\t'c' to display the record\n\t'd' to count the total no of records\n\t'e' to search a record\n\t'f' to edit a record\n\t'h' to exit");
ch=getche();
switch(ch)

{

case 'a':

	  clrscr();cleardevice();
	  char depart;n stdn;
	  printf("\n\n\n\n\n\n\tEnter the character corresponding to Department name\n\n\n\tB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	  depart=getche();
	  if(depart=='B')
	  {
	  fptr=fopen("std_BCIT.txt","ab");
	  if(fptr==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   add(fptr);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptr);
	   }
	  }
	  if(depart=='S')
	  {
	  fptr=fopen("std_SE.txt","ab");
	   if(fptr==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   add(fptr);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptr);
	   }
	  }
	  if(depart=='E')
	  {
	  fptr=fopen("std_EE.txt","ab");
	   if(fptr==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   add(fptr);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptr);
	   }
	  }
	   if(depart=='C')
	  {
	  fptr=fopen("std_CIS.txt","ab");
	   if(fptr==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   add(fptr);
	   printf("\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptr);
	   }
	  }
	  break;

case 'b':

	 clrscr();cleardevice();
	 char seat_num[11];
	 printf("\n\n\n\n\n\n\tEnter the character corresponding to Department name\n\n\n\tB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 depart=getche();
	 if(depart=='B')
	 {
	  do
	   {
	   fptr=fopen("std_BCIT.txt","rb");
	   ptr=fopen("temp.txt","wb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	    printf("\nThere is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\nEnter the Seat number of student to be deleted: ");
	    gets(seat_num);
	    del(fptr,ptr,seat_num);
	    fclose(fptr);
	    fclose(ptr);
	    remove("std_BCIT.txt");
	    rename("temp.txt","std_BCIT.txt");
	    printf("\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	  }
	 if(depart=='S')
	 {
	  do
	   {
	   fptr=fopen("std_SE.txt","rb");
	   ptr=fopen("temp.txt","wb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	    printf("\nThere is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\nEnter the Seat number of student to be deleted: ");
	    gets(seat_num);
	    del(fptr,ptr,seat_num);
	    fclose(fptr);
	    fclose(ptr);
	    remove("std_SE.txt");
	    rename("temp.txt","std_SE.txt");
	    printf("\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	 }
	 if(depart=='E')
	 {
	  do
	   {
	   fptr=fopen("std_EE.txt","rb");
	   ptr=fopen("temp.txt","wb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	    printf("\nThere is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\nEnter the Seat number of student to be deleted: ");
	    gets(seat_num);
	    del(fptr,ptr,seat_num);
	    fclose(fptr);
	    fclose(ptr);
	    remove("std_EE.txt");
	    rename("temp.txt","std_EE.txt");
	    printf("\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	 }
	 if(depart=='C')
	 {
	  do
	   {
	   fptr=fopen("std_CIS.txt","rb");
	   ptr=fopen("temp.txt","wb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	    printf("\nThere is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\nEnter the Seat number of student to be deleted: ");
	    gets(seat_num);
	    del(fptr,ptr,seat_num);
	    fclose(fptr);
	    fclose(ptr);
	    remove("std_CIS.txt");
	    rename("temp.txt","std_CIS.txt");
	    printf("\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	  }
	  break;

case 'c':

	 clrscr();cleardevice();
	 printf("\n\nDisplaying the records of BCIT DEPARTMENT\n");
	 printf("\n\n===============================================\n");
	 fptr=fopen("std_BCIT.txt","rb");
	  if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	  else
	   {
	   rewind(fptr);
	   display(fptr);
	   fclose(fptr);
	   }
	  printf("\n\nDisplaying the records of SOFTWARE DEPARTMENT\n");
	  printf("\n\n===============================================\n");
	  fptr=fopen("std_SE.txt","rb");
	  if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	  else
	   {
	   rewind(fptr);
	   display(fptr);
	   fclose(fptr);
	   }
	  printf("\n\nDisplaying the records of ELECTRICAL DEPARTMENT\n");
	  printf("\n\n==========================================\n");
	  fptr=fopen("std_EE.txt","rb");
	  if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	  else
	   {
	   rewind(fptr);
	   display(fptr);
	   fclose(fptr);
	   }
	  printf("\n\nDisplaying the records of COMPUTER & INFORMATION SYSTEM DEPARTMENT\n");
	  printf("\n\n==================================================================\n");
	  fptr=fopen("std_CIS.txt","rb");
	  if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	  else
	   {
	   rewind(fptr);
	   display(fptr);
	   fclose(fptr);
	   }
	  break;

case 'd':

	  clrscr();cleardevice();
	  int counter=0,BCIT=0,SE=0,EE=0,CIS=0;
	  fptr=fopen("std_BCIT.txt","rb");
	  if(fptr==NULL)
	   {
	   }
	  else
	   {
	   count(fptr,&counter,&BCIT);
	   fclose(fptr);
	   }
	  fptr=fopen("std_SE.txt","rb");
	  if(fptr==NULL)
	   {
	   }
	  else
	   {
	   count(fptr,&counter,&SE);
	   fclose(fptr);
	   }
	  fptr=fopen("std_EE.txt","rb");
	  if(fptr==NULL)
	   {
	   }
	  else
	   {
	   count(fptr,&counter,&EE);
	   fclose(fptr);
	   }
	  fptr=fopen("std_CIS.txt","rb");
	  if(fptr==NULL)
	   {
	   }
	  else
	   {
	   count(fptr,&counter,&CIS);
	   fclose(fptr);
	   }
	  printf("\n\n\n\t\tTotal no. of Records = %d\n\n\t\tBCIT DEPARTMENT Records = %d\n\n\t\tSOFTWARE DEPARTMENT Records = %d\n\n\t\tELECTRICAL DEPARTMENT Records = %d\n\n\t\tCOMPUTER & INFORMATION SYSTEM Records = %d\n\n",counter,BCIT,SE,EE,CIS);
	  getch();
	  break;

case 'e':

	 clrscr();cleardevice();
	 printf("\n\n\n\t\tEnter the character corresponding to Department name\n\t\B=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 depart=getche();
	 if(depart=='B')
	 {
	  do
	   {
	   fptr=fopen("std_BCIT.txt","rb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\t\tEnter the Seat number of student to search: ");
	    gets(seat_num);
	    search(fptr,seat_num);
	    printf("\nPress y to search more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='S')
	 {
	  do
	   {
	   fptr=fopen("std_SE.txt","rb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of student to search: ");
	    gets(seat_num);
	    search(fptr,seat_num);
	    printf("\nPress y to search more records in the same Department");
	   }
	   }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='E')
	 {
	  do
	   {
	   fptr=fopen("std_EE.txt","rb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of student to search: ");
	    gets(seat_num);
	    search(fptr,seat_num);
	    printf("\nPress y to search more records in the same Department");
	   }
	  }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='C')
	 {
	  do
	   {
	   fptr=fopen("std_CIS.txt","rb");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of student to search: ");
	    gets(seat_num);
	    search(fptr,seat_num);
	    printf("\nPress y to search more records in the same Department");
	   }
	   }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 break;

case 'f':

	 clrscr();cleardevice();
	 printf("\n\n\tEnter the character corresponding to Department name\nB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 depart=getche();
	 if(depart=='B')
	 {
	  do
	   {
	   fptr=fopen("std_BCIT.txt","rb+");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of the student to edit: ");
	    gets(seat_num);
	    edit(fptr,seat_num);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='S')
	 {
	  do
	   {
	   fptr=fopen("std_SE.txt","rb+");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of the student to edit: ");
	    gets(seat_num);
	    edit(fptr,seat_num);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='E')
	 {
	  do
	   {
	   fptr=fopen("std_EE.txt","rb+");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of the student to edit: ");
	    gets(seat_num);
	    edit(fptr,seat_num);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 if(depart=='C')
	 {
	  do
	   {
	   fptr=fopen("std_CIS.txt","rb+");
	   if((fptr==NULL)||(fread(&stdn,sizeof(n),1,fptr)==0))
	   printf("There is no record in COMPUTER& INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptr);
	    printf("\n\n\tEnter the Seat number of the student to edit: ");
	    gets(seat_num);
	    edit(fptr,seat_num);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptr);
	 }
	 break;



case 'h':
	 exit(0);

default:
	 printf("\n\n\t\tIncorrect option");

}
}

	  case 't':

char cht;
FILE *fptrt;
FILE *ptrt;

while(1)
{

setbkcolor(6);
printf("\n\n\n\t\tYOU ARE IN TEACHERS DATABASE SECTION");
printf("\n\n\t\t====================================");
printf("\n\n\n\n Plz select from the following tasks you wish to perform");
printf("\n\n  Enter\t'a' to add a record\n\t'b' to delete a record\n\t'c' to display the record\n\t'd' to count the total no of records\n\t'e' to search a record\n\t'f' to edit a record\n\t'h' to exit");
cht=getche();
switch(cht)
{

case 'a':
	  clrscr(); cleardevice();
	  char departt;t stdn;
	  printf("\n\n\n\tEnter the character corresponding to Department name\nB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	  departt=getche();
	  if(departt=='B')
	  {
	  fptrt=fopen("teach_BCIT.txt","ab");
	  if(fptrt==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   addt(fptrt);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptrt);
	   }
	  }
	  if(departt=='S')
	  {
	  fptrt=fopen("teach_SE.txt","ab");
	   if(fptrt==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   addt(fptrt);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptrt);
	   }
	  }
	  if(departt=='E')
	  {
	  fptrt=fopen("teach_EE.txt","ab");
	   if(fptrt==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   addt(fptrt);
	   printf("\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptrt);
	   }
	  }
	   if(departt=='C')
	  {
	  fptrt=fopen("teach_CIS.txt","ab");
	   if(fptrt==NULL)
	   printf("Unable to open file");
	  else
	   {
	  do
	   {
	   addt(fptrt);
	   printf("\n\nPress y to enter more records in the same Department");
	   }
	  while(getche()=='y');
	  fclose(fptrt);
	   }
	  }
	  break;

case 'b':

	 clrscr(); cleardevice();
	 char id_no[11];
	 printf("\n\n\tEnter the character corresponding to Department name\nB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 departt=getche();
	 if(departt=='B')
	 {
	  do
	   {
	   fptrt=fopen("teach_BCIT.txt","rb");
	   ptrt=fopen("tempte.txt","wb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	    printf("There is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\tEnter the id number of teacher to be deleted: ");
	    gets(id_no);
	    delt(fptrt,ptrt,id_no);
	    fclose(fptrt);
	    fclose(ptrt);
	    remove("teach_BCIT.txt");
	    rename("tempte.txt","teach_BCIT.txt");
	    printf("\n\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	  }
	 if(departt=='S')
	 {
	  do
	   {
	   fptrt=fopen("teach_SE.txt","rb");
	   ptrt=fopen("tempte.txt","wb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\tEnter the id number of teacher to be deleted: ");
	    gets(id_no);
	    delt(fptrt,ptrt,id_no);
	    fclose(fptrt);
	    fclose(ptrt);
	    remove("teach_SE.txt");
	    rename("tempte.txt","teach_SE.txt");
	    printf("\n\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	 }
	 if(departt=='E')
	 {
	  do
	   {
	   fptrt=fopen("teach_EE.txt","rb");
	   ptrt=fopen("tempte.txt","wb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\tEnter the id number of teacher to be deleted: ");
	    gets(id_no);
	    delt(fptrt,ptrt,id_no);
	    fclose(fptrt);
	    fclose(ptrt);
	    remove("teach_EE.txt");
	    rename("tempte.txt","teach_EE.txt");
	    printf("\n\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	 }
	 if(departt=='C')
	 {
	  do
	   {
	   fptrt=fopen("teach_CIS.txt","rb");
	   ptrt=fopen("tempte.txt","wb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\tEnter the id number of teacher to be deleted: ");
	    gets(id_no);
	    delt(fptrt,ptrt,id_no);
	    fclose(fptrt);
	    fclose(ptrt);
	    remove("teach_CIS.txt");
	    rename("tempte.txt","teach_CIS.txt");
	    printf("\n\nPress y to delete more records in the same Department");
	   }
	  }
	  while(getche()=='y');
	  }
	  break;

case 'c':

	 clrscr(); cleardevice();
	 printf("\n\n\tDisplaying the records of BCIT DEPARTMENT\n");
	 printf("\n\n\t===============================================\n");
	 fptrt=fopen("teach_BCIT.txt","rb");
	 if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	  else
	   {
	   rewind(fptrt);
	   displayt(fptrt);
	   fclose(fptrt);
	   }
	  printf("\n\n\tDisplaying the records of SOFTWARE DEPARTMENT\n");
	  printf("\n\n\t===============================================\n");
	  fptrt=fopen("teach_SE.txt","rb");
	  if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	  else
	   {
	   rewind(fptrt);
	   displayt(fptrt);
	   fclose(fptrt);
	   }
	  printf("\n\n\tDisplaying the records of ELECTRICAL DEPARTMENT\n");
	  printf("\n\n\t==========================================\n");
	  fptrt=fopen("teach_EE.txt","rb");
	  if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	  else
	   {
	   rewind(fptrt);
	   displayt(fptrt);
	   fclose(fptrt);
	   }
	  printf("\n\n\tDisplaying the records of COMPUTER & INFORMATION SYSTEM DEPARTMENT\n");
	  printf("\n\n\t==================================================================\n");
	  fptrt=fopen("teach_CIS.txt","rb");
	  if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	  else
	   {
	   rewind(fptrt);
	   displayt(fptrt);
	   fclose(fptrt);
	   }
	  break;

case 'd':

	  clrscr(); cleardevice();
	  int countert=0,BCITt=0,SEt=0,EEt=0,CISt=0;
	  fptrt=fopen("teach_BCIT.txt","rb");
	  if(fptrt==NULL)
	   {
	   }
	  else
	   {
	   countt(fptrt,&countert,&BCITt);
	   fclose(fptrt);
	   }
	  fptrt=fopen("teach_SE.txt","rb");
	  if(fptrt==NULL)
	   {
	   }
	  else
	   {
	   countt(fptrt,&countert,&SEt);
	   fclose(fptrt);
	   }
	  fptrt=fopen("teach_EE.txt","rb");
	  if(fptrt==NULL)
	   {
	   }
	  else
	   {
	   countt(fptrt,&countert,&EEt);
	   fclose(fptrt);
	   }
	  fptrt=fopen("teach_CIS.txt","rb");
	  if(fptrt==NULL)
	   {
	   }
	  else
	   {
	   countt(fptrt,&countert,&CISt);
	   fclose(fptrt);
	   }
	  printf("\n\n\n\t\tTotal no. of Records = %d\n\n\t\tBCIT DEPARTMENT Records = %d\n\n\t\tSOFTWARE DEPARTMENT Records = %d\n\n\t\tELECTRICAL DEPARTMENT Records = %d\n\n\t\tCOMPUTER & INFORMATION SYSTEM Records = %d",countert,BCITt,SEt,EEt,CISt);
	  getch();
	  break;

case 'e':

	 clrscr(); cleardevice();
	 printf("\n\n\tEnter the character corresponding to Department name\n\tB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 departt=getche();
	 if(departt=='B')
	 {
	  do
	   {
	   fptrt=fopen("teach_BCIT.txt","rb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of teacher to search: ");
	    gets(id_no);
	    searcht(fptrt,id_no);
	    printf("\nPress y to search more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='S')
	 {
	  do
	   {
	   fptrt=fopen("teach_SE.txt","rb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of teacher to search: ");
	    gets(id_no);
	    searcht(fptrt,id_no);
	    printf("\nPress y to search more records in the same Department");
	   }
	   }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='E')
	 {
	  do
	   {
	   fptrt=fopen("teach_EE.txt","rb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of teacher to search: ");
	    gets(id_no);
	    searcht(fptrt,id_no);
	    printf("\nPress y to search more records in the same Department");
	   }
	  }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='C')
	 {
	  do
	   {
	   fptrt=fopen("teach_CIS.txt","rb");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in COMPUTER & INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of teacher to search: ");
	    gets(id_no);
	    searcht(fptrt,id_no);
	    printf("\nPress y to search more records in the same Department");
	   }
	   }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 break;

case 'f':

	 clrscr(); cleardevice();
	 printf("\n\n\t\tEnter the character corresponding to Department name\n\tB=BCIT\tS=SOFTWARE\tE=ELECTRICAL\tC=COMPUTER SYSTEM\n\n");
	 departt=getche();
	 if(departt=='B')
	 {
	  do
	   {
	   fptrt=fopen("teach_BCIT.txt","rb+");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in BCIT DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of the teacher to edit: ");
	    gets(id_no);
	    editt(fptrt,id_no);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='S')
	 {
	  do
	   {
	   fptrt=fopen("teach_SE.txt","rb+");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in SOFTWARE DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of the teacher to edit: ");
	    gets(id_no);
	    editt(fptrt,id_no);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='E')
	 {
	  do
	   {
	   fptrt=fopen("teach_EE.txt","rb+");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in ELECTRICAL DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\n\t\tEnter the id number of the teacher to edit: ");
	    gets(id_no);
	    editt(fptrt,id_no);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 if(departt=='C')
	 {
	  do
	   {
	   fptrt=fopen("teach_CIS.txt","rb+");
	   if((fptrt==NULL)||(fread(&stdn,sizeof(n),1,fptrt)==0))
	   printf("There is no record in COMPUTER& INFORMATION SYSTEM DEPARTMENT");
	   else
	   {
	    rewind(fptrt);
	    printf("\n\nEnter the id number of the teacher to edit: ");
	    gets(id_no);
	    editt(fptrt,id_no);
	    printf("\nPress y to edit more records in the same Department");
	   }
	 }
	 while(getche()=='y');
	 fclose(fptrt);
	 }
	 break;

case 'h':

	  exit(0);

default:
	  printf("Incorrect option");

}
}
default:
	 printf("\n\n\n\n\t\tIncorrect option");
	 printf("\n\t\tPress e to exit");
	 if(getche()=='e')
	  exit(0);
}
}
closegraph();
}

/************************************************************/
/*    THIS FUNCTION ADDS A RECORD TO STUDENTS DATABASE      */
/************************************************************/

void add(FILE*fptr)
{
clrscr(); cleardevice();
n std;
printf("\n\n\n\tName: ");
gets(std.name);
printf("\n\n\tFather's Name: ");
gets(std.father_name);
printf("\n\n\tDiscipline: ");
gets(std.discipline);
printf("\n\n\tBatch: ");
gets(std.batch);
printf("\n\n\tYear: ");
gets(std.year);
printf("\n\n\tSeat No.: ");
gets(std.seat_no);
printf("\n\n\tEnrolment No.: ");
gets(std.enrolment);
printf("\n\n\tAddress :");
gets(std.address);
printf("\n\n\tPhone no.:");
gets(std.phno);
fwrite(&std,sizeof(n),1,fptr);
}

/************************************************************/
/*   THIS FUNCTION DELETES A RECORD FROM STUDENTS DATABASE  */
/************************************************************/

void del(FILE *fp,FILE *pt,char seat_num[11])
{
n std1;
while(fread(&std1,sizeof(n),1,fp)==1)
 {
 if((strcmp(std1.seat_no,seat_num))!=0)
  fwrite(&std1,sizeof(n),1,pt);
 else
  printf("\nRecord deleted successfully");
  }

}

/************************************************************/
/* THIS FUNCTION DISPLAYS ALL RECORDS OF STUDENTS DATABASE  */
/************************************************************/

void display(FILE*fptr)
{
n std;
while(fread(&std,sizeof(n),1,fptr)==1)
 {
  printf("\n\n\tName: %s\n\tFather's Name: %s\n\tDiscipline: %s\n\tBatch: %s\n\tYear: %s\n\tSeat No.: %s\n\tEnrolment No.: %s\n\tAddress: %s\n\tPhone no.: %s\n",std.name,std.father_name,std.discipline,std.batch,std.year,std.seat_no,std.enrolment,std.address,std.phno);
  printf("\n\n\n\nPress any key to continue...");
  getch();
 }
}

/************************************************************/
/* THIS FUNCTION COUNTS TOTAL RECORDS OF STUDENTS DATABASE  */
/************************************************************/

void count(FILE*fptr,int*p,int*q)
{
n std;
while(fread(&std,sizeof(n),1,fptr)==1)
 {
  (*p)++;
  (*q)++;
  }
}

/************************************************************/
/*   THIS FUNCTION SEARCHES A RECORD IN STUDENTS DATABASE   */
/************************************************************/

void search(FILE*fptr, char seat_num[11])
{
n std;
while(fread(&std,sizeof(n),1,fptr)==1)
 {
  if((strcmp(std.seat_no,seat_num))==0)
  {
   printf("\n\n\n\tName: %s\n\tFather's Name: %s\n\tDiscipline: %s\n\tBatch: %s\n\tYear: %s\n\tSeat No.: %s\n\tEnrolment No.: %s\n\tAddress: %s\n\tPhone no.: %s\n",std.name,std.father_name,std.discipline,std.batch,std.year,std.seat_no,std.enrolment,std.address,std.phno);
   break;
  }
 }
 if((strcmp(std.seat_no,seat_num))!=0)
 printf("\nSorry Record not found");
}

/************************************************************/
/*    THIS FUNCTION EDITS A RECORD IN STUDENTS DATABASE     */
/************************************************************/

void edit(FILE*fptr, char seat_num[11])
{
n std;
int test=0;
long int offset=sizeof(n);
while(fread(&std,sizeof(n),1,fptr)==1)
 {
  if((strcmp(std.seat_no,seat_num))==0)
  {
   printf("\n\n\n\tName: ");
   gets(std.name);
   printf("\n\n\tFather's Name: ");
   gets(std.father_name);
   printf("\n\n\tDiscipline: ");
   gets(std.discipline);
   printf("\n\n\tBatch: ");
   gets(std.batch);
   printf("\n\n\tYear: ");
   gets(std.year);
   printf("\n\n\tSeat No.: ");
   gets(std.seat_no);
   printf("\n\n\tEnrolment No.: ");
   gets(std.enrolment);
   printf("\n\n\tAddress :");
   gets(std.address);
   printf("\n\n\tPhone no.:");
   gets(std.phno);
   fseek(fptr,-offset,SEEK_CUR);
   fwrite(&std,sizeof(n),1,fptr);
   test=2;
   break;
  }
 }
 if(test==0)
 printf("\nSorry Record not found");
}


/************************************************************/
/*    THIS FUNCTION ADDS A RECORD TO TEACHERS DATABASE      */
/************************************************************/

void addt(FILE*fptrt)
{
clrscr(); cleardevice();
t teach;
printf("\n\n\tName: ");
gets(teach.name);
printf("\n\n\tDepartment: ");
gets(teach.dept);
printf("\n\n\tID Number: ");
gets(teach.idno);
printf("\n\n\tPost: ");
gets(teach.post);
printf("\n\n\tAddress :");
gets(teach.address);
printf("\n\n\tPhone no.:");
gets(teach.phno);
fwrite(&teach,sizeof(n),1,fptrt);
}

/************************************************************/
/*  THIS FUNCTION DELETES A RECORD FROM TEACHERS DATABASE   */
/************************************************************/

void delt(FILE *fp,FILE *pt,char id_num[11])
{
t teach1;
while(fread(&teach1,sizeof(t),1,fp)==1)
 {
 if((strcmp(teach1.idno,id_num))!=0)
  fwrite(&teach1,sizeof(t),1,pt);
 else
  printf("\nRecord deleted successfully");
 }
}

/************************************************************/
/*  THIS FUNCTION DISPLAYS ALL RECORD OF TEACHERS DATABASE  */
/************************************************************/

void displayt(FILE*fptr)
{
t teach;
while(fread(&teach,sizeof(t),1,fptr)==1)
 {
  printf("\n\n\n\tName: %s\n\tDepartment: %s\n\tID Number.: %s\n\tPost: %s\n\tAddress: %s\n\tPhone no.: %s\n",teach.name,teach.dept,teach.idno,teach.post,teach.address,teach.phno);
  printf("\n\n\n\nPress any key to continue...");
  getch();
 }
}

/************************************************************/
/* THIS FUNCTION COUNTS TOTAL RECORDS OF TEACHERS DATABASE  */
/************************************************************/

void countt(FILE*fptr,int*p,int*q)
{
t teach;
while(fread(&teach,sizeof(t),1,fptr)==1)
 {
  (*p)++;
  (*q)++;
  }
}

/************************************************************/
/*   THIS FUNCTION SEARCHES A RECORD IN TEACHERS DATABASE   */
/************************************************************/

void searcht(FILE*fptr, char id_num[11])
{
t teach;
while(fread(&teach,sizeof(t),1,fptr)==1)
 {
  if((strcmp(teach.idno,id_num))==0)
  {
   printf("\n\n\n\tName: %s\n\tDepartment: %s\n\tID Number.: %s\n\tPost: %s\n\tAddress: %s\n\tPhone no.: %s\n",teach.name,teach.dept,teach.idno,teach.post,teach.address,teach.phno);
   break;
  }
 }
 if((strcmp(teach.idno,id_num))!=0)
 printf("\nSorry Record not found");
}

/************************************************************/
/*    THIS FUNCTION EDITS A RECORD IN TEACHERS DATABASE     */
/************************************************************/

void editt(FILE*fptr, char id_no[11])
{
t teach;
int test=0;
long int offset=sizeof(t);
while(fread(&teach,sizeof(t),1,fptr)==1)
 {
  if((strcmp(teach.idno,id_no))==0)
  {
   printf("\n\n\tName: ");
   gets(teach.name);
   printf("\n\n\tDepartment: ");
   gets(teach.dept);
   printf("\n\n\tID Number: ");
   gets(teach.idno);
   printf("\n\n\tPost: ");
   gets(teach.post);
   printf("\n\n\tAddress :");
   gets(teach.address);
   printf("\n\n\tPhone no.:");
   gets(teach.phno);
   fseek(fptr,-offset,SEEK_CUR);
   fwrite(&teach,sizeof(t),1,fptr);
   test=2;
   break;
  }
 }
 if(test==0)
 printf("\nSorry Record not found");
}
