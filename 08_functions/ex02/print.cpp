#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(const string& label, const vector<int>& vec) { 
	for(unsigned i = 0;i < vec.size(); ++i) {
		cout << label << ": " << vec[i] << "\n";
	}
}


int main() { 
	vector<int> vec {12, 23, 21, 3, 1};
	string label = "Label for the number";
	print(label, vec);
	return 0;
}
