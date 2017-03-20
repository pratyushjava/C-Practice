#include"emp.h"
using namespace std;
class node
  {
    emp data;
    node* next;
    node* prev;
    public:
      node(int);
      //void setdata(int);
      void setnext(node*);
      void setprev(node*);
      node* getnext();
      node* getprev();
      void getdata();
       bool searchdetail(int);

  };
