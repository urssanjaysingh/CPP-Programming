#include<iostream>
using namespace std;
int main()
{
    int num=70;
    int& n1=num;
    int& n2=num;

    cout << "Value of num is : " << num << endl;
    cout << "Value of reference n1 is : " << n1 << endl;
    cout << "Value of reference n2 is : " << n2 << endl;

    return 0;
}