// Create a vector of Fibonacci numbers and print them using the function from 
// exercise 2.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(const string& label, const vector<int>& vec) { 
	for(unsigned i = 0;i < vec.size(); ++i) {
		cout << label << ": " << vec[i] << "\n";
	}
}

void fibonacci(int x, int y, vector<int>& vec, unsigned int n) { 
	vec.clear();
	vec.push_back(x);
	vec.push_back(y);
	for (unsigned i = 2; i < n; ++i) { 
		int temp = vec[i - 1] + vec[i - 2];
		vec.push_back(temp);
	}
}

int main() {

	string label = "Label for the number";
	vector<int> vec;
	int x = 1;
	int y = 2;
	int size = 20;

	fibonacci(x, y, vec, size);
	print(label, vec);
	return 0;
}
