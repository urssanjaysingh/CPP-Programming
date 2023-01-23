/* Vector is array like container, 
but unlike array it's size can change dynamically. 
It's not necessary to mention the size of vector while declaring it */

/* 
push_back() -> it adds element at the end, pop_back() -> it deletes the last element
insert() -> inserts new elements before specified position
erase() -> removes the elements from the container from the specified range
swap() -> it swaps the content between vectors
assign() -> it assigns new value to the vector
clear() -> it used to remove all elements 
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>n;

    n.assign(9,1);

    cout << "The contents are: ";
    for(int i=0; i<n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }

    n.push_back(2); //It adds element at the end
    int no = n.size();
    cout << "Last element: " << n[no-1] << endl;

    n.pop_back();   //It deletes the last element
    cout << "Now the contents are: ";
    for(int i=0; i<n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }

    n.insert(n.begin(), 7); 
    cout << "First element is: " << n[0] << endl;
    
n.clear(); 
cout << "Now the size is: " << n.size();
}
