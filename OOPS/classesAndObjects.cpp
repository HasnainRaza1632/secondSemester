#include <iostream>
using namespace std;


class Student {
	public: 
	string name; 
	int age;
	char grade;
	float gpa ; 
};

void print(Student s);
int main()
{
	Student s1;
	
	s1.name = "Hasnain";
	s1.age = 16 ;
	s1.grade = 'A' ;
	s1.gpa = 3.12 ; 
	
	Student s2; 
	
	s2.name = "Abdullah Shah"; 
	s2.age = 19 ; 
	s2.grade = 'A' ; 
	s2.gpa = 3.5 ; 
	
	print(s1);
	print(s2);
	
	return 0;
}

void print(Student s)
{
	cout << s.name << " " << s.age << " " << s.grade << " " << s.gpa << endl;
}
