#include<stdio.h>
main(){
	char a[20],b[50],c[20];
	int i,j=0;
	puts("Enter a string");
	gets(a);
	puts("Enter 2nd string");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
	c[i+j]=b[j];
	i++;
	c[i+j]='\0';
	for(i=0;c[i]!='\0';i++)
	printf("%c",c[i]);
	
	 
}
