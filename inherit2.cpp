/* Multi-level Inheritance */
#include<iostream>
using namespace std;

class Chemistry
{
    public:
    int marks1;

    void Chemistry_marks()
    {
        cout << "Enter the marks scored in chemistry: ";
        cin >> marks1;
    }
};

class Physics: public Chemistry
{
    public:
    int marks2;

    void Physics_marks()
    {
        cout << "Enter the marks scored in physics: ";
        cin >> marks2;
    }
};

class Maths: public Physics
{
    public:
    int marks3;
    int total;

    void Maths_marks()
    {
        cout << "Enter the marks scored in maths: ";
        cin >> marks3;
    }
    void result()
    {
        total = marks1+marks2+marks3;
        cout << total;
    }
};

int main()
{
    Maths m;
    m.Chemistry_marks();
    m.Physics_marks();
    m.Maths_marks();
    m.result();

    return 0;
}
