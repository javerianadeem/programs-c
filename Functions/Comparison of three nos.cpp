#include<stdio.h>
int comp(void);
int main()
{
	printf("Enter three numbers to be compared:");
	 comp();
}

int comp(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("Greatest number is %d",a);
	else if (b>a && b>c)
    printf("Greatest number is %d",b);
    else if(c>a && c>b)
	printf("Greatest number is %d",c);
	return c;

}
