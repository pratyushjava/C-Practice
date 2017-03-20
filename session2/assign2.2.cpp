#include<iostream>
using namespace std;
int main()
{
int array[10];
int *ptr;
cout<<"enter the elements you want in array:"<<endl;
for(int i=0;i<10;i++)
{
cin>>array[i];
}
ptr=array;
cout<<"elements in array dispalyed by using pointer are:"<<endl;
for(int j=0;j<10;j++)
{
cout<<*ptr<<endl;
ptr++;
}
return 0;

}
