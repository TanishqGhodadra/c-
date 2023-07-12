#include<iostream>
using namespace std;

class x
	{
		protected:
		int a,b,c,sum;	 
	};
	
class y: protected x 
    {
	    public:
	    	
	    	void setdata()
	    	{
	    		cout << "Enter a:";
	    		cin >> a;
	    		cout << "Enter b:";
	    		cin >> b;
	    		cout << "Enter c:";
	    		cin >> c;
			}
		
			void getdat()
			{
				sum = (a*a*a)+(b*b*b)+(c*c*c);
				cout << "sum:"<<sum;
			}
	};	
	
int main()
{
	y Y1;
	
	Y1.setdata();
	Y1.getdat();
	}	
