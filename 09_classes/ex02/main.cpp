// Design and implement a Name_pairs class holding (name, age) pairs where name 
// is a string and age is a double. Represent that as a vector<string> (called 
// name) and vector<double> (called age) member.

#include "Name_pairs.h"

int main() {
	Name_pairs my_Name_pairs;

	my_Name_pairs.read_names();

	my_Name_pairs.print();

	my_Name_pairs.read_ages();

	my_Name_pairs.print();

	return 0;
}
