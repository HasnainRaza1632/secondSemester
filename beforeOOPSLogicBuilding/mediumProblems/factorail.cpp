#include <iostream>
using namespace std;
int factorial(int n);

int main()
{
	int n ; 
	
	cout << "Enter any number: ";
	cin >> n ; 
	
	cout << factorial(n);
	return 0;
}

int factorial(int n)
{
	if(n == 1)
	{
		return 1;
	}
	
	return n * factorial(n-1);
}
