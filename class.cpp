/* A class basically represents a group of similar objects 
which holds its own data members and member functions together */
/* 
Access specifier : can be private, public or protected 
    Data members : variables
    Member functions : Methods to access data members */

#include<iostream>
using namespace std;

class Franchise
{
    public:
    void KFC()
    {
        cout << "We have the best chicken" << endl;
    }
    void BurgerKing()
    {
        cout << "We have the best burgers" << endl;
    }
};

/* Object can be defined as instance of a class and no memory
is allocated when we define a class. 
 When an object is created then the memory is allocated. */

int main()
{
    Franchise fran;
    fran.KFC();
    fran.BurgerKing();
    return 0;
}