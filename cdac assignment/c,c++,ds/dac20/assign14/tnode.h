#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class node
  {
  string data;
  node* lt;
  node* rt;
  public:
    node(string);
    void setdata(string);
    node* getlt();
    node* getrt();
    void setrt(node*);
    void setlt(node*);
    string getdata();
  };
  
