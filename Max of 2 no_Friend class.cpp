#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int x;
public:
    ClassA(int a) : x(a) {}
    friend class ClassB;  // Declare ClassB as a friend class
};

class ClassB {
private:
    int y;
public:
    ClassB(int b) : y(b) {}
    int findMax(ClassA a) {
        return (a.x > y) ? a.x : y;
    }
};

int main() {
    int x, y;
    cout << "Enter the first number (x): ";
    cin >> x;
    cout << "Enter the second number (y): ";
    cin >> y;

    ClassA objA(x);
    ClassB objB(y);

    int max = objB.findMax(objA);
    cout << "The maximum number is: " << max << endl;

    return 0;
}
