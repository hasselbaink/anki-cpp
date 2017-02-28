#ifndef WRITER_H
#define WRITER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ofstream;

class Writer {
	private:
		string		filename;
		vector<string>	lines;
	public:
		Writer				();
		Writer				(string);

		string		getFileName	();
		vector<string>	getVector	();
		void		setFileName	(string);
		void		setVector	(vector<string>);

		void		write		();
		void		write		(string);
};

#endif
