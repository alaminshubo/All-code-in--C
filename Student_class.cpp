#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float marks[5];
    float totalMarks;
public:
    Student(string n, int roll, float m[5]){
        name=n;
        rollNumber=roll;
        for(int i = 0; i < 5; ++i) {
        marks[i] = m[i];
        totalMarks=0;
        }
        calculateTotalMarks();
    }
void calculateTotalMarks() {
        totalMarks = 0;
        for(int i = 0; i < 5; ++i) {
        totalMarks += marks[i];
        }
    }
void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: \n";
        for(int i = 0; i < 5; ++i) {
            cout << marks[i] << endl;
        }
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
    float calculatePercentage() const {
        return (totalMarks / 500) * 100;
    }
};

int main() {

    float marks1[5] = {80, 82, 86, 88, 90};
    float marks2[5] = {88, 82, 98, 80, 87};
    float marks3[5] = {68, 72, 59, 65, 70};

    Student student1("Al amin", 1011, marks1);
    Student student2("Akib", 1012, marks2);
    Student student3("Alif", 1013, marks3);

    cout << "Student 1:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Student 2:" << endl;
    student2.displayInfo();
    cout << endl;

    cout << "Student 3:" << endl;
    student3.displayInfo();
    cout << endl;

    return 0;
}
