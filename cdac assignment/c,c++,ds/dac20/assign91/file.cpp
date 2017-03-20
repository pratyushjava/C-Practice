#include<fstream>
#include<string>
using namespace std;

int main()
 {
 ifstream in("abc.txt");
 ofstream out("ashi.txt");
 string s;
string::reverse_iterator ri;
 while(getline(in,s))
 {
   for(ri=s.rbegin();ri!=s.rend();ri++)
  {
   out<<*ri;
  }
 out<<"\n";

 }

out.close();
  }
