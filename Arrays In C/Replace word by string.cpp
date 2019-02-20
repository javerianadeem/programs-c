#include<stdio.h>
#include<string.h>
main()
{
	char arr[20];
	printf("Enter a pharse");
	gets(arr);
	for(int i=0;i<20;i++)
	{
		if(arr[i]=='f' && arr[i+1]=='o' && arr[i+2]=='x')
		{
			arr[i]='c';
			arr[i+1]='a';
			arr[i+2]='t';
		}
		printf("%c",arr[i]);
	}
}
