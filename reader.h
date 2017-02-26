#ifndef READER_H
#define READER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

class Reader {
	private:
		string filename;
		vector<string> lines;
	public:
		Reader();
		Reader(string);
		string getFileName();
		vector<string> getVector();
		void init();
};

#endif
