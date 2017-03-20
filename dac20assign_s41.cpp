/* Write a Student class and use it in your program. Store the data of ten students and display the sorted data according to their roll numbers, date of births, and total*/
#include<iostream>
using namespace std;
struct dob
   {
    int day;
    int month;
    int year;
   };
class student
 {
  int rollno;
  int total;
  struct dob d;
 public:
   void getrollno()
     {
      cout<<"enter the rollno";
      cin>>rollno;
     }
   
   void gettotal()
     {
      cout<<"enter the total";
      cin>>total;
     }  
  void getdob()
    {
    cout<<"enter the date";
    cin>>d.day;
    cout<<"\n";
    cout<<"enter the month";
    cin>>d.month;
    cout<<"\n";
    cout<<"enter the year";
    cin>>d.year;
    cout<<"\n";
   }
   


   
  static void sort_rollno(student *s)
    {
      int i,j,k;
      student temp;
      for(i=0;i<3;i++)
        {
        k=0;
        for(j=1;j<3;j++)
         {
            if(((s+j)->rollno<(s+k)->rollno))
             {
              temp=s[k];
              s[k]=s[j];
              s[j]=temp;
              
              
             }
            k++;
         }
       
    }
}
 /*void swapfun(int j,int k)
   {
               temp=s[k];
              s[k]=s[j];
              s[j]=temp;
             
   }*/
  
 static void sort_total(student *s)
    {
      int i,j,k;
    student temp;
      for(i=0;i<3;i++)
        {
        k=0;
        for(j=1;j<3;j++)
         {
            if(((s+j)->total<=(s+k)->total))
             {
                  temp=s[k];
              s[k]=s[j];
              s[j]=temp;
             
              }
           
            k++;
         }
       
    }
}
  static void sort_dob(student *s)
    {
     int i,j,k;
 student temp;
     for(i=0;i<3;i++)
        {
         k=0;
         for(j=1;j<3;j++)
          {
            if((s+j)->d.year<(s+k)->d.year)
              {
                temp=s[k];
              s[k]=s[j];
              s[j]=temp;
             
              }
            if((s+j)->d.year==(s+k)->d.year)
             {
                if((s+j)->d.month<=(s+k)->d.month)
                  {
                    temp=s[k];
              s[k]=s[j];
              s[j]=temp;
             
                  }
               if((s+j)->d.month==(s+k)->d.month)
                   {
                      if((s+j)->d.day<=(s+k)->d.day)
                  {
                      temp=s[k];
              s[k]=s[j];
              s[j]=temp;
             
                  }
                                   
                   }
             }
            
            k++;
          }
        }
    }
  void showdata()
  {
     cout<<"the roll no is"<<rollno<<"\n";
     cout<<"the date of birth is"<<d.day<<"-"<<d.month<<"-"<<d.year<<"\n";
     cout<<"the total is"<<total<<"\n";
  }
   
 };
int main()
 {
 student std[3];
 int choice;
 
 for(int i=0;i<3;i++)
   {
     std[i].getrollno();
     std[i].gettotal();
    std[i].getdob();
    }
cout<<"please enter the choice:\n";
cout<<"1 for sort rollno,2 for sort dob ,3 for sort total:";
cin>>choice;
switch(choice)
  {
  case 1:
        student::sort_rollno(std);
        for(int i=0;i<3;i++)
        {
        std[i].showdata();
        
        }
        break;
 case 2:
       student::sort_dob(std);
         for(int i=0;i<3;i++)
        {
        std[i].showdata();
       
        }
        break;
case 3:       
      student::sort_total(std);
      for(int i=0;i<3;i++)
      {
     std[i].showdata();
    
      }
      break;
 }
 return 0;
 }  
 
 

