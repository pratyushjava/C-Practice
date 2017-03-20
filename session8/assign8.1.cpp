#include<iostream>
using namespace std;
#include<conio.h>
class object
{     
      int obj;
      public:
             object()
             {
                     
                     cout<<"parent class is object"<<endl;
             }
             
             
};
class shape
{     
      int sh;
      public:
             shape()
             {
                   
                    cout<<"parent class is shape"<<endl;
             }
            
};
             class oshape : public object,public shape
             {
                   public:
                          oshape()
                          {
                                  cout<<"parent class is oshape"<<endl;
                          }
             };
             class circle : public shape
             {
                   public:
                          circle()
                          {
                                  cout<<"parent class is circle"<<endl;
                          }
             };
             class square : public shape
             {            
                   public:
                          square()
                          {
                                  cout<<"parent class is square"<<endl;
                          }
             };
             class triangle : public shape
             {
                   public:
                          triangle()
                          {
                                  cout<<"parent class is triangle"<<endl;
                          }
             };
             class ocircle : public circle,public oshape
             {
                   public:
                          ocircle()
                          {
                                  cout<<"\tchild class is ocircle"<<endl;
                          }
             };
             class osquare : public square,public oshape
             {
                   public:
                          osquare()
                          {
                                  cout<<"\tchild class is osquare"<<endl;
                          }
             };
             class otriangle :public triangle,public oshape
             {
                   public:
                          otriangle()
                          {
                                  cout<<"\tchild class is otriangle"<<endl;
                          }
             };
int main()
{
         ocircle c;
         osquare s;
         otriangle t;    
getch();
return 0;
}
    
