#include <iostream> 
#include <vector>
#include <string>

using namespace std;




int main() { 
	// Write a program ...

	// cin.unsetf(ios::dec);
	// cin.unsetf(ios::oct);
	// cin.unsetf(ios::hex);

	cout << "Please enter in 3 numbers in any notation:\n";
	string a;
	string b;
	string c;

	cin >> a >> b >> c;

	vector<string> my_nums = {a, b, c};


	
	return 0;
}
