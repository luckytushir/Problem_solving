#include<iostream>
using namespace std;

class a{
    public:
        void p1(){
            cout<<" i am a";
        }
};
class b{
    public:
        void p1(){
            // cout<<" i am b";
        }
};
class c:virtual public a,virtual public b
{
    
};


int main(){
    c obj;
    // obj.a::p1();// scope resoution operator to resolve ambugity
    // obj.b::p1();
    // obj.c::p1();
    obj.p1();

    return 0;
}