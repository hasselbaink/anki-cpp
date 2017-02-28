#include "writer.h"

Writer::Writer() {
	cout << "Filename(default: words.txt): ";
	getline(cin, filename);
	if (filename.length() == 0)
		filename = "words.txt";
}

Writer::Writer(string filename) {
	this->filename = filename;
}

string Writer::getFileName() {
	return filename;
}

vector<string> Reader::getVector() {
	return lines;
}

void Writer::setFileName(string) {
	this->filename = filename;
}

void Writer::setVector(vector<string> lines) {
	this->lines = lines;
}

void Writer::write() {
	ofstream out(filename);
	if (out.is_open()) {
		for (string line : lines) {
			out << line << endl;
		}
		out.close();
	} else {
		cout << "Unable to open file" << endl;
	}
}

void Writer::write(string line) {
	ofstream out(filename);
	if (out.is_open()) {
		out << line << endl;
		out.close();
	} else {
		cout << "Unable to open file" << endl;
	}
}
