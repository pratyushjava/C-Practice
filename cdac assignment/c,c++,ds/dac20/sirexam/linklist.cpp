#include"linklist.h"
linklist::linklist()
{
strt=NULL;
}
void linklist::insrtbeg(string t,string a,int pr)
 {
  book *temp=new book(t,a,pr);
  if(strt==NULL)
   {
     strt=temp;
     return;
    }
  book *p=strt;
  temp->setnext(p);
  strt=temp;
 }
void linklist::insrtend(string t,string a,int pr)
 {
  book *temp=new book(t,a,pr)
  if(strt==NULL)
     {
      strt=temp;
      return;
     }
  book *p=strt;
  while(p->getnext()!=NULL)
    {
     p=p->getnext();
    }
 p->setnext(temp);
 }
void linklist::insrtpos(string t,string a,int pr,int pos)
 {
  int i=1;
  book *p=new book(t,a,pr,pos)
  if(strt==NULL||pos==1)
   {
    temp->setnext(strt);
    strt=temp;
    return;
   }
  //book *p=new book(t,a,pr,pos)
   while(p->getnext()!=NULL)
      {
       if(i==pos-1)
         {
           temp->setnext(p->getnext());
           p->getnext(temp);
         }
      p=p->getnext();
      i++;
      }
  p->setnext(temp);
  return;
 }
