#include"node.h"
node::node(int eid)
  {
      data.setid(eid);
   this->next=NULL;
  }
void node:: setnext(node* t)
  {
  this->next=t;
  }
void node::getdata()
  {
   data.display();
  }
node * node::getnext()
  {
   return next;
  }
  bool node::searchdetail(int n)
   {
       return(data.search(n));
   }
