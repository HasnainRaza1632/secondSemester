#include <iostream>
using namespace std;

bool palidromeChecker(string str);

int main()
{
	string str;
	
	cout << "Enter any string: ";
	cin >> str;
	
	if(palidromeChecker(str))
	{
		cout << str << " is Palidrome.";	
	}	
	else 
	{
		cout << str << " is not-Palidrome.";
	}
	return 0;
}
bool palidromeChecker(string str)
{
	string tempstr = str; 
	
	for(int i = 0 , j = str.length() - 1; i < j ; i++, j--)
	{
			char temp = tempstr[i];
			tempstr[i] = tempstr[j];
			tempstr[j] = temp;
	}	
	
	if(tempstr == str)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
