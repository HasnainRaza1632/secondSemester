#include <iostream>
using namespace std;

int main()
{
	int n  , reverseNumber = 0; 
	cout << "Enter value of n: ";
	cin >> n ; 
	
	int temp = n ;
	
	while(temp > 0)
	{
		reverseNumber = reverseNumber + temp%10 ;
		reverseNumber = reverseNumber * 10 ;
		temp = temp/10 ;
	}
	
	int result =  reverseNumber/10 ;
	
	if(n == result)
	{
		cout << "Number is Palidrome.";
	}
	else
	{
		cout << "Number is not Palidrome.";
	}
		return 0;
}
