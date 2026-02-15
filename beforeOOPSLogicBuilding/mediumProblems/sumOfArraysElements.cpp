#include <iostream>
using namespace std;
int sumArr(int a[] , int size);

int main()
{
	int arr[] = {10,20,30};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Sum: " << sumArr(arr,size);
	return 0;
}
int sumArr(int a[] , int size)
{
	int sum = 0 ; 
	
	for(int i = 0 ; i < size ; i++)
	{
		sum += a[i];
	}
	return sum;
}
