#include<iostream>
using namespace std;

void swap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int x=12;
    int y=17;

    cout << "Before swapping value of x is : " << x << endl;
    cout << "Before swapping value of y is : " << y << endl;

    swap(x,y);

    cout << "After swapping value of x is : " << x << endl;
    cout << "After swapping value of y is : " << y << endl;

    return 0;
}
