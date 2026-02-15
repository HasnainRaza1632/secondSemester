#include <iostream>
using namespace std;
int binomialCofficient(int n , int r);
int fact(int x);

int main()
{
	int n , r ; 
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	cout << "Enter value of r: ";
	cin >> r ; 
	
	cout << "Binomial Cofficient : " << binomialCofficient(n,r);
	
	return 0;
}

int binomialCofficient(int n , int r)
{
	return fact(n) / (fact(n-r) * fact(r)) ; 
}

int fact(int x)
{
	int i , fac = 1 ;
	for(i = 1 ; i <= x ; i++)
	{
		fac *= i ; 
	}
	return fac;
}
