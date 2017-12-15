#ifndef SCANBLANKS_H
#define SCANBLANKS_H

#include <iostream>
#include <Scanner.h>

class ScanBlanks : public Scanner
{
    public:

        std::string scan(char * & p){
            while(isspace(*p)){
                p++;
            }
            return std::string();
        }
    protected:
    private:
};

#endif // SCANBLANKS_H
