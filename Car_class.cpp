#include <iostream>

using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    float price;

public:
    Car(string mk, string mdl, int yr, float pr) {
        make=mk;
        model=mdl;
        year=yr;
        price=pr; }

    void displayInfo() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    void applyDepreciation(float depreciation) {
        price = price * (depreciation / 100);
    }

};

int main() {
    Car car1("Toyota", "Camry", 2000, 5000.0);
    Car car2("Ford", "Mustang", 1995, 12000.0);
    Car car3("Honda", "Civic", 2010, 8000.0);

    cout << "Car 1:" << endl;
    car1.displayInfo();
    cout << endl;

    cout << "Car 2:" << endl;
    car2.displayInfo();
    cout << endl;

    cout << "Car 3:" << endl;
    car3.displayInfo();
    cout << endl;

    car1.applyDepreciation(10);
    car2.applyDepreciation(15);
    car3.applyDepreciation(5);

    cout << "Car 1 after depreciation:" << endl;
    car1.displayInfo();
    cout << endl;

    cout << "Car 2 after depreciation:" << endl;
    car2.displayInfo();
    cout << endl;

    cout << "Car 3 after depreciation:" << endl;
    car3.displayInfo();
    cout << endl;

    return 0;
}
