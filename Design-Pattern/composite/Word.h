//
// Created by ling on 03/12/17.
//

#ifndef DESIGN_PATTERN_WORD_H
#define DESIGN_PATTERN_WORD_H

#include <iostream>
#include "Text.h"
//#include "../visitor/Visitor.h"

using namespace std;

class Word : public Text {

public:
    Word(const string &w) : w(w) {}

    void set(ostream &os) const { os << w; }

    string getWord() const { return w; }

    size_t size() const { return w.size(); }

private:
    string w;
};


#endif //DESIGN_PATTERN_WORD_H
