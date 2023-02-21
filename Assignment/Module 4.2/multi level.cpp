#include<iostream>
using namespace std;
class gparent
{
    public:
    void c1()
    {
    cout<<"hello";
    }
};
class parent : public gparent
{
    public:
    void c2()
    {
    cout<<"Tanmay";
    }
};
class child : public parent
{
    public:
    void c3()
    {
    cout<<"Bhunia";
    }
};
int main()
{
    child obj;
    obj.c1();
    obj.c2();
    obj.c3();
}