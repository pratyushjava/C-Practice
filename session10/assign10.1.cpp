#include<conio.h>
#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main()
{

int i,n;
vector<int> v;
v.reserve(10);
for(i=0;i<10;i++)
{
cin>>n;
v.push_back(n);
}
vector<int>::iterator ci;
for(ci=v.begin();ci!=v.end();ci++)
{
cout<<*ci<<"address:"<<&(*ci)<<endl;
}
v.resize(8);
for(int j=0;j<v.size();j++)
{
cout<<v[j]<<endl;
}
for(i=0;i<3;i++)
{
cin>>n;
v.push_back(n);
}
for(int j=0;j<v.size();j++)
{
cout<<v[j]<<endl;
}
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.max_size();
getch();
return 0;
}
