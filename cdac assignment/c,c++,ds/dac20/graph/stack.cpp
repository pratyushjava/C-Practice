#include"stack.h"
stack::stack()
 {
 top=-1;
 }
void stack::push(node *t)
  {
   if(isfull())
      {
      cout<<"overflow";
      return;
      }
  top=top+1;
  s[top]=t;
  }
node* stack::pop()
 {
   node* t;
   if(isempty())
     {
       cout<<"underflow";
       return 0;
     }
  t=s[top];
  top=top-1;
  return t;
 }
bool stack::isempty()
{
 if(top==-1)
   return true;
 else
   return false;
}
bool stack::isfull()
 {
  if(top==maxsize-1)
     return true;
  else 
     return false;
 }
