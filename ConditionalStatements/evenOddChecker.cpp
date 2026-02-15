#include <iostream>
using namespace std;

int main()
{
	int n ; 
	
	cout << "Enter any number: " ;
	cin >> n ; 
	
	if(n % 2 == 0)
	{
		cout << n << " is Even Number.\n";
	}
	else 
	{
		cout << n << " is Odd Number.\n";
	}
	
	return 0;
}
