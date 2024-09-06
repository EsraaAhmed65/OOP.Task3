#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string name , int employeeID)
    {
        this->name = name;
        this->employeeID = employeeID;
    }
    void setPerformance(float performanceRating) {
        if (performanceRating >= 4.5) {
            salary = 50000;
        } else if (performanceRating >= 3.5) {
            salary = 35000;
        } else {
            salary = 25000;
        }
    }
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
        cout << endl <<"-------------------------------"<<endl;
    }
};

int main() {

    Employee employee1("Esraa", 1234);
    employee1.setPerformance(4.5);
    employee1.display();

    Employee employee2("Ahmed", 2345);
    employee2.setPerformance(4.2);
    employee2.display();

    Employee employee3("Mariam", 5678);
    employee3.setPerformance(3.4);
    employee3.display();


    return 0;
}
