#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;

struct employee
{
	int emp_id;
	char *name;
	int sale;
        int x;
	enum emp_band
	{
		engineer=1,
		sr_engineer,
		manager,
		vp
	};
	int salary;


	void raise(int,int);	

	union incentive
	{
		 int bonus;
		 int sale_ince;
		 int prod_ince;
	}incent;
};
void employee::raise(int m,int n)
{
if(m*12>200 && m*12<=2000)
{
cout<<"salary after increment is:"<<n+1200<<endl;
}
else if(m*12>2000)
{
cout<<"salary after increment is"<<n+2000<<endl;
}
}

int main()

{ 
struct employee emp[2];
	int a,i;	
        // employee *x;
	for(i=0;i<2;i++)
		{	
		cout<<"enter the name "<<endl;
		//x=&emp[i];
		//cin>>x->name;
                emp[i].name=new char;
                cin>>emp[i].name;
                 
		cout<<"enter the employee id"<<endl;
		cin>>emp[i].emp_id;
		cout<<"enter the salary"<<endl;
		cin>>emp[i].salary;
		cout<<"enter the employee band"<<endl;
		cin>>a;
		cout<<"enter the sale of the employee (10-500)"<<endl;
		cin>>emp[i].sale;
                cout<<"incentive gives to employee for current year";
		if(emp[i].sale>10 && emp[i].sale<=250)
			{
                         emp[i].incent.bonus=1000;
                         cout<<emp[i].incent.bonus<<endl;
                          emp[i].x=emp[i].incent.bonus;
                        }
                else if(emp[i].sale>250)
                        {
                        emp[i].incent.sale_ince=2500;             
                        cout<<emp[i].incent.sale_ince<<endl; 
                        emp[i].x=emp[i].incent.sale_ince;
                        } 
                else
                        emp[i].incent.prod_ince=3000;
                        cout<<emp[i].incent.prod_ince<<endl;  
                        emp[i].x=emp[i].incent.prod_ince;               

               }
              
               cout<<"complete employee record are:"<<endl;
               cout<<"name\t\t"<<"employee id\t"<<"employee band\t"<<"salary\t"<<"incentive given"<<endl;
               for(i=0;i<2;i++)
               {
                       cout<<emp[i].name<<"\t\t"<<emp[i].emp_id<<"\t\t"<<a<<"\t\t"<<emp[i].salary<<"\t"<<emp[i].x<<endl;
                       if (emp[i].sale>200)
                       {
                       emp[i].raise(emp[i].sale,emp[i].salary);
                       
                       }
                       else
                       cout<<"not enough sales made so salary is same as before:"<<emp[i].salary;
                       cout<<"\n";
                       }
                       getch();
 return 0;


}


