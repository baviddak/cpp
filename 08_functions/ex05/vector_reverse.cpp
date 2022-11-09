// Write two functions that reverse the order of elements in a vector<int>... 
// The first reverse function should produce a new vector... The other should 
// reverse the elements of its vector without using any other vectors (hint: 
// swap).

// Usage: ./reverse.exe

#include <iostream> 
#include <vector> 

using namespace std;

void print(const string& label, const vector<int>& vec) {

	for(unsigned i = 0;i < vec.size(); ++i) {
		cout << label << ": " << vec[i] << "\n";
	}
}

void reverse1(const vector<int>& vec, vector<int>& ret_vec) {
	int size = vec.size() - 1;

	for(int i = size; i >= 0; i--) {
		ret_vec.push_back(vec[i]);
	}
}

void reverse2(vector<int>& vec) { 
	int inc = 0;

	if (vec.size() == 0) return;

	while(inc < (vec.size() - (inc + 1))) {
		swap(vec[inc], vec[vec.size() - (1 + inc)]);
		++inc;
	}
}

int main () { 
	string label = "Label";

	vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	vector<int> r;
	
	cout << "Original:\n";
	print(label, v);
	cout << "---" << "\n";

	// Run the first reverse function
	reverse1(v, r);

	cout << "Reverse 1 function:\n";
	print(label, r);
	cout << "---" << "\n";

	// Run the second reverse function
	reverse2(v);

	cout << "Reverse 2 function:\n";
	print(label, v);

	return 0;
}
