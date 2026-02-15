#include <iostream>
using namespace std;

class Person{
public:
	string name;
	int age;
	Person(string name , int age)
	{
		this->name = name;
		this->age = age;
	}
};
void print(Person p)
{
	cout << p.name << " " << p.age << endl ;
}
int main()
{
	Person p1("Hasnain Raza" , 16);
	Person p2("Nawaz Ali" , 17);
	Person p3("Abdullah Shah" , 19);
	
	print(p1);
	print(p2);
	print(p3);
	
	return 0;
}
