#include<stdio.h>
main()
{
	int age1,age2,age3;
	printf("Enter age of Ram,Shyam,Ajay");
	scanf("%d%d%d",&age1,&age2,&age3);
	if(age1<age2 && age1<age3)
	printf("Ram is youngest");
	else if(age2<age1 && age2<age3)
	printf("Shyam is youngest");
	else
	printf("Ajay is youngest");
}
