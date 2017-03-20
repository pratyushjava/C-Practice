# include<iostream>
using namespace std;
class s
  {
  int i;
  static int j;/*static variable declaration, j is a private and static variable*/
  public:
    s()/*constructor is called*/
    {
     i=0;
     j++;
    }
   void  static getdata()/* static function, will coontain only static members*/
    {
     s s3;/*class object is created in the class*/
     cout<<j<<this->i;
     }
  ~s()/*destructor is called*/
  {
   j--;
   cout<<j;
  }
  };
 int s::j=0;/*static variable definition is given,scope of this is global and outside of all classes and functions*/
int main()
  {
  s s1,s2;
  s1.getdata();
  s::getdata();/*static fun is called withou use of object*/
  return 0;
  }

