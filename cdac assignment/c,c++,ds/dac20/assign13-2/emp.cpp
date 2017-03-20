#include"emp.h"

emp::emp()
 {
  cout<<"enter the name";
  cin>>empname;
  //empno=n;
  //cout<<"enter the no";
  //cin>>empno;
  cout<<"enter the sal";
  cin>>empsal;
 }
void emp::display()
 {
  cout<<"name "<<empname<<"\n";
  cout<<"no "<<empno<<"\n";
  cout<<"salary "<<empsal<<"\n";
 }
 bool emp::search(int n)
   {
       if(empno==n)
         {
             //this->display();
             return true;
         }
         else
         {
             return false;
         }
   }
 void emp::setid(int n)
  {
      empno=n;
  }
 //void emp::insrtdata()
  //{
   //cout<<"enter the name :";
   //getline(cin,this->empname);
  // cout<<" enter the salary :";
  // cin>>empsal;
  //}
  

