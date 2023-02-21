#include<iostream>
#include<string.h>
using namespace std;
class concate
{
    public:
    char str[50];
    int i;
    int String()
    {
            cout<<"Enter string : ";
            cin>>str;
          
        return 0;      
    }
    concate operator + (concate obj2)
    {
        concate obj3;
        strcat(str,)
     //   obj3.str = str + obj2.str;
        return obj3;
    } 
    int print()
    {
        cout<<endl<<str;
    }  
};

int main()
{
    int i;
    concate obj1 , obj22 , obj33;
    obj1.String();
    obj1.print();
    cout<<endl;
    obj22.String();
    obj22.print();

    obj33= obj1 + obj22;
    obj33.print();
    return 0;
}