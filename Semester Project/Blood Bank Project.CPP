#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h> 
#include<dos.h>

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

void see1();
void see2();
void see3();
void see4();            //FUNCTIONS FOR BLOOD AVAILIBITY
void see5();
void see6();
void see7();
void see8();


int getVisitorId();
void setVisitorId(int);

struct acceptor
{
	char gender[3];
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	float accepted;
};
typedef struct acceptor y;

struct donor
{
	char gender[3];
	char name[20];
	int age;
	char id[20];
	char bloodgroup[5];
	float donated;
};
typedef struct donor z;

//main function

void main()
{
	char password[20],*corr="pas$word",chy,h;
	clrscr();
char chx;
int driver=0,mode,maxx,maxy;
initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
maxx=getmaxx();
maxy=getmaxy();
rectangle(2,2,maxx-2,maxy-2);
rectangle(5,5,maxx-5,maxy-5);
rectangle(8,8,maxx-8,maxy-8);
setbkcolor(WHITE);
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (15,90,"WELCOME TO THE NED UNIVERSITY DATABASE MANAGEMENT SYSTEM");
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (15,115,"===================================================");
setcolor (BLUE);
outtextxy (125,170,"PROJECT SUBMITTED TO SIR WASEEM-ULLAH");
outtextxy (125,190,"=================================");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy (255,235,"Created By  : ");
outtextxy (170,280,"JAVERIA NADEEM      FCIT-004");
outtextxy (170,320,"QANDEEL ASIF         FCIT-029");
settextstyle (TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(4);
outtextxy (35,360,"BACHELOR OF COMPUTER SCIENCE & INFORMATION TECHNOLOGY");
outtextxy (35,390,"NED UNIVERSITY OF ENGINEERING AND TECHNOLOGY KARACHI ");
settextstyle (8,0,3);
setcolor (BLUE);
outtextxy (15,422,"Plz Press any key to continue OR 'e' for exit...");
if((getch())=='e')
  exit(0);
  else{
	clrscr();
cleardevice();
  pass:
  cleardevice();


	      setbkcolor(WHITE);

    do {
	for(int i=0;i<7;i++)
	{
		moveto(140,100);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
		setcolor(BLUE);
	outtext("Enter Password(8-digits) : \t");
	while(TRUE)
	{       gotoxy(180,180);
		chy=getch();
		if(chy=='\r')
		break;
		password[i]=chy;
		setcolor(BLUE);
		outtext("*");
		i++;
	}
	password[i]='\0';

		if(strcmp(corr,password)==0)
		{
			moveto(210,200);
			outtext("CORRECT PASSWORD!");
			moveto(170,270);
			outtext("PRESS ENTER TO CONTINUE...");
			h=getche();
menu();
}
		else
		{
			moveto(210,200);
			outtext("WRONG PASSWORD!");
			moveto(170,270);
			outtext("PRESS ENTER TO TRY AGAIN...");
getch();
goto pass;
     }
 }
}
while(TRUE);
}
}
void menu()
{
    int choice;
	char ch;
	while(TRUE)
	{
		clrscr();
		cleardevice();
setbkcolor(WHITE);
 moveto(170,70);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setcolor(BLUE);
  delay(100);
		outtext("WELCOME TO BLOOD BANK");
		outtextxy(170,90,"====================");

 moveto(190,150);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(BLUE);
 delay(100);
		outtext("1] Blood Acceptor's Record");
 moveto(190,200);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(BLUE);
 delay(100);
		outtext("2] Blood Donor's Record");
		moveto(190,250);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(BLUE);
 delay(100);
		outtext("3] Blood Avalaibility");
		moveto(190,300);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(BLUE);
 delay(100);
		outtext("4] Exit");
		moveto(190,350);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		setcolor(BLUE);
		delay(100);
		outtext("Enter your choice");
		moveto(190,400);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		setcolor(BLUE);

		scanf("%d",&choice);
		fflush(stdin);
	switch(choice)
	{
		case 1:

			{
				while(TRUE)
				{
					clrscr();
				cleardevice();
				setbkcolor(WHITE);
				moveto(40,80);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
				setcolor(BLUE);
				delay(100);
				outtext("YOU ARE IN BLOOD ACCEPTING PATIENTS RECORD");
				outtextxy(40,100,"======================================");
				moveto(200,140);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'a' to add record");
				moveto(200,180);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'b' to display record");
				moveto(200,220);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'c' to search record");
				moveto(200,260);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'd' to count record");
				moveto(200,300);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'e' to edit record");
				moveto(200,340);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'f' to delete record");
				moveto(200,380);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'g' to exit");
				moveto(200,420);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("YOUR CHOICE!");
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
					clrscr();
				cleardevice();
				setbkcolor(WHITE);
				moveto(40,80);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
				setcolor(BLUE);
				delay(100);
				outtext("YOU ARE IN BLOOD DONATING PATIENTS RECORD");
				outtextxy(40,100,"=====================================");
				moveto(200,140);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);;

				outtext("Type 'a' to add record");
				moveto(200,180);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'b' to display record");
				moveto(200,220);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'c' to search record");
				moveto(200,260);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'd' to count record");
				moveto(200,300);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'e' to edit record");
				moveto(200,340);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'f' to delete record");
				moveto(200,380);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'g' to exit");
				moveto(200,420);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("YOUR CHOICE!");
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
					clrscr();
					cleardevice();
				setbkcolor(WHITE);
				moveto(150,60);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
				setcolor(BLUE);
				delay(100);
				outtext("CHECKING BLOOD AVAILABILTY");
				outtextxy(150,80,"=======================");

				moveto(130,120);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'a' to see 'A+' bloodgroup availiabilty");
				moveto(130,160);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);

				outtext("Type 'b' to see 'B+' bloodgroup availiabilty");
				moveto(130,200);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'c' to see 'A-' bloodgroup availiabilty");
				moveto(130,240);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'd' to see 'B-' bloodgroup availiabilty");
				moveto(130,280);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'e' to see 'AB+' bloodgroup availiabilty");
				moveto(130,320);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'f' to see 'AB-' bloodgroup availiabilty");
				moveto(130,360);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'g' to see 'O+' bloodgroup availiabilty");
				moveto(130,400);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'h' to see 'O-' bloodgroup availiabilty");
				moveto(130,440);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Type 'i' to exit");
				moveto(130,580);
				settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
				setcolor(BLUE);
				delay(100);
				outtext("Your choice?");
				ch=getch();
				switch(ch)
				{
					case 'a':
					see1();
					break;
					case 'b':
					see2();
					break;
					case 'c':
					see3();
					break;
					case 'd':
					see4();
					break;
					case 'e':
					see5();
					break;
					case 'f':
					see6();
					break;
					case 'g':
					see7();
					break;
					case 'h':
					see8();
					break;
					case 'i':
					menu();
					break;
					default:
					printf("Please select the options mentioned in list");
					break;
				}
			}

		}

	case 4:
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
	int temp=0;
	char bloodgroup[5];
	cleardevice();
	setbkcolor(BLACK);
	fp=fopen("acceptor.txt","ab");
	do
	{
	printf("\nEnter acceptors name : ");
	gets(acc.name);
	
		do
		{
		printf("Enter acceptor's gender [M/F] : ");
		gets(acc.gender);
		if(strcmp(acc.gender,"M")==0)
			temp=1;
		if(strcmp(acc.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
	printf("Enter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	int visitor_id = getVisitorId();
	visitor_id++;
	itoa (visitor_id , acc.id , 10);
	printf("Acceptors Id : %s", acc.id);
	setVisitorId(visitor_id);
	
	do{
	printf("\nEnter blood group in Capital letters : ");
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
		printf("\n%s is valid blood group", acc.bloodgroup);
		break;
		}
		}
		while(TRUE);
	printf("\nEnter amount of accepted blood in millilitres (format : 500) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
	fwrite(&acc,sizeof(acc),1,fp);
	printf("Do you want to add another record (y/n)?\n\n");
	}
	while(getche()=='y');
	fclose(fp);
	getche();
	}


/***********************************************************/
/*    THIS FUNCTION ADDS A RECORD TO DONORS DATABASE     */
/***********************************************************/


	void adddonor()
	{
	z don;
	int flag = 0;
	int temp=0;
	char bloodgroup[5];
	char gender[3];
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	FILE *fp1;
	fp1=fopen("donor.txt","ab");
	do
	{
		printf("\nEnter donors name : ");
		gets(don.name);
		do
		{
		printf("Enter donor's gender [M/F] : ");
		gets(don.gender);
		if(strcmp(don.gender,"M")==0)
			temp=1;
		if(strcmp(don.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
		printf("Enter age : ");
		scanf("%d",&don.age);
		fflush(stdin);
		int visitor_id = getVisitorId();
		visitor_id++;
		itoa (visitor_id , don.id , 10);
		printf("Donors Id : %s", don.id);
		setVisitorId(visitor_id);
		
		do{
		printf("\nEnter blood group in capital letters : ");
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
		break;
	   }
}
	   while(TRUE);
		printf("Enter amount of donated blood in ml (format : 500) : ");
		scanf("%f",&don.donated);
		fflush(stdin);
		fwrite(&don,sizeof(don),1,fp1);
		printf("Do you want to add another record (y/n)?\n\n");
	}
    while(getche()=='y');
	fclose(fp1);
	getche();
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


void displayacceptor()


{
	y acc;
	cleardevice();
	setbkcolor(BLACK);
	FILE *fp;
	fp=fopen("acceptor.txt","rb");
    if (fp == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&acc,sizeof(acc),1,fp)>0)
	{
	printf("Acceptors name : %s\n",acc.name);
	printf("Gender : %s\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in millilitres(ml) : %.2fml\n\n\n",acc.accepted);
	}
	fclose(fp);
	getche();
	}


/*****************************************************************/
/*    THIS FUNCTION DISPLAY ALL RECORDS IN DONORS DATABASE     */
/*****************************************************************/


void displaydonor()
{
	z don;
	cleardevice();
	setbkcolor(BLACK);
	FILE *fp1;
	fp1=fopen("donor.txt","rb");
    if (fp1 == NULL)
	{
        printf("\nFile not opened for reading");
	}
	while(fread(&don,sizeof(don),1,fp1)>0)
	{
	printf("Donors name : %s\n",don.name);
	printf("Gender : %s\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in millilitres(ml) : %.2fml\n\n\n",don.donated);
	}
	fclose(fp1);
	getche();
	}


/*****************************************************************/
/*    THIS FUNCTION SEARCHES A RECORD IN ACCEPTORS DATABASE     */
/*****************************************************************/


void searchacceptor()
{
	FILE *fp;
	char id[20];
    y acc;
    cleardevice();
	setbkcolor(BLACK);
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
	printf("Gender : %s\n",acc.gender);
	printf("Acceptors age : %d\n",acc.age);
	printf("Acceptors id : %s\n",acc.id);
	printf("Acceptors bloodgroup : %s\n",acc.bloodgroup);
	printf("Accepted blood in litres : %.2fml\n\n\n",acc.accepted);
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
	getche();
	cleardevice();
	}


/*****************************************************************/
/*      THIS FUNCTION SEARCHES A RECORD IN DONORS DATABASE     */
/*****************************************************************/


void searchdonor()
{
	FILE *fp1;
	char id[20];
    z don;
    cleardevice();
	setbkcolor(BLACK);
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
	printf("Gender : %s\n",don.gender);
	printf("Donors age : %d\n",don.age);
	printf("Donors id : %s\n",don.id);
	printf("Donors bloodgroup : %s\n",don.bloodgroup);
	printf("Donated blood in litres : %.2fml\n\n\n",don.donated);
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
	getche();
	cleardevice();
	}


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN ACCEPTORS DATABASE      */
/*****************************************************************/

void editacceptor()
{
	char id[20];
	FILE *fp;
	y acc;
	int test=0,temp=0,flag=0;
	cleardevice();
	setbkcolor(BLACK);
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
	printf("\nEnter acceptors name : ");
	gets(acc.name);
		do
		{
		printf("Enter acceptor's gender [M/F] : ");
		gets(acc.gender);
		if(strcmp(acc.gender,"M")==0)
			temp=1;
		if(strcmp(acc.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
	printf("\nEnter age : ");
	scanf("%d",&acc.age);
	fflush(stdin);
	printf("Enter id : ");
	gets(acc.id);
	do{
	printf("\nEnter blood group : ");
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
		break;
		}
		}
		while(TRUE);
	printf("\nEnter amount of accepted blood in millilitres (format : 500) : ");
	scanf("%f",&acc.accepted);
	fflush(stdin);
	
	fseek(fp,-offset,SEEK_CUR);
	fwrite(&acc,sizeof(y),1,fp);
	test=2;
	break;
	}
	}
	if(test==0)
	printf("\nSorry Record not found");
	fclose(fp);
	printf("\nDo you want to edit another record (y/n)? ");
	}
	while(getche()=='y');
	getche();
	cleardevice();
	}


/*****************************************************************/
/*      THIS FUNCTION EDITS A RECORD IN DONORS DATABASE       */
/*****************************************************************/


void editdonor()
{
	char id[20];
	FILE *fp1;
	z don;;
	cleardevice();
	setbkcolor(BLACK);
	int test=0,temp=0,flag=0;
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
	printf("\nEnter donors name : ");
		gets(don.name);
		do
		{
		printf("Enter donor's gender [M/F] : ");
		gets(don.gender);
		if(strcmp(don.gender,"M")==0)
			temp=1;
		if(strcmp(don.gender,"F")==0)
		temp=1;
		
    	if (temp == 0)
    	{
  		printf("\nPlease select (M/F)\n");
  	}
    	else
	   {
		break;
	   }
}
		while(TRUE);
		printf("\nEnter age : ");
		scanf("%d",&don.age);
		fflush(stdin);
		printf("Enter id : ");
		gets(don.id);
		do{
		printf("\nEnter blood group : ");
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
		break;
	   }
}
	   while(TRUE);
		printf("Enter amount of donated blood in ml (format : 500) : ");
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
	printf("\nEdit another record (y/n)?");
	}
	while (getche()=='y');
	getche();
	cleardevice();
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM ACCEPTORS DATABASE     */
/*****************************************************************/


void delacceptor()
{
	FILE *fp,*pt;
	char id[20];
	y acc1;
	cleardevice();
	setbkcolor(BLACK);
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
	printf("Record not found");
  	else
  	{
  	printf("\nRecord deleted successfully");
  }
	fclose(fp);
	fclose(pt);
	remove("acceptor.txt");
	rename("temp.txt","acceptor.txt");
	printf("\nDo you want to delete another record (y/n)?\n");
	}
	while(getche()=='y');
	getche();
	cleardevice();
	}
	
	
/*****************************************************************/
/*    THIS FUNCTION DELETES A RECORD FROM DONORS DATABASE     */
/*****************************************************************/


void deldonor()
{
	FILE *fp1,*pt1;
	char id[20];
	z don1;
	cleardevice();
	setbkcolor(BLACK);
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
	printf("Record not found");
  	else
  	{
  	printf("\nRecord deleted successfully");
  }
	fclose(fp1);
	fclose(pt1);
	remove("donor.txt");
	rename("temp1.txt","donor.txt");
	printf("\nDo you want to delete another record (y/n)?\n");
	}
	while(getche()=='y');
	getche();
	cleardevice();
	}


/*****************************************************************/
/*    THIS FUNCTION COUNTS ALL RECORDS IN ACCEPTORS DATABASE     */
/*****************************************************************/


void countacceptor()
{
	cleardevice();
	setbkcolor(BLACK);
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
	getche();
	}
	
	
/*****************************************************************/
/*     THIS FUNCTION COUNTS ALL RECORDS IN DONORS DATABASE       */
/*****************************************************************/


void countdonor()
{
	
	cleardevice();
	setbkcolor(BLACK);
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
	getche();
}

/*****************************************************************/
/*     THIS FUNCTION CHECKS BLOOD AVAILABILITY IN BLOOD BANK     */
/*****************************************************************/
void see1()          // FOR A+
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup A+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{  
		if((strcmp(acc.bloodgroup,"A+"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"A+"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group A+ is = %.2fml",total);
	getche();
}


void see2()          // FOR B+
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup B+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"B+"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"B+"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group B+ is = %.2fml",total);
	getche();
}

void see3()          // FOR A-
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup A- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"A-"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"A-"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group A- is = %.2fml",total);
	getche();
}

void see4()          // FOR B-
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup B- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
		if((strcmp(acc.bloodgroup,"B-"))==0)
		{
	total=total-acc.accepted;
	}
}
	fclose(fp);
}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
		if((strcmp(don.bloodgroup,"B-"))==0)
		{
	total=total+don.donated;
	}
}
	fclose(fp1);
}
	printf("\nTotal amount of blood available in blood bank of group B- is = %.2fml",total);
	getche();
}

