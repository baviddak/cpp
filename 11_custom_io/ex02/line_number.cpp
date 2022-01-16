#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <fstream> 

using namespace std;

void line_number(istream& ifs, const string& test_word){
	int line_num = 1;
	string line;

	while(getline(ifs, line)){
		stringstream ss(line);

		for(string word; ss>>word;){
			if (test_word.compare(word) == 0){
				cout << "Line: " << line_num << "\n";
			}
		}
		line_num++;
    }

}


int main() { 
	// Write a program that given a file name 
	// and a word, outputs each line that contains 
	// that word together with the line nubmer 
	// Hint: use getline()

	// Usage:
	// ./line_number
	// the use is prompted for the file name 

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
