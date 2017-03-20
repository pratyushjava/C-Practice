#include<iostream.h>
#include<conio.h>
int main()
{
     int n,i,j,k=1,flag;
     cout<<"enter the num";
     cin>>n;
     for(i=2;i<n;i++)
                     {     flag=0;
                           for(j=2;j<i;j++)
                           {
                             if(i%j==0)
                             {flag=1;
                             break;
                             }
                             
                           }                            
                              if(flag==0)
                             {k=i;
                              }
                              
                      }cout<<k;
                           
     getch();
     return 0;
     }
