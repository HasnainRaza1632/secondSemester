#include <iostream>
using namespace std;
void swap(int& a,int& b);

int main()
{
	int a , b ; 
	
	cout << "Enter value of a: ";
	cin >> a ;
	
	cout << "Enter value of b: ";
	cin >> b ; 
	
	swap(a,b);
	
	cout << "Value of A: " << a << endl << "Value of B: " << b ;
	return 0;
}
void swap(int& a,int& b)
{
	int temp = a ;
	a = b ; 
	b = temp ;
}
