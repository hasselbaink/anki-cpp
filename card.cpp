#include "card.h"

Card::Card (string newWord1, string newWord2) {
	word1 = newWord1;
	word2 = newWord2;
}

string Card::getWord1 () {
	return word1;
}

string Card::getWord2 () {
	return word2;
}

void Card::setWord1 (string newWord1) {
	word1 = newWord1;
}

void Card::setWord2 (string newWord2) {
	word2 = newWord2;
}
