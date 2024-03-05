/* Constructors are the member function of a class, and it has the same name as that of the class. 
It can be defined iside the class and outside the class, as well using the scope resolution operator (::) */
/*  constructor doesn't have a return type, unlike function. 
    The name of constructor must be of the same name as that of the class */
#include<iostream>
using namespace std;

class Gambit
{
    public:
    Gambit()
    {
        cout << "Hello there i'm in constructor " << endl;

    }
    ~Gambit()
    {
        cout << "Hello there i'm in destructor " << endl;
    }
    void display()
    {
        cout << "Hello! " << endl;
    }
};

int main()
{
    Gambit gam;
    gam.display();

    return 0;
}
