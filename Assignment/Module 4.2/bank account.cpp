#include<iostream>
using namespace std;
class bank
{
    public:
    string nme,acctyp;
    int accno,accbalance,dpst,wdramt;
    
    int assigndetail()
    {
        cout<<"*-----Piggy Bank-----*\n";
        cout<<"Enter your Accout Name - ";
        cin>>nme;
        cout<<"Enter account type - ";
        cin>>acctyp;
        cout<<"Enter your Acount Numer - ";
        cin>>accno;

        return 0;
    } 

    int deposit()
    {
        cout<<"Deposit Amount - ";
        cin>>dpst;
        return 0;
    }
    
    int withdraw()
    {
        cout<<"Enter Amount to withdraw :";
        cin>>wdramt;
        accbalance = dpst - wdramt;
        return 0;
    }
};
int main()
{
    bank obj;
    obj.assigndetail();
    obj.deposit();
    obj.withdraw();
    cout<<"Acount name is : "<<obj.nme<<endl;
    cout<<"New balance is : "<<obj.accbalance;
    


}