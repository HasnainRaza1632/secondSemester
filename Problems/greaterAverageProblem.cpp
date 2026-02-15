#include <iostream>
#include <vector>
using namespace std;

int greaterAverage(vector<int> vec);

int main()
{
	vector<int> vec = {2 , 4 , 6 , 8};
	cout << "Average: "<<greaterAverage(vec);
	return 0;
}

int greaterAverage(vector<int> vec)
{
	int average = 0 , sum = 0 , count = 0 ;
	
	for(int val : vec)
	{
		sum = sum + val ;
	}
	
	average = sum / vec.size();
	
	for(int val : vec)
	{
		if(val > average)
		{
			count++;
		}
	}
	cout << "Output: " << count <<endl;
	
	return average;
}
