#inclde"dlist.h"
int main()
{
    int ch;dlist dl;
    int data;
    do
    {
        cout<<"1 for insert at begin\n";
        cout<<"2 for display\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
               cout<<"enter the data:\";
               cin>>data;
               dl.insertbeg(data);
               break;
            case 2:
               dl.display();
               break;
        }

    }while(ch!=3);
}
