#include<iostream>
using namespace std;
 class s
   {
   int i,j;
   public:
     s()
     {
     i=0;j=0;
     }
     s(int ii,int jj)
     {
     i=ii;
     j=jj;
     }
  void showdata()
   {
     i = 10;
     cout<<i<<j;	
    }
  };
   int main()
    {
    s *s1,*s2;
    s1=new s[10];
    s2=new s(2,3);
   
    delete []s1;
    delete s2;
    s2->showdata();
   return 0;
    }
  
