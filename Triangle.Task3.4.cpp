#include <iostream>
using namespace std;
class Triangle {
private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int side1 , int side2 , int side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    void displayType() {
        if (side1 == side2 && side2 == side3) {
            cout << "TYPE : Equilateral" << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "TYPE : Isosceles" << endl;
        } else {
            cout << "TYPE : Scalene" << endl;
        }
    }
};

int main() {
    Triangle t1(6, 6, 6);
    Triangle t2(5, 5, 8);
    Triangle t3(2, 4, 7);

    t1.displayType();
    t2.displayType();
    t3.displayType();

    return 0;
}
