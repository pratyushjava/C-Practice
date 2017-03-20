#include"node.h"
class dlist
 {
     node* strt;
     public:
      dlist();
      void insrtbeg(int);
      void insrtend(int);
      void insertpos(int,pos);
      void deletebeg();
      void deleteend();
      void deletepos(int);
      void display();
 }
