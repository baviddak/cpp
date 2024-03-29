// Write a program that reads strings and for each string outputs the character
// classification of each character, as defined by the character classification
// functions presented in 11.6.

#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream> 

using namespace std;

void char_class(string& in_word){

	cout << "The character classifications for " << in_word << " are:\n";

	for(char& ch : in_word){

		if(isspace(ch)){
			cout << ch << " is a space\n";

		}
		if(isalpha(ch)){
			cout << ch << " is a alpha\n";

		}
		if(isdigit(ch)){
			cout << ch << " is a digit\n";

		}
		if(isxdigit(ch)){
			cout << ch << " is a hex digit\n";

		}
		if(isupper(ch)){
			cout << ch << " is a uppercase\n";

		}
		if(isalnum(ch)){
			cout << ch << " is a decimal digit or alpha\n";

		}
		if(iscntrl(ch)){
			cout << ch << " is a control char\n";

		}
		if(ispunct(ch)){
			cout << ch << " is a punctuation\n";

		}
		if(isprint(ch)){
			cout << ch << " is a printable\n";

		}
		cout << "---" << "\n";
	}
}


int main() { 
	// open an istream
	cout << "Please enter a string\n";
	string in_word;
	cin >> in_word;

	// test our function
	char_class(in_word);

	return 0;
}
