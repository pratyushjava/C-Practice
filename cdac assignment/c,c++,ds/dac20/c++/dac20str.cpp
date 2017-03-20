#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;
 class mystring 
   {
 private:
    char *s;
    int n;
 public:
    
      void mrcreate()
        {
        cout<<"enter the length of string";
        cin>>n;
       
        s=new char[n];
       cout<<"enter tge string";
        cin>>s;
      
       }
    void operator[](int n1)
       {
       cout<<"the character at"<<n1 <<" is "<<  *(s+n1-1)<<"\n";
        
       }
      
      
  };
  int main()
   {
    mystring str;
    str.mrcreate();
    int n1;
    cout<<"enter the no on which u want to see character";
    cin>>n1;
     str[n1];
   return 0;
   }
  
