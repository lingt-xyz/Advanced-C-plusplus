#include "capVisitor.h"

void capVisitor::visitBlank(Blank *){
    cout << ' ';
}
void capVisitor::visitCharacter(Character * pc){
    char ch = pc->getChar();
    cout << toupper(ch);
}
void capVisitor::visitWord(Word * pw){
    string word = pw->getWord();
    for(string::iterator it = word.begin(); it!= word.end(); ++it){
        *it = toupper(*it);
    }
    cout << ' ' << word;
}
void capVisitor::visitParagraph(Paragraph * pp){
    cout << "I should never be called";
}
