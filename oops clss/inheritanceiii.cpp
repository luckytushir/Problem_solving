#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    // void show() {
    //     cout << "Class B" << endl;
    // }
};

class C : virtual public A {
public:
    // void show() {
    //     cout << "Class C" << endl;
    // }
};

class D : virtual public B, virtual public C {
public:
    // void show() {
    //     cout << "Class D" << endl;
    // }
};

int main() {
    D obj;
    // obj.A::show();  
    // obj.B::show();  
    // obj.C::show();  
    obj.show();     
    return 0;
}
