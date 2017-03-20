#include<iostream>
#include<cstring>
using namespace std;
class xerox
  {
   public:
    void xshow()
      { 
       cout<<"u r in xerox\n";
      }
  };
class scan
  {
   public:
    void sshow()
      { 
       cout<<"u r in scan\n";
      }
  
  };
class printer
  {
   public:
    void pshow()
      { 
       cout<<"\nu r in printer\n";
      }
  
  };

class HomePrinter:public xerox,public scan,public printer
 {
   string arr;
   public:
     friend void show(HomePrinter&);
     friend void getmsg(HomePrinter&);
   
 };
  void show(HomePrinter &p1)
  {
   cout<<"the entered msg is :";
   cout<<p1.arr;
  }
 void getmsg(HomePrinter &s)
   {
   cout<<"enter the msg is :";
   getline(cin,s.arr);
   //cout<<"\n";
   cout<<"hello";
   }
 int main()
  {
  HomePrinter p;
  getmsg(p);
 show(p);
 p.pshow();
 p.sshow();
 p.xshow();
 return 0;
  }

