//
// Created by ling on 03/12/17.
//

#ifndef DESIGN_PATTERN_TEXT_H
#define DESIGN_PATTERN_TEXT_H

#include <iostream>

//#include "../visitor/Visitor.h"

class Text {

public:
    virtual void set(std::ostream &os) const = 0;

    virtual size_t size() const = 0;

    //virtual void accept(Visitor & v) = 0;
};


#endif //DESIGN_PATTERN_TEXT_H
