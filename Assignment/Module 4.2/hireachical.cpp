#include<iostream>
using namespace std;
class value                             //base class
{
    public:
    int a,b;
    value()
    {
        
        cout<<"\nEnter value of A :";
        cin>>a;
        cout<<"\nEnter value of B :";
        cin>>b;
        // return 0;
    }
};
class addition : public value           //derived class
{
    public:
    addition()
    {
        a+=b;
        cout<<"\nAddition is : "<<a<<endl;
        
    }
};
class subtraction : public value    //derived class
{
    public:
    subtraction()
    {
        a-=b;
        cout<<"\nsubtraction is : "<<a<<endl;
      
    }
};
class multiplication : public value     //derived class
{
    public:
    multiplication()
    {
        a *= b ;
        cout<<"\nmultiplication is : "<<a<<endl;
      
    }
};
class division : public value       //derived class
{
    public:
    division()
    {
        a /= b;
        cout<<"\nDivision is : "<<a<<endl;
       
    }
};
class modulo : public value
{
    public:
    modulo()
    {
        a%=b;
        cout<<"\nModulo is:"<<a<<endl;

    }
};
int main()
{
   
    addition obj1;
    subtraction obj2;
    multiplication obj3;
    division obj4;
    modulo obj5;
   
    // obj1.data();
    // obj1.add();
    // obj2.data();
    // obj2.sub();
    // obj3.data();
    // obj3.multi();
    // obj4.data();
    // obj4.div();
    // obj5.data();
    // obj5.mod();

    return 0;
  
}