#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream fout;
    fout.open("D:/TOPS/C++/Module 4.2/hello.txt");
    fout<<"hiuhii";
    fout.close();
    // fstream fin("D:/TOPS/C++/Module 4.2/hello.txt");
    // // fin.open("D:/TOPS/C++/Module 4.2/hello.txt");
    // fin>>str;
    // cout<<str;
    // fin.close();
    return 0;
}