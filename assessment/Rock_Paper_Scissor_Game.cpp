#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
class A                                           // Create Class
{ 
    public:
    
    int i,rnd,usrc,random = (rand()%3)+1,usrs = 0,cmpts =0;
    string nme;
  int Name()                                    //Create Name Function
    {
        
    
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
    
    cout<<"\t\tNAME"<<endl<<endl;
    
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
    
    cout<<"Enter your name : ";
    cin>>nme;
    return 0;
    }
  int Round()                                     //Create Round Function
    {
    
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;

    cout<<"\t\tROUNDS"<<endl;
  
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
    
    cout<<nme<<" How many rounds you want to play : ";
    cin>>rnd;
    return 0;
    
    }
  int game()                                      //Create Game Function
    {
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
    
    cout<<"\t\t\tGAME"<<endl<<endl;
    
    cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
    for(i = 1;i <= rnd ; i++)
    {
    cout<<nme<<" Scores = "<<usrs<<endl;
    cout<<"Computer Scores = "<<cmpts<<endl;
    cout<<"Round No : "<<i<<"/"<<rnd<<endl;
    cout<<"1) Rock"<<endl<<"2) Paper"<<endl<<"3) Scesors"<<endl<<endl;
    cout<<nme<<" Select your choice : ";
    cin>>usrc;
    cout<<"Computer choice is :"<<random<<endl;
    if(usrc == random)                            // Using if else Condition
    {
      cout<<"Draw"<<endl<<endl;
    }
    else if(usrc == 1 && random==2 ||random==3 )
    {
      cout<<nme<<" won"<<endl<<endl;
      usrs=+1;
           
    }
    else if(usrc = 2 && random==1||random==3)
    {
      cout<<"Computer won"<<endl<<endl;
      cmpts=+1;
    }
    else if(usrc = 3 && random==1||random==3)
    {
    cout<<"Computer won"<<endl<<endl;
    cmpts=+1;
    }

        
    }
    }
 
};
int main() {
    A obj;                                            
    obj.Name();                               //Call Name Function Through Object 
    obj.Round();                              //Call Round Function Through Object 
    obj.game();                               //Call Game Function Through Object 
    return 0;
}