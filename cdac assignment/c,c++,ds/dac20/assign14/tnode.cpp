#include"tnode.h"

node::node(string s)
   {
   this->data=s;
   this->lt=NULL;
   this->rt=NULL;
   }
string node::getdata()
   {
   return data;
   }
node* node::getlt()
   {
   return lt;
   }
node* node::getrt()
   {
   return rt;
   }
void node::setdata(string n)
   {
   this->data=n;
   }
void node::setrt(node* t)
   {
   this->rt=t;
   }
void node::setlt(node *t)
   {
    this->lt=t;
   }


