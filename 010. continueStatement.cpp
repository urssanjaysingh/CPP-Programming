/* The continue statement is used to terminate the current iteration
and not the complete loop */
#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        if(i==4)
        {
            continue; //skips this iteration
        }
        cout << i << " ";
    }
    return 0;
}