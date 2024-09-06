#include <iostream>
using namespace std;
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double width, double height)
    {
     this->width = width;
     this->height = height;
    }
    virtual double area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : Shape(width, height){}

    double area() {
        return width * height;
    }
};
class Triangle : public Shape {
public:
    Triangle(double width, double height) : Shape(width, height){}
    double area() {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rectangle(10.0, 5.0);
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    Triangle triangle(10.0, 5.0);
    cout << "Area of Triangle: " << triangle.area() << endl;
    return 0;
}
