// Design and implement a rational number class, Rational. A rational number has
// two parts: a numerator and a denominator, for example, 5/6.

#include "Rational.h"

int main() {

	// create some examples
	Rational aa{34, 3};
	Rational bb{22, 11};
	Rational cc = aa;
	Rational ff{1, 3};

	bool test = cc==bb;

	Rational dd = aa + bb;
	Rational ee = aa - bb;
	ff = cc * dd;

	cout << "Is c an a same? " << test << "\n";
	cout << "a plus b is " << dd.denom() << "\n";
	cout << "b minus a is " << ee.numer() << "\n";

	return 0;


}
