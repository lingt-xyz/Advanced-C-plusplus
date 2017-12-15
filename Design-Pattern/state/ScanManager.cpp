#include <iostream>
#include "ScanManager.h"
#include "ScanBlanks.h"
#include "ScanNumber.h"
#include "ScanIdentifier.h"

using namespace std;

ScanManager::ScanManager()
    :
    ps(0),
    psBlanks(new ScanBlanks()),
    psNumber(new ScanNumber()),
    psIdentifier(new ScanIdentifier())
{}

ScanManager::~ScanManager()
{
    delete psBlanks;
    delete psNumber;
    delete psIdentifier;
}

string ScanManager::scan(char *buffer)
{
    string result;
    char *p = buffer;
    while(*p!= '\0')
    {
        if(isspace(*p))
        {
            ps = psBlanks;
        }
        else if(isdigit(*p))
        {
            ps = psNumber;
        }
        else if(isalpha(*p))
        {
            ps = psIdentifier;
        }
        else
        {
            throw "illegal character.";
        }
        string token = ps->scan(p);
        if(token.length() > 0)
        {
            result += "<" + token + ">";
        }
    }
    return result;
}
