#include<iostream.h>
#include<conio.h>
#include<string.h>
using namespace std;
#define SIZE 3
class student
{
      char name[10];
      int roll,total;
      struct dob
      {
             int date;
             int month;
             int year;
             }d;
             
      public:
             void getdata()
             {
                  cout<<"enter the name";
                  cin>>name;
                  cout<<"enter the date of birth as dd mm yy";
                  cin>>d.date>>d.month>>d.year;
                  cout<<"enter the roll number";
                  cin>>roll;
                  cout<<"enter the total";
                  cin>>total;
                  }
             void showdata()
             {
                  cout<<"name :"<<name<<endl<<"date of birth : "<<d.date<<"/"<<d.month<<"/"<<d.year<<endl<<"roll number"<<roll<<endl<<"total"<<total<<endl;
                  }
             
            static void sortname(student *p)
             {
                   for(int i=0;i<=SIZE;i++)
                  {
                          for(int j=1;j<SIZE;j++)
                          {
                                  
                                                    if(strcmp(p[i+j].name,p[i].name)<0)
                                                    {                 
                                                           student temp;
                                                           temp=p[i];
                                                           p[i]=p[i+j];
                                                           p[i+j]=temp;
                                                           
                                                     }
                                  
                          }
                  }
                  
             }
             static void sortdate(student *p)
             {
                  for(int i=0;i<=SIZE;i++)
                  {
                          for(int j=1;j<SIZE;j++)
                          {
                                  if(p[i+j].d.year<p[i].d.year)
                                  {
                                         student temp;
                                        temp=p[i];
                                         p[i]=p[i+j];
                                         p[i+j]=temp;
                                         }
                                  else if(p[i+j].d.month<p[i].d.month)
                                  {
                                         student temp;
                                        temp=p[i];
                                         p[i]=p[i+j];
                                         p[i+j]=temp;
                                         }
                                         else if(p[i+j].d.date<p[i].d.date)
                                  {
                                         student temp;
                                        temp=p[i];
                                         p[i]=p[i+j];
                                         p[i+j]=temp;
                                         }
                          }
                  }
                   }
            static void sortroll(student *p)
             {
                 for(int i=0;i<=SIZE;i++)
                  {
                          for(int j=1;j<SIZE;j++)
                          {
                                  if(p[i+j].roll<p[i].roll)
                                  {
                                         student temp;
                                        temp=p[i];
                                         p[i]=p[i+j];
                                         p[i+j]=temp;
                                         }
                          }
                  }
              }
             static void sorttotal(student *p)
             {
                   for(int i=0;i<=SIZE;i++)
                  {
                          for(int j=1;j<SIZE;j++)
                          {
                                  if(p[i+j].total<p[i].total)
                                  {
                                         student temp;
                                        temp=p[i];
                                         p[i]=p[i+j];
                                         p[i+j]=temp;
                                         }
                          }
                  }
              
                   }
};
int main()
{
    int opt;
    student s[SIZE];
    for(int i=0;i<SIZE;i++)
            s[i].getdata();
    for(int j=0;j<SIZE;j++)
            s[j].showdata();
            cout<<"how do u want to sort the list"<<endl<<"1. sort by name\n 2.sort by date\n 3. sort by roll no\n 4. sort by total\n"<<endl;
            cin>>opt;
            switch(opt)
            {
                       case 1: student::sortname(s);break;
                       case 2: student::sortdate(s);break;
                       case 3: student::sortroll(s);break;
                       case 4: student::sorttotal(s);break;
                       default: cout<<"u hav selected wrong choice";
                       exit(0);
                       }
                 
            for(int j=0;j<SIZE;j++)
            s[j].showdata();
            
getch();
return 0;
}
    
    

                  
