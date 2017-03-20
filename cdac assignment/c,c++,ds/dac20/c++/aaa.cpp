#include<iostream>
using namespace std;
class stack
{
 private:
        int top;
        int arr[10];
        
 public:
       
       stack()
        {
         this->top=0;
        }
      int push(int x,int maxsize)
       {
        if(top<=maxsize)
         {
        arr[top]=x;
        top++;
        return 0;
         }
        else
         {
          cout<<"overflow occurs"<<"\n";
          return 0;
         }
       }
    int pop()
     {
      int item;
      if(top<-1)
       {
       cout<<"underflow occurs\n";
       return 0;
       }
      else
         {
       item=arr[top];
       top=top-1;
       return 0;
         }     
     }
     void print()
     {
     while(top>0)
       {
       cout<<arr[top-1]<<"\n";
       top=top-1;
       }
     }
};
int main()
{
stack s;
int ele, choice;
cout<<"please enter 1 for push,2 for pop,3 for print,4 to end program";
cin>>choice;
while(choice==1 || choice==2 || choice==3)
{
 switch(choice)
 {
 case 1:
  
  for(int i=0;i<10;i++)
    {
    cout<<"enter the "<<i <<"th element:";
    cin>>ele;
    cout<<"\n";
    s.push(ele,10);
    }
   cout<<"items are pushed\n";
   break;
 case 2:
   s.pop();
   cout<<"items are popped\n";
   break;
 case 3:
    s.print();
    cout<<"items are printed\n";
    break;
 }
cout<<"please enter 1 for push,2 for pop,3 for print,4 to end program";
cin>>choice;
}
cout<<"program is ended.....bye";
return 0;
}
