#include <iostream>
using namespace std;

int main()
{
	int n = 4 ; 
	int i , j ;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = i ; j >= 0 ; j--)
		{
			cout << j + 1 <<  " ";
		}
		cout << endl;
	}
	return 0;
}
