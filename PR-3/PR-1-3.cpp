#include<iostream>
using namespace std;

class A
		{
				protected :
					
					int id;
					string name;
					string role;
					int salary;
					int experience;
					string comp_name;
					string address;
					string email;
					int contact;
					
				public:
					
					void setdata1()
						{
							cout << "Enter your id: ";
							cin >> id;
							cout << "Enter your name: ";
							cin >> name;
							cout << "Enter your role: ";
							cin >> role ;
						}	
		};
		
class B: public A
		{
        	public:
				
				void setdata2()
					{
                    	cout << "Enter your salary: ";
						cin >> salary;	 
						cout << "Enter your experience: ";
						cin >> experience;	 					
					}   	
		};
		
class C: public B
		{
			public:
				void setdata3()
				{
					cout << "Enter your comp_name: ";
					cin >> comp_name;
					cout << "Enter your address : ";
					cin >> address;
				}
				
				void getdata1()
				{
					cout << "Enter your name: " << name << endl 
					<< "Enter your role: " << role << endl
					<< "Enter your salary: " << salary << endl;
				}
		};
		
class D: public C
		{
			public:
				void setdata4()
				{
					cout << "Enter your email: ";
					cin >> email;
					cout << "Enter your contact(must be have 10 number) : ";
					cin >> contact;
				}
				
				void getdata2()
				{
					cout << "Enter your id: " << id << endl
					<< "Enter your name: " << name << endl
					<< "Enter your role: " << role << endl
					<< "Enter your salary: " << salary << endl
					<< "Enter your experience: " << experience << endl
					<< "Enter your comp_name: " << comp_name << endl
					<< "Enter your address : " << address << endl
					<< "Enter your email: " << email << endl
					<< "Enter your contact: " << contact << endl;
				}
				
		};		
		
		
int main()
{
	A	a;
	B	b;
	C	c;
	D	d;
	
	a.setdata1();
	b.setdata2();
	c.setdata3();
	d.setdata4();
	
	d.getdata2();
	
}
