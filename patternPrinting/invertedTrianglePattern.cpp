#include <iostream>
using namespace std;

int main()
{
	int n = 4 ; 
	int i , j , k; 
	int count = 1 ;
	
	for (i = n ; i > 0 ; i--)
	{
		for(k = 0 ; k < count - 1 ; k++)
		{
			cout << " ";
		}
		
		for(j = 0 ; j < i ; j++)
		{
			cout << count;
		}
		
		count++;
		cout << endl;
	}
	return 0;
}
