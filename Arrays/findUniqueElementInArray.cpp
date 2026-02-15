#include <iostream>
using namespace std;
void unique(int arr[] , int size);

int main()
{
	int arr[] = {10,20,30,10,20};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	unique(arr,size);
	return 0;
}

void unique(int arr[] , int size)
{
	int i , j ; 
	
	for(i = 0 ; i < size - 1 ; i++)
	{
		bool isUnique = true ; 
		for(j = 0 ; j < size; j++)
		{
			if(i != j && arr[i] == arr[j])
			{
				isUnique = false;
				break;
			}
		}
		
		if(isUnique)
		{
			cout << arr[i] <<" ";
		}
	}
}
