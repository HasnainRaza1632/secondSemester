#include <iostream>
using namespace std;

int main()
{
	int n = 3 ;
	int count = 0;
	int i , j ; 
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			count++;
			cout << count << " ";
		}
		cout << endl;
	}
	return 0;
}
