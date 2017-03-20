#include"tree.h";

tree::tree()
  {
  root=NULL;
  }
 void tree::insrt(int n)
    {
    node *temp=new node(n);
    if(root==NULL)
      {
      root=temp;
      return;
      }
    node *p=root;
    node* prnt=NULL;
   while(p!=NULL)
     {
     if(p->getdata()==data)
        {
        cout<<"element is already present";
        delete temp;
        return;
        }
      prnt=p;
     if(data<p->getdata())
       {
        p=p->getlt();
       }
     else
       {
       p=p->getrt();
       }
     }
    if(data>prnt->getdata)
          {
          prnt->setrt(temp);
          }
   else
      {
      prnt->setlt(temp);
      }
   }
void tree::inorder(node *t)
    {
     if(t!=null)
      {
       inorder(t->getlt());
       cout<<"\t"<<t->getdata();
       inorder(t->getrt());
      }
    }
void tree::inorder()
   {
    inorder(root);
   }
    
