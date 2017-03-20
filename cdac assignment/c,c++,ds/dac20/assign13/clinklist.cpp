//implenting delete and insert operation into circular linklist

#include"circularlinklist.h"
clinklist::clinklist()
   {
    strt=NULL;
   }
//insertion into circular link list at begin
void clinklist::insrtbeg(int eid)
  {
    node* temp=new node(eid);//creation of node
     if(strt==NULL)//checking condition if tree is empty
       {
        strt=temp;
        temp->setnext(strt);
        return;
       }

   node*p=strt;
   while(p->getnext()!=strt)//loop for reaching to last node
      {
      p=p->getnext();
      }
    temp->setnext(strt);
    p->setnext(temp);
    strt=temp;

   }
//insertion ino circular linklist at end
void clinklist::insrtend(int eid)
   {
    node* temp=new node(eid);
    if(strt==NULL)
      {
      strt=temp;
      temp->setnext(strt);
      return;
      }

      node *p=strt;
      while(p->getnext()!=strt)
        {
         p=p->getnext();
        }
      temp->setnext(strt);
    p->setnext(temp);

   }
//delete a node from begin in circular linklist
void clinklist::delbeg()
   {
     int delval;
     if(strt==NULL)
       {
         cout<<"under flow\n";
         return;
       }
      node *prev=strt;
      if(prev->getnext()==strt)//if there is one node in circular linklist
         {
          prev->getdata();
          delete prev;
          strt=NULL;
          return;
         }
    //if there are more than one node in circular linklist
    while(prev->getnext()->getnext()!=strt)//reaching to second last node of last node
         {
          prev=prev->getnext();
         }

    strt->getdata();
    prev->getnext()->setnext(strt->getnext());
    delete strt;
    strt=prev->getnext()->getnext();
   return;

   }
//delete a node from end in circular linklist
void clinklist::delend()
   {
    int delval;
    if(strt==NULL)// checking condition if there is no node
      {
        cout<<"under flow\n";
       return;
      }
    node *prev=strt;
    if(prev->getnext()==strt)//checking condition if there is onle one node
       {
       prev->getdata();
       delete prev;
       strt=NULL;
       return;
       }
    while(prev->getnext()->getnext()!=strt)//checking condition if there is more than one node
      {
        prev=prev->getnext();
      }
    prev->getnext()->getdata();
    delete prev->getnext();
    prev->setnext(strt);
    

   }
  
//display the data of circular linklist
void clinklist::display()
   {
    node * p=strt;
   if(strt==NULL)
     {
     cout<<"list is empty\n";
     return;
     }
    while(p->getnext()!=strt)
      {
      p->getdata();
      p=p->getnext();
      }
    p->getdata();
   }
//search the data according to id provided by user
void clinklist::searchdt(int n)
  {
      if(strt==NULL)
       {
           cout<<"list is empty\n";
           return;
       }
      node*p =strt;
      while(p->getnext()->getnext()!=strt)
       {
           if(p->searchdetail(n))
           {
              p->getdata();
              return;
           }
           else
              p=p->getnext();
       }
       if(p->searchdetail(n))
        {
            p->getdata();
            return;
        }
        else
        {
            p=p->getnext();
            if(p->searchdetail(n))
              {
                  p->getdata();
                  return;
              }
              else
              {
                  cout<<"emp no is not present\n";
              }
       
        }
  }
