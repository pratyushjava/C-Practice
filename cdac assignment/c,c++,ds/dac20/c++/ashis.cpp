#include<iostream>
using namespace std;
class temp
  {
  public:
  temp(temp &ob3)
   {
   }
  };
int main()
 {
   temp ob2;
 const temp ob1(ob2);
 }

