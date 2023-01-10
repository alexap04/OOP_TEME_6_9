#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area() = 0;
};

class Circle : public Shape
{
private:
    double _radius;
public:
    Circle(double radius) : _radius(radius) {}
    double area() { return 3.14159265 * _radius * _radius; }
};

class Rectangle : public Shape
{
private:
    double _width;
    double _height;
public:
    Rectangle(double width, double height) : _width(width), _height(height) {}
    double area() { return _width * _height; }
};

class Square : public Shape
{
private:
    double _side;
public:
    Square(double side) : _side(side) {}
    double area() { return _side * _side; }
};

int main()
{
    Circle c(3.0);
    cout << "Circle area: " << c.area() <<endl;
    Rectangle r(2.0, 4.0);
    cout << "Rectangle area: " << r.area() <<endl;
    Square s(6.0);
    cout << "Square area: " << s.area() <<endl;
}
