#include<iostream>
using namespace std;

void f(int &r)
 {
  cout<<"address of r  uis "<<&r;
  cout<<r;
 }
int main()
 {
 int a;
  cin>>a;
cout<<"addres of a\n";
 cout<<&a;
 f(a);
 }
