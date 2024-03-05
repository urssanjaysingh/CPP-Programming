/* Enum or enumeration is a user defined datatype in which set of values 
are specified for a variable
and the variable can take out one value
from the set of values */

#include<iostream>
using namespace std;

enum captain{Avi, Sid, Robby, Sami, Jack};

int main()
{
    captain cap=Avi;
    
    if(cap==Avi)
    {
        cout << "Avi is our captain and it's value is: " << Avi << endl;
    }
    else
    {
        cout << "He is not our captain";
    }
    return 0;
}
