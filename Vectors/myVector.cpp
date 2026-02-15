#include <iostream>
using namespace std;

class Vector{
public:
	int size;
	int capacity;
	int* arr;
	
	Vector()
	{
		size = 0 ;
		capacity = 1;
		arr = new int[1];
	}
	
	void add(int element)
	{
		if(size == capacity)
		{
			capacity *= 2;
			int* arr2 = new int[capacity];
			for(int i = 0 ; i < size ; i++)
			{
				arr2[i] = arr[i];
			}
			arr = arr2;
		}
		arr[size++] = element;
	}
	
	void print()
	{
		for(int i = 0 ; i < size ; i++)
		{
			cout << arr[i] << " " ;
		}
		cout << endl;
	}
	
	void back()
	{
		if(size == 0 )
		{
			cout << "Array is empty.";
			return;
		}
		size --;
	}
	
	int get(int index)
	{
		if(index >= size || index < 0)
		{
			cout << "Invalid index.";
			return -1;
		}
		return arr[index];	
	}
};
int main()
{
	Vector v;
	
	v.add(10);
	v.add(12);
	v.add(14);
	v.add(15);
	v.print();
	v.back();
	v.print();
	cout << v.get(2);
	
	return 0;
}
