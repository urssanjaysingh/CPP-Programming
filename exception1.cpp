#include<iostream>
using namespace std;

int main()
{
    int num;
    int denum;
    int output;

    cout << "Please Enter the numbers to do the division " << endl;
    cin >> num;
    cin >> denum;

    try
    {
        if(denum==0)
        {
            throw denum;
        }
        else
        {
            output = num/denum;
        }
    }
    catch(int d)
    {
        cout << "You cannot enter 0 int denominator while doing the division operation! " << endl;
    }
    cout << "The output after the division is: " << output;
    return 0;
}
