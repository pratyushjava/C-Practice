#include"que.h"
que::que()
 {
  front=-1;
  rear=-1;
 }
bool que::isfull()
 {
  if(front==(rear+1)%maxsize || front==rear+1)
    return true;
 else
    return false;
 }
bool que::isempty()
  {
   if(front==rear==-1)
     return true;
   else
     return false;
  }
void que::insrt(node *t)
  {
    if(isfull())
      return ;
    rear=(rear+1)%maxsize;
    front =1;
    q[rear]=t;
  }
