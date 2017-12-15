#include "setVisitor.h"

void setVisitor::visitBlank(Blank *){
    cout << ' ';
}
void setVisitor::visitCharacter(Character * pc){
    cout << pc->getChar();
}
void setVisitor::visitWord(Word * pw){
    cout << ' ' << pw->getWord();
}
void setVisitor::visitParagraph(Paragraph * pp){
    cout << "I should never be called";
}
