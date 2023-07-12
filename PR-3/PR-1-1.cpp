#include<iostream>
using namespace std;

class val
{
	public:
		
		int w,h;
		
		public:
			
			val()
			
			{
				cout << "Enter w:\t";
				cin >> w;
				cout << "Enter h:\t";
				cin >> h;
			}
};

class rectengle : public val
{
	int rectengle;
		
		public:
			
			void rec()
			{
				rectengle = w*h;
				cout << "ans is:\t" << rectengle<<"\n" ;
			}
			
};

class triangle : public val
{
	int triangle;
		
		public:
			
			void tri()
			{
				triangle = (0.5) * w*h;
				cout << "ans is:\t" << triangle ;
			}
			
};

int main()
{
	rectengle R;
	R.rec();
	triangle T;
	T.tri();
}
//private
