#include"node.h"
#define maxsize 10
class que
 {
 node *q[maxsize];
 int front;
 int rear;
 public:
    que();
    bool isempty();
    bool isfull();
    void insrt(node *);
    node *del();
 };

