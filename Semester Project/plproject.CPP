#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "dos.h"
#include <string.h>
#include<iostream.h>
#include<process.h>
#include "graphics.h"
#define CGACO_lightred 2
#define CGACO_yellow 4
#define FONT_SIZE 1
#define SETPAL 0*0B

       //	 union REGS in,out;

	// int callmouse()
	//  {
	  ///	 in.x.ax=1;
	   //	 int86(51,&in,&out);
	    //	 return 1;
	 // }
	// void restrictmouseptr(int x1,int y1,int x2,int y2)
	 // {
	//	 in.x.ax=7;
	  //	 in.x.cx=x1;
	    //	 in.x.dx=x2;
	      //	 int86(51,&in,&out);
		// in.x.ax=8;
  //		 in.x.cx=y1;
    //		 in.x.dx=y2;
      //		 int86(51,&in,&out);
	//  }
	 int maina()
	  {
		 int x,y,cl,a,b;
		 cleardevice();
	    int gd=DETECT,gm,button;
    initgraph(&gd,&gm,"\\tc\\bgi");


		 rectangle(100,100,550,400);
		// callmouse();
		// restrictmouseptr(0,0,610,480);
		 getch();
	  }





//union REGS i,o;
//void showmouseptr(void);
//void getmousepos(int *,int *,int *);
void main (void)

{

  char cm,ck,cl,cs,another;
  char ch;
  int gd=DETECT,gm,x,y,button;
  int v=12,f=0;
  initgraph(&gd,&gm,"\\tc\\bgi");

//showmouseptr();

setbkcolor(WHITE);
delay(90);
setfillstyle(SOLID_FILL,RED);
bar(65,20,80,330);
delay(90);
setfillstyle(SOLID_FILL,RED);
bar(65,20,180,330);
delay(90);
setfillstyle(SOLID_FILL,RED);
bar(65,20,280,330);
delay(90);
setfillstyle(SOLID_FILL,RED);
bar(65,20,580,330);

     do
{


delay(100);
setfillstyle(SOLID_FILL,BLUE);
bar(65,420,580,330);
delay(35);




moveto(65,335);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
setcolor(WHITE);
delay(90);
outtext("DATABASE PROJECT 2009");


f++;

moveto(90,80);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
setcolor(YELLOW);
delay(90);
outtext("WELCOME TO");

f++;



}




while(f!=v);
moveto(450,450);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(BLUE);
delay(90);
outtext("please wait.");

delay(90);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,65,430);
delay(1770);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,165,430);
delay(600);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,265,430);
delay(690);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,300,430);
delay(500);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,400,430);
delay(500);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,500,430);
delay(500);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,570,430);
delay(500);
setfillstyle(SOLID_FILL,BLUE);
bar(55,430,590,430);
moveto(450,450);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(WHITE);
delay(90);
outtext("please wait.");


moveto(450,450);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(BLUE);
delay(90);
outtext("press any key..");



getch();
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
  delay(90);
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
  delay(90);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
delay(90);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
delay(90);
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
gotoxy(10,30);


  pass:
  cleardevice();


	      setbkcolor(WHITE);



     {

	 setfillstyle(SOLID_FILL,GREEN);
rectangle(20,20,620,460);
rectangle(30,30,610,450);
setcolor(CGACO_lightred);
circle(350,220,112);
setcolor(CGACO_yellow);
circle(350,220,115);
gotoxy(33,13);
setfillstyle(SOLID_FILL,YELLOW);
bar(250,220,450,220);
bar(250,220,450,240);
bar(250,240,450,240);

puts("enter your password here\n\n\n");
gotoxy(42,15);
cm=getch();
printf("*");
ck=getch();
printf("*");
cl=getch();
printf("*");
cs=getch();
printf("*");


if(cm=='a' && ck=='a' && cl=='a' && cs=='a')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
setbkcolor(DARKGRAY);
gotoxy(10,10);
setfillstyle(SLASH_FILL,WHITE);
bar(30,10,110,100);
setfillstyle(HATCH_FILL,BLUE);
bar(140,103,223,198);
setfillstyle(LINE_FILL,YELLOW);
bar(272,198,355,290);
setfillstyle(HATCH_FILL,BLUE);
bar(380,103,470,198);
setfillstyle(SLASH_FILL,WHITE);
bar(510,10,590,100);


moveto(220,375);
settextstyle(GOTHIC_FONT,HORIZ_DIR,FONT_SIZE);
outtext("YOU ARE WELCOME");

getch();  }
else
{
moveto(180,200);
outtext("wrong password!");
getch();
goto pass;
     }


 /************************graphics end***********************************/

 /**************************dbms start************************************/
 main:
 cleardevice();
 setbkcolor(WHITE);
gotoxy(30,10);
setfillstyle(SOLID_FILL,RED);
bar(210,0,150,500);

 moveto(230,100);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(LIGHTRED);
outtext("1.ENTER STUDENT");
 moveto(230,150);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
 setcolor(LIGHTRED);
 outtext("2.ENTER EMPLOYEE");
 moveto(230,200);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);

 outtext("0.EXIT");


 if(getch()=='1')
 goto student;

 else if(getch()=='2')
 goto employ;
 else
 if(getch()=='0')
 exit(1);
 else
 goto def;


student:

   cleardevice();

 setbkcolor(WHITE);




 FILE *fp,*ft;
char choice;



struct stu
 {
char recno[40];

char name[40];
char roll[10];
float fee;
char clss[40];
char sec[40];
};
struct stu s;

char stuname[40];
char clas[40];
char sec[40];
char sturoll[10];
char month[10];
char date[20];
char recno[40];
long int recsize;


