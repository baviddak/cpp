#include <iostream> 
#include <fstream> 
#include <vector> 
#include <algorithm>

using namespace std;

struct Reading {
	int hour; 
	double temperature;
};

bool compare_temp(const Reading& a, const Reading& b) { 
	return a.temperature < b.temperature;
}

double mean_temp(const vector<Reading>& vec) {		// The average temp

	double total = 0;

	for(int i = 0; i < vec.size(); ++i) {
		total += vec[i].temperature;
	}

	return total/static_cast<float>(vec.size());
}

double median_temp(vector<Reading>& vec) {	// The middle temp

	sort(vec.begin(), vec.end(), compare_temp);

	return vec[vec.size() / 2].temperature;
}


void fill_vector(istream& ist, vector<Reading>& vec) { 

	int hour; 
	double temp;

	while(ist >> hour >> temp){ 
		vec.push_back(Reading{hour, temp});
	}

	if(ist.eof()){		// fine: we found the end of file
		cout << "End of file reached\n";
		return;
	}

	cout << "The input stream hit bad() or fail()\n";

}

int main(int argc, char *argv[]) { 

	// Open the file for reading  
	string iname{argv[1]};
	cout << "Calculating the median and mean for " << iname << "\n";
	ifstream ist{iname};

	// Throw an exception if bad() is encountered
	ist.exceptions(ist.exceptions() | ios_base::badbit); 


	// Create and fill the vector
	vector<Reading> temp_vec;
	fill_vector(ist, temp_vec);


	// Print the median and the mean
	cout << "The median is:\t" << median_temp(temp_vec) << "\n";
	cout << "The mean is:\t" << mean_temp(temp_vec) << "\n"; 

	return 0;
}

// An alternative approach would be to do operator over loading for the Reading 
// struct. The operator "<<" would push back. You could also then do operator 
// overloading for the ">>" operator, which would print out the contents of the 
// struct
