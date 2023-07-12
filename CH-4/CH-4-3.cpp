#include<iostream>
using namespace std;

class RBI
{
	protected:
		
	double dollar_rate = 82.61;
	double roi = 6.50;
		
	public :
		
		void getdata()
		{
			cout << "dollar \t:" << dollar_rate << endl
			<<"ROI \t:" << roi << endl;
		}
};

class SBI : public RBI
{
    public:
		
		double sbi_roi = roi + 1.1;
		
	public :
		
		void getSbiroi()
		{
			cout << "roi of SBI \t:" << sbi_roi << endl ;
		}
};

class BOB : public RBI
{
   public:
		
		double bob_roi = roi + 1.25;	
	public :
		
		void getBobroi()
		{
			cout << "roi of BOB \t:" << bob_roi << endl ;
		}
};

class ICICI : public RBI
{
    public:
		
		double icici_roi = roi + 0.5;
		
	public :
		
		void getIciciroi()
		{
			cout << "roi of ICICI \t:" << icici_roi << endl ;
		}
};

int main()
{
	SBI s;
	
	s.getdata();
	s.getSbiroi();
	
	BOB b;
	
	b.getdata();
	b.getBobroi();
	
	ICICI i;
	
	i.getdata();
	i.getIciciroi();
}

