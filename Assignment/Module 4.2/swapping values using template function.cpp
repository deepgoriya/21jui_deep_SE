#include<iostream>
using namespace std;
template <typename t>
class swapping
{
    public :
    t a , b;
    t data()
    {
        cout<<"Enter value of A :"<<endl;
        cin>>a;
        cout<<"Enter value of B :"<<endl;
        cin>>b;

        a = a + b;
        b = a - b;
        a = a - b;
        cout<<"Value of A :"<<a<<endl;
        
        cout<<"Value of B :"<<b<<endl;
        return 0;
    }
};
int main()
{
        int a,b;
        
        swapping <int>t1;
        t1.data();
        
        return 0;
}