#include<iostream>
using namespace std;
class shape
  {
  public:
     void draw()
      {
      cout<<"shape";
      }
   };
class circle:public shape
  {  
    public:
      void draw()
       {
       cout<<"circle";
       }
  };
class rect:public shape
   {
    public:
      
   }
