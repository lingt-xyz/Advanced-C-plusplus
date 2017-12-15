#ifndef SCANNER_H
#define SCANNER_H

#include <iostream>

class Scanner
{
    public:
        Scanner();
        virtual ~Scanner();
        virtual std::string scan(char * & p) = 0;
    protected:
    private:
};

#endif // SCANNER_H
