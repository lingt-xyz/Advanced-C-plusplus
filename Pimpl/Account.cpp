#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include "Account.h"

using namespace std;

long Account::idGen = 0;
Account::Account(): id(++idGen), name(""), balance(0) {}
Account::Account(string name, long balance): id(++idGen), name(name), balance(balance) {}
Account::Account(const Account & other): id(++idGen), name(other.name), balance(other.balance) {}
Account & Account::operator= (const Account & other)
{
    if (this == &other)
        return *this;
    id = ++idGen;
    name = other.name;
    balance = other.balance;
    return *this;
}
const string Account::getName() const
{
    return name;
}
void Account::deposit(long amount)
{
    balance += amount;
}
void Account::withdraw(long amount)
{
    if (amount > balance)
        cerr << "Withdrawal greater than balance.\n";
    else
        balance -= amount;
}
void Account::transfer(Account & other, long amount)
{
    withdraw(amount);
    other.deposit(amount);
}
ostream & operator<<(ostream & os, const Account & acc)
{
    return os <<
           left << setw(8) << acc.name << right <<
           setw(4) << acc.id <<
           fixed << setprecision(2) << setw(8) << acc.balance / 100.0;
}
bool operator==(const Account & left, const Account & right)
{
    return &left == &right;
}
bool operator!=(const Account & left, const Account & right)
{
    return !(left == right);
}
