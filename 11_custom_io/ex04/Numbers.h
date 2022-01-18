#include <string>
#include <iostream>

using namespace std;

enum Notation { Octal, Hexadecimal, Decimal };

class Numbers {
	public:
		Numbers(const string& in_str);
		~Numbers();

        string& getBase();
        int getValue();

	private:
		int value;
		Notation base;

};