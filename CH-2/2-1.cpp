#include<iostream>
using namespace std;

class employee
{
	private:
		int id;
		string name;
		int age;
		int mobilnum;
	    string role;
	    string city;
    	int exeperience;
	    string companyname;
	    
	    public:
	    	void input()
	    	{
	    		cout << "id :\t";
	    		cin >> id;
				cout << "name :\t";
	    		cin >> name;
				cout << "age :\t";
	    		cin >> age;
	    		cout << "mobilnum :\t";
	    		cin >> mobilnum;
	    		cout << "role :\t";
	    		cin >> role;
	    		cout << "city :\t";
	    		cin >> city;
	    		cout << "exeperience :\t";
	    		cin >> exeperience;
	    		cout << "companyname :\t";
	    		cin >> companyname;
	    		
			}
			
			void output()
			{
				cout << "id \n" ;
				cout << "name \n" ;
				cout << "age \n" ;
				cout << "mobilnum \n" ;
				cout << "role \n" ;
				cout << "city \n" ;
				cout << "exeperience \n" ;
				cout << "companyname \n";
			}
			
			
};

int main()
{
	employee E1;
	
	E1.input();
	E1.output();
}

