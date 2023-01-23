/* break statements are used to terminate the execution of the loop */
#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<10; i++)
    {
        if(i==4)
        {
            break; 
        }
        cout << i << " ";
    }
    return 0;
}