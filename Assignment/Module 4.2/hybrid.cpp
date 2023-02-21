#include<iostream>                      //calculator using hybrid
using namespace std;

class A
{
    
    public:
    int a,b;
    int AT()
    {
       
        cout<<"Enter two value"<<endl;
        cin>>a>>b;
        return 0;
    }
};
class B : virtual public A
{
    public:
   int BT()
    {
        cout<<"Addition is : "<<a+b<<endl;
        return 0;
    }
};
class C : virtual public A
{
    public:
   int CT()
    {
        cout<<"Subtraction is :"<<a-b<<endl;
        return 0;
        
    }
};


class D :  public B, public C
{
    public:
   int DT()
    {
        cout<<"Multiplication is :"<<a*b<<endl;
        return 0;
    }
};
 int main()
 {
    D o;
    o.AT();       //error showing ambiguous
    // o.A :: AT();    //using scope resolution -class name :: member function
    o.BT();
    o.CT();
    o.DT();
    return 0;
 }