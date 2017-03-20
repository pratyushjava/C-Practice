#include<iostream>
#include<stdlib.h>
using namespace std;
class edge;
class node
 {
     int data;
     int status;
     node* next;
     edge* link;
     public:
      node(int);
      void setdata(int);
      void setstatus(int);
      void setnext(node*);
      void setlink(edge*);
      int getdata();
      int getstatus();
      node* getnext();
      edge* getlink();
};
class edge
{
    node* next;
    edge* link;
    public:
     edge();
     void setnext(node* );
     void setlink(edge* );
     node* getnext();
     edge* getlink();
};

