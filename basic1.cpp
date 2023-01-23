#include<iostream>
using namespace std;

int main()
{
    //strings are defined as group of characters
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "You have entered: ";
    cout << s << endl;

    //add an element at the end of string
    s.push_back('y');
    cout << "After using push back: " << s << endl;

    //delete the element from the end
    s.pop_back();
    cout << "After using pop back: " << s << endl;

    return 0;
}
