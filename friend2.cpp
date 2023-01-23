/* A friend class is that class that can access the data members 
and member functions of a class to which it is a friend 
If the classes are declared friends, then all the members functions
of the class will be a friend function to the friend class */
#include<iostream>
using namespace std;

class Num2;

class Num1
{
    private:
        int n1;

    friend class Num2;

    public:
        Num1()
        {
            n1=11;
        }
};

class Num2
{
    private: 
        int n2;

    public:
        Num2()
        {
            n2=65;
        }

int avg()
{
    Num1 obj1;
    return (obj1.n1 + n2)/2;
}

};

int main()
{
    Num2 obj2;
    cout << "Average is : ";
    cout << obj2.avg();
    return 0;
}