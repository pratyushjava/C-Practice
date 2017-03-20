#include"square.h"

int main()
 {
//int n;
//cout<<"enter teh value of n";
//cin>>n
 shape **s1=new shape*[2];
 square sq1;
 circle c;

 shape **s2=new shape*[2];
  
 for(int i=0;i<2;i++)
  {
    s1[i]=&c;
    s1[i]->draw();
  }
delete []s1;
 for(int i=0;i<2;i++)
  {
    s2[i]=&sq1;
    s2[i]->draw();
  }
delete []s2;
 
 }
