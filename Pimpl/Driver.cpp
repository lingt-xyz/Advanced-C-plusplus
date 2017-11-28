#include <iostream>
#include "Account.h"

using namespace std;

Account cbv(Account val)
{
    val.withdraw(2000);
    cout << val << endl;
    return val;
}
void cbr(Account & val)
{
    val.withdraw(2000);
    cout << val << endl;
}

int main()
{
    Account acc("Fred", 10000);
    cout << acc << endl;
    acc.deposit(2000);
    cout << acc << endl;
    acc.withdraw(3000);
    cout << acc << endl;
    cout << "Assign\n";
    Account cop = acc;
    cout << "CBV\n";
    cbv(acc);
    cout << "CBR\n";
    cbr(cop);
    return 0;
}
