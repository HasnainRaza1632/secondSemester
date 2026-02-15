#include <iostream>
using namespace std;
int main()
{
	int arr[] = {1,2,3,1,2};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 0 ; i < size ; i++)
	{
		int count = 1 ;
		for(int j = 0 ; j < size ; j++)
		{
			if(i != j && arr[i] == arr[j])
			{
				count++;
			}
		}
		cout << arr[i] << " ---> " << count << endl;
	}
	return 0;
}
