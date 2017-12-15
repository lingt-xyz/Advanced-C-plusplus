#ifndef CAPVISITOR_H
#define CAPVISITOR_H

#include "Visitor.h"


class capVisitor : public Visitor
{
    public:
        void visitBlank(Blank *);
        void visitCharacter(Character * pc);
        void visitWord(Word *);
        void visitParagraph(Paragraph *);
    protected:
    private:
};

#endif // CAPVISITOR_H
