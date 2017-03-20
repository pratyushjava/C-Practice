#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class emp
  {
  int empno;
  string empname;
  int empsal;
  public:
    emp();
  void display();
  bool search(int);
  void setid(int);
  };
