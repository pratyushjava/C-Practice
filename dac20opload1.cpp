#include<iostream>
using namespace std;
 class a
  {
   float r,i;
   public:
     a(float rr,float ii)
     {
       r=rr;
       i=ii;
     }
     a()
      {
       r=0;
       i=0;
      }
    a operator+(a *temp)
      {
       a tt;
       tt.r=r+temp->r;
       tt.i=i+temp->i;
       return tt;
      }
    void show()
     {
     cout<<r<<"\n";
     cout<<i<<"\n";
     }
  };
  int main()
   {
   a a1(1.0,2.0);
   a a2(1.0,2.0);
   a a3;
   a3=a1+&a2;
   a3.show();
   }

