#include <iostream>
using namespace std;

int main()
{
	//TOP
	
	int n = 4 ; 
	
	int i , j , k ;
	
	for(i = 0 ; i < n ; i++)
	{
		
		for(j = 0 ; j < n - i - 1 ; j++)
		{
			cout << " ";
		}
		
		cout << "*";
		
		for(k = 0 ; k < 2*i - 1 ; k++)
		{
			cout << " ";
		}
		if(i != 0)
		{
			cout << "*";
		}
		cout << endl;
	}
	
//BOTTOM
	
	for(i = 2 ; i >= 0 ; i--)
	{
		for(j = 0 ; j <= 2-i ; j++)
		{
			cout << " ";
		}
		
		cout << "*";
		
		for(k = 2*(i) - 1 ; k > 0 ; k--)
		{
			cout << " ";
		}
		
		if(i != 0  )
		{
			cout << "*";
		}
		
		cout << endl ;
	}
	
	return 0;
}
