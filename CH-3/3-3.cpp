#include<iostream>
using namespace std;

class  hotel
{
  private:
  
  		int Room_number;
  		string Name;
		 string Type ;
 		int Rating ;
		static string Location ;
		int Establish_year;
		string Staff_quantity;
		string Room_quantity;
		
		public:
			
			void setData()
			{
				cout << "Enter Room number\t :";
				cin >> Room_number;
				cout << "Enter Name \t :";
				cin >> Name;
				cout << "Enter \t Type:";
				cin >> Type;
				cout << "Enter Rating \t :";
				cin >> Rating ;
				cout << "Enter Establish_year \t :";
				cin >> Establish_year;
				cout << "\t Staff_quantity :";
				cin >> Staff_quantity;
				cout << "Enter Room_quantity\t :";
				cin >> Room_quantity;
			}
			
			void getData()
			{
				cout<<"Room_number :\t"<<Room_number<<endl<<"Name :\t"<<Name<<endl<<"Type :\t"<<Type<<endl
				<<"Rating :\t"<<Rating<<endl<<"Location :\t"<<Location<<"Establish_year :\t"<<Establish_year<<endl
				<<"Staff_quantity :\t"<<Staff_quantity<<endl<<"Room_quantity :\t"<<Room_quantity<<endl;
			}
};
string hotel :: Location  = "surat";
int main()
{
	int n;
	
	cout << "Enter number of hotel: ";
	cin >> n;
	
	hotel h[n];
	
	for(int i=0;i<n;i++)
	{
		h[i].setData();
	}
	for(int i=0;i<n;i++)
	{
		h[i].getData();
	}
}


