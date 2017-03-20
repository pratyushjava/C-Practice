#include<iostream>
#include<cstring>
using namespace std;
class time
  {
  int ss;
  int mm;
  int hh;
   public :
    void getdata()
     {
        cout<<"hour ";
        cin>>hh;
        cout<<"minute";
        cin>>mm;
        cout<<"second";
        cin>>ss;
     }
   time operator+(time &t4)
     {
       time t5;
       t5.ss=ss+t4.ss;
       if((t5.ss)>60)
        {
         t5.ss=t5.ss-60;
         t5.mm=(mm+t4.mm)+1;
              if((t5.mm)>60)
               {
                t5.mm=t5.mm-60;
                t5.hh=(hh+t4.hh)+1;
               }
             else
               {
               t5.hh=(hh+t4.hh);
               }
        }
        else
          {
          t5.mm=mm+t4.mm;
              if(t5.mm>60)
               {
                t5.mm=t5.mm-60;
                t5.hh=(hh+t4.hh)+1;
               }
             else
               {
               t5.hh=(hh+t4.hh);
               }
          }
       
       return t5;
     }
    void show()
     {
      cout<<"the time is "<<hh<<":"<<mm<<":"<<ss<<"\n";
      }
 };
 int main()
  {
   time t1,t2,t3;
   t1.getdata();
   t2.getdata();
   t1.show();
   t2.show();
   t3=t1+t2;
   t3.show();
   return 0;
  }
 
