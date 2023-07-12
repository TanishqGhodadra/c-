#include<iostream>
using namespace std;

int main()
{
	int choice,A,B;
	do
	  {
	  	cout << "\t\t\t\t WELCOM TO OUR SYSTEM \n\n\n\n";
	  	
	  	cout << "1 => ADDITION\n";
	  	cout << "2 => SUBTRACTION\n";
	  	cout << "3 => MULTIPLCATION\n";
	  	cout << "4 => DIVITION\n";
	  	cout << "5 => MODULOS\n";
	  	cout << "6 => EXIT\n\n\n";
	  	
	  	cout << "ENTER YOUR CHOICE : \n";
	  	cin >> choice ;
	  	
	  	switch(choice)
	  	{
	  		case 1:
	  			cout << "A :";
	  			cin  >> A;
				cout << "B :" ;
	  			cin  >> B; 
				
				cout << A << "+" << B << "=" << A+B;
			    break;
			    
			  case 2:
	  			cout << "A :" ;
	  			cin  >> A;
				cout << "B :" ;
	  			cin  >> B; 
				
				cout << A << "-" << B << "=" << A-B;
			    break;
			    
			  case 3:
	  			cout << "A :" ;
	  			cin  >> A;
				cout << "B :" ;
	  			cin  >> B; 
				
				cout << A << "*" << B << "=" << A*B;
			    break;  
				   
				case 4:
	  			cout << "A :" ;
	  			cin  >> A;
				cout << "B :" ;
	  			cin  >> B; 
				
				cout << A << "/" << B << "=" << A/B;
			    break;    		
			    
			   case 5:
	  			cout << "A :" ;
	  			cin  >> A;
				cout << "B :" ;
	  			cin  >> B; 
				
				cout << A << "%" << B << "=" << A%B;
			    break; 
			    
			    case 6:
				break;
		} 
	  } while(choice!=6);
}

