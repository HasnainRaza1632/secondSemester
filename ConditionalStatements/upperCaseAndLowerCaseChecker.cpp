#include <iostream>
using namespace std;

int main()
{
	char ch ; 
	
	cout << "Enter any character: ";
	cin >> ch ;
	
	if(ch >= 'a' && ch <= 'z')
	{
		cout << ch << " is in LowerCase.\n";
	}
	else
	{
		cout << ch << " is in UpperCase.\n";
	}
	
	return 0;
}
