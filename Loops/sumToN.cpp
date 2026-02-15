#include <iostream>
using namespace std;

int main()
{
	int n , sum = 0 ; 
	
	cout << "Enter Value :";
	cin >> n ; 
	
	int i ; 
	for(i = 1 ; i <= n ; i++)
	{
		sum += i ;
	}
	cout << "Sum: " <<sum;
	
	return 0;
}
