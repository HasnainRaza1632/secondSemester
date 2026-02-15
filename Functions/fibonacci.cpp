#include <iostream>
using namespace std;
void fib(int n);

int main()
{
	int n ;
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	fib(n);
	return 0;
}

void fib(int n)
{
	int i , first = 0 , previous = 1 , sum ;
	
	for(i = 1 ; i <= n ; i++)
	{
		if(i == 1)
			cout << first << " ";
			
		else if(i == 2)
			cout << previous << " ";
		
		else
		{
			
			sum = first + previous ;
			first = previous ; 
			previous = sum ; 
		
			cout << sum << " " ;
		}
	}
}
