#include "player.h"

Player::Player() {
	this->username = "User";
	this->points = 0;
}

Player::Player(string username) {
	this->username = username;
	this->points = 0;
}

Player::Player(string username, float points) {
	this->username = username;
	this->points = points;
	saveData();
}

string Player::getUserName() {
	return username;
}

float Player::getPoints() {
	return points;
}

void Player::setUserName(string username) {
	this->username = username;
}

void Player::setPoints(float points) {
	this->points = points;
}

string Player::checkUserInfo() {
	Reader *reader = new Reader("userinfo.txt");
	Parser *parser = new Parser(reader->getVector());
	username = parser->getCards().at(0).getWord1();
	point = std::atof(parser->getCards().at(0).getWord2().c_str());
	delete reader;
	delete parser;
	return "Hello, " + username + ".";
}

string Player::checkUserInfo(string filename) {
	Reader *reader = new Reader(filename);
	Parser *parser = new Parser(reader->getVector());
	username = parser->getCards().at(0).getWord1();
	point = std::atof(parser->getCards().at(0).getWord2().c_str());
	delete reader;
	delete parser;
	return "Hello, " + username + ".";
}

string Player::saveUserInfo() {
	Writer *writer = new Writer;
	Parser *parser = new Parser(writer->getVector());
	username	
}

string Player::saveUserInfo(string filename) {

}
