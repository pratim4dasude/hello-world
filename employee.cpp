#include <iostream>

using namespace std;

class employee
{
	int   emp_id;
	char  emp_name[20];
	float emp_sal;
    public:

    employee()
    {
        emp_id=0;
        emp_name[20]='\u0000';
        emp_sal=0.0;
    }

    employee(int a,char c[20],float s)
    {
        emp_id=a;
        emp_name[20]=c[20];
        emp_sal=s;
    }
    employee(employee &e)
    {
        emp_id=e.emp_id;
        emp_name[20]=e.emp_name[20];
        emp_sal=e.emp_sal;
    }


	public:

	void show()
    {
    cout<<"\n\nDetails of  Employee ";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_id;
	cout<<"\nBasic salary       :  "<<emp_sal;

    }
};



int main()
{
    //employee e;
    int a;
    char c[20];
    float s;
    cout<<"\nEnter employee number: ";
	cin>>a;
	cout<<"\nEnter employee name: ";
	cin>>c;
	cout<<"\nEnter employee basic: ";
	cin>>s;
    
    employee e1(a,c,s);
    employee e2(e1);
    e2.show();
  

    return 0;
}
