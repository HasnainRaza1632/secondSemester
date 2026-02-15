#include <iostream>
#include <vector>
using namespace std;

int secondLarge(vector<int>& nums);
int main()
{
	vector<int> vec = {10 , 17 , 30 , 16};
	cout << secondLarge(vec);
	return 0;
}

int secondLarge(vector<int>& nums)
{
	int second_large = nums.at(0);
	int largeNumber = nums.at(0);
	
	for(int val : nums)
	{
		if(largeNumber < val)
		{
			largeNumber = val;
			
		}
	} 
	
	for(int val : nums)
	{
		if(second_large < val && largeNumber != val)
		{
			second_large = val;
		}
	}
	return second_large ; 
}
