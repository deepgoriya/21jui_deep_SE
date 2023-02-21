#include<iostream>
using namespace std;
int main()
{
	
	int no[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>no[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<"Value of "<<i+1<<"is : "<<no[i]<<endl;
	}
}
