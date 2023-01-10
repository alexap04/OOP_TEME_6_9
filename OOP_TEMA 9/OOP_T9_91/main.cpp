#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw() { cout << "circle\n"; }
};

class Triangle : public Shape
{
public:
    void draw() { cout << "triangle\n"; }
};

class Drawing
{
private:
    Shape* _pShape;
public:
    Drawing(Shape* pShape) : _pShape(pShape) {}
    void drawShape()
    {
        _pShape->draw();
    }
};

int main()
{
    Drawing* d = new Drawing(new Triangle());
    d->drawShape();
    Drawing e(new Triangle());
    e.drawShape();
    Drawing f(new Circle());
    f.drawShape();
}
