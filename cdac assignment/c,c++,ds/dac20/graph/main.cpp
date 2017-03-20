#include"graph.h"
int main()
{
    graph g;
    g.insrt(1);
    g.insrt(2);
    g.insrt(3);
    g.insrt(4);
   // g.insrt(5);
   // g.insrt(6);
    //g.insrt(7);
    //g.insrt(8);
    cout<<"graph display\n";
    g.display();
    cout<<"\n";
    cout<<"DFS\n";
    g.dfs();
    return 0;
}
