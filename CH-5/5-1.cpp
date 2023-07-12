#include<iostream>
using namespace std;

class Calculate
{
	public:
			void cla(int a, int b)
			{
				cout << "division : \t" << a/b << endl;
			}
		
			void cla(int a, int b, int c)
			{
				cout << "subtraction : \t" << a-b-c << endl;
			}
		
			void cla(int a, int b, int c, int d)
			{
				cout << "multiplication : \t" << a*b*c*d << endl;
			}
		
				void cla(int a, int b, int c, int d, int e)
			{
				cout << "addition : \t" << a+b+c+d+e << endl;
			}
		
};

int main()
{
	Calculate c;
	c.cla(100,20);
	c.cla(100,20,30);
	c.cla(10,20,30,40);
	c.cla(10,20,30,40,50);
	
}
