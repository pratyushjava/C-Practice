#include<iostream>
using namespace std;
class account
{
	int balance;
	public:

	account()
	{
	balance=0;
	}
	void withdraw()
	{
		int w;
		if(balance==0)
		{
		cout<<"u can't withdraw money. ur balance is 0. please deposit some money"<<endl;
		}
		else
		{
		cout<<"enter the amount to be withdrawn";
		cin>>w;
		balance=balance-w;
		}
	}
		int getbalance()
		{	return balance;}
		void setbalance(int b)
		{ balance=b;}
	void deposit()
	{
		int d;
		cout<<"enter the amount to be deposit";
		cin>>d;
		balance=balance+d;
	}
	
};
class savings:public account
{
	int rate,time;
	public:
		savings()
		{
		rate=10;time=0;
		}
		void interest()
		{int i;
		cout<<"enter the duration in year"<<endl;
		cin>>time;
		int b=getbalance();
		i=(b*rate*time)/100;
		cout<<"ur interest is :"<<i<<endl;
		//balance=balance+i;
		b=b+i;
		setbalance(b);
		}
		void checkbalance()
		{	
		cout<<"ur account balance is:"<<getbalance()<<endl;
		}
};
		
		


int main()
{	
	
	savings a;
	int n;
	char p='y';
	while(p=='y')
	{
	cout<<"welcome to sbi"<<endl<<"what o u want sir"<<endl<<"1.deposit \n 2. withdraw money\n3. check balance\n4.calculate interest"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:a.deposit();
			break;
		case 2:a.withdraw();
			break;
		case 3:a.checkbalance();
			break;
		case 4: a.interest();
			break;
		default:
			cout<<"choose correct option"<<endl;
	}
		cout<<"do u want 2 continue";
		cin>>p;
	}
return 0;
}
