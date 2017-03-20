#include<iostream>
using namespace std;
 class log
  {
  private:
   int i;
  static log *p;/*private static pointer p of class log type and declaration of private member*/
  log()/*private constructor log*/
  {
    i=100;
  }
  public:
    static log* getinstance()/*public static fun return pointer of class log type*/
      {
        if(p==NULL)
          p=new log;/*dynamic memory allocation in heap, first memory is allocated and then private constructor is called and address is returned to p*/
        return p;
      }
  void write(char *msg)
     {
     cout<<msg;
     }
   };
   log* log::p=NULL;/*static pointer p is assigned to null, definition of static members*/
  int main()
    {
   log *s1=log::getinstance();
   log *s2= log::getinstance();
  s1->write("hello world");
return 0;
    }
