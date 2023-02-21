#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"Enter value of a :";
	cin>>a;
	cout<<"Enter value of b :";
	cin>>b;
	cout<<"Addition is "<<add(a,b);
	
}
