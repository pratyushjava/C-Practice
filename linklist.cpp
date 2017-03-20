#include"circularlinklist.h"
clinklist::clinklist()
   {
    strt=NULL;
   }
void clinklist::insrtbeg(int n)
      {
    node* temp=new node(n);
     if(strt=NULL)
      {
      strt=temp;
     temp->setnext=strt;
      }
    temp->setnext(strt);
    strt=temp;
      }
     
void clinklist::display()
   {
    node * p=strt;
    while(p->getnext()!=strt)
      {
      cout<<p->getdata()<<"\t";
      p=p->getnext();
      }
    
   }
