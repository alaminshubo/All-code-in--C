#include <bits/stdc++.h>
using namespace std;

class point {
private:
    int num1;

public:
    point(int x = 0) {
        num1 = x;

    }

    point operator+(point n) {
        return point(num1 + n.num1);
    }

    void print() {
        cout <<"\nAns : "<<num1<< endl;
    }
};

int main() {
    point p1(5);
    point p2(7);
    point p3(5);

    point sum = p1 + p2 + p3;

    cout << "Result of p1 + p2 + p3 ";
    sum.print();

    return 0;
}
