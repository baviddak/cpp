#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <iostream>

using namespace std;

class Rational {
    public:
        Rational(int nn, int dd);
        ~Rational();

        // Copy constructor
	    Rational(const Rational& copy)
		: n {copy.numer()}, d {copy.denom()}
        {
            // no need to check for a denominator of 0 here since copy must already be a valid Fraction
            cout << "Copy constructor called\n"; // just to prove it works
        }
        
        // Overloaded assignment
        Rational& operator= (const Rational& rr);

        // arithemic operators
        Rational& operator+(const Rational& rr);
        Rational& operator-(const Rational& rr);
        Rational& operator*(const Rational& rr);

        int numer() const{return n;};
        int denom() const{return d;};

        double get_dec();
    private:
        int n;
        int d;
};

bool operator==(const Rational& a, const Rational& b);
bool operator!=(const Rational& a, const Rational& b);




#endif // RATIONAL_H_