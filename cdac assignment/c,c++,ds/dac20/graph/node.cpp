#include"node.h"
node::node(int n)
{
    this->data=n;
    this->status=0;
    this->next=NULL;
    this->link=NULL;
}
void node::setdata(int n)
{
    this->data=n;
}
void node::setstatus(int n)
{
    this->status=n;
}
void node::setnext(node* t)
{
    this->next=t;
}
void node::setlink(edge* t)
{
    this->link=t;
}
int node::getdata()
{
    return data;
}
int node::getstatus()
{
    return status;
}
node* node::getnext()
{
    return next;
}
edge* node::getlink()
{
    return link;
}
edge::edge()
{
    this->next=NULL;
    this->link=NULL;
}
void edge::setnext(node* t)
{
    this->next=t;
}
void edge::setlink(edge* t)
{
    this->link=t;
}
node* edge::getnext()
{
    return next;
}
edge* edge::getlink()
{
    return link;
}
