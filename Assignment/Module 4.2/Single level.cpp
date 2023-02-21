#include<iostream>
using namespace std;
class parent
{
    public:
    int a;
    int cl1()
    {

        cin>>a;
        return 0;
    }
};
class child : public parent
{
    public:
    void cl2()
    {
        cout<<"\nThis is child class"<<a;
    }
};
int main()
{
    child obj;
    obj.cl1();
    cout<<endl;
    obj.cl2();
}