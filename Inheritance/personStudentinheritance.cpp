#include <iostream>
using namespace std;
class Person{
public: 
    string name;
    int age;

    void displayInfo()
    {
        cout << "Name: " << this->name << endl << "Age: " << this->age << endl;
    }

};

class Student : public Person{
public:
    int rollNumber;
    int marks;

    Student(string name , int rollnumber , int marks , int age)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
        this->rollNumber = rollnumber;
    }
    void displayStudent()
    {
        cout <<"Roll number: " << this->rollNumber << endl << "Name: " << this->name << endl << "Marks: " << this->marks << endl << "Age: " << this->age << endl; 
    }
};
int main()
{
    Student s1("Hasnain raza", 74708 , 88 , 17);
    s1.displayStudent();
    return 0;
}