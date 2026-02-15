#include <iostream>
using namespace std;
int sumOfDigits(int x);

int main()
{
	int a ;
	
	cout << "Enter Any digits: ";
	cin >> a ; 
	
	cout << sumOfDigits(a);
	
	return 0;
}

int sumOfDigits(int x)
{
	int  sum = 0 ;
	
	while(x > 0)
	{
		int temp = x%10;
		sum = sum + temp;
		x = x / 10;
	}
	return sum;
}
