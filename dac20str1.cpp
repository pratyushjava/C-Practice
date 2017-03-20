#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;
 class mystring 
   {
 private:
    char *s;
    int ns;
 public:
    
      void mrcreate(int n1=0;int n2=0;)
        {
        ns=n1+n2;
        
        s=new char[ns];
       cout<<"enter tge string";
        cin>>s;
      
       }
    void operator+(mystring &s1)
       {
       cout<<"the character at"<<n1 <<" is "<<  *(s+n1-1)<<"\n";
        
       }
      
      
  };
  int main()
   {
    mystring str1,str2,str3;
    int n1,n2,n3;
    cin>>n1;
    cin>>n2;
    
    str1.mrcreate(n1);
    str2.mrcreate(n2);
    n3=n1+n2;
    str3.mcreate(n3);
    str3=str1+str2;
    int n1;
    cout<<"enter the no on which u want to see character";
    cin>>n1;
     str[n1];
   return 0;
   }
  
