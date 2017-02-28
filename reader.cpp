#include "reader.h"

Reader::Reader() {
	cout << "Filename(default: words.txt): ";
	getline(cin, filename);
	if (filename.length() == 0)
		filename = "words.txt";
}

Reader::Reader(string filename) {
	this->filename = filename;
}

string Reader::getFileName() {
	return filename;
}

vector<string> Reader::getVector() {
	return lines;
}

void Reader::setFileName(string filename) {
	this->filename = filename;
}

void Reader::setVector(vector<string> lines) {
	this->lines = lines;
}

void Reader::read() {
	ifstream in(filename.c_str());
	if (in.is_open()) {
		string line;
		int pos = 0;
		while (getline(in, line)) {
			if ((pos = line.find("_")) != string::npos) {
				lines.push_back(line.substr(0, pos));
				lines.push_back(line.substr((pos+1), line.length()));
			}
		}
		in.close();
	} else {
		cout << "Unable to open file" << endl;
	}
}
