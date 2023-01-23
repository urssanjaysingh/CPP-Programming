/* A friend function is not a member fuction of a class 
and it is defined outside the class. 
It can access private, public and protected memebers of the class */
#include<iostream>
using namespace std;

class Salary
{
    private:
        int sal;

    friend int increment(Salary s);
};

int increment(Salary s)
{
    s.sal = 7000;
    return s.sal;
}

int main()
{
    Salary s;
    cout << "Increment is : ";
    cout << increment(s);
    return 0;
}
