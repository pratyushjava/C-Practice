#include<iostream>
using namespace std;
int main()
{
int swap(int *,int *);
int a,b;
cout<<"enter the two numbers you want to swap:"<<endl;
cin>>a>>b;
swap(&a,&b);
cout<<"numbers after swapping are"<<"\n"<<"a:"<<a<<endl<<"b:"<<b<<endl;
return 0;
}
int swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp; 
}
