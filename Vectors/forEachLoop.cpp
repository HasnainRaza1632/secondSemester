#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec = {1,2,5,10,12};
	
	for(int val : vec)
	{
		cout << val << " " ;
	}
	return 0;
}
