#include<iostream>
#include<string.h>
using namespace std;

class market

{
	private:
		
		int number;
		string name;
		int Quantity;
		int Price;
		int Discount;
		
		public:
				int id1=101;
				int password1=290806;
			
			void verification()
			{
				int id2,password2;
				
				
				
				cout << "Enter your id2 :\n";
				cin >> id2;
				cout << "Enter your password2 :\n";
				cin >> password2;
				
				
				
				if (strcmp(id1 = id2) && strcmp(password1 = password2)==0)
				{
					cout << "id and password both are same :"
				}
				
				else 
				{
					cout << "id and password both are not same :"
				}
			}
			
			void setdata()
			{
				cout << "1) Item_number:\t";
				cin >> number;
				cout << "2) Item_name:\t";
				cin >> name;
				cout << "3) Quantity:\t";
				cin >> Quantity;
				cout << "4) Price:\t";
				cin >> Price;
				cout << "5) Discount:\t";
				cin >>Discount;
			}
			void getdata() 
			{	
				cout << "Item_number" << number <<endl
				     << "Item_name" << name << endl
				     << "Quantity"  << Quantity << endl
				     << "Price" << Price << endl
				     << "Discount" << Discount << endl;
				
			}
			
			
};

int main()
{
	market S;
	
	S.verification();
	S.setdata();
	S.getdata();
	
}




























