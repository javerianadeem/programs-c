#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct book{
	int bookid;
	char title[50];
	float price;
};
main(){
struct book b1;
	int a;
	FILE *fp;
	fp=fopen("f1.txt","rb");
	if(fp==NULL){
		printf("File not found");
		exit(1);
	}
	while(fread(&b1,sizeof(b1),1,fp)>0)       // fgets=(str,5,fp);
	{
		printf("%d %s %d",b1.price,b1.title,b1.price);
	}
	fclose(fp);
}
