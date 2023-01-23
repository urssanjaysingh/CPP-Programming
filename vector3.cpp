/* size() -> it returns number of elements in the vector 
    max_size() -> it returns size of vector 
    resize() -> it changes the size 
    capacity -> returns size of allocated storage capacity 
    empty() -> it test whether the vector is empty */


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    cout << "Vector size: " << v.size() << endl;
    cout << "Capacity of vector is: " << v.capacity() << endl;

    cout << "Maximum size of vector is: " << v.max_size() << endl;

    v.resize(5);
    cout << "Vector size after resizing is: " << v.size() << endl;

    if(v.empty()==false)
    {
        cout << "Vector is not empty" << endl;
    }
    else
    {
        cout << "Vector is empty";
    }
    return 0;
}
