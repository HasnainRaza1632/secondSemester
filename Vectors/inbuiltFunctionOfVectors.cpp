#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	vector<int> vec;
	
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	
	cout << "Size of vector after push_back : " << vec.size() << endl ;
	
	vec.pop_back() ; //Pop back delete last index element from vector.
	
	cout << "Size of vector After pop_back : " << vec.size() << endl ;
	
	cout << "First Index Value: " << vec.front() << endl;	
	cout << "Last index value: " <<vec.back() << endl;
	
	cout << "Print value at index 1 :" <<vec.at(1) << endl;
	
	//Using For each loop print all element in vector
	
	for(int val : vec)
	{
		cout << val << " " << endl ;
	}
	
	return 0;
}
