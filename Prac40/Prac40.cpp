#include <iostream>
using namespace std;

class Shape {
public:
    double length;
    double width;

    Shape(double l = 0, double w = 0) {

        length = l;
        width = w;
}   
void display()
    {
    cout << "Length: " << length << " Width: " << width << endl;
 }
};
class Rectangle : public Shape {
public:
    Rectangle(double l, double w) : Shape(l, w) {}
    double area()
    {
        return length * width;
    }
};
int main() 
{
    Rectangle rectangle(5.0, 4.0);
    cout << "Rectangle Details: " << endl;
    rectangle.display();
    cout << "Area: " << rectangle.area() << endl;