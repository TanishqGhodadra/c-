#include<iostream>
using namespace std;

class p
 		{
 			protected:
 				
 			double temperatur,f,k;
 			
 			public:
 				
			void setdata()
			{
			cout << "Enter temperatur in celcius :";
			cin >> temperatur;
		    }
		};
		
class q : protected p
		{
			public:
				void getdata()
				{
					f = (temperatur*9/5)+32;
					cout <<"f:"<<f;
				}
			
		};
		
class r : protected q
		{
			public:
				void getdata()
				{
					k = temperatur+273.15;
					cout <<"k:"<<f;
				}
		};
		
int main()
{
	      

	r r1;
	
	r1.setdata();
	r1.getdata();
	r1.getdata();
}
