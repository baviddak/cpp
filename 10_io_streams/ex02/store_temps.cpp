// Write a program that creates a file of data in the form of the temperature 
// Reading type defined in 10.5. 

#include <iostream> 
#include <fstream> 
#include <vector> 
#include <string> 
#include <cstdlib>

using namespace std;

struct Reading { 
	int hour;
	double temperature;
};

void fill_vector(vector<Reading>& vec) {

	for(int i=0; i < 50; ++i) { 
		int tempi	= 0 + (rand() % (23 - 0 + 1));
		float tempf	= (static_cast<float>(tempi) * 1.6);
		Reading tempR {tempi, tempf};
		vec.push_back(tempR);
	}
}

void print_vector(const vector<Reading>& vec) { 
	for(auto i : vec) { 
		cout << "Hour: " << i.hour << " Temp: " << i.temperature << "\n";
	}
}

void output_vector(ostream& ost, const vector<Reading>& vec) { 
	for(auto i : vec) { 
		ost << i.hour << "\t" << i.temperature << "\n";
	}
}


int main() { 

	vector<Reading> out_vec;
	string oname{"raw_temps.txt"};

	ofstream ost {oname};
	if(!ost) {
		cout << "Error opening the file\n";
	}

	cout << "RAND_MAX is " << RAND_MAX << "\n";

	// Fill the Vector
	fill_vector(out_vec);

	// Print the vector
	print_vector(out_vec);

	// Write to the file
	output_vector(ost, out_vec);

	return 0;
}

