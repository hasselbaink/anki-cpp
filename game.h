#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "reader.h"
#include "parser.h"
#include "card.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Game {
	private:
		string 		username;
		float 		points;
		vector<Card> 	cards;
		string 		filename;
		bool		needFileName;
	public:
		Game		();
		Game		(string);
		Game		(vector<Card>);
		Game		(string, vector<Card>);
		Game		(float, vector<Card>);
		Game		(vector<Card>, string);
		Game		(string, float, vector<Card>);
		Game		(string, float, vector<Card>, string);

		string 		getUsername();
		float 		getPoints();
		vector<Card> 	getCards();
		string		getFileName();

		void 		setUsername(string);
		void 		setPoints(float);
		void 		setCards(vector<Card>);
		void		setFileName(string);

		void 		addPoint(float);
		void		deductPoint(float);
		void 		playGame();
		void 		showCards();

		void 		init();
};

#endif
