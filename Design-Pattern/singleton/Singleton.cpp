#include <iostream>
#include "Singleton.h"

using namespace std;

int globalUID = 77;

// Inaccessible pointer to the unique instance
Singleton *Singleton::pInstance = 0;

// Private constructor
Singleton::Singleton() {
    uid = globalUID++;
}


// Public member function allows user to create the unique instance.
Singleton &Singleton::instance() {
    if (!pInstance) {
        pInstance = new Singleton;
    }
    return *pInstance;
}

void Singleton::fun() {
    cout << "I am Singleton " << uid << endl;
}
