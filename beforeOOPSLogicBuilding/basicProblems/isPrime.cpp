#include <iostream>
using namespace std;
int main()
{
	int n ; 
	bool isPrime = true;
	 
	cout << "Enter value of n:";
	cin >> n ; 
	
	for(int i = 2 ; i < n ; i++)
	{
		if(n%i == 0 )
		{
			isPrime = false;
			break;
		}
	}
	//ONLY FOR POSITIVE NUMBERS
	
	if(isPrime)
	{
		cout << n << " is a Prime number.";
	}
	else 
	{
		cout << n << " is a composite number.";
	}
	return 0;
}
