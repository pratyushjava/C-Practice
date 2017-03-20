#include<iostream>
//#include<string.h>
#include<stdio.h>
using namespace std;

struct birth_date
{
int month,date,year;
}dob;

struct telephone
{
char *name;
int tele_no;
birth_date dob;
};


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
entry[i].name=new char;

cout<<"enter the name::";
fflush(NULL);
char ch;
//cin>>ch;
cin.getline(entry[i].name,30,'\n');
cout<<"\nenter the telephone number"<<endl;
cin>>entry[i].tele_no;
cout<<"enter the date of birth";
cout<<"date(1-31):";
cin>>entry[i].dob.date;
cout<<"month(1-12)";
cin>>entry[i].dob.month;

cout<<"year:";

cin>>entry[i].dob.year;

}

cout<<"name\t\t"<<"telephone number\t\t"<<"date of birth"<<endl;
for(i=0;i<t;i++)
{
cout<<entry[i].name<<"\t\t"<<entry[i].tele_no<<"\t\t\t\t"<<entry[i].dob.date<<"/"<<entry[i].dob.month<<"/"<<entry[i].dob.year<<endl;
}

}
