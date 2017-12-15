//
// Created by ling on 03/12/17.
//

#ifndef DESIGN_PATTERN_BLANK_H
#define DESIGN_PATTERN_BLANK_H

#include <iostream>
#include "Text.h"

using namespace std;

class Blank : public Text {

public:
    Blank() {}

    void set(ostream &os) const { os << ' '; }

    size_t size() const { return 1; }

    //void accept(Visitor & v);
};


#endif //DESIGN_PATTERN_BLANK_H
