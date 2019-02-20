#include<stdio.h>
main()
{
	int b,num,a,rev=0;
	printf("Enter a number");
	scanf("%d",&num);
	b=num;
	while(num!=0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
	printf("\nThe reverse of number is %d",rev);
	if(rev==b)
		printf("\nThe number is palindrome");
		else
		printf("\nThe number is not a palindrome");
}
