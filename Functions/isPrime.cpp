#include <iostream>
using namespace std;
bool isPrime(int n);

int main()
{
	int n ;
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	if(isPrime(n))
	{
		cout << "Prime Number";
	}
	else 
	{
		cout << "Composite Number";
	}
	return 0;
}

bool isPrime(int n)
{
	int i ; 
	
	for(i = 2 ; i < n ; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	
	return true ;
}
