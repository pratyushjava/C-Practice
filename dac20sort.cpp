#include<iostream>
using namespace std;
 void sort(int a[])
     {
     int k=10;
      for(int i=0;i<k;i++)
        {
        for(int j=0;j<k;j++)
           {
           int temp;
             if(a[j]>a[j+1])
              {
           temp=a[j];
            a[j]=a[j+1];
             a[j]=temp;
           }
           }
        }
     }
   
int main()
 {
 int b[10];
  for(int i=0;i<10;i++)
    {
   cin>>b[i];
    }
  sort(b);
  for(int i=0;i<10;i++)
    {
   cin>>b[i];
    }
  
 }

