#include <iostream> 
#include <fstream>
#include <vector> 
#include <string>

using namespace std;

void print_sum(const vector<int> vec) { 

	int sum {0};

	for(auto i: vec) { 
		sum += i;
	}

	cout << "The sum is: " << sum << "\n";

	// do something
}

void fill_vector(istream& ist, vector<int>& vec, char terminator) {
	for(int i; ist >> i; ) {
		vec.push_back(i);
	}

	if(ist.eof()) return;	// fine, we hit the end of file

	// not not good() and not bad() and not eof(), must be fail() 
	ist.clear();		// clear stream state

	char c;
	ist >> c;		// read a character, hopefully a terminator

	if(c != terminator) {	// ouch, not the terminator, so we must fail
		ist.unget();	// maybe my caller can use that character 
		ist.clear(ios_base::failbit);	// manually set the state to fail()
	}

}

int main() {

	// Get the input filename 
	cout << "Please enter a filename: ";
	string iname;
	cin >> iname;

	// Define the input file stream, make it throw if it goes bad
	ifstream ist{iname};
	ist.exceptions(ist.exceptions() | ios_base::badbit);

	// Define the vector to store all of the values 
	vector<int> input_vec;

	// Fill in the vector
	fill_vector(ist, input_vec, '*');

	// Print the sum
	print_sum(input_vec);

	return 0;
}
