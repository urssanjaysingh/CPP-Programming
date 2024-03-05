#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int *ptr;

    ptr = new int[size];

    cout << "Enter the elements: " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> ptr[i];
    }

    cout << "Elements are: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << ptr[i] << endl;
    }

    delete[] ptr;

    return 0;
}