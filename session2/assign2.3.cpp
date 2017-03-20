#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
int string_number;
char string[20];
cout<<"how many strings you want to enter?";
cin>>string_number;
char *ptr[string_number];


for(int i=0;i<string_number;i++)
{
cout<<"enter the  "<<i+1<<" string:"<<endl;
ptr[i]=new char;
cin>>ptr[i];
}
cout<<endl<<"string entered are:"<<endl;
for(int i=0;i<string_number;i++)
{
puts(ptr[i]);

}
cout<<"\n";
char *biggest=ptr[0];
int j;
for(j=1;j<string_number;j++)
{
if(strlen(ptr[j])>strlen(biggest))
{
biggest=ptr[j];
}
}
cout<<"biggest string in array of pointers is:\t\t";
puts(biggest);

char *smallest=ptr[0];
for(j=1;j<string_number;j++)
{
if(strlen(ptr[j])<strlen(smallest))
{
smallest=ptr[j];
}
}
cout<<"smallest string in array of pointers is:\t";
puts(smallest);

return 0;
}

