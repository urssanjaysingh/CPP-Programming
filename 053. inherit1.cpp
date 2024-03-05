/* Multiple Inheritance */
#include<iostream>
using namespace std;

class party
{
    public:
    int meals;

    void food()
    {
        cout << "Enter numbers of meals: ";
        cin >> meals;
    }
};

class Drinks
{
    public:
    int drink;

    void Liquor()
    {
        cout << "Enter the number of drinks: ";
        cin >> drink;
    }
};

class Bill : public party, public Drinks
{
    int total_meals;
    int total_drinks;
    int total_bill;

    public:
    void total()
    {
        total_meals = meals*90;
        total_drinks = drink*60;

        total_bill = total_meals + total_drinks;
        cout << "Total bill for the party is: " << total_bill;
    }
};

int main()
{
    Bill b;
    b.food();
    b.Liquor();
    b.total();
    return 0;
}
