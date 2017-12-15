#ifndef SCANMANAGER_H
#define SCANMANAGER_H

#include <iostream>
#include "Scanner.h"

class ScanManager
{
    public:
        ScanManager();
        ~ScanManager();
        std::string scan(char *buffer);
    protected:
    private:
        Scanner *ps;
        Scanner *psBlanks;
        Scanner *psNumber;
        Scanner *psIdentifier;
};

#endif // SCANMANAGER_H
