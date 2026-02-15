#include <iostream>
using namespace std;
int fact(int n);

int main()
{
	int n ; 
	
	cout << "Enter Value of n: ";
	cin >> n;
	
	cout << "Factorial of "<<n << " is: " <<fact(n);
}

int fact(int n)
{
	int i , fac = 1 ;
	for(i = 1 ; i <= n ; i++)
	{
		fac *= i;
	}
	
	return fac;
}
