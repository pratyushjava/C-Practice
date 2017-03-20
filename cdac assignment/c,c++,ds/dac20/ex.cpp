#include<iostream>
using namespace std;

class shape
 {
 protected :
 int area;
 public :
 virtual void calarea()=0;
 shape(int l)
  {
   area=l;
  }

 virtual void draw()
{
  cout<<"hello\n";
}
 };
class circle:public shape
 {
public:
  circle(int d):shape(d)
   {
   }
  public:
   void calarea()
     {
      cout<<area*area;
     }
    void draw()
     {
      cout<<"draw the circle\n";
     }
 };
class rect:public shape
 {
  public:
   void calarea()
     {
    cout<<"area of rect\n";
     }
     void draw()
       {
        cout<<"draw the rectangle\n";
       }
 };
int main()
{
//shape s1;
shape *s;
circle c(10);
s=&c;
s->draw();
s->calarea();



}
