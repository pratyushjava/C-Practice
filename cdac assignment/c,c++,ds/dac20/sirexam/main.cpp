#include"libry.h"
int main()
 {
  string st,sl;
  int price,int pos;
  int ch;
  libry l;
 do
  {
   cout<<"enter the choice\n";
   cin>>ch;
   switch(ch)
    {
     case 1:
          cout<<"enter the title :";
          cin>>st;
          cout<<"enter the author";
          cin>>sl;
          cout<<"enter the price";
          cin>>price;
          l.insrtlb(st,sl,price);
          break;
    case 2:
          cout<<"enter the title :";
          cin>>st;
          cout<<"enter the author";
          cin>>sl;
          cout<<"enter the price";
          cin>>price;
          l.insrtle(st,sl,price);
          break;
    case 3:
          cout<<"enter the title :";
          cin>>st;
          cout<<"enter the author";
          cin>>sl;
          cout<<"enter the price";
          cin>>price;
          cout<<"enter the pos";
          cin>>pos
          l.insrtpos(st,sl,price,pos);
          break;
     }
  }while(pos!=4);
 }
