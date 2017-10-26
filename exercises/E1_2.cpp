#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
        Enter purchase: 3 apples 4.99
        3 apples at $4.99.
    */
    int quantity;
    string item;
    double amount;
    cout << "Enter purchase: ";
    cin >> quantity >> item >> amount;
    cout << quantity << " " << item << " at $" << amount << ".\n";

    return 0;
}
