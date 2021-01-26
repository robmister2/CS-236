#include <iostream>
#include <vector>
#include "Token.h"
#include "Automaton.h"
using namespace std;

#ifndef UNTITLED_LEXER_H
#define UNTITLED_LEXER_H


class Lexer {
private:
    std::vector<Token*> tokens;
    std::vector<Automaton*> automata;
public:
    Lexer::Lexer() {
        tokens =  vector<Token*>();
        automata =  vector<Automaton*>();
// Add all of the Automaton instances
//automata.push_back(new ColonAutomaton());
//automata.push_back(new ColonDashAutomaton());
    };
// Other needed methods here

};


#endif //UNTITLED_LEXER_H
