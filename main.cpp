#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "game.h"

//void playGame();
//void showCards();

int main (const int argc, const char *argv[]) {
	string choice;

	while (choice != "q" || choice != "quit") {
		if (argc == 1) {
			cout << "What you want do now? (play/show/(q)uit): ";
			getline(cin, choice);
			if (choice == "play") {
				Game *game = new Game;
				game->playGame();
				delete game;
				//playGame();
			} else if (choice == "show") {
				Game *game = new Game;
				game->showCards();
				delete game;
				//showCards();
			} else if (choice == "q" || choice == "quit") {
				break;
			}
		} else if (argc == 2) {
		} else if (argc == 3) {}
	}

	return 0;
}

/*void playGame() {
	Reader *reader = new Reader;
	vector<string> lines = reader->getVector();
	
}

void showCards() {
	Reader *reader = new Reader;
	Parser *parser = new Parser(reader->getVector());
	vector<Card> cards = parser->getCards();
	delete reader;
	delete parser;

	for (int i = 0; i < cards.size(); i++) {
		cout << cards.at(i).getWord1() << "\t\t"
			<< cards.at(i).getWord2() << endl;
	}
}*/
