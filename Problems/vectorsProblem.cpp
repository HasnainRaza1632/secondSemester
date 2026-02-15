#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num(5);
	
	for(int i = 0 ; i < 5 ; i++)
	{ 
		cin >> num[i];
	}
	
	cout<< "Even Numbers: ";
	
	for(int val : num)
	{
		if(val%2 == 0)
		{
			cout << val << " ";
		}
	}
	return 0;
}
