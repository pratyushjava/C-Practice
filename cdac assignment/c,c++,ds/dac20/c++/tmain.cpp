#include"tree.h"

int main()
 {
  tree t;int data;
  int ch;
  do
   {
    cout<<"1 for insert:\n";
    cout<<"2 for inorder:\n";
    cin>>ch;
    switch(ch)
      {
       case 1:
            cout<<"please insert the data:\n";
            cin>>data;
            t.insrt(data);
            break;
       case 2:
           l.inorder();
           break;
      }
   }while(ch!=3);
 }
