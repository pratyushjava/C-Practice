#include<iostream.h>
#include<conio.h>
#define SIZE 5
using namespace std;


class request
{
      public:
             
      
             int request_no;
             char desc;
/*           enum status
             {
                  pending,
                  resolved
             };*/
             int data;
             int front;
             int rear;
             request()
             {}     

             request(int data,char desc)
                          {
                               this->desc=desc;
                               this->data=data;
                               front=0;
                               rear=0;
                                   }
                                   void insert(int data);
              
                                   };
      
      int main()
      {
          int x,i;
          char y;
          cout<<"enter the data\n";
          request a[SIZE];
          
          
      void insert(int data)
                               {
                         if(front==0 && rear==0)
                                     cout<<"queue s empty"<<endl;
                                     else if(rear==SIZE)
                    cout<<"queue is full"<<endl;           
                                     else
                         {
              rear=(rear+1)%SIZE;    
              a[rear]=this->data;
              return;
              }
              }  
              
          for(i=0;i<5;i++)
          {
                          cin>>a[i].data;
                          cin>>a[i].desc;
                          a[i].insert(a[i].data);
                          
                          }
      
                
              
                          getch();
                          return 0;
                          }
                          
               
                
