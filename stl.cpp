/* STL stands for standard template library. 
It is a set of template classes that provides many basic algorithms or containers */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=1; i<=10; i++)
    {
        v.push_back(i);
    }
    cout << "Size: " << v.size();

    v.resize(7);
    cout << "\nAfter resizing it becomes: " << v.size();

    if(v.empty()==false)
    {
        cout << "\nNot empty";
    }
    else
    {
        cout << "\nIt is empty";
    }
    cout << "\nElements of vector: ";
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
