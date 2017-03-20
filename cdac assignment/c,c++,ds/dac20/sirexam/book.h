#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class book
 {
 string title;
 string author;
 int price;
 book * next;
 public:
   book();
   void settitle(string);
   void setauthor(string);
   void setprice(int);
   void setnext(book *);
   string gettitle();
   string getauthor();
   int getprice();
   book * getnext();
 };