fp=fopen("ali.txt","rb+");
if(fp==NULL)
{
fp=fopen("ali.txt","wb+");
if(fp==NULL)
{
puts("cannot open file");
getche();
exit(1);
}
}
recsize=sizeof(s);
while(1)
{


prog:
cleardevice();
setbkcolor(WHITE);
gotoxy(30,10);
setfillstyle(SOLID_FILL,BLUE);
bar(210,0,150,500);

moveto(230,100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("1.ADD STUDENT REC");

moveto(230,140);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("2.LIST STUDENT REC");
moveto(230,180);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("3.MODIFY STUDENT REC");

moveto(230,220);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("4.DEL STUDENT REC");
moveto(230,260);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("5.FININCIAL REC");
moveto(230,300);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("6.SEARCH");
moveto(230,340);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("0.EXIT");
moveto(230,380);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("YOUR CHOICE!");



fflush(stdin);
choice=getche();
switch(choice)
{
case'1':	 //add student record main database
cleardevice();
setbkcolor(BLACK);
another='y';                     //trace rec inf
while(another=='y')
{
moveto(50,100);
outtext(" FIRST ENTER IMPORTANT INFORMATION FOR TRACE");

puts("\nENTER NAME OF STUDENT");
gets(stuname);
moveto(10,250);
puts("ENTER CLASS");
gets(clas);
moveto(10,300);
puts("ENTER SECTION");
gets(sec);
moveto(10,350);
puts("ROLL");
gets(sturoll);

rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
setcolor(BLUE);
bar(100,200,600,280);
moveto(120,210);
setcolor(WHITE);
outtext("SORY! INFORMATION IS ALREADY EXIST");
moveto(120,230);
outtext("you can not enter the record");

getch();
goto prog;
}
else
if(strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 printf(" \nTRACING!.....PLEASE WAIT!... ");
 delay(2000);
printf(" \nYOU CAN ENTER THE REC ");
 getch();
fseek(fp,0,SEEK_END);

again:
printf("\nASSIGN REC NUMBER");
gets(recno);
rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)==0)
{
printf("\nSORY! THE RECORD NO ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ENTER TO CONTINUE OR ANY OTHER KEY TO DISCARD ")     ;

if(getch()=='\r')
{
goto again;
}
else
 goto prog;
}

else
if(strcmp(s.recno,recno)!=0)

puts(" \n");

 }
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);

printf("\nENTER FEE");
scanf("%f",&s.fee);

fwrite(&s,recsize,1,fp);

printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
}
break;

case'2':
int n=1;           //   display main data base student record
cleardevice();
setbkcolor(BLACK);
rewind(fp);

