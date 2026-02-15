#include <iostream>
using namespace std;

int main()
{
	int a, b ;
	int choice;
	
	cout << "1)Sum\n2)Difference\n3)Division\n4)modulas\n" ; 
	cin >> choice;
	
	cout << "Enter Value of A: " ;
	cin >> a ;
	
	cout << "Enter Value of B: ";
	cin >> b ; 
	  
	switch(choice)
	{
		case 1:
			cout << "Sum: " << a + b ; 
			break;
		case 2:
			cout << "Difference: " << a - b ; 
			break;
		case 3:
			cout << "Division: " << a / b ;
			break;
		case 4:
			cout << "Modulas: " << a % b ;
			break;
		default:
			cout << "Invalid input";  
	}
	return 0;
}
