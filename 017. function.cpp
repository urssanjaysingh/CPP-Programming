/* Functions are basically blocks of code that are designed 
to perform a specific task */
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int s;
    s = sum(5, 5);
    cout << "The result is: " << s << endl;
    return 0;
}
