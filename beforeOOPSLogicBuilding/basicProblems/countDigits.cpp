#include <iostream>
using namespace std;
int main()
{
	int n , countDigit = 0 ;
	
	cout << "Enter number :";
	cin >> n ;
	
	while(n > 0 )
	{
		countDigit++;
		n = n/10 ;
	}
	
	cout << countDigit;
	return 0;
}
