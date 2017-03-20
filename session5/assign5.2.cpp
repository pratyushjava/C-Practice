#include<iostream>
using namespace std;
class account;
class customer
{
	private:
		char 	name[30];
		int	c_num;
		float	ytd_balance;
  	public:
	friend void display();
	

		customer()
		{
			cin>>name;
			c_num=0;
			ytd_balance=0.0;
		}   
};

class account
{
	private:
		char	acctcode[5];
		float	ac_balance;
  	public:
		account()
		{
		cin>>acctcode;
		ac_balance=1.1;
		} 
		
			
	friend void display();  
};
void display()
{
customer c;account a;
cout<<"name:"<<c.name<<endl;
cout<<"cust number:"<<c.c_num<<endl;
cout<<"balance:"<<c.ytd_balance<<endl;
cout<<"acc code:"<<a.acctcode<<endl;
cout<<"acc balance:"<<a.ac_balance<<endl;
}

int main()
{
display();
return 0;}

