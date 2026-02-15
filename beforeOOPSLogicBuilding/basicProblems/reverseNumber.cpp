#include <iostream>
using namespace std;

int main()
{
	int n  , reverseNumber = 0; 
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	while(n > 0)
	{
		reverseNumber = reverseNumber + n%10 ;
		reverseNumber = reverseNumber * 10 ;
		n = n/10 ;
	}
		
		cout << "Reverse number: " << reverseNumber/10;
		return 0;
}
