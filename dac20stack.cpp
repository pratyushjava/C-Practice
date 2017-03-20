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
      void push(int x,int maxsize)
       {
        if(top<=maxsize)
         {
        arr[top]=x;
        top++;
         }
        else
         {
          cout<<"overflow occurs"<<"\n";
         }
       }
    void pop()
     {
      int item;
      if(top<0)
       {
       cout<<"underflow occurs";
       }
      
       item=arr[top];
       top=top-1;
      
     }
     void print()
     {
     while(top>=0)
       {
       cout<<arr[top-1]<<"\n";
       top=top-1;
       }
     }
};
int main()
{
 stack s;
int ele;
for(int i=0;i<10;i++)
{
 cin>>ele;
 s.push(ele,10);
}
cout<<"items are printed";
 s.print();
cout<"items are popped";
 s.pop();
cout<"remaining item";
 s.print();
cout<<"no item is present";
return 0;
}
