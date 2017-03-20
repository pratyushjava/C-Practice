#include<iostream>
using namespace std;
class account
   {
    private:
       char name[50];
       int age;
       int uid;
       int money;
    public:
      static account *p;
    
        static account* mcreate(int n1)
            {
             p= new account[n1];
            }
        void getdata(int a)
           {
             cout<<"enter the name";
             cin>>name;
             cout<<"enter the age";
             cin>>age;
             cout<<"enter the intial money";
             cin>>money;
             uid=a;
           }
        void showdata()
           {
             cout<<"name :"<<name<<"\n";
             cout<<"age :"<<age<<"\n";
             cout<<"money :"<<money<<"\n";
             cout<<"uid :"<<uid<<"\n";
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
       void withdraw(int cid)
           {
             int ammnt;
             cout<<"please enter ammount u want to withdraw";
             cin>>ammnt;
             if(uid==cid)
               {
                  money=money-ammnt;
               }
             else
                cout<<"invalid customer id\n";
           }
       };
 account* account::p=NULL;
int main()
  {
   int n,i;
   cout<<"please enter the no of record";
   cin>>n;
   account* p1;
   p1 =account::mcreate(n);
   for(int i=0;i<n;i++)
     {
     (p1+i)->getdata(i+1);
     }
   for(int i=0;i<n;i++)
      {
       (p1+i)->showdata();
       }
  int ch;int cusid;
  cout<<"please enter 1 for deposit and 2 for withdraw";
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
   return 0;
  }
}
