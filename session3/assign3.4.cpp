#include"tele.h"
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    
    int t;
cout<<"number of entries you want"<<endl;
cin>>t;
struct telephone entry[t];
int i;
cout<<"enter the data:"<<endl;
for(i=0;i<t;i++)
{
//entry[i].name= new char;
cout<<"enter the name"<<endl;
cin>>entry[i].name;
cout<<"enter the telephone number"<<endl;
cin>>entry[i].tele_no;
cout<<"\n";
}
cout<<"name\t\t"<<"telephone number\t\t"<<endl;
for(i=0;i<t;i++)
{
cout<<entry[i].name<<"\t\t"<<entry[i].tele_no<<endl;
}
//for(i=0;i<t;i++)
//{
  //              delete entry[i].name;
    //            }

getch();
return 0;
}
