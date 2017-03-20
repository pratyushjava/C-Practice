#include<iostream>
#include<cstring>
using namespace std;
class time1
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
   time1 operator+(time1 &t4)
     {
       time1 t5;int r,d;
       t5.ss=ss+t4.ss;
       if((t5.ss)>60)
        {
         d=t5.ss/60;
         t5.ss=t5.ss%60;
         t5.mm=(mm+t4.mm)+d;
              if((t5.mm)>60)
               {
                d=t5.mm/60;
                t5.mm=t5.mm%60;
                t5.hh=(hh+t4.hh)+d;
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
                d=t5.mm/60;
                t5.mm=t5.mm%60;
                t5.hh=(hh+t4.hh)+d;
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
   time1 t1,t2,t3;
   t1.getdata();
   t2.getdata();
   t1.show();
   t2.show();
   t3=t1+t2;
   t3.show();
   return 0;
  }
 
