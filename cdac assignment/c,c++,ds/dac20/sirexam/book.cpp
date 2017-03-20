#include"book.h"
book::book(string m,string n,int p)
 {
  strcpy(title,m);
  strcpy(author,n);
  price=p;
  next=NULL
  }
void book::settitle(string m)
{
strcpy(title,m);
}
void book::setauthor(string m)
{
strcpy(author,m);
}
void book::setprice(int m)
{
this->price=m;
}
void book::setnext(book *t)
{
 this->next=t;
}
string book::gettitle()
 {
  return title;
 }
string book::getauthor()
 {
  return author;
 }
int book::getprice()
 {
  return price;
 }
book* book::getnext()
 {
  return next;
 }




