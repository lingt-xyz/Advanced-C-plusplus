//
// Created by ling on 03/12/17.
//

#ifndef DESIGN_PATTERN_CHARACTER_H
#define DESIGN_PATTERN_CHARACTER_H

#include <iostream>
#include "Text.h"

using namespace std;

class Character : public Text {

public:
    Character(char c) : c(c) {}

    void set(ostream &os) const
    {
        os << c;
    }

    char getChar() const
    {
        return c;
    }

    size_t size() const
    {
        return 1;
    }

private:
    char c;
};


#endif //DESIGN_PATTERN_CHARACTER_H
