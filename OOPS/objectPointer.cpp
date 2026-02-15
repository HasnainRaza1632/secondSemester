#include <iostream>
using namespace std;
class Student{
public:
	string name ;
	int age;
	char grade;
	
	Student(string name , int age , char grade)
	{
		this->name = name ;
		this->age = age;
		this->grade = grade;
	}
};
int main()
{
	Student s1("Hasanin Raza" , 17 , 'A');
	
	Student* p = &s1;
	
	cout << (*p).age << endl;
	(*p).age = 16;
	cout << (*p).age;
	
	return 0;
}
