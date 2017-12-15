#ifndef SETVISITOR_H
#define SETVISITOR_H

#include "Visitor.h"
#include "../composite/Blank.h"
#include "../composite/Character.h"
#include "../composite/Word.h"
#include "../composite/Paragraph.h"


class setVisitor : public Visitor
{
    public:
        void visitBlank(Blank *);
        void visitCharacter(Character * pc);
        void visitWord(Word *);
        void visitParagraph(Paragraph *);
    protected:
    private:
};

#endif // SETVISITOR_H
