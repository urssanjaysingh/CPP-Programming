/* Array is a collection of data items having similar data types
stored in contiguous memory locations */
#include<iostream>
using namespace std;

int main()
{
    int coupon[6] = {5, 8, 7, 3, 9, 1};
    for(int i=0; i<6; i++)
    {
        cout << coupon[i] << endl;
    }
    return 0;
}
