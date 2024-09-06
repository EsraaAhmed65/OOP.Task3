#include <iostream>
using namespace std;
class Student
{
private:
     string name;
     string classx;
     int roll_number;
     float marks;
     char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
     }
public:
        Student(string name,string classx,int roll_number,float marks)
        {
            this->name = name;
            this->classx = classx;
            this->roll_number = roll_number;
            this->marks = marks;
        }
      void display() {
        cout << "  --------------------- "<<endl;
        cout << " |Student Information :|" << endl;
        cout << "  --------------------- "<<endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << classx << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};
int main()
{
    Student student("Esraa","12th Grade",42202,87.5);
    student.display();
    return 0;
}
