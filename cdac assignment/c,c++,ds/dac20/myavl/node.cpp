#include"node.h"
node::node(int data)
{
this->data=data;
this->left=NULL;
this->right=NULL;
this->balf=0;
}
void node::setdata(int data)
{
this->data=data;
}
void node::setleft(node* t)
{
this->left=t;
}
void node::setright(node* t)
{
this->right=t;
}
void node::setbalf(int t)
{
this->balf=t;
}
int node::getdata()
{
return data;
}
int node::getbalf()
{
return balf;
}
node* node::getleft()
{
return left;
}
node* node::getRIGHT()
{
return right;
}
