// Read five names into a vector<string> name, then prompt the user for the ages
// of the people named and store the ages in a vector<double> age.

// Usage: ./name_age.exe

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// Define the vecors which will store the data
	vector<string>	name;
	vector<int>	age;

	// Read in the names
	for(int i = 0; i < 5; ++i) { 
		string temp;
		cout << "Enter a name: ";
		cin >> temp;
		name.push_back(temp);
	}
	
	// Read in the ages
	for(const string& nm : name){
		int temp;
		cout << "Enter the age of " << nm << ": ";
		cin >> temp;
		age.push_back(temp);
	}

	// Print out the name and age pairs
	cout << "\nName\t\tAge\n";
	for (int i = 0; i < 5; ++i) {
		cout << name[i] << "\t\t" << age[i] << "\n";
	}

	// Sort the name vector
	sort(name.begin(), name.end());

	// Print out the name and age pairs
	cout << "\nName\t\tAge\n";
	for (int i = 0; i < 5; ++i) {
		cout << name[i] << "\t\t" << age[i] << "\n";
	}

	// TODO: Need to some how get the age vector sorted to be consistent with 
	// the name vector. Doesn't seem all that interesting so I think I will 
	// stop here.
	
	return 0;
}
