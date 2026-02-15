#include <iostream>
using namespace std;

int main()
{
	int n = 4 ; 
	int count = 1 ; 
	int i , j ;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j <= i ; j++)
		{
			cout << count<< " ";
		}
		count++;
		cout << endl;
	}
	return 0;
}
