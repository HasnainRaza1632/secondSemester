#include <iostream>
using namespace std;

int main()
{
	int n , sum = 0 , evenSum = 0 ; 
	
	cout << "Enter value of n: ";
	cin >> n ; 
	
	int i;
	
	while (i <= n)
	{
		if(i%2 != 0 )
		{
			sum += i;
		}
		else 
		{
			evenSum += i;	
		}
		i++;
	}
	
	cout << "Sum of OddNumbers: " << sum << endl;
	cout << "Sum of EvenNumbers: " << evenSum;
	return 0;
}
