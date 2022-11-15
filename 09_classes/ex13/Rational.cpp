#include "Rational.h"

Rational::Rational(int nn, int dd)
	: n{nn}, d{dd}
{   
	if(dd <= 0){
		cout << "Error!\n";
	}
}

Rational::~Rational(){
}

double Rational::get_dec(){
	double dbl_num = static_cast<double>(n);
	double dbl_den = static_cast<double>(d);

	return dbl_num/dbl_den;

}

bool operator==(const Rational& a, const Rational& b){
	// not smart enough for lowest common denominator 
	return a.numer()==b.numer() \
		&& a.denom()==b.denom();
}

bool operator!=(const Rational& a, const Rational& b){
	return !(a==b);
}

// implementation of operator= 
Rational& Rational::operator=(const Rational& rr)
{
	// do the copy
	n = rr.numer();
	d = rr.denom();

	// return the existing object so we can chain this operator
	return *this;
}

Rational& Rational::operator+(const Rational& rr){
	int new_num = 0;
	int new_den = 0;

	new_num = (this->numer() * rr.denom()) + (rr.numer() * this->denom());
	new_den = this->denom() * rr.denom();

	n = new_num;
	d = new_den;

	return *this;

}

Rational& Rational::operator-(const Rational& rr){
	int new_num = 0;
	int new_den = 0;

	new_num = (this->numer() * rr.denom()) - (rr.numer() * this->denom());
	new_den = this->denom() * rr.denom();

	n = new_num;
	d = new_den;

	return *this;
	
}

Rational& Rational::operator*(const Rational& rr){
	int new_num = 0;
	int new_den = 0;

	new_num = this->numer() * rr.numer();
	new_den = this->denom() * rr.denom();

	n = new_num;
	d = new_den;

	return *this;
	
}

