/* Private members can only be accessed from within the class.
Public members can be accessed within as well as outside the class.
Protected members can be accessed within the class,
    and outside the class with the help of friend function.*/

#include<iostream>
using namespace std;

class Billboard
{
    private:
    string title;

    public:
    void setTitle(string x)
    {
        title = x;
    }
    string getTitle()
    {
        return title;
    }
};

int main()
{
    Billboard bill;
    bill.setTitle("Top 5 songs of 2022");
    cout << bill.getTitle();
    return 0;
}
