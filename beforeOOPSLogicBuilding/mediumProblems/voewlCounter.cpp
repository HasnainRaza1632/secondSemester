#include <iostream>
using namespace std;

int vowelCounter(string name);
int main()
{
	string name;
	
	cout << "Enter Any string: ";
	cin >> name;
	
	cout << "Total voewls: " << vowelCounter(name);
	return 0;
}
int vowelCounter(string name)
{
	int count = 0 ;
	int vowelCount = 0 ;
	
	while(name[count] != '\0')
	{
		name[count] = toupper(name[count]);
		if(name[count] == 'A' || name[count] == 'E'  || name[count] == 'I'  || name[count] == 'O'  || name[count] == 'U' )
		{
			vowelCount++;
		}
		count++;
	}
	return vowelCount;
}
