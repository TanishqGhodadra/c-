#include<iostream>
using namespace std;

class customer
{
	private:
		
		int id;
		string name;
		int age;
		string city;
		int mobile_number;
		int simcard_validity;
		string telecom_brand_name;
		
	public:
	
		void setdata()
		{
			cout << "id :\t";
			cin >> id;
			cout << "name :\t";
			cin >> name;
			cout << "age :\t";
			cin >> age;
			cout << "city :\t";
			cin >> city;
			cout << "mobile_number :\t";
			cin >> mobile_number;
			cout << " simcard_validity:\t";
			cin >> simcard_validity;
			cout << "telecom_brand_name :\t";
			cin >> telecom_brand_name;
			
		}
		
		void getdata()
		{
			cout <<"id\t:"<<id<<endl<<"name\t:"<<name<<endl<<"age\t:"<<age<<endl<<"city\t:"<<city<<endl<<"mobile_number \t:"<<mobile_number <<
			endl<<"simcard_validity\t:"<<simcard_validity<<endl<<"telecom_brand_name:"<<telecom_brand_name<<endl;
		}
		
};

int main()
{
	customer c1;
	
	for(int i=1;i=5;i++)
	{
	
	c1.setdata();
	c1.getdata();
    }
}
