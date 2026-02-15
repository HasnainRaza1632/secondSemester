#include <iostream>
using namespace std;
int power(int x,int y);

int main()
{
	int x , y ;
	
	cout << "Enter Base: ";
	cin >> x ;
	
	cout << "Enter power: ";
	cin >> y;
	
	cout << power(x,y);
	return 0;
}

int power(int x , int y)
{
	int answer = 1 ;
	
	for(int i = 1 ; i <= y ; i++)
	{
		answer *= x;
	}
	return answer;
}
