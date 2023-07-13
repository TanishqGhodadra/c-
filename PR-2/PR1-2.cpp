#include<iostream>
#include<string.h>
using namespace std;

class market

{
	private:
		
		int number;
		string name;
		int Quantity;
		int Price;
		int Discount;
		
		public:
		
			void verification()
			{
	            char user_id[20] ="Tanishq";
	        	char user_password[20] = "Tanishq@07";
	        	char user_id1[20];
	           	char user_password1[20];
		
		        cout << "Enter user id :\t ";
		        cin >> user_id1;
		        cout << "Enter user password:\t ";
		        cin >> user_password1;
		
		            if ( (strcmp(user_id,user_id1) == 0)&&(strcmp(user_password,user_password1) ==0) )
		               {
			            cout << "*****you login succesfuiiy***** : ";
		               }
		             else
		                {
		                 cout << "*****something wrong***** : ";
		                }
	        }
	        
	        void io()
	        {
	        	int choice;
	        	
	        	do
	            	{
	  					cout << "\n\n\n\n\t\t\t\t WELCOM TO OUR SYSTEM \n\n\n\n";
	  	
	  					cout << "1 => vegitable \n ";
	  					cout << "2 => electroinc \n";
	  					cout << "3 => frutes \n";
	  					cout << "4 => stationery \n";
	  					cout << "5 => grocery \n";
	  					cout << "6 => EXIT\n\n\n";
	  		
	  					cout << "ENTER YOUR CHOICE : \n";
	  					cin >> choice ;
	  	
	  					switch(choice)
	  					{
	  						case 1:
	  								cout << "1) Item_number: \t";
									cin >> number;
									cout << "2) Item_name:\t";
									cin >> name;
									cout << "3) Quantity:\t";
									cin >> Quantity;
									cout << "4) Price:\t";
									cin >> Price;
									cout << "5) Discount:\t";
									cin >>Discount;
									break;
								
								case 2:
	  								cout << "1) Item_number:\t";
									cin >> number;
									cout << "2) Item_name:\t";
									cin >> name;
									cout << "3) Quantity:\t";
									cin >> Quantity;
									cout << "4) Price:\t";
									cin >> Price;
									cout << "5) Discount:\t";
									cin >>Discount;
									break;
								
								case 3:
	  								cout << "1) Item_number:\t";
									cin >> number;
									cout << "2) Item_name:\t";
									cin >> name;
									cout << "3) Quantity:\t";
									cin >> Quantity;
									cout << "4) Price:\t";
									cin >> Price;
									cout << "5) Discount:\t";
									cin >>Discount;
									break;
								
								case 4:
	  								cout << "1) Item_number:\t";
									cin >> number;
									cout << "2) Item_name:\t";
									cin >> name;
									cout << "3) Quantity:\t";
									cin >> Quantity;
									cout << "4) Price:\t";
									cin >> Price;
									cout << "5) Discount:\t";
									cin >>Discount;
									break;
								
								case 5:
	  								cout << "1) Item_number:\t";
									cin >> number;
									cout << "2) Item_name:\t";
									cin >> name;
									cout << "3) Quantity:\t";
									cin >> Quantity;
									cout << "4) Price:\t";
									cin >> Price;
									cout << "5) Discount:\t";
									cin >>Discount;
									break;
								
								case 6:
									break;
						}
							
	  } while(choice!=6);
			}
};

			
int main()
{
	market S;
	
	S.verification();
	S.io();
}

