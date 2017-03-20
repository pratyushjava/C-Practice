#include<iostream>
using namespace std;
#include<conio.h>
class matrix
{
      int mat[3][3];
      public:
             matrix()
             {
                     for(int i=0;i<=2;i++)
                             for(int j=0;j<=2;j++)
                             mat[i][j]=0;
             }
             void getdata()
             {
                  cout<<"enter the elements of array";
                  for(int i=0;i<=2;i++)
                            for(int j=0;j<=2;j++)
                                           cin>>mat[i][j];
             }
             matrix operator *(matrix m)
             {
                  matrix x;
                  for(int i=0;i<=2;i++)
                          for(int j=0;j<=2;j++)
                                  for(int k=0;k<=2;k++)
                                        x.mat[i][j]=mat[i][k]*m.mat[k][j]+x.mat[i][j];
                  return x;
             }
             void display()
             {
                  for(int i=0;i<=2;i++)
                            for(int j=0;j<=2;j++)
                                           cout<<mat[i][j];
             }
                  
};
int main()
{
    matrix m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3=m1*m2;
    m3.display();
    
getch();
return 0;
}
    
                                  
                          
