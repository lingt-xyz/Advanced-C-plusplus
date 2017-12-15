#include <iostream>
#include "Pimpl/Account.h"
#include "singleton/Singleton.h"
#include "state/ScanManager.h"

using namespace std;

Account cbv(Account val) {
    val.withdraw(2000);
    cout << val << endl;
    return val;
}

void cbr(Account &val) {
    val.withdraw(2000);
    cout << val << endl;
}

void pimpl() {
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
}

void f(Singleton &s) {
    cout << "Inside f: ";
    s.fun();
}

void singleton() {
    Singleton::instance().fun();
    Singleton::instance().fun();
    Singleton::instance().fun();

    // A singleton can be passed by reference.
    f(Singleton::instance());

    // The following lines are illegal.
    // Singleton s1;
    // Singleton s2 = Singleton::instance();
}

void state(){
    ScanManager sm;
    char *test = "123 456 Pirate456\t789 anotherID";
    try{
        cout << "Scan succeeded: " << sm.scan(test).c_str() << endl;
    }catch(const char * error){
        cerr << "Scan failed: " << error << endl;
    }
}
int main() {
    // pimpl();
    // singleton();
    state();
    return 0;
}
