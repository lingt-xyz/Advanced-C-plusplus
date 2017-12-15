//
// Created by ling on 04/12/17.
//

#ifndef DESIGN_PATTERN_VISITOR_H
#define DESIGN_PATTERN_VISITOR_H


#include "../composite/Blank.h"
#include "../composite/Character.h"
#include "../composite/Word.h"
#include "../composite/Paragraph.h"

class Visitor {

public:
    virtual void visitBlank(Blank *) = 0;

    virtual void visitCharacter(Character *) =0;

    virtual void visitWord(Word *)=0;

    virtual void visitParagraph(Paragraph *)=0;
};


#endif //DESIGN_PATTERN_VISITOR_H
