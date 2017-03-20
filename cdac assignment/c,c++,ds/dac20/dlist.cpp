#include"dlist.h"
dlist::dlist()
{
    strt=NULL;
}
void dlist::insertbeg(int n)
  {
      node*temp=new node(n);
      if(strt==NULL)
       {
        strt=temp;
        return;
       }
       temp->setnext(strt);
       strt->setprev(temp);
       return;
  }
  void dlist::display()
  {
      if(strt==NULL)
      {
          cout<<"no data\n";
          return;
      }
      node*p=strt;
      while(p->getnext()!=NULL)
      {
          cout<<p->getdata()<<"\t";
          p=p->getnext();
      }
      cout<<p->getdata();
  }
