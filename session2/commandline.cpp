#include<iostream>
using namespace std;
class comm
{
      char name[10];
      int roll_num;
      public:
             void assign(char ptr[10])
             {    
                  static int k=1;
                  strcpy(name,ptr);
                  roll_num=k++;
             }
             void print()
             {
                  cout<<" NAME: "<<name<<" ROLL NUMBER : "<<roll_num<<endl;
             }
};
int main(int argc,char *argv[])
{
    comm o[argc];
    for(int i=0;i<argc;i++)
    {
            o[i].assign(argv[i+1]);
            }
    for(int j=0;j<argc;j++)
    {
            o[j].print();
            }
return 0;
}
                  
    
