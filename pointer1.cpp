/* A pointer is an object that contains the address of another variable.
Refrence(&) operator returns the memory address of its operand.
Derefrence(*) operator provides the contents of an object 
pointed to by a pointer.*/
#include<iostream>
using namespace std;
int main()
{
    int val = 105;
    int *ptr;
    ptr = &val;
    cout << "Value of val is : " << val << endl;
    cout << "Value of ptr is : " << ptr << endl;
    cout << "Value of *ptr is : " << *ptr << endl;
    return 0;
}