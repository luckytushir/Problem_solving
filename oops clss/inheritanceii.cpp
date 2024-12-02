#include <bits/stdc++.h>
using namespace std;

class human
{
public:
    int age;
};

class child : private human
{
public:
    int height;

public:
    void setage(int a)
    {
        age = a;
    }
    void printage()
    {
        cout << age;
    }
};

int main()
{
    child c;
    c.height = 182;
    cout << c.height;
    cout << endl;
    c.setage(19);
    c.printage();

    return 0;
}
