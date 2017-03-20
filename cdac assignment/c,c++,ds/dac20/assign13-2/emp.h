#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class emp
  {
  int empno;
  int empsal;
  string empname;
  public:
    emp();
  void display();
  bool search(int);
  void setid(int);
  //void insrtdata();
  };
