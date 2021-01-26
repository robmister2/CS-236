#include <string>
using namespace std;
#ifndef UNTITLED_TOKEN_H
#define UNTITLED_TOKEN_H


enum TokenType{COMMA, PERIOD, Q_MARK, LEFT_PAREN, RIGHT_PAREN, COLON, COLON_DASH, MULTIPLY, ADD, SCHEMA, FACTS, RULES, QUERIES, ID, STRING, COMMENT, UNDEFINED, END};
//enum stringToken{schemes, facts, rules, queries, };

class Token {
private:
    TokenType token;
    string input;
    int line;
public:
    Token::Token();
    Token::Token(TokenType tok, string name, int lineNum  ){
        token = tok;
        input = name;
        line = lineNum;
    }




};


#endif //UNTITLED_TOKEN_H
