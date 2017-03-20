#include<iostream>
using namespace std;
class employee
{
	int emp_id;long int phone_num;
	char name[10],address[15];
	employee *next;
	public:
	employee()
	{
              next=NULL;
	}
	void getdata()
	{
         cout<<"emp_id:"<<emp_id<<"\tEmployee name:"<<name<<"\tPhone Number:"<<phone_num<<"\tAddress"<<address<<endl;
    }
    void setdata()
	{
		cout<<"enter the emp_id, employee name, phone number,address"<<endl;
		cin>>emp_id>>name>>phone_num>>address;
	}
	employee* getnext()
	{
		return next;
	}
	void setnext(employee *p)
	{
		next=p;
	}
    int getid()
    {    
         return emp_id;
    }        
};
class circularlist
{
	employee *start;
	public:
	circularlist()
	{
		start=NULL;
	}
	
	void insert_beg()
	{
        employee *temp=new employee();
        temp->setdata();
		employee *p=start;
		if(p==NULL)
		{
			temp->setnext(temp);
            start=temp;	
		}
		else
		{	
			while(p->getnext()!=start)
			{
			p=p->getnext();
			}
			p->setnext(temp);
			temp->setnext(start);
			start=temp;
		}
	}
	void insert_end()
	{
		employee *temp=new employee();
        temp->setdata();
		employee *p=start;
		if(p==NULL)
		{
			start=temp;
			temp->setnext(start);
		}
		else
		{
			while(p->getnext()!=start)
			{
			p=p->getnext();
			}
			p->setnext(temp);
			temp->setnext(start);
		}
	}
	
         
	void search(int id)
	{	
		employee *p=start;int flag=0;
		if(p==NULL)
		{
                   cout<<"record is empty";
		           return;
               }
		while(p->getid()!=id)
		{
			p=p->getnext();
			if(p==start)
            {          
                       cout<<"data is not found";
                       flag=1;
			           break;
             }
		}
	    if(flag==0)
        p->getdata();
	}
};
int main()
{
	circularlist l;
	int opt,id;
	char x;
	cout<<"WELCOME TO ASR TECHNOLOGIES\n";
	do
	{	
		cout<<"1. Insert an employee record at beginning of list \n 2. Insert an employee record at end of list\n 3. Search a employee record"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1: l.insert_beg();
				break;
			case 2: l.insert_end();
				break;
			case 3: cout<<"enter the emp_id of employee";
				    cin>>id;
				    l.search(id);
				    break;
			
		}
		cout<<"do u want 2 continue";
		cin>>x;
	}while(x!='n');
return 0;
}
