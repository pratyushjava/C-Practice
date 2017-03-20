#include<iostream>
using namespace std;
class date
{
int dd,mm,yy;
public:
	date()
	{
	//cout<<"enter date";
	//cin>>dd>>mm>>yy;
	dd=3;mm=3;yy=5;
	}
	date operator+(date x)
	{	date d4;
	d4.dd=dd+x.dd;
	d4.mm=mm+x.mm;
	d4.yy=yy+x.yy;
	return d4;
	} 
	void getdata()
	{
	cout<<"enter the date in dd mm yy format";
	cin>>dd>>mm>>yy;
	}
	void show()
	{cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
};
class timer
{
	int hh,min,ss;
	public:
	timer()
	{
	//cout<<"enter time";
	//cin>>hh>>min>>ss;
	hh=3;ss=5;min=6;	
	}
	void getdata()
	{
	cout<<"enter the time in hh min ss format";
	cin>>hh>>min>>ss;
	}
	timer operator+(timer x)
	{	timer t4;
	t4.hh=hh+x.hh;
	t4.min=min+x.min;
	t4.ss=ss+x.ss;
	return t4;
	}
	void show()
	{
	cout<<hh<<":"<<min<<":"<<ss<<endl;
	}
	 
};
int main()
{
date d1,d2,d3;
timer t1,t2,t3;
d1.getdata();
d2.getdata();
t1.getdata();
t2.getdata();
d3=d1+d2;
t3=t1+t2;
d3.show();
t3.show();
return 0;
}



