#include<iostream>
using namespace std;
 class A
   {
   public:
      A(int j)
      {
      cout<<"hi\n";
      }
     ~A()
      {
      cout<<"A destructor\n";
      }
   
    };
  class B:protected A
    {
    public:
        B(int x):A(20)
        {
         cout<<"hello\n";
        }
       ~B()
        {
       cout<<"B destructor\n";
        }
       
     };
 int main()
    {
     B b1(10);
    
return 0;
    }
       
