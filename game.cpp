#include "game.h"

Game::Game() {
	this->username = "User";
	this->points = 0;
	this->cards = cards;
	this->filename = "";
	this->needFileName = true;
	init();
}

Game::Game(string filename) {
	this->username = "User";
	this->points = 0;
	this->cards = cards;
	this->filename = filename;
	this->needFileName = false;
	init();
}

Game::Game(vector<Card> cards) {
	this->username = "User";
	this->points = 0;
	this->cards = cards;
	this->filename = "";
	this->needFileName = false;
}

Game::Game(string username, vector<Card> cards) {
	this->username = username;
	this->points = 0;
	this->cards = cards;
	this->filename = "";
	this->needFileName = false;
}

Game::Game(float points, vector<Card> cards) {
	this->username = "User";
	this->points = points;
	this->cards = cards;
	this->filename = "";
	this->needFileName = false;
}

Game::Game(vector<Card> cards, string filename) {
	this->username = "User";
	this->points = 0;
	this->cards = cards;
	this->filename = filename;
	this->needFileName = false;
}

Game::Game(string username, float points, vector<Card> cards) {
	this->username = username;
	this->points = points;
	this->cards = cards;
	this->filename = "";
	this->needFileName = false;
}

Game::Game(string username, float points, 
		vector<Card> cards, string filename) {
	this->username = username;
	this->points = points;
	this->cards = cards;
	this->filename = filename;
	this->needFileName = false;
}

string Game::getUsername() {
	return username;
}

float Game::getPoints() {
	return points;
}

vector<Card> Game::getCards() {
	return cards;
}

string Game::getFileName() {
	return filename;
}

void Game::setUsername(string username) {
	this->username = username;
}

void Game::setPoints(float points) {
	this->points = points;
}

void Game::setCards(vector<Card> cards) {
	this->cards = cards;
}

void Game::setFileName(string filename) {
	this->filename = filename;
}

void Game::addPoint(float howMany) {
	this->points += howMany;
}

void Game::deductPoint(float howMany) {
	this->points -= howMany;
}

void Game::playGame() {
	if (needFileName) {
                Reader *reader = new Reader;
                filename = reader->getFileName();
                this->needFileName = false;
                delete reader;
        }
        string translate;
	bool quit = false;
        while (!quit) {
		std::srand(unsigned(std::time(0)));
                Card card = cards.at((std::rand() % cards.size()));
                while (true) {
                        cout << card.getWord1() << "\t\t\t: ";
                        getline(cin, translate);
                        if (translate == card.getWord2()) {
				cout << "+1!" << endl;
				addPoint(1);
                                break;
			} else if (translate != "q"
				|| translate != "quit") {
				quit = true;
				break;
			} else {
				cout << "-1.5!" << endl;
				deductPoint(1.5);
			}
                }
        }
}

void Game::showCards() {
	if (needFileName) {
		Reader *reader = new Reader;
		filename = reader->getFileName();
		this->needFileName = false;
		delete reader;
	}
	for (int i = 0; i < cards.size(); i++) {
		cout << cards.at(i).getWord1() << "\t\t"
			<< cards.at(i).getWord2() << endl;
	}
}

void Game::init() {
	Reader *reader;
	if (needFileName) {
		reader = new Reader;
		needFileName = false;
	} else {
		reader = new Reader(filename);
	}
	Parser *parser = new Parser(reader->getVector());
	filename = reader->getFileName();
	cards = parser->getCards();

	delete reader;
	delete parser;
}
