#include<iostream>
using namespace std;
class node
{
	int data;
	node *next;
	
	public:
	node(int a)
	{
		data =a;
		next=NULL;
	}
	node(){}
	int getdata()
	{
		return data;
	}
	void setdata(int d)
	{
		data=d;
	}
	node* getnext()
	{
		return next;
	}
	void setnext(node *p)
	{
		next=p;
	}
	
};
class linkedlist
{
	node *start;
	public:
	linkedlist()
	{
	start=NULL;
	}
	void insertion_beg(int a)
	{	//int ab;
		//cout<<"enter the value:"<<endl;
		//cin>>ab;
		node *temp=new node(a);
		temp->setnext(start);
		//temp->setdata(ab);	
		start=temp;
	}
	void insertion_end(int a)
	{
		node *p;
		p=start;
		node *temp=new node(a);
		while(p->getnext()!=NULL)
			p=p->getnext();
		p->setnext(temp);
	}
	void insert_pos(int a,int pos)
	{
                node *temp=new node(a);
                node *p=start;
                int i=0;
		if(start==NULL)
		insertion_beg(a);
		else
		{	
                  while( i!=(pos-1))
                  {
                       p=p->getnext();
                       i++;
                  }
		temp->setnext(p->getnext());
		p->setnext(temp);
		}
                  
         }	
	void display()
	{
		if(start==NULL)
		{
			cout<<"your list is empty";
			return;
		}	
		node *p=start;
		while(p!=NULL)
		{
			cout<<p->getdata()<<endl;
			p=p->getnext();			
		}
	}
	int delete_beg()
	{
		int a;
		node *p=start;
		if(start==NULL)
		{
			cout<<"the list is empty: caution underflow";
			return 0;
		}
		else
		{	
			start=(start->getnext());
			a=p->getdata();
			delete p;
			return a;
		}
	}
	int delete_end()case 7: l1.setdata(10);
	{
		int a;
		node *p=start;
		if(start==NULL)
		{
			cout<<"the list is empty: caution underflow";
			return 0;
		}
		while(p->getnext()->getnext()!=NULL)
		{
			p=p->getnext();
		}
			a=p->getnext()->getdata();			
			delete p->getnext();
			p->setnext(NULL);
			return a;
		}
};
int main()
{
	linkedlist l1;	
	int a,opt,pos;
	char c='y';
	while(c=='y')
	{	cout<<"SELECT UR CHOICE \n 1. insert at the starting of list\n 2. insertion at the end of list\n"; 
					cout<<"3. insert the data at particular position\n 4. delete the data at beginning\n 5. delete at end";
					cout<< " 6.display the list\n";
		cin>>opt;
		switch(opt)
		{	
		case 1:	cout<<"enter the element u want to add the starting of list:";
			cin>>a;
			l1.insertion_beg(a);
			break;
		case 2: cout<<"enter the element u want to insert at the end:";
			cin>>a;
			l1.insertion_end(a);
		break;
		case 3: cout<<"enter the elment u want to add and also the position";
			cin>>a>>pos;
			l1.insert_pos(a,pos);
			break;
		case 4: a=l1.delete_beg();
			cout<<"the value deleted is: "<<a;
			break;
		case 5: a=l1.delete_end();
			cout<<"the value deleted is: "<<a;
			break;
		case 6: l1.display();
			break;
		
		default:cout<<"enter right choice";
		}
		cout<<"do u want 2 continue";
		cin>>c;
	}
return 0;
}
