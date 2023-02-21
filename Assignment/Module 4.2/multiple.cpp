#include<iostream>
using namespace std;
class c1
{
    public:
    int aid;
    string anm;
    void std1()
    {

    cout<<"Enter id";
    cin>>aid;
    cout<<"Enter your name";
    cin>>anm;
    }
};
class c2
{
    public:
    int bid;
    string bnm;
    void sdt2()
    {
    
    cout<<"Enter id";
    cin>>bid;
    cout<<"Enter your name";
    cin>>bnm;
    }
};
class c3
{
    public:
     int cid;
    string cnm;
    void std33()
    {
    cout<<"Enter id";
    cin>>cid;
    cout<<"Enter your name";
    cin>>cnm;
    }
};
class list : public c1,public c2 ,public c3
{
    public:
    void showdata()
    {
        cout<<"---------ID----------\n"<<aid<<endl;
        cout<<"--------Name---------\n"<<anm<<endl;
        cout<<"---------ID----------\n"<<bid<<endl;
        cout<<"--------Name---------\n"<<bnm<<endl;
        cout<<"---------ID----------\n"<<cid<<endl;
        cout<<"--------Name---------\n"<<cnm<<endl;

    }
};
int main()
{
    list obj;
    obj.std1();
    obj.sdt2();
    obj.std33();
    obj.showdata();
}