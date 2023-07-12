#include<iostream>
using namespace std;

class square
{
	private:
	 int a,square;
	 
	 public:
	 	
	 void getdata()	
	 {
	 	cout << "Enter a:\t";
	 	cin >> a;
			
		cout << "Squre : \t" << a*a << endl;	
	 }
};

class cube
{
	private:
	 int a,cube;
	 
	 public:
	 	
	 void getdata()	
	 {
	 	cout << "Enter a:\t";
	 	cin >> a;
			
		cout << "cube : \t" << a*a*a << endl;	
	 }
};

int main()
{
	square S;
	S.getdata();
	cube C;
	C.getdata();
}
