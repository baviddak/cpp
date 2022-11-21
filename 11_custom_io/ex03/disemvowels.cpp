// Write a program that removes all vowels from a file ("disemvowels").

#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream> 

using namespace std;

void disemvowel(fstream& fs){
	string new_text;

	vector<char> vowels = {'A','a', 'E', 'e', 'I', 'i', 'O', 'o','U', 'u'};

	// construct a string with no vowels
	for(char ch; fs>>ch; ){
		if(*find(vowels.begin(), vowels.end(), ch) == ch) {
			// do nothing
		}else{
			// add to new string
			new_text+=ch;
		} 
	}

	// overwrite what is in the file
	cout << new_text;

}

int main() { 
	
	// open an istream
	cout << "Please ever an input filename\n";
	string iname;
	cin >> iname;
	fstream fs{iname};
	if (!fs){
		cout << "Invalid filename\n";
		return -1;
	}

	// test our function
	disemvowel(fs);
	
	return 0;
}
