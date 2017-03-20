#include<iostream>
#include<cstring>
using namespace std;
class Account;
class Customer 
 {
  	public:
                 friend void show(Customer,Account);
		Customer()
                   {
                     cout<<"enter the name ";
                     cin>>name;
                     cout<<"enter the C_num";
                     cin>>c_num;
                     cout<<"enter the ytd_balance";
                     cin>>ytd_balance; 
                      
                   } 
 
 
             
	private:
		char 	name[30];
		int		c_num;
		float	ytd_balance;
      
};


class Account 
 {
  	public:
                 friend void show(Customer ,Account );
		Account()
                  {
                     cout<<"enter the acctcode";
                     cin>>acctcode;
                     cout<<"enter the ac_balance";
                     cin>>ac_balance;
                  }      
               
	private:
		char	acctcode[5];
		float	ac_balance;
};
void show(Customer obj1,Account obj2)
  {
   cout<<"name  "<<obj1.name;
   cout<<"\nc_num  "<<obj1.c_num;
   cout<<"\nytd_balance  "<<obj1.ytd_balance;
   cout<<"\nacctcode  "<<obj2.acctcode;
   cout<<"\nac_balance  "<<obj2.ac_balance<<"\n";
  }
int main()
 {
    Customer person;
  Account leger;
  show(person,leger);
  return 0;

 }