void see5()          // FOR AB+
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup AB+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"AB+"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"AB+"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group AB+ is = %.2fml",total);
	getche();
	}


void see6()          // FOR AB-
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup AB- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"AB-"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"AB-"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group AB- is = %.2fml",total);
	getche();
	}

void see7()          // FOR O+
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup O+ is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"O+"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}

	while(fread(&don,sizeof(z),1,fp1)==1)
	{
	if((strcmp(don.bloodgroup,"O+"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group O+ is = %.2fml",total);
	getche();
}


void see8()          // FOR O-
{
	clrscr();
	cleardevice();
	setbkcolor(BLACK);
	y acc;
	float accepted=0;
	z don;
	float donated=0;
	float total=3000;
	printf("\nInitial amount of blood available in blood bank of blood roup O- is %.2fml\n",total);
	FILE *fp,*fp1;
	{
	fp=fopen("acceptor.txt","rb");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&acc,sizeof(y),1,fp)==1)
	{
	if((strcmp(acc.bloodgroup,"O-"))==0)
	{
	total=total-acc.accepted;
	}
	}
	fclose(fp);
	}
	//////
	{
	fp1=fopen("donor.txt","rb");
	if(fp1==NULL)
	{
	printf("No such file exists");
	}
	
	while(fread(&don,sizeof(z),1,fp1)==1)
	{	 
	if((strcmp(don.bloodgroup,"O-"))==0)
	{
	total=total+don.donated;
	}
	}
	fclose(fp1);
	}
	printf("\nTotal amount of blood available in blood bank of group O- is = %.2fml",total);
	getche();
	}

int getVisitorId()
{
	int visitor_id;
	FILE *fp;
	fp=fopen("visitor_id.txt","r");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	
	fscanf(fp, "%d", &visitor_id);
    
	fclose(fp);
	
	return visitor_id;
} 

void setVisitorId(int visitor_id)
{
	FILE *fp;
	fp=fopen("visitor_id.txt","w");
	if(fp==NULL)
	{
	printf("No such file exists");
	}
	fprintf(fp, "%d", visitor_id);
	fclose(fp);
}

