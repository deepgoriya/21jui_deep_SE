#include<iostream>
using namespace std;
class A
{
    public :
    A()
    {
        cout<<"This is class A"<<endl;
    }
};
class B : public A
{
    public :
    B()
    {
        cout<<"This is class B"<<endl;
    }
};
class C :public B
{
    public :
    C()
    {
        cout<<"This is class C"<<endl;
    }
};
class D :public C
{
    public :
    D()
    {
        cout<<"This is class D"<<endl;
    }
};
class E :public C
{
    public :
    E()
    {
        cout<<"This is class E"<<endl;
    }
};
class F :public C
{
    public :
    F()
    {
        cout<<"This is class F"<<endl;
    }
};
class G : public D , public E
{
    public :
    G()
    {
        cout<<"This is class G";
    }
};
class H :public F
{
    public :
    H()
    {
        cout<<"This is class H"<<endl;
    }
};
int main()
{
    
    G obj;
    H obj2;

}