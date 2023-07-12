#include<iostream>
using namespace std;

class Circket
{
	private:
		int T20_total_over , TEST_total_over;
			
		public:
			
			void match()
			    {
					cout << "TOTAL OVER OF THIS MATCH :\n\n";
				}	
};

class T20match : public Circket
{
		public :
			
			void t20()
			{
				cout << "TOTAL OVER OF T20 MATCH IS : 20(per inning) \n\n";
			}
};
class TESTmatch : public Circket
{
		public :
			
			void test()
			{
				cout << "TOTAL OVER OF TEST MATCH IS : 90(per day) \n\n";
			}
};

int main()
{
	Circket c;
	c.match();
	
	T20match t;
	t.t20();
	
	TESTmatch T;
	T.test();
}
