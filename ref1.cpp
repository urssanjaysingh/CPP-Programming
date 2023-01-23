/* A reference can be defined as an alternative name for a variable.
it is used to refer to existing variable. */

#include<iostream>
using namespace std;

// global variable
int n;

int& club()
{
    return n;
}

int main()
{
    // making call on L.H.S and assinging value
    club() = 75;
    cout << n;
    return 0;
}
