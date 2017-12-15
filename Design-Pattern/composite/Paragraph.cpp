//
// Created by ling on 03/12/17.
//

#include "Paragraph.h"
#include "Blank.h"
#include "../visitor/Visitor.h"

void Paragraph::set(std::ostream &os) const {
    Blank b;
    ostringstream oss;
    for (vector<Text *>::const_iterator it = elems.begin(); it != elems.end(); ++it) {
        if (size_t(oss.tellp()) + 1 + (*it)->size() > width) {
            while (size_t(oss.tellp()) < width) {
                b.set(oss);
            }
            oss << oss.str() << endl;
            oss.str("");
            oss.clear();
        }
        if (size_t(oss.tellp()) > 0) {
            b.set(oss);
        }
        (*it)->set(oss);
    }
    os << oss.str() << endl;
}

//void Paragraph::accept(Visitor & v){
 //   for(vector<Text *>::iterator it = elems.begin(); it != elems.end(); ++it){
  //      (*it)->accept(this);
  //  }
//}
