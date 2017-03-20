#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class ex
{
vector<int> arr;
public:

void store()
 {
  int n;
  arr.reserve(10);
  for(int i=0;i<10;i++)
    {
     cin>>n;
     arr.push_back(n);
    }
 //cout<<arr.size();
 }
void show()
  {
 
  for(int i=0;i<arr.size();i++)
    {
     cout<<"location:";
     cout<<(&arr[i])<<"\n";
     cout<<"the data is:";
     cout<<arr[i]<<"\n";
    }
 cout<<"the size is: "<<arr.size() <<"\n"; 
  }
void rsiz()
 {
 arr.resize(8); 
 }
void prnt()
 {
 for(int i=0;i<arr.size();i++)
   {
    cout<<arr[i]<<"\n";
   }
 }
void append()
 {
  arr.push_back(23);
  arr.push_back(25);
  arr.push_back(27);
 }

};
int main()
{
 ex ob;
// ob.reservespace();
cout<<"enter the eliment\n";
 ob.store();
cout<<"elemnt with address\n";
 ob.show();
ob.rsiz();
cout<<"print element after the resize with 8 \n";
 ob.prnt();
ob.append();
cout<<"show the element after appende 3 new element\n";
ob.show();

}
