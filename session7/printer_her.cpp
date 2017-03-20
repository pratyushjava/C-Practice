#include<iostream.h>
#include<conio.h>

using namespace std;

class xerox
{
protected:
int c;
void copy()
{
cout<<"enter the number of xerox copies:";
cin>>c;
}
};

class scan
{
protected:
int s;
void blueprint()
{
cout<<"enter the number of copies to be scanned:";
cin>>s;
}};

class printer
{
protected:
void pr()
{
int p;
cout<<"how many copies do you want to print:";
cin>>p;
}
};

class home_printer: public xerox,scan,printer
{
public:
int a;

/*void option()
{
cout<<"enter the activity u want 2 perform:";
cin>>a;

if(a==1)
{
        hp1.copy();
        }
else if(a==2)
{
     }
else{}
}*/
};


int main()
{

    home_printer hp1;
    xerox x;
    scan sc;
    printer pri;
    int aa;
    void option()
{
cout<<"enter the activity u want 2 perform:";
cin>>aa;

if(aa==1)
{
        hp1.copy();
        }
else if(aa==2)
{
     }
else{}
}
    //hp1.option();
  getch();
  return 0;  
}    




