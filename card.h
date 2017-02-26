#ifndef CARD_H
#define CARD_H

#include <string>

using std::string;

class Card {
	private:
		string word1;
		string word2;
	public:
		Card (string, string);
		string getWord1 ();
		string getWord2 ();
		void setWord1 (string);
		void setWord2 (string);
};

#endif
