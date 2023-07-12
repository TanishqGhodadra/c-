#include<iostream>
using namespace std;

class Time
{
		public:
			int s,HH,MM,SS;
			
				int inp()
				{
					cout << "Enter the second to convert in HH:MM:SS ";
					cin >> s;
					
					HH = s/3600;
					MM = (s-HH*3600)/60;
					SS = s-HH*3600-MM*60;
					
					cout <<"HH"<<HH<<endl<<"MM"<<MM<<endl<<"SS"<<SS<<endl;
				}
};

int main()
{
	Time T1;
	T1.inp();
}

