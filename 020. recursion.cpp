/* A fuction calling itself again and again until a certain
condition is met is known as recursion */
#include<iostream>
using namespace std;

int sum(int num)
{
    if(num!=0)
    {
        return num+sum(num-1);
    }
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Sum is : " << sum(num);
    return 0;
}