while(fread (&s,recsize,1,fp)==1)
		       {
		       printf("\n\tSNO: %d\n",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			getch();
			n++;
			}
getch();
break;
case'3':  //modify main data base
cleardevice();
setbkcolor(BLACK);
another='y';
while(another=='y')
{        moveto(80,10);
outtext("ENTER IMP INFORMATION OF STUDENT FOR MODIFICATION ")  ;
printf("\n ENTER REC NO: ");
gets(recno);
printf("\n ENTER NAME OF STUDENT ");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);



rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{

if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
moveto(180,300);
outtext("SORY! REC NOT MATCHED");
 }
else

if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
outtext("\nPLEASE ENTER NEW INFORMATION")     ;
printf("\nENTER REC NO:");
gets(recno);
printf("\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);


rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU ARE MODIFYING IS ALREADY EXIST IN YOR DATA BASE\n\n YOU CAN NOT ENTER SAME RECORD\n\n\nPRESS ANY KEY TO CONTINUE ");

getch();
goto prog;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!...");
   delay(500);
   puts(" COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);

printf("\nENTER FEE");
scanf("%f",&s.fee);


fseek(fp,-recsize,SEEK_CUR);
fwrite(&s,recsize,1,fp);
break;
}
}
printf("\nMODIFY ANOTHER RECORD?(Y/N)");
fflush(stdin);
another=getche();
}
break;
case'4':       //deletion from main database
cleardevice();
setbkcolor(BLACK);
another='y';
while(another=='y')
{
outtext("PLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(fp);
fclose(ft);
remove("ali.txt");
rename(  "ali2.txt","ali.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }
			 break;

case'5':      //finincial database management
{
z:
cleardevice();
setbkcolor(BLACK);
moveto(150,4);
outtext("FININCIAL DATA BASE FOR STUDENTS");
gotoxy(35,8);
printf("1.DETAILS");
gotoxy(35,12);
printf("2.ENTRY");
gotoxy(35,16);
printf("0.BACK");
gotoxy(35,20);
printf("YOUR CHOICE!");

int a=getche();
switch(a)
{
case'1':    //display details student database
a:
cleardevice();
setbkcolor(BLACK);
gotoxy(35,8);
printf("1.CLASS 1 STUDENTS");
gotoxy(35,12);
printf("2.CLASS 2 STUDENTS");
gotoxy(35,16);
printf("3.CLASS 3 STUDENTS");
gotoxy(35,20);
printf("4.CLASS 4 STUDENTS");
gotoxy(35,24);
printf("5.CLASS 5 STUDENTS");
gotoxy(35,28);
printf("0.BACK");
gotoxy(35,32);
puts("YOUR CHOICE");
int i=getche();
switch(i)
{
case'1':  //display details of class 1
b:
cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF CLASS 1");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("3.BACK");
int j=getch();
switch(j)
{
case'1':  //  paid details of class 1
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fp;

fp=fopen("paid1.txt","rb+")     ;
while(1)
{
rewind(fp);
while(fread (&s,recsize,1,fp)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			getch();
			n++;
			}

getch();
fclose(fp);

goto b;
}
       case'2':    //unpaid details of class 1
	   int j=1;
cleardevice();
setbkcolor(BLACK);
FILE*unpaid1;

unpaid1=fopen("unpaid1.txt","rb+")     ;
while(1)
{
rewind(unpaid1);
while(fread (&s,recsize,1,unpaid1)==1)

		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
				j++;
			getch();
			}

getch();
fclose(unpaid1);


goto b;
}        case'3':
goto a;       //2d main menu


	}

	break;
	case'2':     //display details of class 2
	c:
	cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF CLASS 2");

gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("3.BACK");
int j1=getch();
switch(j1)
{
case'1':     //class 2 paid details
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fu;
char ce;
fu=fopen("paid2.txt","rb+")     ;
while(1)
{
rewind(fu);
while(fread (&s,recsize,1,fu)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			getch();
				n++;
			}


getch();
fclose(fu);


goto c;
}
	     case'2':     //class2 unpaid details
	 int j=1;
       cleardevice();
setbkcolor(BLACK);
       FILE*fvu;
char cf;
fvu=fopen("unpaid2.txt","r")     ;
while(1)
{
rewind(fvu);
while(fread (&s,recsize,1,fvu)==1)

		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			j++;	getch();
			}

getch();
fclose(fvu);




       goto c;
       }

       case'3':
       goto a;   //2nd main menu

	 }
	 break;

	 case'3':        //paid details of class3
	 d:

	 cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF CLASS 3");

gotoxy(35,8);
printf("1.PAID ");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("3.BACK");
int h=getch();
switch(h)
{
case'1': //class3 paid details
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fcu;
char cd;
fcu=fopen("paid3.txt","r")     ;
while(1)
{
rewind(fcu);
while(fread (&s,recsize,1,fcu)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			getch();
				n++;
			}

getch();
fclose(fcu);






       goto d;
       }
       case'2':        //class3 unpaid details
		  int j=1;
       cleardevice();
setbkcolor(BLACK);
       FILE*fbu;
char cdf;
fbu=fopen("unpaid3.txt","r")     ;
while(1)
{
rewind(fbu);
while(fread (&s,recsize,1,fbu)==1)
		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			getch();
				j++;
			}

getch();
fclose(fbu);




       goto d;
       }
       case'3':
       goto a;      //2nd main menu

	 }
	 break;
	 case'4':     //display details of class 4
	 e:

       cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF CLASS 4");

gotoxy(35,8);
printf("1.PAID ");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("3.BACK");

int k=getch();
switch(k)
{
case'1':      //class 4 paid details
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fu;
fu=fopen("paid4.txt","r")     ;
rewind(fu);
while(fread (&s,recsize,1,fp)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			n++;	getch();
			}

getch();
fclose(fu);

       goto e;
       case'2': //class 4 unpaid details
	      int j=1;
       cleardevice();
setbkcolor(BLACK);
       FILE*fv;

fv=fopen("unpaid4.txt","r")     ;
while(fread (&s,recsize,1,fv)==1)

		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			j++;	getch();
			}


getch();
fclose(fv);

       goto e;
       case'3':
       goto a;   //2nd main menu

	 }   break;
	 case'5':  //display class 5 details
 f:

cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF CLASS 5");

gotoxy(35,8);
printf("1.PAID ");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("3.BACK");
int l=getch();
switch(l)
{
case'1':     //class 5 paid details
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fu;
char cd;
fu=fopen("paid5.txt","r")     ;
while(1)
{
rewind(fu);
while(fread (&s,recsize,1,fu)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			n++;	getch();
			}

getch();
fclose(fu);


       goto f;
       }
       case'2': //class 5 unpaid details
		int j=1;
       cleardevice();
setbkcolor(BLACK);
       FILE*fw;
char cdh;
fw=fopen("unpaid5.txt","r")     ;
while(1)
{
rewind(fw);
while(fread (&s,recsize,1,fw)==1)

		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n\n________________________________________________________\n\n");
			j++;	getch();
			}

getch();
fclose(fw);


       goto f;  }
       case'3':
       goto a;  //2nd main menu



	 }
	 goto z;
	 }        goto z;


		case'2':     //entry of students
		entry:

		cleardevice();
setbkcolor(BLACK);

		gotoxy(34,10);
		printf("1.UNPAID");
		gotoxy(34,14);
		printf("2.PAID");
		gotoxy(34,18);
		printf("3.EXIT");
		  int r=getch() ;
		  switch(r)
		 {




		  case '1':      //entry unpaid students

		cleardevice();
setbkcolor(BLACK);
		gotoxy(34,10);
		printf("1.ENTER CLASS 1");
		gotoxy(34,14);
		printf("2.ENTER CLASS 2");
		gotoxy(34,18);
		printf("3.ENTER CLASS 3");
		gotoxy(34,22);
		printf("4.ENTER CLASS 4");
		gotoxy(34,26);
		printf("5.ENTER CLASS 5");
		int g=getch();
		switch(g)
		{
		case'1':  //class 1 unpaid entry
	       int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid1;
		unpaid1=fopen("unpaid1.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid1,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid1);
fclose(unpaid1);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }


 else
 getch();
 goto z;
 }
 getch();
 goto z;

	case'2':      //class 2 unpaid entry
			   /*c);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid2);
fclose(unpaid2);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush
			     */



				 int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid2;
		unpaid2=fopen("unpaid2.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid2);
while(fread(&s,recsize,1,unpaid2)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid2,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid2);
fclose(unpaid2);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }


 else
 getch();
 goto z;
 }
 getch();
 goto z;




	case'3':       //class 3 unpaid entry

    int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid3;
		unpaid3=fopen("unpaid3.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid3);
while(fread(&s,recsize,1,unpaid3)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid3,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid3);
fclose(unpaid3);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }


 else
 getch();
 goto z;
 }
 getch();
 goto z;





	case'4':    //class 4 unpaid entry
		  int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid4;
		unpaid4=fopen("unpaid4.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid4);
while(fread(&s,recsize,1,unpaid4)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid4,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid4);
fclose(unpaid4);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }


 else
 getch();
 goto z;
 }
 getch();
 goto z;






	case'5':  // class 5 unpaid entry
	      /*	 int n=1;
		 cleardevice();
setbkcolor(BLACK);

	      FILE*unpaid5;
		unpaid5=fopen("unpaid5.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nENTER REG NO:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid5);
while(fread(&s,recsize,1,unpaid5)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");

n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
 printf("\n SNO: %d            matched!     \n ",n)     ;
printf("***************************************************************************");
printf("\n\npress any key to continue!!!!!\n\n");

n++;

 getch();


fseek(unpaid5,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid5);
fclose(unpaid5);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto z;



       */
	   int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid5;
		unpaid5=fopen("unpaid5.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF STUDENT");
