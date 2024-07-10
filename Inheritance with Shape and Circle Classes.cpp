#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Shape {
protected:
    string color;

public:
    Shape(string c) {
    color=c;
     }

    virtual void display() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(string c, float r) : Shape(c), radius(r) {}

    float getArea() const {
        return M_PI * radius * radius;
    }

    float getCircumference() const {
        return 2 * M_PI * radius;
    }
    void display() override {
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Circumference: " << getCircumference() << endl;
    }
};

int main() {

    Circle circle("Red", 5.0);

    circle.display();

    return 0;
}
