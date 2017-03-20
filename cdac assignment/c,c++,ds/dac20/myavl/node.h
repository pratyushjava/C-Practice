#include<iostream>
#include<stdlib.h>

using namespce std;

class node
{
int data;
node *left;
node* right;
int balf;
public:
 node(int);
 void setdata(int);
 void setleft(node *);
 void setright(node *);
 void setbalf(int);
 int getdata();
 node * getleft();
 node * getright();
 int getbalf();
};

