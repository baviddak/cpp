#ifndef NAME_PAIRS_H_
#define NAME_PAIRS_H_

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Name_pairs { 
	public: 
		// default constructor
		Name_pairs();

		// modifying operations
		void read_names();
		void read_ages();	// this can only be run if the names is populated

		// non-modifying operations
		void print() const;

	private: 
		vector<string>	name;
		vector<int>	age;
};

#endif // NAME_PAIRS_H_
