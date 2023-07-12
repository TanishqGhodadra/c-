#include<iostream>
using namespace std;

int main()
{
	int n1,n2,i;
	
	cout << "Enter the starting years : ";
	cin >> n1;
	
	cout << "Enter the ending years : ";
	cin >> n2;
	
	for(i=n1; i<=n2;i++)
	{
		if((i%4==0)|| (i%1!=0))
		{
			cout << i <<endl;
		}
	}
}
