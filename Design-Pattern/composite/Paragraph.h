//
// Created by ling on 03/12/17.
//

#ifndef DESIGN_PATTERN_PARAGRAPH_H
#define DESIGN_PATTERN_PARAGRAPH_H

#include <iostream>
#include <vector>
#include <sstream>
#include "Text.h"

using namespace std;

class Paragraph : public Text {
public:
    Paragraph(int width) : width(width) {}

    void set(std::ostream &os) const;

    void addElem(Text * e) { elems.push_back(e); }

    size_t size() const {
        ostringstream oss;
        this->set(oss);
        return oss.str().size();
    }

private:
    vector<Text *> elems;
    size_t width;

};


#endif //DESIGN_PATTERN_PARAGRAPH_H
