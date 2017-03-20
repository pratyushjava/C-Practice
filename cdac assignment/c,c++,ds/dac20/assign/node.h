#include"emp.h"
class node
  {
   emp data;
   node* next;
  public:
    node(int);
    node* getnext();
    void setnext(node*);
    void getdata();
    bool searchdetail(int);
  };

