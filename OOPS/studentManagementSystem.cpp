#include <iostream>
using namespace std;
class Student{
private:
    int rollNumber;
    string name;
    int marks[3];
public:
    Student(int rno , string name , int m[])
    {
        this->rollNumber = rno;
        this->name = name;
        for(int i = 0 ; i < 3 ; i++)
        {
            this->marks[i] = m[i];
        }
    }
    int calculateTotal()
    {
        int total = 0 ; 
        for(int i = 0 ; i < 3 ; i++)
        {
            total += this->marks[i];
        }

        return total;
    }

    float calculateAverage()
    {
        int total = 0 ;
        float avg; 
        for(int i = 0 ; i < 3 ; i++)
        {
            total += this->marks[i];
        }
        avg = total / 3; 
        return avg;
    }

    void calculateGrade()
    {
        for(int i = 0 ; i < 3 ; i++)
        {
            if(this->marks[i] >= 80)
            {
                cout << "Grade: A" << endl;
            }
            else if(this->marks[i] >= 70 && this->marks[i] <= 79)
            {
                cout << "Grade: B" << endl ;
            }
            else if(this->marks[i] >= 60 && this->marks[i] >= 69)
            {
                cout << "Grade: C" << endl ; 
            }
            else
            {
                cout << "Grade: F" << endl;
            }
        }
    }

    void displayResult()
    {
        cout << "Roll Number: " << this->rollNumber << endl << "Name: " << this->name << endl;
        for(int i = 0 ; i < 3 ; i++)
        {
            cout << "Subject " << i+1 << " marks: " << this->marks[i] <<endl;
        }
    }
};
int main()
{
    int marks[] = {72 , 73 , 81 };
    Student s1(74708, "Hasnain Raza" ,marks);
    return 0;
}