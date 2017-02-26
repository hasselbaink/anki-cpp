#include "parser.h"

Parser::Parser(vector<string> lines) {
	this->lines = lines;
	if ((lines.size() % 2) == 0) {
		//cards.resize(lines.size() / 2);
		int j = 0;
		for (int i = 0; i < lines.size()/2; i++) {
			Card *card = new Card(lines.at(j), lines.at(j+1));
			//cards.at(i) = new Card(lines.at(j), lines.at(j+1));
			cards.push_back(*card);
			delete card;
			j+=2;
		}
	} else {
		cout << "Unknown error" << endl;
	}
}

vector<string> Parser::getVector() {
	return lines;
}

vector<Card> Parser::getCards() {
	return cards;
}

/*void Parser::eraseCards() {
	delete cards;	
}*/
