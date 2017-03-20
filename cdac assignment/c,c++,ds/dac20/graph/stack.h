//#include<iostream>
//#include<stdlib.h>
#include"node.h"
#define maxsize 10
class stack
{
 node* s[maxsize];
 int top;
 public:
   stack();
   void push(node*);
   node* pop();
   bool isempty();
   bool isfull();
};
