#include<iostream>
#include<conio.h>
using namespace std;
 int main()
 {   
     int factorial1(int);
     int x;
     long int r;
     
     cout<<"enter the number under which you want to find factorial of all the numbers:";
     cin>>x;
     for(int i=1;i<=x;i++)
     {
      r= factorial1(i);
      cout<<"\nfactorial of "<<i<<" is:"<<r;
      }
     
     getch();
     return 0;
     
     }
     int factorial1(int y)
     {
 
            if(y==1)
            {       
                    return 1;
                    }
                    else
                    {
                    return y*factorial1(y-1);
                    } 
              } 
                             
            
              
                        
