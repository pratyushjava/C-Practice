#include"tnode.h"

class tree
 {
  node *root;
  void inorder(node*);
  void preorder(node*);
  void postorder(node*);
  public:
   tree();
   void insrt(string);
   void del(string);
   void inorder();
   void preorder();
   void postorder();
  };
