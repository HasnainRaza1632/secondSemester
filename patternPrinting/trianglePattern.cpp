#include <iostream>
using namespace std;

int main()
{
	int n = 6 ; 
	int i , j ;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j <= i ; j++)
		{
			cout << "* " ;
		}
		cout << endl;
	}
	
	return 0;
}
