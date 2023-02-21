//Calci using Multilevel inheritance
#include<iostream>
using namespace std;
class calci                                                         //created base class of calci
{
    public:
    float a,b,total;
    char x,z;
    
    int getdata()                                                 //member function of get choice and values from users
        {   
            cout<<"Enter first value"<<endl;
            cin>>a;

            cout<<"Enter your choice '+','-','*','/'"<<endl;
            cin>>x;
            
            cout<<"Enter second value"<<endl;
            cin>>b;
           
            if(x == '+' || x == '-' || x == '*' || x == '/')  //conditional statement for valid choice
                {
                   switch(x)
                        {
                            case '+':
                            total = a + b;
                            break;

                            case '-':
                            total = a - b;
                            break;
                            
                            case '*':
                            total = a * b;
                            break;
                            
                            case '/':
                            total = a / b;
                            break;
            
                            default :
                            cout<<"Invalid input";
                            break;
                        }
                   
                }
            else
            {
                cout<<"Invalid choice"<<endl;
                cout<<"Re-Enter choice"<<endl;
                getdata();                                     
            }
            return 0;
        };
    
};

class caldata : public calci
{
    public:
    int y,nval;
    int nmenu()                                                   //created new menu member function
    {
        cout<<"Total is :"<<total<<endl;
        cout<<"Enter 1 for calculate one value and total"<<endl;
        cout<<"Enter 2 for calculate two value and total"<<endl;
        cout<<"Enter 0 for exit"<<endl;
        cin>>y;
    
    switch (y)
    {
        case 1:                                     
            another();
            break;
        case 2:
            cout<<"Enter your choice '+','-','*','/'"<<endl;
            cin>>x;
            switch(x)
            {
                case '+':
                cout<<"Enter value 1 : "<<endl;
                cin>>a;
                cout<<"Choose operator '+','-','*','\'"<<endl;
                cin>>z;
                cout<<"Enter value 2 : "<<endl;
                cin>>b;

                    switch(z)                                //nested switch case
                    {
                        case '+':
                        total = total + a + b;
                        break;

                        case '-':
                        total = total + a - b;
                        break;

                        case '*':
                        total = total + a * b;
                        break;

                        case '/':
                        total = total + a / b;
                        break;

                        default:
                        cout<<"Invalid option"<<endl;
                       break;
                    }
                break;

                case '-':
                cout<<"Enter value 1 : "<<endl;
                cin>>a;
                cout<<"Choose operator '+','-','*','\'"<<endl;
                cin>>z;
                cout<<"Enter value 2 : "<<endl;
                 cin>>b;
                    switch(z)
                    {
                        case '+':
                        total = total - a + b;
                        break;

                        case '-':
                        total = total - a - b;
                        break;

                        case '*':
                        total = total - a * b;
                        break;

                        case '/':
                        total = total - a / b;
                        break;
                       
                       default:
                       cout<<"Invalid option"<<endl;
                       break;
                    }
                break;

                case '*':
                cout<<"Enter value 1 : "<<endl;
                cin>>a;
                cout<<"Choose operator '+','-','*','\'"<<endl;
                cin>>z;
                cout<<"Enter value 2 : "<<endl;
                 cin>>b;
                    switch(z)
                    {
                        case '+':
                        total = total * a + b;
                        break;

                        case '-':
                        total = total * a - b;
                        break;

                        case '*':
                        total = total * a * b;
                        break;

                        case '/':
                        total = total * a / b;
                        break;
                        default:
                        cout<<"Invalid option"<<endl;
                        break;
                       
                    }
                break;

                 case '/':
                cout<<"Enter value 1 : "<<endl;
                cin>>a;
                cout<<"Choose operator '+','-','*','\'"<<endl;
                cin>>z;
                cout<<"Enter value 2 : "<<endl;
                 cin>>b;
                    switch(z)
                    {
                        case '+':
                        total = total / a + b;
                        break;

                        case '-':
                        total = total / a - b;
                        break;

                        case '*':
                        total = total / a * b;
                        break;

                        case '/':
                        total = total / a / b;
                        break;
                       
                       default:
                       cout<<"Invalid option"<<endl;
                       break;
                    }
                break;


            }

        case 0:
        break ;
        
        default:
        cout<<"Invalid option";
    }    
      return 0;  
    }

    int another()                                           //another() for get New value from user and calculate total value 
    {
         cout<<"Enter your choice '+','-','*','/'"<<endl;
        cin>>x;
        if(x == '+' || x == '-' || x == '*' || x == '/')
        {
         switch(x)
         {
            case '+':
            {
                
                cout<<"Enter value"<<endl;
                cin>>nval;
                total += nval;
                break;
            }
            case '-':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total -= nval;                            //using assignment operator
                break;
            }
            case '*':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total *= nval;
                break;
            }
            case '/':
            {
                cout<<"Enter value"<<endl;
                cin>>nval;
                total /= nval;
                break;
            }
            default:
                cout<<"Invalid option"<<endl;
                break;
         }  
        
        }
         else
         {
            cout<<"Invalid choice"<<endl;
            cout<<"Re-Enter choice"<<endl;
            another();                           
         }
        return 0;
    }
     
};

int main()                                             //main function of file
{
    cout<<"*-----Calculator-----*"<<endl;
    caldata obj;                                            //object created of derived class                                        

    obj.getdata();
   
    do{
        obj.nmenu();

      }while(obj.y != 0);
       
    return 0;
}
