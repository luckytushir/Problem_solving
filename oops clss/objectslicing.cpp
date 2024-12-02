#include<iostream>
using namespace std;
class base {
    public:
        int basevalue;
        void display(){
            cout<<"base value:" << basevalue;
        }
};

class derived : public base{
    public:
        int derivedvalue;
        void display(){
            cout<<"derived values:" << derivedvalue;
        }
};
int main(){
    derived d;
    d.basevalue = 10;
    d.derivedvalue = 20 ;

    base b = d;
    b.display();
    return 0;
}