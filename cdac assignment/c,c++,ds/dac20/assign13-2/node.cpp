#include"node.h"
node::node(int eid)
  {
      //this->data=data;
      data.setid(eid);
      this->next=NULL;
      this->prev=NULL;
  }
 /*void node::setdata(int data)
    {
        this->data=data;
    }*/
    void node::setnext(node *t)
    {
        this->next=t;
    }
    void node::setprev(node* t)
    {
        this->prev=t;
    }
    node* node::getnext()
    {
        return next;
    }
    node* node::getprev()
    {
        return prev;
    }
    void node::getdata()
    {
        data.display();
    }
    bool node::searchdetail(int n)
   {
       return(data.search(n));
   }
