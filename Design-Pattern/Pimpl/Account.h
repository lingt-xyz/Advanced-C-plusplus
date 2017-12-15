#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account();

    Account(std::string name, long balance = 0);

    Account(const Account &other);

    Account &operator=(const Account &other);

    const std::string getName() const;

    void deposit(long amount);

    void withdraw(long amount);

    void transfer(Account &other, long amount);

    friend std::ostream &operator<<(std::ostream &os, const Account &acc);

private:
    static long idGen;
    long id;
    std::string name;
    long balance;
};

bool operator==(const Account &left, const Account &right);

bool operator!=(const Account &left, const Account &right);

#endif
