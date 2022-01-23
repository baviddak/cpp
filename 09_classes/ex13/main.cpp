#include "Rational.h"

int main() {
	// do something
	// implement rationals
	// Provide assignment, addition, subtraction, 
	// multiplication, division and equality operators

	Rational aa{34, 3};
	Rational bb{22, 11};
	// Rational hh{}
	Rational cc = aa;

	bool test = cc==bb;

	Rational dd = aa + bb;
	Rational ee = aa - bb;

	cout << "Is c an a same? " << test << "\n";
	cout << "a plus b is " << dd.denom() << "\n";
	cout << "b minus a is " << ee.numer() << "\n";

	return 0;


}
