#ifndef SCANIDENTIFIER_H
#define SCANIDENTIFIER_H

#include <iostream>
#include <Scanner.h>

class ScanIdentifier : public Scanner
{
    public:

        std::string scan(char * & p){
            std::string id(1, *p++);
            while(isalpha(*p) || isdigit(*p)){
                id += *p++;
            }
            return id;
        }
    protected:
    private:
};

#endif // SCANIDENTIFIER_H
