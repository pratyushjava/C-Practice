#include<iostream>
using namespace std;
 class sample
  {
   int count;
   public:
     sample()
      {
       count=0;
      }
    sample operator ++()
      {
       sample tt;
       count=count+1;
       tt.count=count;
       return tt;
       
      }
    sample operator ++(int n)
     {
     sample tt1;
     tt1.count=count;
     count=count+1;
     return tt1;
     }
    void show()
     {
     cout<<count;
     }
  sample(sample &c)
    {
     count=c->count;
    }
  };
  int main()
   {
   sample a1,a2,a3;
   a2=++a1;
a1.show();
   a2.show();
   a3=a1++;
   a3.show();
a1.show();
sample a4=a1;
a4.show();
sample a5(a2);
a5.show();
sample s1=&(a1++);
s1.show();
return 0;
   }

