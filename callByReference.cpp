/* In this method, the address of the variable is passed in the function.
Any change inside the funtion is reflected outside the funtion as well. */
#include<iostream>
using namespace std;

void swapit(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 250;
    int y = 300;
    swapit(x,y);
    cout << "X's value: " << x << endl;
    cout << "Y's value: " << y << endl;
    return 0;
}

