#include<iostream>
#include<malloc.h>
using namespace std;
 class matrix
   {
   int r,c, **p2;
   public:
    
   matrix()
     {
       cout<<"enter the row :";
       cin>>r;
       cout<<"enter the col :";
       cin>>c;
       p2=(int **)malloc(r*sizeof(int ));
     
         for(int i=0;i<r;i++)
         {
         p2[i]=(int *)malloc(c*sizeof(int));
        }
     }
  
  void insrt()
   {
     for(int i=0;i<r;i++)
       {
       for(int j=0;j<c;j++)
         {
          cout<<"please insert "<< j+1 << "th element of"<< i+1<<"th row :";
          cin>>p2[i][j];
         }
       }
   }
  void show()
    {
    
    for(int i=0;i<r;i++)
      {
      for(int j=0;j<c;j++)
       {
        cout<<p2[i][j]<<"\t";
       }
      cout<<"\n";
      }
    }
  void operator=(matrix &m)
    {
    
    for(int i=0;i<r;i++)
      {
       for(int j=0;j<c;j++)
        {
         p2[i][j]=m.p2[i][j];
        }
      }
     }
  matrix& operator+(matrix &m)
    {
    matrix m4;
    for(int i=0;i<r;i++)
      {
       for(int j=0;j<c;j++)
        {
         m4.p2[i][j]=p2[i][j]+m.p2[i][j];
        }
      }
    return m4;
     }
     matrix& operator*(matrix &m)
    {
    matrix m5;int temp;
    for(int i=0;i<r;i++)
      {
       for(int k=0;k<m.c;k++)
        {
         temp=0;
         for(int j=0;j<c;j++)
          {
         temp=temp+p2[i][j]*m.p2[j][k];
          }
         m5.p2[i][k]=temp;
        }
      }
    return m5;
     }
   };
 int main()
  {
 int ch;
 
 cout<<"please insert ur choice 1for copy: 2 for add : 3 for mul";
 cin>>ch;
 matrix m1,m2,m3;
 switch(ch)
  {
  case 1:
 
  m2.insrt();
  m2.show();
  m1=m2;
  m1.show();
  break;
  case 2:
  
  cout<<"please enter the element of first matrix:";
  m1.insrt();
  cout<<"the matrix is \n";
  m1.show();
  cout<<"please enter the element of second matrix :";
  m2.insrt();
  cout<<"the matrix is \n";
  m2.show();
  m3=m1+m2;
  cout<<"the resultant matrix is: \n";
  m3.show();
  break;
  case 3:
  
  cout<<"please enter the element of first matrix:";
  m1.insrt();
  cout<<"the matrix is \n";
  m1.show();
  cout<<"please enter the element of second matrix :";
  m2.insrt();
  cout<<"the matrix is \n";
  m2.show();
  m3=m1*m2;
  m3.show();
  break;
  return 0;
  }
}
