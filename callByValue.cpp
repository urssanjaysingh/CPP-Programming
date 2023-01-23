/* In call by value method, the copies of original values
are passed directly to the funtion. 
Changes done to the parameters inside the function do not
affect the arguments */
#include<iostream>
using namespace std;

void swapit(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 120;
    int y = 150;
    swapit(x,y);
    cout << "X's value: " << x << endl;
    cout << "Y's value: " << y << endl;
    return 0;
}
