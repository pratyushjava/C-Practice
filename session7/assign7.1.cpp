#include<iostream.h>
using namespace std;
#include<conio.h>
class mycomputer
{
      int data;
      public:
             virtual void print()
             {
                   cout<<"hjsg";
             }
             virtual void scandata()
             {
                     
             }
};
class printer:public mycomputer
{
      public:
             void print()
             {
                  cout<<"data is printed at printer";
             }
};
class scanner:public mycomputer
{
      public:
             void print()
             {
                  cout<<"data is scanned from scanner";
             }
};
class xerox:public mycomputer
{
      public:
             void print()
             {
                  cout<<"data is copied at xerox";
                  }
};
int main()
{
    mycomputer *my;
    printer p;scanner s;
    xerox x;
    my=&p;
    my->print();
    my=&s;
    my->print();
    my=&x;
    my->print();
    getch();
    return 0;
}

                  
            
