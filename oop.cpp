#include<iostream>
using namespace std;

class Parent
{
    public:
    string name1="Harley";
};

// Inheritance: Properties of one class can be derived from others
class Child: public Parent
{
    public:
    string name2="Davidson";
};

int main()
{
    Child ch;
    cout << ch.name1 + " " + ch.name2;

    return 0;
}
