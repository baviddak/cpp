#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <fstream> 

using namespace std;

int main() { 
	// Write a program that removes all vowels
    // from a file

	// Usage:
	// open an istream
	cout << "Please ever an input filename\n";
	string iname;
	cin >> iname;
	ifstream ifs{iname};
	if (!ifs){
		cout << "Invalid filename\n";
		return -1;
	}


	// get a word from the user
	cout << "Please ever word to check\n";
	string in_word;
	cin >> in_word;

	line_number(ifs, in_word);

	
	return 0;
}
