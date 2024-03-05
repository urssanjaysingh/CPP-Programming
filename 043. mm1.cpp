/* Memory management can be defined as the process to manage 
a computer's memory i.e. assigning memory to program, variable
so that it doesn't affect the overall performance */

#include <iostream>
using namespace std;

int main()
{
    int* ptr1;
    int* ptr2;
    int* ptr3;

    int avg;

//the new operator in C++ is used for dynamic memory allocation
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout << "Enter first number: ";
    cin >> *ptr1;
    cout << "Enter second number: ";
    cin >> *ptr2;
    cout << "Enter third number: ";
    cin >> *ptr3;
    
    avg = (*ptr1 + *ptr2 + *ptr3)/3;
    cout << "Average is: " << avg << endl;

//the delete operator in C++ is used for deallocation of memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}