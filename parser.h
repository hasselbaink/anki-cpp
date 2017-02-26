#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>
#include <vector>
#include "card.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Parser {
	private:
		vector<string> lines;
		vector<Card> cards;
	public:
		Parser(vector<string>);
		vector<string> getVector();
		vector<Card> getCards();
		//void eraseCards();
};

#endif
