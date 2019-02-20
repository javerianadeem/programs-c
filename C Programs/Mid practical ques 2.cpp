#include<stdio.h>
#include<conio.h>
void min();
void lc();
main()
{
	int num,arr[5],i,a;
	printf("Enter number ");
	scanf("%d",&num);
	switch(num){
		case 2:
			min();
			break;
		case 4:
			lc();
			break;
	}
}
void min()
{
	int i,arr[5],min,loc;
	printf("Enter 5 numbers to find its minimum\n");
	for(i=0;i<5;i++)
	{
	printf("Enter number %d ",i+1);
	scanf("%d",&arr[i]);
}
		for(i=0;i<5;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
			loc=i+1;
		}
	}
	printf("Minimum number is %d",min);
	printf("\nLocation is %d",loc);
}
void lc()
{
	char ch;
	int count=0;
	printf("\nEnter phrase");
	while((ch=getche())!='\r')
{
	if(ch>=65 && ch<=90)
	{
    printf("%c",ch);
}
    if(ch>=97 && ch<=122 && ch!=' ')
    {
    	printf("%c",ch-32);
    	count++;
	}

}
    printf("\nThe converted characters are %d",count);
}