gets(stuname);
puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(unpaid5);
while(fread(&s,recsize,1,unpaid5)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(fp);
while(fread(&s,recsize,1,fp)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;

}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid1,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);
fwrite(&s,recsize,1,unpaid5);
fclose(unpaid5);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }


 else
 getch();
 goto z;
 }
 getch();
 goto z;




}goto z;
}
goto z;}
goto z;}
goto z;}

	 goto z;
	     }

	     goto z;
	   //  goto prog;


		      case'2':    //entry paid students
		 cleardevice();
setbkcolor(BLACK);
		gotoxy(34,10);
		printf("1.ENTER CLASS 1");
		gotoxy(34,14);
		printf("2.ENTER CLASS 2");
		gotoxy(34,18);
		printf("3.ENTER CLASS 3");
		gotoxy(34,22);
		printf("4.ENTER CLASS 4");
		gotoxy(34,26);
		printf("5.ENTER CLASS 5");
		int ee=getch();
		switch(ee)
		{
		case'1':   //entry paid class 1
		cleardevice();
setbkcolor(BLACK);
		FILE*paid1,*unpaid1,*temp1;

	      unpaid1=fopen("unpaid1.txt","rb+");
	      paid1=fopen("paid1.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);
printf("\n\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(paid1);
while(fread(&s,recsize,1,paid1)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid1,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(recno,s.recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);





fwrite(&s,recsize,1,paid1);
fclose(paid1);
another='y';
while(another=='y')
{

temp1=fopen("ali2.txt","wb");
rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp1);
}
fclose(unpaid1);
fclose(temp1);
remove("unpaid1.txt");
rename("ali2.txt","unpaid1.txt");
unpaid1=fopen("unpaid1.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto z;





}
case'2':   //paid entry of class 2
		cleardevice();
setbkcolor(BLACK);
		FILE*paid2,*unpaid2,*temp2;

	      unpaid2=fopen("unpaid2.txt","rb+");
	      paid2=fopen("paid2.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nENTER REG NO:");
gets(recno);
printf("\n\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(paid2);
while(fread(&s,recsize,1,paid2)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(unpaid2);
while(fread(&s,recsize,1,unpaid2)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid2,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);





fwrite(&s,recsize,1,paid2);
fclose(paid2);
another='y';
while(another=='y')
{
strcpy(s.recno,recno);



temp2=fopen("ali2.txt","wb");
rewind(unpaid2);
while(fread(&s,recsize,1,unpaid2)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp2);
}
fclose(unpaid2);
fclose(temp2);
remove("unpaid2.txt");
rename("ali2.txt","unpaid2.txt");
unpaid2=fopen("unpaid2.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto z;





	}


case'3':     //enter of paid  class 3
	cleardevice();
setbkcolor(BLACK);
	FILE*paid3,*unpaid3,*temp3;

	      unpaid3=fopen("unpaid3.txt","rb+");
	      paid3=fopen("paid3.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nENTER REG NO:");
gets(recno);
printf("\n\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(paid3);
while(fread(&s,recsize,1,paid3)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(unpaid3);
while(fread(&s,recsize,1,unpaid3)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid3,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);





fwrite(&s,recsize,1,paid3);
fclose(paid3);
another='y';
while(another=='y')
{
strcpy(s.recno,recno);



temp3=fopen("ali2.txt","wb");
rewind(unpaid3);
while(fread(&s,recsize,1,unpaid3)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp3);
}
fclose(unpaid3);
fclose(temp3);
remove("unpaid3.txt");
rename("ali2.txt","unpaid3.txt");
unpaid3=fopen("unpaid3.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto z;






       }


       case'4' ://entry of paid class 4

	cleardevice();
setbkcolor(BLACK);
	FILE*paid4,*unpaid4,*temp4;

	      unpaid4=fopen("unpaid4.txt","rb+");
	      paid4=fopen("paid4.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nENTER REG NO:");
gets(recno);
printf("\n\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(paid4);
while(fread(&s,recsize,1,paid4)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(unpaid4);
while(fread(&s,recsize,1,unpaid4)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid4,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);





fwrite(&s,recsize,1,paid4);
fclose(paid4);
another='y';
while(another=='y')
{
strcpy(s.recno,recno);



temp4=fopen("ali2.txt","wb");
rewind(unpaid4);
while(fread(&s,recsize,1,unpaid4)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp4);
}
fclose(unpaid4);
fclose(temp4);
remove("unpaid4.txt");
rename("ali2.txt","unpaid4.txt");
unpaid4=fopen("unpaid4.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto z;






      }


       case'5':  // paid entry of class 5

	cleardevice();
setbkcolor(BLACK);
	FILE*paid5,*unpaid5,*temp5;

	      unpaid5=fopen("unpaid5.txt","rb+");
	      paid5=fopen("paid5.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nENTER REG NO:");
gets(recno);
printf("\n\nENTER NAME OF STUDENT");
gets(stuname);

puts("\nENTER CLASS");
gets(clas);
puts("\nENTER SECTION");
gets(sec);
puts("\nROLL");
gets(sturoll);

rewind(paid5);
while(fread(&s,recsize,1,paid5)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)

puts(" \n");

 }
 rewind(unpaid5);
while(fread(&s,recsize,1,unpaid5)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,stuname)!=0&&strcmp(s.sec,sec)!=0&&strcmp(s.clss,clas)!=0&&strcmp(s.roll,sturoll)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto z;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,stuname)==0&&strcmp(s.sec,sec)==0&&strcmp(s.clss,clas)==0&&strcmp(s.roll,sturoll)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid5,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,stuname);
strcpy(s.sec,sec);
strcpy(s.clss,clas);
strcpy(s.roll,sturoll);
printf("\nENTER FEE");
scanf("%f",&s.fee);





fwrite(&s,recsize,1,paid5);
fclose(paid5);
another='y';
while(another=='y')
{
strcpy(s.recno,recno);



temp5=fopen("ali2.txt","wb");
rewind(unpaid5);
while(fread(&s,recsize,1,unpaid5)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp5);
}
fclose(unpaid5);
fclose(temp5);
remove("unpaid5.txt");
rename("ali2.txt","unpaid5.txt");
unpaid5=fopen("unpaid5.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();








goto z;



		       default:
		       fflush(stdin);

       }









goto z;










	 }


		       default:
		       fflush(stdin);



	 }

			    break;     //break of case 2 entry




			case'3': //del from finincial dbms of student
			   delmenu:
			cleardevice();
setbkcolor(BLACK);
gotoxy(30,4);
printf("DELETION MENU CHOOSE ANY ONE");
gotoxy(35,8);
printf("1.CLASS 1 STUDENTS");
gotoxy(35,12);
printf("2.CLASS 2 STUDENTS");
gotoxy(35,16);
printf("3.CLASS 3 STUDENTS");
gotoxy(35,20);
printf("4.CLASS 4 STUDENTS");
gotoxy(35,24);
printf("5.CLASS 5 STUDENTS");
gotoxy(35,28);
printf("0.BACK");
gotoxy(35,32);
puts("YOUR CHOICE");

int c=getch();
switch(c)
{
case'1':      //del from class 1



cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 1");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int c=getch();
switch(c)
{
case'1':
cleardevice() ;
setbkcolor(BLACK);
FILE*paid1;
paid1=fopen("paid1.txt","rb+");
paid1=fopen("paid1.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid1);
while(fread(&s,recsize,1,paid1)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid1);
fclose(ft);
remove("paid1.txt");
rename(  "ali2.txt","paid1.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;

case'2':

cleardevice();
setbkcolor(BLACK);
FILE*unpaid1;
unpaid1=fopen("unpaid1.txt","rb+");
unpaid1=fopen("unpaid1.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(unpaid1);
fclose(ft);
remove("unpaid1.txt");
rename(  "ali2.txt","unpaid1.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;







case'0':
goto delmenu;

       }






   goto delmenu;

 case'2':      //del from class 2





cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 2");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int d=getch();
switch(d)
{
case'1':

FILE*paid2;
paid2=fopen("paid2.txt","rb+");
paid2=fopen("paid2.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid2);
while(fread(&s,recsize,1,paid2)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid2);
fclose(ft);
remove("paid2.txt");
rename(  "ali2.txt","paid2.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;



case'2':


cleardevice();
setbkcolor(BLACK);
FILE*unpaid2;
unpaid2=fopen("unpaid2.txt","rb+");
unpaid2=fopen("unpaid2.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(unpaid2);
while(fread(&s,recsize,1,unpaid2)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(unpaid2);
fclose(ft);
remove("unpaid2.txt");
rename(  "ali2.txt","unpaid2.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }









goto z;



case'0':
goto delmenu;

       }






   goto delmenu;

  case'3':  //del from class 3

cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 3");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int e=getch();
switch(e)
{
case'1':

   FILE*paid3;
paid3=fopen("paid3.txt","rb+");
paid3=fopen("paid3.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid3);
while(fread(&s,recsize,1,paid3)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid3);
fclose(ft);
remove("paid3.txt");
rename(  "ali2.txt","paid3.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;



case'2':


cleardevice();

setbkcolor(BLACK);
FILE*unpaid3;
unpaid3=fopen("unpaid3.txt","rb+");
unpaid3=fopen("unpaid3.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(unpaid3);
while(fread(&s,recsize,1,unpaid3)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(unpaid3);
fclose(ft);
remove("unpaid3.txt");
rename(  "ali2.txt","unpaid3.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }









goto z;



case'0':
goto delmenu;

       }






   goto delmenu;

       case'4':


cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 4");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int f=getch();
switch(f)
{
case'1':

 FILE*paid4;
paid4=fopen("paid4.txt","rb+");
paid4=fopen("paid4.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid4);
while(fread(&s,recsize,1,paid4)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid4);
fclose(ft);
remove("paid4.txt");
rename(  "ali2.txt","paid4.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;


case'2':

cleardevice();
setbkcolor(BLACK);
FILE*unpaid4;
unpaid4=fopen("unpaid4.txt","rb+");
unpaid4=fopen("unpaid4.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(unpaid4);
while(fread(&s,recsize,1,unpaid4)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(unpaid4);
fclose(ft);
remove("unpaid4.txt");
rename(  "ali2.txt","unpaid4.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }










goto z;



case'0':
goto delmenu;

       }






   goto delmenu;

   case'5':


cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 5");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int g=getch();
switch(g)
{
case'1':

  FILE*paid5;
paid5=fopen("paid5.txt","rb+");
paid5=fopen("paid5.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid5);
while(fread(&s,recsize,1,paid5)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid5);
fclose(ft);
remove("paid5.txt");
rename(  "ali2.txt","paid5.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }







goto z;



case'2':


cleardevice();
setbkcolor(BLACK);
FILE*unpaid5;
unpaid5=fopen("unpaid5.txt","rb+");
unpaid5=fopen("unpaid5.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(unpaid5);
while(fread(&s,recsize,1,unpaid5)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(unpaid5);
fclose(ft);
remove("unpaid5.txt");
rename(  "ali2.txt","unpaid5.txt");
fp=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }









goto z;



case'0':
goto delmenu;

       }






   goto delmenu;




 } //switch delpaid unpaid bracket

			  goto prog;

























	     }  //case 3 delmenu  bracket




	   goto prog;


		     }





/*

       */                case'6':
			{
			smenu:
			int n=1;
			do
			{

cleardevice();

setbkcolor(BLACK);
moveto(180,100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(GREEN);
delay(90);
outtext("ENTER NAME FOR SEARCH");
moveto(180,300);
gets(stuname);

rewind(fp);

while(fread (&s,recsize,1,fp)==1)
		       {
		       if(strcmp(stuname,s.name)==0)
{
printf("\nS:NO  %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.roll,s.fee,s.clss,s.sec);
printf("\n****************************************************\n");


  n++;


			}

			else
			   {
		       printf("\nS:NO  %d",n);
		       printf("\nNOT MATCHED\n");
		       printf("\n*********************************************************************\n");
				 n++;
			   }


			}
printf("\n\ndo another?(y/n)");




		       }
		       while(getche()=='y');
		       }
		       goto prog;


			 case'0':
			 fclose(fp);
			 goto main;








}
goto prog;

  } }
 /**********************EMPLOY DBMS***********************************/
	  employ:

  cleardevice();
 setbkcolor(WHITE);

 FILE *fx,*ft;
char choice;

struct stu
 {
char recno[40];

char name[40];
char year[10];
float salary;
char des[40];
char mon[40];
};
struct stu s;

char empname[40];
char des[40];
char mon[40];
char stuyear[10];
char month[10];
char date[20];
char recno[40];
long int recsize;


fx=fopen("employ.txt","rb+");
if(fx==NULL)
{
fx=fopen("employ.txt","wb+");
if(fx==NULL)
{
puts("cannot open file");
getche();
exit(1);
}
}
recsize=sizeof(s);
while(1)
{


proge:
cleardevice();
setbkcolor(WHITE);
gotoxy(30,10);
setfillstyle(SOLID_FILL,GREEN);
bar(210,0,150,500);

moveto(230,100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("1.ADD EMPLOYEE REC");

moveto(230,140);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("2.LIST EMPLOYEE REC");
moveto(230,180);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("3.MODIFY EMPLOYEE REC");

moveto(230,220);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("4.DEL EMPLOYEE REC");
moveto(230,260);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("5.FININCIAL REC");
moveto(230,300);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("6.SEARCH");
moveto(230,340);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("0.EXIT");
moveto(230,380);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(LIGHTRED);
delay(100);
outtext("YOUR CHOICE!");



fflush(stdin);
choice=getche();
switch(choice)
{
case'1':	 //add student record main database
cleardevice();
setbkcolor(BLACK);
another='y';                     //trace rec inf
while(another=='y')
{
moveto(50,100);
outtext(" FIRST ENTER IMPORTANT INFORMATION FOR TRACE");

puts("\nENTER NAME OF EMPLOYEE");
gets(empname);
moveto(10,250);
puts("ENTER CLASS");
gets(des);
moveto(10,300);
puts("ENTER SECTION");
gets(mon);
moveto(10,350);
puts("ROLL");
gets(stuyear);

rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{
if(strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
{
setcolor(BLUE);
bar(100,200,600,280);
moveto(120,210);
setcolor(WHITE);
outtext("SORY! INFORMATION IS ALREADY EXIST");
moveto(120,230);
outtext("you can not enter the record");

getch();
goto employ;
}
else
if(strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)

puts(" \n");

 }
 printf(" \nTRACING!.....PLEASE WAIT!... ");
 delay(2000);
printf(" \nYOU CAN ENTER THE REC ");
 getch();
fseek(fx,0,SEEK_END);

againe:
printf("\nASSIGN REC NUMBER");
gets(recno);
rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{
if(strcmp(s.recno,recno)==0)
{
printf("\nSORY! THE RECORD NO ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ENTER TO CONTINUE OR ANY OTHER KEY TO DISCARD ")     ;

if(getch()=='\r')
{
goto againe;
}
else
 goto employ;
}

else
if(strcmp(s.recno,recno)!=0)

puts(" \n");

 }
strcpy(s.recno,recno);
strcpy(s.name,empname);
strcpy(s.mon,mon);
strcpy(s.des,des);
strcpy(s.year,stuyear);

printf("\nENTER FEE");
scanf("%f",&s.salary);

fwrite(&s,recsize,1,fx);

printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
}
fclose(fx);
goto employ;



	   /*
 */

case'2':
int n=1;           //   display main data base employ record
cleardevice();
setbkcolor(BLACK);
rewind(fx);

while(fread (&s,recsize,1,fx)==1)
		       {
		       printf("\n\tSNO: %d\n",n);
printf("\n rec %s \n\n\tname:%s \n\n\tyear: %s\n\n\tsalary:%.1f\n\n\t designation:%s\n\n\tmonth:%s",s.recno,s.name,s.year,s.salary,s.des,s.mon);
printf("\n\n________________________________________________________\n\n");
			getch();
			n++;
			}
getch();

goto employ;

case'3':  //modify main data base
int k=1;
cleardevice();
setbkcolor(BLACK);
another='y';
while(another=='y')
{        moveto(80,10);
outtext("ENTER IMP INFORMATION OF EMPLOYEE FOR MODIFICATION ")  ;
printf("\n ENTER REC NO: ");
gets(recno);
printf("\n ENTER NAME OF EMPLOYEE ");
gets(empname);
puts("\nENTER DESIGNATION");
gets(des);
puts("\nENTER MONTH");
gets(mon);
puts("\nYEAR");
gets(stuyear);



rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{

if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)
{
moveto(180,300);
printf(" \n\nS:NO:%d   NOT MATCHED!\n ",k);
k++;
 }
else

if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
{
printf("\n\nSNO: %d matched\n",k);
outtext("PLEASE ENTER NEW INFORMATION")     ;
printf("\nENTER REC NO:");
gets(recno);
printf("\nENTER NAME OF EMPLOYEE");
gets(empname);

puts("\nENTER DESIGNATION");
gets(des);
puts("\nENTER MONTH");
gets(mon);
puts("\nYEAR");
gets(stuyear);


rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
{
printf("\nSORY! THE INFORMATION YOU ARE MODIFYING IS ALREADY EXIST IN YOR DATA BASE\n\n YOU CAN NOT ENTER SAME RECORD\n\n\nPRESS ANY KEY TO CONTINUE ");

getch();
goto employ;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!...");
   delay(500);
   puts(" COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();
strcpy(s.recno,recno);
strcpy(s.name,empname);
strcpy(s.mon,mon);
strcpy(s.des,des);
strcpy(s.year,stuyear);

printf("\nENTER SALARY");
scanf("%f",&s.salary);


fseek(fx,-recsize,SEEK_CUR);
fwrite(&s,recsize,1,fx);
break;
}
}
printf("\nMODIFY ANOTHER RECORD?(Y/N)");
fflush(stdin);
another=getche();
goto employ;
}

goto employ;
case'4':       //deletion from main database

cleardevice();
setbkcolor(BLACK);
another='y';
while(another=='y')
{
outtext("PLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(fx);
fclose(ft);
remove("ali.txt");
rename(  "ali2.txt","ali.txt");
fx=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();
			 }
			 goto employ;

case'5':      //finincial database management
{
ze:
fx=fopen("employ.txt","rb+");
cleardevice();
setbkcolor(BLACK);
moveto(150,4);
outtext("FININCIAL DATA BASE FOR EMPLOYEE");
gotoxy(35,8);
printf("1.DETAILS");
gotoxy(35,12);
printf("2.ENTRY");
gotoxy(35,16);
printf("3.DELET");
gotoxy(35,20);
printf("0.BACK");
gotoxy(35,24);
printf("YOUR CHOICE!");

int a=getche();
switch(a)
{
case'1':    //display details student database
ae:
cleardevice();
setbkcolor(BLACK);
gotoxy(35,12);
printf("1.EMPLOYEE ");
gotoxy(35,16);
printf("0.BACK");
gotoxy(35,20);
puts("YOUR CHOICE");
int i=getche();
switch(i)
{
case'1':  //display details of class 1
be:
cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DETAILS OF EMPLOYEE");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");
int j=getch();
switch(j)
{
case'1':  //  paid details of class 1
int n=1;
cleardevice();
setbkcolor(BLACK);
FILE*fp;

fx=fopen("emppaid1.txt","rb+")     ;
while(1)
{
rewind(fx);
while(fread (&s,recsize,1,fx)==1)

		       {
		       printf("SNO: %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\tyear: %s\n\n\tsalary:%.1f\n\n\t designation:%s\n\n\tmonth:%s",s.recno,s.name,s.year,s.salary,s.des,s.mon);
printf("\n\n________________________________________________________\n\n");
			getch();
			n++;
			}

getch();
fclose(fx);

goto be;
}
       case'2':    //unpaid details of class 1
	   int j=1;
cleardevice();
setbkcolor(BLACK);
FILE*unpaid1;

unpaid1=fopen("empunpaid1.txt","rb+")     ;
while(1)
{
rewind(unpaid1);
while(fread (&s,recsize,1,unpaid1)==1)

		       {
		       printf("SNO: %d",j);
printf("\n rec %s \n\n\tname:%s \n\n\tyear: %s\n\n\tsalary:%.1f\n\n\t designation:%s\n\n\tmonth:%s",s.recno,s.name,s.year,s.salary,s.des,s.mon);
printf("\n\n________________________________________________________\n\n");
				j++;
			getch();
			}

getch();
fclose(unpaid1);


goto be;
}        case'0':

goto ae;       //2d main menu


	}

	goto employ;
	    }goto employ;

	case'2':

		entrye:

		cleardevice();
		setbkcolor(BLACK);

		gotoxy(34,10);
		printf("1.UNPAID");
		gotoxy(34,14);
		printf("2.PAID");
		gotoxy(34,18);
		printf("3.EXIT");
		  int r=getch() ;
		  switch(r)
		 {




		  case '1':      //entry unpaid employees

		cleardevice();
setbkcolor(BLACK);
		gotoxy(34,10);
		printf("1.ENTER EMPLOYEE");
		gotoxy(34,14);
		printf("0.BACK");
		int g=getch();
		switch(g)
		{
		case'1':  //class 1 unpaid entry
	       int n=1;
		cleardevice();
setbkcolor(BLACK);
		FILE*unpaid1;
		unpaid1=fopen("empunpaid1.txt","ab+");

	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);

printf("\n\nENTER NAME OF EMPLOYEE");
gets(empname);
puts("\nENTER DESIGNATION");
gets(des);
puts("\nENTER MONTH");
gets(mon);
puts("\nYEAR");
gets(stuyear);

rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();

goto ze;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)

puts(" \n");

 }
 rewind(fx);
while(fread(&s,recsize,1,fx)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)
{
printf("\n SNO: %d           not matched!     \n ",n)     ;
printf("***************************************************************************");
n++;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
 {
puts(" \n");


   printf(" \n\n\n\nSNO: %d     MATCHED!\n\n",n);
   printf("*************************************************************************");
 printf("\n\npress any key to continue!!!!!\n\n");
 getch();


fseek(unpaid1,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(s.name,empname);
strcpy(s.mon,mon);
strcpy(s.des,des);
strcpy(s.year,stuyear);
printf("\nENTER FEE");
scanf("%f",&s.year);
fwrite(&s,recsize,1,unpaid1);
fclose(unpaid1);
printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();
getch();

  }



 getch();
 goto ze;
 }
 getch();
 goto ze;}
 getch();getch(); goto employ;}getch();goto employ;

	      case'2':    //entry paid employees
  cleardevice();
setbkcolor(BLACK);
		gotoxy(34,10);
		printf("1.ENTER EMPLOYEE");
		gotoxy(34,14);
		printf("0.BACK");
		int ee=getch();
		switch(ee)
		{
		case'1':   //entry paid class 1
		cleardevice();
setbkcolor(BLACK);
		FILE*paid1,*unpaid1,*temp1;

	      unpaid1=fopen("empunpaid1.txt","rb+");
	      paid1=fopen("emppaid1.txt","ab+");




	    another='y';                     //trace rec inf
while(another=='y')
{
printf("\n FIRST ENTER IMPORTANT INFORMATION FOR TRACE");
printf("\nenter reg no:");
gets(recno);
printf("\n\nENTER NAME OF EMPLOYEE");
gets(empname);

puts("\nENTER DESIGNATION");
gets(des);
puts("\nENTER MONTH");
gets(mon);
puts("\nYEAR");
gets(stuyear);

rewind(paid1);
while(fread(&s,recsize,1,paid1)==1)
{
if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS ALREADY EXIST \n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto ze;
}
else
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)

puts(" \n");

 }
 rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)!=0&&strcmp(s.name,empname)!=0&&strcmp(s.mon,mon)!=0&&strcmp(s.des,des)!=0&&strcmp(s.year,stuyear)!=0)
{
printf("\nSORY! THE INFORMATION YOU HAVE ENTERED IS NOT EXIST  IN UNPAID DATA BASE\n\n YOU CAN NOT ENTER THE RECORD\n\n\nPRESS ANY KEY TO CONTINUE ")     ;

getch();
goto ze;
}
else
if(strcmp(s.recno,recno)==0&&strcmp(s.name,empname)==0&&strcmp(s.mon,mon)==0&&strcmp(s.des,des)==0&&strcmp(s.year,stuyear)==0)

puts(" \n");

 }
   puts(" TRACING!.....PLEASE WAIT!... COMPLETED!\n\n\n\nNOW YOU CAN ENTER THE RECORD");
 getch();


fseek(paid1,0,SEEK_END);
strcpy(s.recno,recno);
strcpy(recno,s.recno);
strcpy(s.name,empname);
strcpy(s.mon,mon);
strcpy(s.des,des);
strcpy(s.year,stuyear);
printf("\nENTER FEE");
scanf("%f",&s.year);





fwrite(&s,recsize,1,paid1);
fclose(paid1);
another='y';
while(another=='y')
{

temp1=fopen("ali2.txt","wb");
rewind(unpaid1);
while(fread(&s,recsize,1,unpaid1)==1)
{
if(strcmp(s.recno,recno)!=0)
fwrite(&s,recsize,1,temp1);
}
fclose(unpaid1);
fclose(temp1);
remove("empunpaid1.txt");
rename("ali2.txt","empunpaid1.txt");
unpaid1=fopen("empunpaid1.txt" ,"rb+");

			 fflush(stdin);
			 another=getche();
			 goto employ;

			 }




printf("\nADD ANOTHER RECORD?(y/n)");
fflush(stdin);
another=getche();

goto ze;





}


 goto ze;



		       default:
		       fflush(stdin);











goto ze;














	 }

			    goto employ;     //break of case 2 entry


	   /*

			case'3': //del from finincial dbms employ
			   delmenue:
			cleardevice();
setbkcolor(BLACK);
gotoxy(30,4);
printf("DELETION MENU CHOOSE ANY ONE");
gotoxy(35,8);
printf("1.EMPLOY");

gotoxy(35,12);
printf("0.BACK");
gotoxy(35,16);
puts("YOUR CHOICE");

int c=getch();
switch(c)
{
case'1':      //del from class 1



cleardevice();
setbkcolor(BLACK);
gotoxy(25,4);
printf(" SELECT ANY FOR DELETION FROM CLASS 1");
gotoxy(35,8);
printf("1.PAID");
gotoxy(35,12);
printf("2.UNPAID");
gotoxy(35,16);
printf("0.BACK");

int c=getch();
switch(c)
{
case'1':
cleardevice() ;
setbkcolor(BLACK);
FILE*paid1;
paid1=fopen("emppaid1.txt","rb+");
paid1=fopen("emppaid1.txt","wb+");

another='y';
while(another=='y')
{
printf("\nPLEASE ENTER IMPORTANT INFO TO PERFORM DELETION");
puts("\nenter rec number");
gets(recno);
ft=fopen("ali2.txt","wb");
rewind(paid1);
while(fread(&s,recsize,1,paid1)==1)
{
if(strcmp(s.recno,recno)!=0)

fwrite(&s,recsize,1,ft);
}
fclose(paid1);
fclose(ft);
remove("emppaid1.txt");
rename(  "ali2.txt","emppaid1.txt");
fx=fopen("ali.txt" ,"rb+");
printf("DEL ANOTHER RECORD?(Y/N)");
			 fflush(stdin);
			 another=getche();

			 goto employ;
		       }







goto ze;

   }        }
    }







	     */


 } //switch delpaid unpaid bracket

			  goto employ;





	     }  //case 3 delmenu  bracket



			     }
		 goto employ;



		       case'6':
			{
			smenue:
			int n=1;
			do
			{

cleardevice();

setbkcolor(BLACK);
moveto(180,100);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(GREEN);
delay(90);
outtext("ENTER NAME FOR SEARCH");
moveto(180,300);
gets(empname);

rewind(fx);

while(fread (&s,recsize,1,fx)==1)
		       {
		       if(strcmp(empname,s.name)==0)
{
printf("\nS:NO  %d",n);
printf("\n rec %s \n\n\tname:%s \n\n\troll: %s\n\n\tfee:%.1f\n\n\t class:%s\n\n\tsection:%s",s.recno,s.name,s.year,s.salary,s.des,s.mon);
printf("\n****************************************************\n");


  n++;


			}

			else
			   {
		       printf("\nS:NO  %d",n);
		       printf("\nNOT MATCHED\n");
		       printf("\n*********************************************************************\n");
				 n++;
			   }


			}
printf("\n\ndo another?(y/n)");




		       }
		       while(getche()=='y');
		       }
		       goto employ;


			 case'0':
			 fclose(fx);
			 goto main;


}
goto prog;


 }
  def:
  fflush(stdin);
  goto employ;
 }


