#ifndef SCANNUMBER_H
#define SCANNUMBER_H

#include <iostream>
#include "Scanner.h"


class ScanNumber : public Scanner
{
    public:

        std::string scan(char * & p){
            std::string num;
            while(isdigit(*p)){
                num += *p++;
            }
            if(*p == '.'){
                num += *p++;
                while(isdigit(*p)){
                    num += *p++;
                }
            }
            return num;
        }
    protected:
    private:
};

#endif // SCANNUMBER_H
