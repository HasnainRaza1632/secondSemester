#include <iostream>
using namespace std;

int main()
{
	int n ; 
	
	cout << "Enter any number: ";
	cin >> n ; 
	
	int i ; 
	
	for(i = 2 ; i <= n-1 ; i++)
	{
		if(n%i == 0)
		{
			cout << n << " is Composite" ;
			return 0;
		}
	}
	
	cout << n << " is Prime";
	
	return 0;
}
