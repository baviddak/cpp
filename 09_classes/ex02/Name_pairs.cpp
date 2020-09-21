#include "Name_pairs.h"	

Name_pairs::Name_pairs() {
	// emtpy constructor
	// The vector types already have a default constructor?
}

void Name_pairs::read_names() {
	// Read in the names
	cout << "Enter a name: ";
	for(string temp; cin >> temp; ){
		cout << "Enter a name: ";
		name.push_back(temp);
	}
	cout << "Done reading names\n";
	return;
}

void Name_pairs::read_ages() {

	cout << "Entered read_ages()\n";

	for(int i = 0; i < name.size(); ++i) {
		int temp;
		cout << "Enter an age for " << name[i];
		if (cin >> temp) 
			age.push_back(temp);
	}

}

void Name_pairs::print() const {
	// Print out the name and age pairs
	if (name.size() != age.size()) return;
	cout << "\nName\t\tAge\n";
	for (int i = 0; i < name.size(); ++i) {
		cout << name[i] << "\t\t" << age[i] << "\n";
	}

}
