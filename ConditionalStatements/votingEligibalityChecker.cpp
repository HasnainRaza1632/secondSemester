#include <iostream>
using namespace std;

int main()
{
	int age ;
	
	cout << "Enter your age: ";
	cin >> age ; 
	
	
	if(age >= 18 )
	{
		cout << "You are Eligible for Vote.\n";
	}
	else if (age < 0 )
	{
		cout << "Invalid age.\n";
	}
	else 
	{
		cout << "You are not-Eligible for vote.\n";
	}
	
	return 0;
}
