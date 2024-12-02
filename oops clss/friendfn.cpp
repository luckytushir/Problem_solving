#include <iostream>
using namespace std;

class Numbers {
private: // here
    int a, b;

public:
    void setValues(int num1, int num2) {
        a = num1;
        b = num2;
    }

    friend int sum(Numbers n);
};

int sum(Numbers n) {
    return n.a + n.b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Numbers number;
    number.setValues(num1, num2); 
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum(number) << endl;

    return 0;
}
