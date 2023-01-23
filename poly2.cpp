#include<iostream>
using namespace std;

class Parent
{
    public:
    void print()
    {
        cout << "This is the function of base class";
    }
};

class child: public Parent
{
    public:
    void print()
    {
        cout << "This is the function of derived class";
    }
};

int main()
{
    child obj;
    obj.print();
    return 0;
}
