#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;

class Player {
		//Type		Name		Params
	private:
		string		username;
		float		points;
	public:
		Player				();
		Player				(string);
		Player				(string, float);

		string 		getUserName	();
		float 		getPoints	();

		void		setUserName	(string);
		void		setPoints	(float);

		string		checkUserInfo	();
		string		checkUserInfo	(string);
		string		saveUserInfo	();
		string		saveUserInfo	(string);
};

#endif
