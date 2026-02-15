#include <iostream>
using namespace std;

int main()
{
	int n = 4 ;
	
	int i , j , k , l;
	
	//TOP
	
	for(i = 0 ; i <= n ; i++)
	{
		//stars 
		
		for(j = 0 ; j < i ; j++)
		{
			cout << "*";
		}
		//spaces
		for(k = 0 ; k < 2*(n-i) ; k++)
		{
			cout << " ";
		}
		//stars
		
		for(l = 0 ; l < i ; l++)
		{
			cout << "*";
		}
		
		cout << endl;
	}
	
	//BOTTOM 
	
	for(i = 0 ; i <= n ; i++)
	{
		for(j = 0 ; j < n - i ; j++)
		{
			cout << "*";
		}
		
		for(k = 0 ; k < 2*i ; k++)
		{
			cout << " ";
		}
		
		for (l = 0 ; l < n-i ; l++)
		{
			cout << "*";
		}
		
		cout << endl;
	}
	return 0;
}
