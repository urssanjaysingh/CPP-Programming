/* Inheritance can be defined as a process in which objects of chile class
acquires properties and characteristics from the parent class */
/* Single Inheritance */
#include<iostream>
using namespace std;

class Beverage
{
    public:
    void drinks()
    {
        cout << "All drinks are available" << endl;
    }
};

class coffee: public Beverage
{
    public:
    void mocha()
    {
        cout << "Mocha tastes the best ";
    }
};

int main()
{
    coffee c;
    c.drinks();
    c.mocha();
    return 0;
}