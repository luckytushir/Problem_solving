#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    int age;

    private:
    int height;

    public:
    void setheight(int h){
        height = h;
    }
    void printheight(){
        cout<< height;
    }
};

class child:public parent{
    public:
    int weight;
    void print(){
    cout<< weight << " "<< age ;
    cout<<endl;
}
};


int main(){
    child t1;
    t1.weight = 90 ;
    t1.age = 19;
    t1.setheight(182);
    t1.print();
    t1.printheight();

    return 0;
}