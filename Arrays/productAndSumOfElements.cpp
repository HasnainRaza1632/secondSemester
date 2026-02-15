#include <iostream>
using namespace std;
int sumOfElements(int arr[],int size);
int productOfElements(int arr[],int size);

int main()
{
	int arr[] = {1,2,3,4,5,6,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	 
	cout << sumOfElements(arr,size) << endl;
	cout << productOfElements(arr,size);
	return 0;
}

int sumOfElements(int arr[],int size)
{
	int i , sum = 0 ; 
	
	for(i = 0 ; i < size ; i++)
	{
		sum += arr[i];
	}
	
	return sum;
}

int productOfElements(int arr[] , int size)
{
	int i , product = 1 ; 
	
	for(i = 0 ; i < size ; i++ )
	{
		product *= arr[i];
	}
	return product;
}
