#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 int main()
 
 {
     int sum,a;
     int rate=10;
     int time;
     float CI,x;
     cout<<"enter the amount you want for loan?";
     cin>>sum;
     cout<<"\nenter the time(in years) you want to compute interest for?";
     cin>>time;
     cout<<"how would you like to compute your compound interest for:\n 1.compounded yearly \n2.compounded half yearly \n3.compounded quaterly\n";
     cout<<"enter your choice:";
     cin>>a;
     
     switch(a)
     {
              case 1:
                                        
                      x=pow((float)(100+rate)/100,time);
                     CI=sum*x;
                     cout<<"compound interest ="<<CI;
                     break;
                     
              case 2:
                   
                     CI=sum*(pow((float)(100+rate/2)/100,2*time));
                     cout<<"compound interest ="<<CI;
                     break;
                     
              case 3:
                   
                     CI=sum*pow((float)(100+(float)rate/4)/100,4*time);
                     cout<<"compound interest ="<<CI;
                     break;
                           
              }
     getch();
     return 0;
     }
