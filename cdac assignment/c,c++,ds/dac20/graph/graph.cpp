#include"graph.h"
graph::graph()
{
    this->strt=NULL;
}
void graph::insrt(int data)
{
    
    node* temp=new node(data);
    if(strt==NULL)
    {
    strt=temp;
    return;
    }
    node* p=strt;edge *currlink=NULL;edge* prevlink=NULL;edge* t;
    while(p->getnext()!=NULL)
         {
             p=p->getnext();
         }
    p->setnext(temp);
    p=strt;
    while(p!=temp)
       {
           char ch;
           cout<<"do u want an edge from"<<p->getdata()<<" to"<<temp->getdata()<<" ?y:n";
           cin>>ch;
           switch(ch)
           {
               case 'y':
               case 'Y':
                     t=new edge();
                     currlink=p->getlink();
                     prevlink=NULL;
                     if(currlink==NULL&&prevlink==NULL)
                     {
                      p->setlink(t);
                      t->setnext(temp);
                      break;
                     }
                     while(currlink!=NULL)
                     {   prevlink=currlink;
                         currlink=currlink->getlink();
                     }
                     prevlink->setlink(t);
                     t->setnext(temp);
                     break;
                case 'n':
                case 'N':
                    break;

           }
           cout<<" do u want an edge from "<<temp->getdata()<<" to"<<p->getdata()<<" ?y:n";
           cin>>ch;
           switch(ch)
           {
               case 'y':
               case 'Y':
                    t=new edge();
                    currlink=temp->getlink();
                    prevlink=NULL;
                    if(currlink==NULL&&prevlink==NULL)
                      {
                         temp->setlink(t);
                         t->setnext(p);
                         break;
                      }
                    while(currlink!=NULL)
                    {
                        prevlink=currlink;
                        currlink=currlink->getlink();

                    }
                    prevlink->setlink(t);
                    t->setnext(p);
                    break;
                case 'n':
                case 'N':
                    break;
           }
           p=p->getnext();
       }
 return;
}
void graph::display()
{
 if(strt==NULL)
  {
    cout<<"there is no node in graph\n";
    return;
  }
 node* p=strt;
 while(p->getnext()!=NULL)
  {
   cout<<p->getdata()<<"\t";
   p=p->getnext();
  }
 cout<<p->getdata()<<"\t";
 return;
}
void graph::dfs()
{
//cout<<"u r in dfs\n";
 if(strt==NULL)
  {
   cout<<"there is no node in graph";
   return;
  }
 //node *v=strt;
 node* p=strt;
 //cout<<"assign strt into v\n";
edge *h;
 while(p->getnext()!=NULL)
      {
       p->setstatus(1);
       p=p->getnext();
      }
       p->setstatus(1);
     // cout<<"after first while\n";
       p=strt;
     // cout<<"createing stack object\n";
       //stack ob;
       ob.push(p);
       p->setstatus(2);
       //cout<<"element are processed\n";
       while(!(ob.isempty()))
        {
        //cout<<"in second while\n";
        p=ob.pop();
        cout<<"\t"<<p->getdata();
        p->setstatus(3);
         h=p->getlink();
              while(h!=NULL)
                  {
      //edge *h=p->getlink();
                  if(h->getnext()->getstatus()==1)
                       {
                        ob.push(h->getnext());
                         h->getnext()->setstatus(2);
     
                       }
                       h=h->getlink();
      //p=obj.pop();
      //cout<<p->getdata();
                 }
 
       }
 cout<<"\n";
  }
