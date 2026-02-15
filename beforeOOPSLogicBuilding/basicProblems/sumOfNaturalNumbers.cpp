#include <iostream>
using namespace std;
int main()
{
	int n , sum ; 
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	for(int i = 1 ; i <= n ; i++ )
	{
		sum += i ; 
	}
	
	cout << sum ;
	return 0;
}
