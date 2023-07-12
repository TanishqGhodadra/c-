#include<iostream>
using namespace std;

class student
{
	private:
		
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string college;
		
	public:
	
		void setdata()
		{
			cout << "id :\t";
			cin >> id;
			cout << "name :\t";
			cin >> name;
			cout << "age :\t";
			cin >> age;
			cout << "course :\t";
			cin >> course;
			cout << "city :\t";
			cin >> city;
			cout << "email :\t";
			cin >> email;
			cout << "college :\t";
			cin >> college;
			
		}
		
		void getdata()
		{
			cout <<"id\t:"<<id<<endl<<"name\t:"<<name<<endl<<"age\t:"<<age<<endl<<"course\t:"<<course<<endl<<"city\t:"<<city<<
			endl<<"email\t:"<<email<<endl<<"college\t:"<<college<<endl;
		}
		
};

int main()
{
	student s1;
	
	s1.setdata();
	s1.getdata();
}


