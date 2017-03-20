#include<iostream>
#include<cstring>
using namespace std;
class account
   {
    private:
       char name[50];
       int age;
       int uid;
       int money;
    public:
      
        void showdata()
           {
             cout<<"name :"<<name<<"\n";
             cout<<"age :"<<age<<"\n";
             cout<<"money :"<<money<<"\n";
             cout<<"customer id :"<<uid<<"\n";
           }
        void getdata(int a)
          {
             cout<<"name :";
            cin>>name;
             cout<<"age :";
            cin>>age;
             cout<<"money :";
            cin>>money;
             uid=a;
            
           }
       void deposit(int cid)
           {
             int ammnt;
             cout<<"please enter ammount u want to deposit";
             cin>>ammnt;
             if(uid==cid)
               {
                  money=money+ammnt;
               }
             else
                cout<<"invalid customer id\n";
           }
      int retmoney()
        {
         return money;
        }
      void setmoney(int n)
        {
          money=n;
        }
       int retuid()
        {
         return uid;
        }
      
       virtual void withdraw(int cid)
           {
             int ammnt;
             cout<<"please enter ammount u want to withdraw";
             cin>>ammnt;
             if(uid==cid )
               {
                  if((money-ammnt)>0)
                     money=money-ammnt;
                  else
                      cout<<"insufficient balance\n";
               }
             else
                cout<<"invalid customer id\n";
           }
       };
 class SavingAcc:public account
  {
    int time;
    int rate;
    int newmoney;
  public:
      void getsavingdata()
       {
         cout<<"please enter the time :";
         cin>>time;
         cout<<"please enter the rate :";
         cin>>rate;
        }
     void checkbalance(int cid)
      {
        if(retuid()==cid)
         {
          cout<<"the balance in account held by"<< "is" << retmoney();
         }
      }
   void calintrst(int cid)
     {
    
      float intrst;
      if(retuid()==cid)
      {
       intrst= (retmoney()*rate*time)/100;
        cout<<"ur interset on"<< "for time "<< time << " years is" << intrst<<"\n";
        newmoney=retmoney()+intrst;
        setmoney(newmoney);
       cout<<"ur current balance is "<< newmoney;
       
      }
       account::showdata();
    }

    void withdraw(int cid)
           {
             int ammnt;
             cout<<"please enter ammount u want to withdraw";
             cin>>ammnt;
                          
             if(retuid()==cid )
               {
                 if(ammnt<5000)
                    {
                     if((retmoney()-ammnt)>0)
                            {
                           newmoney=retmoney()-ammnt;
                           setmoney(newmoney);
                             }
                        else
                           {
                           cout<<"insufficient balance\n";
                           }
                     }
                  else
                     {
                       cout<<"u can not allowed to withdraw amount greater than 5000"; 
                     }
               }
             else
                cout<<"invalid customer id\n";
           }
};
// SavingAcc* SavingAcc::p=NULL;
int main()
  {
   int n,i;
   cout<<"please enter the no of record";
   cin>>n;
   SavingAcc *p1;
     p1= new SavingAcc[n];
           
   for(int i=0;i<n;i++)
     {
     (p1+i)->getdata(i+1);
     }
   for(int i=0;i<n;i++)
      {
       (p1+i)->showdata();
      }
  int ch;int cusid;
  cout<<"please enter 1 for deposit : 2 for withdraw : 3 for checkbalance : 4 for intrst";
  cin>>ch;
  cout<<"please enter customer id";
  cin>>cusid;
  switch(ch)
   {
    case 1:
        (p1+cusid-1)->deposit(cusid); 
        (p1+cusid-1)->showdata() ;
         break;
   case 2:
          (p1+cusid-1)->withdraw(cusid);
           (p1+cusid-1)->showdata() ;
          break;
  case 3:
        (p1+cusid-1)->checkbalance(cusid);
         break;
 case 4:
        (p1+cusid-1)->getsavingdata();
        (p1+cusid-1)->calintrst(cusid);
        break;

   return 0;
  }
}
