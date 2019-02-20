#include<iostream>
using namespace std;
int main()
{
	int array[50],i,n,loc,item;
	cout<<"Enter the number of elements you want to enter ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter "<<i<<" value "<<endl;
		cin>>array[i];
	}
	cout<<"Enter the item you want to search ";
	cin>>item;
	array[n+1]=item;
	loc=1;
	while(array[loc]!=item)
	{
		loc++;	
	}
	if(loc==n+1)
	{
	cout<<"Item not found"<<endl;
	loc=0;
	}
	else
	cout<<"Item is at "<<loc<<" location "<<endl;
}
