#include <iostream> 
#include <vector> 

using namespace std;

double compute_index(const vector<double>& price, const vector<double>& weight) {

	if( weight.size() != price.size() ) {
		cout << "Error, price and weight not same size\n";
		return -1.1;
	}


	double index = 0.0;

	for( int i=0; i < weight.size(); ++i) {
		index += weight[i]*price[i];
	}

	return index;
}


int main() { 
	vector<double> pr {1.2, 4.3, 5.33, 1.1, 3.3};
	vector<double> wt {2.1, 3.4, 3.35, 1.1, 3.3};
	// vector<double> pr {1, 1, 1, 1};
	// vector<double> wt {1, 1, 1, 1};

	double index = compute_index(pr, wt);

	cout << "Index: " << index << "\n";

	return 0;
}
