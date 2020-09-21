#include <iostream> 
#include <vector>
#include <string>
#include <fstream> 

using namespace std;

void tolower(string& s)
{
	// may have to do a check to make sure it is alpha
	// otherwise do nothing
	for(char& x : s) {
		x = tolower(x);
	}
}

int main(int argc, char *argv[]) { 
	// Write a program that reads a text file and 
	// converts it's input to all lower case, 
	// producing a new text file
	// argv[1] is the input file name 

	// Open the input file 
	string iname {argv[1]};
	ifstream ifs {iname};

	if(!ifs){
		cout << "Error in opening the file\n";
	}

	// Create a vector of lines
	vector<string> lines;
	for (string line; getline(ifs, line);) {
		lines.push_back(line);
	}

	// Do a to lower for each line
	// Bug fixed: Shoud define the temp variables as a string reference, not auto
	for (string& i : lines) {
		tolower(i);
	}

	// Open the output file 
	string oname {"lower.txt"};
	ofstream ofs {oname};

	// Write the vector of lines to the output file
	for (auto line : lines) {
		ofs << line << "\n";
	}
	
	return 0;
}
