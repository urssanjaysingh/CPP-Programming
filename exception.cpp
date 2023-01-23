/* Exceptions handling helps in dealing with exceptions
by transferring the control from one part of the program 
to another. */

#include<iostream>
using namespace std;

int main()
{
    int age = 20;

//try blocks are used to enclose the statements which may cause the exceptions
//catch block catches the exception thrown from the try block 
    try
    {
        if(age >= 24)
        {
            cout << "You have the access to drink the alcohol! ";
        }
        else
        {
            //throw statement is used to throw an exception and its value
            // to a consecutive exception handler
            throw(age); 
        }
    }
    catch(int age)
    {
        cout << "You don't have the access to drink alcohol because your age is less than 24\n";
        cout << "Your age is: " << age;
    }
    return 0;
}
