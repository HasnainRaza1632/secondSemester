#include <iostream>
using namespace std;
int maximumNumber(int a, int b, int c);
int main()
{
	int a , b , c;
	
	cout << "Enter value of a: ";
	cin >> a ;
	
	cout << "Enter value of b: ";
	cin >> b ;
	
	cout << "Enter value of c: ";
	cin >> c ;
	
	cout << "Maximum is: " << maximumNumber(a,b,c);
	return 0;
}

int maximumNumber(int a , int b , int c)
{
	if(a > b && a > c)
	{
		return a;
	}
	else if(b > a && b > c)
	{
		return b; 
	}
	else if(c > a && c > b)
	{
		return c;
	}
}
