#include <iostream>
using namespace std;
int sumOfN(int n);

int main()
{
	int n ; 
	
	cout << "Enter value of n: ";
	cin >> n;
	
	cout << sumOfN(n);
	return 0;
}

int sumOfN(int n)
{
	int i , sum = 0 ;
	for(i = 1 ; i <= n ; i++)
	{
		sum += i ;
	}
	
	return sum;
}
