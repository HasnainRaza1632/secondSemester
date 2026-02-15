#include <iostream>
using namespace std;
void intercectionOfArray(int arr[],int arr2[],int sizeArr,int sizeArr2);
int main()
{
	int arr[] = {1,2,3,4,5,6};
	int arr2[] = {1,6,7,8,9,0};
	
	int sizeArr = sizeof(arr) / sizeof(arr[0]);
	int sizeArr2 = sizeof(arr2) / sizeof(arr2[0]);
	
	intercectionOfArray(arr,arr2,sizeArr,sizeArr2);
	return 0;
}

void intercectionOfArray(int arr[],int arr2[],int sizeArr,int sizeArr2)
{
	int i , j ;
	
	for(i = 0 ; i < sizeArr ; i++)
	{
		for(j = 0 ; j < sizeArr2 ; j++)
		{
			if(arr[i] == arr2[j])
			{
				cout << arr[i] << " ";
			}
		}
	}
}
