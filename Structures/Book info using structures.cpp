#include<stdio.h>
struct book{
	int bookid;
	char title[50];
	float price;
};
void display(struct book);
struct book input();
main(){
	struct book b1;
	b1=input();
	display(b1);
}
struct book input(){
	struct book b;
	printf("Enter book id,title and price ");
	scanf("%d",&b.bookid);
	fflush(stdin);
	gets(b.title);
	scanf(" %f",&b.price);
	return(b);
}
void display(struct book b){
	printf("\nBook id : %d \nTitle : %s \nPrice : %f",b.bookid,b.title,b.price);
}
