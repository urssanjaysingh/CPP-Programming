/* Encapsulation can be defined as wrapping up data 
and function together into a single unit, helps in hiding */

#include<iostream>
using namespace std;

class Company
{
    private:
    int salary;
    
    public:
    void setSalary(int fulltime, int overtime)
    {
        salary = fulltime + overtime;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Company obj;
    obj.setSalary(30000, 6000);
    cout << "Total salary: ";
    cout << obj.getSalary();
    return 0;
}